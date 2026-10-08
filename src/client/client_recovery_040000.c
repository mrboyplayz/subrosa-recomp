#include "shared_client.h"
/* 0x1400403F0 is not a routine of its own: it is a patch block that 0x14003B920 jumps to and back from,
   written over the start of a small routine nothing calls. src/engine/frame.c has it as part of game_frame. */

//----- (0000000140040490) ----------------------------------------------------
__int64 sub_140040490()
{
  unsigned int *v0; // r9
  __int64 v1; // r11
  unsigned int v2; // ebp
  __int64 v3; // rbx
  unsigned int *v4; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  __m128i v7; // xmm0
  _DWORD *v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r10
  unsigned int *v14; // r8
  unsigned int *v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int *v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  unsigned int v26; // xmm2_4
  unsigned int v27; // xmm3_4
  unsigned int v28; // xmm4_4
  unsigned int v29; // xmm5_4
  unsigned int v30; // xmm6_4
  unsigned int v31; // xmm7_4
  unsigned int v32; // xmm8_4
  unsigned int v33; // xmm9_4
  unsigned int v34; // xmm10_4
  unsigned int v35; // xmm11_4
  unsigned int *v36; // rax
  __int64 v37; // r8
  unsigned int *v38; // rdi
  signed int v39; // eax
  __int64 v40; // r9
  unsigned int *v41; // r8
  float v42; // xmm1_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  double v45; // xmm9_8
  unsigned int v46; // ebx
  double v47; // xmm6_8
  __int64 v48; // r15
  unsigned int *v49; // r13
  __int64 v50; // rbp
  __int64 v51; // rcx
  unsigned __int64 v52; // rdi
  char *v53; // r14
  char *v54; // r8
  unsigned int v55; // eax
  unsigned __int64 v56; // rdx
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  float *v61; // rbx
  float v62; // xmm2_4
  unsigned __int64 v63; // rcx
  float v64; // xmm4_4
  float v65; // xmm5_4
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // r15
  __int64 v69; // r12
  __int64 v70; // r9
  unsigned int *v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // r12
  __int64 v74; // r8
  __int64 v75; // rbx
  float *v76; // r14
  __int64 v77; // rbp
  char *v78; // r13
  __int64 v79; // r15
  bool v80; // zf
  float *v81; // rdx
  __int64 v82; // rcx
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm5_4
  __int64 v86; // rdx
  __int64 v87; // r8
  float *v88; // rcx
  unsigned int *v89; // rcx
  __int64 v90; // rdx
  unsigned int *v91; // r14
  __int64 v92; // r15
  float *v93; // rdi
  float *v94; // rbx
  __int64 v95; // r13
  unsigned int v96; // eax
  __int64 v97; // rcx
  float v98; // xmm4_4
  float v99; // xmm2_4
  float v100; // xmm5_4
  float *v101; // rcx
  float *v102; // rcx
  __int64 result; // rax
  __int64 v104; // rcx
  double v105; // xmm0_8
  double v106; // xmm0_8
  double v107; // xmm0_8
  double v108; // xmm0_8
  double v109; // xmm0_8
  double v110; // xmm0_8
  double v111; // xmm0_8
  double v112; // xmm0_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140040490[256];
#define v113 (*(__int64 (*))(void *)(sr_frame_140040490 + 0)) /* [rsp+20h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140040490 + 8)) /* [rsp+28h] */
#define v115 (*(char * (*))(void *)(sr_frame_140040490 + 16)) /* [rsp+30h] */
#define v116 (*(char * (*))(void *)(sr_frame_140040490 + 24)) /* [rsp+38h] */
#define v117 (*(int (*))(void *)(sr_frame_140040490 + 224)) /* [rsp+100h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_140040490 + 232)) /* [rsp+108h] */
#define v119 (*(__int64 (*))(void *)(sr_frame_140040490 + 240)) /* [rsp+110h] */
#define v120 (*(__int64 (*))(void *)(sr_frame_140040490 + 240)) /* [rsp+110h] */
#define v121 (*(__int64 (*))(void *)(sr_frame_140040490 + 248)) /* [rsp+118h] */

  v0 = &dword_140404A6C[280651457];
  v1 = dword_140404A6C[283831474] & 0x3F;
  v2 = dword_140404A6C[421846192] & 0x3F;
  v3 = 256;
  dword_140404A6C[421846192] = dword_140404A6C[283831474] & 0x3F;
  v4 = &dword_140404A6C[140832 * v1 + 421846211];
  dword_140404A6C[421846193] = dword_140404A6C[283831474];
  do
  {
    v5 = *(v0 - 154);
    *(v4 - 16) = v5;
    if ( v5 )
    {
      v6 = v4 + 30;
      v7 = _mm_cvtsi32_si128(*(v0 - 123));
      v8 = v0 + 119;
      *(v4 - 15) = *(v0 - 116);
      v9 = 3;
      *(v4 - 14) = *(v0 - 115);
      *(v4 - 13) = *(v0 - 100);
      *(v4 - 11) = *(v0 - 92);
      *(v4 - 10) = *(v0 - 91);
      v10 = *(v0 - 17);
      *(v4 - 9) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), u32)[0];
      *(v4 - 8) = v10;
      *(v4 - 7) = *(v0 - 16);
      *(v4 - 6) = *(v0 - 15);
      *(v4 - 5) = *(v0 - 5);
      *(v4 - 4) = *(v0 - 4);
      *(v4 - 3) = *(v0 - 3);
      *(v4 - 2) = *(v0 - 2);
      *(v4 - 1) = *(v0 - 1);
      *v4 = *v0;
      v4[1] = v0[1];
      v4[2] = v0[2];
      v4[3] = v0[3];
      do
      {
        *(v6 - 5) = *(v8 - 5);
        *(v6 - 4) = *(v8 - 4);
        *(v6 - 3) = *(v8 - 3);
        *(v6 - 2) = *(v8 - 2);
        *(v6 - 1) = *(v8 - 1);
        *v6 = *v8;
        v6[1] = v8[1];
        v6[2] = v8[2];
        v6[3] = v8[3];
        v6[16] = v8[73];
        v6[17] = v8[74];
        v6[18] = v8[75];
        v6[19] = v8[76];
        v6[20] = v8[77];
        v6[21] = v8[78];
        v6[22] = v8[79];
        v6[23] = v8[80];
        v6[24] = v8[81];
        v6[37] = v8[151];
        v6[38] = v8[152];
        v6[39] = v8[153];
        v6[40] = v8[154];
        v6[41] = v8[155];
        v6[42] = v8[156];
        v6[43] = v8[157];
        v6[44] = v8[158];
        v6[45] = v8[159];
        v6[58] = v8[229];
        v6[59] = v8[230];
        v6[60] = v8[231];
        v6[61] = v8[232];
        v6[62] = v8[233];
        v6[63] = v8[234];
        v6[64] = v8[235];
        v6[65] = v8[236];
        v6[66] = v8[237];
        v6[79] = v8[307];
        v6[80] = v8[308];
        v6[81] = v8[309];
        v6[82] = v8[310];
        v6[83] = v8[311];
        v6 += 105;
        v11 = v8[312];
        v8 += 390;
        *(v6 - 21) = v11;
        *(v6 - 20) = *(v8 - 77);
        *(v6 - 19) = *(v8 - 76);
        *(v6 - 18) = *(v8 - 75);
        --v9;
      }
      while ( v9 );
    }
    v4 += 344;
    v0 += 7166;
    --v3;
  }
  while ( v3 );
  v12 = 0;
  v13 = 0;
  v14 = &dword_140404A6C[129716731];
  v15 = &dword_140404A6C[140832 * v1 + 421934268];
  v16 = 512;
  do
  {
    v17 = *(v14 - 22);
    *(v15 - 9) = v17;
    if ( v17 )
    {
      *(v15 - 8) = *(v14 - 11);
      *(v15 - 7) = *(v14 - 10);
      *(v15 - 6) = *(v14 - 9);
      *(v15 - 5) = *(v14 - 5);
      *(v15 - 4) = *(v14 - 4);
      *(v15 - 3) = *(v14 - 3);
      *(v15 - 2) = *(v14 - 2);
      *(v15 - 1) = *(v14 - 1);
      *v15 = *v14;
      v15[1] = v14[1];
      v15[2] = v14[2];
      v15[3] = v14[3];
      v18 = v13 + 563328 * v1;
      *(unsigned int *)((char *)&dword_140404A6C[421934273] + v18) = v14[3641];
      *(unsigned int *)((char *)&dword_140404A6C[421934275] + v18) = v14[3659];
      *(unsigned int *)((char *)&dword_140404A6C[421934274] + v18) = v14[3671];
      *(unsigned int *)((char *)&dword_140404A6C[421934277] + v18) = v14[3641];
      *(unsigned int *)((char *)&dword_140404A6C[421934279] + v18) = v14[3702];
      *(unsigned int *)((char *)&dword_140404A6C[421934278] + v18) = v14[3714];
      *(unsigned int *)((char *)&dword_140404A6C[421934281] + v18) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[421934283] + v18) = v14[3745];
      *(unsigned int *)((char *)&dword_140404A6C[421934282] + v18) = v14[3757];
      *(unsigned int *)((char *)&dword_140404A6C[421934285] + v18) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[421934287] + v18) = v14[3788];
      *(unsigned int *)((char *)&dword_140404A6C[421934286] + v18) = v14[3800];
    }
    v14 += 5210;
    v13 += 308;
    v15 += 77;
    --v16;
  }
  while ( v16 );
  v121 = v2;
  v19 = &dword_140404A6C[278845939];
  v20 = &dword_140404A6C[140832 * v1 + 421973692];
  v21 = 0;
  v22 = 1024;
  do
  {
    v23 = *(v19 - 46);
    *(v20 - 9) = v23;
    if ( v23 )
    {
      v24 = *(v19 - 23);
      v25 = *(v19 - 22);
      v26 = *(v19 - 21);
      v27 = *(v19 - 5);
      v28 = *(v19 - 4);
      v29 = *(v19 - 3);
      v30 = *(v19 - 2);
      v31 = *(v19 - 1);
      v32 = *v19;
      v33 = v19[1];
      v34 = v19[2];
      v35 = v19[3];
      *(v20 - 8) = v24;
      *(v20 - 7) = v25;
      *(v20 - 6) = v26;
      *(v20 - 5) = v27;
      *(v20 - 4) = v28;
      *(v20 - 3) = v29;
      *(v20 - 2) = v30;
      *(v20 - 1) = v31;
      *v20 = v32;
      v20[1] = v33;
      v20[2] = v34;
      v20[3] = v35;
      if ( !dword_140404A6C[140832 * v2 + 421973683 + v21] )
      {
        v36 = &dword_140404A6C[v21 + 421973692];
        v37 = 16;
        do
        {
          *(v36 - 8) = v24;
          *(v36 - 7) = v25;
          *(v36 - 6) = v26;
          *(v36 - 5) = v27;
          *(v36 - 4) = v28;
          *(v36 - 3) = v29;
          *(v36 - 2) = v30;
          *(v36 - 1) = v31;
          *v36 = v32;
          v36[1] = v33;
          v36[2] = v34;
          v36[3] = v35;
          v36[140824] = v24;
          v36[140825] = v25;
          v36[140826] = v26;
          v36[140827] = v27;
          v36[140828] = v28;
          v36[140829] = v29;
          v36[140830] = v30;
          v36[140831] = v31;
          v36[140832] = v32;
          v36[140833] = v33;
          v36[140834] = v34;
          v36[140835] = v35;
          v36[281656] = v24;
          v36[281657] = v25;
          v36[281658] = v26;
          v36[281659] = v27;
          v36[281660] = v28;
          v36[281661] = v29;
          v36[281662] = v30;
          v36[281663] = v31;
          v36[281664] = v32;
          v36[281665] = v33;
          v36[281666] = v34;
          v36[281667] = v35;
          v36[422488] = v24;
          v36[422489] = v25;
          v36[422490] = v26;
          v36[422491] = v27;
          v36[422492] = v28;
          v36[422493] = v29;
          v36[422494] = v30;
          v36[422495] = v31;
          v36[422496] = v32;
          v36[422497] = v33;
          v36[422498] = v34;
          v36[422499] = v35;
          v36 += 563328;
          --v37;
        }
        while ( v37 );
      }
    }
    v19 += 1760;
    v21 += 13;
    v20 += 13;
    --v22;
  }
  while ( v22 );
  v38 = &dword_140404A6C[129716709];
  v39 = dword_140404A6C[421846192] - v2;
  v40 = 0;
  v41 = &dword_140404A6C[129716709];
  if ( (int)v2 >= (int)dword_140404A6C[421846192] )
    v39 = dword_140404A6C[421846192] - v2 + 64;
  v42 = (float)v39;
  do
  {
    if ( *v41 )
    {
      v43 = v40 + 563328 * v1;
      v44 = v40 + 563328LL * v2;
      *(float *)((char *)&dword_140404A6C[421934272] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934275]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934272] + v44);
      *(float *)((char *)&dword_140404A6C[421934276] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934279]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934276] + v44);
      *(float *)((char *)&dword_140404A6C[421934280] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934283]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934280] + v44);
      *(float *)((char *)&dword_140404A6C[421934284] + v43) = (float)(v42
                                                                    * *(float *)((char *)&dword_140404A6C[421934287]
                                                                               + v43))
                                                            + *(float *)((char *)&dword_140404A6C[421934284] + v44);
    }
    v41 += 5210;
    v40 += 308;
  }
  while ( (__int64)v41 < (__int64)&dword_140404A6C[132384229] );
  v45 = 0.0;
  *(float *)&dword_140404A6C[421846191] = (float)((float)(v42 - *(float *)&dword_140404A6C[421846191]) * 0.125)
                                        + *(float *)&dword_140404A6C[421846191];
  if ( *(float *)&dword_140404A6C[421846191] >= 0.0 )
  {
    if ( *(float *)&dword_140404A6C[421846191] > 16.0 )
      dword_140404A6C[421846191] = 1098907648;
  }
  else
  {
    dword_140404A6C[421846191] = 0;
  }
  if ( v42 > 0.0 )
  {
    HIDWORD(v45) = 0;
    *(float *)&v45 = 1.0 / v42;
  }
  v46 = ((_BYTE)v2 + 1) & 0x3F;
  v47 = v45;
  v117 = v46;
  if ( v46 != dword_140404A6C[421846192] )
  {
    v48 = 563328LL * v2;
    v114 = v48;
    do
    {
      v49 = &dword_140404A6C[280651303];
      v50 = 563328LL * v46;
      v51 = 256;
      v113 = v46;
      v118 = v50;
      v52 = 0;
      v119 = 256;
      v53 = (char *)&dword_140404A6C[421846205] + v50;
      v54 = (char *)&dword_140404A6C[421846236] + v50;
      v115 = v53;
      v116 = v54;
      do
      {
        v55 = *v49;
        *(_DWORD *)&v53[v52 - 40] = *v49;
        if ( v55 )
        {
          v56 = v48 + v52;
          v57 = *(float *)((char *)&dword_140404A6C[421846196] + v48 + v52);
          v58 = *(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846196 + v52 / 4];
          if ( (float)(v57 - v58) >= 3.14159265359 )
            v58 = v58 + 6.28318530718;
          if ( (float)(v58 - v57) >= 3.14159265359 )
            v57 = v57 + 6.28318530718;
          *(float *)&v53[v52 - 36] = (float)((float)(v58 - v57) * *(float *)&v47)
                                   + *(float *)((char *)&dword_140404A6C[421846196] + v48 + v52);
          v59 = *(float *)((char *)&dword_140404A6C[421846198] + v56);
          v60 = *(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846198 + v52 / 4];
          if ( (float)(v59 - v60) >= 3.14159265359 )
            v60 = v60 + 6.28318530718;
          if ( (float)(v60 - v59) >= 3.14159265359 )
            v59 = v59 + 6.28318530718;
          v61 = (float *)&v54[v12 * 4];
          *(float *)&v53[v52 - 28] = (float)((float)(v60 - v59) * *(float *)&v47)
                                   + *(float *)((char *)&dword_140404A6C[421846198] + v56);
          *(float *)&v53[v52 - 20] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846200
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846200] + v56))
                                           * *(float *)&v47)
                                   + *(float *)((char *)&dword_140404A6C[421846200] + v56);
          *(float *)&v53[v52 - 16] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846201
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846201] + v56))
                                           * *(float *)&v47)
                                   + *(float *)((char *)&dword_140404A6C[421846201] + v56);
          *(float *)&v53[v52 - 12] = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192]
                                                                              + 421846202
                                                                              + v52 / 4]
                                                   - *(float *)((char *)&dword_140404A6C[421846202] + v56))
                                           * *(float *)&v47)
                                   + *(float *)((char *)&dword_140404A6C[421846202] + v56);
          v62 = *(float *)((char *)&dword_140404A6C[421846204] + v56);
          v63 = v52 + 563328LL * (int)dword_140404A6C[421846192];
          v64 = *(float *)((char *)&dword_140404A6C[421846204] + v63);
          v65 = (float)(*(float *)((char *)&dword_140404A6C[421846205] + v63)
                      - *(float *)((char *)&dword_140404A6C[421846205] + v56))
              * *(float *)&v47;
          *(float *)&v53[v52 - 8] = (float)((float)(*(float *)((char *)&dword_140404A6C[421846203] + v63)
                                                  - *(float *)((char *)&dword_140404A6C[421846203] + v56))
                                          * *(float *)&v47)
                                  + *(float *)((char *)&dword_140404A6C[421846203] + v56);
          *(float *)&v53[v52 - 4] = (float)((float)(v64 - v62) * *(float *)&v47)
                                  + *(float *)((char *)&dword_140404A6C[421846204] + v56);
          *(float *)&v53[v52] = v65 + *(float *)((char *)&dword_140404A6C[421846205] + v56);
          sub_1400C2F90(
            (float *)&v54[v12 * 4 - 120],
            (float *)((char *)&dword_140404A6C[v12 + 421846206] + v48),
            (float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421846206 + v12],
            v47);
          v66 = -v50;
          v67 = 15;
          v68 = v66 + v48;
          v69 = v66 - v12 * 4 - (_QWORD)&dword_140404A6C[421846236] + 84;
          do
          {
            sub_1400C2F90(
              v61,
              (float *)((char *)v61 + v68),
              (float *)((char *)&dword_140404A6C[421846215]
                      + (_QWORD)&v61[140832 * (int)dword_140404A6C[421846192] + v12]
                      + v69),
              v47);
            v61 += 21;
            --v67;
          }
          while ( v67 );
          v53 = v115;
          v48 = v114;
          v50 = v118;
          v51 = v119;
          v54 = v116;
        }
        v12 += 344;
        v49 += 7166;
        v52 += 1376LL;
        v119 = --v51;
      }
      while ( v51 );
      v70 = v113;
      v71 = &dword_140404A6C[129716709];
      v72 = 140832 * (v121 - v113);
      v73 = -v50;
      v74 = v48 - 32 - v50;
      v75 = 0;
      v76 = (float *)((char *)&dword_140404A6C[421934263] + v50);
      v120 = v74;
      v77 = v48 - v50;
      v78 = (char *)&dword_140404A6C[421934268] + v118;
      v79 = 512;
      do
      {
        v80 = *v71 == 0;
        v81 = (float *)&v78[v75 * 4];
        *(_DWORD *)&v78[v75 * 4 - 36] = *(_DWORD *)&v78[v75 * 4 - 36 + v77];
        if ( !v80 )
        {
          v82 = v75 * 4 + 563328LL * (int)dword_140404A6C[421846192];
          if ( *(_DWORD *)((char *)v81 + v77 - 36) )
          {
            v83 = *(float *)((char *)&dword_140404A6C[421934261] + v82);
            v84 = v81[v72 - 7];
            v85 = (float)(*(float *)((char *)&dword_140404A6C[421934262] + v82) - v81[v72 - 6]) * *(float *)&v47;
            *(v81 - 8) = (float)((float)(*(float *)((char *)&dword_140404A6C[421934260] + v82)
                                       - *(float *)((char *)v81 + v74))
                               * *(float *)&v47)
                       + *(float *)((char *)v81 + v74);
            *(v81 - 7) = (float)((float)(v83 - v84) * *(float *)&v47) + v81[v72 - 7];
            *(v81 - 6) = v85 + v81[v72 - 6];
            sub_1400C2F90(v76, &v76[v72], (float *)((char *)&v76[140832 * dword_140404A6C[421846192]] + v73), v47);
            v70 = v113;
            v86 = v75 * 4 + 563328 * v121;
            v87 = v75 * 4 + 563328 * v113;
            *(float *)((char *)&dword_140404A6C[421934272] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934272 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934272]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934272] + v86);
            *(float *)((char *)&dword_140404A6C[421934273] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934273 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934273]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934273] + v86);
            *(float *)((char *)&dword_140404A6C[421934274] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934274 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934274]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934274] + v86);
            *(float *)((char *)&dword_140404A6C[421934275] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934275 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934275]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934275] + v86);
            *(float *)((char *)&dword_140404A6C[421934276] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934276 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934276]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934276] + v86);
            *(float *)((char *)&dword_140404A6C[421934277] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934277 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934277]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934277] + v86);
            *(float *)((char *)&dword_140404A6C[421934278] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934278 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934278]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934278] + v86);
            *(float *)((char *)&dword_140404A6C[421934279] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934279 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934279]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934279] + v86);
            *(float *)((char *)&dword_140404A6C[421934280] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934280 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934280]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934280] + v86);
            *(float *)((char *)&dword_140404A6C[421934281] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934281 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934281]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934281] + v86);
            *(float *)((char *)&dword_140404A6C[421934282] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934282 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934282]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934282] + v86);
            *(float *)((char *)&dword_140404A6C[421934283] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934283 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934283]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934283] + v86);
            *(float *)((char *)&dword_140404A6C[421934284] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934284 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934284]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934284] + v86);
            *(float *)((char *)&dword_140404A6C[421934285] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934285 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934285]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934285] + v86);
            *(float *)((char *)&dword_140404A6C[421934286] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934286 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934286]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934286] + v86);
            *(float *)((char *)&dword_140404A6C[421934287] + v87) = (float)((float)(*(float *)&dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934287 + v75]
                                                                                  - *(float *)((char *)&dword_140404A6C[421934287]
                                                                                             + v86))
                                                                          * *(float *)&v47)
                                                                  + *(float *)((char *)&dword_140404A6C[421934287] + v86);
            v74 = v120;
          }
          else
          {
            v88 = (float *)((char *)&dword_140404A6C[421934260] + v82);
            *(v81 - 8) = *v88;
            *(v81 - 7) = v88[1];
            *(v81 - 6) = v88[2];
            v89 = &dword_140404A6C[140832 * (int)dword_140404A6C[421846192] + 421934263 + v75];
            *((_DWORD *)v81 - 5) = *v89;
            *((_DWORD *)v81 - 4) = v89[1];
            *((_DWORD *)v81 - 3) = v89[2];
            *((_DWORD *)v81 - 2) = v89[3];
            *((_DWORD *)v81 - 1) = v89[4];
            *(_DWORD *)v81 = v89[5];
            *((_DWORD *)v81 + 1) = v89[6];
            *((_DWORD *)v81 + 2) = v89[7];
            *((_DWORD *)v81 + 3) = v89[8];
            v90 = v75 * 4 + 563328 * v70;
            *(unsigned int *)((char *)&dword_140404A6C[421934272] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934272
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934273] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934273
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934274] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934274
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934275] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934275
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934276] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934276
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934277] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934277
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934278] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934278
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934279] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934279
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934280] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934280
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934281] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934281
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934282] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934282
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934283] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934283
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934284] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934284
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934285] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934285
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934286] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934286
                                                                                         + v75];
            *(unsigned int *)((char *)&dword_140404A6C[421934287] + v90) = dword_140404A6C[140832
                                                                                         * (int)dword_140404A6C[421846192]
                                                                                         + 421934287
                                                                                         + v75];
          }
        }
        v76 += 77;
        v71 += 5210;
        v75 += 77;
        --v79;
      }
      while ( v79 );
      v91 = &dword_140404A6C[278845893];
      v92 = 1024;
      v93 = (float *)((char *)&dword_140404A6C[421973687] + v118);
      v94 = (float *)((char *)&dword_140404A6C[421973692] + v118);
      v95 = v73 - (_QWORD)&dword_140404A6C[421973692];
      do
      {
        v96 = *v91;
        *((_DWORD *)v94 - 9) = *v91;
        if ( v96 )
        {
          v97 = (__int64)&v94[140832 * dword_140404A6C[421846192]] + v95;
          if ( *(_DWORD *)((char *)v94 + v77 - 36) )
          {
            v98 = *(float *)((char *)&dword_140404A6C[421973685] + v97);
            v99 = v94[v72 - 7];
            v100 = (float)(*(float *)((char *)&dword_140404A6C[421973686] + v97) - v94[v72 - 6]) * *(float *)&v47;
            *(v94 - 8) = (float)((float)(*(float *)((char *)&dword_140404A6C[421973684] + v97)
                                       - *(float *)((char *)v94 + v74))
                               * *(float *)&v47)
                       + *(float *)((char *)v94 + v74);
            *(v94 - 7) = (float)((float)(v98 - v99) * *(float *)&v47) + v94[v72 - 7];
            *(v94 - 6) = v100 + v94[v72 - 6];
            sub_1400C2F90(v93, &v93[v72], (float *)((char *)&v93[140832 * dword_140404A6C[421846192]] + v73), v47);
          }
          else
          {
            v101 = (float *)((char *)&dword_140404A6C[421973684] + v97);
            *(v94 - 8) = *v101;
            *(v94 - 7) = v101[1];
            *(v94 - 6) = v101[2];
            v102 = (float *)((char *)&dword_140404A6C[421973687]
                           + (_QWORD)&v94[140832 * dword_140404A6C[421846192]]
                           + v95);
            *(v94 - 5) = *v102;
            *(v94 - 4) = v102[1];
            *(v94 - 3) = v102[2];
            *(v94 - 2) = v102[3];
            *(v94 - 1) = v102[4];
            *v94 = v102[5];
            v94[1] = v102[6];
            v94[2] = v102[7];
            v94[3] = v102[8];
          }
        }
        v74 = v120;
        v93 += 13;
        v91 += 1760;
        v94 += 13;
        --v92;
      }
      while ( v92 );
      sub_140030590(v117);
      v48 = v114;
      *(float *)&v47 = *(float *)&v47 + *(float *)&v45;
      v46 = ((_BYTE)v117 + 1) & 0x3F;
      v117 = v46;
      v12 = 0;
    }
    while ( v46 != dword_140404A6C[421846192] );
    v38 = &dword_140404A6C[129716709];
  }
  sub_140030590(v46);
  result = 0; /* native tick discards this result */
  do
  {
    if ( !*v38 )
      goto LABEL_80;
    v104 = v12 * 4 + 563328LL * v46;
    v105 = *(float *)((char *)&dword_140404A6C[421934272] + v104);
    if ( v105 >= -3.14159265359 )
    {
      if ( v105 <= 3.14159265359 )
        goto LABEL_65;
      v106 = v105 - 6.28318530718;
    }
    else
    {
      v106 = v105 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934272] + v104) = v106;
LABEL_65:
    v107 = *(float *)((char *)&dword_140404A6C[421934276] + v104);
    if ( v107 >= -3.14159265359 )
    {
      if ( v107 <= 3.14159265359 )
        goto LABEL_70;
      v108 = v107 - 6.28318530718;
    }
    else
    {
      v108 = v107 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934276] + v104) = v108;
LABEL_70:
    v109 = *(float *)((char *)&dword_140404A6C[421934280] + v104);
    if ( v109 >= -3.14159265359 )
    {
      if ( v109 <= 3.14159265359 )
        goto LABEL_75;
      v110 = v109 - 6.28318530718;
    }
    else
    {
      v110 = v109 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934280] + v104) = v110;
LABEL_75:
    v111 = *(float *)((char *)&dword_140404A6C[421934284] + v104);
    if ( v111 >= -3.14159265359 )
    {
      if ( v111 <= 3.14159265359 )
        goto LABEL_80;
      v112 = v111 - 6.28318530718;
    }
    else
    {
      v112 = v111 + 6.28318530718;
    }
    *(float *)((char *)&dword_140404A6C[421934284] + v104) = v112;
LABEL_80:
    v38 += 5210;
    v12 += 77;
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[132384229] );
  return result;
}
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 1A4D3BD28: using guessed type unsigned int;
// 1A4D3BD30: using guessed type unsigned int;

//----- (0000000140041B80) ----------------------------------------------------
__int64 sub_140041B80()
{
  __int64 v0; // rsi
  int v1; // r14d
  float *v2; // rdi
  __int64 v3; // rax
  int v4; // edx
  float v5; // xmm7_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  float *v17; // rbx
  float *v18; // r15
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  __int64 v23; // xmm0_8
  float v24; // xmm1_4
  signed int v25; // edx
  __int64 v26; // r13
  __int64 v27; // r12
  signed int v28; // ecx
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  int v35; // ebx
  __int64 v36; // r15
  float *v37; // r14
  float *v38; // rdi
  float v39; // xmm0_4
  float v40; // xmm5_4
  float v41; // xmm4_4
  __int64 v42; // rcx
  float v43; // xmm1_4
  float v44; // xmm3_4
  __int64 v45; // rax
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm2_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm5_4
  float *v63; // rbx
  __int64 v64; // rdi
  signed int v65; // r8d
  int v66; // ecx
  float v67; // xmm4_4
  float v68; // xmm14_4
  float v69; // xmm15_4
  float v70; // xmm6_4
  float v71; // xmm7_4
  float v72; // xmm8_4
  float v73; // xmm1_4
  __int64 v74; // rcx
  float v75; // xmm5_4
  float v76; // xmm9_4
  float v77; // xmm5_4
  unsigned int *v78; // rcx
  signed int v79; // r8d
  int v80; // r9d
  float v81; // xmm6_4
  float v82; // xmm7_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm4_4
  float v87; // xmm0_4
  signed int v88; // r8d
  unsigned int v89; // r9d
  float v90; // xmm6_4
  float v91; // xmm7_4
  float v92; // xmm1_4
  float v93; // xmm2_4
  float v94; // xmm3_4
  float v95; // xmm4_4
  float v96; // xmm0_4
  signed int v97; // r8d
  unsigned int v98; // r9d
  float v99; // xmm6_4
  float v100; // xmm7_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm3_4
  float v104; // xmm4_4
  float v105; // xmm0_4
  signed int v106; // r8d
  unsigned int v107; // r9d
  float v108; // xmm6_4
  float v109; // xmm7_4
  float v110; // xmm1_4
  float v111; // xmm2_4
  float v112; // xmm3_4
  float v113; // xmm4_4
  float v114; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140041B80[96];
#define v116 (*(__int64 (*))(void *)(sr_frame_140041B80 + 0)) /* [rsp+8h] */
#define v117 (*(__int64 (*))(void *)(sr_frame_140041B80 + 32)) /* [rsp+28h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_140041B80 + 40)) /* [rsp+30h] */
#define v119 (*(float (*))(void *)(sr_frame_140041B80 + 48)) /* [rsp+38h] */
#define v120 (*(float (*))(void *)(sr_frame_140041B80 + 52)) /* [rsp+3Ch] */
#define v121 (*(float (*))(void *)(sr_frame_140041B80 + 56)) /* [rsp+40h] */
#define v122 (*(float (*))(void *)(sr_frame_140041B80 + 64)) /* [rsp+48h] */
#define v123 (*(float (*))(void *)(sr_frame_140041B80 + 68)) /* [rsp+4Ch] */
#define v124 (*(__int64 (*))(void *)(sr_frame_140041B80 + 72)) /* [rsp+50h] */
#define v125 (*(__int64 (*))(void *)(sr_frame_140041B80 + 80)) /* [rsp+58h] */

  v0 = 0;
  v1 = 0;
  if ( (int)dword_140404A6C[132792829] > 0 )
  {
    v2 = (float *)&dword_140404A6C[132401018];
    do
    {
      v3 = *((int *)v2 - 381);
      v4 = *((_DWORD *)v2 - 6);
      *(v2 - 357) = 3.0;
      v5 = (float)(*(float *)&dword_140404A6C[24944 * v3 + 346731818] * 0.875)
         - *(float *)&dword_140404A6C[24944 * v3 + 346731821];
      if ( v4 >= (int)dword_140404A6C[283831474] )
      {
        v12 = *(v2 - 377);
      }
      else
      {
        v6 = *(v2 - 4);
        v7 = *(v2 - 5) - *(v2 - 1);
        v8 = v6 - *v2;
        v9 = *(v2 - 3) - v2[1];
        v10 = (float)(v4 - *((_DWORD *)v2 - 2));
        if ( v10 > 0.0 )
        {
          v7 = v7 * (float)(1.0 / v10);
          v8 = v8 * (float)(1.0 / v10);
          v9 = v9 * (float)(1.0 / v10);
        }
        v11 = fminf((float)(dword_140404A6C[283831474] - v4), 64.0);
        v12 = (float)(v7 * v11) + *(v2 - 5);
        v13 = (float)(v9 * v11) + *(v2 - 3);
        *(v2 - 377) = v12;
        *(v2 - 376) = (float)(v8 * v11) + v6;
        *(v2 - 375) = v13;
      }
      v14 = *(v2 - 376);
      v15 = *(v2 - 375);
      v119 = (float)(*(float *)&dword_1402F6188 * 2.0) + v12;
      v122 = v12 - (float)(*(float *)&dword_1402F6188 * 8.0);
      v120 = (float)(*(float *)&dword_1402F618C * 2.0) + v14;
      v123 = v14 - (float)(*(float *)&dword_1402F618C * 8.0);
      v121 = (float)(*(float *)&dword_1402F6190 * 2.0) + v15;
      *(float *)&v124 = v15 - (float)(*(float *)&dword_1402F6190 * 8.0);
      if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
        *(v2 - 376) = *(float *)&dword_140404A6C[73006982] + v5;
      v16 = 383LL * v1;
      *((_QWORD *)v2 - 185) = 1065353216;
      v17 = (float *)&dword_140404A6C[v16 + 132400651];
      *((_QWORD *)v2 - 184) = 0;
      v18 = (float *)&dword_140404A6C[v16 + 132400648];
      *((_QWORD *)v2 - 183) = 1065353216;
      *((_QWORD *)v2 - 182) = 0;
      *(v2 - 362) = 1.0;
      sub_14007B2A0(
        (__int64)&dword_140404A6C[v16 + 132400648],
        (float *)&dword_140404A6C[v16 + 132400651],
        sr_export_float_lane_container(1070141403));
      sub_14007B2A0((__int64)v18, v17, sr_export_float_lane_container((unsigned __int64)*((_DWORD *)v2 - 371)));
      v19 = -*(v2 - 357);
      v20 = (float)(v19 * *(v2 - 364)) + *(v2 - 377);
      v21 = (float)(v19 * *(v2 - 363)) + *(v2 - 376);
      v22 = (float)(v19 * *(v2 - 362)) + *(v2 - 375);
      v119 = v20;
      v120 = v21;
      v122 = v20 - (float)(*(float *)&dword_1402F6188 * 32.0);
      v121 = v22;
      *(float *)&v124 = v22 - (float)(*(float *)&dword_1402F6190 * 32.0);
      v123 = v21 - (float)(*(float *)&dword_1402F618C * 32.0);
      if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
      {
        v23 = dword_140404A6C[73006982];
        v24 = *(v2 - 357);
        v120 = *(float *)&dword_140404A6C[73006982] + v5;
        *(float *)&v23 = sub_14023F704((float)(*(float *)&dword_140404A6C[73006982] + v5) - *(v2 - 376), v24);
        sub_14007B2A0((__int64)v18, v18, sr_export_float_lane_container(v23 ^ 0x80000000LL));
      }
      ++v1;
      v2 += 383;
    }
    while ( v1 < (int)dword_140404A6C[132792829] );
  }
  v25 = dword_140404A6C[283831474];
  v26 = 256;
  v27 = 0;
  v118 = 256;
  v117 = 256;
  do
  {
    if ( dword_140404A6C[v0 + 280651303] )
    {
      v28 = dword_140404A6C[v0 + 280658451];
      if ( v28 < v25 )
      {
        v29 = *(float *)&dword_140404A6C[v0 + 280658453];
        v30 = *(float *)&dword_140404A6C[v0 + 280658454];
        v31 = *(float *)&dword_140404A6C[v0 + 280658452] - *(float *)&dword_140404A6C[v0 + 280658456];
        v32 = v29 - *(float *)&dword_140404A6C[v0 + 280658457];
        v33 = v30 - *(float *)&dword_140404A6C[v0 + 280658458];
        v34 = (float)(int)(v28 - dword_140404A6C[v0 + 280658455]);
        if ( v34 > 0.0 )
        {
          v31 = v31 * (float)(1.0 / v34);
          v32 = v32 * (float)(1.0 / v34);
          v33 = v33 * (float)(1.0 / v34);
        }
        v35 = 1;
        v36 = 78;
        v37 = (float *)&dword_140404A6C[282486075];
        v38 = (float *)&dword_140404A6C[v0 + 280651519];
        v39 = fminf((float)(v25 - v28), 64.0);
        *(float *)&dword_140404A6C[v0 + 280651440] = (float)(v31 * v39) + *(float *)&dword_140404A6C[v0 + 280658452];
        *(float *)&dword_140404A6C[v0 + 280651441] = (float)(v32 * v39) + v29;
        *(float *)&dword_140404A6C[v0 + 280651442] = (float)(v33 * v39) + v30;
        do
        {
          if ( dword_140404A6C[v0 + 280651313] == -1 || (unsigned int)v35 < 0xA )
          {
            v40 = *(v37 - 1);
            v41 = *v37;
            v42 = 78LL * *((int *)v37 - 5);
            v43 = *v37;
            v44 = *v37;
            v45 = v0 * 4 + v42 * 4;
            v46 = (float)(v40 * *(float *)&dword_140404A6C[v0 + 280651452 + v42])
                + *(float *)&dword_140404A6C[v0 + 280651440 + v42];
            *(v38 - 1) = v46;
            v47 = (float)(v40 * *(float *)((char *)&dword_140404A6C[280651453] + v45))
                + *(float *)((char *)&dword_140404A6C[280651441] + v45);
            *v38 = v47;
            v48 = (float)(v40 * *(float *)((char *)&dword_140404A6C[280651454] + v45))
                + *(float *)((char *)&dword_140404A6C[280651442] + v45);
            v38[1] = v48;
            v49 = (float)(v43 * *(float *)&dword_140404A6C[v0 + 280651455 + v42]) + v46;
            v50 = v37[1];
            *(v38 - 1) = v49;
            v51 = (float)(v44 * *(float *)&dword_140404A6C[v0 + 280651456 + v42]) + v47;
            *v38 = v51;
            v52 = (float)(v41 * *(float *)&dword_140404A6C[v0 + 280651457 + v42]) + v48;
            v38[1] = v52;
            *(v38 - 1) = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651458 + v42]) + v49;
            *v38 = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651459 + v42]) + v51;
            v38[1] = (float)(v50 * *(float *)&dword_140404A6C[v0 + 280651460 + v42]) + v52;
            sub_14007A010(
              (__int64)&dword_140404A6C[v36 + 280651452 + v27],
              (__int64)&dword_140404A6C[v36 + 280651493 + v27],
              (__int64)&dword_140404A6C[v27 + 280651452 + v42]);
            v53 = *(v37 - 4) - *(v37 - 1);
            v54 = *(v37 - 3) - *v37;
            v55 = *(v37 - 2) - v37[1];
            v119 = v53;
            v56 = v53 * v38[11];
            v120 = v54;
            v121 = v55;
            v57 = v56 + *(v38 - 1);
            *(v38 - 1) = v57;
            v58 = (float)(v53 * v38[12]) + *v38;
            *v38 = v58;
            v59 = (float)(v53 * v38[13]) + v38[1];
            v38[1] = v59;
            v60 = (float)(v54 * v38[14]) + v57;
            *(v38 - 1) = v60;
            v61 = (float)(v54 * v38[15]) + v58;
            *v38 = v61;
            v62 = (float)(v54 * v38[16]) + v59;
            v38[1] = v62;
            *(v38 - 1) = (float)(v55 * v38[17]) + v60;
            *v38 = (float)(v55 * v38[18]) + v61;
            v38[1] = (float)(v55 * v38[19]) + v62;
          }
          ++v35;
          v36 += 78;
          v37 += 25;
          v38 += 78;
        }
        while ( v35 < 16 );
        v25 = dword_140404A6C[283831474];
        v26 = v117;
      }
    }
    v27 += 7166;
    v0 += 7166;
    v117 = --v26;
  }
  while ( v26 );
  v63 = (float *)&dword_140404A6C[129721917];
  v64 = 512;
  do
  {
    if ( *((_DWORD *)v63 - 5208) )
    {
      v65 = *((_DWORD *)v63 - 7);
      if ( v65 != -1 )
      {
        v66 = *((_DWORD *)v63 - 3);
        if ( v66 != -1 )
        {
          v68 = *(v63 - 6);
          v69 = *(v63 - 5);
          v70 = v68 - *(v63 - 2);
          *(float *)&v117 = *(v63 - 4);
          v67 = *(float *)&v117;
          v71 = v69 - *(v63 - 1);
          v72 = *(float *)&v117 - *v63;
          v73 = (float)(v65 - v66);
          if ( v73 > 0.0 )
          {
            v70 = v70 * (float)(1.0 / v73);
            v71 = v71 * (float)(1.0 / v73);
            v72 = v72 * (float)(1.0 / v73);
          }
          v74 = 24944LL * *((int *)v63 - 5207);
          *(v63 - 5173) = v70;
          *(v63 - 5172) = v71;
          *(v63 - 5171) = v72;
          if ( v65 < v25 )
          {
            v75 = *(float *)&dword_140404A6C[v74 + 346731821]
                - (float)(*(float *)&dword_140404A6C[v74 + 346731818] * 0.875);
            v119 = v68 + *(float *)&dword_1402F6188;
            v120 = v69 + *(float *)&dword_1402F618C;
            v121 = v67 + *(float *)&dword_1402F6190;
            v76 = fminf((float)(v25 - v65), 64.0);
            v122 = (float)((float)(v75 * *(float *)&dword_1402F6188) + v68) + (float)(v70 * v76);
            v123 = (float)((float)(v75 * *(float *)&dword_1402F618C) + v69) + (float)(v71 * v76);
            *(float *)&v124 = (float)((float)(v75 * *(float *)&dword_1402F6190) + *(float *)&v117) + (float)(v72 * v76);
            if ( (unsigned int)sub_1400DC050(&v119, &v122, 0) )
            {
              v77 = -(float)((float)((float)(v70 * *(float *)&dword_140404A6C[73006984])
                                   + (float)(v71 * *(float *)&dword_140404A6C[73006985]))
                           + (float)(v72 * *(float *)&dword_140404A6C[73006986]));
              v70 = v70 + (float)(*(float *)&dword_140404A6C[73006984] * v77);
              v71 = v71 + (float)(*(float *)&dword_140404A6C[73006985] * v77);
              v72 = v72 + (float)(*(float *)&dword_140404A6C[73006986] * v77);
            }
            v25 = dword_140404A6C[283831474];
            *(v63 - 5197) = (float)(v70 * v76) + *(v63 - 6);
            *(v63 - 5196) = (float)(v71 * v76) + *(v63 - 5);
            *(v63 - 5195) = (float)(v72 * v76) + *(v63 - 4);
          }
        }
      }
    }
    v63 += 5210;
    --v64;
  }
  while ( v64 );
  v78 = &dword_140404A6C[278846109];
  do
  {
    if ( *(v78 - 216) )
    {
      v79 = *(v78 - 7);
      if ( v79 < v25 && v79 != -1 )
      {
        v80 = *(v78 - 2);
        if ( v80 != -1 )
        {
          v81 = *((float *)v78 - 5);
          v82 = *((float *)v78 - 4);
          v83 = *((float *)v78 - 6) - *((float *)v78 - 1);
          v84 = v81 - *(float *)v78;
          v85 = v82 - *((float *)v78 + 1);
          v86 = (float)(v79 - v80);
          if ( v86 > 0.0 )
          {
            v83 = v83 * (float)(1.0 / v86);
            v84 = v84 * (float)(1.0 / v86);
            v85 = v85 * (float)(1.0 / v86);
          }
          v87 = fminf((float)(v25 - v79), 64.0);
          *((float *)v78 - 193) = (float)(v83 * v87) + *((float *)v78 - 6);
          *((float *)v78 - 192) = (float)(v84 * v87) + v81;
          *((float *)v78 - 191) = (float)(v85 * v87) + v82;
        }
      }
    }
    if ( v78[1544] )
    {
      v88 = v78[1753];
      if ( v88 < v25 && v88 != -1 )
      {
        v89 = v78[1758];
        if ( v89 != -1 )
        {
          v90 = *((float *)v78 + 1755);
          v91 = *((float *)v78 + 1756);
          v92 = *((float *)v78 + 1754) - *((float *)v78 + 1759);
          v93 = v90 - *((float *)v78 + 1760);
          v94 = v91 - *((float *)v78 + 1761);
          v95 = (float)(int)(v88 - v89);
          if ( v95 > 0.0 )
          {
            v92 = v92 * (float)(1.0 / v95);
            v93 = v93 * (float)(1.0 / v95);
            v94 = v94 * (float)(1.0 / v95);
          }
          v96 = fminf((float)(v25 - v88), 64.0);
          *((float *)v78 + 1567) = (float)(v92 * v96) + *((float *)v78 + 1754);
          *((float *)v78 + 1568) = (float)(v93 * v96) + v90;
          *((float *)v78 + 1569) = (float)(v94 * v96) + v91;
        }
      }
    }
    if ( v78[3304] )
    {
      v97 = v78[3513];
      if ( v97 < v25 && v97 != -1 )
      {
        v98 = v78[3518];
        if ( v98 != -1 )
        {
          v99 = *((float *)v78 + 3515);
          v100 = *((float *)v78 + 3516);
          v101 = *((float *)v78 + 3514) - *((float *)v78 + 3519);
          v102 = v99 - *((float *)v78 + 3520);
          v103 = v100 - *((float *)v78 + 3521);
          v104 = (float)(int)(v97 - v98);
          if ( v104 > 0.0 )
          {
            v101 = v101 * (float)(1.0 / v104);
            v102 = v102 * (float)(1.0 / v104);
            v103 = v103 * (float)(1.0 / v104);
          }
          v105 = fminf((float)(v25 - v97), 64.0);
          *((float *)v78 + 3327) = (float)(v101 * v105) + *((float *)v78 + 3514);
          *((float *)v78 + 3328) = (float)(v102 * v105) + v99;
          *((float *)v78 + 3329) = (float)(v103 * v105) + v100;
        }
      }
    }
    if ( v78[5064] )
    {
      v106 = v78[5273];
      if ( v106 < v25 && v106 != -1 )
      {
        v107 = v78[5278];
        if ( v107 != -1 )
        {
          v108 = *((float *)v78 + 5275);
          v109 = *((float *)v78 + 5276);
          v110 = *((float *)v78 + 5274) - *((float *)v78 + 5279);
          v111 = v108 - *((float *)v78 + 5280);
          v112 = v109 - *((float *)v78 + 5281);
          v113 = (float)(int)(v106 - v107);
          if ( v113 > 0.0 )
          {
            v110 = v110 * (float)(1.0 / v113);
            v111 = v111 * (float)(1.0 / v113);
            v112 = v112 * (float)(1.0 / v113);
          }
          v114 = fminf((float)(v25 - v106), 64.0);
          *((float *)v78 + 5087) = (float)(v110 * v114) + *((float *)v78 + 5274);
          *((float *)v78 + 5088) = (float)(v111 * v114) + v108;
          *((float *)v78 + 5089) = (float)(v112 * v114) + v109;
        }
      }
    }
    v78 += 7040;
    --v118;
  }
  while ( v118 );
  return 0; /* no result: rax is residue at 0x1400428EE */
}
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140042930) ----------------------------------------------------
__int64            sub_140042930(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // r12d
  signed int v7; // r14d
  unsigned int v8; // r15d
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  signed int v13; // ecx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r10d
  unsigned int v21; // r9d
  char v22; // r11
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // r10d
  char v26; // r11
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // r10d
  char v30; // r11
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // r10d
  char v34; // r11
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // r10d
  char v38; // r11
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // r10d
  char v42; // r11
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // r10d
  int v46; // r8d
  signed int v47; // ebx
  __int64 v48; // r13
  int v49; // r9d
  char v50; // r11
  int v51; // eax
  signed int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  signed int v59; // r9d
  int v60; // r8d
  unsigned int v61; // r10d
  char v62; // r11
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // xmm1_4
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // r14d
  int *v71; // rbx
  signed int v72; // esi
  __int64 v73; // rbp
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rbx
  signed int v77; // ecx
  signed int v78; // r8d
  int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rbp
  __int64 v87; // r13
  int *v88; // rbx
  int *v89; // r14
  __int64 v90; // r15
  __int64 v91; // r13
  signed int v92; // r15d
  signed int v93; // ebp
  __int64 v94; // r12
  int v95; // esi
  int v96; // ebx
  int v97; // r10d
  __int64 v98; // r14
  __int64 v99; // rax
  int v100; // r8d
  char v101; // r9
  int v102; // eax
  __int64 v103; // rax
  unsigned int *v104; // r15
  unsigned int *v105; // r14
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rbp
  __int64 v109; // rsi
  signed int v110; // ebx
  int v111; // r8d
  signed int v112; // ebp
  unsigned int v113; // esi
  int v114; // r10d
  char v115; // r9
  unsigned int v116; // eax
  int v117; // eax
  int v118; // r8d
  int v119; // r10d
  char v120; // r9
  unsigned int v121; // eax
  int v122; // eax
  int v123; // r8d
  int v124; // r10d
  char v125; // r9
  unsigned int v126; // eax
  __int64 v127; // r14
  __int64 v128; // r12
  int v129; // eax
  __int64 v130; // r13
  int v131; // r8d
  int v132; // r10d
  char v133; // r9
  unsigned int v134; // eax
  __int64 v135; // rsi
  __int64 v136; // rbx
  __m128i *v137; // rcx
  unsigned __int64 v138; // r15
  int v139; // r8d
  int v140; // r10d
  signed int v141; // ebx
  int v142; // r9d
  int v143; // r15d
  char v144; // r11
  int v145; // eax
  int v146; // r10d
  int v147; // r14d
  char v148; // r11
  int v149; // eax
  __int64 v150; // rbx
  __int64 v151; // rax
  unsigned int v152; // edx
  __int64 i; // rcx
  unsigned int *v154; // rax
  unsigned int *v155; // rax
  int v156; // r9d
  unsigned int *v157; // r8
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // r11
  __int64 v162; // r10
  __int64 v163; // rbx
  unsigned int v164; // eax
  unsigned int *v165; // rsi
  __int64 v166; // rbp
  unsigned int *v167; // rbx
  signed int v168; // ecx
  signed int v169; // r8d
  int v170; // edx
  __int64 v171; // rax
  __int64 v172; // rax
  __int128 v173; // xmm0
  __int128 v174; // xmm1
  int v175; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140042930[160];
#define v177 (*(__int64 (*))(void *)(sr_frame_140042930 + 0)) /* [rsp+0h] */
#define v178 (*(char (*))(void *)(sr_frame_140042930 + 32)) /* [rsp+20h] */
#define v179 (*(int (*))(void *)(sr_frame_140042930 + 36)) /* [rsp+24h] */
#define v180 (*(int (*))(void *)(sr_frame_140042930 + 40)) /* [rsp+28h] */
#define v181 (*(int (*))(void *)(sr_frame_140042930 + 44)) /* [rsp+2Ch] */
#define v182 (*(int (*))(void *)(sr_frame_140042930 + 48)) /* [rsp+30h] */
#define v183 (*(int (*))(void *)(sr_frame_140042930 + 52)) /* [rsp+34h] */
#define v184 (*(int (*))(void *)(sr_frame_140042930 + 56)) /* [rsp+38h] */
#define v185 (*(int (*))(void *)(sr_frame_140042930 + 60)) /* [rsp+3Ch] */
#define v186 (*(int (*))(void *)(sr_frame_140042930 + 64)) /* [rsp+40h] */
#define v187 (*(__int64 (*))(void *)(sr_frame_140042930 + 72)) /* [rsp+48h] */
#define v188 (*(int (*))(void *)(sr_frame_140042930 + 80)) /* [rsp+50h] */
#define v189 (*(int (*))(void *)(sr_frame_140042930 + 84)) /* [rsp+54h] */
#define v190 (*(int (*))(void *)(sr_frame_140042930 + 88)) /* [rsp+58h] */
#define v191 (*(int (*))(void *)(sr_frame_140042930 + 92)) /* [rsp+5Ch] */
#define v192 (*(__int64 (*))(void *)(sr_frame_140042930 + 96)) /* [rsp+60h] */
#define v193 (*(__int64 (*))(void *)(sr_frame_140042930 + 104)) /* [rsp+68h] */
#define v194 (*(__int64 (*))(void *)(sr_frame_140042930 + 112)) /* [rsp+70h] */
#define v195 (*(unsigned int * (*))(void *)(sr_frame_140042930 + 120)) /* [rsp+78h] */
#define v196 (*(unsigned int * (*))(void *)(sr_frame_140042930 + 128)) /* [rsp+80h] */
#define v197 (*(unsigned int (*))(void *)(sr_frame_140042930 + 136)) /* [rsp+88h] */
#define v198 (*(unsigned int (*))(void *)(sr_frame_140042930 + 140)) /* [rsp+8Ch] */
#define v199 (*(unsigned int (*))(void *)(sr_frame_140042930 + 144)) /* [rsp+90h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_140042930 + 152)) /* [rsp+98h] */

  if ( (int)++dword_140404A6C[421831847] < 1800 )
  {
    v179 = sub_14011C760();
    if ( v179 <= 0 )
      return 0; /* compatibility result discarded by all reviewed callers */
    v3 = v178;
    v4 = v179;
    v5 = v179;
    v6 = v179;
    v181 = v179;
    v183 = v179;
    v7 = v179;
    v8 = v179;
    v189 = v179;
    v188 = v179;
    v191 = v179;
    v184 = v179;
    v182 = v179;
    v190 = v179;
    v185 = v179;
    v186 = v179;
    while ( 1 )
    {
      v9 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (v10 = dword_140404A6C[289317484] + 1,
            (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483]) )
      {
        v11 = dword_140404A6C[289317485];
      }
      else
      {
        v11 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v11 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
          v9 = v10;
        }
        v12 = v9++;
        v3 = *((_BYTE *)&dword_140404A6C[289317486] + v12);
        v178 = v3;
        dword_140404A6C[289317484] = v9;
      }
      if ( v3 != 6 )
        break;
      dword_140404A6C[421831847] = 0;
      if ( v9 < 0x10000 && v9 + 4 <= (int)dword_140404A6C[289317483] )
      {
        if ( v11 > 0 )
        {
          ++v9;
          dword_140404A6C[289317485] = 0;
          dword_140404A6C[289317484] = v9;
        }
        dword_140404A6C[421831838] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v9);
        dword_140404A6C[289317484] = v9 + 4;
      }
      sub_140115AE0(&dword_140404A6C[283831312], 4);
      sub_140115AE0(&dword_140404A6C[283831441], 4);
      sub_140115AE0(&dword_140404A6C[283831446], 8);
      v13 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 32) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v13 = dword_140404A6C[289317484] + 1;
          dword_140404A6C[289317485] = 0;
          ++dword_140404A6C[289317484];
        }
        v14 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v13);
        v15 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v13);
        dword_140404A6C[289317484] = v13 + 32;
        *(_OWORD *)&dword_140404A6C[283831313] = v14;
        *(_OWORD *)&dword_140404A6C[283831317] = v15;
      }
      sub_14018D440((float *)&dword_140404A6C[283831482], 16);
      sub_14018D440((float *)&dword_140404A6C[283831483], 16);
      if ( dword_140404A6C[283831312] == 7 )
        sub_140115AE0(&dword_140404A6C[284022502], 8);
LABEL_388:
      v175 = sub_14011C760();
      v5 = v182;
      v4 = v184;
      v3 = v178;
      v179 = v175;
      if ( v175 <= 0 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( v3 != 5 )
    {
LABEL_367:
      if ( v3 == 9 )
      {
        if ( dword_140404A6C[284024501] != -1 )
          dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856266] = 1;
        v165 = &dword_140404A6C[438881245];
        v166 = 256;
        v167 = &dword_140404A6C[438881247];
        do
        {
          sub_140115AE0(v167 - 2, 1);
          if ( *v165 )
          {
            v168 = dword_140404A6C[289317484];
            if ( (int)dword_140404A6C[289317484] < 0x10000 )
            {
              v169 = dword_140404A6C[289317483];
              v170 = dword_140404A6C[289317485];
              if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
              {
                if ( (int)dword_140404A6C[289317485] > 0 )
                {
                  v168 = dword_140404A6C[289317484] + 1;
                  v170 = 0;
                  ++dword_140404A6C[289317484];
                  dword_140404A6C[289317485] = 0;
                }
                v171 = v168;
                v168 += 4;
                *v167 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v171);
                dword_140404A6C[289317484] = v168;
              }
              if ( v168 < 0x10000 )
              {
                if ( v168 + 32 <= v169 )
                {
                  if ( v170 > 0 )
                  {
                    ++v168;
                    v170 = 0;
                    dword_140404A6C[289317484] = v168;
                    dword_140404A6C[289317485] = 0;
                  }
                  v172 = v168;
                  v168 += 32;
                  v173 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v172);
                  v174 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v172);
                  dword_140404A6C[289317484] = v168;
                  *(_OWORD *)(v167 + 1) = v173;
                  *(_OWORD *)(v167 + 5) = v174;
                }
                if ( v168 < 0x10000 && v168 + 4 <= v169 )
                {
                  if ( v170 > 0 )
                  {
                    ++v168;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v168;
                  }
                  v167[17] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v168);
                  dword_140404A6C[289317484] = v168 + 4;
                }
              }
            }
          }
          v167 += 20;
          v165 += 20;
          --v166;
        }
        while ( v166 );
      }
      goto LABEL_388;
    }
    dword_140404A6C[421831847] = 0;
    if ( v9 < 0x10000 && v9 + 4 <= (int)dword_140404A6C[289317483] )
    {
      if ( v11 > 0 )
      {
        ++v9;
        v11 = 0;
        dword_140404A6C[289317484] = v9;
        dword_140404A6C[289317485] = 0;
      }
      v16 = v9;
      v9 += 4;
      v6 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v16);
      dword_140404A6C[289317484] = v9;
    }
    if ( v6 != dword_140404A6C[283831447] )
      goto LABEL_388;
    if ( v9 < 0x10000 && v9 + 4 <= (int)dword_140404A6C[289317483] )
    {
      if ( v11 > 0 )
      {
        ++v9;
        dword_140404A6C[289317485] = 0;
        dword_140404A6C[289317484] = v9;
      }
      v6 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v9);
      dword_140404A6C[289317484] = v9 + 4;
    }
    if ( (int)dword_140404A6C[283831474] > v6 && (signed int)(dword_140404A6C[283831474] - v6) < 10000 )
      goto LABEL_388;
    dword_140404A6C[283831474] = v6;
    sub_140115AE0(&dword_140404A6C[283831448], 4);
    if ( dword_140404A6C[283831448] == 1 )
    {
      v17 = &dword_140404A6C[71856271];
      v18 = 32;
      do
      {
        sub_140115AE0(v17, 1);
        v17 += 3597;
        --v18;
      }
      while ( v18 );
      v5 = v182;
    }
    else if ( dword_140404A6C[283831448] != 3 )
    {
LABEL_111:
      sub_140115AE0(&dword_140404A6C[283831450], 24);
      sub_140115AE0(&dword_140404A6C[284022086], 16);
      sub_140115AE0(&dword_140404A6C[179992853], 30);
      sub_140115AE0(&dword_140404A6C[283831506], 6);
      sub_140115AE0(&dword_140404A6C[283837379], 6);
      sub_140115AE0(&dword_140404A6C[283843252], 6);
      sub_140115AE0(&dword_140404A6C[283849125], 6);
      sub_140115AE0(&dword_140404A6C[283854998], 6);
      sub_140115AE0(&dword_140404A6C[284024501], 8);
      v45 = 10;
      v46 = dword_140404A6C[289317484];
      v47 = dword_140404A6C[289317483];
      v48 = 3597LL * (int)dword_140404A6C[284024501];
      v187 = (int)dword_140404A6C[284024501];
      v192 = v48 * 4;
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v49 = dword_140404A6C[289317485];
      }
      else
      {
        v49 = dword_140404A6C[289317485];
        v7 = 0;
        v50 = 0;
        while ( 1 )
        {
          v51 = 8 - v49;
          v7 |= (~(-1 << v45)
               & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v46) >> SLOBYTE(dword_140404A6C[289317485]))) << v50;
          v190 = v7;
          if ( v45 < (unsigned int)(8 - v49) )
            break;
          v49 = 0;
          dword_140404A6C[289317485] = 0;
          if ( v45 == v51 )
          {
            dword_140404A6C[289317484] = ++v46;
            goto LABEL_121;
          }
          ++v46;
          v45 -= v51;
          v50 += v51;
          dword_140404A6C[289317484] = v46;
          if ( v45 <= 0 )
            goto LABEL_121;
        }
        v49 += v45;
        dword_140404A6C[289317485] = v49;
      }
LABEL_121:
      v52 = v7;
      if ( v7 == 1023 )
        v52 = -1;
      v53 = v52;
      dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292] = v52;
      if ( v52 != -1 )
      {
        v54 = 7166LL * v52;
        if ( v46 < 0x10000 )
        {
          if ( v46 + 4 <= v47 )
          {
            if ( v49 > 0 )
            {
              ++v46;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v46;
              v49 = 0;
            }
            v55 = v46;
            v46 += 4;
            dword_140404A6C[v54 + 280651341] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v55);
            dword_140404A6C[289317484] = v46;
          }
          if ( v46 < 0x10000 )
          {
            if ( v46 + 4 <= v47 )
            {
              if ( v49 > 0 )
              {
                ++v46;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v46;
                v49 = 0;
              }
              v56 = v46;
              v46 += 4;
              dword_140404A6C[v54 + 280651342] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v56);
              dword_140404A6C[289317484] = v46;
            }
            if ( v46 < 0x10000 )
            {
              if ( v46 + 4 <= v47 )
              {
                if ( v49 > 0 )
                {
                  ++v46;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v46;
                  v49 = 0;
                }
                v57 = v46;
                v46 += 4;
                dword_140404A6C[v54 + 280651365] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v57);
                dword_140404A6C[289317484] = v46;
              }
              if ( v46 < 0x10000 )
              {
                if ( v46 + 4 <= v47 )
                {
                  if ( v49 > 0 )
                  {
                    ++v46;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v46;
                    v49 = 0;
                  }
                  v58 = v46;
                  v46 += 4;
                  dword_140404A6C[v54 + 280651366] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v58);
                  dword_140404A6C[289317484] = v46;
                }
                if ( v46 < 0x10000 && v46 + 4 <= v47 )
                {
                  if ( v49 > 0 )
                  {
                    ++v46;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v46;
                  }
                  dword_140404A6C[v54 + 280651357] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v46);
                  dword_140404A6C[289317484] = v46 + 4;
                }
              }
            }
          }
        }
        sub_140115AE0(&dword_140404A6C[v54 + 280651334], 1);
        sub_140115AE0(&dword_140404A6C[v54 + 280651333], 8);
        v59 = dword_140404A6C[289317484];
        v60 = 8;
        if ( (int)dword_140404A6C[289317484] < 0x10000
          && (signed int)(dword_140404A6C[289317484] + 1) <= (int)dword_140404A6C[289317483] )
        {
          v61 = dword_140404A6C[289317485];
          v8 = 0;
          v62 = 0;
          while ( 1 )
          {
            v63 = 8 - v61;
            v8 |= (~(-1 << v60)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v59) >> SLOBYTE(dword_140404A6C[289317485]))) << v62;
            v191 = v8;
            if ( v60 < 8 - v61 )
              break;
            dword_140404A6C[289317485] = 0;
            if ( v60 == v63 )
            {
              dword_140404A6C[289317484] = v59 + 1;
              goto LABEL_158;
            }
            ++v59;
            v60 -= v63;
            v62 += v63;
            dword_140404A6C[289317484] = v59;
            v61 = 0;
            if ( v60 <= 0 )
              goto LABEL_158;
          }
          dword_140404A6C[289317485] = v60 + v61;
        }
LABEL_158:
        v64 = v8;
        if ( v8 == 255 )
          v64 = -1;
        dword_140404A6C[v54 + 280658335] = v64;
        sub_140115AE0(&dword_140404A6C[v54 + 280658337], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658338], 4);
        sub_140115AE0(&dword_140404A6C[v54 + 280658339], 4);
        sub_140115AE0(&dword_140404A6C[v54 + 280658334], 8);
        sub_140115AE0(&dword_140404A6C[v54 + 280658299], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658302], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658304], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658306], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658308], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658310], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280658312], 7);
        sub_140115AE0(&dword_140404A6C[v54 + 280651310], 8);
        sub_140115AE0(&dword_140404A6C[v54 + 280651311], 8);
        v49 = dword_140404A6C[289317485];
        v46 = dword_140404A6C[289317484];
        v47 = dword_140404A6C[289317483];
      }
      if ( v46 < 0x10000 )
      {
        if ( v46 + 4 <= v47 )
        {
          if ( v49 > 0 )
          {
            ++v46;
            dword_140404A6C[289317485] = 0;
            dword_140404A6C[289317484] = v46;
            v49 = 0;
          }
          v65 = v46;
          v46 += 4;
          v197 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v65);
          dword_140404A6C[289317484] = v46;
        }
        if ( v46 < 0x10000 )
        {
          if ( v46 + 4 <= v47 )
          {
            if ( v49 > 0 )
            {
              ++v46;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v46;
              v49 = 0;
            }
            v66 = v46;
            v46 += 4;
            v198 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v66);
            dword_140404A6C[289317484] = v46;
          }
          if ( v46 < 0x10000 && v46 + 4 <= v47 )
          {
            if ( v49 > 0 )
            {
              ++v46;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v46;
            }
            v199 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v46);
            dword_140404A6C[289317484] = v46 + 4;
          }
        }
      }
      if ( (_DWORD)v53 != -1 )
      {
        v67 = v198;
        v68 = 7166 * v53;
        dword_140404A6C[v68 + 280651680] = v197;
        dword_140404A6C[v68 + 280651682] = v199;
        dword_140404A6C[v68 + 280651681] = v67;
      }
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291638512), 1);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291638724), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291638728), 16);
      if ( dword_140404A6C[v48 + 71856342] == 10 )
      {
        v69 = dword_140404A6C[v48 + 71856343];
        v70 = v69;
        if ( (int)v69 < 0 )
        {
          v69 = 0;
          v70 = 0;
          dword_140404A6C[v48 + 71856343] = 0;
        }
        v71 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 56076 * v69 + 906829868);
        sub_140115AE0(v71, 8);
        v72 = 0;
        if ( *v71 > 0 )
        {
          v73 = 4673LL * (int)dword_140404A6C[v48 + 71856343];
          v74 = 14019LL * v70;
          do
          {
            v75 = v73 + v72;
            v76 = 3 * v75;
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * v75 + 906829872), 8);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v76 + 906829876), 24);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v76 + 906829880), 4);
            ++v72;
          }
          while ( v72 < (int)dword_140404A6C[v74 + 225654128] );
        }
      }
      v77 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        v78 = dword_140404A6C[289317483];
        v79 = dword_140404A6C[289317485];
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v77 = dword_140404A6C[289317484] + 1;
            v79 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v80 = v77;
          v77 += 4;
          dword_140404A6C[v48 + 71856272] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v80);
          dword_140404A6C[289317484] = v77;
        }
        if ( v77 < 0x10000 )
        {
          if ( v77 + 4 <= v78 )
          {
            if ( v79 > 0 )
            {
              ++v77;
              v79 = 0;
              dword_140404A6C[289317484] = v77;
              dword_140404A6C[289317485] = 0;
            }
            v81 = v77;
            v77 += 4;
            dword_140404A6C[v48 + 71856273] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v81);
            dword_140404A6C[289317484] = v77;
          }
          if ( v77 < 0x10000 )
          {
            if ( v77 + 4 <= v78 )
            {
              if ( v79 > 0 )
              {
                ++v77;
                v79 = 0;
                dword_140404A6C[289317484] = v77;
                dword_140404A6C[289317485] = 0;
              }
              v82 = v77;
              v77 += 4;
              dword_140404A6C[v48 + 71856274] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v82);
              dword_140404A6C[289317484] = v77;
            }
            if ( v77 < 0x10000 )
            {
              if ( v77 + 4 <= v78 )
              {
                if ( v79 > 0 )
                {
                  ++v77;
                  v79 = 0;
                  dword_140404A6C[289317484] = v77;
                  dword_140404A6C[289317485] = 0;
                }
                v83 = v77;
                v77 += 4;
                dword_140404A6C[v48 + 71856275] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v83);
                dword_140404A6C[289317484] = v77;
              }
              if ( v77 < 0x10000 && v77 + 4 <= v78 )
              {
                if ( v79 > 0 )
                {
                  ++v77;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v77;
                }
                dword_140404A6C[v48 + 71856276] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v77);
                dword_140404A6C[289317484] = v77 + 4;
              }
            }
          }
        }
      }
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291638520), 16);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291638808), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291644200), 10);
      v84 = (int)dword_140404A6C[v48 + 71856292];
      if ( (_DWORD)v84 != -1 )
        dword_140404A6C[7166 * v84 + 280651318] = dword_140404A6C[v48 + 71857711];
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291644204), 6);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v48 * 4 + 291644208), 8);
      v85 = v48 * 4 + 291644212;
      v86 = 0;
      v87 = v187;
      v88 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v85);
      v89 = v88;
      v90 = 7;
      do
      {
        sub_140115AE0(v89, 4);
        v6 = 0;
        v180 = 0;
        if ( *v88 > 0 )
        {
          do
            sub_140115AE0(&dword_140404A6C[3597 * v87 + 71857715 + v86 + v6++], 16);
          while ( v6 < *v88 );
          v87 = v187;
          v180 = v6;
        }
        v89 += 9;
        v86 += 9;
        v88 += 9;
        --v90;
      }
      while ( v90 );
      v91 = v192;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[71857986] + v192), 8);
      v92 = 0;
      if ( *(int *)((char *)&dword_140404A6C[71857986] + v192) > 0 )
      {
        v93 = dword_140404A6C[289317483];
        v94 = v192;
        v95 = dword_140404A6C[289317485];
        v96 = dword_140404A6C[289317484];
        v97 = v180;
        do
        {
          v98 = v91 + 72LL * v92;
          if ( v96 < 0x10000 && v96 + 4 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v96;
              v95 = 0;
            }
            v99 = v96;
            v96 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[71857987] + v98) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v99);
            dword_140404A6C[289317484] = v96;
          }
          v100 = 6;
          if ( v96 < 0x10000 && v96 <= v93 )
          {
            v97 = 0;
            v101 = 0;
            while ( 1 )
            {
              v102 = 8 - v95;
              v97 |= (~(-1 << v100)
                    & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v96) >> SLOBYTE(dword_140404A6C[289317485]))) << v101;
              v180 = v97;
              if ( v100 < (unsigned int)(8 - v95) )
                break;
              v95 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v100 == v102 )
              {
                dword_140404A6C[289317484] = ++v96;
                goto LABEL_232;
              }
              ++v96;
              v100 -= v102;
              v101 += v102;
              dword_140404A6C[289317484] = v96;
              if ( v100 <= 0 )
                goto LABEL_232;
            }
            v95 += v100;
            dword_140404A6C[289317485] = v95;
          }
LABEL_232:
          if ( v96 < 0x10000 && v96 + v97 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v96;
              v95 = 0;
            }
            sub_1401FC920(
              (__m128i *)((char *)&dword_140404A6C[71857988] + v98),
              (     __m128i *)((char *)&dword_140404A6C[289317486] + v96),
              v97);
            v97 = v180;
            v96 += v180;
            dword_140404A6C[289317484] = v96;
          }
          *((_BYTE *)&dword_140404A6C[71857988] + v94 + v97) = 0;
          if ( v96 < 0x10000 && v96 + 4 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v96;
              v95 = 0;
            }
            v103 = v96;
            v96 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[71858004] + v98) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v103);
            dword_140404A6C[289317484] = v96;
          }
          ++v92;
          v94 += 72;
        }
        while ( v92 < *(int *)((char *)&dword_140404A6C[71857986] + v91) );
        v6 = v180;
      }
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v91 + 291638484), 8);
      sub_14018F1B0();
      v104 = &dword_140404A6C[308307079];
      dword_140404A6C[179955277] = dword_140404A6C[289317484];
      v105 = &dword_140404A6C[308337814];
      v106 = 0;
      v193 = 0;
      v107 = 0;
      v194 = 0;
      v108 = 8;
      v187 = 0;
      v109 = 0;
      v195 = &dword_140404A6C[308307079];
      v196 = &dword_140404A6C[308337814];
      v192 = 8;
      do
      {
        sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v106 + 1237441664), 1);
        if ( *(v104 - 2) )
        {
          v110 = dword_140404A6C[289317484];
          v111 = 8;
          v112 = dword_140404A6C[289317483];
          if ( (int)dword_140404A6C[289317484] >= 0x10000
            || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
          {
            v113 = dword_140404A6C[289317485];
            v114 = v188;
          }
          else
          {
            v113 = dword_140404A6C[289317485];
            v114 = 0;
            v115 = 0;
            while ( 1 )
            {
              v116 = 8 - v113;
              v114 |= (~(-1 << v111)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v110) >> SLOBYTE(dword_140404A6C[289317485]))) << v115;
              v188 = v114;
              if ( v111 < 8 - v113 )
                break;
              v113 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v111 == v116 )
              {
                dword_140404A6C[289317484] = ++v110;
                goto LABEL_256;
              }
              ++v110;
              v111 -= v116;
              v115 += v116;
              dword_140404A6C[289317484] = v110;
              if ( v111 <= 0 )
                goto LABEL_256;
            }
            v113 += v111;
            dword_140404A6C[289317485] = v113;
          }
LABEL_256:
          v117 = v114;
          if ( v114 == 255 )
            v117 = -1;
          *v104 = v117;
          v118 = 8;
          if ( v110 >= 0x10000 || v110 + 1 > v112 )
          {
            v119 = v185;
          }
          else
          {
            v119 = 0;
            v120 = 0;
            while ( 1 )
            {
              v121 = 8 - v113;
              v119 |= (~(-1 << v118)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v110) >> SLOBYTE(dword_140404A6C[289317485]))) << v120;
              v185 = v119;
              if ( v118 < 8 - v113 )
                break;
              v113 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v118 == v121 )
              {
                dword_140404A6C[289317484] = ++v110;
                goto LABEL_268;
              }
              ++v110;
              v118 -= v121;
              v120 += v121;
              dword_140404A6C[289317484] = v110;
              if ( v118 <= 0 )
                goto LABEL_268;
            }
            v113 += v118;
            dword_140404A6C[289317485] = v113;
          }
LABEL_268:
          v122 = v119;
          v123 = 8;
          if ( v119 == 255 )
            v122 = -1;
          v104[2] = v122;
          if ( v110 >= 0x10000 || v110 + 1 > v112 )
          {
            v124 = v186;
          }
          else
          {
            v124 = 0;
            v125 = 0;
            while ( 1 )
            {
              v126 = 8 - v113;
              v124 |= (~(-1 << v123)
                     & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v110) >> SLOBYTE(dword_140404A6C[289317485]))) << v125;
              v186 = v124;
              if ( v123 < 8 - v113 )
                break;
              v113 = 0;
              dword_140404A6C[289317485] = 0;
              if ( v123 == v126 )
              {
                dword_140404A6C[289317484] = ++v110;
                goto LABEL_280;
              }
              ++v110;
              v123 -= v126;
              v125 += v126;
              dword_140404A6C[289317484] = v110;
              if ( v123 <= 0 )
                goto LABEL_280;
            }
            v113 += v123;
            dword_140404A6C[289317485] = v113;
          }
LABEL_280:
          v127 = v194;
          v128 = v187;
          v129 = v124;
          if ( v124 == 255 )
            v129 = -1;
          v130 = 4;
          v104[3] = v129;
          v180 = 4;
          do
          {
            v131 = 6;
            if ( v110 >= 0x10000 || v110 > v112 )
            {
              v132 = v181;
            }
            else
            {
              v132 = 0;
              v133 = 0;
              while ( 1 )
              {
                v134 = 8 - v113;
                v132 |= (~(-1 << v131)
                       & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v110) >> SLOBYTE(dword_140404A6C[289317485]))) << v133;
                v181 = v132;
                if ( v131 < 8 - v113 )
                  break;
                dword_140404A6C[289317485] = 0;
                if ( v131 == v134 )
                {
                  dword_140404A6C[289317484] = v110 + 1;
                  goto LABEL_293;
                }
                ++v110;
                v131 -= v134;
                v133 += v134;
                dword_140404A6C[289317484] = v110;
                v113 = 0;
                if ( v131 <= 0 )
                  goto LABEL_293;
              }
              dword_140404A6C[289317485] = v131 + v113;
            }
LABEL_293:
            v135 = v132;
            v136 = v132 + v193;
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v136 + 1237564608), 11);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v136 + 1237564864), 2);
            v110 = dword_140404A6C[289317484];
            v112 = dword_140404A6C[289317483];
            v137 = (__m128i *)((char *)&dword_140404A6C[512 * v135 + 308337941] + v127);
            if ( (int)dword_140404A6C[289317484] >= 0x10000
              || (v138 = (int)dword_140404A6C[v135 + 308337813 + v128],
                  (signed int)(v138 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483]) )
            {
              v113 = dword_140404A6C[289317485];
            }
            else
            {
              v113 = dword_140404A6C[289317485];
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v110 = dword_140404A6C[289317484] + 1;
                dword_140404A6C[289317485] = 0;
                ++dword_140404A6C[289317484];
                v113 = 0;
              }
              sub_1401FC920(v137, (     __m128i *)((char *)&dword_140404A6C[289317486] + v110), v138);
              v110 += v138;
              dword_140404A6C[289317484] = v110;
            }
            --v130;
          }
          while ( v130 );
          v104 = v195;
          v105 = v196;
          v6 = v180;
          v107 = v187;
          v109 = v193;
          v108 = v192;
          v195[30732] = ((_BYTE)v181 + 1) & 0x3F;
        }
        else
        {
          *(_QWORD *)(v105 - 1) = 0;
          *(_QWORD *)(v105 + 1) = 0;
          *(_QWORD *)(v105 + 3) = 0;
          *(_QWORD *)(v105 + 5) = 0;
          *(_QWORD *)(v105 + 7) = 0;
          *(_QWORD *)(v105 + 9) = 0;
          *(_QWORD *)(v105 + 11) = 0;
          *(_QWORD *)(v105 + 13) = 0;
          *(_QWORD *)(v105 + 15) = 0;
          *(_QWORD *)(v105 + 17) = 0;
          *(_QWORD *)(v105 + 19) = 0;
          *(_QWORD *)(v105 + 21) = 0;
          *(_QWORD *)(v105 + 23) = 0;
          *(_QWORD *)(v105 + 25) = 0;
          *(_QWORD *)(v105 + 27) = 0;
          *(_QWORD *)(v105 + 29) = 0;
          *(_QWORD *)(v105 + 31) = 0;
          *(_QWORD *)(v105 + 33) = 0;
          *(_QWORD *)(v105 + 35) = 0;
          *(_QWORD *)(v105 + 37) = 0;
          *(_QWORD *)(v105 + 39) = 0;
          *(_QWORD *)(v105 + 41) = 0;
          *(_QWORD *)(v105 + 43) = 0;
          *(_QWORD *)(v105 + 45) = 0;
          *(_QWORD *)(v105 + 47) = 0;
          *(_QWORD *)(v105 + 49) = 0;
          *(_QWORD *)(v105 + 51) = 0;
          *(_QWORD *)(v105 + 53) = 0;
          *(_QWORD *)(v105 + 55) = 0;
          *(_QWORD *)(v105 + 57) = 0;
          *(_QWORD *)(v105 + 59) = 0;
          *(_QWORD *)(v105 + 61) = 0;
          v181 = 64;
        }
        v109 += 96401;
        v106 = v194 + 385604;
        v193 = v109;
        v104 += 96401;
        v194 += 385604;
        v107 += 96401;
        v195 = v104;
        v105 += 96401;
        v187 = v107;
        --v108;
        v196 = v105;
        v192 = v108;
      }
      while ( v108 );
      sub_140115AE0(&dword_140404A6C[421831848], 16);
      v139 = dword_140404A6C[289317484];
      v140 = 6;
      v141 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (int)dword_140404A6C[289317484] > (int)dword_140404A6C[289317483] )
      {
        v142 = dword_140404A6C[289317485];
        v143 = v189;
      }
      else
      {
        v142 = dword_140404A6C[289317485];
        v143 = 0;
        v144 = 0;
        while ( 1 )
        {
          v145 = 8 - v142;
          v143 |= (~(-1 << v140)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v139) >> SLOBYTE(dword_140404A6C[289317485]))) << v144;
          v189 = v143;
          if ( v140 < (unsigned int)(8 - v142) )
            break;
          v142 = 0;
          dword_140404A6C[289317485] = 0;
          if ( v140 == v145 )
          {
            dword_140404A6C[289317484] = ++v139;
            goto LABEL_313;
          }
          ++v139;
          v140 -= v145;
          v144 += v145;
          dword_140404A6C[289317484] = v139;
          if ( v140 <= 0 )
            goto LABEL_313;
        }
        v142 += v140;
        dword_140404A6C[289317485] = v142;
      }
LABEL_313:
      v146 = 16;
      if ( v139 >= 0x10000 || v139 + 2 > (int)dword_140404A6C[289317483] )
      {
        v147 = v183;
      }
      else
      {
        v147 = 0;
        v148 = 0;
        while ( 1 )
        {
          v149 = 8 - v142;
          v147 |= (~(-1 << v146)
                 & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v139) >> SLOBYTE(dword_140404A6C[289317485]))) << v148;
          v183 = v147;
          if ( v146 < (unsigned int)(8 - v142) )
            break;
          v142 = 0;
          dword_140404A6C[289317485] = 0;
          if ( v146 == v149 )
          {
            dword_140404A6C[289317484] = ++v139;
            goto LABEL_323;
          }
          ++v139;
          v146 -= v149;
          v148 += v149;
          dword_140404A6C[289317484] = v139;
          if ( v146 <= 0 )
            goto LABEL_323;
        }
        v142 += v146;
        dword_140404A6C[289317485] = v142;
      }
LABEL_323:
      if ( v143 > 0 )
      {
        v150 = (unsigned int)v143;
        do
        {
          sub_14018DBF0(v147);
          if ( dword_140404A6C[308307070] == v147 )
          {
            ++dword_140404A6C[308307070];
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v147 = (unsigned __int16)(v147 + 1);
          --v150;
        }
        while ( v150 );
        v142 = dword_140404A6C[289317485];
        v139 = dword_140404A6C[289317484];
        v141 = dword_140404A6C[289317483];
        v183 = v147;
      }
      if ( v139 < 0x10000 )
      {
        if ( v139 + 4 <= v141 )
        {
          if ( v142 > 0 )
          {
            ++v139;
            dword_140404A6C[289317485] = 0;
            dword_140404A6C[289317484] = v139;
            v142 = 0;
          }
          v151 = v139;
          v139 += 4;
          dword_140404A6C[430859700] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v151);
          dword_140404A6C[289317484] = v139;
        }
        if ( v139 < 0x10000 )
        {
          if ( v139 + 4 <= v141 )
          {
            if ( v142 > 0 )
            {
              ++v139;
              dword_140404A6C[289317485] = 0;
              v142 = 0;
            }
            v139 += 4;
            dword_140404A6C[289317484] = v139;
          }
          if ( v139 < 0x10000 && v139 + 4 <= v141 )
          {
            if ( v142 > 0 )
            {
              ++v139;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v139;
            }
            v6 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v139);
            dword_140404A6C[289317484] = v139 + 4;
          }
        }
      }
      dword_140404A6C[430859699] = sub_140198F9B() - v6;
      dword_140404A6C[LOBYTE(dword_140404A6C[430859700]) + 430859702] = 1;
      v152 = dword_140404A6C[430859700];
      for ( i = (unsigned __int8)(LOBYTE(dword_140404A6C[430859701]) + 1);
            (_DWORD)i != LOBYTE(dword_140404A6C[430859700]);
            i = (unsigned __int8)(i + 1) )
      {
        dword_140404A6C[i + 430859702] = 0;
        v152 = dword_140404A6C[430859700];
      }
      dword_140404A6C[284023072] = dword_140404A6C[308307070];
      v154 = &dword_140404A6C[280658149];
      dword_140404A6C[430859701] = v152;
      do
      {
        *(v154 - 10) = 0;
        *v154 = 0;
        v154[10] = 0;
        v154[20] = 0;
        v154[30] = 0;
        v154[40] = 0;
        v154[50] = 0;
        v154 += 7166;
      }
      while ( (__int64)v154 < (__int64)&dword_140404A6C[282492645] );
      v155 = &dword_140404A6C[278845906];
      do
      {
        if ( *(v155 - 13) )
          *v155 = 0;
        if ( v155[1747] )
          v155[1760] = 0;
        v155 += 3520;
      }
      while ( (__int64)v155 < (__int64)&dword_140404A6C[280648146] );
      v156 = 0;
      v157 = &dword_140404A6C[278845903];
      do
      {
        if ( *(v157 - 10) )
        {
          v158 = (int)*v157;
          if ( (_DWORD)v158 != -1 )
          {
            v159 = (int)dword_140404A6C[1760 * v158 + 278845906];
            if ( (int)v159 < 8 )
            {
              dword_140404A6C[1760 * (int)*v157 + 278845907 + v159] = v156;
              ++dword_140404A6C[1760 * *v157 + 278845906];
            }
          }
          if ( *(v157 - 1) != -1 )
          {
            v160 = (int)v157[1];
            if ( (unsigned int)v160 <= 6 )
            {
              v161 = (int)*(v157 - 1);
              v162 = 28664 * v161 + 40 * v160;
              v163 = *(int *)((char *)&dword_140404A6C[280658139] + v162);
              if ( (int)v163 < 2 )
              {
                dword_140404A6C[7166 * v161 + 280658140 + 10 * (int)v157[1] + v163] = v156;
                ++*(unsigned int *)((char *)&dword_140404A6C[280658139] + v162);
              }
            }
          }
        }
        ++v156;
        v157 += 1760;
      }
      while ( v156 < 1024 );
      v164 = dword_140404A6C[456202457];
      v7 = v190;
      v8 = v191;
      if ( (int)dword_140404A6C[456202457] < v179 )
        v164 = v179;
      v3 = v178;
      dword_140404A6C[456202457] = v164;
      dword_140404A6C[421831846] = 1;
      dword_140404A6C[456202456] = v179;
      goto LABEL_367;
    }
    v19 = dword_140404A6C[289317484];
    v20 = 16;
    if ( (int)dword_140404A6C[289317484] >= 0x10000
      || (signed int)(dword_140404A6C[289317484] + 2) > (int)dword_140404A6C[289317483] )
    {
      v21 = dword_140404A6C[289317485];
    }
    else
    {
      v21 = dword_140404A6C[289317485];
      v4 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = 8 - v21;
        v4 |= (~(-1 << v20)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v22;
        v184 = v4;
        if ( v20 < 8 - v21 )
          break;
        v21 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v20 == v23 )
        {
          dword_140404A6C[289317484] = ++v19;
          goto LABEL_53;
        }
        ++v19;
        v20 -= v23;
        v22 += v23;
        dword_140404A6C[289317484] = v19;
        if ( v20 <= 0 )
          goto LABEL_53;
      }
      v21 += v20;
      dword_140404A6C[289317485] = v21;
    }
LABEL_53:
    v24 = v4 | 0xFFFF0000;
    v25 = 16;
    if ( (v4 & 0x8000) == 0 )
      v24 = v4;
    dword_140404A6C[283831505] = v24;
    if ( v19 < 0x10000 && v19 + 2 <= (int)dword_140404A6C[289317483] )
    {
      v5 = 0;
      v26 = 0;
      while ( 1 )
      {
        v27 = 8 - v21;
        v5 |= (~(-1 << v25)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v26;
        v182 = v5;
        if ( v25 < 8 - v21 )
          break;
        v21 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v25 == v27 )
        {
          dword_140404A6C[289317484] = ++v19;
          goto LABEL_64;
        }
        ++v19;
        v25 -= v27;
        v26 += v27;
        dword_140404A6C[289317484] = v19;
        if ( v25 <= 0 )
          goto LABEL_64;
      }
      v21 += v25;
      dword_140404A6C[289317485] = v21;
    }
LABEL_64:
    v28 = v5 | 0xFFFF0000;
    v29 = 16;
    if ( (v5 & 0x8000) == 0 )
      v28 = v5;
    dword_140404A6C[284023018] = v28;
    if ( v19 < 0x10000 && v19 + 2 <= (int)dword_140404A6C[289317483] )
    {
      v4 = 0;
      v30 = 0;
      while ( 1 )
      {
        v31 = 8 - v21;
        v4 |= (~(-1 << v29)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v30;
        v184 = v4;
        if ( v29 < 8 - v21 )
          break;
        v21 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v29 == v31 )
        {
          dword_140404A6C[289317484] = ++v19;
          goto LABEL_75;
        }
        ++v19;
        v29 -= v31;
        v30 += v31;
        dword_140404A6C[289317484] = v19;
        if ( v29 <= 0 )
          goto LABEL_75;
      }
      v21 += v29;
      dword_140404A6C[289317485] = v21;
    }
LABEL_75:
    v32 = v4 | 0xFFFF0000;
    v33 = 16;
    if ( (v4 & 0x8000) == 0 )
      v32 = v4;
    dword_140404A6C[283837378] = v32;
    if ( v19 < 0x10000 && v19 + 2 <= (int)dword_140404A6C[289317483] )
    {
      v5 = 0;
      v34 = 0;
      while ( 1 )
      {
        v35 = 8 - v21;
        v5 |= (~(-1 << v33)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v34;
        v182 = v5;
        if ( v33 < 8 - v21 )
          break;
        v21 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v33 == v35 )
        {
          dword_140404A6C[289317484] = ++v19;
          goto LABEL_86;
        }
        ++v19;
        v33 -= v35;
        v34 += v35;
        dword_140404A6C[289317484] = v19;
        if ( v33 <= 0 )
          goto LABEL_86;
      }
      v21 += v33;
      dword_140404A6C[289317485] = v21;
    }
LABEL_86:
    v36 = v5 | 0xFFFF0000;
    v37 = 16;
    if ( (v5 & 0x8000) == 0 )
      v36 = v5;
    dword_140404A6C[284023019] = v36;
    if ( v19 < 0x10000 && v19 + 2 <= (int)dword_140404A6C[289317483] )
    {
      v4 = 0;
      v38 = 0;
      while ( 1 )
      {
        v39 = 8 - v21;
        v4 |= (~(-1 << v37)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v38;
        v184 = v4;
        if ( v37 < 8 - v21 )
          break;
        v21 = 0;
        dword_140404A6C[289317485] = 0;
        if ( v37 == v39 )
        {
          dword_140404A6C[289317484] = ++v19;
          goto LABEL_97;
        }
        ++v19;
        v37 -= v39;
        v38 += v39;
        dword_140404A6C[289317484] = v19;
        if ( v37 <= 0 )
          goto LABEL_97;
      }
      v21 += v37;
      dword_140404A6C[289317485] = v21;
    }
LABEL_97:
    v40 = v4 | 0xFFFF0000;
    v41 = 16;
    if ( (v4 & 0x8000) == 0 )
      v40 = v4;
    dword_140404A6C[283843251] = v40;
    if ( v19 < 0x10000 && v19 + 2 <= (int)dword_140404A6C[289317483] )
    {
      v5 = 0;
      v42 = 0;
      while ( 1 )
      {
        v43 = 8 - v21;
        v5 |= (~(-1 << v41)
             & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v19) >> SLOBYTE(dword_140404A6C[289317485]))) << v42;
        v182 = v5;
        if ( v41 < 8 - v21 )
          break;
        dword_140404A6C[289317485] = 0;
        if ( v41 == v43 )
        {
          dword_140404A6C[289317484] = v19 + 1;
          goto LABEL_108;
        }
        ++v19;
        v41 -= v43;
        v42 += v43;
        dword_140404A6C[289317484] = v19;
        v21 = 0;
        if ( v41 <= 0 )
          goto LABEL_108;
      }
      dword_140404A6C[289317485] = v41 + v21;
    }
LABEL_108:
    v44 = v5 | 0xFFFF0000;
    if ( (v5 & 0x8000) == 0 )
      v44 = v5;
    dword_140404A6C[284023020] = v44;
    goto LABEL_111;
  }
  sub_140095FC0(a1, a2, a3);
  dword_140404A6C[283831310] = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v177
#undef v178
#undef v179
#undef v180
#undef v181
#undef v182
#undef v183
#undef v184
#undef v185
#undef v186
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B27E3A0: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFDB0: using guessed type unsigned int;
// 183EC5974: using guessed type unsigned int;
// 183ECB538: using guessed type unsigned int;
// 183F7AE14: using guessed type unsigned int;
// 183F7AE18: using guessed type unsigned int;
// 183F7AE1C: using guessed type unsigned int;
// 183F7AEEC: using guessed type unsigned int;
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1A4D2DCE4: using guessed type unsigned int;
// 1A4D2DD04: using guessed type unsigned int;
// 1A4D2DD08: using guessed type unsigned int;
// 1A6F9E13C: using guessed type unsigned int;
// 1A6F9E140: using guessed type unsigned int;
// 1AD04ADCC: using guessed type unsigned int;
// 1AD04ADD0: using guessed type unsigned int;

//----- (00000001400447C0) ----------------------------------------------------
__int64 sub_1400447C0()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  unsigned int *v2; // rbx
  __int64 result; // rax
  signed int v4; // ecx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  v0 = &dword_140404A6C[438881245];
  v1 = 256;
  v2 = &dword_140404A6C[438881247];
  do
  {
    result = sub_140115AE0(v2 - 2, 1);
    if ( *v0 )
    {
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        v5 = dword_140404A6C[289317483];
        result = dword_140404A6C[289317484] + 4;
        v6 = dword_140404A6C[289317485];
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v4 = dword_140404A6C[289317484] + 1;
            v6 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v7 = v4;
          v4 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          *v2 = result;
          dword_140404A6C[289317484] = v4;
        }
        if ( v4 < 0x10000 )
        {
          result = (unsigned int)(v4 + 32);
          if ( (int)result <= v5 )
          {
            if ( v6 > 0 )
            {
              ++v4;
              v6 = 0;
              dword_140404A6C[289317484] = v4;
              dword_140404A6C[289317485] = 0;
            }
            result = v4;
            v4 += 32;
            v8 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + result);
            v9 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + result);
            dword_140404A6C[289317484] = v4;
            *(_OWORD *)(v2 + 1) = v8;
            *(_OWORD *)(v2 + 5) = v9;
          }
          if ( v4 < 0x10000 )
          {
            result = (unsigned int)(v4 + 4);
            if ( (int)result <= v5 )
            {
              if ( v6 > 0 )
              {
                ++v4;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v4;
              }
              result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v4);
              v2[17] = result;
              dword_140404A6C[289317484] = v4 + 4;
            }
          }
        }
      }
    }
    v2 += 20;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140044920) ----------------------------------------------------
void sub_140044920()
{
  __int64 v0; // r13
  __int64 v1; // r15
  signed int v2; // eax
  signed int v3; // edx
  char *v4; // rcx
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // ebx
  signed int v8; // r8d
  char v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rdi
  int v14; // esi
  signed int v15; // edx
  __int64 v16; // r9
  _BYTE *v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  _BYTE *v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // r12
  signed int v24; // ebp
  unsigned int v25; // r15d
  __int64 v26; // rsi
  __int64 v27; // r13
  signed int v28; // eax
  char v29; // r9
  unsigned int v30; // r10d
  unsigned int v31; // ecx
  __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  signed int v34; // eax
  signed int v35; // r9d
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  unsigned int v38; // ecx
  unsigned int v39; // r9d
  unsigned int v40; // ecx
  signed int v41; // r9d
  unsigned int v42; // r10d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  signed int v45; // edx
  unsigned int v46; // r8d

  if ( dword_140404A6C[284024501] != -1 )
  {
    v0 = (int)dword_140404A6C[284024501];
    v1 = 3597LL * (int)dword_140404A6C[284024501];
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 9;
    LOBYTE(dword_140404A6C[289301095]) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856293], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856294], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856295], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856296], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856297], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856298], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856299], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856300], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856301], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856309], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856310], 24);
    v2 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v2 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v2) = dword_140404A6C[v1 + 71856325];
      dword_140404A6C[289301092] += 4;
    }
    sub_140115D90(&dword_140404A6C[v1 + 71856339], 8);
    sub_140115D90(&dword_140404A6C[v1 + 71856330], 4);
    sub_140115D90(&dword_140404A6C[308307069], 16);
    v3 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v3 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v3) = dword_140404A6C[456202728];
      v3 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v3;
      if ( v3 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v3;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v3;
        }
        v4 = (char *)&dword_140404A6C[289301094] + v3;
        v5 = dword_140404A6C[284024504];
        *(_QWORD *)v4 = *(_QWORD *)&dword_140404A6C[284024502];
        *((_DWORD *)v4 + 2) = v5;
        v3 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v6 = dword_140404A6C[v1 + 71856363];
    v7 = dword_140404A6C[v1 + 71856362] - v6;
    if ( (int)dword_140404A6C[v1 + 71856362] < v6 )
      v7 += 64;
    if ( v7 > 15 )
      v7 = 15;
    v8 = 4;
    if ( v3 < 0x10000 )
    {
      v9 = dword_140404A6C[289301093];
      v10 = v7 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v3) &= ~(((1 << v8) - 1) << v9);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        if ( v8 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v8 == v11 )
        {
          ++dword_140404A6C[289301092];
          goto LABEL_25;
        }
        v8 -= v11;
        v3 = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        ++dword_140404A6C[289301092];
        v9 = 0;
        if ( v8 <= 0 )
          goto LABEL_25;
      }
      dword_140404A6C[289301093] += v8;
    }
LABEL_25:
    sub_140115D90(&dword_140404A6C[v1 + 71856363], 8);
    if ( v7 > 0 )
    {
      v12 = (unsigned int)v7;
      while ( 1 )
      {
        v13 = v1 * 4 + 84LL * v6;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856367] + v13), 4);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[71856367] + v13);
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 6);
            v18 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v13);
            if ( v18 > 0 )
            {
              v19 = (unsigned int)v18;
              v20 = dword_140404A6C[289301092];
              v21 = (char *)&dword_140404A6C[71856372] + v13;
              do
              {
                if ( v20 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v20;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v20;
                  }
                  *((_BYTE *)&dword_140404A6C[289301094] + v20) = *v21;
                  v20 = ++dword_140404A6C[289301092];
                }
                ++v21;
                --v19;
              }
              while ( v19 );
            }
            v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 4);
            v15 = dword_140404A6C[289301092];
LABEL_48:
            if ( v14 == 3 )
            {
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
              sub_140115D90(v22, 16);
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856370] + v13), 16);
              v15 = dword_140404A6C[289301092];
            }
            else if ( (unsigned int)(v14 - 4) <= 1 && v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856368]
                                                                                             + v13);
              v15 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v15;
              if ( v15 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v15;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v15;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                               + v13);
                v15 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
            goto LABEL_61;
          }
          v15 = dword_140404A6C[289301092];
        }
        else
        {
          sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 8);
          v15 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v15 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                           + v13);
            v15 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v16 = 16;
          v17 = (char *)&dword_140404A6C[71856372] + v13;
          do
          {
            if ( v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *((_BYTE *)&dword_140404A6C[289301094] + v15) = *v17;
              v15 = ++dword_140404A6C[289301092];
            }
            ++v17;
            --v16;
          }
          while ( v16 );
        }
        v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
        if ( v14 != 2 )
          goto LABEL_48;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 16);
        v15 = dword_140404A6C[289301092];
LABEL_61:
        v6 = ((_BYTE)v6 + 1) & 0x3F;
        if ( !--v12 )
          goto LABEL_64;
      }
    }
    v15 = dword_140404A6C[289301092];
LABEL_64:
    v23 = 32901 * v0;
    v24 = 11;
    v25 = dword_140404A6C[32901 * v0 + 299853696] & 0x3F;
    dword_140404A6C[32901 * v0 + 299853696] = v25;
    v26 = ((_BYTE)v25 - 6) & 0x3F;
    if ( (_DWORD)v26 != v25 )
    {
      v27 = 32901 * v0;
      do
      {
        v28 = 6;
        if ( v15 < 0x10000 )
        {
          v29 = dword_140404A6C[289301093];
          v30 = v26;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v28) - 1) << v29);
            *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
            v31 = 8 - dword_140404A6C[289301093];
            if ( v28 < 8 - dword_140404A6C[289301093] )
              break;
            dword_140404A6C[289301093] = 0;
            if ( v28 == v31 )
            {
              ++dword_140404A6C[289301092];
              goto LABEL_74;
            }
            v28 -= v31;
            v15 = dword_140404A6C[289301092] + 1;
            v30 >>= v31;
            ++dword_140404A6C[289301092];
            v29 = 0;
            if ( v28 <= 0 )
              goto LABEL_74;
          }
          dword_140404A6C[289301093] += v28;
        }
LABEL_74:
        v32 = v26 + v27;
        sub_140115D90(&dword_140404A6C[v32 + 299853762], 11);
        sub_140115D90(&dword_140404A6C[v32 + 299853698], 2);
        v15 = dword_140404A6C[289301092];
        v33 = (int)dword_140404A6C[v32 + 299853762];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v15 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = 0;
            ++dword_140404A6C[289301092];
          }
          sub_1401FC920(
            (__m128i *)((char *)&dword_140404A6C[289301094] + v15),
            (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v26 + 299853826 + v23],
            v33);
          v15 = v33 + dword_140404A6C[289301092];
          dword_140404A6C[289301092] += v33;
        }
        v26 = ((_BYTE)v26 + 1) & 0x3F;
      }
      while ( (_DWORD)v26 != v25 );
    }
    sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 * 4 + 1203628128), 1);
    v34 = dword_140404A6C[289301092];
    v35 = 8;
    LOBYTE(v36) = dword_140404A6C[289301093];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v37 = LOBYTE(dword_140404A6C[284021982]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v35) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v37 << SLOBYTE(dword_140404A6C[289301093]);
        v38 = 8 - dword_140404A6C[289301093];
        v34 = dword_140404A6C[289301092];
        if ( v35 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v35 == v38 )
        {
          v34 = ++dword_140404A6C[289301092];
          v36 = 0;
          goto LABEL_87;
        }
        v34 = dword_140404A6C[289301092] + 1;
        v37 >>= v38;
        LOBYTE(v36) = 0;
        ++dword_140404A6C[289301092];
        v35 -= v38;
        dword_140404A6C[289301093] = 0;
        if ( v35 <= 0 )
          goto LABEL_88;
      }
      v36 = v35 + dword_140404A6C[289301093];
LABEL_87:
      dword_140404A6C[289301093] = v36;
LABEL_88:
      if ( v34 < 0x10000 )
      {
        v39 = dword_140404A6C[421835947] & 0x7FF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v24) - 1) << v36);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v39 << SLOBYTE(dword_140404A6C[289301093]);
          v40 = 8 - dword_140404A6C[289301093];
          v34 = dword_140404A6C[289301092];
          if ( v24 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v24 == v40 )
          {
            v34 = ++dword_140404A6C[289301092];
            v36 = 0;
            goto LABEL_96;
          }
          v34 = dword_140404A6C[289301092] + 1;
          v39 >>= v40;
          LOBYTE(v36) = 0;
          ++dword_140404A6C[289301092];
          v24 -= v40;
          dword_140404A6C[289301093] = 0;
          if ( v24 <= 0 )
            goto LABEL_97;
        }
        v36 = v24 + dword_140404A6C[289301093];
LABEL_96:
        dword_140404A6C[289301093] = v36;
      }
    }
LABEL_97:
    v41 = 8;
    if ( v34 < 0x10000 )
    {
      v42 = LOBYTE(dword_140404A6C[421846188]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v41) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v42 << SLOBYTE(dword_140404A6C[289301093]);
        v43 = 8 - dword_140404A6C[289301093];
        if ( v41 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v41 == v43 )
        {
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          goto LABEL_105;
        }
        LOBYTE(v36) = 0;
        v34 = dword_140404A6C[289301092] + 1;
        v42 >>= v43;
        v41 -= v43;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v41 <= 0 )
          goto LABEL_105;
      }
      dword_140404A6C[289301093] += v41;
    }
LABEL_105:
    v44 = sub_140198F9B();
    v45 = dword_140404A6C[289301092];
    dword_140404A6C[LOBYTE(dword_140404A6C[430859442]) + 430859443] = v44;
    v46 = dword_140404A6C[430859442];
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = dword_140404A6C[430859442];
      v45 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] += 4;
    }
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = *(_DWORD *)(4LL * (unsigned __int8)v46
                                                                               + 1727651128
                                                                               + ((intptr_t)dword_140404A6C - 0x404a6cLL));
      dword_140404A6C[289301092] += 4;
    }
    dword_140404A6C[430859442] = v46 + 1;
    sub_140130350(dword_140404A6C[456202714], dword_140404A6C[456202715], *(__int64 *)&dword_140404A6C[456202717]);
  }
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC8: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 1A6F9DD34: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (00000001400453F0) ----------------------------------------------------
__int64 sub_1400453F0()
{
  __int64 result; // rax

  if ( *(_QWORD *)&dword_140404A6C[18215111] )
  {
    result = ((__int64 (*)(void))FreeLibrary)();
    *(_QWORD *)&dword_140404A6C[18215111] = 0;
  }
  return result;
}

// 14026E000: invalid function type 'BOOL (__stdcall *FreeLibrary)(HMODULE hLibModule)' has been ignored
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140045420) ----------------------------------------------------
__int64            sub_140045420(int *a1, _DWORD *a2)
{
  float v2; // xmm6_4
  int v3; // r12d
  int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  _DWORD *v9; // rax
  float v10; // xmm7_4
  int v11; // xmm8_4
  int v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  int v16; // esi
  int *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int *v21; // rcx
  int *v22; // r10
  __int64 v23; // r8
  int *v24; // rax
  __int64 v25; // r9
  int v26; // xmm9_4
  int v27; // xmm10_4
  int v28; // xmm11_4
  float v29; // xmm1_4
  int v30; // xmm12_4
  int v31; // xmm13_4
  int v32; // xmm14_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37; // edx
  __int64 v38; // rcx
  int v39; // r12d
  int *v40; // rax
  __int64 v41; // rcx
  int v42; // esi
  float v43; // xmm7_4
  int *v44; // rdi
  int v45; // ebx
  float *v46; // r14
  float *v47; // r15
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm5_4
  bool v54; // zf
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  int v62; // r12d
  int *v63; // r10
  int *v64; // r15
  __int64 v65; // rdx
  int v66; // r8d
  __int64 v67; // r9
  int *v68; // rax
  float v69; // xmm13_4
  float v70; // xmm14_4
  float v71; // xmm15_4
  float v72; // xmm10_4
  float v73; // xmm11_4
  float v74; // xmm12_4
  __int64 v75; // rcx
  int v76; // edx
  int *v77; // rax
  __int64 v78; // rcx
  int v79; // r14d
  _DWORD *v80; // rdi
  BOOL v81; // esi
  int v82; // eax
  int v83; // eax
  int v84; // ecx
  int v85; // esi
  int *v86; // rdi
  float v87; // xmm3_4
  float v88; // xmm4_4
  float v89; // xmm5_4
  float v90; // xmm0_4
  int v91; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140045420[304];
#define v93 (*(_DWORD (*)[14])(void *)(sr_frame_140045420 + 0)) /* [rsp+8h] */
#define v94 (*(float (*))(void *)(sr_frame_140045420 + 80)) /* [rsp+58h] */
#define v95 (*(int (*))(void *)(sr_frame_140045420 + 84)) /* [rsp+5Ch] */
#define v96 (*(__int64 (*))(void *)(sr_frame_140045420 + 88)) /* [rsp+60h] */
#define v97 (*(float (*))(void *)(sr_frame_140045420 + 96)) /* [rsp+68h] */
#define v98 (*(float (*))(void *)(sr_frame_140045420 + 104)) /* [rsp+70h] */
#define v99 (*(float (*))(void *)(sr_frame_140045420 + 108)) /* [rsp+74h] */
#define v100 (*(__int64 (*))(void *)(sr_frame_140045420 + 112)) /* [rsp+78h] */
#define v101 (*(float (*))(void *)(sr_frame_140045420 + 120)) /* [rsp+80h] */
#define v102 (*(float (*))(void *)(sr_frame_140045420 + 128)) /* [rsp+88h] */
#define v103 (*(float (*))(void *)(sr_frame_140045420 + 136)) /* [rsp+90h] */
#define v104 (*(float (*))(void *)(sr_frame_140045420 + 140)) /* [rsp+94h] */
#define v105 (*(float (*))(void *)(sr_frame_140045420 + 144)) /* [rsp+98h] */
#define v106 (*(float (*))(void *)(sr_frame_140045420 + 152)) /* [rsp+A0h] */
#define v107 (*(float (*))(void *)(sr_frame_140045420 + 156)) /* [rsp+A4h] */
#define v108 (*(float (*))(void *)(sr_frame_140045420 + 160)) /* [rsp+A8h] */
#define v109 (*(int * (*))(void *)(sr_frame_140045420 + 168)) /* [rsp+B0h] */
#define v110 (*(int (*))(void *)(sr_frame_140045420 + 180)) /* [rsp+BCh] */
#define v111 (*(int (*))(void *)(sr_frame_140045420 + 184)) /* [rsp+C0h] */
#define i (*(int * (*))(void *)(sr_frame_140045420 + 192)) /* [rsp+C8h] */
#define v113 (*(float (*)[3])(void *)(sr_frame_140045420 + 200)) /* [rsp+D0h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140045420 + 212)) /* [rsp+DCh] */
#define v115 (*(float (*))(void *)(sr_frame_140045420 + 220)) /* [rsp+E4h] */
#define v116 (*(float (*))(void *)(sr_frame_140045420 + 240)) /* [rsp+F8h] */
#define v117 (*(float (*))(void *)(sr_frame_140045420 + 244)) /* [rsp+FCh] */
#define v118 (*(float (*))(void *)(sr_frame_140045420 + 248)) /* [rsp+100h] */
#define v119 (*(float (*))(void *)(sr_frame_140045420 + 252)) /* [rsp+104h] */
#define v120 (*(float (*))(void *)(sr_frame_140045420 + 256)) /* [rsp+108h] */
#define v121 (*(float (*))(void *)(sr_frame_140045420 + 260)) /* [rsp+10Ch] */
#define v122 (*(float (*)[3])(void *)(sr_frame_140045420 + 264)) /* [rsp+110h] */
#define v123 (*(float (*)[3])(void *)(sr_frame_140045420 + 276)) /* [rsp+11Ch] */
#define v124 (*(__int64 (*))(void *)(sr_frame_140045420 + 288)) /* [rsp+128h] */

  v2 = v94;
  v3 = 0;
  v5 = a1;
  for ( i = a1; v3 < *v5; ++v3 )
  {
    v6 = 0;
    v7 = 23LL * v3;
    v8 = 0;
    v9 = v5 + 2436;
    v10 = *(float *)&v5[v7 + 21];
    v11 = v5[v7 + 22];
    v12 = v5[v7 + 23];
    v13 = *(float *)&v5[v7 + 18];
    v14 = *(float *)&v5[v7 + 19];
    v15 = *(float *)&v5[v7 + 20];
    v99 = v10;
    v116 = v10;
    v95 = v11;
    v117 = *(float *)&v11;
    v118 = *(float *)&v12;
    v119 = v13;
    v120 = v14;
    v121 = v15;
    while ( (int)*(v9 - 1) <= 0 || *v9 != v3 || v9[1] || v9[2] || v9[3] )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v8;
      v9 += 18;
      if ( v8 >= 64 )
      {
        LODWORD(v6) = -1;
        goto LABEL_10;
      }
    }
    v10 = *(float *)&v5[18 * v6 + 2440];
    v11 = v5[18 * v6 + 2441];
    v12 = v5[18 * v6 + 2442];
    v99 = v10;
    v116 = v10;
    v95 = v11;
    v117 = *(float *)&v11;
    v118 = *(float *)&v12;
LABEL_10:
    if ( sub_1400DA580((__int64)v113, (__int64)a2, &v116, &v119) )
    {
      v96 = v114;
      v97 = v115;
      v2 = (float)((float)((float)(v113[1] - v14) * *((float *)&v114 + 1))
                 + (float)((float)(v113[0] - v13) * *(float *)&v114))
         + (float)((float)(v113[2] - v15) * v115);
      v94 = v2;
      if ( v2 < 0.0625 )
      {
        v94 = 0.0625;
        v2 = 0.0625;
      }
      v16 = 0;
      v100 = 0;
      v101 = 0.0;
      if ( v5[v7 + 1] > 0 )
      {
        v17 = &v5[v7 + 2];
        do
        {
          sub_140005160(*v17, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          ++v16;
          v17 += 4;
        }
        while ( v16 < v5[v7 + 1] );
        v10 = v99;
        v11 = v95;
      }
      if ( (_DWORD)v6 == -1 )
      {
        v18 = sub_140048090((__int64)v5);
        if ( v18 != -1 )
        {
          v19 = 9LL * v18;
          v5[2 * v19 + 2435] = 2;
          v5[2 * v19 + 2436] = v3;
          *(_QWORD *)&v5[2 * v19 + 2437] = 0;
          v5[2 * v19 + 2439] = 0;
          *(float *)&v5[2 * v19 + 2440] = v10;
          v5[2 * v19 + 2441] = v11;
          v5[2 * v19 + 2442] = v12;
        }
      }
      else
      {
        v5[18 * (int)v6 + 2435] = 2;
      }
    }
  }
  v20 = v5[1473];
  v102 = 0.0;
  if ( v20 > 0 )
  {
    v21 = v5 + 1475;
    v22 = v5 + 2436;
    v109 = v5 + 1475;
    do
    {
      v23 = *(v21 - 1);
      v24 = v22;
      v25 = *v21;
      v26 = v5[23 * v23 + 21];
      v27 = v5[23 * v23 + 22];
      v28 = v5[23 * v23 + 23];
      v116 = *(float *)&v26;
      v117 = *(float *)&v27;
      v118 = *(float *)&v28;
      v110 = v23;
      v111 = v25;
      v29 = *(float *)&v5[23 * v25 + 19];
      v30 = v5[23 * v25 + 21];
      v31 = v5[23 * v25 + 22];
      v32 = v5[23 * v25 + 23];
      LODWORD(v122[0]) = v5[23 * v25 + 18];
      v33 = *(float *)&v5[23 * v25 + 20];
      v122[1] = v29;
      v34 = *(float *)&v5[23 * v23 + 18];
      v122[2] = v33;
      v35 = *(float *)&v5[23 * v23 + 19];
      v123[0] = v34;
      v36 = *(float *)&v5[23 * v23 + 20];
      *(float *)&v37 = 0.0;
      *(float *)&v95 = 0.0;
      v38 = 0;
      v119 = *(float *)&v30;
      v120 = *(float *)&v31;
      v121 = *(float *)&v32;
      v123[1] = v35;
      v123[2] = v36;
      while ( *(v24 - 1) <= 0 || *v24 != (_DWORD)v23 || v24[1] || v24[2] || v24[3] )
      {
        ++v37;
        ++v38;
        v24 += 18;
        v95 = v37;
        if ( v38 >= 64 )
        {
          *(float *)&v37 = NAN;
          *(float *)&v95 = NAN;
          break;
        }
      }
      v39 = 0;
      v40 = v22;
      v41 = 0;
      while ( *(v40 - 1) <= 0 || *v40 != (_DWORD)v25 || v40[1] || v40[2] || v40[3] )
      {
        ++v39;
        ++v41;
        v40 += 18;
        if ( v41 >= 64 )
        {
          v39 = -1;
          break;
        }
      }
      if ( *(float *)&v37 != NAN )
      {
        v26 = v5[18 * v37 + 2440];
        v27 = v5[18 * v37 + 2441];
        v28 = v5[18 * v37 + 2442];
        v116 = *(float *)&v26;
        v117 = *(float *)&v27;
        v118 = *(float *)&v28;
      }
      if ( v39 != -1 )
      {
        v30 = v5[18 * v39 + 2440];
        v31 = v5[18 * v39 + 2441];
        v32 = v5[18 * v39 + 2442];
        v119 = *(float *)&v30;
        v120 = *(float *)&v31;
        v121 = *(float *)&v32;
      }
      v42 = 0;
      v43 = 65536.0;
      v99 = 65536.0;
      if ( (int)a2[16386] <= 0 )
        goto LABEL_71;
      v44 = a2 + 16387;
      v45 = 0;
      do
      {
        if ( sub_140184710(&v103, &v116, &v119, v122, v123, (float *)&a2[4 * *v44 + 2], (float *)&a2[4 * v44[1] + 2]) )
        {
          v46 = (float *)&a2[4 * v44[1] + 2];
          v47 = (float *)&a2[4 * *v44 + 2];
          if ( sub_1400D6890(&v103, &v106, &v98, &v116, &v119, v47, v46, 64.0) && v43 > v98 )
          {
            v45 = 1;
            v48 = v103 - v106;
            v49 = v104 - v107;
            v50 = v105 - v108;
            v2 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
            v94 = v2;
            if ( v2 == 0.0 )
            {
              v96 = 0;
              v97 = 0.0;
            }
            else
            {
              *(float *)&v96 = (float)(1.0 / v2) * v48;
              *((float *)&v96 + 1) = (float)(1.0 / v2) * v49;
              v97 = (float)(1.0 / v2) * v50;
            }
            if ( sub_1400D6890(&v103, &v106, &v98, v122, v123, v47, v46, 64.0) )
            {
              v51 = v106 - v103;
              v52 = v107 - v104;
              v53 = v108 - v105;
              *(float *)&v100 = v106 - v103;
              *((float *)&v100 + 1) = v107 - v104;
              v101 = v108 - v105;
              v2 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
              v94 = v2;
              if ( v2 == 0.0 )
              {
                v96 = 0;
                v97 = 0.0;
              }
              else
              {
                *(float *)&v96 = (float)(1.0 / v2) * v51;
                *((float *)&v96 + 1) = (float)(1.0 / v2) * v52;
                v97 = (float)(1.0 / v2) * v53;
              }
            }
            v43 = v98;
          }
        }
        ++v42;
        v44 += 2;
      }
      while ( v42 < a2[16386] );
      v54 = v45 == 0;
      v99 = v43;
      v5 = i;
      if ( !v54 )
      {
        if ( v2 < 0.0625 )
        {
          v94 = 0.0625;
          v2 = 0.0625;
        }
        v93[12] = 1048576000;
        v93[10] = 1031798784;
        v55 = v109[2];
        v100 = 0;
        v101 = 0.0;
        sub_140005160(v55, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
        if ( *(float *)&v95 == NAN )
        {
          v56 = sub_140048090((__int64)v5);
          if ( v56 != -1 )
          {
            v57 = 9LL * v56;
            v58 = v110;
            v5[2 * v57 + 2435] = 2;
            v5[2 * v57 + 2436] = v58;
            *(_QWORD *)&v5[2 * v57 + 2437] = 0;
            v5[2 * v57 + 2439] = 0;
            v5[2 * v57 + 2440] = v26;
            v5[2 * v57 + 2441] = v27;
            v5[2 * v57 + 2442] = v28;
          }
        }
        else
        {
          v5[18 * v95 + 2435] = 2;
        }
        if ( v39 == -1 )
        {
          v59 = sub_140048090((__int64)v5);
          v22 = v5 + 2436;
          if ( v59 != -1 )
          {
            v60 = 9LL * v59;
            v61 = v111;
            v5[2 * v60 + 2435] = 2;
            v5[2 * v60 + 2436] = v61;
            *(_QWORD *)&v5[2 * v60 + 2437] = 0;
            v5[2 * v60 + 2439] = 0;
            v5[2 * v60 + 2440] = v30;
            v5[2 * v60 + 2441] = v31;
            v5[2 * v60 + 2442] = v32;
          }
          goto LABEL_71;
        }
        v5[18 * v39 + 2435] = 2;
      }
      v22 = v5 + 2436;
LABEL_71:
      v20 = v5[1473];
      v21 = v109 + 5;
      ++LODWORD(v102);
      v109 += 5;
    }
    while ( SLODWORD(v102) < v20 );
  }
  v62 = 0;
  if ( v20 > 0 )
  {
    v63 = v5 + 2436;
    v64 = v5 + 1477;
    do
    {
      v65 = *(v64 - 3);
      v66 = 0;
      v67 = *(v64 - 2);
      v68 = v63;
      v69 = *(float *)&v5[23 * v65 + 18];
      v70 = *(float *)&v5[23 * v65 + 19];
      v71 = *(float *)&v5[23 * v65 + 20];
      v102 = v69;
      v116 = v69;
      *(float *)&v95 = v70;
      v117 = v70;
      v98 = v71;
      v118 = v71;
      v72 = *(float *)&v5[23 * v67 + 18];
      v73 = *(float *)&v5[23 * v67 + 19];
      v74 = *(float *)&v5[23 * v67 + 20];
      v75 = 0;
      v119 = v72;
      v120 = v73;
      v121 = v74;
      while ( *(v68 - 1) <= 0 || *v68 != (_DWORD)v65 || v68[1] || v68[2] || v68[3] )
      {
        ++v66;
        ++v75;
        v68 += 18;
        if ( v75 >= 64 )
        {
          v66 = -1;
          break;
        }
      }
      v76 = 0;
      v77 = v63;
      v78 = 0;
      while ( *(v77 - 1) <= 0 || *v77 != (_DWORD)v67 || v77[1] || v77[2] || v77[3] )
      {
        ++v76;
        ++v78;
        v77 += 18;
        if ( v78 >= 64 )
        {
          v76 = -1;
          break;
        }
      }
      if ( v66 != -1 )
      {
        v69 = *(float *)&v5[18 * v66 + 2440];
        v70 = *(float *)&v5[18 * v66 + 2441];
        v71 = *(float *)&v5[18 * v66 + 2442];
        v102 = v69;
        v116 = v69;
        *(float *)&v95 = v70;
        v117 = v70;
        v98 = v71;
        v118 = v71;
      }
      if ( v76 != -1 )
      {
        v72 = *(float *)&v5[18 * v76 + 2440];
        v73 = *(float *)&v5[18 * v76 + 2441];
        v74 = *(float *)&v5[18 * v76 + 2442];
        v119 = v72;
        v120 = v73;
        v121 = v74;
      }
      v79 = 0;
      if ( (int)a2[8193] > 0 )
      {
        v80 = a2 + 8194;
        do
        {
          v81 = 0;
          if ( *v80 == 3 )
          {
            v82 = sub_140035B70(
                    &v103,
                    (float *)&v96,
                    &v94,
                    &v116,
                    &v119,
                    0.0625,
                    (float *)&a2[4 * v80[1] + 2],
                    (float *)&a2[4 * v80[2] + 2],
                    (float *)&a2[4 * v80[3] + 2]);
            v2 = v94;
            v81 = v82 != 0;
          }
          if ( *v80 == 4
            && (v83 = sub_1400346F0(
                        &v103,
                        (float *)&v96,
                        &v94,
                        &v116,
                        &v119,
                        0.0625,
                        (float *)&a2[4 * v80[1] + 2],
                        (float *)&a2[4 * v80[2] + 2],
                        (float *)&a2[4 * v80[3] + 2],
                        (float *)&a2[4 * v80[4] + 2]),
                v2 = v94,
                v83)
            || v81 )
          {
            v84 = *v64;
            v100 = 0;
            v101 = 0.0;
            v94 = 0.0625 - v2;
            v2 = 0.0625 - v2;
            sub_140005160(v84, (unsigned int *)&v100, (unsigned int *)&v96, v2, 0x3C23D70Au, 0.0625, 0x3E800000u);
          }
          ++v79;
          v80 += 8;
        }
        while ( v79 < a2[8193] );
        v69 = v102;
        v70 = *(float *)&v95;
        v71 = v98;
        v5 = i;
      }
      v85 = 0;
      if ( (int)a2[16386] > 0 )
      {
        v86 = a2 + 16387;
        do
        {
          if ( sub_1400D6890(
                 &v103,
                 &v106,
                 &v99,
                 &v116,
                 &v119,
                 (float *)&a2[4 * *v86 + 2],
                 (float *)&a2[4 * v86[1] + 2],
                 0.0625) )
          {
            v87 = v103 - v106;
            v88 = v104 - v107;
            v89 = v105 - v108;
            v90 = fsqrt((float)((float)(v88 * v88) + (float)(v87 * v87)) + (float)(v89 * v89));
            if ( v90 == 0.0 )
            {
              v96 = 0;
              v97 = 0.0;
            }
            else
            {
              *(float *)&v96 = (float)(1.0 / v90) * v87;
              *((float *)&v96 + 1) = (float)(1.0 / v90) * v88;
              v97 = (float)(1.0 / v90) * v89;
            }
            v91 = *v64;
            v2 = 0.0625 - v99;
            v94 = 0.0625 - v99;
            *(float *)&v100 = v103 - (float)((float)(v72 + v69) * 0.5);
            *((float *)&v100 + 1) = v104 - (float)((float)(v73 + v70) * 0.5);
            v101 = v105 - (float)((float)(v74 + v71) * 0.5);
            sub_140005160(
              v91,
              (unsigned int *)&v100,
              (unsigned int *)&v96,
              0.0625 - v99,
              0x3C23D70Au,
              0.0625,
              0x3E800000u);
          }
          ++v85;
          v86 += 2;
        }
        while ( v85 < a2[16386] );
      }
      ++v62;
      v63 = v5 + 2436;
      v64 += 5;
    }
    while ( v62 < v5[1473] );
  }
  return 0; /* the function has no caller */
}
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
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef i
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124


//----- (00000001400462B0) ----------------------------------------------------
__int64            sub_1400462B0(
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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400462B0[13280];
#define v333 (*(unsigned int * (*))(void *)(sr_frame_1400462B0 + 0)) /* [rsp+0h] */
#define v334 (*(float * (*))(void *)(sr_frame_1400462B0 + 8)) /* [rsp+8h] */
#define v335 (*(unsigned __int64 * (*))(void *)(sr_frame_1400462B0 + 16)) /* [rsp+10h] */
#define v336 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 24)) /* [rsp+18h] */
#define v337 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 32)) /* [rsp+20h] */
#define v338 (*(int (*))(void *)(sr_frame_1400462B0 + 48)) /* [rsp+30h] */
#define v339 (*(int (*))(void *)(sr_frame_1400462B0 + 52)) /* [rsp+34h] */
#define v340 (*(float (*))(void *)(sr_frame_1400462B0 + 56)) /* [rsp+38h] */
#define v341 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 64)) /* [rsp+40h] */
#define v342 (*(float (*))(void *)(sr_frame_1400462B0 + 72)) /* [rsp+48h] */
#define v343 (*(float (*))(void *)(sr_frame_1400462B0 + 80)) /* [rsp+50h] */
#define v344 (*(float (*))(void *)(sr_frame_1400462B0 + 88)) /* [rsp+58h] */
#define v345 (*(float (*))(void *)(sr_frame_1400462B0 + 92)) /* [rsp+5Ch] */
#define v346 (*(float (*))(void *)(sr_frame_1400462B0 + 6832)) /* [rsp+1AB0h] */
#define v347 (*(unsigned __int64 (*))(void *)(sr_frame_1400462B0 + 6840)) /* [rsp+1AB8h] */
#define v348 (*(float (*))(void *)(sr_frame_1400462B0 + 6848)) /* [rsp+1AC0h] */
#define v349 (*(signed __int64 (*))(void *)(sr_frame_1400462B0 + 6856)) /* [rsp+1AC8h] */
#define v350 (*(float (*))(void *)(sr_frame_1400462B0 + 6864)) /* [rsp+1AD0h] */
#define v351 (*(float (*))(void *)(sr_frame_1400462B0 + 6868)) /* [rsp+1AD4h] */
#define v352 (*(float (*))(void *)(sr_frame_1400462B0 + 6872)) /* [rsp+1AD8h] */
#define v353 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 6880)) /* [rsp+1AE0h] */
#define v354 (*(float (*))(void *)(sr_frame_1400462B0 + 6888)) /* [rsp+1AE8h] */
#define v355 (*(float (*))(void *)(sr_frame_1400462B0 + 6892)) /* [rsp+1AECh] */
#define v356 (*(signed __int64 (*))(void *)(sr_frame_1400462B0 + 6896)) /* [rsp+1AF0h] */
#define v357 (*(float (*))(void *)(sr_frame_1400462B0 + 6904)) /* [rsp+1AF8h] */
#define v358 (*(float (*))(void *)(sr_frame_1400462B0 + 6908)) /* [rsp+1AFCh] */
#define v359 (*(float (*))(void *)(sr_frame_1400462B0 + 6912)) /* [rsp+1B00h] */
#define v360 (*(float (*))(void *)(sr_frame_1400462B0 + 6920)) /* [rsp+1B08h] */
#define v361 (*(float (*))(void *)(sr_frame_1400462B0 + 6924)) /* [rsp+1B0Ch] */
#define v362 (*(float (*))(void *)(sr_frame_1400462B0 + 6928)) /* [rsp+1B10h] */
#define v363 (*(unsigned __int64 (*))(void *)(sr_frame_1400462B0 + 6932)) /* [rsp+1B14h] */
#define v364 (*(float (*))(void *)(sr_frame_1400462B0 + 6940)) /* [rsp+1B1Ch] */
#define v365 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 6960)) /* [rsp+1B30h] */
#define v366 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 6968)) /* [rsp+1B38h] */
#define v367 (*(signed __int64 (*))(void *)(sr_frame_1400462B0 + 6976)) /* [rsp+1B40h] */
#define v368 (*(int * (*))(void *)(sr_frame_1400462B0 + 6984)) /* [rsp+1B48h] */
#define v369 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 6992)) /* [rsp+1B50h] */
#define v370 (*(signed __int64 (*))(void *)(sr_frame_1400462B0 + 7000)) /* [rsp+1B58h] */
#define v371 (*(signed __int64 (*))(void *)(sr_frame_1400462B0 + 7008)) /* [rsp+1B60h] */
#define v372 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 7016)) /* [rsp+1B68h] */
#define v373 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 7024)) /* [rsp+1B70h] */
#define v374 (*(float (*))(void *)(sr_frame_1400462B0 + 7032)) /* [rsp+1B78h] */
#define v375 (*(float (*))(void *)(sr_frame_1400462B0 + 7036)) /* [rsp+1B7Ch] */
#define v376 (*(float (*))(void *)(sr_frame_1400462B0 + 7040)) /* [rsp+1B80h] */
#define v377 (*(float (*))(void *)(sr_frame_1400462B0 + 7044)) /* [rsp+1B84h] */
#define v378 (*(float (*))(void *)(sr_frame_1400462B0 + 7048)) /* [rsp+1B88h] */
#define v379 (*(float (*))(void *)(sr_frame_1400462B0 + 7052)) /* [rsp+1B8Ch] */
#define v380 (*(float (*)[3])(void *)(sr_frame_1400462B0 + 7056)) /* [rsp+1B90h] */
#define v381 (*(float (*)[3])(void *)(sr_frame_1400462B0 + 7068)) /* [rsp+1B9Ch] */
#define v382 (*(_DWORD (*)[4])(void *)(sr_frame_1400462B0 + 7080)) /* [rsp+1BA8h] */
#define v383 (*(_DWORD (*)[6])(void *)(sr_frame_1400462B0 + 7096)) /* [rsp+1BB8h] */
#define v384 (*(int (*))(void *)(sr_frame_1400462B0 + 7120)) /* [rsp+1BD0h] */
#define v385 (*(int (*))(void *)(sr_frame_1400462B0 + 7124)) /* [rsp+1BD4h] */
#define v387 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7132)) /* [rsp+1BDCh] */
#define v388 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7136)) /* [rsp+1BE0h] */
#define v389 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7140)) /* [rsp+1BE4h] */
#define v390 (*(char (*))(void *)(sr_frame_1400462B0 + 7144)) /* [rsp+1BE8h] */
#define v391 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7148)) /* [rsp+1BECh] */
#define v392 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7152)) /* [rsp+1BF0h] */
#define v393 (*(_BYTE (*)[4])(void *)(sr_frame_1400462B0 + 7156)) /* [rsp+1BF4h] */
#define v394 (*(char (*))(void *)(sr_frame_1400462B0 + 7160)) /* [rsp+1BF8h] */
#define v395 (*(_BYTE (*)[6100])(void *)(sr_frame_1400462B0 + 7164)) /* [rsp+1BFCh] */
#define v396 (*(__int64 (*))(void *)(sr_frame_1400462B0 + 13264)) /* [rsp+33D0h] */

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
  return 0; /* the function has no caller */
}
#undef v333
#undef v334
#undef v335
#undef v336
#undef v337
#undef v338
#undef v339
#undef v340
#undef v341
#undef v342
#undef v343
#undef v344
#undef v345
#undef v346
#undef v347
#undef v348
#undef v349
#undef v350
#undef v351
#undef v352
#undef v353
#undef v354
#undef v355
#undef v356
#undef v357
#undef v358
#undef v359
#undef v360
#undef v361
#undef v362
#undef v363
#undef v364
#undef v365
#undef v366
#undef v367
#undef v368
#undef v369
#undef v370
#undef v371
#undef v372
#undef v373
#undef v374
#undef v375
#undef v376
#undef v377
#undef v378
#undef v379
#undef v380
#undef v381
#undef v382
#undef v383
#undef v384
#undef v385
#undef v387
#undef v388
#undef v389
#undef v390
#undef v391
#undef v392
#undef v393
#undef v394
#undef v395
#undef v396

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140048090) ----------------------------------------------------
__int64            sub_140048090(__int64 a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v1 = 0;
  v2 = (_DWORD *)(a1 + 9740);
  v3 = 0;
  while ( *v2 )
  {
    ++v1;
    ++v3;
    v2 += 18;
    if ( v3 >= 64 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}


//----- (0000000140048110) ----------------------------------------------------
__int64            sub_140048110(int *a1)
{
  int v2; // ebp
  int *v3; // r10
  __int64 v4; // rsi
  float v5; // xmm7_4
  float v6; // xmm11_4
  float v7; // xmm9_4
  __int64 v8; // r15
  float *v9; // r14
  unsigned __int64 v10; // rbx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm15_4
  float v14; // xmm14_4
  float v15; // xmm10_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm11_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm11_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm12_4
  float v41; // xmm5_4
  float v42; // xmm0_4
  float v43; // xmm12_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm9_4
  float v47; // xmm13_4
  float v48; // xmm2_4
  float v49; // xmm6_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm14_4
  float v55; // xmm1_4
  float v56; // xmm15_4
  float v57; // xmm2_4
  float v58; // xmm9_4
  float v59; // xmm1_4
  float v60; // xmm5_4
  float v61; // xmm2_4
  float v62; // xmm10_4
  float v63; // xmm0_4
  float v64; // xmm10_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float *v67; // rdx
  __int64 v68; // r11
  float v69; // xmm6_4
  float v70; // xmm4_4
  float v71; // xmm5_4
  __int64 v72; // rcx
  int *v73; // rcx
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  __int64 v106; // r10
  int v107; // r8d
  char *v108; // rdx
  int *v109; // r9
  __int64 v110; // rcx
  int *v111; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140048110[864];
#define v113 (*(float (*))(void *)(sr_frame_140048110 + 0)) /* [rsp+0h] */
#define v114 (*(float (*))(void *)(sr_frame_140048110 + 4)) /* [rsp+4h] */
#define v115 (*(float (*))(void *)(sr_frame_140048110 + 8)) /* [rsp+8h] */
#define v116 (*(float (*))(void *)(sr_frame_140048110 + 12)) /* [rsp+Ch] */
#define v117 (*(float (*))(void *)(sr_frame_140048110 + 16)) /* [rsp+10h] */
#define v118 (*(float (*))(void *)(sr_frame_140048110 + 20)) /* [rsp+14h] */
#define v119 (*(float (*))(void *)(sr_frame_140048110 + 24)) /* [rsp+18h] */
#define v120 (*(float (*))(void *)(sr_frame_140048110 + 28)) /* [rsp+1Ch] */
#define v121 (*(float (*))(void *)(sr_frame_140048110 + 32)) /* [rsp+20h] */
#define v122 (*(float (*))(void *)(sr_frame_140048110 + 36)) /* [rsp+24h] */
#define v123 (*(float (*))(void *)(sr_frame_140048110 + 40)) /* [rsp+28h] */
#define v124 (*(float (*))(void *)(sr_frame_140048110 + 44)) /* [rsp+2Ch] */
#define v125 (*(float (*))(void *)(sr_frame_140048110 + 48)) /* [rsp+30h] */
#define v126 (*(float (*))(void *)(sr_frame_140048110 + 52)) /* [rsp+34h] */
#define v127 (*(float (*))(void *)(sr_frame_140048110 + 56)) /* [rsp+38h] */
#define v128 (*(float (*))(void *)(sr_frame_140048110 + 60)) /* [rsp+3Ch] */
#define v129 (*(float (*))(void *)(sr_frame_140048110 + 64)) /* [rsp+40h] */
#define v130 (*(float (*))(void *)(sr_frame_140048110 + 68)) /* [rsp+44h] */
#define v131 (*(char (*))(void *)(sr_frame_140048110 + 88)) /* [rsp+58h] */
#define v132 (*(__int64 (*))(void *)(sr_frame_140048110 + 848)) /* [rsp+350h] */

  v2 = 0;
  if ( *a1 > 0 )
  {
    v3 = a1 + 19;
    do
    {
      v4 = 0;
      v3[2] = *(v3 - 1);
      v5 = 0.0;
      v6 = 0.0;
      v3[3] = *v3;
      v7 = 0.0;
      v3[4] = v3[1];
      v8 = *(v3 - 18);
      v114 = 0.0;
      v115 = 0.0;
      v116 = 0.0;
      if ( v8 >= 4 )
      {
        v9 = (float *)(v3 - 17);
        v10 = ((unsigned __int64)(v8 - 4) >> 2) + 1;
        v4 = 4 * v10;
        do
        {
          v11 = v9[1];
          v12 = v9[2];
          v13 = v9[10];
          v14 = v9[11];
          v15 = v9[13];
          v16 = v9[14];
          v17 = v9[15];
          v18 = 47LL * *(int *)v9;
          v19 = 47LL * *((int *)v9 + 4);
          v20 = *((int *)v9 + 8);
          v113 = *(float *)&dword_140404A6C[v18 + 18215724] * v11;
          v21 = v11 * *(float *)&dword_140404A6C[v18 + 18215725];
          v22 = v11 * *(float *)&dword_140404A6C[v18 + 18215726];
          v23 = *(float *)&dword_140404A6C[v19 + 18215724];
          v24 = *(float *)&dword_140404A6C[v19 + 18215730];
          v25 = *(float *)&dword_140404A6C[v19 + 18215727];
          v119 = v21;
          v117 = *(float *)&dword_140404A6C[v18 + 18215727] * v12;
          v26 = *(float *)&dword_140404A6C[v18 + 18215730];
          v124 = v22;
          v27 = v9[3];
          v28 = 47LL * *((int *)v9 + 12);
          v29 = v13 * *(float *)&dword_140404A6C[47 * v20 + 18215728];
          v30 = v14 * *(float *)&dword_140404A6C[47 * v20 + 18215731];
          v118 = v26 * v27;
          v31 = v12 * *(float *)&dword_140404A6C[v18 + 18215728];
          v32 = v12 * *(float *)&dword_140404A6C[v18 + 18215729];
          v120 = v31;
          v33 = v27 * *(float *)&dword_140404A6C[v18 + 18215731];
          v34 = v27 * *(float *)&dword_140404A6C[v18 + 18215732];
          v121 = v33;
          v125 = v32;
          v35 = *(float *)&dword_140404A6C[47 * v20 + 18215724];
          v126 = v34;
          v36 = v9[5];
          v37 = v23 * v36;
          v38 = v36 * *(float *)&dword_140404A6C[v19 + 18215725];
          v39 = v36 * *(float *)&dword_140404A6C[v19 + 18215726];
          v122 = v38;
          v40 = v9[7];
          v41 = v24 * v40;
          v42 = v40 * *(float *)&dword_140404A6C[v19 + 18215732];
          v43 = v40 * *(float *)&dword_140404A6C[v19 + 18215731];
          v129 = v42;
          v44 = v9[9];
          v127 = v39;
          v45 = v9[6];
          v46 = v44 * *(float *)&dword_140404A6C[47 * v20 + 18215725];
          v47 = v45 * *(float *)&dword_140404A6C[v19 + 18215728];
          v48 = v35 * v44;
          v49 = v25 * v45;
          v50 = v45 * *(float *)&dword_140404A6C[v19 + 18215729];
          v130 = v44 * *(float *)&dword_140404A6C[47 * v20 + 18215726];
          v51 = *(float *)&dword_140404A6C[47 * v20 + 18215730];
          v128 = v50;
          v52 = *(float *)&dword_140404A6C[47 * v20 + 18215727];
          v53 = v51 * v14;
          v54 = v14 * *(float *)&dword_140404A6C[47 * v20 + 18215732];
          v123 = v47;
          v55 = v52 * v13;
          v56 = v13 * *(float *)&dword_140404A6C[47 * v20 + 18215729];
          v9 += 16;
          v57 = (float)((float)(v48 + *(float *)&dword_140404A6C[47 * v20 + 18215715]) + v55) + v53;
          v58 = (float)((float)(v46 + *(float *)&dword_140404A6C[47 * v20 + 18215716]) + v29) + v30;
          v59 = v119 + *(float *)&dword_140404A6C[v18 + 18215716];
          v60 = (float)((float)((float)((float)((float)((float)(v113 + *(float *)&dword_140404A6C[v18 + 18215715]) + v117)
                                              + v118)
                                      + v114)
                              + (float)((float)((float)(v37 + *(float *)&dword_140404A6C[v19 + 18215715]) + v49) + v41))
                      + v57)
              + (float)((float)((float)((float)(v15 * *(float *)&dword_140404A6C[v28 + 18215724])
                                      + *(float *)&dword_140404A6C[v28 + 18215715])
                              + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215727]))
                      + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215730]));
          v61 = v15 * *(float *)&dword_140404A6C[v28 + 18215725];
          v62 = v15 * *(float *)&dword_140404A6C[v28 + 18215726];
          v63 = (float)((float)(v122 + *(float *)&dword_140404A6C[v19 + 18215716]) + v47) + v43;
          v114 = v60;
          v64 = (float)((float)(v62 + *(float *)&dword_140404A6C[v28 + 18215717])
                      + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215729]))
              + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215732]);
          v6 = (float)((float)((float)((float)((float)(v59 + v120) + v121) + v115) + v63) + v58)
             + (float)((float)((float)(v61 + *(float *)&dword_140404A6C[v28 + 18215716])
                             + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215728]))
                     + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215731]));
          v65 = (float)((float)(v127 + *(float *)&dword_140404A6C[v19 + 18215717]) + v128) + v129;
          v66 = (float)(v124 + *(float *)&dword_140404A6C[v18 + 18215717]) + v125;
          v115 = v6;
          v7 = (float)((float)((float)((float)(v66 + v126) + v116) + v65)
                     + (float)((float)((float)(v130 + *(float *)&dword_140404A6C[47 * v20 + 18215717]) + v56) + v54))
             + v64;
          v116 = v7;
          --v10;
        }
        while ( v10 );
        v5 = v60;
      }
      if ( v4 < v8 )
      {
        v67 = (float *)&v3[4 * v4 - 17];
        v68 = v8 - v4;
        do
        {
          v69 = v67[1];
          v70 = v67[2];
          v71 = v67[3];
          v72 = 47LL * *(int *)v67;
          v67 += 4;
          v5 = v5
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215724])
                                     + *(float *)&dword_140404A6C[v72 + 18215715])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215727]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215730]));
          v6 = v6
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215725])
                                     + *(float *)&dword_140404A6C[v72 + 18215716])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215728]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215731]));
          v7 = v7
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215726])
                                     + *(float *)&dword_140404A6C[v72 + 18215717])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215729]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215732]));
          --v68;
        }
        while ( v68 );
      }
      ++v2;
      *((float *)v3 - 1) = v5 * (float)(1.0 / (float)(int)v8);
      *(float *)v3 = v6 * (float)(1.0 / (float)(int)v8);
      *((float *)v3 + 1) = v7 * (float)(1.0 / (float)(int)v8);
      v3 += 23;
    }
    while ( v2 < *a1 );
  }
  v73 = a1 + 2453;
  v74 = 2;
  do
  {
    v75 = *(v73 - 18);
    if ( v75 > 0 )
      *(v73 - 18) = v75 - 1;
    if ( *v73 > 0 )
      --*v73;
    v76 = v73[18];
    if ( v76 > 0 )
      v73[18] = v76 - 1;
    v77 = v73[36];
    if ( v77 > 0 )
      v73[36] = v77 - 1;
    v78 = v73[54];
    if ( v78 > 0 )
      v73[54] = v78 - 1;
    v79 = v73[72];
    if ( v79 > 0 )
      v73[72] = v79 - 1;
    v80 = v73[90];
    if ( v80 > 0 )
      v73[90] = v80 - 1;
    v81 = v73[108];
    if ( v81 > 0 )
      v73[108] = v81 - 1;
    v82 = v73[126];
    if ( v82 > 0 )
      v73[126] = v82 - 1;
    v83 = v73[144];
    if ( v83 > 0 )
      v73[144] = v83 - 1;
    v84 = v73[162];
    if ( v84 > 0 )
      v73[162] = v84 - 1;
    v85 = v73[180];
    if ( v85 > 0 )
      v73[180] = v85 - 1;
    v86 = v73[198];
    if ( v86 > 0 )
      v73[198] = v86 - 1;
    v87 = v73[216];
    if ( v87 > 0 )
      v73[216] = v87 - 1;
    v88 = v73[234];
    if ( v88 > 0 )
      v73[234] = v88 - 1;
    v89 = v73[252];
    if ( v89 > 0 )
      v73[252] = v89 - 1;
    v90 = v73[270];
    if ( v90 > 0 )
      v73[270] = v90 - 1;
    v91 = v73[288];
    if ( v91 > 0 )
      v73[288] = v91 - 1;
    v92 = v73[306];
    if ( v92 > 0 )
      v73[306] = v92 - 1;
    v93 = v73[324];
    if ( v93 > 0 )
      v73[324] = v93 - 1;
    v94 = v73[342];
    if ( v94 > 0 )
      v73[342] = v94 - 1;
    v95 = v73[360];
    if ( v95 > 0 )
      v73[360] = v95 - 1;
    v96 = v73[378];
    if ( v96 > 0 )
      v73[378] = v96 - 1;
    v97 = v73[396];
    if ( v97 > 0 )
      v73[396] = v97 - 1;
    v98 = v73[414];
    if ( v98 > 0 )
      v73[414] = v98 - 1;
    v99 = v73[432];
    if ( v99 > 0 )
      v73[432] = v99 - 1;
    v100 = v73[450];
    if ( v100 > 0 )
      v73[450] = v100 - 1;
    v101 = v73[468];
    if ( v101 > 0 )
      v73[468] = v101 - 1;
    v102 = v73[486];
    if ( v102 > 0 )
      v73[486] = v102 - 1;
    v103 = v73[504];
    if ( v103 > 0 )
      v73[504] = v103 - 1;
    v104 = v73[522];
    if ( v104 > 0 )
      v73[522] = v104 - 1;
    v105 = v73[540];
    if ( v105 > 0 )
      v73[540] = v105 - 1;
    v73 += 576;
    --v74;
  }
  while ( v74 );
  v106 = *a1;
  v107 = 0;
  if ( v106 > 0 )
  {
    v108 = &v131;
    v109 = a1 + 20;
    do
    {
      v110 = 0;
      v111 = a1 + 2436;
      do
      {
        if ( *(v111 - 1) > 0 && *v111 == v107 && !v111[1] && !v111[2] && !v111[3] )
          break;
        ++v110;
        v111 += 18;
      }
      while ( v110 < 64 );
      ++v107;
      v109 += 23;
      v108 += 12;
      --v106;
    }
    while ( v106 );
  }
  return 0; /* reset callers ignore the native result */
}
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140048BA0) ----------------------------------------------------
__int64            sub_140048BA0(signed int a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  int v5; // r8d
  __int64 v6; // r11
  int v7; // ebx
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  int v10; // ecx
  int v11; // edx

  result = (int)dword_140404A6C[349902702];
  v4 = a1;
  if ( (int)dword_140404A6C[349902702] < 512 )
  {
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902704] = a1;
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902705] = *a2;
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902706] = a2[1];
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902707] = a2[2];
    dword_140404A6C[9 * dword_140404A6C[349902702] + 349902708] = a2[3];
    result = sub_14006EC40(
               (float *)&dword_140404A6C[8 * dword_140404A6C[349902702] + 349902709 + dword_140404A6C[349902702]],
               (float *)&dword_140404A6C[4 * *a2 + 349900654],
               (float *)&dword_140404A6C[4 * a2[1] + 349900654],
               (float *)&dword_140404A6C[4 * a2[2] + 349900654]);
    if ( (int)v4 > 0 )
    {
      v5 = dword_140404A6C[349907311];
      v6 = 0;
      v7 = 1;
      do
      {
        v8 = a2[v6];
        result = v7 % (int)v4;
        v9 = a2[result];
        if ( v5 < 512 )
        {
          v10 = 0;
          if ( v5 <= 0 )
          {
LABEL_12:
            dword_140404A6C[3 * v5 + 349907312] = v8;
            result = (int)dword_140404A6C[349907311];
            dword_140404A6C[3 * dword_140404A6C[349907311] + 349907313] = v9;
            v5 = ++dword_140404A6C[349907311];
          }
          else
          {
            result = (__int64)&dword_140404A6C[349907313];
            while ( 1 )
            {
              v11 = *(_DWORD *)(result - 4);
              if ( v11 == v8 && *(_DWORD *)result == v9 )
                break;
              if ( v11 == v9 && *(_DWORD *)result == v8 )
                break;
              ++v10;
              result += 12;
              if ( v10 >= v5 )
                goto LABEL_12;
            }
          }
        }
        ++v7;
        ++v6;
      }
      while ( v6 < v4 );
    }
    ++dword_140404A6C[349902702];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 193ACA824: using guessed type unsigned int;
// 193ACF028: using guessed type unsigned int;

//----- (0000000140048DA0) ----------------------------------------------------
__int64            sub_140048DA0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        char a9)
{
  float *v9; // r14
  __int64 v10; // rdi
  float *v11; // rsi
  int v12; // r13d
  float *v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm12_4
  float *v23; // rax
  float v24; // xmm13_4
  float v25; // xmm14_4
  _BYTE *v26; // r9
  float v27; // xmm15_4
  _BYTE *v28; // r10
  _BYTE *v29; // r13
  unsigned __int64 v30; // r8
  _BYTE *v31; // r11
  _BYTE *v32; // rdi
  _BYTE *v33; // rbx
  _BYTE *v34; // rsi
  _BYTE *v35; // r15
  _BYTE *v36; // rdx
  _BYTE *v37; // rcx
  _BYTE *v38; // r12
  unsigned __int64 v39; // r8
  _BYTE *v40; // rcx
  float v41; // xmm6_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm1_4
  float v45; // xmm5_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm4_4
  float v49; // xmm6_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm6_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm0_4
  float v58; // xmm6_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm6_4
  float v63; // xmm5_4
  float v64; // xmm6_4
  float v65; // xmm0_4
  _BYTE *v66; // rsi
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm6_4
  float v71; // xmm4_4
  float v72; // xmm6_4
  float v73; // xmm5_4
  float v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  float *v79; // rcx
  _BYTE *v80; // rax
  _BYTE *v81; // r8
  __int64 v82; // rdx
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm0_4
  float v86; // xmm6_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  __int64 v89; // rdx
  _BYTE *v90; // rbx
  float v91; // xmm7_4
  float v92; // xmm8_4
  float v93; // xmm9_4
  float v94; // xmm10_4
  float v95; // xmm11_4
  float v96; // xmm12_4
  float *v97; // rax
  float v98; // xmm13_4
  float v99; // xmm14_4
  _BYTE *v100; // r8
  float v101; // xmm15_4
  _BYTE *v102; // r9
  _BYTE *v103; // r13
  _BYTE *v104; // r10
  _BYTE *v105; // r11
  _BYTE *v106; // r12
  _BYTE *v107; // r15
  _BYTE *v108; // r14
  _BYTE *v109; // rcx
  _BYTE *v110; // rdi
  unsigned __int64 v111; // rcx
  _BYTE *v112; // rdx
  __int64 v113; // rcx
  _BYTE *v114; // rbx
  float v115; // xmm6_4
  float v116; // xmm2_4
  float v117; // xmm3_4
  float v118; // xmm1_4
  float v119; // xmm5_4
  float v120; // xmm0_4
  float v121; // xmm6_4
  float v122; // xmm4_4
  float v123; // xmm6_4
  float v124; // xmm5_4
  float v125; // xmm3_4
  float v126; // xmm1_4
  float v127; // xmm6_4
  float v128; // xmm0_4
  float v129; // xmm2_4
  float v130; // xmm3_4
  float v131; // xmm0_4
  float v132; // xmm6_4
  float v133; // xmm4_4
  float v134; // xmm3_4
  float v135; // xmm1_4
  float v136; // xmm6_4
  float v137; // xmm5_4
  float v138; // xmm6_4
  float v139; // xmm0_4
  _BYTE *v140; // rdi
  float v141; // xmm0_4
  float v142; // xmm3_4
  float v143; // xmm1_4
  float v144; // xmm6_4
  float v145; // xmm4_4
  float v146; // xmm6_4
  float v147; // xmm5_4
  float v148; // xmm2_4
  float v149; // xmm0_4
  float v150; // xmm0_4
  float v151; // xmm1_4
  float v152; // xmm0_4
  float *v153; // rcx
  _BYTE *v154; // rax
  _BYTE *v155; // r8
  __int64 v156; // rdx
  float v157; // xmm6_4
  float v158; // xmm5_4
  float v159; // xmm2_4
  float v160; // xmm3_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  float v163; // xmm6_4
  __int64 v164; // r8
  __int64 v165; // r10
  __int64 v166; // r11
  unsigned __int64 v167; // r9
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rax
  int v171; // xmm1_4
  int v172; // xmm0_4
  __int64 v173; // rax
  int v174; // xmm1_4
  __int64 v175; // r8
  int *v176; // rdx
  int v177; // eax
  __int64 v178; // rax
  int v179; // xmm1_4
  int v180; // xmm0_4
  __int64 v181; // rax
  int v182; // xmm1_4
  int v183; // r15d
  _BYTE *v184; // rcx
  float *v185; // rbx
  int v186; // eax
  float v187; // xmm0_4
  float v188; // xmm1_4
  float v189; // xmm5_4
  unsigned int v190; // xmm3_4
  float v191; // xmm5_4
  float v192; // xmm1_4
  unsigned int v193; // xmm4_4
  float v194; // xmm0_4
  float v195; // xmm2_4
  int v196; // r15d
  _BYTE *v197; // rcx
  float *v198; // rbx
  int v199; // eax
  float v200; // xmm0_4
  float v201; // xmm1_4
  float v202; // xmm5_4
  unsigned int v203; // xmm3_4
  float v204; // xmm5_4
  float v205; // xmm1_4
  unsigned int v206; // xmm4_4
  float v207; // xmm0_4
  float v208; // xmm2_4
  int v209; // eax
  _BYTE *v210; // rdx
  int v211; // r15d
  __int64 v212; // rbx
  __int64 v213; // r12
  __int64 v214; // r13
  __int64 v215; // rax
  int v216; // xmm1_4
  float v217; // xmm0_4
  __int64 v218; // rax
  int v219; // xmm1_4
  float v220; // xmm0_4
  __int64 v221; // rax
  int v222; // xmm1_4
  int v223; // xmm0_4
  __int64 v224; // rax
  int v225; // xmm1_4
  int v226; // xmm0_4
  __m128 v227; // xmm4
  __m128 v228; // xmm5
  float v229; // xmm6_4
  float v230; // xmm7_4
  float v231; // xmm3_4
  float v232; // xmm8_4
  float v233; // xmm0_4
  unsigned __int64 v234; // xmm0_8
  unsigned int v235; // xmm1_4
  unsigned int v236; // xmm5_4
  unsigned int v237; // xmm4_4
  float v238; // xmm3_4
  __int64 v240; // [rsp-20h] [rbp-63B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140048DA0[50624];
#define v241 (*(__int64 (*))(void *)(sr_frame_140048DA0 + 0)) /* [rsp+10h] */
#define v242 (*(int (*))(void *)(sr_frame_140048DA0 + 8)) /* [rsp+18h] */
#define v243 (*(int (*))(void *)(sr_frame_140048DA0 + 16)) /* [rsp+20h] */
#define v244 (*(int (*))(void *)(sr_frame_140048DA0 + 32)) /* [rsp+30h] */
#define v245 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 40)) /* [rsp+38h] */
#define v246 (*(float * (*))(void *)(sr_frame_140048DA0 + 48)) /* [rsp+40h] */
#define v247 (*(float (*))(void *)(sr_frame_140048DA0 + 56)) /* [rsp+48h] */
#define v248 (*(float * (*))(void *)(sr_frame_140048DA0 + 64)) /* [rsp+50h] */
#define v249 (*(float (*))(void *)(sr_frame_140048DA0 + 72)) /* [rsp+58h] */
#define v250 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25344)) /* [rsp+6310h] */
#define v251 (*(int (*))(void *)(sr_frame_140048DA0 + 25352)) /* [rsp+6318h] */
#define v252 (*(float * (*))(void *)(sr_frame_140048DA0 + 25360)) /* [rsp+6320h] */
#define v253 (*(int (*))(void *)(sr_frame_140048DA0 + 25368)) /* [rsp+6328h] */
#define v254 (*(int (*))(void *)(sr_frame_140048DA0 + 25376)) /* [rsp+6330h] */
#define v255 (*(int (*))(void *)(sr_frame_140048DA0 + 25380)) /* [rsp+6334h] */
#define v256 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25384)) /* [rsp+6338h] */
#define v257 (*(float (*))(void *)(sr_frame_140048DA0 + 25392)) /* [rsp+6340h] */
#define v258 (*(__int64 (*))(void *)(sr_frame_140048DA0 + 25400)) /* [rsp+6348h] */
#define v259 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25408)) /* [rsp+6350h] */
#define v260 (*(float (*))(void *)(sr_frame_140048DA0 + 25416)) /* [rsp+6358h] */
#define v261 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25424)) /* [rsp+6360h] */
#define v262 (*(float (*))(void *)(sr_frame_140048DA0 + 25432)) /* [rsp+6368h] */
#define v263 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25440)) /* [rsp+6370h] */
#define v264 (*(__int64 (*))(void *)(sr_frame_140048DA0 + 25448)) /* [rsp+6378h] */
#define v265 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25456)) /* [rsp+6380h] */
#define v266 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25464)) /* [rsp+6388h] */
#define v267 (*(float (*))(void *)(sr_frame_140048DA0 + 25472)) /* [rsp+6390h] */
#define v268 (*(float (*))(void *)(sr_frame_140048DA0 + 25476)) /* [rsp+6394h] */
#define v269 (*(float (*))(void *)(sr_frame_140048DA0 + 25480)) /* [rsp+6398h] */
#define v270 (*(float (*))(void *)(sr_frame_140048DA0 + 25484)) /* [rsp+639Ch] */
#define v271 (*(float (*))(void *)(sr_frame_140048DA0 + 25488)) /* [rsp+63A0h] */
#define v272 (*(float (*))(void *)(sr_frame_140048DA0 + 25492)) /* [rsp+63A4h] */
#define v273 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25512)) /* [rsp+63B8h] */
#define v274 (*(_BYTE * (*))(void *)(sr_frame_140048DA0 + 25520)) /* [rsp+63C0h] */
#define v275 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25536)) /* [rsp+63D0h] */
#define v276 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25540)) /* [rsp+63D4h] */
#define v277 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25544)) /* [rsp+63D8h] */
#define v278 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25548)) /* [rsp+63DCh] */
#define v279 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25552)) /* [rsp+63E0h] */
#define v281 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25560)) /* [rsp+63E8h] */
#define v282 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25564)) /* [rsp+63ECh] */
#define v283 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25568)) /* [rsp+63F0h] */
#define v285 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25576)) /* [rsp+63F8h] */
#define v287 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25632)) /* [rsp+6430h] */
#define v288 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25636)) /* [rsp+6434h] */
#define v289 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25640)) /* [rsp+6438h] */
#define v291 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25648)) /* [rsp+6440h] */
#define v292 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25652)) /* [rsp+6444h] */
#define v293 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25656)) /* [rsp+6448h] */
#define v295 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25664)) /* [rsp+6450h] */
#define v297 (*(_BYTE (*)[4])(void *)(sr_frame_140048DA0 + 25672)) /* [rsp+6458h] */
#define v298 (*(_BYTE (*)[52])(void *)(sr_frame_140048DA0 + 25676)) /* [rsp+645Ch] */
#define v299 (*(_DWORD (*)[2])(void *)(sr_frame_140048DA0 + 25728)) /* [rsp+6490h] */
#define v300 (*(_DWORD (*)[1534])(void *)(sr_frame_140048DA0 + 25736)) /* [rsp+6498h] */
#define v301 (*(_DWORD (*)[2])(void *)(sr_frame_140048DA0 + 31872)) /* [rsp+7C90h] */
#define v302 (*(float (*)[1534])(void *)(sr_frame_140048DA0 + 31880)) /* [rsp+7C98h] */
#define v303 (*(_BYTE (*)[6144])(void *)(sr_frame_140048DA0 + 38016)) /* [rsp+9490h] */
#define v304 (*(_BYTE (*)[6144])(void *)(sr_frame_140048DA0 + 44160)) /* [rsp+AC90h] */
#define v305 (*(__int64 (*))(void *)(sr_frame_140048DA0 + 50304)) /* [rsp+C490h] */
#define v306 (*(int (*))(void *)(sr_frame_140048DA0 + 50608)) /* [rsp+C5C0h] */

  v9 = a5;
  v10 = a4;
  v11 = a7;
  v12 = 0;
  v13 = a8;
  v14 = a3;
  v258 = a4;
  v254 = a2;
  v255 = a1;
  v264 = a3;
  v252 = a7;
  v248 = a8;
  v246 = a5;
  v244 = 0;
  sub_14004A480((__int64)v301, (__int64)v304, a3, a5, a6);
  sub_14004A480((__int64)v299, (__int64)v303, v10, a7, a8);
  v15 = *(int *)(v14 + 48);
  v16 = nullptr;
  v250 = (_BYTE *)v15;
  v245 = nullptr;
  if ( v15 < 4 )
  {
    if ( v15 <= 0 )
      goto LABEL_10;
    v17 = a6[3];
    v18 = *a6;
    v19 = a6[6];
    v20 = a6[4];
    v21 = a6[1];
    v22 = a6[7];
    v24 = a6[5];
    v25 = a6[2];
    v27 = a6[8];
    goto LABEL_8;
  }
  v17 = a6[3];
  v18 = *a6;
  v19 = a6[6];
  v20 = a6[4];
  v21 = a6[1];
  v22 = a6[7];
  v23 = (float *)(v14 + 60);
  v24 = a6[5];
  v25 = a6[2];
  v26 = &v276[-v14];
  v27 = a6[8];
  v28 = &v277[-v14];
  v273 = &v282[-v14];
  v29 = &v282[-v14];
  v30 = (unsigned __int64)(v15 - 4) >> 2;
  v274 = &v283[-v14];
  v31 = &v279[-v14];
  v32 = &v283[-v14];
  v33 = v281 - v14 + 2;
  v265 = &v285[-v14];
  v266 = v287 - v14 + 50;
  v263 = &v275[-v14];
  v34 = &v275[-v14];
  v259 = &v278[-v14];
  v35 = &v278[-v14];
  v261 = &v281[-v14];
  v36 = &v281[-v14];
  v37 = v285 - v14 + 2;
  v38 = &v285[-v14];
  v39 = v30 + 1;
  v256 = v37;
  v245 = (_BYTE *)(4 * v39);
  v40 = v266;
  do
  {
    v41 = *(v23 - 1);
    v42 = (float)(v41 * v17) + (float)(*(v23 - 2) * v18);
    v43 = (float)(v41 * v20) + (float)(*(v23 - 2) * v21);
    v44 = *v23;
    v45 = *v23 * v27;
    v46 = *a5;
    v47 = (float)(v41 * v24) + (float)(*(v23 - 2) * v25);
    v48 = v23[1];
    *(float *)((char *)v23 + (_QWORD)v34 - 60) = v42 + (float)(*v23 * v19);
    v49 = v47 + v45;
    v50 = v23[3];
    v51 = v43 + (float)(v44 * v22);
    v52 = a5[1];
    *(float *)((char *)v23 + (_QWORD)v26 - 60) = v51;
    *(float *)((char *)v23 + (_QWORD)v28 - 60) = v49;
    v53 = v23[2];
    *(float *)((char *)v23 + (_QWORD)v34 - 60) = v46 + *(float *)((char *)v23 + (_QWORD)v34 - 60);
    v54 = a5[2];
    *(float *)((char *)v23 + (_QWORD)v26 - 60) = v52 + *(float *)((char *)v23 + (_QWORD)v26 - 60);
    *(float *)((char *)v23 + (_QWORD)v28 - 60) = v54 + *(float *)((char *)v23 + (_QWORD)v28 - 60);
    v55 = (float)(v53 * v17) + (float)(v48 * v18);
    v56 = (float)(v53 * v20) + (float)(v48 * v21);
    v57 = *a5;
    v58 = (float)(v53 * v24) + (float)(v48 * v25);
    v59 = v23[4];
    *(float *)((char *)v23 + (_QWORD)v35 - 60) = v55 + (float)(v50 * v19);
    v60 = v56 + (float)(v50 * v22);
    v61 = a5[1];
    v62 = v58 + (float)(v50 * v27);
    v63 = v23[6];
    *(float *)((char *)v23 + (_QWORD)v31 - 60) = v60;
    *(float *)((char *)v23 + (_QWORD)v33 - 60) = v62;
    v64 = v23[5];
    *(float *)((char *)v23 + (_QWORD)v35 - 60) = v57 + *(float *)((char *)v23 + (_QWORD)v35 - 60);
    v65 = a5[2];
    *(float *)((char *)v23 + (_QWORD)v31 - 60) = v61 + *(float *)((char *)v23 + (_QWORD)v31 - 60);
    *(float *)((char *)v23 + (_QWORD)v33 - 60) = v65 + *(float *)((char *)v23 + (_QWORD)v33 - 60);
    v66 = v256;
    v67 = *a5;
    *(float *)((char *)v23 + (_QWORD)v36 - 60) = (float)((float)(v64 * v17) + (float)(v59 * v18)) + (float)(v63 * v19);
    v68 = (float)((float)(v64 * v20) + (float)(v59 * v21)) + (float)(v63 * v22);
    v69 = a5[1];
    v70 = (float)(v64 * v24) + (float)(v59 * v25);
    v71 = v23[7];
    *(float *)&v29[(_QWORD)v23 - 60] = v68;
    v72 = v70 + (float)(v63 * v27);
    v73 = v23[9];
    *(float *)((char *)v23 + (_QWORD)v32 - 60) = v72;
    v74 = v23[8];
    *(float *)((char *)v23 + (_QWORD)v36 - 60) = v67 + *(float *)((char *)v23 + (_QWORD)v36 - 60);
    v75 = a5[2];
    *(float *)&v29[(_QWORD)v23 - 60] = v69 + *(float *)&v29[(_QWORD)v23 - 60];
    *(float *)((char *)v23 + (_QWORD)v32 - 60) = v75 + *(float *)((char *)v23 + (_QWORD)v32 - 60);
    v76 = *a5;
    *(float *)((char *)v23 + (_QWORD)v66 - 60) = (float)((float)(v74 * v17) + (float)(v71 * v18)) + (float)(v73 * v19);
    v77 = a5[1];
    *(float *)((char *)v23 + (_QWORD)v38 - 60) = (float)((float)(v74 * v20) + (float)(v71 * v21)) + (float)(v73 * v22);
    *(float *)((char *)v23 + (_QWORD)v40 - 60) = (float)((float)(v74 * v24) + (float)(v71 * v25)) + (float)(v73 * v27);
    *(float *)((char *)v23 + (_QWORD)v66 - 60) = v76 + *(float *)((char *)v23 + (_QWORD)v66 - 60);
    v78 = a5[2];
    v34 = v263;
    *(float *)((char *)v23 + (_QWORD)v38 - 60) = v77 + *(float *)((char *)v23 + (_QWORD)v38 - 60);
    *(float *)((char *)v23 + (_QWORD)v40 - 60) = v78 + *(float *)((char *)v23 + (_QWORD)v40 - 60);
    v23 += 12;
    --v39;
  }
  while ( v39 );
  v15 = (__int64)v250;
  v16 = v245;
  v10 = v258;
  v11 = v252;
  v14 = v264;
  v13 = v248;
  v12 = v244;
  if ( (__int64)v245 < (__int64)v250 )
  {
LABEL_8:
    v79 = (float *)(v14 + 12LL * (_QWORD)(v16 + 5));
    v80 = &v276[-v14];
    v81 = &v277[-v14];
    v82 = v15 - (_QWORD)v245;
    do
    {
      v83 = *(v79 - 1);
      v84 = *v79;
      v85 = *(v79 - 2);
      v86 = v85 * v18;
      *(float *)((char *)v79 + (_QWORD)v80 - 60) = (float)((float)(v20 * v83) + (float)(v85 * v21))
                                                 + (float)(v22 * *v79);
      v87 = a5[2];
      *(float *)((char *)v79 + (_QWORD)v81 - 60) = (float)((float)(v24 * v83) + (float)(v85 * v25)) + (float)(v27 * v84);
      v88 = a5[1];
      *(float *)&v275[(_QWORD)v79 - v14 - 60] = (float)((float)((float)(v17 * v83) + v86) + (float)(v19 * v84)) + *a5;
      *(float *)((char *)v79 + (_QWORD)v80 - 60) = v88 + *(float *)&v276[(_QWORD)v79 - v14 - 60];
      *(float *)((char *)v79 + (_QWORD)v81 - 60) = v87 + *(float *)&v277[(_QWORD)v79 - v14 - 60];
      v79 += 3;
      --v82;
    }
    while ( v82 );
  }
LABEL_10:
  v89 = *(int *)(v10 + 48);
  v90 = nullptr;
  v266 = (_BYTE *)v89;
  if ( v89 < 4 )
  {
    if ( v89 <= 0 )
      goto LABEL_19;
    v91 = v13[3];
    v92 = *v13;
    v93 = v13[6];
    v94 = v13[4];
    v95 = v13[1];
    v96 = v13[7];
    v98 = v13[5];
    v99 = v13[2];
    v101 = v13[8];
    goto LABEL_17;
  }
  v91 = v13[3];
  v92 = *v13;
  v93 = v13[6];
  v94 = v13[4];
  v95 = v13[1];
  v96 = v13[7];
  v97 = (float *)(v10 + 60);
  v98 = v13[5];
  v99 = v13[2];
  v100 = &v288[-v10];
  v101 = v13[8];
  v102 = &v289[-v10];
  v248 = (float *)&v295[-v10];
  v103 = &v295[-v10];
  v104 = &v291[-v10];
  v252 = (float *)&v297[-v10];
  v105 = &v292[-v10];
  v106 = &v297[-v10];
  v107 = v295 - v10 + 2;
  v250 = &v298[-v10];
  v108 = &v298[-v10];
  v245 = &v287[-v10];
  v256 = v291 - v10 + 2;
  v261 = &v293[-v10];
  v109 = v297 - v10 + 2;
  v110 = &v287[-v10];
  v259 = v109;
  v111 = v89 - 4;
  v112 = v256;
  v113 = (v111 >> 2) + 1;
  v265 = (_BYTE *)(4 * v113);
  v114 = v261;
  do
  {
    v115 = *(v97 - 1);
    v116 = (float)(v115 * v91) + (float)(*(v97 - 2) * v92);
    v117 = (float)(v115 * v94) + (float)(*(v97 - 2) * v95);
    v118 = *v97;
    v119 = *v97 * v101;
    v120 = *v11;
    v121 = (float)(v115 * v98) + (float)(*(v97 - 2) * v99);
    v122 = v97[1];
    *(float *)((char *)v97 + (_QWORD)v110 - 60) = v116 + (float)(*v97 * v93);
    v123 = v121 + v119;
    v124 = v97[3];
    v125 = v117 + (float)(v118 * v96);
    v126 = v11[1];
    *(float *)((char *)v97 + (_QWORD)v100 - 60) = v125;
    *(float *)((char *)v97 + (_QWORD)v102 - 60) = v123;
    v127 = v97[2];
    *(float *)((char *)v97 + (_QWORD)v110 - 60) = v120 + *(float *)((char *)v97 + (_QWORD)v110 - 60);
    v128 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v100 - 60) = v126 + *(float *)((char *)v97 + (_QWORD)v100 - 60);
    *(float *)((char *)v97 + (_QWORD)v102 - 60) = v128 + *(float *)((char *)v97 + (_QWORD)v102 - 60);
    v129 = (float)(v127 * v91) + (float)(v122 * v92);
    v130 = (float)(v127 * v94) + (float)(v122 * v95);
    v131 = *v11;
    v132 = (float)(v127 * v98) + (float)(v122 * v99);
    v133 = v97[4];
    *(float *)&v112[(_QWORD)v97 - 60] = v129 + (float)(v124 * v93);
    v134 = v130 + (float)(v124 * v96);
    v135 = v11[1];
    v136 = v132 + (float)(v124 * v101);
    v137 = v97[6];
    *(float *)((char *)v97 + (_QWORD)v104 - 60) = v134;
    *(float *)((char *)v97 + (_QWORD)v105 - 60) = v136;
    v138 = v97[5];
    *(float *)&v112[(_QWORD)v97 - 60] = v131 + *(float *)&v112[(_QWORD)v97 - 60];
    v139 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v104 - 60) = v135 + *(float *)((char *)v97 + (_QWORD)v104 - 60);
    *(float *)((char *)v97 + (_QWORD)v105 - 60) = v139 + *(float *)((char *)v97 + (_QWORD)v105 - 60);
    v140 = v259;
    v141 = *v11;
    *(float *)&v114[(_QWORD)v97 - 60] = (float)((float)(v138 * v91) + (float)(v133 * v92)) + (float)(v137 * v93);
    v142 = (float)((float)(v138 * v94) + (float)(v133 * v95)) + (float)(v137 * v96);
    v143 = v11[1];
    v144 = (float)(v138 * v98) + (float)(v133 * v99);
    v145 = v97[7];
    *(float *)((char *)v97 + (_QWORD)v107 - 60) = v142;
    v146 = v144 + (float)(v137 * v101);
    v147 = v97[9];
    *(float *)&v103[(_QWORD)v97 - 60] = v146;
    v148 = v97[8];
    *(float *)&v114[(_QWORD)v97 - 60] = v141 + *(float *)&v114[(_QWORD)v97 - 60];
    v149 = v11[2];
    *(float *)((char *)v97 + (_QWORD)v107 - 60) = v143 + *(float *)((char *)v97 + (_QWORD)v107 - 60);
    *(float *)&v103[(_QWORD)v97 - 60] = v149 + *(float *)&v103[(_QWORD)v97 - 60];
    v150 = *v11;
    *(float *)&v140[(_QWORD)v97 - 60] = (float)((float)(v148 * v91) + (float)(v145 * v92)) + (float)(v147 * v93);
    v151 = v11[1];
    *(float *)((char *)v97 + (_QWORD)v106 - 60) = (float)((float)(v148 * v94) + (float)(v145 * v95))
                                                + (float)(v147 * v96);
    *(float *)((char *)v97 + (_QWORD)v108 - 60) = (float)((float)(v148 * v98) + (float)(v145 * v99))
                                                + (float)(v147 * v101);
    *(float *)&v140[(_QWORD)v97 - 60] = v150 + *(float *)&v140[(_QWORD)v97 - 60];
    v152 = v11[2];
    v110 = v245;
    *(float *)((char *)v97 + (_QWORD)v106 - 60) = v151 + *(float *)((char *)v97 + (_QWORD)v106 - 60);
    *(float *)((char *)v97 + (_QWORD)v108 - 60) = v152 + *(float *)((char *)v97 + (_QWORD)v108 - 60);
    v97 += 12;
    --v113;
  }
  while ( v113 );
  v89 = (__int64)v266;
  v90 = v265;
  v10 = v258;
  v9 = v246;
  v14 = v264;
  v12 = v244;
  if ( (__int64)v265 < (__int64)v266 )
  {
LABEL_17:
    v153 = (float *)(v10 + 12LL * (_QWORD)(v90 + 5));
    v154 = &v288[-v10];
    v155 = &v289[-v10];
    v156 = v89 - (_QWORD)v90;
    do
    {
      v157 = *(v153 - 2);
      v158 = *v153;
      v159 = *(v153 - 1);
      v160 = (float)(v159 * v98) + (float)(v157 * v99);
      v161 = v11[1];
      *(float *)((char *)v153 + (_QWORD)v154 - 60) = (float)((float)(v159 * v94) + (float)(v157 * v95))
                                                   + (float)(*v153 * v96);
      v162 = v11[2];
      v163 = (float)((float)((float)(v157 * v92) + (float)(v159 * v91)) + (float)(v158 * v93)) + *v11;
      *(float *)((char *)v153 + (_QWORD)v155 - 60) = v160 + (float)(v101 * v158);
      *(float *)&v287[(_QWORD)v153 - v10 - 60] = v163;
      *(float *)((char *)v153 + (_QWORD)v154 - 60) = v161 + *(float *)&v288[(_QWORD)v153 - v10 - 60];
      *(float *)((char *)v153 + (_QWORD)v155 - 60) = v162 + *(float *)&v289[(_QWORD)v153 - v10 - 60];
      v153 += 3;
      --v156;
    }
    while ( v156 );
  }
LABEL_19:
  v164 = *(int *)(v10 + 32);
  v165 = 0;
  if ( v164 < 4 )
  {
    if ( v164 <= 0 )
      goto LABEL_28;
    v166 = *(_QWORD *)(v10 + 40);
    goto LABEL_26;
  }
  v166 = *(_QWORD *)(v10 + 40);
  v167 = ((unsigned __int64)(v164 - 4) >> 2) + 1;
  v168 = v166 + 40;
  v165 = 4 * v167;
  do
  {
    v169 = *(_DWORD *)(v168 - 4);
    v168 += 48;
    v170 = 3 * v169;
    v171 = v299[v170 + 1];
    LODWORD(v250) = v299[v170];
    v172 = v300[v170];
    LODWORD(v170) = *(_DWORD *)(v168 - 48);
    v251 = v172;
    HIDWORD(v250) = v171;
    v173 = 3 * (int)v170;
    v174 = v299[v173 + 1];
    LODWORD(v252) = v299[v173];
    v253 = v300[v173];
    HIDWORD(v252) = v174;
    --v167;
  }
  while ( v167 );
  if ( v165 < v164 )
  {
LABEL_26:
    v175 = v164 - v165;
    v176 = (int *)(v166 + 12 * v165);
    do
    {
      v177 = *v176;
      v176 += 3;
      v178 = 3 * v177;
      v179 = v299[v178 + 1];
      LODWORD(v250) = v299[v178];
      v180 = v300[v178];
      LODWORD(v178) = *(v176 - 2);
      v251 = v180;
      HIDWORD(v250) = v179;
      v181 = 3 * (int)v178;
      v182 = v299[v181 + 1];
      LODWORD(v252) = v299[v181];
      v253 = v300[v181];
      HIDWORD(v252) = v182;
      --v175;
    }
    while ( v175 );
  }
LABEL_28:
  v306 = a9 & 1;
  if ( !v306 )
  {
    v183 = 0;
    if ( *(int *)v14 > 0 )
    {
      v184 = nullptr;
      v185 = v302;
      v186 = 0;
      v245 = nullptr;
      v244 = 0;
      do
      {
        if ( sub_14004A1D0(
               &v267,
               v10,
               (__int64)v299,
               (__int64)v303,
               (float *)&v275[12 * *(int *)&v184[*(_QWORD *)(v14 + 8) + 12]],
               (float *)&v301[v186]) )
        {
          v187 = v267 - *(v185 - 2);
          v188 = v269 - *v185;
          v243 = 1023410176;
          v189 = (float)(v268 - *(v185 - 1)) * v271;
          v242 = 1015021568;
          LODWORD(v241) = 1053609165;
          *(float *)&v190 = v267 - *v11;
          v191 = (float)(v189 + (float)(v187 * v270)) + (float)(v188 * v272);
          v192 = v268 - v9[1];
          *(float *)&v193 = v268 - v11[1];
          *(float *)&v248 = v267 - *v9;
          v194 = v269 - v9[2];
          v195 = v269 - v11[2];
          *(float *)&v258 = v191;
          *((float *)&v248 + 1) = v192;
          v249 = v194;
          v246 = (float *)__PAIR64__(v193, v190);
          v247 = v195;
          sub_1400052C0(
            v255,
            v254,
            (unsigned int *)&v248,
            (unsigned int *)&v246,
            (unsigned int *)&v270,
            v191,
            0x3ECCCCCDu,
            0.015625,
            0x3D000000u);
          v12 = 1;
        }
        ++v183;
        v186 = v244 + 3;
        v184 = v245 + 16;
        v244 += 3;
        v185 += 3;
        v245 += 16;
      }
      while ( v183 < *(_DWORD *)v14 );
      v244 = v12;
    }
  }
  v196 = 0;
  if ( *(int *)v10 > 0 )
  {
    v197 = nullptr;
    v198 = (float *)v300;
    v199 = 0;
    v245 = nullptr;
    v244 = 0;
    do
    {
      if ( sub_14004A1D0(
             &v267,
             v14,
             (__int64)v301,
             (__int64)v304,
             (float *)&v287[12 * *(int *)&v197[*(_QWORD *)(v10 + 8) + 12]],
             (float *)&v299[v199]) )
      {
        v200 = v267 - *(v198 - 2);
        v201 = v269 - *v198;
        v243 = 1023410176;
        v202 = (float)(v268 - *(v198 - 1)) * v271;
        v242 = 1015021568;
        LODWORD(v241) = 1053609165;
        *(float *)&v203 = v267 - *v9;
        v204 = (float)(v202 + (float)(v200 * v270)) + (float)(v201 * v272);
        v205 = v268 - v11[1];
        *(float *)&v206 = v268 - v9[1];
        *(float *)&v248 = v267 - *v11;
        v207 = v269 - v11[2];
        v208 = v269 - v9[2];
        *(float *)&v258 = v204;
        *((float *)&v248 + 1) = v205;
        v249 = v207;
        v246 = (float *)__PAIR64__(v206, v203);
        v247 = v208;
        sub_1400052C0(
          v254,
          v255,
          (unsigned int *)&v248,
          (unsigned int *)&v246,
          (unsigned int *)&v270,
          v204,
          0x3ECCCCCDu,
          0.015625,
          0x3D000000u);
        v12 = 1;
      }
      ++v196;
      v199 = v244 + 3;
      v197 = v245 + 16;
      v244 += 3;
      v198 += 3;
      v245 += 16;
    }
    while ( v196 < *(_DWORD *)v10 );
    v244 = v12;
  }
  v209 = 0;
  LODWORD(v263) = 0;
  if ( *(int *)(v14 + 32) > 0 )
  {
    v210 = nullptr;
    v245 = nullptr;
    do
    {
      v211 = 0;
      if ( *(int *)(v10 + 32) > 0 )
      {
        v212 = 0;
        do
        {
          v213 = *(_QWORD *)(v14 + 40);
          v214 = *(_QWORD *)(v10 + 40);
          v215 = 3 * *(_DWORD *)&v210[v213];
          v216 = v301[v215 + 1];
          LODWORD(v248) = v301[v215];
          v217 = v302[v215];
          LODWORD(v215) = *(_DWORD *)&v210[v213 + 4];
          v249 = v217;
          HIDWORD(v248) = v216;
          v218 = 3 * (int)v215;
          v219 = v301[v218 + 1];
          LODWORD(v246) = v301[v218];
          v220 = v302[v218];
          LODWORD(v218) = *(_DWORD *)(v212 + v214);
          v247 = v220;
          HIDWORD(v246) = v219;
          v221 = 3 * (int)v218;
          v222 = v299[v221 + 1];
          LODWORD(v250) = v299[v221];
          v223 = v300[v221];
          LODWORD(v221) = *(_DWORD *)(v212 + v214 + 4);
          v251 = v223;
          HIDWORD(v250) = v222;
          v224 = 3 * (int)v221;
          v225 = v299[v224 + 1];
          LODWORD(v252) = v299[v224];
          v226 = v300[v224];
          HIDWORD(v252) = v225;
          v253 = v226;
          if ( (unsigned int)sub_14008CEB0(
                               (float *)&v261,
                               (float *)&v259,
                               (float *)&v258,
                               (float *)&v248,
                               (float *)&v246,
                               (float *)&v250,
                               (float *)&v252)
            && (v306
             || sub_140187410(
                  (float *)&v250,
                  (float *)&v252,
                  (float *)&v275[12 * *(int *)&v245[v213 + 8]],
                  (float *)&v248,
                  (float *)&v246))
            && sub_140187410(
                 (float *)&v248,
                 (float *)&v246,
                 (float *)&v287[12 * *(int *)(v212 + v214 + 8)],
                 (float *)&v250,
                 (float *)&v252) )
          {
            v227 = ((__m128)_mm_cvtsi32_si128((int)(v261)));
            v228 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v261))));
            v229 = *(float *)&v259 - *(float *)&v261;
            v230 = *((float *)&v259 + 1) - *((float *)&v261 + 1);
            v231 = v262;
            v232 = v260 - v262;
            v233 = fsqrt((float)((float)(v230 * v230) + (float)(v229 * v229)) + (float)(v232 * v232));
            if ( v233 == 0.0 )
            {
              v256 = nullptr;
              v257 = 0.0;
            }
            else
            {
              *(float *)&v256 = (float)(1.0 / v233) * v229;
              *((float *)&v256 + 1) = (float)(1.0 / v233) * v230;
              v257 = (float)(1.0 / v233) * v232;
            }
            v243 = 1023410176;
            v242 = 1015021568;
            LODWORD(v241) = 1053609165;
            SR_VEC_LANES(128, v227, f32)[0] = (float)(*(float *)&v261 + *(float *)&v259) * 0.5;
            SR_VEC_LANES(128, v228, f32)[0] = (float)(*((float *)&v261 + 1) + *((float *)&v259 + 1)) * 0.5;
            v234 = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v227, v228), u64)[0];
            *(float *)&v235 = SR_VEC_LANES(128, v228, f32)[0] - v9[1];
            *(float *)&v236 = SR_VEC_LANES(128, v228, f32)[0] - v11[1];
            v246 = (float *)v234;
            v261 = (_BYTE *)v234;
            v259 = (_BYTE *)v234;
            *(float *)&v234 = SR_VEC_LANES(128, v227, f32)[0] - *v9;
            *(float *)&v237 = SR_VEC_LANES(128, v227, f32)[0] - *v11;
            v262 = (float)(v262 + v260) * 0.5;
            v247 = v262;
            v248 = (float *)__PAIR64__(v235, v234);
            *(float *)&v234 = (float)((float)(v231 + v260) * 0.5) - v9[2];
            v238 = v262 - v11[2];
            v260 = v262;
            v246 = (float *)__PAIR64__(v236, v237);
            v249 = *(float *)&v234;
            v247 = v238;
            sub_1400052C0(
              v255,
              v254,
              (unsigned int *)&v248,
              (unsigned int *)&v246,
              (unsigned int *)&v256,
              *(float *)&v258,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v244 = 1;
          }
          v210 = v245;
          ++v211;
          v14 = v264;
          v212 += 12;
        }
        while ( v211 < *(_DWORD *)(v10 + 32) );
        v209 = (int)v263;
      }
      ++v209;
      v210 += 12;
      LODWORD(v263) = v209;
      v245 = v210;
    }
    while ( v209 < *(_DWORD *)(v14 + 32) );
  }
  return (unsigned int)v244; /* 0x14004A0C5: mov eax, dword ptr [rsp + 0x50] */
}
#undef v241
#undef v242
#undef v243
#undef v244
#undef v245
#undef v246
#undef v247
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef v253
#undef v254
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260
#undef v261
#undef v262
#undef v263
#undef v264
#undef v265
#undef v266
#undef v267
#undef v268
#undef v269
#undef v270
#undef v271
#undef v272
#undef v273
#undef v274
#undef v275
#undef v276
#undef v277
#undef v278
#undef v279
#undef v281
#undef v282
#undef v283
#undef v285
#undef v287
#undef v288
#undef v289
#undef v291
#undef v292
#undef v293
#undef v295
#undef v297
#undef v298
#undef v299
#undef v300
#undef v301
#undef v302
#undef v303
#undef v304
#undef v305
#undef v306


//----- (000000014004A130) ----------------------------------------------------
__int64            sub_14004A130(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-60B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004A130[12400];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_14004A130 + 0)) /* [rsp+10h] */
#define v11 (*(_BYTE (*)[6144])(void *)(sr_frame_14004A130 + 6144)) /* [rsp+1810h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14004A130 + 12288)) /* [rsp+3010h] */
#define v13 (*(float * (*))(void *)(sr_frame_14004A130 + 12384)) /* [rsp+3070h] */
#define v14 (*(float * (*))(void *)(sr_frame_14004A130 + 12392)) /* [rsp+3078h] */

  v4 = v13;
  v6 = v14;
  sub_14004A480((__int64)v11, (__int64)v10, a2, a3, a4);
  return sub_14004A1D0(a1, a2, (__int64)v11, (__int64)v10, v4, v6); /* 0x14004A1A4: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14


//----- (000000014004A1D0) ----------------------------------------------------
_BOOL8            sub_14004A1D0(float *a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6)
{
  int v6; // r15d
  float *v10; // rsi
  __int64 v11; // rdi
  float *v12; // r12
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rax
  float v19; // xmm1_4
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm1_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm2_4
  int v29; // xmm1_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004A1D0[208];
#define v33 (*(int (*))(void *)(sr_frame_14004A1D0 + 0)) /* [rsp+48h] */
#define v34 (*(int (*))(void *)(sr_frame_14004A1D0 + 4)) /* [rsp+4Ch] */
#define v35 (*(int (*))(void *)(sr_frame_14004A1D0 + 8)) /* [rsp+50h] */
#define v36 (*(float (*)[4])(void *)(sr_frame_14004A1D0 + 16)) /* [rsp+58h] */
#define v37 (*(float (*)[4])(void *)(sr_frame_14004A1D0 + 32)) /* [rsp+68h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_14004A1D0 + 48)) /* [rsp+78h] */
#define v39 (*(float (*)[4])(void *)(sr_frame_14004A1D0 + 64)) /* [rsp+88h] */
#define v40 (*(float (*)[6])(void *)(sr_frame_14004A1D0 + 80)) /* [rsp+98h] */
#define v41 (*(float (*))(void *)(sr_frame_14004A1D0 + 192)) /* [rsp+108h] */

  v6 = 0;
  a1[6] = 1.0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = (float *)(a4 + 8);
  v11 = 0;
  v12 = a6;
  do
  {
    v13 = *(_QWORD *)(a2 + 24);
    v14 = *(_DWORD *)(v13 + v11 + 4) == 4;
    v15 = 3 * *(_DWORD *)(v13 + v11 + 8);
    v16 = *(float *)(a3 + 4 * v15 + 4);
    v37[0] = *(float *)(a3 + 4 * v15);
    v17 = *(float *)(a3 + 4 * v15 + 8);
    LODWORD(v15) = *(_DWORD *)(v13 + v11 + 12);
    v37[2] = v17;
    v37[1] = v16;
    v18 = 3 * (int)v15;
    v19 = *(float *)(a3 + 4 * v18 + 4);
    v39[0] = *(float *)(a3 + 4 * v18);
    v20 = *(float *)(a3 + 4 * v18 + 8);
    LODWORD(v18) = *(_DWORD *)(v13 + v11 + 16);
    v39[2] = v20;
    v39[1] = v19;
    v21 = 3 * (int)v18;
    v22 = *(float *)(a3 + 4 * v21 + 4);
    v36[0] = *(float *)(a3 + 4 * v21);
    v36[2] = *(float *)(a3 + 4 * v21 + 8);
    v36[1] = v22;
    if ( v14 )
    {
      v23 = 3 * *(_DWORD *)(v13 + v11 + 20);
      v24 = *(float *)(a3 + 4 * v23 + 4);
      v40[0] = *(float *)(a3 + 4 * v23);
      v40[2] = *(float *)(a3 + 4 * v23 + 8);
      v40[1] = v24;
    }
    v25 = *(v10 - 2);
    v26 = *(v10 - 1);
    v27 = *v10;
    v38[0] = v25;
    v38[1] = v26;
    v38[2] = v27;
    if ( sub_140077FA0((float *)&v33, v38, &v41, a5, v12, v37, v39, v36) )
    {
      v28 = v41;
      if ( v41 < a1[6] )
      {
        v29 = v34;
        *(_DWORD *)a1 = v33;
        *((_DWORD *)a1 + 2) = v35;
        *((_DWORD *)a1 + 1) = v29;
        a1[3] = v25;
        a1[4] = v26;
        a1[5] = v27;
        a1[6] = v28;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + v11 + 4) == 4
      && sub_140077FA0((float *)&v33, v38, &v41, a5, v12, v37, v36, v40) )
    {
      v30 = v41;
      if ( v41 < a1[6] )
      {
        v31 = v34;
        *(_DWORD *)a1 = v33;
        *((_DWORD *)a1 + 2) = v35;
        *((_DWORD *)a1 + 1) = v31;
        a1[3] = v25;
        a1[4] = v26;
        a1[5] = v27;
        a1[6] = v30;
      }
    }
    ++v6;
    v10 += 3;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 16) );
  return a1[6] < 1.0;
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41


//----- (000000014004A480) ----------------------------------------------------
__int64            sub_14004A480(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  int v5; // r11d
  int v8; // ebx
  __int64 v9; // rcx
  float *v10; // rdx
  __int64 result; // rax
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm8_4
  float v15; // xmm11_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  __int64 v21; // rcx
  float *v22; // rdx
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // xmm5_4

  v5 = 0;
  v8 = 0;
  if ( *(int *)a3 > 0 )
  {
    v9 = 0;
    v10 = (float *)(a1 + 8);
    do
    {
      result = *(_QWORD *)(a3 + 8);
      ++v8;
      v12 = a5[4];
      v13 = a5[7];
      v14 = *(float *)(v9 + result);
      v15 = *(float *)(v9 + result + 4);
      v16 = *(float *)(v9 + result + 8);
      v9 += 16;
      v17 = a5[5];
      v18 = a5[8];
      v19 = a5[1] * v14;
      v20 = a5[2] * v14;
      *(v10 - 2) = (float)((float)(v14 * *a5) + (float)(v16 * a5[6])) + (float)((float)(v15 * a5[3]) + *a4);
      *(v10 - 1) = (float)((float)(v13 * v16) + v19) + (float)((float)(v12 * v15) + a4[1]);
      *v10 = (float)((float)(v18 * v16) + v20) + (float)((float)(v17 * v15) + a4[2]);
      v10 += 3;
    }
    while ( v8 < *(_DWORD *)a3 );
  }
  if ( *(int *)(a3 + 16) > 0 )
  {
    v21 = 0;
    v22 = (float *)(a2 + 8);
    do
    {
      result = *(_QWORD *)(a3 + 24);
      ++v5;
      v23 = *(float *)(v21 + result + 24);
      v24 = *(float *)(v21 + result + 28);
      v25 = *(float *)(v21 + result + 32);
      v21 += 36;
      *(v22 - 2) = (float)((float)(v23 * *a5) + (float)(v24 * a5[3])) + (float)(v25 * a5[6]);
      *(v22 - 1) = (float)((float)(v23 * a5[1]) + (float)(v24 * a5[4])) + (float)(v25 * a5[7]);
      *v22 = (float)((float)(v24 * a5[5]) + (float)(v23 * a5[2])) + (float)(v25 * a5[8]);
      v22 += 3;
    }
    while ( v5 < *(_DWORD *)(a3 + 16) );
  }
  return result;
}


//----- (000000014004A670) ----------------------------------------------------
__int64            sub_14004A670(__int64 a1)
{
  __m128i *v2; // rax
  __m128i *v3; // rax
  __m128i *v4; // rax
  __int64 result; // rax
  int v6; // edx
  _DWORD *v7; // rcx

  *(_DWORD *)a1 = dword_140404A6C[349900653];
  v2 = (__m128i *)sr_path_malloc(16LL * (int)dword_140404A6C[349900653]);
  *(_QWORD *)(a1 + 8) = (uint64)(uintptr_t)(v2);
  sub_1401FC920(v2, (     __m128i *)&dword_140404A6C[349900654], 16LL * (int)dword_140404A6C[349900653]);
  *(_DWORD *)(a1 + 16) = dword_140404A6C[349902702];
  v3 = (__m128i *)sr_path_malloc(36LL * (int)dword_140404A6C[349902702]);
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v3);
  sub_1401FC920(v3, (     __m128i *)&dword_140404A6C[349902703], 36LL * (int)dword_140404A6C[349902702]);
  *(_DWORD *)(a1 + 32) = dword_140404A6C[349907311];
  v4 = (__m128i *)sr_path_malloc(12LL * (int)dword_140404A6C[349907311]);
  *(_QWORD *)(a1 + 40) = (uint64)(uintptr_t)(v4);
  sub_1401FC920(v4, (     __m128i *)&dword_140404A6C[349907312], 12LL * (int)dword_140404A6C[349907311]);
  result = dword_140404A6C[349908848];
  v6 = 0;
  *(_DWORD *)(a1 + 48) = dword_140404A6C[349908848];
  if ( (int)dword_140404A6C[349908848] > 0 )
  {
    v7 = (_DWORD *)(a1 + 60);
    do
    {
      ++v6;
      *(v7 - 2) = *(_DWORD *)((char *)v7 + (_QWORD)&dword_140404A6C[349908834] - a1);
      *(v7 - 1) = *(_DWORD *)((char *)v7 + (_QWORD)&dword_140404A6C[349908835] - a1);
      result = *(unsigned int *)((char *)v7 + (_QWORD)&dword_140404A6C[349908836] - a1);
      *v7 = result;
      v7 += 3;
    }
    while ( v6 < (int)dword_140404A6C[349908848] );
  }
  return result;
}


//----- (000000014004BFC0) ----------------------------------------------------
__int64            sub_14004BFC0(__int16 a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6; // rsi
  __int64 v8; // rbx
  int v10; // r15d
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  float v15; // xmm12_4
  float v16; // xmm11_4
  float v17; // xmm10_4
  float v18; // xmm15_4
  float v19; // xmm14_4
  float v20; // xmm13_4
  int v21; // eax
  float v22; // xmm7_4
  float v23; // xmm9_4
  float v24; // xmm4_4
  __int64 v25; // rax
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm9_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm2_4
  float *v44; // rbx
  __int64 v45; // r14
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm0_4
  unsigned int v50; // xmm7_4
  unsigned int v51; // xmm8_4
  __int64 v53; // [rsp-20h] [rbp-1A80h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004BFC0[12832];
#define v54 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 0)) /* [rsp+20h] */
#define v55 (*(float (*))(void *)(sr_frame_14004BFC0 + 8)) /* [rsp+28h] */
#define v56 (*(float (*))(void *)(sr_frame_14004BFC0 + 16)) /* [rsp+30h] */
#define v57 (*(float (*))(void *)(sr_frame_14004BFC0 + 20)) /* [rsp+34h] */
#define v58 (*(float (*))(void *)(sr_frame_14004BFC0 + 24)) /* [rsp+38h] */
#define v59 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 32)) /* [rsp+40h] */
#define v60 (*(float (*)[3])(void *)(sr_frame_14004BFC0 + 44)) /* [rsp+4Ch] */
#define v61 (*(float (*))(void *)(sr_frame_14004BFC0 + 56)) /* [rsp+58h] */
#define v62 (*(float (*))(void *)(sr_frame_14004BFC0 + 60)) /* [rsp+5Ch] */
#define v63 (*(float (*))(void *)(sr_frame_14004BFC0 + 6592)) /* [rsp+19E0h] */
#define v64 (*(float (*)[4])(void *)(sr_frame_14004BFC0 + 6600)) /* [rsp+19E8h] */
#define v65 (*(unsigned int (*)[4])(void *)(sr_frame_14004BFC0 + 6616)) /* [rsp+19F8h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 6632)) /* [rsp+1A08h] */
#define v67 (*(float * (*))(void *)(sr_frame_14004BFC0 + 6640)) /* [rsp+1A10h] */
#define v68 (*(int (*))(void *)(sr_frame_14004BFC0 + 6656)) /* [rsp+1A20h] */
#define v69 (*(char (*))(void *)(sr_frame_14004BFC0 + 6660)) /* [rsp+1A24h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_14004BFC0 + 12816)) /* [rsp+3230h] */

  v6 = a4;
  v67 = a4;
  v8 = a2;
  v66 = a2;
  v10 = 0;
  v68 = 0;
  sub_14000C180(&v68, 0, a5, a6);
  if ( *(int *)(v8 + 64) > 0 )
  {
    v11 = v68;
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 72);
      v15 = v6[3];
      v16 = *v6;
      v17 = v6[6];
      v18 = v6[4];
      v19 = v6[1];
      v20 = v6[7];
      v21 = 3 * *(_DWORD *)(v14 + v12);
      v57 = v6[5];
      v56 = v6[2];
      v22 = *(float *)(v13 + 4LL * v21);
      v23 = *(float *)(v13 + 4LL * v21 + 4);
      v24 = *(float *)(v13 + 4LL * v21 + 8);
      v25 = 3 * *(_DWORD *)(v14 + v12 + 4);
      v26 = (float)((float)(v17 * v24) + (float)(v16 * v22)) + (float)((float)(v15 * v23) + *a3);
      v27 = (float)(v20 * v24) + (float)(v19 * v22);
      v28 = v6[2] * v22;
      v29 = (float)(v18 * v23) + a3[1];
      v30 = *(float *)(v13 + 4 * v25 + 4);
      v59[0] = v26;
      v31 = v6[8] * v24;
      v32 = *(float *)(v13 + 4 * v25);
      v33 = v27 + v29;
      v34 = v6[5] * v23;
      v35 = *(float *)(v13 + 4 * v25 + 8);
      v59[1] = v33;
      v36 = (float)(v31 + v28) + (float)(v34 + a3[2]);
      v37 = (float)(v30 * v15) + *a3;
      v59[2] = v36;
      v38 = v35;
      v39 = (float)((float)(v35 * v17) + (float)(v32 * v16)) + v37;
      v40 = v30;
      v41 = (float)(v35 * v6[8]) + (float)(v32 * v56);
      v42 = (float)(v30 * v57) + a3[2];
      v60[0] = v39;
      v43 = (float)((float)(v38 * v20) + (float)(v32 * v19)) + (float)((float)(v40 * v18) + a3[1]);
      v60[2] = v41 + v42;
      v60[1] = v43;
      if ( v11 > 0 )
      {
        v44 = (float *)&v69;
        v45 = (unsigned int)v11;
        do
        {
          if ( (unsigned int)sub_14008CEB0(v64, &v61, &v58, v59, v60, v44, v44 + 3)
            && sub_140187410(v44, v44 + 3, a3, v59, v60) )
          {
            v46 = v61 - v64[0];
            v47 = v62 - v64[1];
            v48 = v63 - v64[2];
            v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
            if ( v49 == 0.0 )
            {
              v54 = 0;
              v55 = 0.0;
            }
            else
            {
              *(float *)&v54 = (float)(1.0 / v49) * v46;
              *((float *)&v54 + 1) = (float)(1.0 / v49) * v47;
              v55 = (float)(1.0 / v49) * v48;
            }
            *(float *)&v50 = v62 - a3[1];
            *(float *)&v51 = v63 - a3[2];
            *(float *)v65 = v61 - *a3;
            v65[1] = v50;
            v65[2] = v51;
            sub_140005160(a1, v65, (unsigned int *)&v54, v58, 0x3F19999Au, 0.001953125, 0x3B800000u);
          }
          v44 += 6;
          --v45;
        }
        while ( v45 );
        v8 = v66;
        v11 = v68;
        v6 = v67;
      }
      ++v10;
      v12 += 12;
    }
    while ( v10 < *(_DWORD *)(v8 + 64) );
  }
  return 0; /* the function has no caller */
}
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
#undef v67
#undef v68
#undef v69
#undef v70


//----- (000000014004C4C0) ----------------------------------------------------
__int64            sub_14004C4C0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}


//----- (000000014004C4E0) ----------------------------------------------------
__int64            sub_14004C4E0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rcx
  bool v8; // zf
  char v9; // al
  __int64 v10; // r8
  char *v11; // rdx
  char v12; // al
  char *v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdx
  char *v18; // rcx
  char v19; // al
  __int64 v20; // r8
  char *v21; // rdx
  char v22; // al
  char *v23; // rcx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rdx
  char *v28; // rcx
  char v29; // al
  __int64 v30; // r8
  char *v31; // rdx
  char v32; // al
  char *v33; // rcx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // rsi
  char *v37; // rdx
  __int64 v38; // r8
  char v39; // al
  __int64 v40; // rcx
  char *v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C4E0[592];
#define v45 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 0)) /* [rsp+0h] */
#define v46 (*(int (*))(void *)(sr_frame_14004C4E0 + 32)) /* [rsp+20h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 40)) /* [rsp+28h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 48)) /* [rsp+30h] */
#define v49 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 56)) /* [rsp+38h] */
#define v50 (*(_BYTE (*)[512])(void *)(sr_frame_14004C4E0 + 64)) /* [rsp+40h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14004C4E0 + 576)) /* [rsp+240h] */

  v4 = a1;
  v49 = a2;
  v47 = a3;
  v48 = a4;
  LOBYTE(dword_140404A6C[71807077]) = 0;
  if ( a2 )
  {
    v5 = 60LL * a1;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[v5 + 71737686], 1, (const char *const *)&v49, nullptr);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v7 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v7 == 0;
      while ( !v8 );
      v6 = 0;
      do
      {
        v9 = *((_BYTE *)&dword_140404A6C[71807077] + v6);
        v7[v6++] = v9;
      }
      while ( v9 );
    }
    unk_140404200(dword_140404A6C[v5 + 71737686], v6);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v11 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v11 == 0;
      while ( !v8 );
      v10 = 0;
      do
      {
        v12 = *((_BYTE *)&dword_140404A6C[71807077] + v10);
        v11[v10++] = v12;
      }
      while ( v12 );
    }
    unk_1404041F0(dword_140404A6C[v5 + 71737685], dword_140404A6C[v5 + 71737686], v10);
    unk_140404268(dword_140404A6C[v5 + 71737686], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v13 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v13 == 0;
      while ( !v8 );
      v14 = 0;
      do
      {
        v15 = *((_BYTE *)&dword_140404A6C[71807077] + v14);
        v13[v14++] = v15;
      }
      while ( v15 );
    }
  }
  else if ( !a3 && !a4 )
  {
    return dword_140404A6C[60 * (__int64)a1 + 71737689];
  }
  if ( v47 )
  {
    v16 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737687], 1, (const char *const *)&v47, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v18 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v18 == 0;
      while ( !v8 );
      v17 = 0;
      do
      {
        v19 = *((_BYTE *)&dword_140404A6C[71807077] + v17);
        v18[v17++] = v19;
      }
      while ( v19 );
    }
    unk_140404200(dword_140404A6C[v16 + 71737687], v17);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v21 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v21 == 0;
      while ( !v8 );
      v20 = 0;
      do
      {
        v22 = *((_BYTE *)&dword_140404A6C[71807077] + v20);
        v21[v20++] = v22;
      }
      while ( v22 );
    }
    unk_1404041F0(dword_140404A6C[v16 + 71737685], dword_140404A6C[v16 + 71737687], v20);
    unk_140404268(dword_140404A6C[v16 + 71737687], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v23 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v23 == 0;
      while ( !v8 );
      v24 = 0;
      do
      {
        v25 = *((_BYTE *)&dword_140404A6C[71807077] + v24);
        v23[v24++] = v25;
      }
      while ( v25 );
    }
  }
  if ( v48 )
  {
    v26 = 60 * v4;
    ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[60 * v4 + 71737688], 1, (const char *const *)&v48, nullptr);
    unk_140404268(dword_140404A6C[60 * v4 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v28 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v28 == 0;
      while ( !v8 );
      v27 = 0;
      do
      {
        v29 = *((_BYTE *)&dword_140404A6C[71807077] + v27);
        v28[v27++] = v29;
      }
      while ( v29 );
    }
    unk_140404200(dword_140404A6C[v26 + 71737688], v27);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v31 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v31 == 0;
      while ( !v8 );
      v30 = 0;
      do
      {
        v32 = *((_BYTE *)&dword_140404A6C[71807077] + v30);
        v31[v30++] = v32;
      }
      while ( v32 );
    }
    unk_1404041F0(dword_140404A6C[v26 + 71737685], dword_140404A6C[v26 + 71737688], v30);
    unk_140404268(dword_140404A6C[v26 + 71737688], 0x10000, &v46, &dword_140404A6C[71807077]);
    if ( v46 > 0 )
    {
      v33 = (char *)&dword_140404A6C[71741524] + 3;
      do
        v8 = *++v33 == 0;
      while ( !v8 );
      v34 = 0;
      do
      {
        v35 = *((_BYTE *)&dword_140404A6C[71807077] + v34);
        v33[v34++] = v35;
      }
      while ( v35 );
    }
  }
  v36 = 60 * v4;
  unk_1404042D0(dword_140404A6C[v36 + 71737685]);
  unk_140404268(dword_140404A6C[v36 + 71737685], 0x10000, &v46, &dword_140404A6C[71807077]);
  if ( v46 > 0 )
  {
    v37 = (char *)&dword_140404A6C[71741524] + 3;
    do
      v8 = *++v37 == 0;
    while ( !v8 );
    v38 = 0;
    do
    {
      v39 = *((_BYTE *)&dword_140404A6C[71807077] + v38);
      v37[v38++] = v39;
    }
    while ( v39 );
  }
  v40 = dword_140404A6C[v36 + 71737685];
  dword_140404A6C[v36 + 71737689] = 1;
  unk_140404380(v40, v37, v38);
  sub_140158AB0(v50, "\r\n\r\n");
  v41 = (char *)&dword_140404A6C[71741524] + 3;
  do
    v8 = *++v41 == 0;
  while ( !v8 );
  v42 = 0;
  do
  {
    v43 = v50[v42];
    v41[v42++] = v43;
  }
  while ( v43 );
  return dword_140404A6C[60 * (__int64)a1 + 71737689];
}
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 14004C5C5: variable 'v6' is possibly undefined
// 14004C61A: variable 'v10' is possibly undefined
// 14004C6D5: variable 'v17' is possibly undefined
// 14004C72A: variable 'v20' is possibly undefined
// 14004C7E5: variable 'v27' is possibly undefined
// 14004C83A: variable 'v30' is possibly undefined
// 14004C8EE: variable 'v37' is possibly undefined
// 14004C8EE: variable 'v38' is possibly undefined
// 1404041F0: using guessed type __int64 (__fastcall *unk_1404041F0)(_QWORD, _QWORD, _QWORD);
// 140404200: using guessed type __int64 (__fastcall *unk_140404200)(_QWORD, _QWORD);
// 140404268: using guessed type __int64 (__fastcall *unk_140404268)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042D8: using guessed type __int64 (__fastcall *unk_1404042D8)(_QWORD, _QWORD, _QWORD);
// 140404380: using guessed type __int64 (__fastcall *unk_140404380)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1515F0C00: using guessed type unsigned int;

//----- (000000014004C960) ----------------------------------------------------
__int64            sub_14004C960(int a1, int a2)
{
  __int64 v3; // rcx

  if ( a2 == 2 )
    return dword_140404A6C[1760 * a1 + 278846098];
  if ( a2 )
    return 0xFFFFFFFFLL;
  v3 = 1760LL * a1;
  if ( (int)dword_140404A6C[v3 + 278845906] <= 0 )
    return 0xFFFFFFFFLL;
  return dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004C9C0) ----------------------------------------------------
__int64            sub_14004C9C0(int a1, int *a2, int *a3, __int64 a4, int *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 i; // rax
  unsigned __int8 v11; // al
  int *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r13
  int v19; // edx
  char v20; // cl
  __int64 v21; // rcx
  char v22; // al
  int v23; // r10d
  __int64 v24; // rbp
  int v25; // edi
  _DWORD *j; // r11
  unsigned int *v27; // rax
  _BYTE *v28; // r9
  int v29; // ecx
  int v30; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004C9C0[576];
#define v32 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 0)) /* [rsp+0h] */
#define v33 (*(int * (*))(void *)(sr_frame_14004C9C0 + 32)) /* [rsp+20h] */
#define v34 (*(_BYTE (*)[512])(void *)(sr_frame_14004C9C0 + 48)) /* [rsp+30h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14004C9C0 + 560)) /* [rsp+230h] */

  v33 = a5;
  v8 = a1;
  v9 = *a5;
  for ( i = v9; i < 62; ++i )
  {
    if ( *(_BYTE *)(i + a4) != 32 )
      break;
    LODWORD(v9) = v9 + 1;
  }
  v11 = toupper(*(unsigned __int8 *)((int)v9 + a4));
  if ( (unsigned __int8)(v11 - 65) <= 0x19u && *(_BYTE *)((int)v9 + a4 + 1) == 58 )
  {
    *a2 = v11 - 65;
    LODWORD(v9) = v9 + 2;
  }
  v12 = v33;
  *v33 = v9;
  v13 = *a2;
  if ( (_DWORD)v13 == 2 )
  {
    v14 = 1760 * v8;
    v15 = v8;
    v16 = dword_140404A6C[1760 * v8 + 278846098];
  }
  else
  {
    if ( (_DWORD)v13 )
      return (unsigned int)-1; /* 0x14004CA7E: jne -> mov eax, 0xffffffff */
    v14 = 1760 * v8;
    v15 = v8;
    if ( (int)dword_140404A6C[1760 * v8 + 278845906] <= 0 )
      return (unsigned int)-1; /* 0x14004CA9D: jle -> mov eax, 0xffffffff */
    v16 = dword_140404A6C[1760 * dword_140404A6C[v14 + 278845907] + 278846098];
  }
  if ( v16 != -1 )
  {
    *a3 = dword_140404A6C[1760 * v15 + 278847173 + 18 * v13 + (int)dword_140404A6C[18 * v13 + 278847172 + v14]];
    if ( *(_BYTE *)((int)v9 + a4) == 92 )
    {
      *a3 = 0;
      LODWORD(v9) = v9 + 1;
    }
    v17 = (int)v9;
    v18 = v16;
    while ( 1 )
    {
      while ( 1 )
      {
        *v12 = v9;
        if ( *(_BYTE *)(v17 + a4) != 46 )
          break;
        ++v17;
        v19 = v9 + 1;
        if ( *(_BYTE *)(v17 + a4) == 46 )
        {
          v20 = *(_BYTE *)((int)v9 + a4 + 2);
          if ( v20 != 92 && v20 )
            return (unsigned int)-1; /* 0x14004CB3A: jne -> mov eax, 0xffffffff */
          ++v17;
          *a3 = dword_140404A6C[2570 * v18 + 275753051 + 4 * *a3];
        }
        else
        {
          v19 = v9;
        }
        LODWORD(v9) = v19 + 1;
        if ( *(_BYTE *)(v17 + a4) != 92 )
          break;
        LODWORD(v9) = v19 + 2;
        ++v17;
      }
      v21 = 0;
      if ( v17 < 62 )
      {
        do
        {
          v22 = *(_BYTE *)(v17 + a4);
          if ( v22 == 92 || v22 == 32 || !v22 )
            break;
          if ( v21 >= 12 )
            return (unsigned int)-1; /* 0x14004CB9A: jge -> mov eax, 0xffffffff */
          v34[v21] = v22;
          LODWORD(v9) = v9 + 1;
          ++v21;
          ++v17;
        }
        while ( v17 < 62 );
        if ( (unsigned __int64)v21 >= 0x200 )
          sub_1401F8694();
      }
      v34[v21] = 0;
      if ( v21 <= 0 )
        return 1; /* 0x14004CBC7: jle -> mov eax, 1 */
      v23 = 1;
      v24 = 2570 * v18;
      v25 = dword_140404A6C[2570 * v18 + 275753047];
      if ( v25 <= 1 )
        return 0; /* 0x14004CBE9: jle -> xor eax, eax */
      for ( j = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 * 4 + 1107225576); ; j += 4 )
      {
        if ( *j == *a3 )
        {
          v27 = &dword_140404A6C[4 * v23 + 275753048 + v24];
          v28 = (_BYTE *)(v34 - (_BYTE *)v27);
          do
          {
            v29 = (unsigned __int8)v28[(_QWORD)v27];
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
            break;
        }
        if ( ++v23 >= v25 )
          return 0; /* 0x14004CC31: jge -> xor eax, eax */
      }
      if ( v23 == -1 )
        return 0; /* 0x14004CC40: je -> xor eax, eax */
      *a3 = v23;
      if ( *(_BYTE *)(v17 + a4) != 92 )
        return 1; /* 0x14004CC4B: jne -> mov eax, 1 */
      v12 = v33;
      LODWORD(v9) = v9 + 1;
      ++v17;
    }
  }
  return (unsigned int)-1; /* 0x14004CABE: je -> mov eax, 0xffffffff */
}
#undef v32
#undef v33
#undef v34
#undef v35

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004CCB0) ----------------------------------------------------
__int64            sub_14004CCB0(int a1, int a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // r10
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r10
  int *v12; // r11
  int *v13; // r8
  __int64 v14; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004CCB0[272];
#define v16 (*(int (*))(void *)(sr_frame_14004CCB0 + 0)) /* [rsp+0h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_14004CCB0 + 256)) /* [rsp+100h] */

  v3 = a2;
  if ( a2 == 2 )
  {
    v4 = a1;
    v5 = 1760LL * a1;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a2 )
      return 0; /* the function has no caller */
    v4 = a1;
    v5 = 1760LL * a1;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      return 0; /* the function has no caller */
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 != -1 )
  {
    if ( (_DWORD)a3 )
    {
      v7 = 1;
      v8 = 1;
      v16 = a3;
      do
      {
        LODWORD(a3) = dword_140404A6C[2570 * v6 + 275753051 + 4 * (int)a3];
        if ( !(_DWORD)a3 )
          break;
        *(&v16 + v8) = a3;
        ++v7;
        ++v8;
      }
      while ( v8 < 8 );
      v9 = v5 * 4 + 72 * v3;
      v10 = v3;
      v11 = v7;
      v12 = (int *)((char *)&dword_140404A6C[278847172] + v9);
      *(unsigned int *)((char *)&dword_140404A6C[278847172] + v9) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[278847173] + v9) = 0;
      if ( v7 >= 1LL )
      {
        v13 = &v16 + v7 - 1;
        do
        {
          v14 = *v12;
          --v13;
          *v12 = v14 + 1;
          dword_140404A6C[1760 * v4 + 278847174 + 18 * v10 + v14] = v13[1];
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[18 * a2 + 278847172 + v5] = a3;
    }
  }
  return 0; /* the function has no caller */
}
#undef v16
#undef v17

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004CE30) ----------------------------------------------------
double            sub_14004CE30(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx
  __m128i *v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  void *v7; // rcx
  __m128i *v8; // rax
  unsigned int v9; // ecx
  __m128i *v10; // rax
  unsigned int v11; // ecx
  __m128i *v12; // rax
  unsigned int v13; // ecx
  __m128i *v14; // rax
  unsigned int v15; // ecx
  __m128i *v16; // rax
  unsigned int v17; // ecx
  void *v18; // rcx
  __m128i *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8

  v1 = a1;
  v2 = 908LL * a1;
  v3 = *(void **)&dword_140404A6C[v2 + 178527463];
  dword_140404A6C[v2 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v2 + 178527462] = dword_140404A6C[177167566];
  free(v3);
  v4 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177167566] * dword_140404A6C[177495247]);
  v5 = dword_140404A6C[177167566] * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527463] = (uint64)(uintptr_t)(v4);
  sub_1401FC920(v4, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v5));
  v6 = dword_140404A6C[177495247];
  v7 = *(void **)&dword_140404A6C[v2 + 178527467];
  dword_140404A6C[v2 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v2 + 178527475] = v6;
  free(v7);
  v8 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v9 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527467] = (uint64)(uintptr_t)(v8);
  sub_1401FC920(v8, (     __m128i *)&dword_140404A6C[177495248], (int)(12 * v9));
  free(*(void **)&dword_140404A6C[v2 + 178527469]);
  v10 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v11 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527469] = (uint64)(uintptr_t)(v10);
  sub_1401FC920(v10, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v11));
  free(*(void **)&dword_140404A6C[v2 + 178527471]);
  v12 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v13 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527471] = (uint64)(uintptr_t)(v12);
  sub_1401FC920(v12, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v13));
  free(*(void **)&dword_140404A6C[v2 + 178527473]);
  v14 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v15 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527473] = (uint64)(uintptr_t)(v14);
  sub_1401FC920(v14, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v15));
  free(*(void **)&dword_140404A6C[v2 + 178527477]);
  v16 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v17 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v2 + 178527477] = (uint64)(uintptr_t)(v16);
  sub_1401FC920(v16, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v17));
  v18 = *(void **)&dword_140404A6C[v2 + 178527481];
  dword_140404A6C[v2 + 178527479] = dword_140404A6C[178519250];
  free(v18);
  v19 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v20 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v2 + 178527481] = (uint64)(uintptr_t)(v19);
  sub_1401FC920(v19, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v20));
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793813], v21);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v2 + 178527462] * dword_140404A6C[v2 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v2 + 178527463],
    35044);
  qword_140404170(34962, 0, v22);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793814], v23);
  unk_140404190(34963, (int)(24 * dword_140404A6C[v2 + 178527465]), *(_QWORD *)&dword_140404A6C[v2 + 178527477], 35044);
  return qword_140404170(34963, 0, v24);
}

// 14004D0A0: variable 'v21' is possibly undefined
// 14004D0DD: variable 'v22' is possibly undefined
// 14004D0F7: variable 'v23' is possibly undefined
// 14004D13B: variable 'v24' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A7DBDA4: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004D170) ----------------------------------------------------
float *           sub_14004D170(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  float *result; // rax
  int v4; // ecx
  float v5; // xmm4_4
  float v6; // xmm0_4
  unsigned int v7; // xmm2_4
  unsigned int v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // r8d
  unsigned int *v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  v2 = 58LL * a1;
  dword_140404A6C[v2 + 20074645] = a2[2];
  dword_140404A6C[v2 + 20074646] = a2[1];
  result = (float *)*a2;
  dword_140404A6C[v2 + 20074647] = (unsigned int)result;
  v4 = 0;
  v5 = (float)(int)a2[2];
  if ( (int)dword_140404A6C[70425405] > 0 )
  {
    result = (float *)&dword_140404A6C[70687552];
    do
    {
      v6 = v5 - *result;
      *result = *(result - 2);
      ++v4;
      *(result - 2) = v6;
      v7 = *((_DWORD *)result + 49150);
      result[49150] = -result[49152];
      v8 = *((_DWORD *)result + 98302);
      *((_DWORD *)result + 49152) = v7;
      v9 = result[98304];
      *((_DWORD *)result + 98304) = v8;
      result[98302] = -v9;
      result += 3;
    }
    while ( v4 < (int)dword_140404A6C[70425405] );
  }
  v10 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v11 = &dword_140404A6C[71064383];
    do
    {
      v12 = *v11;
      result = (float *)((*v11 & 0xF0000) - 196608);
      if ( ((unsigned int)result & 0xFFFEFFFF) == 0 )
      {
        result = (float *)((unsigned __int8)(((v12 >> 12) + 1) & 3) << 12);
        v12 = (unsigned int)result | v12 & 0xFFFF0FFF;
        *v11 = v12;
      }
      if ( (v12 & 0xF0000) == 0 )
      {
        *((_WORD *)v11 + 1) = 0;
        v12 = *v11;
        result = (float *)(*v11 - 1);
        if ( (unsigned int)result > 2 )
        {
          if ( v12 == 4 )
          {
            *v11 = 1;
            goto LABEL_38;
          }
        }
        else
        {
          *v11 = ++v12;
        }
      }
      v13 = v12 & 0xF0000;
      switch ( v13 )
      {
        case 393216:
          *((_WORD *)v11 + 1) = 0;
          v14 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v14 == 4 )
              v14 = 1;
            v15 = v14 | 0x10000;
          }
          else
          {
            v15 = (v14 + 1) | 0x10000;
          }
LABEL_37:
          *v11 = v15;
          break;
        case 65536:
          *((_WORD *)v11 + 1) = 0;
          v16 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v16 == 4 )
              v16 = 1;
            v15 = v16 | 0x50000;
          }
          else
          {
            v15 = (v16 + 1) | 0x50000;
          }
          goto LABEL_37;
        case 327680:
          *((_WORD *)v11 + 1) = 0;
          v17 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v17 == 4 )
              v17 = 1;
            v15 = v17 | 0x20000;
          }
          else
          {
            v15 = (v17 + 1) | 0x20000;
          }
          goto LABEL_37;
        case 131072:
          *((_WORD *)v11 + 1) = 0;
          v18 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v18 == 4 )
              v18 = 1;
          }
          else
          {
            ++v18;
          }
          v15 = v18 | 0x60000;
          goto LABEL_37;
      }
LABEL_38:
      ++v10;
      ++v11;
    }
    while ( v10 < (int)dword_140404A6C[70998846] );
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004D390) ----------------------------------------------------
__int64            sub_14004D390(int a1)
{
  int v1; // edx
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned int *v4; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  unsigned int *v10; // rcx
  __int64 v11; // r14
  unsigned int *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ebp
  __int64 v16; // rax
  signed int v17; // ecx
  int v18; // ebx
  __int64 v19; // rsi
  char *v20; // rax
  bool v21; // zf
  __int128 v22; // xmm1
  __int64 v23; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004D390[80];
#define v24 (*(_BYTE (*)[32])(void *)(sr_frame_14004D390 + 0)) /* [rsp+0h] */
#define v25 (*(char (*)[32])(void *)(sr_frame_14004D390 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14004D390 + 64)) /* [rsp+40h] */

  v1 = 0;
  v2 = a1;
  if ( (int)dword_140404A6C[134050358] > 0 )
  {
    v3 = 3597LL * a1;
    v4 = &dword_140404A6C[134050359];
    while ( dword_140404A6C[v3 + 71856262] != *v4 )
    {
      ++v1;
      v4 += 28;
      if ( v1 >= (int)dword_140404A6C[134050358] )
        goto LABEL_5;
    }
    v6 = 28LL * v1;
    if ( dword_140404A6C[v3 + 71856263] == dword_140404A6C[v6 + 134050360] )
    {
      if ( dword_140404A6C[v6 + 134050373] )
      {
        v9 = *(_OWORD *)&dword_140404A6C[v6 + 134050369];
        *(_OWORD *)&dword_140404A6C[v3 + 71856254] = *(_OWORD *)&dword_140404A6C[v6 + 134050365];
        *(_OWORD *)&dword_140404A6C[v3 + 71856258] = v9;
      }
      else
      {
        v7 = *(_OWORD *)&dword_140404A6C[v3 + 71856254];
        dword_140404A6C[v6 + 134050373] = 5;
        v8 = *(_OWORD *)&dword_140404A6C[v3 + 71856258];
        *(_OWORD *)&dword_140404A6C[v6 + 134050365] = v7;
        *(_OWORD *)&dword_140404A6C[v6 + 134050369] = v8;
      }
    }
    return 0; /* the function has no caller */
  }
LABEL_5:
  if ( (int)dword_140404A6C[134050358] >= 0x7FFF )
    return 0; /* the function has no caller */
  v10 = &dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359];
  v11 = 3597 * v2;
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359] = dword_140404A6C[3597 * v2 + 71856262];
  v12 = &dword_140404A6C[3597 * v2 + 71856254];
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050360] = dword_140404A6C[3597 * v2 + 71856263];
  v13 = -1;
  do
    ++v13;
  while ( *((_BYTE *)v12 + v13) );
  if ( (int)v13 > 24 )
    LODWORD(v13) = 24;
  v14 = (int)v13;
  v15 = 1;
  while ( 1 )
  {
    v16 = -1;
    do
      ++v16;
    while ( *((_BYTE *)v12 + v16) );
    if ( (int)v16 > 24 )
      LODWORD(v16) = 24;
    v17 = dword_140404A6C[134050358];
    v18 = 0;
    if ( (int)dword_140404A6C[134050358] <= 0 )
      break;
    v19 = (int)v16;
    while ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v12), (const char *)(uintptr_t)(&dword_140404A6C[28 * v18 + 134050365]), v19) )
    {
      v17 = dword_140404A6C[134050358];
      if ( ++v18 >= (int)dword_140404A6C[134050358] )
        goto LABEL_29;
    }
    *((_BYTE *)&dword_140404A6C[v11 + 71856254] + v14) = 0;
    sub_140158AB0(v25, "(%d)", v15);
    v20 = (char *)v12 - 1;
    do
      v21 = *++v20 == 0;
    while ( !v21 );
    strcpy(v20, v25);
    ++v15;
    HIBYTE(dword_140404A6C[v11 + 71856261]) = 0;
    if ( v15 >= 1000 )
    {
      v17 = dword_140404A6C[134050358];
      break;
    }
  }
LABEL_29:
  v22 = *((_OWORD *)v12 + 1);
  v23 = 28LL * v17;
  *(_OWORD *)&dword_140404A6C[v23 + 134050365] = *(_OWORD *)v12;
  *(_OWORD *)&dword_140404A6C[v23 + 134050369] = v22;
  v21 = dword_140404A6C[283831312] == 4;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = 1000;
  if ( v21 )
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = dword_140404A6C[284022495];
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050380] = rand() % 3;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050381] = rand() & 7;
  dword_140404A6C[28 * dword_140404A6C[134050358]++ + 134050382] = rand() & 3;
  return 0; /* the function has no caller */
}
#undef v24
#undef v25
#undef v26

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361344: using guessed type unsigned int;
// 183F7A5E8: using guessed type unsigned int;

//----- (000000014004D750) ----------------------------------------------------
__int64            sub_14004D750(int a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // ebx
  int v4; // r8d
  unsigned int *v5; // rax
  int v6; // edx
  unsigned int v7; // edi
  unsigned int *v8; // rcx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int *v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int *v18; // r11
  __int64 v19; // rax
  signed int v20; // ecx
  signed int v21; // r8d
  __int64 v22; // r10
  unsigned int *v23; // rax
  signed int v24; // r8d
  signed int v25; // ecx
  unsigned int v26; // r10d
  unsigned int *v27; // rax
  __int64 v28; // rdx

  v2 = dword_140404A6C[456202733];
  v3 = -1;
  v4 = 0;
  if ( (int)dword_140404A6C[456202733] <= 0 )
    return 4294967294LL;
  v5 = &dword_140404A6C[456202739];
  do
  {
    if ( *(v5 - 4) == a1 && *v5 == a2 )
      v3 = v4;
    ++v4;
    v5 += 14;
  }
  while ( v4 < (int)dword_140404A6C[456202733] );
  if ( v3 == -1 )
    return 4294967294LL;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[134050358] <= 0 )
    goto LABEL_14;
  v8 = &dword_140404A6C[134050361];
  do
  {
    v9 = dword_140404A6C[14 * v3 + 456202735] == *v8;
    v8 += 28;
    v10 = v6;
    if ( !v9 )
      v10 = v7;
    ++v6;
    v7 = v10;
  }
  while ( v6 < (int)dword_140404A6C[134050358] );
  if ( v10 == -1 )
  {
LABEL_14:
    if ( (int)dword_140404A6C[134050358] >= 0x7FFF )
      return 0xFFFFFFFFLL;
    v7 = dword_140404A6C[134050358];
    v12 = &dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359];
    *(_OWORD *)v12 = 0;
    *((_OWORD *)v12 + 1) = 0;
    *((_OWORD *)v12 + 2) = 0;
    *((_OWORD *)v12 + 3) = 0;
    *((_OWORD *)v12 + 4) = 0;
    *((_OWORD *)v12 + 5) = 0;
    *((_OWORD *)v12 + 6) = 0;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = 1000;
    v9 = dword_140404A6C[283831312] == 4;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050375] = 1000;
    if ( v9 )
      dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = dword_140404A6C[284022495];
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050380] = rand() % 3;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050381] = rand() & 7;
    v13 = rand();
    v2 = dword_140404A6C[456202733];
    dword_140404A6C[28 * dword_140404A6C[134050358]++ + 134050382] = v13 & 3;
  }
  v14 = 14LL * v3;
  v15 = 28LL * (int)v7;
  v16 = *(_OWORD *)&dword_140404A6C[v14 + 456202740];
  v17 = *(_OWORD *)&dword_140404A6C[v14 + 456202744];
  v18 = &dword_140404A6C[v14 + 456202735];
  dword_140404A6C[v15 + 134050361] = dword_140404A6C[v14 + 456202735];
  dword_140404A6C[v15 + 134050362] = dword_140404A6C[v14 + 456202736];
  v19 = *(_QWORD *)&dword_140404A6C[v14 + 456202737];
  v20 = 0;
  *(_OWORD *)&dword_140404A6C[v15 + 134050365] = v16;
  *(_QWORD *)&dword_140404A6C[v15 + 134050363] = v19;
  *(_OWORD *)&dword_140404A6C[v15 + 134050369] = v17;
  v21 = dword_140404A6C[134967863];
  if ( (int)dword_140404A6C[134967863] > 0 )
  {
    v22 = v19;
    v23 = &dword_140404A6C[134967865];
    do
    {
      if ( v22 == *(_QWORD *)v23 )
      {
        dword_140404A6C[v15 + 134050385] = 100000000;
        v21 = dword_140404A6C[134967863];
      }
      ++v20;
      v23 += 2;
    }
    while ( v20 < v21 );
  }
  v24 = dword_140404A6C[135033401];
  v25 = 0;
  if ( (int)dword_140404A6C[135033401] > 0 )
  {
    v26 = dword_140404A6C[v15 + 134050362];
    v27 = &dword_140404A6C[135033402];
    do
    {
      if ( v26 == *v27 )
      {
        dword_140404A6C[v15 + 134050386] = 1;
        dword_140404A6C[v15 + 134050385] = 0;
        v24 = dword_140404A6C[135033401];
      }
      ++v25;
      ++v27;
    }
    while ( v25 < v24 );
  }
  dword_140404A6C[456202733] = v2 - 1;
  v28 = 14LL * (int)(v2 - 1);
  *(_OWORD *)v18 = *(_OWORD *)&dword_140404A6C[v28 + 456202735];
  *((_OWORD *)v18 + 1) = *(_OWORD *)&dword_140404A6C[v28 + 456202739];
  *((_OWORD *)v18 + 2) = *(_OWORD *)&dword_140404A6C[v28 + 456202743];
  *((_QWORD *)v18 + 6) = *(_QWORD *)&dword_140404A6C[v28 + 456202747];
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160361344: using guessed type unsigned int;
// 1606E1348: using guessed type unsigned int;
// 160721350: using guessed type unsigned int;
// 183F7A5E8: using guessed type unsigned int;
// 1AD04B220: using guessed type unsigned int;

//----- (000000014004DA50) ----------------------------------------------------
__int64            sub_14004DA50(unsigned int a1, unsigned int *a2, float a3)
{
  unsigned int *v4; // rax
  unsigned int v6; // edi
  __int64 v8; // rbx

  v4 = &dword_140404A6C[133450253];
  v6 = 0;
  while ( *v4 )
  {
    ++v6;
    v4 += 202;
    if ( (__int64)v4 >= (__int64)&dword_140404A6C[133657101] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 202LL * (int)v6;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v8 + 133450254]), 0, 0x324u);
  dword_140404A6C[v8 + 133450253] = 1;
  dword_140404A6C[v8 + 133450254] = a1;
  dword_140404A6C[v8 + 133450258] = *a2;
  dword_140404A6C[v8 + 133450259] = a2[1];
  dword_140404A6C[v8 + 133450260] = a2[2];
  *(float *)&dword_140404A6C[v8 + 133450261] = a3;
  *(_QWORD *)&dword_140404A6C[v8 + 133450255] = -1;
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004DB20) ----------------------------------------------------
void            sub_14004DB20(signed int a1, float *a2, unsigned int a3, int a4, unsigned int a5, float a6)
{
  __int64 v6; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // rax
  unsigned int *v22; // rax

  v6 = a1;
  v9 = a3;
  if ( (unsigned int)a1 <= 3 )
  {
    v10 = 263004LL * a1;
    v11 = a5;
    dword_140404A6C[v10 + 111579637] = 1;
    dword_140404A6C[v10 + 111579638] = *(_DWORD *)a2;
    dword_140404A6C[v10 + 111579639] = *((_DWORD *)a2 + 1);
    dword_140404A6C[v10 + 111579640] = *((_DWORD *)a2 + 2);
    *(_QWORD *)&dword_140404A6C[v10 + 111579641] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579643] = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 111579645] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579647] = 0;
    dword_140404A6C[v10 + 111579649] = 1065353216;
    dword_140404A6C[v10 + 111579650] = a3;
    dword_140404A6C[v10 + 111579651] = a4;
    dword_140404A6C[v10 + 111579652] = a5;
    *(float *)&dword_140404A6C[v10 + 111579653] = a6;
    *(float *)&dword_140404A6C[v10 + 111579654] = 1.0 / a6;
    free(*(void **)&dword_140404A6C[v10 + 111579655]);
    v12 = (int)(4 * a5 * a4 * v9);
    *(_QWORD *)&dword_140404A6C[v10 + 111579655] = sr_path_malloc(v12);
    free(*(void **)&dword_140404A6C[2 * v6 + 421506981]);
    *(_QWORD *)&dword_140404A6C[2 * v6 + 421506981] = sr_path_malloc(v12);
    if ( a4 > 0 )
    {
      v13 = 0;
      v14 = (unsigned int)a4;
      do
      {
        if ( v11 > 0 )
        {
          v15 = v13;
          v16 = (unsigned int)v11;
          do
          {
            if ( (int)v9 > 0 )
            {
              v17 = v15;
              v18 = v9;
              do
              {
                v17 += 4;
                *(_DWORD *)(v17 + *(_QWORD *)&dword_140404A6C[v10 + 111579655] - 4) = -1;
                --v18;
              }
              while ( v18 );
            }
            v15 += 4LL * (int)v9;
            --v16;
          }
          while ( v16 );
          v11 = a5;
        }
        v13 += 4LL * (int)(a5 * v9);
        --v14;
      }
      while ( v14 );
    }
    v19 = &dword_140404A6C[v10 + 111579984];
    v20 = 512;
    do
    {
      *v19 = 0;
      v19 += 513;
      --v20;
    }
    while ( v20 );
    dword_140404A6C[73991661] = 0;
    v21 = &dword_140404A6C[73991662];
    do
    {
      *v21 = -1;
      v21 += 8969;
    }
    while ( (__int64)v21 < (__int64)&dword_140404A6C[83175918] );
    v22 = &dword_140404A6C[83194357];
    do
    {
      if ( v22[1] == (_DWORD)v6 )
        *v22 = 0;
      if ( v22[6931] == (_DWORD)v6 )
        v22[6930] = 0;
      v22 += 13860;
    }
    while ( (__int64)v22 < (__int64)&dword_140404A6C[111579637] );
    dword_140404A6C[v10 + 111579657] = *(_DWORD *)a2;
    dword_140404A6C[v10 + 111579658] = *((_DWORD *)a2 + 1);
    dword_140404A6C[v10 + 111579659] = *((_DWORD *)a2 + 2);
    *(float *)&dword_140404A6C[v10 + 111579660] = (float)((float)((float)(int)v9 * 64.0) * a6) + *a2;
    *(float *)&dword_140404A6C[v10 + 111579661] = (float)((float)((float)a4 * 64.0) * a6) + a2[1];
    *(float *)&dword_140404A6C[v10 + 111579662] = (float)((float)((float)v11 * 64.0) * a6) + a2[2];
    dword_140404A6C[v10 + 111579663] = 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E46220: using guessed type unsigned int;

//----- (000000014004DE30) ----------------------------------------------------
__int64            sub_14004DE30(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // r9d
  unsigned int v11; // esi
  int v12; // edx
  unsigned int *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  unsigned int *v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int *v20; // rax
  __int64 v22; // r14
  unsigned int *v23; // rax
  unsigned int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4

  v4 = a3;
  v5 = a2;
  v6 = a4;
  if ( a2 == a3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a2 >= (int)dword_140404A6C[73990061] )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)dword_140404A6C[73990061] )
    return 0xFFFFFFFFLL;
  v7 = 60LL * a2;
  v8 = (int)dword_140404A6C[v7 + 73007041];
  if ( (int)v8 >= 31 )
    return 0xFFFFFFFFLL;
  v9 = 60LL * a3;
  v10 = dword_140404A6C[v9 + 73007041];
  if ( v10 >= 31 || (_DWORD)v6 != -1 && (int)dword_140404A6C[5210 * v6 + 129716962] >= 127 )
    return 0xFFFFFFFFLL;
  v11 = 0;
  v12 = 0;
  if ( (int)v8 > 0 )
  {
    v13 = &dword_140404A6C[v7 + 73007042];
    do
    {
      v14 = 61LL * (int)*v13;
      v15 = dword_140404A6C[v14 + 486149259];
      if ( (_DWORD)v5 == v15 && (_DWORD)v4 == dword_140404A6C[v14 + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == dword_140404A6C[v14 + 486149260] && (_DWORD)v4 == v15 )
        return 0xFFFFFFFFLL;
      ++v12;
      ++v13;
    }
    while ( v12 < (int)v8 );
  }
  v16 = 0;
  if ( v10 > 0 )
  {
    v17 = &dword_140404A6C[v9 + 73007042];
    do
    {
      v18 = 61LL * (int)*v17;
      v19 = dword_140404A6C[v18 + 486149259];
      if ( (_DWORD)v5 == v19 && (_DWORD)v4 == dword_140404A6C[v18 + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == dword_140404A6C[v18 + 486149260] && (_DWORD)v4 == v19 )
        return 0xFFFFFFFFLL;
      ++v16;
      ++v17;
    }
    while ( v16 < v10 );
  }
  v20 = &dword_140404A6C[486149253];
  while ( *v20 )
  {
    ++v11;
    v20 += 61;
    if ( (__int64)v20 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v22 = 61LL * (int)v11;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v22 + 486149254]), 0, 0xF0u);
  *(_QWORD *)&dword_140404A6C[v22 + 486149253] = 1;
  dword_140404A6C[v22 + 486149256] = 0x10000;
  dword_140404A6C[v22 + 486149258] = 2;
  v23 = &dword_140404A6C[36 * v11 + 485543029];
  dword_140404A6C[v22 + 486149255] = a1;
  dword_140404A6C[v22 + 486149259] = v5;
  dword_140404A6C[v22 + 486149260] = v4;
  *(_OWORD *)v23 = 0;
  dword_140404A6C[v22 + 486149257] = 3;
  *((_OWORD *)v23 + 1) = 0;
  dword_140404A6C[v22 + 486149281] = 1048576000;
  *((_OWORD *)v23 + 2) = 0;
  dword_140404A6C[v22 + 486149282] = 1048576000;
  *((_OWORD *)v23 + 3) = 0;
  *((_OWORD *)v23 + 4) = 0;
  *((_OWORD *)v23 + 5) = 0;
  *((_OWORD *)v23 + 6) = 0;
  *((_OWORD *)v23 + 7) = 0;
  *((_OWORD *)v23 + 8) = 0;
  v24 = dword_140404A6C[v22 + 486149257];
  if ( a1 == 1 )
    v24 = 0;
  v25 = *(float *)&dword_140404A6C[60 * v4 + 73007028] - *(float *)&dword_140404A6C[v7 + 73007028];
  v26 = *(float *)&dword_140404A6C[60 * v4 + 73007027] - *(float *)&dword_140404A6C[v7 + 73007027];
  v27 = *(float *)&dword_140404A6C[60 * v4 + 73007026] - *(float *)&dword_140404A6C[v7 + 73007026];
  dword_140404A6C[v22 + 486149257] = v24;
  dword_140404A6C[60 * v5 + 73007042 + v8] = v11;
  ++dword_140404A6C[v7 + 73007041];
  dword_140404A6C[60 * v4 + 73007042 + (int)dword_140404A6C[60 * v4 + 73007041]++] = v11;
  *(float *)&dword_140404A6C[v22 + 486149278] = fsqrt((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v25 * v25));
  if ( (_DWORD)v6 != -1 )
  {
    dword_140404A6C[61 * v11 + 486149291 + dword_140404A6C[v22 + 486149290]++] = v6;
    dword_140404A6C[5210 * v6 + 129716963 + (int)dword_140404A6C[5210 * v6 + 129716962]++] = v11;
  }
  return v11;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004E160) ----------------------------------------------------
__int64            sub_14004E160(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int *v6; // rax
  unsigned int v10; // esi
  __int64 v12; // rdi
  unsigned int *v13; // rax

  v6 = &dword_140404A6C[486149253];
  v10 = 0;
  while ( *v6 )
  {
    ++v10;
    v6 += 61;
    if ( (__int64)v6 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v10 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 61LL * (int)v10;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v12 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v12 + 486149253] = 1;
  dword_140404A6C[v12 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
  dword_140404A6C[v12 + 486149292] = a2;
  dword_140404A6C[v12 + 486149291] = a1;
  dword_140404A6C[v12 + 486149293] = -1;
  dword_140404A6C[v12 + 486149281] = 1048576000;
  dword_140404A6C[v12 + 486149282] = 1052770304;
  v13 = &dword_140404A6C[36 * v10 + 485543029];
  *(_OWORD *)v13 = 0;
  *((_OWORD *)v13 + 1) = 0;
  *((_OWORD *)v13 + 2) = 0;
  *((_OWORD *)v13 + 3) = 0;
  *((_OWORD *)v13 + 4) = 0;
  *((_OWORD *)v13 + 5) = 0;
  *((_OWORD *)v13 + 6) = 0;
  *((_OWORD *)v13 + 7) = 0;
  *((_OWORD *)v13 + 8) = 0;
  dword_140404A6C[v12 + 486149278] = a5;
  dword_140404A6C[v12 + 486149267] = *a3;
  dword_140404A6C[v12 + 486149268] = a3[1];
  dword_140404A6C[v12 + 486149269] = a3[2];
  dword_140404A6C[v12 + 486149270] = *a4;
  dword_140404A6C[v12 + 486149271] = a4[1];
  dword_140404A6C[v12 + 486149272] = a4[2];
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004E2E0) ----------------------------------------------------
__int64            sub_14004E2E0(unsigned int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rax
  unsigned int v7; // esi
  __int64 v9; // rdi
  unsigned int *v10; // rax

  v4 = &dword_140404A6C[486149253];
  v7 = 0;
  while ( *v4 )
  {
    ++v7;
    v4 += 61;
    if ( (__int64)v4 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 61LL * (int)v7;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v9 + 486149253] = 1;
  dword_140404A6C[v9 + 486149254] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 486149256] = 0x10000;
  dword_140404A6C[v9 + 486149291] = a1;
  dword_140404A6C[v9 + 486149281] = 1031798784;
  dword_140404A6C[v9 + 486149282] = 1040187392;
  v10 = &dword_140404A6C[36 * v7 + 485543029];
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  *((_OWORD *)v10 + 7) = 0;
  *((_OWORD *)v10 + 8) = 0;
  dword_140404A6C[v9 + 486149267] = *a2;
  dword_140404A6C[v9 + 486149268] = a2[1];
  dword_140404A6C[v9 + 486149269] = a2[2];
  dword_140404A6C[v9 + 486149264] = *a3;
  dword_140404A6C[v9 + 486149265] = a3[1];
  dword_140404A6C[v9 + 486149266] = a3[2];
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004E430) ----------------------------------------------------
__int64            sub_14004E430(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v5; // rax
  unsigned int v9; // esi
  __int64 v11; // rdi
  unsigned int *v12; // rax

  v5 = &dword_140404A6C[486149253];
  v9 = 0;
  while ( *v5 )
  {
    ++v9;
    v5 += 61;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 61LL * (int)v9;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v11 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v11 + 486149253] = 1;
  dword_140404A6C[v11 + 486149254] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 486149256] = 0x10000;
  dword_140404A6C[v11 + 486149292] = a2;
  dword_140404A6C[v11 + 486149291] = a1;
  dword_140404A6C[v11 + 486149293] = -1;
  dword_140404A6C[v11 + 486149281] = 1048576000;
  dword_140404A6C[v11 + 486149282] = 1052770304;
  v12 = &dword_140404A6C[36 * v9 + 485543029];
  *(_OWORD *)v12 = 0;
  *((_OWORD *)v12 + 1) = 0;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  *((_OWORD *)v12 + 4) = 0;
  *((_OWORD *)v12 + 5) = 0;
  *((_OWORD *)v12 + 6) = 0;
  *((_OWORD *)v12 + 7) = 0;
  *((_OWORD *)v12 + 8) = 0;
  dword_140404A6C[v11 + 486149267] = *a3;
  dword_140404A6C[v11 + 486149268] = a3[1];
  dword_140404A6C[v11 + 486149269] = a3[2];
  dword_140404A6C[v11 + 486149270] = *a4;
  dword_140404A6C[v11 + 486149271] = a4[1];
  dword_140404A6C[v11 + 486149272] = a4[2];
  return v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004E5B0) ----------------------------------------------------
__int64            sub_14004E5B0(unsigned int a1, unsigned int a2)
{
  unsigned int *v3; // rax
  unsigned int v5; // esi
  __int64 v7; // rdi
  unsigned int *v8; // rax

  v3 = &dword_140404A6C[486149253];
  v5 = 0;
  while ( *v3 )
  {
    ++v5;
    v3 += 61;
    if ( (__int64)v3 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v5 == -1 )
    return 0xFFFFFFFFLL;
  v7 = 61LL * (int)v5;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v7 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v7 + 486149253] = 1;
  dword_140404A6C[v7 + 486149254] = 8;
  *(_QWORD *)&dword_140404A6C[v7 + 486149256] = 0x10000;
  dword_140404A6C[v7 + 486149292] = a2;
  dword_140404A6C[v7 + 486149291] = a1;
  dword_140404A6C[v7 + 486149293] = -1;
  v8 = &dword_140404A6C[36 * v5 + 485543029];
  dword_140404A6C[v7 + 486149281] = 1031798784;
  dword_140404A6C[v7 + 486149282] = 1040187392;
  *(_OWORD *)v8 = 0;
  *((_OWORD *)v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  *((_OWORD *)v8 + 3) = 0;
  *((_OWORD *)v8 + 4) = 0;
  *((_OWORD *)v8 + 5) = 0;
  *((_OWORD *)v8 + 6) = 0;
  *((_OWORD *)v8 + 7) = 0;
  *((_OWORD *)v8 + 8) = 0;
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004E6E0) ----------------------------------------------------
void            sub_14004E6E0(int a1, float a2, float a3, float a4)
{
  int v5; // edx
  unsigned int *v6; // rax
  float sr_shape_position[3];
  float sr_shape_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004E6E0[112];
#define v8 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 0)) /* [rsp+8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_14004E6E0 + 104)) /* [rsp+70h] */

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  sr_shape_position[2] = 0.0;
  if ( a1 == dword_140404A6C[283826981] )
  {
    (*(__int64 *)sr_shape_position) = 0;
    sub_140002D00((float *)&(*(__int64 *)sr_shape_position), a2, a3, a4);
  }
  else
  {
    LODWORD((*(__int64 *)sr_shape_position)) = 0;
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = a3 * -0.5;
    (*(__int128 *)sr_shape_matrix) = xmmword_140278D30;
    (*(__int128 *)(sr_shape_matrix + 4)) = xmmword_140278D30;
    sr_shape_matrix[8] = 1.0;
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 5);
    sub_14007B2A0((__int64)&(*(__int128 *)sr_shape_matrix), (float *)&(*(__int128 *)sr_shape_matrix), sr_export_float_lane_container(1061752795));
    *(float *)&(*(__int64 *)sr_shape_position) = (float)(*((float *)&(*(__int128 *)sr_shape_matrix) + 3) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 2) * a4);
    *((float *)&(*(__int64 *)sr_shape_position) + 1) = (float)(*(float *)&(*(__int128 *)(sr_shape_matrix + 4)) * (float)(a3 * 0.5)) + (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 3) * a4);
    sr_shape_position[2] = (float)(*((float *)&(*(__int128 *)(sr_shape_matrix + 4)) + 1) * (float)(a3 * 0.5)) + (float)(sr_shape_matrix[8] * a4);
    sub_1400066B0((float *)&(*(__int64 *)sr_shape_position), (float *)&(*(__int128 *)sr_shape_matrix), a2, a3 * 0.5, a4, 0);
  }
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v8
#undef v14

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004E8A0) ----------------------------------------------------
__int64            sub_14004E8A0(signed int a1, unsigned int *a2, float *a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v8; // r14
  float *v9; // rbx
  float *v10; // rdi
  int v11; // xmm3_4
  int v12; // xmm2_4
  int v13; // xmm1_4
  float *v14; // rdx
  unsigned int v15; // eax

  v4 = (int)dword_140404A6C[438881242];
  v6 = a1;
  if ( (int)dword_140404A6C[438881242] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v8 = 23LL * (int)dword_140404A6C[438881242];
  v9 = (float *)&dword_140404A6C[v8 + 437914601];
  *(_OWORD *)&dword_140404A6C[v8 + 437914582] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914586] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914590] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914594] = 0;
  *(_OWORD *)&dword_140404A6C[v8 + 437914598] = 0;
  *(_QWORD *)&dword_140404A6C[v8 + 437914602] = 0;
  dword_140404A6C[v8 + 437914581] = a1;
  dword_140404A6C[v8 + 437914583] = a4;
  dword_140404A6C[v8 + 437914582] = 600;
  dword_140404A6C[v8 + 437914586] = *a2;
  dword_140404A6C[v8 + 437914587] = a2[1];
  dword_140404A6C[v8 + 437914588] = a2[2];
  dword_140404A6C[v8 + 437914589] = *a2;
  dword_140404A6C[v8 + 437914590] = a2[1];
  dword_140404A6C[v8 + 437914591] = a2[2];
  *v9 = -*a3;
  v9[1] = -a3[1];
  v9[2] = -a3[2];
  sub_14007A240((__int64)&dword_140404A6C[v8 + 437914601], (float *)&dword_140404A6C[23 * v4 + 437914601]);
  v10 = (float *)&dword_140404A6C[v8 + 437914595];
  if ( fabs(*(float *)&dword_140404A6C[v8 + 437914602]) >= 0.70700002 )
  {
    v11 = dword_1402F617C;
    v12 = dword_1402F6180;
    *v10 = (float)(*(float *)&dword_1402F617C * v9[2]) - (float)(*(float *)&dword_1402F6180 * v9[1]);
    v13 = dword_1402F6178;
  }
  else
  {
    v11 = dword_1402F618C;
    v12 = dword_1402F6190;
    *v10 = (float)(*(float *)&dword_1402F618C * v9[2]) - (float)(*(float *)&dword_1402F6190 * v9[1]);
    v13 = dword_1402F6188;
  }
  v10[1] = (float)(*(float *)&v12 * *v9) - (float)(*(float *)&v13 * v9[2]);
  v10[2] = (float)(*(float *)&v13 * v9[1]) - (float)(*(float *)&v11 * *v9);
  sub_14007A240((__int64)&dword_140404A6C[v8 + 437914595], (float *)&dword_140404A6C[v8 + 437914595]);
  v14 = (float *)&dword_140404A6C[v8 + 437914598];
  *v14 = (float)(v9[1] * v10[2]) - (float)(v9[2] * v10[1]);
  v14[1] = (float)(*v10 * v9[2]) - (float)(*v9 * v10[2]);
  v14[2] = (float)(*v9 * v10[1]) - (float)(*v10 * v9[1]);
  sub_14007A240((__int64)v14, v14);
  dword_140404A6C[v8 + 437914592] = *(_DWORD *)a3;
  dword_140404A6C[v8 + 437914593] = *((_DWORD *)a3 + 1);
  v15 = *((_DWORD *)a3 + 2);
  ++dword_140404A6C[283785905];
  dword_140404A6C[v8 + 437914594] = v15;
  dword_140404A6C[v8 + 437914584] = dword_140404A6C[6 * v6 + 437914197];
  dword_140404A6C[v8 + 437914585] = 993158992;
  dword_140404A6C[438881242] = v4 + 1;
  return (unsigned int)v4;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E93530: using guessed type unsigned int;
// 1A8E379D4: using guessed type unsigned int;

//----- (000000014004EB60) ----------------------------------------------------
double            sub_14004EB60(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v8; // rsi
  __m128 v9; // xmm0
  __int64 v10; // rdx
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  __m128d v14; // xmm6
  __m128 v15; // xmm0
  double v16; // xmm7_8
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm1_4
  __m128d v19; // xmm6
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __m128 v22; // xmm0
  unsigned int v23; // xmm2_4
  unsigned int v24; // xmm1_4
  __m128d v25; // xmm6
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __m128 v28; // xmm0
  unsigned int v29; // xmm2_4
  unsigned int v30; // xmm1_4
  __m128d v31; // xmm6
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __m128 v34; // xmm0
  unsigned int v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm11_4
  __int64 v38; // rsi
  double v39; // xmm6_8
  __m128 v40; // xmm0
  unsigned int v41; // xmm2_4
  unsigned int v42; // xmm1_4
  double v43; // xmm6_8
  unsigned int v44; // ebx
  __int64 v45; // rdx
  __m128 v46; // xmm0
  unsigned int v47; // xmm2_4
  unsigned int v48; // xmm1_4
  double v49; // xmm6_8
  unsigned int v50; // ebx
  __int64 v51; // rdx
  __m128 v52; // xmm0
  unsigned int v53; // xmm2_4
  unsigned int v54; // xmm1_4
  double v55; // xmm6_8
  unsigned int v56; // ebx
  __int64 v57; // rdx
  __m128 v58; // xmm0
  unsigned int v59; // xmm1_4
  __int64 v60; // rax
  int v61; // esi
  int v62; // r9d
  int v63; // edx
  int v64; // edx
  unsigned int v65; // r8d
  unsigned int v66; // r10d
  int v67; // edx
  unsigned int v68; // r8d
  int v69; // edx
  unsigned int v70; // r9d
  int v71; // ecx
  unsigned int *v72; // rax
  int v73; // edx
  float *v74; // r10
  int v75; // ecx
  unsigned int *v76; // rax
  int v77; // r11d
  float *v78; // r8
  __int64 v79; // r9
  float v80; // xmm4_4
  float v81; // xmm5_4
  float v82; // xmm0_4
  __int64 v83; // rdx
  __int64 v84; // rax
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm7_4
  float v88; // xmm3_4
  float v89; // xmm6_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm7_4
  float v94; // xmm0_4
  float v95; // xmm3_4
  float v96; // xmm5_4
  float v97; // xmm2_4
  __int64 v98; // rax
  __int64 v99; // rax
  float v100; // xmm4_4
  float *v101; // rdx
  float v102; // xmm5_4
  float v103; // xmm3_4
  float v104; // xmm1_4
  float v105; // xmm3_4
  float v106; // xmm4_4
  float v107; // xmm0_4

  v4 = 0;
  v5 = 0;
  v8 = 2;
  v9 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v10 = 3LL * a2;
  dword_140404A6C[178322641] = 0;
  v11 = *(float *)&dword_140404A6C[2 * v10 + 437914200];
  v12 = *(float *)&dword_140404A6C[2 * v10 + 437914199];
  v13 = v11 * 0.5;
  dword_140404A6C[178519250] = 0;
  do
  {
    v14 = _mm_cvtps_pd(v9);
    v15 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v14, f64)[0], v10, v3));
    SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 0.7853981633975;
    v16 = v12;
    *(float *)&v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v15, (__m128d)v15, 1), f64)[0] * v12;
    dword_140404A6C[3 * v5 + 177167567] = v17;
    *(float *)&v18 = -(*(double *)SR_VEC_LANES(128, v15, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v18;
    v19 = _mm_cvtps_pd(_mm_cvtpd_ps(v14));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v17;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v18;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v20 = dword_140404A6C[177167565];
    v22 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v19, f64)[0], v21, COERCE_DOUBLE((unsigned __int64)v17)));
    *(float *)&v23 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v22, (__m128d)v22, 1), f64)[0] * v12;
    dword_140404A6C[3 * v20 + 177167567] = v23;
    *(float *)&v24 = -(*(double *)SR_VEC_LANES(128, v22, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v24;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v23;
    SR_VEC_LANES(128, v19, f64)[0] = SR_VEC_LANES(128, v19, f64)[0] + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v24;
    v25 = _mm_cvtps_pd(_mm_cvtpd_ps(v19));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v26 = dword_140404A6C[177167565];
    v28 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v25, f64)[0], v27, COERCE_DOUBLE((unsigned __int64)v23)));
    SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 0.7853981633975;
    *(float *)&v29 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v28, (__m128d)v28, 1), f64)[0] * v12;
    dword_140404A6C[3 * v26 + 177167567] = v29;
    *(float *)&v30 = -(*(double *)SR_VEC_LANES(128, v28, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v30;
    v31 = _mm_cvtps_pd(_mm_cvtpd_ps(v25));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v29;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v30;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v32 = dword_140404A6C[177167565];
    v34 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v31, f64)[0], v33, COERCE_DOUBLE((unsigned __int64)v29)));
    HIDWORD(v3) = 0;
    *(float *)&v3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1), f64)[0] * v12;
    dword_140404A6C[3 * v32 + 177167567] = LODWORD(v3);
    SR_VEC_LANES(128, v31, f64)[0] = SR_VEC_LANES(128, v31, f64)[0] + 0.7853981633975;
    *(float *)&v35 = -(*(double *)SR_VEC_LANES(128, v34, u64) * v12);
    v9 = _mm_cvtpd_ps(v31);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v35;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(v3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v5 = ++dword_140404A6C[177167565];
    --v8;
  }
  while ( v8 );
  v36 = 0.0;
  v37 = v11 * -0.5;
  v38 = 2;
  do
  {
    v39 = v36;
    v40 = _mm_castpd_ps(sub_1401F8A50(v36, v10, COERCE_DOUBLE((unsigned __int64)LODWORD(v3))));
    *(float *)&v41 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v40, (__m128d)v40, 1), f64)[0] * v16;
    dword_140404A6C[3 * v5 + 177167567] = v41;
    *(float *)&v42 = -(*(double *)SR_VEC_LANES(128, v40, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v42;
    v43 = (float)(v39 + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v41;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v42;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v44 = dword_140404A6C[177167565];
    v46 = _mm_castpd_ps(sub_1401F8A50(v43, v45, COERCE_DOUBLE((unsigned __int64)v41)));
    *(float *)&v47 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v46, (__m128d)v46, 1), f64)[0] * v16;
    dword_140404A6C[3 * v44 + 177167567] = v47;
    *(float *)&v48 = -(*(double *)SR_VEC_LANES(128, v46, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v48;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v47;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v48;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v49 = (float)(v43 + 0.7853981633975);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v50 = dword_140404A6C[177167565];
    v52 = _mm_castpd_ps(sub_1401F8A50(v49, v51, COERCE_DOUBLE((unsigned __int64)v47)));
    *(float *)&v53 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v52, (__m128d)v52, 1), f64)[0] * v16;
    dword_140404A6C[3 * v50 + 177167567] = v53;
    *(float *)&v54 = -(*(double *)SR_VEC_LANES(128, v52, u64) * v16);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v54;
    v55 = (float)(v49 + 0.7853981633975);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v53;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v54;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v56 = dword_140404A6C[177167565];
    v58 = _mm_castpd_ps(sub_1401F8A50(v55, v57, COERCE_DOUBLE((unsigned __int64)v53)));
    *(float *)&v3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v58, (__m128d)v58, 1), f64)[0] * v16;
    dword_140404A6C[3 * v56 + 177167567] = LODWORD(v3);
    *(float *)&v59 = -(*(double *)SR_VEC_LANES(128, v58, u64) * v16);
    v36 = v55 + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v59;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(v3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v59;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v5 = ++dword_140404A6C[177167565];
    --v38;
  }
  while ( v38 );
  dword_140404A6C[3 * v5 + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v13;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  v60 = 3 * dword_140404A6C[177167565];
  if ( a3 )
    *(float *)&dword_140404A6C[v60 + 177167569] = v11 * -0.25;
  else
    *(float *)&dword_140404A6C[v60 + 177167569] = v37 * 1.5;
  v61 = 1;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v62 = dword_140404A6C[177495247];
  do
  {
    v63 = v61 & 7;
    dword_140404A6C[3 * v62 + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v63 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v64 = ((_BYTE)v61 + 1) & 7;
    v65 = v64 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 8;
    v66 = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v64 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v64;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64;
    v67 = ((_BYTE)v61 + 2) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65;
    v68 = v67 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 9;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67;
    v69 = ((_BYTE)v61 + 3) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v68;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 9;
    v70 = v61 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v61 += 4;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v69 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v62 = ++dword_140404A6C[177495247];
  }
  while ( v61 <= 8 );
  v71 = 0;
  if ( v62 > 0 )
  {
    v72 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v72 - 1) = 0;
      ++v71;
      *(_QWORD *)(v72 + 1) = 0;
      *(_QWORD *)(v72 + 3) = 0;
      v72 += 6;
      v62 = dword_140404A6C[177495247];
    }
    while ( v71 < (int)dword_140404A6C[177495247] );
  }
  v73 = dword_140404A6C[177167565];
  v74 = (float *)&dword_140404A6C[177249489];
  v75 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v76 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v76 - 1) = 0;
      ++v75;
      *v76 = 0;
      v76 += 3;
      v73 = dword_140404A6C[177167565];
    }
    while ( v75 < (int)dword_140404A6C[177167565] );
    v62 = dword_140404A6C[177495247];
  }
  v77 = 0;
  if ( v62 > 0 )
  {
    v78 = (float *)&dword_140404A6C[177814739];
    do
    {
      v79 = 3 * *((_DWORD *)v78 - 319491);
      v80 = *(float *)&dword_140404A6C[v79 + 177167568];
      v81 = *(float *)&dword_140404A6C[v79 + 177167569];
      v82 = *(float *)&dword_140404A6C[v79 + 177167567];
      v83 = 3 * *((_DWORD *)v78 - 319490);
      v84 = 3 * *((_DWORD *)v78 - 319489);
      v85 = *(float *)&dword_140404A6C[v83 + 177167569] - v81;
      v86 = *(float *)&dword_140404A6C[v84 + 177167568] - v80;
      v87 = *(float *)&dword_140404A6C[v84 + 177167567] - v82;
      v88 = *(float *)&dword_140404A6C[v83 + 177167568] - v80;
      v89 = *(float *)&dword_140404A6C[v83 + 177167567] - v82;
      v90 = *(float *)&dword_140404A6C[v84 + 177167569] - v81;
      v91 = (float)(v86 * v85) - (float)(v90 * v88);
      v92 = (float)(v90 * v89) - (float)(v87 * v85);
      v93 = (float)(v87 * v88) - (float)(v86 * v89);
      v94 = fsqrt((float)((float)(v92 * v92) + (float)(v91 * v91)) + (float)(v93 * v93));
      if ( v94 == 0.0 )
      {
        v95 = 0.0;
        v96 = 0.0;
        v97 = 0.0;
      }
      else
      {
        v95 = (float)(1.0 / v94) * v91;
        v96 = (float)(1.0 / v94) * v92;
        v97 = (float)(1.0 / v94) * v93;
      }
      *(v78 - 2) = v95;
      *(v78 - 1) = v96;
      *v78 = v97;
      ++v77;
      *(float *)&dword_140404A6C[v79 + 177249487] = v95 + *(float *)&dword_140404A6C[v79 + 177249487];
      *(float *)&dword_140404A6C[v79 + 177249488] = v96 + *(float *)&dword_140404A6C[v79 + 177249488];
      *(float *)&dword_140404A6C[v79 + 177249489] = v97 + *(float *)&dword_140404A6C[v79 + 177249489];
      v98 = 3 * *((_DWORD *)v78 - 319490);
      *(float *)&dword_140404A6C[v98 + 177249487] = v95 + *(float *)&dword_140404A6C[v98 + 177249487];
      *(float *)&dword_140404A6C[v98 + 177249488] = v96 + *(float *)&dword_140404A6C[v98 + 177249488];
      *(float *)&dword_140404A6C[v98 + 177249489] = v97 + *(float *)&dword_140404A6C[v98 + 177249489];
      *(float *)&v98 = *(v78 - 319489);
      v78 += 3;
      v99 = 3 * (int)v98;
      *(float *)&dword_140404A6C[v99 + 177249487] = v95 + *(float *)&dword_140404A6C[v99 + 177249487];
      *(float *)&dword_140404A6C[v99 + 177249488] = v96 + *(float *)&dword_140404A6C[v99 + 177249488];
      *(float *)&dword_140404A6C[v99 + 177249489] = v97 + *(float *)&dword_140404A6C[v99 + 177249489];
    }
    while ( v77 < (int)dword_140404A6C[177495247] );
    v73 = dword_140404A6C[177167565];
  }
  if ( v73 > 0 )
  {
    do
    {
      v100 = *(v74 - 1);
      v101 = v74;
      v102 = *(v74 - 2);
      v103 = *v74;
      v104 = fsqrt((float)((float)(v102 * v102) + (float)(v100 * v100)) + (float)(v103 * v103));
      if ( v104 == 0.0 )
      {
        v105 = 0.0;
        v106 = 0.0;
        v107 = 0.0;
      }
      else
      {
        v105 = v103 * (float)(1.0 / v104);
        v106 = v100 * (float)(1.0 / v104);
        v107 = (float)(1.0 / v104) * v102;
      }
      *(v74 - 2) = v107;
      ++v4;
      *(v74 - 1) = v106;
      v74 += 3;
      *v101 = v105;
    }
    while ( v4 < (int)dword_140404A6C[177167565] );
  }
  return sub_1401449C0(a1, 0);
}

// 14004EC19: variable 'v10' is possibly undefined
// 14004EC19: variable 'v3' is possibly undefined
// 14004ED05: variable 'v21' is possibly undefined
// 14004EDE9: variable 'v27' is possibly undefined
// 14004EECD: variable 'v33' is possibly undefined
// 14004F0C1: variable 'v45' is possibly undefined
// 14004F1A5: variable 'v51' is possibly undefined
// 14004F289: variable 'v57' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014004FDB0) ----------------------------------------------------
void            sub_14004FDB0(int a1)
{
  int v1; // esi
  int v3; // edi
  int v4; // ecx
  unsigned int *v5; // rax
  int v6; // ebx
  unsigned int *v7; // rax
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  unsigned int *v10; // r9
  unsigned int *v11; // r8
  unsigned int *v12; // r10
  _DWORD sr_layer_position[3];
  _DWORD sr_layer_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004FDB0[96];
#define v14 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 0)) /* [rsp+0h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_14004FDB0 + 88)) /* [rsp+58h] */

  v1 = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  (*(__int64 *)sr_layer_position) = 0;
  sr_layer_position[2] = 0;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1040187392), 0.03125);
  v3 = dword_140404A6C[177495247];
  v4 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v5 = &dword_140404A6C[178011346];
    do
    {
      *(v5 - 1) = 998244352;
      ++v4;
      *v5 = 998244352;
      v5[1] = 998244352;
      v5[2] = 998244352;
      v5[3] = 998244352;
      v5[4] = 998244352;
      v5 += 6;
      v3 = dword_140404A6C[177495247];
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  sr_layer_position[2] = 1025507328;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  v6 = dword_140404A6C[177495247];
  if ( v3 < (int)dword_140404A6C[177495247] )
  {
    v7 = &dword_140404A6C[6 * v3 + 178011346];
    do
    {
      *(v7 - 1) = 1010827264;
      ++v3;
      *v7 = 998244352;
      v7[1] = 1010827264;
      v7[2] = 998244352;
      v7[3] = 1010827264;
      v7[4] = 998244352;
      v7 += 6;
      v6 = dword_140404A6C[177495247];
    }
    while ( v3 < (int)dword_140404A6C[177495247] );
  }
  sr_layer_position[2] = -1121976320;
  (*(__int128 *)sr_layer_matrix) = xmmword_140278D30;
  sr_layer_matrix[8] = 1065353216;
  (*(__int128 *)(sr_layer_matrix + 4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)sr_layer_matrix), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_layer_position), (float *)&(*(__int128 *)sr_layer_matrix), sr_export_float_lane_container(1039138816), 0.03125);
  v8 = dword_140404A6C[177495247];
  if ( v6 < (int)dword_140404A6C[177495247] )
  {
    v9 = &dword_140404A6C[6 * v6 + 178011346];
    do
    {
      *(v9 - 1) = 1010827264;
      ++v6;
      *v9 = 998244352;
      v9[1] = 1010827264;
      v9[2] = 998244352;
      v9[3] = 1010827264;
      v9[4] = 998244352;
      v9 += 6;
      v8 = dword_140404A6C[177495247];
    }
    while ( v6 < (int)dword_140404A6C[177495247] );
  }
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v10 = &dword_140404A6C[178322642];
    v11 = &dword_140404A6C[178388181];
    v12 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v8 + 177495248] = *v10;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v10[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v10[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v11 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v11 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v11 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v11;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v11[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v11[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v10;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v10[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v10[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v11 - 3);
      v10 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v11 - 2);
      v11 += 8;
      v12 += 8;
      ++v1;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v12 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v12 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v12 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v12 - 6);
      v8 = ++dword_140404A6C[177495247];
    }
    while ( v1 < (int)dword_140404A6C[178322641] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v14
#undef v20

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140050280) ----------------------------------------------------
double            sub_140050280(int a1, float a2, float a3, float a4)
{
  int v4; // ebx
  float v5; // xmm6_4
  int v7; // r8d
  unsigned int *v8; // rax
  int v9; // edx
  unsigned int *v10; // rcx
  unsigned int v11; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140050280[16];
#define v13 (*(__int64 (*))(void *)(sr_frame_140050280 + 0)) /* [rsp+20h] */
#define v14 (*(float (*))(void *)(sr_frame_140050280 + 8)) /* [rsp+28h] */

  v4 = 0;
  v5 = a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v13 = 0;
  if ( a4 <= 0.0 )
  {
    v5 = -a4;
    v14 = a4;
  }
  else
  {
    v14 = 0.0;
  }
  sub_140002D00((float *)&v13, a2, a3, v5);
  v7 = dword_140404A6C[177495247];
  v8 = &dword_140404A6C[178011346];
  v9 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v10 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v10 - 1) = 0;
      ++v9;
      *(_QWORD *)(v10 + 1) = 0;
      *(_QWORD *)(v10 + 3) = 0;
      v10 += 6;
      v7 = dword_140404A6C[177495247];
    }
    while ( v9 < (int)dword_140404A6C[177495247] );
  }
  if ( a1 != dword_140404A6C[283826994] )
  {
    v11 = dword_140404A6C[283827004];
    if ( a1 == dword_140404A6C[283827003] || a1 == dword_140404A6C[283827004] )
    {
      if ( v7 > 0 )
      {
        do
        {
          *(v8 - 1) = 1035993088;
          *v8 = 1063780352;
          v8[1] = 1035993088;
          v8[2] = 1063780352;
          v8[3] = 1035993088;
          v8[4] = 1063780352;
          if ( a1 == v11 )
          {
            *v8 = 1064828928;
            v8[2] = 1064828928;
            v8[4] = 1064828928;
          }
          ++v4;
          v8 += 6;
        }
        while ( v4 < (int)dword_140404A6C[177495247] );
      }
    }
    else if ( a1 == dword_140404A6C[283827005] )
    {
      v14 = 0.015625;
      sub_140002D00((float *)&v13, a2 * 0.875, a3 * 0.875, v5);
      *(_OWORD *)&dword_140404A6C[178011429] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011437] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011433] = xmmword_1402794A0;
    }
    else
    {
      *(_OWORD *)&dword_140404A6C[178011381] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011385] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011389] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011409] = xmmword_1402794A0;
      *(_OWORD *)&dword_140404A6C[178011405] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011345] = xmmword_140278E20;
      *(_OWORD *)&dword_140404A6C[178011413] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011353] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011349] = xmmword_140278D90;
    }
  }
  return sub_1401449C0(a1, 0);
}
#undef v13
#undef v14

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D90: using guessed type __int128 xmmword_140278D90;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 140279550: using guessed type __int128 xmmword_140279550;
// 1402796F0: using guessed type __int128 xmmword_1402796F0;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AB13DB0: using guessed type unsigned int;
// 16AB13DC0: using guessed type unsigned int;
// 16AB13DD0: using guessed type unsigned int;
// 16AB13E40: using guessed type unsigned int;
// 16AB13E50: using guessed type unsigned int;
// 16AB13E60: using guessed type unsigned int;
// 16AB13EA0: using guessed type unsigned int;
// 16AB13EB0: using guessed type unsigned int;
// 16AB13EC0: using guessed type unsigned int;
// 16AB13F00: using guessed type unsigned int;
// 16AB13F10: using guessed type unsigned int;
// 16AB13F20: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 183EBB75C: using guessed type unsigned int;

//----- (00000001400504C0) ----------------------------------------------------
double            sub_1400504C0(int a1, float a2, float a3, float a4)
{
  int v4; // ebx
  unsigned int *v5; // rdx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int *v28; // r9
  unsigned int *v29; // r8
  unsigned int *v30; // r10
  _DWORD sr_extrude_position[3];

  v4 = 0;
  *(float *)&dword_140404A6C[177167575] = a4;
  *(float *)&dword_140404A6C[177167570] = a2;
  v5 = (unsigned int *)dword_1402B3664;
  *(float *)&dword_140404A6C[177167567] = -a2;
  dword_140404A6C[177495247] = 0;
  *(float *)&dword_140404A6C[177167573] = a2;
  *(float *)&dword_140404A6C[177167568] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167571] = a3 * -0.75;
  v7 = 0;
  *(float *)&dword_140404A6C[177167574] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167577] = a3 * -0.75;
  *(float *)&dword_140404A6C[177167569] = -a4;
  *(float *)&dword_140404A6C[177167572] = -a4;
  *(float *)&dword_140404A6C[177167576] = -a2;
  *(float *)&dword_140404A6C[177167578] = a4;
  *(float *)&dword_140404A6C[177167579] = -a2;
  *(float *)&dword_140404A6C[177167580] = a3;
  *(float *)&dword_140404A6C[177167581] = -a4;
  *(float *)&dword_140404A6C[177167582] = a2;
  *(float *)&dword_140404A6C[177167583] = a3;
  *(float *)&dword_140404A6C[177167584] = -a4;
  *(float *)&dword_140404A6C[177167585] = a2;
  *(float *)&dword_140404A6C[177167586] = a3;
  *(float *)&dword_140404A6C[177167587] = a4;
  *(float *)&dword_140404A6C[177167588] = -a2;
  *(float *)&dword_140404A6C[177167589] = a3;
  *(float *)&dword_140404A6C[177167590] = a4;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  dword_140404A6C[177167565] = 8;
  do
  {
    dword_140404A6C[4 * v7 + 178322642] = *(v5 - 1);
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322643] = *v5;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322644] = v5[1];
    v8 = v5[2];
    v5 += 4;
    dword_140404A6C[4 * dword_140404A6C[178322641] + 178322645] = v8;
    v9 = 8LL * (int)dword_140404A6C[178322641];
    *(_OWORD *)&dword_140404A6C[v9 + 178388178] = 0;
    *(_OWORD *)&dword_140404A6C[v9 + 178388182] = 0;
    v7 = ++dword_140404A6C[178322641];
  }
  while ( (__int64)v5 < (__int64)&dword_1402B36C4 );
  sr_extrude_position[0] = 0;
  sr_extrude_position[2] = 0;
  (*(float *)&sr_extrude_position[1]) = a3 * -0.25;
  sub_140101220(0, (float *)&sr_extrude_position[0]);
  sr_extrude_position[2] = -1124073472;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167564] = *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167564]
                                                                         - (float)(a2 * 0.5);
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167555] = *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167555]
                                                                         - (float)(a2 * 0.5);
  v10 = 8LL * (dword_140404A6C[178322641] - 5);
  *(_OWORD *)&dword_140404A6C[v10 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v10 + 178388182] = 0;
  v11 = 8LL * (dword_140404A6C[178322641] - 4);
  *(_OWORD *)&dword_140404A6C[v11 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v11 + 178388182] = 0;
  v12 = 8LL * (dword_140404A6C[178322641] - 3);
  *(_OWORD *)&dword_140404A6C[v12 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v12 + 178388182] = 0;
  v13 = 8LL * (dword_140404A6C[178322641] - 2);
  *(_OWORD *)&dword_140404A6C[v13 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v13 + 178388182] = 0;
  v14 = 8LL * (dword_140404A6C[178322641] - 1);
  *(_OWORD *)&dword_140404A6C[v14 + 178388178] = 0;
  *(_OWORD *)&dword_140404A6C[v14 + 178388182] = 0;
  (*(float *)&sr_extrude_position[1]) = 0.125;
  sub_140002D00((float *)&sr_extrude_position[0], 0.015625, 0.25, 0.015625);
  v15 = 6 * (dword_140404A6C[177495247] - 12);
  *(_QWORD *)&dword_140404A6C[v15 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v15 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v15 + 178011349] = 1065353216;
  v16 = 6 * (dword_140404A6C[177495247] - 11);
  *(_QWORD *)&dword_140404A6C[v16 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v16 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v16 + 178011349] = 1065353216;
  v17 = 6 * (dword_140404A6C[177495247] - 10);
  *(_QWORD *)&dword_140404A6C[v17 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v17 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v17 + 178011349] = 1065353216;
  v18 = 6 * (dword_140404A6C[177495247] - 9);
  *(_QWORD *)&dword_140404A6C[v18 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v18 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v18 + 178011349] = 1065353216;
  v19 = 6 * (dword_140404A6C[177495247] - 8);
  *(_QWORD *)&dword_140404A6C[v19 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v19 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v19 + 178011349] = 1065353216;
  v20 = 6 * (dword_140404A6C[177495247] - 7);
  *(_QWORD *)&dword_140404A6C[v20 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v20 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v20 + 178011349] = 1065353216;
  v21 = 6 * (dword_140404A6C[177495247] - 6);
  *(_QWORD *)&dword_140404A6C[v21 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v21 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v21 + 178011349] = 1065353216;
  v22 = 6 * (dword_140404A6C[177495247] - 5);
  *(_QWORD *)&dword_140404A6C[v22 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v22 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v22 + 178011349] = 1065353216;
  v23 = 6 * (dword_140404A6C[177495247] - 4);
  *(_QWORD *)&dword_140404A6C[v23 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v23 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v23 + 178011349] = 1065353216;
  v24 = 6 * (dword_140404A6C[177495247] - 3);
  *(_QWORD *)&dword_140404A6C[v24 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v24 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v24 + 178011349] = 1065353216;
  v25 = 6 * (dword_140404A6C[177495247] - 2);
  *(_QWORD *)&dword_140404A6C[v25 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v25 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v25 + 178011349] = 1065353216;
  v26 = 6 * (dword_140404A6C[177495247] - 1);
  *(_QWORD *)&dword_140404A6C[v26 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v26 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v26 + 178011349] = 1065353216;
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v27 = dword_140404A6C[177495247];
    v28 = &dword_140404A6C[178322642];
    v29 = &dword_140404A6C[178388181];
    v30 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v27 + 177495248] = *v28;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v28[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v28[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v29 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v29 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v29 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v29;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v29[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v29[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v28;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v28[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v28[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v29 - 3);
      v28 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v29 - 2);
      v29 += 8;
      v30 += 8;
      ++v4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v30 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v30 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v30 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v30 - 6);
      v27 = ++dword_140404A6C[177495247];
    }
    while ( v4 < (int)dword_140404A6C[178322641] );
  }
  return sub_1401449C0(a1, 0);
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B3664: using guessed type int dword_1402B3664[];
// 1402B36C4: using guessed type int dword_1402B36C4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A7DBDB4: using guessed type unsigned int;
// 16A7DBDC0: using guessed type unsigned int;
// 16A7DBDC8: using guessed type unsigned int;
// 16A7DBDD4: using guessed type unsigned int;
// 16A7DBDDC: using guessed type unsigned int;
// 16A7DBDE4: using guessed type unsigned int;
// 16A7DBDE8: using guessed type unsigned int;
// 16A7DBDF0: using guessed type unsigned int;
// 16A7DBDF4: using guessed type unsigned int;
// 16A7DBDF8: using guessed type unsigned int;
// 16A7DBE00: using guessed type unsigned int;
// 16A7DBE04: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140050C80) ----------------------------------------------------
__int64            sub_140050C80(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int *v6; // r9
  int v7; // ecx
  int i; // r8d
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int *v11; // r8
  unsigned int *v12; // rax

  result = 0;
  if ( (int)dword_140404A6C[133919261] <= 0 )
  {
LABEL_5:
    if ( (int)dword_140404A6C[133919261] < 0x7FFF )
    {
      v7 = dword_14030186C;
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919262] = a3;
      if ( v7 >= 624 )
      {
        if ( v7 == 625 )
        {
          dword_140404A6C[18600733] = 5489;
          for ( i = 1; i < 624; ++i )
          {
            v9 = i;
            v10 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
            dword_140404A6C[v9 + 18600733] = v10;
          }
        }
        v11 = &dword_140404A6C[18600733];
        v12 = &dword_140404A6C[18600960];
        do
        {
          *v11 = v11[397] ^ ((*v11 ^ (*v11 ^ v11[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v11[1] & 1];
          ++v11;
        }
        while ( (__int64)v11 < (__int64)&dword_140404A6C[18600960] );
        do
        {
          *v12 = *(v12 - 227) ^ ((*v12 ^ (*v12 ^ v12[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v12[1] & 1];
          ++v12;
        }
        while ( (__int64)v12 < (__int64)&dword_140404A6C[18601356] );
        dword_140404A6C[18601356] = dword_140404A6C[18601129]
                                  ^ ((dword_140404A6C[18601356]
                                    ^ (dword_140404A6C[18600733]
                                     ^ dword_140404A6C[18601356])
                                    & 0x7FFFFFFF) >> 1)
                                  ^ dword_140301E08[dword_140404A6C[18600733] & 1];
        v7 = 0;
      }
      dword_14030186C = v7 + 1;
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919263] = (((((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                        ^ dword_140404A6C[v7 + 18600733])
                                                                       & 0xFF3A58AD) << 7)
                                                                     ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                     ^ dword_140404A6C[v7 + 18600733])
                                                                    & 0xFFFFDF8C) << 15)
                                                                  ^ ((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                     ^ dword_140404A6C[v7 + 18600733])
                                                                    & 0xFF3A58AD) << 7)
                                                                  ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                  ^ dword_140404A6C[v7 + 18600733]
                                                                  ^ (((((((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                          ^ dword_140404A6C[v7 + 18600733])
                                                                         & 0xFF3A58AD) << 7)
                                                                       ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                       ^ dword_140404A6C[v7 + 18600733])
                                                                      & 0xFFFFDF8C) << 15)
                                                                    ^ ((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                       ^ dword_140404A6C[v7 + 18600733])
                                                                      & 0xFF3A58AD) << 7)
                                                                    ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                    ^ dword_140404A6C[v7 + 18600733]) >> 18);
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919264] = sub_14009DE80();
      *a1 = dword_140404A6C[4 * dword_140404A6C[133919261] + 133919263];
      *a2 = dword_140404A6C[4 * dword_140404A6C[133919261] + 133919264];
      return dword_140404A6C[133919261]++;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v6 = &dword_140404A6C[133919262];
    while ( a3 != *v6 )
    {
      result = (unsigned int)(result + 1);
      v6 += 4;
      if ( (int)result >= (int)dword_140404A6C[133919261] )
        goto LABEL_5;
    }
    *a1 = dword_140404A6C[4 * (int)result + 133919263];
    *a2 = dword_140404A6C[4 * (int)result + 133919264];
  }
  return result;
}

// 14030186C: using guessed type int dword_14030186C;
// 140301E08: using guessed type int dword_140301E08[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144AF96E0: using guessed type unsigned int;
// 1602E12E0: using guessed type unsigned int;

//----- (0000000140050EF0) ----------------------------------------------------
__int64            sub_140050EF0(unsigned int a1)
{
  unsigned int *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rbx

  v2 = &dword_140404A6C[275753045];
  v3 = 0;
  while ( *v2 )
  {
    ++v3;
    v2 += 2570;
    if ( (__int64)v2 >= (__int64)&dword_140404A6C[278384725] )
      return 0xFFFFFFFFLL;
  }
  if ( v3 != -1 )
  {
    v5 = 2570LL * (int)v3;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v5 + 275753046]), 0, 0x2824u);
    dword_140404A6C[v5 + 275753045] = 1;
    dword_140404A6C[v5 + 275753046] = a1;
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140050F90) ----------------------------------------------------
__int64            sub_140050F90(int a1, signed int a2)
{
  __int64 v4; // r8
  __int64 v5; // rbp
  char *v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r11
  unsigned int *v10; // rax
  _BYTE *i; // rdx
  unsigned int v13; // esi
  unsigned int *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx

  v4 = -1;
  v5 = (a2 + 110LL * a1) << 6;
  v6 = (char *)&dword_140404A6C[278845893] + v5;
  do
    ++v4;
  while ( v6[v4 + 884] );
  if ( (int)v4 > 63 )
    LODWORD(v4) = 63;
  v7 = dword_140404A6C[1760 * a1 + 278845985 + ((__int64)a2 >> 5)];
  if ( _bittest((     int *)&v7, a2 & 0x1F) )
  {
    v8 = (int)dword_140404A6C[1760 * a1 + 278845987 + a2];
    v9 = 39 * v8;
    if ( dword_140404A6C[39 * v8 + 290382651] == (_DWORD)v4 )
    {
      if ( (int)v4 <= 0 )
        return (unsigned int)v8;
      v10 = &dword_140404A6C[v9 + 290382668];
      for ( i = (char *)&dword_140404A6C[278846626] + v5; *((_BYTE *)v10 - 64) == *(i - 2048) && *(_BYTE *)v10 == *i; ++i )
      {
        v10 = (unsigned int *)((char *)v10 + 1);
        if ( (char *)v10 - (char *)&dword_140404A6C[v9 + 290382668] >= (int)v4 )
          return (unsigned int)v8;
      }
    }
    dword_140404A6C[v9 + 290382645] = 0;
  }
  v13 = 0;
  v14 = &dword_140404A6C[290382645];
  while ( *v14 )
  {
    ++v13;
    v14 += 39;
    if ( (__int64)v14 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v13 == -1 )
    return 0xFFFFFFFFLL;
  v15 = 39LL * (int)v13;
  v16 = dword_140404A6C[283831474];
  v17 = (int)v4;
  dword_140404A6C[v15 + 290382651] = v4;
  *(_QWORD *)&dword_140404A6C[v15 + 290382645] = 1;
  dword_140404A6C[v15 + 290382648] = v16;
  dword_140404A6C[v15 + 290382647] = 1;
  dword_140404A6C[v15 + 290382649] = a1;
  dword_140404A6C[v15 + 290382650] = a2;
  sub_1401FC920((__m128i *)&dword_140404A6C[v15 + 290382652], (     __m128i *)(v6 + 884), (int)v4);
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[v15 + 290382668],
    (     __m128i *)((char *)&dword_140404A6C[278846626] + v5),
    v17);
  sub_1400C3BA0(a1, v13, a2);
  return v13;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140051170) ----------------------------------------------------
__int64            sub_140051170(int a1, unsigned int a2, int a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  signed int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // eax

  v4 = a1;
  v5 = &dword_140404A6C[290382645];
  v6 = 0;
  while ( *v5 )
  {
    ++v6;
    v5 += 39;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 64;
  if ( a3 <= 64 )
    v8 = a3;
  v9 = 39LL * (int)v6;
  v10 = dword_140404A6C[283831474];
  dword_140404A6C[v9 + 290382649] = v4;
  dword_140404A6C[v9 + 290382651] = v8;
  dword_140404A6C[v9 + 290382650] = a2;
  dword_140404A6C[v9 + 290382648] = v10;
  *(_QWORD *)&dword_140404A6C[v9 + 290382645] = 1;
  dword_140404A6C[v9 + 290382647] = 0;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[v9 + 290382652],
    (     __m128i *)((char *)&dword_140404A6C[1760 * v4 + 278846111] + (int)(a2 << 6)),
    v8);
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140051230) ----------------------------------------------------
void            sub_140051230(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  __int64 v6; // r10

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[308307070];
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a2[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = a3[2];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    dword_140404A6C[308307070] = v4 + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400512D0) ----------------------------------------------------
void            sub_1400512D0(unsigned int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  unsigned int v7; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = dword_140404A6C[308307070];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v6) = *a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v6) = a3[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v6) = a3[2];
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v6) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v6) = a4[1];
      v7 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v6) = 0;
      v7 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v6) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a2;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051480) ----------------------------------------------------
__int64            sub_140051480(unsigned int a1,      __m128i *a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v7 = -1;
    do
      ++v7;
    while ( SR_VEC_PTR_LANES(128, a2, i8)[v7] );
    v8 = dword_140404A6C[308307070];
    if ( (int)v7 > 63 )
      LODWORD(v7) = 63;
    v9 = dword_140404A6C[283831474];
    v10 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v10) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v10) = v9;
    sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v10), a2, (int)v7);
    *((_BYTE *)&dword_140404A6C[297756301] + v10 + (int)v7) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v10) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v10) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v10) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v10) = a4;
    dword_140404A6C[308307070] = v8 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051560) ----------------------------------------------------
void            sub_140051560(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v6; // r10
  unsigned int v7; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[283831474];
    v6 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v7 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v6) = 18;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v6) = v5;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v6) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v6) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v6) = a5;
    dword_140404A6C[308307070] = v7;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400515E0) ----------------------------------------------------
__int64            sub_1400515E0(unsigned int a1, unsigned int *a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v6 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 9;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756287] + v5) = *a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756288] + v5) = a2[1];
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v5) = a2[2];
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    dword_140404A6C[308307070] = v6;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051650) ----------------------------------------------------
__int64            sub_140051650(unsigned int a1, unsigned int a2, float a3, float a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 19;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = a2;
    *(float *)((char *)&dword_140404A6C[297756297] + v5) = a3;
    *(float *)((char *)&dword_140404A6C[297756298] + v5) = a4;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400516B0) ----------------------------------------------------
void            sub_1400516B0(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // r11d

  if ( dword_140404A6C[456202453] )
  {
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v8 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 15;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a6;
    dword_140404A6C[308307070] = v8;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051730) ----------------------------------------------------
void            sub_140051730(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  unsigned int v9; // xmm0_4
  unsigned int v10; // r11d
  __int64 v11; // r10
  unsigned int v12; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v8 = dword_140404A6C[283831474];
    v9 = 0;
    v10 = dword_140404A6C[308307070];
    v11 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v11) = 16;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v11) = v8;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v11) = a1 + (a2 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v11) = a3 + (a4 << 16);
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v11) = a5;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v11) = a6;
    if ( a7 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v11) = *a7;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v11) = a7[1];
      v12 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v11) = 0;
      v12 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v11) = v12;
    if ( a8 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v11) = *a8;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v11) = a8[1];
      v9 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v11) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v11) = v9;
    dword_140404A6C[308307070] = v10 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400518B0) ----------------------------------------------------
__int64            sub_1400518B0(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = a1;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = a2;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051940) ----------------------------------------------------
__int64            sub_140051940(unsigned int a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    if ( a1 <= 0x3FF )
    {
      v1 = dword_140404A6C[283831474];
      v2 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v2) = 6;
      ++dword_140404A6C[a1 + 280648157];
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v2) = v1;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v2) = a1;
      v3 = 1760LL * (int)a1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v2) = dword_140404A6C[v3 + 278846052];
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v2) = dword_140404A6C[v3 + 278845983];
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v2) = dword_140404A6C[v3 + 278846051];
      HIWORD(dword_140404A6C[308307070]) = 0;
      return 0;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400519F0) ----------------------------------------------------
void            sub_1400519F0(int a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // r11d
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // ecx

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v4 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 12;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    dword_140404A6C[308307070] = v4;
    v5 = 1116LL * a2 + 23492LL * a1;
    v6 = (*(unsigned int *)((char *)&dword_140404A6C[283831606] + v5) + 1) << 16;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[283831595] + v5)
       + 16
       * (*(unsigned int *)((char *)&dword_140404A6C[283831596] + v5)
        + 16 * *(unsigned int *)((char *)&dword_140404A6C[283831604] + v5));
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831588]
                                                                                  + v5)
                                                                + 2
                                                                * (a2
                                                                 + 8
                                                                 * (a1
                                                                  + 16
                                                                  * (*(unsigned int *)((char *)&dword_140404A6C[283831591]
                                                                                     + v5)
                                                                   + (*(unsigned int *)((char *)&dword_140404A6C[283831603]
                                                                                      + v5) << 8))));
    v8 = *(unsigned int *)((char *)&dword_140404A6C[283831605] + v5);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v8 / 60 + v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831607]
                                                                                  + v5);
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051B00) ----------------------------------------------------
void            sub_140051B00(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  signed int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // r9

  if ( dword_140404A6C[456202453] )
  {
    v4 = dword_140404A6C[283831474];
    v5 = 64;
    v6 = (int)dword_140404A6C[308307070];
    if ( a4 <= 64 )
      v5 = a4;
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 22;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1 + (a2 << 8);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = v5;
    sub_1401FC920(
      (__m128i *)&dword_140404A6C[32 * v6 + 297756301],
      (     __m128i *)((char *)&dword_140404A6C[5873 * a1 + 283831611 + 279 * a2] + (int)(a3 << 6)),
      v5);
    dword_140404A6C[308307070] = v6 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (0000000140051BD0) ----------------------------------------------------
void            sub_140051BD0(int a1, int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // r8
  int v4; // eax
  signed int v5; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  if ( dword_140404A6C[456202453] )
  {
    v2 = -1;
    v3 = &dword_140404A6C[5873 * a1 + 283831611 + 279 * a2];
    do
      ++v2;
    while ( *((_BYTE *)v3 + v2) );
    v4 = ((int)v2 + 1) >> 6;
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = dword_140404A6C[283831474];
      v7 = (a2 << 8) + a1;
      do
      {
        v8 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        v9 = *(_OWORD *)v3;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 22;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v6;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = v7;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = v5++;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = 64;
        v10 = *((_OWORD *)v3 + 1);
        v3 += 16;
        *(_OWORD *)((char *)&dword_140404A6C[297756301] + v8) = v9;
        v11 = *((_OWORD *)v3 - 2);
        *(_OWORD *)((char *)&dword_140404A6C[297756305] + v8) = v10;
        v12 = *((_OWORD *)v3 - 1);
        *(_OWORD *)((char *)&dword_140404A6C[297756309] + v8) = v11;
        *(_OWORD *)((char *)&dword_140404A6C[297756313] + v8) = v12;
      }
      while ( v5 <= v4 );
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051CF0) ----------------------------------------------------
void            sub_140051CF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // xmm0_4
  unsigned int v7; // eax
  __int64 v8; // r10
  unsigned int v9; // xmm1_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = 0;
    v7 = dword_140404A6C[283831474];
    v8 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = a3;
    if ( a4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v8) = *a4;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v8) = a4[1];
      v9 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v8) = 0;
      v9 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v8) = v9;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756290] + v8) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756291] + v8) = a5[1];
      v6 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v8) = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756292] + v8) = v6;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051DC0) ----------------------------------------------------
void            sub_140051DC0(int a1)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // xmm0
  unsigned int v6; // ecx
  __int64 v7; // xmm1_8
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = 3597LL * a1;
    v4 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    v5 = *(_OWORD *)&dword_140404A6C[v3 + 71856254];
    v6 = dword_140404A6C[v3 + 71856286] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4) = 7;
    v7 = *(_QWORD *)&dword_140404A6C[v3 + 71856258];
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) = v2;
    v8 = dword_140404A6C[v3 + 71856292];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) = a1
                                                                + ((dword_140404A6C[v3 + 71859139]
                                                                  + 2 * (dword_140404A6C[v3 + 71856253] + 2 * v6)) << 8);
    v9 = dword_140404A6C[v3 + 71859819];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) = v8;
    v10 = dword_140404A6C[v3 + 71859820];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) = dword_140404A6C[v3 + 71859816]
                                                                + 2
                                                                * (dword_140404A6C[v3 + 71859825]
                                                                 + 32 * (dword_140404A6C[v3 + 71859817] + 8 * v9));
    v11 = v10
        + 8
        * (dword_140404A6C[v3 + 71859818]
         + 16
         * (dword_140404A6C[v3 + 71859821]
          + 32
          * (dword_140404A6C[v3 + 71859822] + 16
                                            * (dword_140404A6C[v3 + 71859823] + 16 * dword_140404A6C[v3 + 71859826]))));
    v12 = dword_140404A6C[v3 + 71856260];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4) = v11;
    *(_OWORD *)((char *)&dword_140404A6C[297756301] + v4) = v5;
    *(_QWORD *)((char *)&dword_140404A6C[297756305] + v4) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756307] + v4) = v12;
    *(_WORD *)((char *)&dword_140404A6C[297756308] + v4) = dword_140404A6C[v3 + 71856261];
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 2) = BYTE2(dword_140404A6C[v3 + 71856261]);
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 3) = 0;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051F50) ----------------------------------------------------
__int64            sub_140051F50(signed int a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v1 = dword_140404A6C[283831474];
    v2 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v2) = 8;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v2) = v1;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v2) = a1;
    v3 = 3597LL * a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v2) = dword_140404A6C[v3 + 71856272];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v2) = dword_140404A6C[v3 + 71856288];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v2) = dword_140404A6C[v3 + 71856265];
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140051FF0) ----------------------------------------------------
void            sub_140051FF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // r10
  unsigned int v8; // xmm0_4

  if ( dword_140404A6C[456202453] )
  {
    v5 = dword_140404A6C[308307070];
    v6 = dword_140404A6C[283831474];
    v7 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v7) = 21;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v7) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v7) = a1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v7) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v7) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v7) = a4;
    if ( a5 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v7) = *a5;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v7) = a5[1];
      v8 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&dword_140404A6C[297756287] + v7) = 0;
      v8 = 0;
    }
    *(unsigned int *)((char *)&dword_140404A6C[297756289] + v7) = v8;
    dword_140404A6C[308307070] = v5 + 1;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (0000000140052090) ----------------------------------------------------
__int64 sub_140052090()
{
  float v0; // xmm1_4
  unsigned int v1; // edx
  float v2; // xmm0_4
  __int64 v3; // rcx
  unsigned int v4; // r11d
  int v5; // r8d
  unsigned int v6; // r9d
  __int64 result; // rax

  if ( dword_140404A6C[456202453] )
  {
    v0 = *(float *)&dword_140404A6C[335047074];
    v1 = dword_140404A6C[308307070] + 1;
    v2 = *(float *)&dword_140404A6C[335047062] * 10.0;
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 13;
    dword_140404A6C[308307070] = v1;
    dword_140404A6C[335047064] = (int)v2;
    dword_140404A6C[335047076] = (int)(float)(v0 * 10.0);
    dword_140404A6C[335047070] = (int)(float)(*(float *)&dword_140404A6C[335047068] * 10.0);
    v4 = (int)v2 + (dword_140404A6C[335047070] << 16);
    v5 = (int)(float)(*(float *)&dword_140404A6C[335047086] * 10.0);
    dword_140404A6C[335047082] = (int)(float)(*(float *)&dword_140404A6C[335047080] * 10.0);
    v6 = dword_140404A6C[335047076] + (dword_140404A6C[335047082] << 16);
    dword_140404A6C[335047088] = v5;
    dword_140404A6C[335047094] = (int)(float)(*(float *)&dword_140404A6C[335047092] * 10.0);
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = dword_140404A6C[283831474];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = v4;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v5;
    HIWORD(dword_140404A6C[308307070]) = 0;
    return 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 19021F0F4: using guessed type unsigned int;
// 19021F12C: using guessed type unsigned int;

//----- (00000001400521A0) ----------------------------------------------------
double            sub_1400521A0(int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0.0;
  v8[1] = -0.03125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  v8[2] = a4 * -0.5;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140052240) ----------------------------------------------------
double            sub_140052240(int a1, int a2, double a3)
{
  __int64 v3; // rsi
  __m128 v5; // xmm0
  __int64 v6; // rbp
  float v7; // xmm11_4
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  float v12; // xmm10_4
  __m128d v13; // xmm6
  __m128 v14; // xmm0
  double v15; // xmm7_8
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm1_4
  __m128d v18; // xmm6
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __m128 v21; // xmm0
  unsigned int v22; // xmm2_4
  unsigned int v23; // xmm1_4
  __m128d v24; // xmm6
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __m128 v27; // xmm0
  unsigned int v28; // xmm2_4
  unsigned int v29; // xmm1_4
  __m128d v30; // xmm6
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __m128 v33; // xmm0
  unsigned int v34; // xmm1_4
  unsigned int v35; // xmm10_4
  __m128 v36; // xmm0
  unsigned int v37; // xmm2_4
  unsigned int v38; // xmm1_4
  double v39; // xmm6_8
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __m128 v42; // xmm0
  unsigned int v43; // xmm2_4
  unsigned int v44; // xmm1_4
  double v45; // xmm6_8
  unsigned int v46; // ebx
  __int64 v47; // rdx
  __m128 v48; // xmm0
  unsigned int v49; // xmm2_4
  unsigned int v50; // xmm1_4
  double v51; // xmm6_8
  unsigned int v52; // ebx
  __int64 v53; // rdx
  __m128 v54; // xmm0
  unsigned int v55; // xmm1_4
  float v56; // xmm3_4
  int v57; // esi
  unsigned int v58; // eax
  int v59; // edx
  int v60; // edx
  unsigned int v61; // r8d
  unsigned int v62; // r10d
  int v63; // edx
  unsigned int v64; // r8d
  int v65; // edx
  unsigned int v66; // r9d
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm2_4
  int v73; // ecx
  unsigned int *v74; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140052240[16];
#define v76 (*(int (*))(void *)(sr_frame_140052240 + 0)) /* [rsp+20h] */
#define v77 (*(int (*))(void *)(sr_frame_140052240 + 4)) /* [rsp+24h] */
#define v78 (*(float (*))(void *)(sr_frame_140052240 + 8)) /* [rsp+28h] */

  v3 = 4;
  v5 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  v6 = 4;
  v7 = 0.0;
  v8 = 1268LL * a2;
  v9 = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[178322641] = 0;
  v10 = (int)dword_140404A6C[v8 + 278521292];
  dword_140404A6C[178519250] = 0;
  v11 = 3 * v10;
  v12 = *(float *)&dword_140404A6C[6 * v10 + 437914199] + 0.0049999999;
  do
  {
    v13 = _mm_cvtps_pd(v5);
    v14 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v13, f64)[0], v11, a3));
    SR_VEC_LANES(128, v13, f64)[0] = SR_VEC_LANES(128, v13, f64)[0] + 0.39269908169875;
    v15 = v12;
    *(float *)&v16 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0] * v12;
    dword_140404A6C[3 * v9 + 177167567] = v16;
    *(float *)&v17 = -(*(double *)SR_VEC_LANES(128, v14, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v17;
    v18 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v16;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v17;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v19 = dword_140404A6C[177167565];
    v21 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v18, f64)[0], v20, COERCE_DOUBLE((unsigned __int64)v16)));
    *(float *)&v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0] * v12;
    dword_140404A6C[3 * v19 + 177167567] = v22;
    *(float *)&v23 = -(*(double *)SR_VEC_LANES(128, v21, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v23;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v22;
    SR_VEC_LANES(128, v18, f64)[0] = SR_VEC_LANES(128, v18, f64)[0] + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v23;
    v24 = _mm_cvtps_pd(_mm_cvtpd_ps(v18));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v25 = dword_140404A6C[177167565];
    v27 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v24, f64)[0], v26, COERCE_DOUBLE((unsigned __int64)v22)));
    SR_VEC_LANES(128, v24, f64)[0] = SR_VEC_LANES(128, v24, f64)[0] + 0.39269908169875;
    *(float *)&v28 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v27, (__m128d)v27, 1), f64)[0] * v12;
    dword_140404A6C[3 * v25 + 177167567] = v28;
    *(float *)&v29 = -(*(double *)SR_VEC_LANES(128, v27, u64) * v12);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v29;
    v30 = _mm_cvtps_pd(_mm_cvtpd_ps(v24));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v28;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v29;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v31 = dword_140404A6C[177167565];
    v33 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v30, f64)[0], v32, COERCE_DOUBLE((unsigned __int64)v28)));
    HIDWORD(a3) = 0;
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v33, (__m128d)v33, 1), f64)[0] * v12;
    dword_140404A6C[3 * v31 + 177167567] = LODWORD(a3);
    SR_VEC_LANES(128, v30, f64)[0] = SR_VEC_LANES(128, v30, f64)[0] + 0.39269908169875;
    *(float *)&v34 = -(*(double *)SR_VEC_LANES(128, v33, u64) * v12);
    v5 = _mm_cvtpd_ps(v30);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v34;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v34;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v9 = ++dword_140404A6C[177167565];
    --v6;
  }
  while ( v6 );
  v35 = dword_140404A6C[v8 + 278521315];
  do
  {
    v36 = _mm_castpd_ps(sub_1401F8A50(v7, v11, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
    *(float *)&v37 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v36, (__m128d)v36, 1), f64)[0] * v15;
    dword_140404A6C[3 * v9 + 177167567] = v37;
    *(float *)&v38 = -(*(double *)SR_VEC_LANES(128, v36, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v38;
    v39 = (float)(v7 + 0.39269908169875);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v37;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v38;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v40 = dword_140404A6C[177167565];
    v42 = _mm_castpd_ps(sub_1401F8A50(v39, v41, COERCE_DOUBLE((unsigned __int64)v37)));
    *(float *)&v43 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v42, (__m128d)v42, 1), f64)[0] * v15;
    dword_140404A6C[3 * v40 + 177167567] = v43;
    *(float *)&v44 = -(*(double *)SR_VEC_LANES(128, v42, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v44;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v43;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v44;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v45 = (float)(v39 + 0.39269908169875);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v46 = dword_140404A6C[177167565];
    v48 = _mm_castpd_ps(sub_1401F8A50(v45, v47, COERCE_DOUBLE((unsigned __int64)v43)));
    *(float *)&v49 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v48, (__m128d)v48, 1), f64)[0] * v15;
    dword_140404A6C[3 * v46 + 177167567] = v49;
    *(float *)&v50 = -(*(double *)SR_VEC_LANES(128, v48, u64) * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v50;
    v51 = (float)(v45 + 0.39269908169875);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v49;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v50;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v52 = dword_140404A6C[177167565];
    v54 = _mm_castpd_ps(sub_1401F8A50(v51, v53, COERCE_DOUBLE((unsigned __int64)v49)));
    *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v54, (__m128d)v54, 1), f64)[0] * v15;
    dword_140404A6C[3 * v52 + 177167567] = LODWORD(a3);
    *(float *)&v55 = -(*(double *)SR_VEC_LANES(128, v54, u64) * v15);
    v7 = v51 + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v55;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = LODWORD(a3);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v55;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v9 = ++dword_140404A6C[177167565];
    --v3;
  }
  while ( v3 );
  v56 = *(float *)&dword_140404A6C[v8 + 278521347];
  v57 = 1;
  dword_140404A6C[3 * v9 + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v56 * -0.125;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v58 = dword_140404A6C[177495247];
  do
  {
    v59 = v57 & 0xF;
    dword_140404A6C[3 * v58 + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    v60 = ((_BYTE)v57 + 1) & 0xF;
    v61 = v60 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 16;
    v62 = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v60;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60;
    v63 = ((_BYTE)v57 + 2) & 0xF;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v61;
    v64 = v63 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 17;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
    v65 = ((_BYTE)v57 + 3) & 0xF;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v64;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 17;
    v66 = v57 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v65 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v57 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v65;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v57 += 4;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 32;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 33;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    v58 = ++dword_140404A6C[177495247];
  }
  while ( v57 <= 16 );
  v67 = *(float *)&dword_140404A6C[v8 + 278521348] * 0.5;
  v76 = 0;
  v68 = v56 * 0.5;
  v69 = *(float *)&dword_140404A6C[v8 + 278521346];
  v77 = -1132462080;
  v70 = v67 - v68;
  v71 = v68 + v67;
  v72 = *(float *)&dword_140404A6C[v8 + 278521349];
  v78 = v70;
  sub_140002D00((float *)&v76, v69, v72, v71);
  v77 = -1107296256;
  v78 = 0.0;
  sub_140002D00((float *)&v76, 0.03125, 0.125, 0.03125);
  v73 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v74 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v74 - 1) = 0;
      ++v73;
      *(_QWORD *)(v74 + 1) = 0;
      *(_QWORD *)(v74 + 3) = 0;
      v74 += 6;
    }
    while ( v73 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v76
#undef v77
#undef v78

// 140279200: using guessed type __int128 xmmword_140279200;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140054750) ----------------------------------------------------
__int64            sub_140054750(int a1, double a2, float a3, float a4)
{
  __int64 v4; // rdx
  int v5; // r15d
  float v6; // xmm0_4
  double v7; // xmm2_8
  int v8; // r14d
  unsigned int v9; // edi
  int v10; // ebx
  __int64 v11; // rsi
  float v12; // xmm1_4
  __m128 v13; // xmm0
  double v14; // xmm10_8
  __int64 v15; // rbp
  __m128d v16; // xmm11
  __int64 v17; // rdx
  __m128 v18; // xmm0
  double v19; // xmm2_8
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  int v23; // eax
  unsigned int v24; // edi
  __m128d v25; // xmm11
  __int64 v26; // rdx
  __m128 v27; // xmm0
  double v28; // xmm2_8
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // eax
  unsigned int v33; // edi
  __m128d v34; // xmm11
  __m128 v35; // xmm0
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // ebx
  unsigned int v42; // r11d
  unsigned int v43; // r10d
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  unsigned int v46; // edx
  int v47; // r8d
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  int v56; // r9d
  unsigned int *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // ecx
  bool v62; // cc
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // r9d
  unsigned int *v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 result; // rax
  unsigned int *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // [rsp+F8h] [rbp+10h]

  v79 = LODWORD(a2);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = 2;
  v9 = 0;
  v10 = 0;
  v11 = a1;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177544400] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  do
  {
    if ( (unsigned int)v10 >= 2 )
      v12 = v6;
    else
      v12 = *(float *)&v7;
    if ( (_DWORD)v11 == 45 )
    {
      if ( !v10 || v10 == 3 )
        v12 = v6;
      else
        v12 = *(float *)&v7;
    }
    v13 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v14 = v12;
    v15 = 2;
    do
    {
      v16 = _mm_cvtps_pd(v13);
      v18 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v16, f64)[0], v4, v7));
      HIDWORD(v19) = 0;
      *(float *)&v19 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v18, (__m128d)v18, 1), f64)[0] * v14;
      v20 = -(*(double *)SR_VEC_LANES(128, v18, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v21 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v21 = 0.375;
        }
        else
        {
          v21 = 0.5;
        }
      }
      else
      {
        v21 = -0.5;
      }
      v22 = v21 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v22 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v22 = a4 * 0.375;
          }
          else
          {
            v22 = a4 * 0.5;
          }
        }
        else
        {
          v22 = a4 * -0.5;
        }
      }
      v23 = 3 * v9;
      SR_VEC_LANES(128, v16, f64)[0] = SR_VEC_LANES(128, v16, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[v23 + 177167568] = v22;
      *(float *)&dword_140404A6C[v23 + 177167569] = v20;
      dword_140404A6C[v23 + 177167567] = LODWORD(v19);
      v24 = ++dword_140404A6C[177167565];
      v25 = _mm_cvtps_pd(_mm_cvtpd_ps(v16));
      v27 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v25, f64)[0], v17, v19));
      HIDWORD(v28) = 0;
      *(float *)&v28 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v27, (__m128d)v27, 1), f64)[0] * v14;
      v29 = -(*(double *)SR_VEC_LANES(128, v27, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v30 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v30 = 0.375;
        }
        else
        {
          v30 = 0.5;
        }
      }
      else
      {
        v30 = -0.5;
      }
      v31 = v30 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v31 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v31 = a4 * 0.375;
          }
          else
          {
            v31 = a4 * 0.5;
          }
        }
        else
        {
          v31 = a4 * -0.5;
        }
      }
      v32 = 3 * v24;
      SR_VEC_LANES(128, v25, f64)[0] = SR_VEC_LANES(128, v25, f64)[0] + 1.047197551196667;
      dword_140404A6C[v32 + 177167567] = LODWORD(v28);
      *(float *)&dword_140404A6C[v32 + 177167568] = v31;
      *(float *)&dword_140404A6C[v32 + 177167569] = v29;
      v33 = ++dword_140404A6C[177167565];
      v34 = _mm_cvtps_pd(_mm_cvtpd_ps(v25));
      v35 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v34, f64)[0], v26, v28));
      HIDWORD(v7) = 0;
      *(float *)&v7 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v35, (__m128d)v35, 1), f64)[0] * v14;
      v36 = -(*(double *)SR_VEC_LANES(128, v35, u64) * v14);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v37 = 0.3125;
        }
        else if ( v10 == 2 )
        {
          v37 = 0.375;
        }
        else
        {
          v37 = 0.5;
        }
      }
      else
      {
        v37 = -0.5;
      }
      v38 = v37 * a4;
      if ( (_DWORD)v11 == 45 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v38 = a4 * -0.375;
          }
          else if ( v10 == 2 )
          {
            v38 = a4 * 0.375;
          }
          else
          {
            v38 = a4 * 0.5;
          }
        }
        else
        {
          v38 = a4 * -0.5;
        }
      }
      v39 = (int)(3 * v33);
      SR_VEC_LANES(128, v34, f64)[0] = SR_VEC_LANES(128, v34, f64)[0] + 1.047197551196667;
      dword_140404A6C[v39 + 177167567] = LODWORD(v7);
      *(float *)&dword_140404A6C[v39 + 177167568] = v38;
      *(float *)&dword_140404A6C[v39 + 177167569] = v36;
      v9 = ++dword_140404A6C[177167565];
      v13 = _mm_cvtpd_ps(v34);
      --v15;
    }
    while ( v15 );
    v6 = a3;
    ++v10;
    *(_QWORD *)&v7 = v79;
  }
  while ( v10 < 4 );
  v40 = dword_140404A6C[177544400];
  v41 = 8;
  do
  {
    v42 = v41 - 2;
    dword_140404A6C[5 * v40 + 177544401] = 4;
    v43 = v41 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 - 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 6;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 5;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v41 - 6;
    v44 = v41 - 4;
    ++dword_140404A6C[177544400];
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v41 + 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41 - 4;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v41 - 5;
    v45 = v41 - 3;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v41 + 2;
    v46 = v41 + 3;
    v41 += 6;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v46;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v45;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v46;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v42;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v43;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v45;
    v40 = ++dword_140404A6C[177544400];
  }
  while ( v41 < 26 );
  v47 = 6;
  dword_140404A6C[5 * v40 + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 5;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 0;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 2;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 3;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 18;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 23;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 21;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 20;
  v48 = dword_140404A6C[178519250];
  do
  {
    dword_140404A6C[2 * v48 + 178519251] = v47 - 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 5;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 4;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 3;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 3;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v47 + 4;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v47 - 1;
    v49 = v47 + 5;
    v47 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v49;
    v48 = ++dword_140404A6C[178519250];
  }
  while ( v47 < 24 );
  do
  {
    v50 = v8 - 2;
    dword_140404A6C[2 * v48 + 178519251] = v8 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v8 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v8 + 2;
    v51 = v8 + 3;
    v8 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v51;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v51;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v50;
    v48 = ++dword_140404A6C[178519250];
  }
  while ( v8 < 26 );
  v52 = 1268 * v11;
  v53 = 12 * dword_140404A6C[177167565];
  dword_140404A6C[1268 * v11 + 278522247] = 0;
  v54 = sr_path_malloc(v53);
  v55 = dword_140404A6C[177167565];
  v56 = 0;
  *(_QWORD *)&dword_140404A6C[1268 * v11 + 278522249] = v54;
  if ( v55 > 0 )
  {
    v57 = &dword_140404A6C[177167569];
    do
    {
      v57 += 3;
      ++v56;
      v58 = (int)(3 * dword_140404A6C[v52 + 278522247]);
      v59 = *(_QWORD *)&dword_140404A6C[v52 + 278522249];
      *(_DWORD *)(v59 + 4 * v58) = *(v57 - 5);
      *(_DWORD *)(v59 + 4 * v58 + 4) = *(v57 - 4);
      *(_DWORD *)(v59 + 4 * v58 + 8) = *(v57 - 3);
      ++dword_140404A6C[v52 + 278522247];
      v55 = dword_140404A6C[177167565];
    }
    while ( v56 < (int)dword_140404A6C[177167565] );
  }
  dword_140404A6C[v52 + 278522251] = 0;
  *(_QWORD *)&dword_140404A6C[v52 + 278522253] = 0;
  dword_140404A6C[v52 + 278522255] = 0;
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522256 + v52] = v55;
  v60 = sr_path_malloc(4 * v55);
  v61 = 0;
  v62 = (signed int)dword_140404A6C[177167565] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522257 + v52] = v60;
  if ( !v62 )
  {
    v63 = 0;
    do
    {
      v63 += 4;
      *(_DWORD *)(v63 + *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522257 + v52] - 4) = v61++;
    }
    while ( v61 < (int)dword_140404A6C[177167565] );
  }
  v64 = (int)dword_140404A6C[177544400];
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522259 + v52] = 0;
  v65 = sr_path_malloc(36 * v64);
  v66 = 0;
  v62 = (signed int)dword_140404A6C[177544400] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522261 + v52] = v65;
  if ( !v62 )
  {
    v67 = &dword_140404A6C[177544403];
    do
    {
      v67 += 5;
      ++v66;
      v68 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v68)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v68)
                + 8) = *(v67 - 6);
      v69 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v69)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v69)
                + 12) = *(v67 - 5);
      v70 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v70)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v70)
                + 16) = *(v67 - 4);
      v71 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v71)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v71)
                + 20) = *(v67 - 3);
      v72 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v72)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v72)
                + 4) = 4;
      v73 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v73);
    }
    while ( v66 < (int)dword_140404A6C[177544400] );
  }
  v74 = (int)dword_140404A6C[178519250];
  dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522263 + v52] = 0;
  result = sr_path_malloc(12 * v74);
  v62 = (signed int)dword_140404A6C[178519250] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v52 + 278522251] + 278522265 + v52] = result;
  if ( !v62 )
  {
    v76 = &dword_140404A6C[178519252];
    do
    {
      v76 += 2;
      ++v5;
      v77 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v77)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v77)) = *(v76 - 3);
      v78 = v52 * 4 + 56LL * (int)dword_140404A6C[v52 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v78)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v78)
                + 4) = *(v76 - 2);
      result = (int)dword_140404A6C[v52 + 278522251];
      ++dword_140404A6C[14 * result + 278522263 + v52];
    }
    while ( v5 < (int)dword_140404A6C[178519250] );
  }
  ++dword_140404A6C[v52 + 278522251];
  return result;
}

// 14005486B: variable 'v4' is possibly undefined
// 140054931: variable 'v17' is possibly undefined
// 1400549F7: variable 'v26' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400555C0) ----------------------------------------------------
double            sub_1400555C0(int a1, __int64 a2, double a3, float a4, float a5)
{
  float v5; // xmm0_4
  int v6; // esi
  unsigned int v8; // edi
  int v9; // ebx
  float v10; // xmm1_4
  __m128 v11; // xmm0
  double v12; // xmm10_8
  __int64 v13; // rbp
  __m128d v14; // xmm11
  __int64 v15; // rdx
  __m128 v16; // xmm0
  float v17; // xmm3_4
  double v18; // xmm2_8
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21; // eax
  unsigned int v22; // edi
  __m128d v23; // xmm11
  __int64 v24; // rdx
  __m128 v25; // xmm0
  float v26; // xmm3_4
  double v27; // xmm2_8
  float v28; // xmm1_4
  float v29; // xmm0_4
  int v30; // eax
  unsigned int v31; // edi
  __m128d v32; // xmm11
  __m128 v33; // xmm0
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  unsigned int v38; // eax
  int v39; // ebx
  unsigned int v40; // r11d
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // r9d
  unsigned int v46; // eax
  unsigned int *v47; // r8
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v53; // [rsp+100h] [rbp+18h]

  v53 = LODWORD(a3);
  v5 = a4;
  v6 = a2;
  v8 = 0;
  v9 = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177544400] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  do
  {
    if ( (unsigned int)v9 >= 2 )
      v10 = v5;
    else
      v10 = *(float *)&a3;
    if ( v6 == 45 )
    {
      if ( !v9 || v9 == 3 )
        v10 = v5;
      else
        v10 = *(float *)&a3;
    }
    v11 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v12 = v10;
    v13 = 2;
    do
    {
      v14 = _mm_cvtps_pd(v11);
      v16 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v14, f64)[0], a2, a3));
      HIDWORD(v18) = 0;
      v17 = -(*(double *)SR_VEC_LANES(128, v16, u64) * v12);
      *(float *)&v18 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v16, (__m128d)v16, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v19 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v19 = 0.375;
        }
        else
        {
          v19 = 0.5;
        }
      }
      else
      {
        v19 = -0.5;
      }
      v20 = a5 * v19;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v20 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v20 = a5 * 0.375;
          }
          else
          {
            v20 = a5 * 0.5;
          }
        }
        else
        {
          v20 = a5 * -0.5;
        }
      }
      v21 = 3 * v8;
      SR_VEC_LANES(128, v14, f64)[0] = SR_VEC_LANES(128, v14, f64)[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[v21 + 177167568] = v20;
      dword_140404A6C[v21 + 177167567] = LODWORD(v18);
      *(float *)&dword_140404A6C[v21 + 177167569] = v17;
      v22 = ++dword_140404A6C[177167565];
      v23 = _mm_cvtps_pd(_mm_cvtpd_ps(v14));
      v25 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v23, f64)[0], v15, v18));
      HIDWORD(v27) = 0;
      v26 = -(*(double *)SR_VEC_LANES(128, v25, u64) * v12);
      *(float *)&v27 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v25, (__m128d)v25, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v28 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v28 = 0.375;
        }
        else
        {
          v28 = 0.5;
        }
      }
      else
      {
        v28 = -0.5;
      }
      v29 = a5 * v28;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v29 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v29 = a5 * 0.375;
          }
          else
          {
            v29 = a5 * 0.5;
          }
        }
        else
        {
          v29 = a5 * -0.5;
        }
      }
      v30 = 3 * v22;
      SR_VEC_LANES(128, v23, f64)[0] = SR_VEC_LANES(128, v23, f64)[0] + 1.047197551196667;
      dword_140404A6C[v30 + 177167567] = LODWORD(v27);
      *(float *)&dword_140404A6C[v30 + 177167568] = v29;
      *(float *)&dword_140404A6C[v30 + 177167569] = v26;
      v31 = ++dword_140404A6C[177167565];
      v32 = _mm_cvtps_pd(_mm_cvtpd_ps(v23));
      v33 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v32, f64)[0], v24, v27));
      HIDWORD(a3) = 0;
      v34 = -(*(double *)SR_VEC_LANES(128, v33, u64) * v12);
      *(float *)&a3 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v33, (__m128d)v33, 1), f64)[0] * v12;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v35 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v35 = 0.375;
        }
        else
        {
          v35 = 0.5;
        }
      }
      else
      {
        v35 = -0.5;
      }
      v36 = a5 * v35;
      if ( v6 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v36 = a5 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v36 = a5 * 0.375;
          }
          else
          {
            v36 = a5 * 0.5;
          }
        }
        else
        {
          v36 = a5 * -0.5;
        }
      }
      v37 = (int)(3 * v31);
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 1.047197551196667;
      dword_140404A6C[v37 + 177167567] = LODWORD(a3);
      *(float *)&dword_140404A6C[v37 + 177167568] = v36;
      *(float *)&dword_140404A6C[v37 + 177167569] = v34;
      v8 = ++dword_140404A6C[177167565];
      v11 = _mm_cvtpd_ps(v32);
      --v13;
    }
    while ( v13 );
    v5 = a4;
    ++v9;
    *(_QWORD *)&a3 = v53;
  }
  while ( v9 < 4 );
  v38 = dword_140404A6C[177544400];
  v39 = 8;
  do
  {
    v40 = v39 - 2;
    dword_140404A6C[5 * v38 + 177544401] = 4;
    v41 = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 6;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 5;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v39 - 6;
    v42 = v39 - 4;
    ++dword_140404A6C[177544400];
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 4;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 5;
    v43 = v39 - 3;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 2;
    v44 = v39 + 3;
    v39 += 6;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v43;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v42;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v40;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v43;
    v38 = ++dword_140404A6C[177544400];
  }
  while ( v39 < 26 );
  v45 = 0;
  dword_140404A6C[5 * v38 + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 5;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 0;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 2;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 3;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 18;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 23;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 21;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 20;
  if ( (int)dword_140404A6C[177544400] > 0 )
  {
    v46 = dword_140404A6C[177495247];
    v47 = &dword_140404A6C[177544402];
    do
    {
      ++v45;
      v48 = (int)(3 * v46);
      v49 = *v47;
      v47 += 5;
      dword_140404A6C[v48 + 177495248] = v49;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(v47 - 4);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(v47 - 3);
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v50 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v50 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v50 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[v50 + 178011348] = 1065353216;
      dword_140404A6C[v50 + 178011350] = 1065353216;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *(v47 - 5);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(v47 - 3);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = *(v47 - 2);
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v51 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v51 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v51 + 178011346] = 1065353216;
      *(_QWORD *)&dword_140404A6C[v51 + 178011348] = 1065353216;
      dword_140404A6C[v51 + 178011350] = 1065353216;
      v46 = ++dword_140404A6C[177495247];
    }
    while ( v45 < (int)dword_140404A6C[177544400] );
  }
  return sub_1401449C0(a1, 0);
}

// 1400556DB: variable 'a2' is possibly undefined
// 14005579B: variable 'v15' is possibly undefined
// 14005585B: variable 'v24' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140055FA0) ----------------------------------------------------
__int64            sub_140055FA0(int a1, signed int a2, signed int a3, float *a4)
{
  __int64 v4; // r15
  __int64 v6; // r13
  unsigned int *v7; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 v11; // rsi
  unsigned int *v12; // rax

  v4 = a3;
  v6 = a1;
  v7 = &dword_140404A6C[486149253];
  v8 = a2;
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 61;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 61LL * (int)v9;
  dword_140404A6C[7166 * a1 + 280654225 + 3 * dword_140404A6C[7166 * a1 + 280654224]] = v9;
  dword_140404A6C[7166 * a1 + 280654226 + 3 * dword_140404A6C[7166 * a1 + 280654224]] = a2;
  dword_140404A6C[7166 * a1 + 280654227 + 3 * dword_140404A6C[7166 * a1 + 280654224]++] = a3;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v11 + 486149254]), 0, 0xF0u);
  dword_140404A6C[v11 + 486149253] = 1;
  dword_140404A6C[v11 + 486149254] = 10;
  *(_QWORD *)&dword_140404A6C[v11 + 486149256] = 0x10000;
  dword_140404A6C[v11 + 486149293] = v6;
  v12 = &dword_140404A6C[36 * v9 + 485543029];
  *(_OWORD *)v12 = 0;
  *((_OWORD *)v12 + 1) = 0;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  *((_OWORD *)v12 + 4) = 0;
  *((_OWORD *)v12 + 5) = 0;
  *((_OWORD *)v12 + 6) = 0;
  *((_OWORD *)v12 + 7) = 0;
  *((_OWORD *)v12 + 8) = 0;
  dword_140404A6C[v11 + 486149291] = dword_140404A6C[7166 * v6 + 280651439 + 78 * v8];
  dword_140404A6C[v11 + 486149292] = dword_140404A6C[7166 * v6 + 280651439 + 78 * v4];
  dword_140404A6C[v11 + 486149281] = 1048576000;
  dword_140404A6C[v11 + 486149282] = 1052770304;
  dword_140404A6C[v11 + 486149267] = *(_DWORD *)a4;
  dword_140404A6C[v11 + 486149268] = *((_DWORD *)a4 + 1);
  dword_140404A6C[v11 + 486149269] = *((_DWORD *)a4 + 2);
  *(float *)&dword_140404A6C[v11 + 486149270] = *a4 - *(float *)&dword_140404A6C[25 * v4 + 282486046];
  *(float *)&dword_140404A6C[v11 + 486149271] = a4[1] - *(float *)&dword_140404A6C[25 * v4 + 282486047];
  *(float *)&dword_140404A6C[v11 + 486149272] = a4[2] - *(float *)&dword_140404A6C[25 * v4 + 282486048];
  return v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400561C0) ----------------------------------------------------
void            sub_1400561C0(int a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int *v4; // rax
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int *v7; // rax
  unsigned int *v8; // r9
  unsigned int *v9; // r8
  unsigned int *v10; // r10
  _DWORD sr_quad_position[3];
  _DWORD sr_quad_matrix[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400561C0[96];
#define v12 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 0)) /* [rsp+0h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1400561C0 + 88)) /* [rsp+58h] */

  v1 = 0;
  sr_quad_position[2] = -1119879168;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  (*(__int64 *)sr_quad_position) = 0;
  sub_140003460((float *)&(*(__int64 *)sr_quad_position), 0.015625, 0.03125, 0.09375);
  v3 = 0;
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v4 = &dword_140404A6C[178388179];
    do
    {
      *(_QWORD *)(v4 - 1) = 1056964608;
      ++v3;
      *(_QWORD *)(v4 + 1) = 1056964608;
      *(_QWORD *)(v4 + 3) = 1056964608;
      *(_QWORD *)(v4 + 5) = 1056964608;
      v4 += 8;
    }
    while ( v3 < (int)dword_140404A6C[178322641] );
  }
  (*(__int128 *)sr_quad_matrix) = xmmword_140278D30;
  sr_quad_position[2] = 1015021568;
  (*(__int128 *)(sr_quad_matrix + 4)) = xmmword_140278D30;
  sr_quad_matrix[8] = 1065353216;
  sub_14007B2A0((__int64)sr_quad_matrix, (float *)sr_quad_matrix + 3, sr_export_float_lane_container(1070141403));
  sub_1400054F0((float *)&(*(__int64 *)sr_quad_position), (float *)sr_quad_matrix, sr_export_float_lane_container(1023410176), 0.03125);
  v5 = dword_140404A6C[177495247];
  v6 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v7 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v7 - 1) = 0;
      ++v6;
      *(_QWORD *)(v7 + 1) = 0;
      *(_QWORD *)(v7 + 3) = 0;
      v7 += 6;
      v5 = dword_140404A6C[177495247];
    }
    while ( v6 < (int)dword_140404A6C[177495247] );
  }
  if ( (int)dword_140404A6C[178322641] > 0 )
  {
    v8 = &dword_140404A6C[178322642];
    v9 = &dword_140404A6C[178388181];
    v10 = &dword_140404A6C[178388183];
    do
    {
      dword_140404A6C[3 * v5 + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[2];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v9 - 1);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *v9;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[1];
      dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = v9[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *v8;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v8[2];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v8[3];
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 3);
      v8 += 4;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = *(v9 - 2);
      v9 += 8;
      v10 += 8;
      ++v1;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = *(v10 - 9);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = *(v10 - 8);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = *(v10 - 7);
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = *(v10 - 6);
      v5 = ++dword_140404A6C[177495247];
    }
    while ( v1 < (int)dword_140404A6C[178322641] );
  }
  sub_1401449C0(a1, 0);
  return;
}
#undef v12
#undef v17

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140056560) ----------------------------------------------------
void            sub_140056560()
{
  unsigned int v0; // r12d
  float *v1; // rbp
  int v2; // r15d
  int v3; // esi
  int v4; // edi
  int v5; // r14d
  float v6; // xmm1_4
  float v7; // xmm2_4
  int v8; // ebx
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // [rsp+110h] [rbp+8h]

  v0 = dword_140404A6C[284024893];
  v1 = (float *)&dword_140404A6C[188872560];
  v2 = 0;
  v3 = 768;
  dword_140404A6C[188872557] = -981467136;
  dword_140404A6C[188872559] = -981467136;
  do
  {
    v4 = 0;
    v5 = 638;
    v6 = (float)v2 * 0.015625;
    v7 = (float)(v2 - 704 + 64) * (float)(v2 - 704 + 64);
    v19 = v6 * 0.5;
    do
    {
      v8 = v4 - 704;
      v9 = (float)v4 * 0.015625;
      v10 = fminf(
              fmaxf((float)(fsqrt((float)((float)(v8 + 64) * (float)(v8 + 64)) + v7) * 0.00390625) - 0.75, 0.0),
              3.0);
      v11 = v10 * v10;
      v12 = SR_VEC_READ_LANES(128, sub_1401305F0(v9, v6, -1), f32)[0] + v11;
      v13 = (float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0(v9 * 0.5, v19, -1), f32)[0] * 32.0) + (float)(v11 * 8.0)) * v11;
      v14 = fminf(
              fmaxf(
                (float)(fsqrt((float)((float)v8 * (float)v8) + (float)((float)(v2 - 704) * (float)(v2 - 704))) - 320.0)
              * 0.015625,
                0.0),
              1.0);
      *v1 = (float)((float)((float)((float)(SR_VEC_READ_LANES(128, sub_1401305F0((float)v4 * 0.03125, (float)v2 * 0.03125, -1), f32)[0] * 8.0)
                                  + 23.75)
                          + (float)((float)(v12 * 16.0) + v13))
                  * v14)
          + (float)((float)(1.0 - v14) * 23.875);
      if ( v0 )
        goto LABEL_12;
      if ( v3 <= 130 )
      {
        if ( v3 <= 0 )
          goto LABEL_12;
      }
      else if ( (unsigned int)v4 <= 0x2FF )
      {
        v15 = fminf(
                fmaxf(
                  fmaxf(1.0 - fminf((float)(v3 - 130) * 0.25, 1.0), 1.0 - fminf((float)(v5 + 130) * 0.25, 1.0)),
                  0.0),
                1.0);
        *v1 = (float)((float)(36.0 - (float)(v15 * 24.0)) * (float)(v15 * v15)) + 11.75;
      }
      if ( (unsigned int)v4 <= 0x27D )
      {
        v16 = fminf((float)v3 * 0.25, 1.0);
        v17 = 1.0 - fminf((float)v5 * 0.25, 1.0);
        if ( v3 > 130 )
          v17 = 0.0;
        v18 = fminf(fmaxf(fmaxf(v17, 1.0 - v16), 0.0), 1.0);
        *v1 = (float)((float)(36.0 - (float)(v18 * 24.0)) * (float)(v18 * v18)) + 11.75;
      }
LABEL_12:
      v6 = (float)v2 * 0.015625;
      ++v4;
      v7 = (float)(v2 - 704 + 64) * (float)(v2 - 704 + 64);
      --v5;
      ++v1;
    }
    while ( v4 < 2049 );
    ++v2;
    --v3;
  }
  while ( v3 > -1281 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16D482820: using guessed type unsigned int;
// 16D482828: using guessed type unsigned int;
// 183F7CB60: using guessed type unsigned int;

//----- (0000000140056980) ----------------------------------------------------
__int64 sub_140056980()
{
  int v0; // esi
  unsigned int v1; // eax
  signed int v2; // ecx
  unsigned int v3; // ebp
  unsigned int *v4; // r14
  __int64 v5; // rdx
  char *v6; // r8
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int *v19; // rax
  unsigned int v20; // r15d
  int v21; // r14d
  unsigned int *v22; // r11
  __int64 v23; // rbx
  unsigned int v24; // eax
  signed int v25; // r8d
  int v26; // r10d
  unsigned int v27; // r9d
  unsigned int v28; // eax
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  unsigned int v31; // eax
  float v32; // xmm0_4
  unsigned int v33; // eax
  signed int *v34; // rbx
  __int64 v35; // rbp
  unsigned int *v36; // rdi
  signed int v37; // r9d
  signed int v38; // r8d
  signed int v39; // edx
  signed int v40; // ecx
  unsigned int *v41; // rbx
  signed int v42; // eax
  signed int v43; // ebp
  int v44; // r11d
  signed int v45; // r9d
       char *v46; // r10
  float v47; // xmm10_4
  int v48; // ebx
  int v49; // ebx
  int v50; // r10d
  unsigned int *v51; // r8
  unsigned int *v52; // r9
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned int v58; // eax
  __m128i v59; // xmm0
  int v60; // eax
  int i; // ebx
  __int64 v62; // r13
  unsigned int *v63; // r14
  int v64; // r8d
  unsigned int *v65; // rbp
  _DWORD *v66; // r15
  int v67; // r12d
  __int64 v68; // rbx
  int v69; // edi
  unsigned int v70; // edx
  __int64 v71; // rcx
  int v72; // ebp
  bool v73; // al
  bool v74; // al
  bool v75; // al
  bool v76; // al
  bool v77; // al
  bool v78; // al
  int v79; // r13d
  unsigned int v80; // r12d
  int v81; // edi
  BOOL v82; // ebx
  int v83; // eax
  int v84; // edi
  int v85; // ebx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  unsigned int *v89; // r15
       char *v90; // r14
  int v91; // ebx
  int v92; // eax
  int v93; // ecx
  signed int v94; // edi
  __int64 v95; // rcx
  unsigned __int8 v96; // al
  int v97; // eax
  bool v98; // cf
  __int64 v99; // rax
  char v100; // cl
  bool v101; // zf
  __int64 v102; // rax
  char v103; // cl
  bool v104; // zf
  __int64 v105; // rax
  char v106; // cl
  bool v107; // zf
  __int64 v108; // rax
  char v109; // cl
  bool v110; // zf
  __int64 v111; // rax
  char v112; // cl
  bool v113; // zf
  __int64 v114; // rax
  char v115; // cl
  bool v116; // zf
  __int64 v117; // rax
  char v118; // cl
  bool v119; // zf
  __int64 v120; // rax
  char v121; // cl
  bool v122; // zf
  __int64 v123; // rax
  char v124; // cl
  bool v125; // zf
  int v126; // edx
  unsigned int v127; // r8d
  int v128; // ecx
  unsigned int v129; // ebx
  unsigned int v130; // r9d
  __int64 v131; // rbp
  int v132; // r13d
  int v133; // r12d
  unsigned int v134; // r15d
  float v135; // xmm2_4
  int v136; // r14d
  float v137; // xmm6_4
  float v138; // xmm5_4
  float v139; // xmm11_4
  float v140; // xmm8_4
  float v141; // xmm12_4
  float v142; // xmm9_4
  float v143; // xmm13_4
  unsigned int v144; // esi
  int v145; // edi
  float v146; // xmm4_4
  float v147; // xmm3_4
  unsigned int v148; // eax
  unsigned int v149; // ebx
  float v150; // xmm5_4
  float v151; // xmm1_4
  __int64 v152; // rcx
  char v153; // al
  int j; // edi
  int k; // ebx
  unsigned int *v156; // rbx
  int v157; // r12d
  unsigned int *v158; // r14
  int v159; // r15d
  __int64 v160; // r13
  int v161; // edi
  __int64 v162; // rbp
  __int64 v163; // rcx
  unsigned int v164; // xmm1_4
  unsigned int v165; // xmm0_4
  __int64 v166; // rcx
  __int64 v167; // rdx
  signed int v168; // r14d
  __int64 v169; // r15
  unsigned __int64 v170; // rbp
  __int64 m; // rdi
  __int64 v172; // rbx
  int *v173; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140056980[176];
#define v175 (*(_QWORD (*)[5])(void *)(sr_frame_140056980 + 0)) /* [rsp+0h] */
#define v176 (*(unsigned int (*))(void *)(sr_frame_140056980 + 80)) /* [rsp+50h] */
#define v177 (*(int (*))(void *)(sr_frame_140056980 + 84)) /* [rsp+54h] */
#define v178 (*(int (*))(void *)(sr_frame_140056980 + 88)) /* [rsp+58h] */
#define v179 (*(int (*))(void *)(sr_frame_140056980 + 92)) /* [rsp+5Ch] */
#define v180 (*(int (*))(void *)(sr_frame_140056980 + 96)) /* [rsp+60h] */
#define v181 (*(unsigned int * (*))(void *)(sr_frame_140056980 + 104)) /* [rsp+68h] */
#define v182 (*(int (*))(void *)(sr_frame_140056980 + 112)) /* [rsp+70h] */
#define v183 (*(int (*))(void *)(sr_frame_140056980 + 116)) /* [rsp+74h] */
#define v184 (*(__int64 (*))(void *)(sr_frame_140056980 + 120)) /* [rsp+78h] */
#define v185 (*(int (*))(void *)(sr_frame_140056980 + 128)) /* [rsp+80h] */
#define v186 (*(__int64 (*))(void *)(sr_frame_140056980 + 136)) /* [rsp+88h] */
#define v187 (*(__int64 (*))(void *)(sr_frame_140056980 + 144)) /* [rsp+90h] */
#define v188 (*(int (*))(void *)(sr_frame_140056980 + 152)) /* [rsp+98h] */
#define v189 (*(int (*))(void *)(sr_frame_140056980 + 156)) /* [rsp+9Ch] */
#define v190 (*(int (*))(void *)(sr_frame_140056980 + 160)) /* [rsp+A0h] */
#define v191 (*(int (*))(void *)(sr_frame_140056980 + 164)) /* [rsp+A4h] */
#define v192 (*(__int64 (*))(void *)(sr_frame_140056980 + 168)) /* [rsp+A8h] */

  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[254388963]), 0, 0x4000000u);
  v182 = sub_14024C22C("data");
  v183 = sub_14024C22C(&dword_140404A6C[283831313]);
  sub_1401979D0(0, 0);
  asset_load_city_sbc_candidate();
  _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[225391222], _mm_load_si128((const __m128i *)&xmmword_1402799A0));
  dword_140404A6C[225391226] = -65536;
  dword_140404A6C[297756277] = 1102577664;
  dword_140404A6C[225391227] = -65536;
  sub_140026E70();
  sub_140010110();
  srand(0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283827814], "concrete2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283827815], "concrete2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  v0 = 0;
  sub_1400EDED0(dword_140404A6C[283827818], "asphalt2.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
  sub_1400EDED0(dword_140404A6C[283827819], "asphalt2_material.png", 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
  v1 = dword_140404A6C[293512634];
  v2 = dword_140404A6C[421784473];
  v3 = 0;
  dword_140404A6C[421784253] = dword_140404A6C[421784473];
  dword_140404A6C[421784474] = 0;
  if ( dword_140404A6C[293512634] )
  {
    v4 = &dword_140404A6C[293512635];
    do
    {
      if ( *v4 == 1482293252 )
      {
        v5 = (intptr_t)&dword_140404A6C[16LL * (int)v3 + 293512638];
        v6 = (char *)v5;
        do
        {
          v7 = *v6;
          v6[(_QWORD)&dword_140404A6C[421784739] + 184LL * v2 - v5] = *v6;
          ++v6;
        }
        while ( v7 );
        sub_1401978F0(0, v5, 1482293252);
        sub_140197630(dword_140404A6C[421784253], *(__int64 *)&dword_140404A6C[293512629], 0);
        v8 = 46LL * (int)dword_140404A6C[421784253];
        v9 = 2LL * (int)dword_140404A6C[421784253];
        v10 = dword_140404A6C[v8 + 421784755];
        v11 = dword_140404A6C[4 * dword_140404A6C[421784253] + 283827814];
        if ( v10 <= 0 )
          sub_140138590(v11, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 255, 64, 128, 0);
        else
          sub_1400EE0A0(v11, v10, *(_QWORD *)&dword_140404A6C[v8 + 421784757], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
        v12 = dword_140404A6C[v8 + 421784759];
        v13 = dword_140404A6C[2 * v9 + 283827815];
        if ( v12 <= 0 )
          sub_140138590(v13, 0, 0x2901u, 0x2901u, 0x2601u, 0x2601u, 32, 192, 0, 0);
        else
          sub_1400EE0A0(v13, v12, *(_QWORD *)&dword_140404A6C[v8 + 421784761], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u, 0);
        (*(void (**)(unsigned, unsigned, float))&dword_140404A6C[18215073])(3553, 34046, 16.0f /* native XMM2 */);
        dword_140404A6C[dword_140404A6C[421784474] + 421784475] = dword_140404A6C[421784253];
        v1 = dword_140404A6C[293512634];
        v2 = dword_140404A6C[421784253] + 1;
        ++dword_140404A6C[421784474];
        ++dword_140404A6C[421784253];
      }
      ++v3;
      v4 += 16;
    }
    while ( v3 < v1 );
  }
  sub_1400ED9D0(dword_140404A6C[283830700], "map.png", 0, 0x812Fu, 0x812Fu, 0x2601u, 0x2601u);
  sub_1400C2DB0(v15, v14, v16);
  sub_140056560();
  v17 = 0;
  do
  {
    v18 = 1024;
    do
    {
      *(_WORD *)(v17 + *(_QWORD *)&dword_140404A6C[272248185]) = -1;
      v17 += 2;
      --v18;
    }
    while ( v18 );
  }
  while ( v17 < 0x200000 );
  dword_140404A6C[421769141] = 0;
  v184 = 0;
  v185 = 0;
  sub_14004DB20(0, (float *)&v184, 0x40u, 8, 0x40u, 4.0);
  v19 = &dword_140404A6C[254352108];
  do
  {
    *(v19 - 9) = 0;
    *v19 = 0;
    v19[9] = 0;
    v19[18] = 0;
    v19[27] = 0;
    v19[36] = 0;
    v19[45] = 0;
    v19[54] = 0;
    v19[63] = 0;
    v19[72] = 0;
    v19[81] = 0;
    v19[90] = 0;
    v19[99] = 0;
    v19[108] = 0;
    v19[117] = 0;
    v19[126] = 0;
    v19[135] = 0;
    v19[144] = 0;
    v19[153] = 0;
    v19[162] = 0;
    v19[171] = 0;
    v19[180] = 0;
    v19[189] = 0;
    v19[198] = 0;
    v19[207] = 0;
    v19[216] = 0;
    v19[225] = 0;
    v19[234] = 0;
    v19[243] = 0;
    v19[252] = 0;
    v19[261] = 0;
    v19[270] = 0;
    v19[279] = 0;
    v19[288] = 0;
    v19[297] = 0;
    v19[306] = 0;
    v19[315] = 0;
    v19[324] = 0;
    v19[333] = 0;
    v19[342] = 0;
    v19[351] = 0;
    v19[360] = 0;
    v19[369] = 0;
    v19[378] = 0;
    v19[387] = 0;
    v19[396] = 0;
    v19[405] = 0;
    v19[414] = 0;
    v19[423] = 0;
    v19[432] = 0;
    v19[441] = 0;
    v19[450] = 0;
    v19[459] = 0;
    v19[468] = 0;
    v19[477] = 0;
    v19[486] = 0;
    v19[495] = 0;
    v19[504] = 0;
    v19[513] = 0;
    v19[522] = 0;
    v19[531] = 0;
    v19[540] = 0;
    v19[549] = 0;
    v19[558] = 0;
    v19 += 576;
  }
  while ( (__int64)v19 < (__int64)&dword_140404A6C[254388972] );
  v20 = dword_140404A6C[283831312];
  v21 = 0;
  dword_140404A6C[225391228] = 0;
  dword_140404A6C[225426046] = 0;
  dword_140404A6C[225628799] = 0;
  dword_140404A6C[225634944] = 0;
  dword_140404A6C[225641089] = 0;
  dword_140404A6C[283836331] = 0;
  dword_140404A6C[283842204] = 0;
  dword_140404A6C[283848077] = 0;
  dword_140404A6C[283853950] = 0;
  dword_140404A6C[283859823] = 0;
  dword_140404A6C[283865696] = 0;
  dword_140404A6C[283871569] = 0;
  dword_140404A6C[283877442] = 0;
  dword_140404A6C[225641186] = 0;
  dword_140404A6C[180001054] = 0;
  if ( dword_140404A6C[283831312] != 1 )
  {
    if ( (int)dword_140404A6C[193070979] > 0 )
    {
      v22 = &dword_140404A6C[193070981];
      v23 = dword_140404A6C[193070979];
      do
      {
        v24 = dword_140404A6C[225391222];
        v25 = *(v22 - 1);
        v26 = v22[1];
        v27 = *v22;
        v22 += 3;
        if ( (int)dword_140404A6C[225391222] > v25 )
          v24 = v25;
        dword_140404A6C[225391222] = v24;
        v28 = dword_140404A6C[225391225];
        v29 = _mm_cvtsi32_si128(v25);
        if ( (int)dword_140404A6C[225391225] < v25 )
          v28 = v25;
        v30 = _mm_cvtsi32_si128(v27);
        dword_140404A6C[225391225] = v28;
        v31 = dword_140404A6C[225391224];
        v32 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
        if ( (int)dword_140404A6C[225391224] > v26 )
          v31 = v26;
        dword_140404A6C[225391224] = v31;
        v33 = dword_140404A6C[225391227];
        if ( (int)dword_140404A6C[225391227] < v26 )
          v33 = v26;
        dword_140404A6C[225391227] = v33;
        dword_140404A6C[34 * v21 + 225391230] = v25;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391231] = v27 - 1;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391232] = v26;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391236] = -1;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391237] = -1;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391238] = -1;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391239] = -1;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391240] = 0;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391241] = 0;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391242] = 0;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391243] = 0;
        *(float *)&dword_140404A6C[34 * dword_140404A6C[225391228] + 225391233] = v32 * 4.0;
        *(float *)&dword_140404A6C[34 * dword_140404A6C[225391228] + 225391234] = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v30), f32)[0] * 4.0;
        *(float *)&dword_140404A6C[34 * dword_140404A6C[225391228] + 225391235] = (float)v26 * 4.0;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391244] = 0;
        dword_140404A6C[34 * dword_140404A6C[225391228] + 225391245] = 0;
        v21 = ++dword_140404A6C[225391228];
        --v23;
      }
      while ( v23 );
    }
    if ( (int)dword_140404A6C[193074052] > 0 )
    {
      v34 = (signed int *)&dword_140404A6C[193074056];
      v35 = dword_140404A6C[193074052];
      v36 = &dword_140404A6C[193074058];
      do
      {
        v37 = v34[1];
        v38 = *v34;
        v39 = *(v34 - 2);
        v40 = *(v34 - 3);
        v175[4] = (uint64)(uintptr_t)(v36);
        sub_1400038E0(v40, v39, v38, v37);
        v36 += 13;
        v34 += 13;
        --v35;
      }
      while ( v35 );
    }
    dword_140404A6C[225391229] = 0;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628800] = 0;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628801] = 0;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628802] = 32;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628804] = 32;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = 6;
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628805] = 24;
    dword_140404A6C[12 * dword_140404A6C[225628799]++ + 225628806] = 24;
    v21 = dword_140404A6C[225391228];
  }
  v188 = 65537;
  v189 = 65537;
  v190 = 65537;
  v191 = 65537;
  if ( v20 == 1 )
  {
    asset_load_building_sbb_candidate((char *)&dword_140404A6C[456856205], (     char *)&dword_140404A6C[451221645], 0);
    sub_140028BD0();
    sub_140027D00();
    sub_140027D00();
    sub_140027D00();
    sub_140029120();
    sub_140023AC0(
      0,
      36 - dword_140404A6C[456856224],
      6 - dword_140404A6C[456856225],
      36 - dword_140404A6C[456856226],
      dword_140404A6C[460788387],
      dword_140404A6C[460788388],
      dword_140404A6C[460788389],
      0,
      0);
    v21 = dword_140404A6C[225391228];
    v20 = dword_140404A6C[283831312];
  }
  v41 = &dword_140404A6C[225170825];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[225170825]), 0, 0x1000u);
  v42 = dword_140404A6C[225154440];
  v43 = 0;
  if ( (int)dword_140404A6C[225154440] > 0 )
  {
    v44 = dword_140404A6C[273270149];
    do
    {
      v45 = 0;
      if ( v44 > 0 )
      {
        v46 = (     char *)&dword_140404A6C[272299397];
        do
        {
          if ( !strcmp_sr((     char *)&dword_140404A6C[16 * (__int64)v43 + 225154441], v46) )
            *v41 = v45;
          ++v45;
          v46 += 3792;
        }
        while ( v45 < v44 );
        v42 = dword_140404A6C[225154440];
      }
      ++v43;
      ++v41;
    }
    while ( v43 < v42 );
  }
  v47 = 1.0;
  if ( v20 != 1 )
  {
    v48 = 0;
    if ( (int)dword_140404A6C[225426046] > 0 )
    {
      do
        sub_140020580(v48++);
      while ( v48 < (int)dword_140404A6C[225426046] );
      v21 = dword_140404A6C[225391228];
    }
    v49 = 0;
    if ( v21 > 0 )
    {
      do
      {
        sub_140020130(v49);
        v21 = dword_140404A6C[225391228];
        ++v49;
      }
      while ( v49 < (int)dword_140404A6C[225391228] );
    }
    v50 = 0;
    if ( v21 > 0 )
    {
      v51 = &dword_140404A6C[225391258];
      v52 = &dword_140404A6C[225391241];
      do
      {
        v53 = *(v52 - 1);
        if ( v53 > 0 )
          *(v52 - 1) = v53 + 1;
        if ( (int)*v52 > 0 )
          ++*v52;
        v54 = v52[1];
        if ( v54 > 0 )
          v52[1] = v54 + 1;
        v55 = v52[2];
        if ( v55 > 0 )
          v52[2] = v55 + 1;
        ++v50;
        v56 = *(v51 - 28) - *(v51 - 16);
        v52 += 34;
        v51[1] = 0;
        *(float *)v51 = (float)v56 * 4.0;
        v57 = *(v51 - 18);
        *((float *)v51 + 2) = (float)(int)(*(v51 - 26) - *(v51 - 15)) * 4.0;
        v58 = *(v51 - 28) + v57;
        v51[4] = 0;
        v59 = _mm_cvtsi32_si128(v58);
        v60 = *(v51 - 17);
        *((float *)v51 + 3) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0] * 4.0;
        *((float *)v51 + 5) = (float)(int)(*(v51 - 26) + v60) * 4.0;
        v51 += 34;
      }
      while ( v50 < (int)dword_140404A6C[225391228] );
    }
    for ( i = 0; i < (int)dword_140404A6C[225426046]; ++i )
      sub_140139740(i);
    sub_140009340();
    v177 = 0;
    if ( (int)dword_140404A6C[210457991] > 0 )
    {
      v62 = 0;
      v186 = 0;
      v63 = &dword_140404A6C[210457995];
      do
      {
        v64 = 0;
        v176 = 0;
        v65 = nullptr;
        v66 = v63 + 3073;
        do
        {
          v67 = 0;
          v178 = 0;
          v181 = v65;
          v184 = 8;
          do
          {
            v68 = 0;
            v179 = 0;
            v187 = 0;
            v69 = 0;
            do
            {
              v70 = *(v66 - 3072);
              if ( v70 )
              {
                v71 = (__int64)v65 + v68 + v62;
                v72 = *(v63 - 3);
                v71 *= 2;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458508]) == 0;
                LOWORD(v188) = LOWORD(dword_140404A6C[2 * v71 + 210458508]) != 0;
                v73 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458509]) == 0;
                HIWORD(v188) = v73;
                v74 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458509]) == 0;
                LOWORD(v189) = v74;
                v75 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458510]) == 0;
                HIWORD(v189) = v75;
                v76 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458510]) == 0;
                LOWORD(v190) = v76;
                v77 = !v101;
                v101 = LOWORD(dword_140404A6C[2 * v71 + 210458511]) == 0;
                HIWORD(v190) = v77;
                v78 = !v101;
                v101 = HIWORD(dword_140404A6C[2 * v71 + 210458511]) == 0;
                LOWORD(v191) = v78;
                HIWORD(v191) = !v101;
                v79 = v67 + 8 * *v63;
                v80 = v64 + 8 * *(v63 - 1);
                v81 = v69 + 8 * *(v63 - 2);
                v180 = v81;
                if ( v70 == (dword_140404A6C[19928872] | 0x80000000) )
                {
                  v82 = sub_1400D5950(v72, v81, v80, v79 - 1) == 0;
                  v83 = sub_1400D5950(v72, v81 + 1, v80, v79);
                  v84 = v82 | 2;
                  if ( v83 )
                    v84 = v82;
                  v85 = v84 | 4;
                  if ( (unsigned int)sub_1400D5950(v72, v180, v80, v79 + 1) )
                    v85 = v84;
                  v86 = sub_1400D5950(v72, v180 - 1, v80, v79);
                  v87 = v85 | 8;
                  if ( v86 )
                    v87 = v85;
                  sub_14000F830(v72, v180, v80, v79, dword_140404A6C[v87 + 19928872] | 0x80000000, &v188);
                  v68 = v187;
                }
                else
                {
                  sub_14000F830(v72, v81, v80, v79, v70, &v188);
                }
                v62 = v186;
                v65 = v181;
                v64 = v176;
                v67 = v178;
                v69 = v179;
              }
              if ( *v66 )
                sub_140016F60(
                  *(v63 - 3),
                  v69 + 8 * *(v63 - 2),
                  v64 + 8 * *(v63 - 1),
                  v67 + 8 * *v63,
                  *v66 & 0xFFFF0000 | dword_140404A6C[(*v66 & 0x3FF) + 225170825]);
              v64 = v176;
              ++v69;
              ++v68;
              v179 = v69;
              ++v66;
              v187 = v68;
            }
            while ( v68 < 8 );
            ++v67;
            v65 += 2;
            v101 = v184-- == 1;
            v178 = v67;
            v181 = v65;
          }
          while ( !v101 );
          v64 = v176 + 1;
          v176 = v64;
        }
        while ( v64 < 8 );
        v62 += 897;
        v186 = v62;
        v63 += 3588;
        ++v177;
      }
      while ( v177 < (int)dword_140404A6C[210457991] );
    }
    sub_1400E6960();
    v88 = 0;
    v180 = 0;
    if ( (int)dword_140404A6C[225171849] > 0 )
    {
      v89 = &dword_140404A6C[225171869];
      v181 = &dword_140404A6C[225171869];
      do
      {
        v90 = (     char *)&dword_140404A6C[24 * v88 + 225171851];
        sub_1401978F0(0, (__int64)v90, 1482293250);
        sub_140196D60((char *)&dword_140404A6C[456856205], *(FILE **)&dword_140404A6C[293512629], 0);
        sub_140028BD0();
        if ( dword_140404A6C[284024893] )
        {
          v91 = strcmp_sr(v90, "bc-base01");
          v92 = strcmp_sr(v90, "cornerstore");
          v93 = 13;
          if ( v92 )
            v93 = 9;
          v94 = 0;
          if ( v91 )
            v94 = v93;
          if ( !strcmp_sr(v90, "bc-base02") )
            v94 = 1;
          v178 = v94;
          if ( !strcmp_sr(v90, "bc-base03") )
          {
            v94 = 2;
            v178 = 2;
          }
        }
        else
        {
          v95 = 0;
          while ( 1 )
          {
            v96 = v90[v95++];
            if ( v96 != sr_mem_140276314[v95 - 1] )
              break;
            if ( v95 == 7 )
            {
              v97 = 0;
              goto LABEL_104;
            }
          }
          v97 = v96 < (unsigned __int8)sr_mem_140276314[v95 - 1] ? -1 : 1;
LABEL_104:
          v98 = v97 != 0;
          v99 = 0;
          v94 = v98 ? 9 : 0;
          while ( 1 )
          {
            v100 = v90[v99++];
            v101 = v100 == sr_mem_14027631c[v99 - 1];
            if ( v100 != sr_mem_14027631c[v99 - 1] )
              break;
            if ( v99 == 7 )
            {
              v101 = v100 == sr_mem_14027631c[6];
              break;
            }
          }
          if ( v101 )
            v94 = 1;
          v102 = 0;
          while ( 1 )
          {
            v103 = v90[v102++];
            v104 = v103 == sr_mem_140276324[v102 - 1];
            if ( v103 != sr_mem_140276324[v102 - 1] )
              break;
            if ( v102 == 7 )
            {
              v104 = v103 == sr_mem_140276324[6];
              break;
            }
          }
          if ( v104 )
            v94 = 2;
          v105 = 0;
          while ( 1 )
          {
            v106 = v90[v105++];
            v107 = v106 == sr_mem_14027632c[v105 - 1];
            if ( v106 != sr_mem_14027632c[v105 - 1] )
              break;
            if ( v105 == 7 )
            {
              v107 = v106 == sr_mem_14027632c[6];
              break;
            }
          }
          if ( v107 )
            v94 = 3;
          v108 = 0;
          while ( 1 )
          {
            v109 = v90[v108++];
            v110 = v109 == sr_mem_140276334[v108 - 1];
            if ( v109 != sr_mem_140276334[v108 - 1] )
              break;
            if ( v108 == 7 )
            {
              v110 = v109 == sr_mem_140276334[6];
              break;
            }
          }
          if ( v110 )
            v94 = 4;
          v111 = 0;
          while ( 1 )
          {
            v112 = v90[v111++];
            v113 = v112 == sr_mem_14027633c[v111 - 1];
            if ( v112 != sr_mem_14027633c[v111 - 1] )
              break;
            if ( v111 == 7 )
            {
              v113 = v112 == sr_mem_14027633c[6];
              break;
            }
          }
          if ( v113 )
            v94 = 5;
          if ( !strcmp_sr(v90, "cardealer") )
            v94 = 11;
          if ( !strcmp_sr(v90, "gunstore") )
            v94 = 14;
          v114 = 0;
          while ( 1 )
          {
            v115 = v90[v114++];
            v116 = v115 == sr_mem_1402739f8[v114 - 1];
            if ( v115 != sr_mem_1402739f8[v114 - 1] )
              break;
            if ( v114 == 7 )
            {
              v116 = v115 == sr_mem_1402739f8[6];
              break;
            }
          }
          if ( v116 )
            v94 = 16;
          v117 = 0;
          while ( 1 )
          {
            v118 = v90[v117++];
            v119 = v118 == sr_mem_140276364[v117 - 1];
            if ( v118 != sr_mem_140276364[v117 - 1] )
              break;
            if ( v117 == 5 )
            {
              v119 = v118 == algn_140276369[-1];
              break;
            }
          }
          if ( v119 )
            v94 = 12;
          v120 = 0;
          while ( 1 )
          {
            v121 = v90[v120++];
            v122 = v121 == sr_mem_14027636c[v120 - 1];
            if ( v121 != sr_mem_14027636c[v120 - 1] )
              break;
            if ( v120 == 6 )
            {
              v122 = v121 == sr_mem_14027636c[5];
              break;
            }
          }
          if ( v122 )
            v94 = 13;
          v123 = 0;
          while ( 1 )
          {
            v124 = v90[v123++];
            v125 = v124 == sr_mem_140276378[v123 - 1];
            if ( v124 != sr_mem_140276378[v123 - 1] )
              break;
            if ( v123 == 8 )
            {
              v125 = v124 == sr_mem_140276378[7];
              break;
            }
          }
          if ( v125 )
            v94 = 10;
          v178 = v94;
        }
        v126 = dword_140404A6C[456856226];
        v127 = dword_140404A6C[456856226];
        v128 = dword_140404A6C[456856224];
        v129 = dword_140404A6C[456856224];
        v130 = dword_140404A6C[456856225];
        v177 = dword_140404A6C[456856225];
        dword_140404A6C[464720556] = dword_140404A6C[456856221] - dword_140404A6C[456856224];
        dword_140404A6C[464720557] = dword_140404A6C[456856223];
        v176 = dword_140404A6C[456856226];
        dword_140404A6C[464720553] = dword_140404A6C[456856224];
        dword_140404A6C[464720554] = dword_140404A6C[456856225];
        dword_140404A6C[464720555] = dword_140404A6C[456856226];
        dword_140404A6C[464720558] = dword_140404A6C[456856222] - dword_140404A6C[456856226];
        v131 = v94;
        if ( v94 < 6 )
          dword_140404A6C[5873 * v94 + 283831497] = 1078530011;
        v132 = *(v89 - 2);
        v133 = *(v89 - 1);
        v134 = *v89;
        *(_OWORD *)&dword_140404A6C[464720748] = xmmword_140278D30;
        dword_140404A6C[464720756] = 1065353216;
        v179 = 0;
        v135 = (float)(v132 - v128) * 4.0;
        v136 = v181[1];
        v137 = (float)(int)(v133 - v130) * 4.0;
        v138 = (float)(int)(v134 - v126) * 4.0;
        *(float *)&dword_140404A6C[464720745] = v135;
        *(float *)&dword_140404A6C[464720746] = v137;
        *(float *)&dword_140404A6C[464720747] = v138;
        *(_OWORD *)&dword_140404A6C[464720752] = xmmword_140278D30;
        if ( v136 > 0 )
        {
          v139 = *(float *)&dword_140404A6C[464720750];
          v140 = 0.0;
          v141 = *(float *)&dword_140404A6C[464720749];
          v142 = 0.0;
          v143 = *(float *)&dword_140404A6C[464720748];
          v144 = v126;
          v145 = v179;
          do
          {
            v146 = (float)v128 * 4.0;
            v147 = (float)v126 * 4.0;
            *(float *)&dword_140404A6C[464720745] = (float)((float)(v146 * v143) + v135) + (float)(v147 * v140);
            *(float *)&dword_140404A6C[464720746] = (float)((float)(v146 * v141) + v137) + (float)(v147 * v142);
            *(float *)&dword_140404A6C[464720747] = (float)((float)(v146 * v139) + v138) + (float)(v147 * v47);
            sub_14007B2A0(
              (__int64)&dword_140404A6C[464720748],
              (float *)&dword_140404A6C[464720751],
              sr_export_float_lane_container(1070141403));
            v148 = v129;
            v149 = dword_140404A6C[460788388] - v144;
            v144 = v148;
            v129 = v149 - 1;
            sub_140027D00();
            if ( v131 < 6 )
              *(float *)&dword_140404A6C[5873 * v131 + 283831497] = *(float *)&dword_140404A6C[5873 * v131 + 283831497]
                                                                  + 1.570796326795;
            v128 = dword_140404A6C[456856224];
            ++v145;
            v126 = dword_140404A6C[456856226];
            v143 = *(float *)&dword_140404A6C[464720748];
            v140 = *(float *)&dword_140404A6C[464720754];
            v141 = *(float *)&dword_140404A6C[464720749];
            v142 = *(float *)&dword_140404A6C[464720755];
            v139 = *(float *)&dword_140404A6C[464720750];
            v47 = *(float *)&dword_140404A6C[464720756];
            v150 = (float)-dword_140404A6C[456856224] * 4.0;
            v136 = v181[1];
            v151 = (float)(-1 - dword_140404A6C[456856226]) * 4.0;
            v135 = (float)((float)(v150 * *(float *)&dword_140404A6C[464720748]) + *(float *)&dword_140404A6C[464720745])
                 + (float)(*(float *)&dword_140404A6C[464720754] * v151);
            *(float *)&dword_140404A6C[464720745] = v135;
            v137 = (float)((float)(v150 * *(float *)&dword_140404A6C[464720749]) + *(float *)&dword_140404A6C[464720746])
                 + (float)(*(float *)&dword_140404A6C[464720755] * v151);
            *(float *)&dword_140404A6C[464720746] = v137;
            v138 = (float)((float)(v150 * *(float *)&dword_140404A6C[464720750]) + *(float *)&dword_140404A6C[464720747])
                 + (float)(*(float *)&dword_140404A6C[464720756] * v151);
            *(float *)&dword_140404A6C[464720747] = v138;
          }
          while ( v145 < v136 );
          v134 = *v181;
          v133 = *(v181 - 1);
          v132 = *(v181 - 2);
          v47 = 1.0;
          v94 = v178;
          v130 = v177;
          v176 = v144;
          v0 = 0;
          v127 = v176;
        }
        dword_140404A6C[460788390] = v129;
        dword_140404A6C[460788391] = v130;
        dword_140404A6C[460788392] = v127;
        sub_140029120();
        sub_140023AC0(
          0,
          v132 - v129,
          v133 - v177,
          v134 - v176,
          dword_140404A6C[460788387],
          dword_140404A6C[460788388],
          dword_140404A6C[460788389],
          v94,
          v136);
        v88 = v180 + 1;
        v89 = v181 + 24;
        v180 = v88;
        v181 += 24;
      }
      while ( v88 < (int)dword_140404A6C[225171849] );
    }
    v152 = 0;
    while ( 1 )
    {
      v153 = *((_BYTE *)&dword_140404A6C[283831313] + v152++);
      if ( v153 != sr_mem_140274da0[v152 - 1] )
        break;
      if ( v152 == 6 )
      {
        for ( j = 0; j < 2; ++j )
        {
          for ( k = 0; k < 2; ++k )
            sub_140016F60(0, j + 407, 0x11u, k + 367, 2u);
        }
        break;
      }
    }
    v177 = 0;
    if ( (int)dword_140404A6C[210457991] > 0 )
    {
      v156 = &dword_140404A6C[210457994];
      do
      {
        v157 = 0;
        v158 = v156 + 2562;
        do
        {
          v159 = 0;
          v160 = 8;
          do
          {
            v161 = 0;
            v162 = 8;
            do
            {
              if ( *v158 )
              {
                sub_1400D4FC0(0, v161 + 8 * *(v156 - 1), v157 + 8 * *v156, v159 + 8 * v156[1], *v158);
                sub_14003FA40(v161 + 8 * *(v156 - 1), v159 + 8 * v156[1], (float)(int)(v157 + 8 * *v156) * 4.0);
              }
              ++v161;
              ++v158;
              --v162;
            }
            while ( v162 );
            ++v159;
            --v160;
          }
          while ( v160 );
          ++v157;
        }
        while ( v157 < 8 );
        v156 += 3588;
        ++v177;
      }
      while ( v177 < (int)dword_140404A6C[210457991] );
    }
  }
  sub_1401977E0(0);
  sub_1400D12E0();
  v163 = 34LL * (int)dword_140404A6C[225426056];
  dword_140404A6C[179992858] = 1098907648;
  dword_140404A6C[179992859] = 1082130432;
  dword_140404A6C[179992860] = 1098907648;
  *(float *)&v164 = *(float *)&dword_140404A6C[v163 + 225391235] - 24.0;
  *(float *)&dword_140404A6C[179992855] = *(float *)&dword_140404A6C[v163 + 225391233] + 1480.0;
  *(float *)&v165 = *(float *)&dword_140404A6C[v163 + 225391234] + 1.0;
  dword_140404A6C[179992857] = v164;
  dword_140404A6C[284021989] = dword_140404A6C[225368458];
  dword_140404A6C[179992856] = v165;
  if ( (int)dword_140404A6C[225368458] > 0 )
  {
    v166 = 0;
    v167 = dword_140404A6C[225368458];
    do
    {
      dword_140404A6C[v166 + 284021990] = dword_140404A6C[v166 + 225368459];
      dword_140404A6C[v166 + 284021991] = dword_140404A6C[v166 + 225368460];
      dword_140404A6C[v166 + 284021992] = dword_140404A6C[v166 + 225368461];
      v166 += 3;
      --v167;
    }
    while ( v167 );
  }
  sub_140099DD0(dword_140404A6C[421784414], 1, 0x2901u, 0x2901u, 0x2601u, 0x2703u);
  v168 = 0;
  v169 = 0;
  v170 = 0;
  do
  {
    if ( dword_140404A6C[v170 + 83194357] && dword_140404A6C[v170 + 83200510] && (unsigned int)v168 <= 0xFFF )
    {
      sub_14000C4C0(v168);
      for ( m = 0; m < 4; ++m )
      {
        if ( v170 <= 28378350 )
        {
          v172 = (int)dword_140404A6C[m + 83200503 + v169];
          dword_140404A6C[m + 83200503 + v169] = -1;
          if ( (unsigned int)v172 <= 0x3FF )
          {
            dword_140404A6C[8969 * v172 + 73991662] = -1;
            sub_1401941F0(0, v172);
            sub_1401941F0(3, v172);
            sub_1401941F0(5, v172);
          }
        }
      }
      dword_140404A6C[v170 + 83200510] = 0;
      if ( v168 == 1008 )
        ++dword_140404A6C[284205157];
    }
    ++v168;
    v170 += 6930LL;
    v169 += 6930;
  }
  while ( v168 < 4096 );
  /* Rendering recovery: land mask 283830718 with all-zero R16UI discards every
     terrain fragment (prog08:66-67). Fall back to 0xFFFF (keep all), mirroring
     the standalone render-test. */
  {
    unsigned short *sr_m = (unsigned short *)(uintptr_t)*(_QWORD *)&dword_140404A6C[272248185];
    int sr_zero = 1;
    if (!sr_m)
    {
      sr_m = (unsigned short *)(uintptr_t)sr_path_malloc(0x200000);
      *(_QWORD *)&dword_140404A6C[272248185] = (unsigned long long)(uintptr_t)sr_m;
    }
    if (sr_m)
    {
      unsigned int sr_i;
      for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i)
      {
        if (sr_m[sr_i]) { sr_zero = 0; break; }
      }
      if (sr_zero)
      {
        for (sr_i = 0; sr_i < 1024u*1024u; ++sr_i) sr_m[sr_i] = 0xFFFFu;
        SR_DEBUG_LOG("land mask 283830718 missing/zero -> 0xFFFF R16UI fallback");
      }
    }
  }
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
  (*(void (           **)(__int64, _QWORD, __int64, __int64, int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    33332,
    1024,
    1024,
    0,
    36244,
    5123,
    *(_QWORD *)&dword_140404A6C[272248185]);
  v173 = (int *)&dword_140404A6C[283831239];
  do
    sub_14009DA10(*v173++, v0++);
  while ( v0 < 17 );
  if ( !v183 )
    sub_14024C22C("..");
  if ( !v182 )
    sub_14024C22C("..");
  dword_140404A6C[225391205] = 1;
  return 0; /* legacy result ignored; native returns void */
}
#undef v175
#undef v176
#undef v177
#undef v178
#undef v179
#undef v180
#undef v181
#undef v182
#undef v183
#undef v184
#undef v185
#undef v186
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192

// 140056D64: variable 'v15' is possibly undefined
// 140056D64: variable 'v14' is possibly undefined
// 140056D64: variable 'v16' is possibly undefined
// 140276369: using guessed type _BYTE algn_140276369[3];
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402799A0: using guessed type __int128 xmmword_1402799A0;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CF0: using guessed type double (__fastcall *)(_QWORD, _QWORD);
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 16B2A2ED4: using guessed type unsigned int;
// 16B2A2ED8: using guessed type unsigned int;
// 16B2A2EDC: using guessed type unsigned int;
// 16B2AAEE4: using guessed type unsigned int;
// 175EEA08C: using guessed type unsigned int;
// 175FBB094: using guessed type unsigned int;
// 175FD1400: using guessed type unsigned int;
// 175FD1444: using guessed type unsigned int;
// 175FD144C: using guessed type unsigned int;
// 175FD1450: using guessed type unsigned int;
// 175FD1454: using guessed type unsigned int;
// 175FD1458: using guessed type unsigned int;
// 175FD145C: using guessed type unsigned int;
// 175FD1460: using guessed type unsigned int;
// 175FF3464: using guessed type unsigned int;
// 1760B9468: using guessed type unsigned int;
// 1760BF46C: using guessed type unsigned int;
// 1760C5470: using guessed type unsigned int;
// 1760C55F4: using guessed type unsigned int;
// 181676080: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EC4918: using guessed type unsigned int;
// 183ECA4DC: using guessed type unsigned int;
// 183ED00A0: using guessed type unsigned int;
// 183ED5C64: using guessed type unsigned int;
// 183EDB828: using guessed type unsigned int;
// 183EE13EC: using guessed type unsigned int;
// 183EE6FB0: using guessed type unsigned int;
// 183EECB74: using guessed type unsigned int;
// 183F79E00: using guessed type unsigned int;
// 18402CC00: using guessed type unsigned int;
// 1863AE154: using guessed type unsigned int;
// 1873DE440: using guessed type unsigned int;
// 1A4CF0940: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;
// 1A4CFF8D0: using guessed type unsigned int;
// 1A4CFF8D4: using guessed type unsigned int;
// 1AD2C94E8: using guessed type unsigned int;
// 1AD2C94EC: using guessed type unsigned int;
// 1AD2C94F0: using guessed type unsigned int;
// 1AD2C94F4: using guessed type unsigned int;
// 1AE1C9504: using guessed type unsigned int;
// 1AE1C9508: using guessed type unsigned int;
// 1AE1C950C: using guessed type unsigned int;
// 1AF0C9510: using guessed type unsigned int;
// 1AF0C9514: using guessed type unsigned int;
// 1AF0C9518: using guessed type unsigned int;
// 1AF0C9520: using guessed type unsigned int;
// 1AF0C9810: using guessed type unsigned int;
// 1AF0C9814: using guessed type unsigned int;
// 1AF0C9818: using guessed type unsigned int;
// 1AF0C981C: using guessed type unsigned int;
// 1AF0C9820: using guessed type unsigned int;
// 1AF0C9824: using guessed type unsigned int;
// 1AF0C982C: using guessed type unsigned int;
// 1AF0C9834: using guessed type unsigned int;
// 1AF0C9838: using guessed type unsigned int;
// 1AF0C983C: using guessed type unsigned int;

//----- (00000001400584B0) ----------------------------------------------------
__m128i *           sub_1400584B0(int a1,      __m128i *a2)
{
  __int64 v3; // r10
  int v4; // eax
  int *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ebx
  __m128i *result; // rax
  int v12; // ebx
  signed int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // rsi
  signed int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1

  v3 = 1760LL * a1;
  v4 = 1;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278845988];
  v6 = 2;
  v7 = 4;
  do
  {
    if ( (v4 & dword_140404A6C[v3 + 278845985 + ((v6 - 2) >> 5)]) != 0 )
      dword_140404A6C[39 * *(v5 - 1) + 290382645] = 0;
    if ( (__ROL4__(v4, 1) & dword_140404A6C[v3 + 278845985 + ((v6 - 1) >> 5)]) != 0 )
      dword_140404A6C[39 * *v5 + 290382645] = 0;
    if ( (__ROL4__(v4, 2) & dword_140404A6C[v3 + 278845985 + (v6 >> 5)]) != 0 )
      dword_140404A6C[39 * v5[1] + 290382645] = 0;
    if ( (__ROL4__(v4, 3) & dword_140404A6C[v3 + 278845985 + ((v6 + 1) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[2] + 290382645] = 0;
    if ( (__ROL4__(v4, 4) & dword_140404A6C[v3 + 278845985 + ((v6 + 2) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[3] + 290382645] = 0;
    if ( (__ROL4__(v4, 5) & dword_140404A6C[v3 + 278845985 + ((v6 + 3) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[4] + 290382645] = 0;
    if ( (__ROL4__(v4, 6) & dword_140404A6C[v3 + 278845985 + ((v6 + 4) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[5] + 290382645] = 0;
    if ( (__ROL4__(v4, 7) & dword_140404A6C[v3 + 278845985 + ((v6 + 5) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[6] + 290382645] = 0;
    if ( (__ROL4__(v4, 8) & dword_140404A6C[v3 + 278845985 + ((v6 + 6) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[7] + 290382645] = 0;
    if ( (__ROL4__(v4, 9) & dword_140404A6C[v3 + 278845985 + ((v6 + 7) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[8] + 290382645] = 0;
    if ( (__ROL4__(v4, 10) & dword_140404A6C[v3 + 278845985 + ((v6 + 8) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[9] + 290382645] = 0;
    if ( (__ROL4__(v4, 11) & dword_140404A6C[v3 + 278845985 + ((v6 + 9) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[10] + 290382645] = 0;
    if ( (__ROL4__(v4, 12) & dword_140404A6C[v3 + 278845985 + ((v6 + 10) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[11] + 290382645] = 0;
    if ( (__ROL4__(v4, 13) & dword_140404A6C[v3 + 278845985 + ((v6 + 11) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[12] + 290382645] = 0;
    if ( (__ROL4__(v4, 14) & dword_140404A6C[v3 + 278845985 + ((v6 + 12) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[13] + 290382645] = 0;
    if ( (__ROL4__(v4, 15) & dword_140404A6C[v3 + 278845985 + ((v6 + 13) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[14] + 290382645] = 0;
    v6 += 16;
    v4 = __ROL4__(v4, 16);
    v5 += 16;
    --v7;
  }
  while ( v7 );
  v8 = 1760LL * a1;
  v9 = -1;
  *(_QWORD *)&dword_140404A6C[v8 + 278845985] = 0;
  do
    ++v9;
  while ( SR_VEC_PTR_LANES(128, a2, i8)[v9] );
  v10 = v9 + 1;
  if ( v10 > 1023 )
    v10 = 1023;
  result = sub_1401FC920((__m128i *)&dword_140404A6C[v8 + 278846111], a2, v10);
  v12 = v10 >> 6;
  v13 = 0;
  HIBYTE(dword_140404A6C[v8 + 278846366]) = 0;
  if ( v12 >= 0 )
  {
    v14 = dword_140404A6C[283831474];
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 0;
      result = (__m128i *)&dword_140404A6C[290382645];
      while ( SR_VEC_PTR_LANES(128, result, i32)[0] )
      {
        ++v16;
        ++v17;
        result = (__m128i *)((char *)result + 156);
        if ( (__int64)result >= (__int64)&dword_140404A6C[291021621] )
          goto LABEL_47;
      }
      if ( v16 != -1 )
      {
        v18 = 39 * v17;
        *(_QWORD *)&dword_140404A6C[v18 + 290382645] = 1;
        dword_140404A6C[v18 + 290382648] = v14;
        dword_140404A6C[v18 + 290382647] = 0;
        dword_140404A6C[v18 + 290382649] = a1;
        dword_140404A6C[v18 + 290382650] = v13;
        dword_140404A6C[v18 + 290382651] = 64;
        v19 = 39LL * v16;
        v20 = *(_OWORD *)&dword_140404A6C[v8 + 278846115 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382652] = *(_OWORD *)&dword_140404A6C[v8 + 278846111 + v15];
        v21 = *(_OWORD *)&dword_140404A6C[v8 + 278846119 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382656] = v20;
        v22 = *(_OWORD *)&dword_140404A6C[v8 + 278846123 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382660] = v21;
        *(_OWORD *)&dword_140404A6C[v19 + 290382664] = v22;
        result = (__m128i *)sub_1400C3BA0(a1, v16, 0xFFFFFFFF);
      }
LABEL_47:
      ++v13;
      v15 += 16;
    }
    while ( v13 <= v12 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (00000001400588F0) ----------------------------------------------------
__int64            sub_1400588F0(unsigned int a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r11
  char *v7; // rax
  char v8; // cl
  __int64 v9; // rax
  unsigned int v10; // eax

  v4 = dword_140404A6C[346706173];
  v5 = 38LL * (int)dword_140404A6C[346706173];
  v7 = a2;
  dword_140404A6C[v5 + 346696445] = a1;
  do
  {
    v8 = *v7;
    v7[(_QWORD)&dword_140404A6C[346696445] + v5 * 4 - (_QWORD)a2 + 24] = *v7;
    ++v7;
  }
  while ( v8 );
  v9 = -1;
  do
    ++v9;
  while ( a2[v9] );
  dword_140404A6C[v5 + 346696448] = v9;
  v10 = 600;
  if ( (a1 & 0xFFFFFFFB) != 0 )
    v10 = 480;
  dword_140404A6C[v5 + 346696447] = v10;
  dword_140404A6C[v5 + 346696449] = a3;
  dword_140404A6C[v5 + 346696450] = a4;
  dword_140404A6C[346706173] = (unsigned __int8)(v4 + 1);
  return v4 + 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E98E60: using guessed type unsigned int;

//----- (00000001400589A0) ----------------------------------------------------
__int64            sub_1400589A0(unsigned int a1, int a2, __int64 a3)
{
  signed int v3; // r12d
  __int64 v4; // rsi
  int v5; // r14d
  unsigned int v6; // r9d
  signed int v7; // ebx
  int v8; // edx
  __m128i si128; // xmm4
  __m128i v10; // xmm5
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm4
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  signed int v21; // eax
  int v22; // edi
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  char *v29; // r8
  unsigned int *v30; // rdx
  char v31; // al
  __int64 v32; // rbp
  int v33; // r13d
  __int64 v34; // r15
  int v35; // edi
  __int64 v36; // rbx
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // ecx
  bool v44; // zf
  unsigned int v45; // eax
       char *v46; // r9
       __m128i *v47; // rbx
  int v48; // r8d
  char *v49; // r9
  float v50; // xmm1_4
  double v51; // xmm2_8
  float v52; // xmm0_4
  int v53; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400589A0[1440];
#define v55 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 0)) /* [rsp+0h] */
#define v56 (*(int (*))(void *)(sr_frame_1400589A0 + 32)) /* [rsp+20h] */
#define v57 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 48)) /* [rsp+30h] */
#define v58 (*(unsigned int (*))(void *)(sr_frame_1400589A0 + 52)) /* [rsp+34h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 56)) /* [rsp+38h] */
#define v60 (*(float (*)[4])(void *)(sr_frame_1400589A0 + 64)) /* [rsp+40h] */
#define v61 (*(unsigned int * (*))(void *)(sr_frame_1400589A0 + 80)) /* [rsp+50h] */
#define v62 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 88)) /* [rsp+58h] */
#define v63 (*(_OWORD (*)[2])(void *)(sr_frame_1400589A0 + 96)) /* [rsp+60h] */
#define v64 (*(int (*))(void *)(sr_frame_1400589A0 + 128)) /* [rsp+80h] */
#define v65 (*(_DWORD (*)[20])(void *)(sr_frame_1400589A0 + 144)) /* [rsp+90h] */
#define v66 (*(char (*)[1024])(void *)(sr_frame_1400589A0 + 400)) /* [rsp+190h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400589A0 + 1424)) /* [rsp+590h] */

  v3 = dword_140404A6C[179992853] + 630000;
  v59 = a3;
  v4 = a2;
  v5 = dword_140404A6C[487148678] + 19;
  v57 = a1;
  if ( (signed int)(dword_140404A6C[179992853] + 630000) > 3870000 )
    v3 = 3870000;
  v58 = dword_140404A6C[487148678] + 19;
  v6 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v6 = 0;
  dword_140404A6C[487148678] = v6;
  if ( a1 == 1 )
  {
    sub_14012D310(v5, v3);
LABEL_29:
    a3 = v59;
    goto LABEL_30;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] || !dword_140404A6C[487149972] )
      return 0; /* compatibility result discarded by all reviewed callers */
    v7 = 0x10000;
    v8 = 0;
    if ( (int)dword_140404A6C[487149972] >= 8 && dword_140302080 >= 2 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791B0);
      v10 = si128;
      v11 = 0;
      v12 = &dword_140404A6C[487150492];
      do
      {
        v13 = _mm_cvtsi32_si128(v12[259]);
        v8 += 8;
        v14 = _mm_cvtsi32_si128(*(v12 - 259));
        v11 += 8;
        v15 = _mm_cvtsi32_si128(*v12);
        v16 = _mm_cvtsi32_si128(*(v12 - 518));
        v12 += 2072;
        si128 = _mm_min_epi32(si128, _mm_unpacklo_epi64(_mm_unpacklo_epi32(v16, v14), _mm_unpacklo_epi32(v15, v13)));
        v10 = _mm_min_epi32(
                v10,
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v12 - 1554)), _mm_cvtsi32_si128(*(v12 - 1295))),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v12 - 1036)), _mm_cvtsi32_si128(*(v12 - 777)))));
      }
      while ( v11 < dword_140404A6C[487149972] - (signed int)dword_140404A6C[487149972] % 8 );
      v17 = _mm_min_epi32(si128, v10);
      v18 = _mm_min_epi32(v17, _mm_srli_si128(v17, 8));
      v7 = _mm_cvtsi128_si32(_mm_min_epi32(v18, _mm_srli_si128(v18, 4)));
    }
    if ( v8 < (int)dword_140404A6C[487149972] )
    {
      v19 = &dword_140404A6C[259 * v8 + 487149974];
      v20 = dword_140404A6C[487149972] - v8;
      do
      {
        v21 = *v19;
        v19 += 259;
        if ( v7 <= v21 )
          v21 = v7;
        v7 = v21;
        --v20;
      }
      while ( v20 );
    }
    v22 = 0;
    v23 = rand() % (signed int)dword_140404A6C[487149972];
    do
    {
      if ( (int)dword_140404A6C[259 * v23 + 487149974] <= v7 )
        break;
      ++v22;
      v23 = rand() % (signed int)dword_140404A6C[487149972];
    }
    while ( v22 < 1024 );
    v24 = v23;
    v25 = 259LL * v23;
    ++dword_140404A6C[v25 + 487149974];
    v26 = (int)dword_140404A6C[v25 + 487149973];
    dword_140404A6C[487148752] = dword_140404A6C[487148677] + 100;
    sub_140158AB0(v65, "SECRET%02d.TXT", dword_140404A6C[487148677]);
    v27 = 2570 * v24;
    v28 = (int)dword_140404A6C[2570 * v24 + 275754072];
    if ( (int)v28 < 256 )
    {
      dword_140404A6C[6 * v28 + 275754073 + v27] = dword_140404A6C[487148752];
      v29 = (char *)v65;
      v30 = &dword_140404A6C[6 * (int)dword_140404A6C[v27 + 275754072] + 275754074 + v27];
      do
      {
        v31 = *v29++;
        *(_BYTE *)v30 = v31;
        v30 = (unsigned int *)((char *)v30 + 1);
      }
      while ( v31 );
      dword_140404A6C[6 * (int)dword_140404A6C[v27 + 275754072]++ + 275754078 + v27] = 0;
    }
    if ( dword_140404A6C[14019 * v26 + 225641203] != 4 )
      return 0; /* compatibility result discarded by all reviewed callers */
    sub_14012E620(v26, v5);
    goto LABEL_29;
  }
LABEL_30:
  v62 = v4;
  if ( (int)v4 > 0 )
  {
    v32 = 0;
    v61 = &dword_140404A6C[1268 * v5 + 278521297];
    v33 = v3 / 3600;
    do
    {
      v34 = *(int *)(a3 + 4 * v32);
      v35 = 0;
      v36 = 0;
      v37 = &dword_140404A6C[5873 * v34 + 283831867];
      while ( *(v37 - 279) )
      {
        if ( !*v37 )
        {
          ++v36;
          ++v35;
          break;
        }
        if ( !v37[279] )
        {
          v36 += 2;
          v35 += 2;
          break;
        }
        if ( !v37[558] )
        {
          v36 += 3;
          v35 += 3;
          break;
        }
        v36 += 4;
        v37 += 1116;
        v35 += 4;
        if ( v36 >= 16 )
          break;
      }
      v38 = 5873 * v34;
      v39 = 23492 * v34 + 1116LL * v35;
      sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v39)), 0, 0x45Cu);
      v40 = (int)dword_140404A6C[487148744];
      v41 = 23492 * v34 + 1116 * v36;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v41) = dword_140404A6C[487148677];
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v41) = v57;
      v42 = dword_140404A6C[487148752];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v41) = v40;
      *(unsigned int *)((char *)&dword_140404A6C[283831594] + v41) = v42;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v41) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v41) = dword_140404A6C[1760 * v40 + 278845898];
      v43 = 250 * (rand() % 5 + 4);
      v44 = v58 == 23;
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v41) = v43;
      if ( v44 )
      {
        v43 *= 4;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v41) = v43;
      }
      v45 = dword_140404A6C[487148753];
      v46 = (     char *)v61;
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v41) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v41) = v3;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v41) = v45;
      v56 = v43;
      *(float *)((char *)&dword_140404A6C[283831609] + v41) = (float)v43 * 0.000024999999;
      v47 = (     __m128i *)((char *)&dword_140404A6C[283831611] + v39);
      sub_140158AB0(
        (_BYTE *)&dword_140404A6C[283831611] + v39,
        "Acquisition(%d):\n"
        "We have received reports that Megacorp has disks containing\n"
        "information that will be beneficial to one of our subsidiaries.\n"
        "The %s is in a town car driving around the city.\n"
        "\n"
        "Value:               $%d Bonus\n",
        v35 + 1,
        v46,
        v56);
      v48 = v33 / 60 % -12;
      if ( !v48 )
        v48 = 12;
      sub_140158AB0(v66, "\nThis mission expires at %d:%d%d\n\n", v48, v33 % 60 / 10 % 6, v33 % 60 % 10);
      v49 = &SR_VEC_LANES(128, v47[-1], i8)[15];
      do
        v44 = *++v49 == 0;
      while ( !v44 );
      strcpy(v49, v66);
      sub_140051BD0(v34, v35);
      v64 = 1065353216;
      v50 = *(float *)&dword_140404A6C[v38 + 283831499];
      *(_QWORD *)&v51 = dword_140404A6C[v38 + 283831497];
      LODWORD(v60[0]) = dword_140404A6C[v38 + 283831498];
      *(float *)&v51 = *(float *)&v51 - 1.5707964;
      v52 = *(float *)&dword_140404A6C[v38 + 283831500];
      v60[1] = v50;
      v60[2] = v52;
      v63[0] = xmmword_140278D30;
      v63[1] = xmmword_140278D30;
      sub_14007B2A0((__int64)v63, (float *)v63 + 3, v51);
      v53 = sr_CreateItem(34, v60, nullptr, (float *)v63);
      sub_1400584B0(v53, v47);
      a3 = v59;
      ++v32;
    }
    while ( v32 < v62 );
  }
  ++dword_140404A6C[487148677];
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v67

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402791B0: using guessed type __int128 xmmword_1402791B0;
// 140302080: using guessed type int dword_140302080;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657DAC: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (00000001400590B0) ----------------------------------------------------
void            sub_1400590B0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int *v4; // r13
  int *v5; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  unsigned int v14; // ebp
  unsigned int v15; // r12d
  __int64 v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm6_4
  unsigned int v19; // eax
  unsigned __int64 i; // r14
  int v21; // esi
  __int64 v22; // rbx
  unsigned int *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rdi
  float v26; // xmm1_4
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // r11d
  __int64 v32; // r9
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400590B0[160];
#define v38 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 8)) /* [rsp+0h] */
#define v39 (*(int (*))(void *)(sr_frame_1400590B0 + 40)) /* [rsp+20h] */
#define v40 (*(unsigned __int64 (*))(void *)(sr_frame_1400590B0 + 48)) /* [rsp+28h] */
#define v41 (*(float (*))(void *)(sr_frame_1400590B0 + 56)) /* [rsp+30h] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_1400590B0 + 64)) /* [rsp+38h] */
#define v43 (*(int (*))(void *)(sr_frame_1400590B0 + 68)) /* [rsp+3Ch] */
#define v44 (*(unsigned int * (*))(void *)(sr_frame_1400590B0 + 72)) /* [rsp+40h] */
#define v45 (*(_OWORD (*)[2])(void *)(sr_frame_1400590B0 + 80)) /* [rsp+48h] */
#define v46 (*(int (*))(void *)(sr_frame_1400590B0 + 112)) /* [rsp+68h] */
#define v47 (*(_DWORD (*)[8])(void *)(sr_frame_1400590B0 + 120)) /* [rsp+70h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_1400590B0 + 152)) /* [rsp+90h] */

  if ( a2 >= 3 )
  {
    v3 = dword_140404A6C[179992853] + 414000;
    v4 = a3;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v3 = 3870000;
    v5 = v47;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    v42 = v3;
    v44 = a3;
    v43 = a2;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( v8 >= 2 )
      {
        v12 = 1000;
        *v5 = 1000;
        if ( (rand() & 1) == 0 )
        {
          v12 = 1500;
          *v5 = 1500;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
        {
          v12 += 500;
          *v5 = v12;
        }
        if ( (rand() & 3) == 0 )
          v12 += 500;
        if ( v9 == 23 )
          v12 *= 5;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 0;
      }
      *v5 = v11;
      ++v8;
      ++v5;
    }
    while ( (int)v8 < a2 );
    v13 = 0;
    v14 = dword_140404A6C[487148744];
    v15 = dword_140404A6C[487148677];
    do
    {
      v16 = 5873LL * (int)v4[v13];
      v45[0] = xmmword_140278D30;
      v45[1] = xmmword_140278D30;
      v46 = 1065353216;
      v17 = (float)(*(float *)&dword_140404A6C[v16 + 283831491] + *(float *)&dword_140404A6C[v16 + 283831494]) * 0.5;
      v18 = (float)(*(float *)&dword_140404A6C[v16 + 283831493] + *(float *)&dword_140404A6C[v16 + 283831496]) * 0.5;
      *((float *)&v40 + 1) = (float)(*(float *)&dword_140404A6C[v16 + 283831492]
                                   + *(float *)&dword_140404A6C[v16 + 283831495])
                           * 0.5;
      *(float *)&v40 = v17 + (float)((float)(v15 & 7) * 0.75);
      v41 = v18 - 1.0;
      if ( !v13 )
      {
        v19 = sr_CreateItem(v9, (float *)&v40, nullptr, (float *)v45);
        v15 = dword_140404A6C[487148677];
        v14 = v19;
        dword_140404A6C[487148744] = v19;
        v41 = v18 + 1.0;
      }
      ++v13;
    }
    while ( v13 < 2 );
    for ( i = 0; ; ++i )
    {
      v21 = 0;
      v39 = v4[i];
      v22 = 0;
      v23 = &dword_140404A6C[5873 * v39 + 283831867];
      while ( *(v23 - 279) )
      {
        if ( !*v23 )
        {
          ++v22;
          ++v21;
          break;
        }
        if ( !v23[279] )
        {
          v22 += 2;
          v21 += 2;
          break;
        }
        if ( !v23[558] )
        {
          v22 += 3;
          v21 += 3;
          break;
        }
        v22 += 4;
        v23 += 1116;
        v21 += 4;
        if ( v22 >= 16 )
          break;
      }
      v24 = 5873LL * v39;
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v21 + 283831588 + v24]), 0, 0x45Cu);
      v40 = 1116 * v22;
      v25 = 1116 * v22 + v24 * 4;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v25) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v25) = v15;
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v25) = v14;
      if ( v7 >= 2 )
      {
        if ( i <= 1 )
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 8;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        v27 = v47[i];
        if ( v7 < 3 )
          v27 *= 2;
        v26 = (float)v27;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v25) = v27;
        *(float *)((char *)&dword_140404A6C[283831609] + v25) = (float)v27 * 0.000024999999;
      }
      else
      {
        v26 = 0.0;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v25) = 7;
        *(_QWORD *)((char *)&dword_140404A6C[283831603] + v25) = dword_140404A6C[1760 * v14 + 278845898];
        *(unsigned int *)((char *)&dword_140404A6C[283831609] + v25) = 0;
        if ( !v7 )
          goto LABEL_45;
      }
      v26 = v26 * -0.0000125;
LABEL_45:
      v28 = v42;
      *(float *)((char *)&dword_140404A6C[283831610] + v25) = v26;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v25) = v28;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v25) = *v44;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = 0;
      if ( v7 == 2 )
      {
        v29 = v47[i];
        v30 = rand();
        v31 = v39;
        v32 = 3LL * v39;
        v33 = v29 / 1000
            + v30
            % (int)(((int)((unsigned __int64)(91625969LL * v29) >> 32) >> 4)
                  + 1
                  + ((unsigned int)((unsigned __int64)(91625969LL * v29) >> 32) >> 31));
        if ( v33 < 1 )
          v33 = 1;
        v34 = 500 * v33;
        v35 = dword_140404A6C[6 * v39 + 335047061];
        if ( v35 <= 0 )
        {
          v36 = 0;
        }
        else
        {
          v37 = 50
              * ((25
                - (int)(float)((float)((float)v35 * *(float *)&dword_140404A6C[6 * v39 + 335047062])
                             * (float)((float)v34 * -0.000024999999)))
               / 50);
          v36 = v37;
          if ( v34 >= v37 )
            v37 = v34;
          v34 = v37;
        }
        dword_140404A6C[v24 + 283831608 + v40 / 4] = v36;
        dword_140404A6C[2 * v32 + 335047066] += v34;
        v14 = dword_140404A6C[487148744];
        v15 = dword_140404A6C[487148677];
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v25) = v34;
      }
      else
      {
        v31 = v39;
      }
      sub_1400519F0(v31, v21);
      v4 = v44;
      if ( (int)++v7 >= v43 )
      {
        dword_140404A6C[487148677] = v15 + 1;
        return;
      }
    }
  }
}
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (0000000140059640) ----------------------------------------------------
void            sub_140059640(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // r8d
  int v7; // r13d
  unsigned int v8; // r9d
  int v9; // ebx
  signed int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  __m128i v20; // xmm0
  unsigned int v21; // eax

  v4 = dword_140404A6C[179992853] + 306000;
  v5 = a2;
  v6 = a1;
  v7 = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[179992853] + 306000) > 3870000 )
    v4 = 3870000;
  v8 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v8 = 0;
  dword_140404A6C[487148678] = v8;
  if ( a1 == 1 )
  {
    sub_14012D310(v7, v4);
LABEL_14:
    v6 = a1;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] )
      return;
    v9 = 0;
    v10 = rand() % (signed int)dword_140404A6C[225641186];
    do
    {
      if ( dword_140404A6C[14019 * v10 + 225641203] == 4 )
        break;
      ++v9;
      v10 = rand() % (signed int)dword_140404A6C[225641186];
    }
    while ( v9 < 1024 );
    if ( dword_140404A6C[14019 * v10 + 225641203] != 4 )
      return;
    sub_14012E620(v10, v7);
    goto LABEL_14;
  }
LABEL_15:
  v11 = v5;
  if ( (int)v5 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = *(int *)(a3 + 4 * v12);
      v14 = 0;
      v15 = 0;
      v16 = &dword_140404A6C[5873 * v13 + 283831867];
      while ( *(v16 - 279) )
      {
        if ( !*v16 )
        {
          ++v15;
          ++v14;
          break;
        }
        if ( !v16[279] )
        {
          v15 += 2;
          v14 += 2;
          break;
        }
        if ( !v16[558] )
        {
          v15 += 3;
          v14 += 3;
          break;
        }
        v15 += 4;
        v16 += 1116;
        v14 += 4;
        if ( v15 >= 16 )
          break;
      }
      v17 = 1116 * v15 + 23492LL * *(int *)(a3 + 4 * v12);
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v17) = dword_140404A6C[487148677];
      v18 = 1760LL * (int)dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v17) = dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v17) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v17) = v6;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v17) = dword_140404A6C[v18 + 278845898];
      v19 = 250 * (rand() % 5 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      if ( v7 == 23 )
      {
        v19 *= 4;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      }
      v20 = _mm_cvtsi32_si128(v19);
      v21 = dword_140404A6C[487148753];
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v17) = v4;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v17) = v21;
      *(float *)((char *)&dword_140404A6C[283831609] + v17) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v20), f32)[0] * 0.000024999999;
      sub_1400519F0(v13, v14);
      v6 = a1;
      ++v12;
    }
    while ( v12 < v11 );
  }
  ++dword_140404A6C[487148677];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;
// 1B4657DB0: using guessed type unsigned int;

//----- (0000000140059920) ----------------------------------------------------
__int64            sub_140059920(__int64 a1, int a2, char *a3)
{
  signed __int64 v3; // r14
  unsigned int v5; // eax
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // r12d
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  unsigned int v26; // eax
  float v27; // xmm0_4
  float v28; // xmm8_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  int v32; // edi
  int v33; // ebx
  __int64 v34; // rsi
  float v35; // xmm0_4
  unsigned int v36; // r15d
  unsigned __int64 v37; // rbx
  unsigned int v38; // r12d
  unsigned int v39; // edi
  unsigned int v40; // r14d
  unsigned int *v41; // r13
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rcx
  unsigned int *v45; // rax
  __int64 v46; // r10
  __int64 v47; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140059920[160];
#define v49 (*(__int64 (*))(void *)(sr_frame_140059920 + 8)) /* [rsp+8h] */
#define v50 (*(float (*))(void *)(sr_frame_140059920 + 40)) /* [rsp+28h] */
#define v51 (*(float (*))(void *)(sr_frame_140059920 + 44)) /* [rsp+2Ch] */
#define v52 (*(float (*))(void *)(sr_frame_140059920 + 48)) /* [rsp+30h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_140059920 + 56)) /* [rsp+38h] */
#define v54 (*(signed __int64 (*))(void *)(sr_frame_140059920 + 64)) /* [rsp+40h] */
#define v55 (*(char * (*))(void *)(sr_frame_140059920 + 72)) /* [rsp+48h] */
#define v56 (*(_OWORD (*)[2])(void *)(sr_frame_140059920 + 80)) /* [rsp+50h] */
#define v57 (*(int (*))(void *)(sr_frame_140059920 + 112)) /* [rsp+70h] */
#define v58 (*(_DWORD (*)[8])(void *)(sr_frame_140059920 + 120)) /* [rsp+78h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_140059920 + 152)) /* [rsp+98h] */

  v3 = a2;
  v55 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    LODWORD(v53) = v5;
    v7 = 0;
    v8 = 0;
    v9 = dword_140404A6C[487148678] + 19;
    v10 = dword_140404A6C[487148678] + 1;
    if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
      v10 = 0;
    dword_140404A6C[487148678] = v10;
    do
    {
      if ( (unsigned int)v8 >= 2 )
      {
        v12 = 250 * (rand() % 5 + 4);
        if ( v7 > 1 )
          v12 += 250 * (rand() % 5);
        if ( v9 == 23 )
          v12 *= 4;
        v11 = 2 * v12;
      }
      else
      {
        v11 = 100;
      }
      v58[v7] = v11;
      ++v8;
      ++v7;
    }
    while ( v8 < (int)v3 );
    v54 = v3;
    if ( (_DWORD)v3 )
    {
      v13 = 0;
      v14 = a3 - (char *)&dword_140404A6C[487148744];
      do
      {
        v15 = &dword_140404A6C[v13 + 487148744];
        v16 = *(int *)((char *)v15 + v14);
        v56[0] = xmmword_140278D30;
        v56[1] = xmmword_140278D30;
        v57 = 1065353216;
        v17 = *(float *)&dword_140404A6C[5873 * v16 + 283831498];
        v18 = *(float *)&dword_140404A6C[5873 * v16 + 283831499];
        v19 = *(float *)&dword_140404A6C[5873 * v16 + 283831500];
        sub_14007B2A0(
          (__int64)v56,
          (float *)v56 + 3,
          sr_export_float_lane_container((unsigned __int64)dword_140404A6C[5873 * v16 + 283831497]));
        sub_14007B2A0((__int64)v56, (float *)v56 + 3, sr_export_float_lane_container(1078530011));
        v20 = *(float *)v56;
        v21 = *((float *)v56 + 1);
        v22 = *((float *)v56 + 2);
        v23 = (float)(*(float *)v56 * 0.5) + v17;
        v50 = v23;
        v24 = (float)(*((float *)v56 + 1) * 0.5) + v18;
        v25 = (float)(*((float *)v56 + 2) * 0.5) + v19;
        v51 = v24;
        v52 = v25;
        if ( v13 >= 2 )
        {
          if ( v6 < 3 )
          {
            v32 = rand() % 5 + 4;
            if ( v9 == 23 )
              v32 += rand() % 3 + 2;
            v33 = 0;
            if ( v32 > 0 )
            {
              v34 = 5873 * v16;
              do
              {
                if ( (v33 & 3) == 0 )
                {
                  v50 = v23 + (float)(v20 * 0.75);
                  v51 = v24 + (float)(v21 * 0.75);
                  v52 = v25 + (float)(v22 * 0.75);
                  sr_CreateItem(15, &v50, nullptr, (float *)v56);
                  v23 = (float)(*(float *)v56 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
                  v24 = (float)(*((float *)v56 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
                  v25 = (float)(*((float *)v56 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
                  v50 = v23;
                  v51 = v24;
                  v52 = v25;
                }
                sr_CreateItem(17, &v50, nullptr, (float *)v56);
                v20 = *(float *)v56;
                v21 = *((float *)v56 + 1);
                v35 = *(float *)v56;
                v22 = *((float *)v56 + 2);
                ++v33;
                dword_140404A6C[v34 + 283831504] -= 250;
                v23 = v23 + (float)(v35 * 0.5);
                v50 = v23;
                v24 = v24 + (float)(v21 * 0.5);
                v51 = v24;
                v25 = v25 + (float)(v22 * 0.5);
                v52 = v25;
              }
              while ( v33 < v32 );
            }
          }
        }
        else
        {
          v26 = sr_CreateItem(v9, &v50, nullptr, (float *)v56);
          v27 = *(float *)v56;
          v28 = *(float *)v56;
          *v15 = v26;
          dword_140404A6C[5873 * v16 + 283831504] -= v58[v13];
          v29 = (float)((float)(v28 * 0.5) + v23) + (float)(v27 * 0.75);
          v50 = v29;
          v30 = (float)((float)(*((float *)v56 + 1) * 0.5) + v24) + (float)(*((float *)v56 + 1) * 0.75);
          v51 = v30;
          v31 = (float)((float)(*((float *)v56 + 2) * 0.5) + v25) + (float)(*((float *)v56 + 2) * 0.75);
          v52 = v31;
          sr_CreateItem(15, &v50, nullptr, (float *)v56);
          v50 = (float)(*(float *)v56 * 0.75) + v29;
          v51 = (float)(*((float *)v56 + 1) * 0.75) + v30;
          v52 = (float)(*((float *)v56 + 2) * 0.75) + v31;
        }
        ++v6;
        ++v13;
      }
      while ( (__int64)v13 < v54 );
      v36 = dword_140404A6C[487148744];
      v37 = 0;
      v38 = dword_140404A6C[487148745];
      v39 = 0;
      v40 = dword_140404A6C[487148677];
      v41 = (unsigned int *)v55;
      v50 = *(float *)&dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
      do
      {
        v42 = (int)v41[v37];
        v43 = 0;
        v44 = 0;
        v45 = &dword_140404A6C[5873 * v42 + 283831867];
        while ( *(v45 - 279) )
        {
          if ( !*v45 )
          {
            ++v44;
            ++v43;
            break;
          }
          if ( !v45[279] )
          {
            v44 += 2;
            v43 += 2;
            break;
          }
          if ( !v45[558] )
          {
            v44 += 3;
            v43 += 3;
            break;
          }
          v44 += 4;
          v45 += 1116;
          v43 += 4;
          if ( v44 >= 16 )
            break;
        }
        v46 = 279 * v44;
        v47 = 23492 * v42 + 1116 * v44;
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v47) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v47) = v40;
        if ( v37 >= 2 )
        {
          if ( v39 < 3 )
            *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 8;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v47) = 7;
        }
        *(float *)((char *)&dword_140404A6C[283831603] + v47) = v50;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v47) = v58[v37];
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v47) = v53;
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v47) = v36;
        *(unsigned int *)((char *)&dword_140404A6C[283831593] + v47) = v38;
        if ( v37 >= 2 )
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = *v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831596] + v47) = v41[1];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
          if ( v39 < 3 )
            dword_140404A6C[5873 * v42 + 283831607 + v46] = -dword_140404A6C[5873 * v42 + 283831504];
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v47) = v41[2];
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v47) = 0;
        }
        sub_1400519F0(v42, v43);
        ++v39;
        ++v37;
      }
      while ( (__int64)v37 < v54 );
    }
    else
    {
      v40 = dword_140404A6C[487148677];
    }
    dword_140404A6C[487148677] = v40 + 1;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v49
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;
// 1B4657D90: using guessed type unsigned int;

//----- (000000014005A0E0) ----------------------------------------------------
__int64            sub_14005A0E0(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3; // r14
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  int v8; // r15d
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  unsigned int v26; // xmm1_4
  signed int v27; // eax
  signed int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // rbx
  bool v31; // zf
  unsigned int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  int v38; // edi
  int i; // ebx
  float v40; // xmm0_4
  unsigned int v41; // esi
  unsigned int v42; // edi
  __int64 v43; // rbx
  unsigned int v44; // r13d
  unsigned int v45; // r15d
  unsigned int v46; // r14d
  unsigned int *v47; // r10
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  unsigned int *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A0E0[160];
#define v55 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 8)) /* [rsp+8h] */
#define v56 (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 40)) /* [rsp+28h] */
#define v57 (*(float (*))(void *)(sr_frame_14005A0E0 + 48)) /* [rsp+30h] */
#define v58 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 56)) /* [rsp+38h] */
#define v59 (*(unsigned int (*))(void *)(sr_frame_14005A0E0 + 60)) /* [rsp+3Ch] */
#define v60 (*(unsigned int * (*))(void *)(sr_frame_14005A0E0 + 64)) /* [rsp+40h] */
#define v61 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 72)) /* [rsp+48h] */
#define v62 (*(_OWORD (*)[2])(void *)(sr_frame_14005A0E0 + 80)) /* [rsp+50h] */
#define v63 (*(int (*))(void *)(sr_frame_14005A0E0 + 112)) /* [rsp+70h] */
#define v64 (*(_DWORD (*)[8])(void *)(sr_frame_14005A0E0 + 120)) /* [rsp+78h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_14005A0E0 + 152)) /* [rsp+98h] */

  v3 = a2;
  v60 = a3;
  if ( a2 < 2 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v4 = a2 - 1;
  v5 = 2 - ((rand() & 3) != 0);
  if ( v5 <= (int)v3 - 1 )
    v4 = v5;
  v6 = dword_140404A6C[179992853] + 414000;
  if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
    v6 = 3870000;
  v59 = v6;
  v7 = 0;
  v8 = dword_140404A6C[487148678] + 19;
  v9 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v9 = 0;
  dword_140404A6C[487148678] = v9;
  if ( (rand() & 3) != 0 )
  {
    v10 = rand();
    v11 = v10 & 0x80000007;
    v58 = v10 & 0x80000007;
    if ( v10 >= 0 )
      goto LABEL_13;
    v11 = (((_BYTE)v11 - 1) | 0xFFFFFFF8) + 1;
  }
  else
  {
    v11 = -1;
  }
  v58 = v11;
LABEL_13:
  v12 = v4;
  v13 = 0;
  do
  {
    if ( v7 )
    {
      v14 = 250 * (rand() % 5 + 4);
      v64[v13] = v14;
      if ( v13 > v12 )
      {
        v14 += 250 * (rand() % 5);
        v64[v13] = v14;
      }
      if ( v8 == 23 )
        v64[v13] = 4 * v14;
    }
    else
    {
      v64[v13] = 100;
    }
    ++v7;
    ++v13;
  }
  while ( v7 < (int)v3 );
  v61 = v3;
  if ( (_DWORD)v3 )
  {
    v15 = 0;
    do
    {
      v63 = 1065353216;
      v62[0] = xmmword_140278D30;
      v16 = 5873LL * (int)v60[v15];
      v62[1] = xmmword_140278D30;
      v17 = *(float *)&dword_140404A6C[v16 + 283831498];
      v18 = *(float *)&dword_140404A6C[v16 + 283831499];
      v19 = *(float *)&dword_140404A6C[v16 + 283831500];
      sub_14007B2A0((__int64)v62, (float *)v62 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v16 + 283831497]));
      sub_14007B2A0((__int64)v62, (float *)v62 + 3, sr_export_float_lane_container(1078530011));
      v20 = *(float *)v62;
      v21 = *((float *)v62 + 1);
      v22 = *((float *)v62 + 2);
      v23 = (float)(*(float *)v62 * 0.5) + v17;
      *(float *)&v56 = v23;
      v24 = (float)(*((float *)v62 + 1) * 0.5) + v18;
      v25 = (float)(*((float *)v62 + 2) * 0.5) + v19;
      *((float *)&v56 + 1) = v24;
      v57 = v25;
      if ( v15 )
      {
        if ( v15 <= v12 )
        {
          v38 = rand() % 3 + 2;
          if ( v8 == 23 )
            v38 += rand() % 3 + 2;
          for ( i = 0; i < v38; v57 = v25 )
          {
            if ( (i & 3) == 0 )
            {
              *(float *)&v56 = v23 + (float)(v20 * 0.75);
              *((float *)&v56 + 1) = v24 + (float)(v21 * 0.75);
              v57 = v25 + (float)(v22 * 0.75);
              sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
              v23 = (float)(*(float *)v62 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
              v24 = (float)(*((float *)v62 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
              v25 = (float)(*((float *)v62 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
              *(float *)&v56 = v23;
              *((float *)&v56 + 1) = v24;
              v57 = v25;
            }
            sr_CreateItem(17, (float *)&v56, nullptr, (float *)v62);
            v20 = *(float *)v62;
            v21 = *((float *)v62 + 1);
            v40 = *(float *)v62;
            v22 = *((float *)v62 + 2);
            ++i;
            dword_140404A6C[v16 + 283831504] -= 250;
            v23 = v23 + (float)(v40 * 0.5);
            *(float *)&v56 = v23;
            v24 = v24 + (float)(v21 * 0.5);
            *((float *)&v56 + 1) = v24;
            v25 = v25 + (float)(v22 * 0.5);
          }
        }
      }
      else if ( v11 == -1 )
      {
        v32 = sr_CreateItem(v8, (float *)&v56, nullptr, (float *)v62);
        v33 = *(float *)v62;
        v34 = *(float *)v62;
        dword_140404A6C[487148744] = v32;
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v35 = (float)((float)(v34 * 0.5) + v23) + (float)(v33 * 0.75);
        *(float *)&v56 = v35;
        v36 = (float)((float)(*((float *)v62 + 1) * 0.5) + v24) + (float)(*((float *)v62 + 1) * 0.75);
        *((float *)&v56 + 1) = v36;
        v37 = (float)((float)(*((float *)v62 + 2) * 0.5) + v25) + (float)(*((float *)v62 + 2) * 0.75);
        v57 = v37;
        sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
        *(float *)&v56 = (float)(*(float *)v62 * 0.75) + v35;
        *((float *)&v56 + 1) = (float)(*((float *)v62 + 1) * 0.75) + v36;
        v57 = (float)(*((float *)v62 + 2) * 0.75) + v37;
      }
      else
      {
        v26 = dword_140404A6C[19 * v11 + 487148757];
        LODWORD(v56) = dword_140404A6C[19 * v11 + 487148756];
        v57 = *(float *)&dword_140404A6C[19 * v11 + 487148758];
        HIDWORD(v56) = v26;
        dword_140404A6C[487148744] = sr_CreateItem(v8, (float *)&v56, nullptr, (float *)v62);
        dword_140404A6C[v16 + 283831504] -= v64[0];
        v27 = sr_CreateItem(15, (float *)&v56, nullptr, (float *)v62);
        v28 = dword_140404A6C[487148744];
        v29 = v27;
        v30 = 1760LL * v27;
        dword_140404A6C[v30 + 278845898] = 16;
        sub_1400E35D0(v27, v28, -1, 0);
        v31 = dword_140404A6C[456202453] == 0;
        dword_140404A6C[v30 + 278845898] = 15;
        if ( !v31 && (unsigned int)v29 <= 0x3FF )
          ++dword_140404A6C[v29 + 280648157];
      }
      ++v15;
    }
    while ( v15 < v61 );
    v41 = dword_140404A6C[487148744];
    v42 = dword_140404A6C[487148677];
    v43 = 0;
    v44 = v58;
    v45 = v59;
    v56 = &dword_140404A6C[283831867];
    v46 = dword_140404A6C[1760 * dword_140404A6C[487148744] + 278845898];
    do
    {
      v47 = v60;
      v48 = 0;
      v49 = 0;
      v50 = (int)v60[v43];
      v51 = &v56[5873 * v50];
      while ( *(v51 - 279) )
      {
        if ( !*v51 )
        {
          ++v49;
          ++v48;
          break;
        }
        if ( !v51[279] )
        {
          v49 += 2;
          v48 += 2;
          break;
        }
        if ( !v51[558] )
        {
          v49 += 3;
          v48 += 3;
          break;
        }
        v49 += 4;
        v51 += 1116;
        v48 += 4;
        if ( v49 >= 16 )
          break;
      }
      v52 = 5873LL * (int)v60[v43];
      v53 = v52 * 4 + 1116 * v49;
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v53) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v53) = v42;
      if ( v43 )
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = (v43 > v12) + 3;
      else
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v53) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v53) = v64[v43];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v53) = v41;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v53) = v46;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v53) = v45;
      *(unsigned int *)((char *)&dword_140404A6C[283831595] + v53) = *v47;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = -1;
      if ( v43 )
      {
        if ( v43 <= v12 )
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v53) = -dword_140404A6C[v52 + 283831504];
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v53) = v44;
      }
      sub_1400519F0(v50, v48);
      ++v43;
    }
    while ( v43 < v61 );
  }
  else
  {
    v42 = dword_140404A6C[487148677];
  }
  dword_140404A6C[487148677] = v42 + 1;
  return 0; /* compatibility result discarded by all reviewed callers */
}
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (000000014005A990) ----------------------------------------------------
__int64            sub_14005A990(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 i; // rbx
  __int64 v13; // rax
  int v14; // ecx
  float v15; // xmm1_4
  float v16; // xmm0_4
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned int *v25; // rbx
  unsigned int *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  float v31; // xmm0_4
  int v32; // esi
  __int64 v33; // rdi
  unsigned int v34; // ebx
  float v35; // xmm0_4
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005A990[176];
#define v40 (*(__int64 (*))(void *)(sr_frame_14005A990 + 8)) /* [rsp+0h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_14005A990 + 40)) /* [rsp+20h] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_14005A990 + 44)) /* [rsp+24h] */
#define v43 (*(int (*))(void *)(sr_frame_14005A990 + 48)) /* [rsp+28h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_14005A990 + 56)) /* [rsp+30h] */
#define v45 (*(__int64 (*))(void *)(sr_frame_14005A990 + 64)) /* [rsp+38h] */
#define v46 (*(float (*))(void *)(sr_frame_14005A990 + 72)) /* [rsp+40h] */
#define v47 (*(_OWORD (*)[2])(void *)(sr_frame_14005A990 + 80)) /* [rsp+48h] */
#define v48 (*(int (*))(void *)(sr_frame_14005A990 + 112)) /* [rsp+68h] */
#define v49 (*(_DWORD (*)[4])(void *)(sr_frame_14005A990 + 120)) /* [rsp+70h] */
#define v50 (*(_DWORD (*)[8])(void *)(sr_frame_14005A990 + 136)) /* [rsp+80h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_14005A990 + 168)) /* [rsp+A0h] */

  v3 = a2;
  v4 = a3;
  v44 = a3;
  if ( a2 >= 3 )
  {
    v5 = dword_140404A6C[179992853] + 414000;
    if ( (signed int)(dword_140404A6C[179992853] + 414000) > 3870000 )
      v5 = 3870000;
    v6 = 0;
    v41 = v5;
    v7 = 3;
    do
    {
      v8 = dword_140404A6C[487148678];
      v9 = 1000;
      v49[v6] = 1000;
      v10 = v8 + 19;
      v11 = v8 + 1;
      v50[v6] = v10;
      if ( (int)(v11 + 19) > 24 )
        v11 = 0;
      dword_140404A6C[487148678] = v11;
      if ( (rand() & 1) == 0 )
      {
        v9 = 1500;
        v49[v6] = 1500;
      }
      if ( (rand() & 1) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 500;
        v49[v6] = v9;
      }
      if ( (rand() & 3) == 0 )
      {
        v9 += 1000;
        v49[v6] = v9;
      }
      if ( v10 == 23 )
        v49[v6] = 5 * v9;
      ++v6;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < 3; ++i )
    {
      v48 = 1065353216;
      v47[0] = xmmword_140278D30;
      v47[1] = xmmword_140278D30;
      v13 = *(int *)((char *)&v50[i] + v4 - (_QWORD)v50);
      v14 = v50[i];
      v15 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831492]
                  + *(float *)&dword_140404A6C[5873 * v13 + 283831495])
          * 0.5;
      *(float *)&v45 = (float)(*(float *)&dword_140404A6C[5873 * v13 + 283831494]
                             + *(float *)&dword_140404A6C[5873 * v13 + 283831491])
                     * 0.5;
      v16 = *(float *)&dword_140404A6C[5873 * v13 + 283831493] + *(float *)&dword_140404A6C[5873 * v13 + 283831496];
      *((float *)&v45 + 1) = v15;
      v46 = v16 * 0.5;
      dword_140404A6C[i + 487148744] = sr_CreateItem(v14, (float *)&v45, nullptr, (float *)v47);
      v17 = dword_140404A6C[487148677];
      v50[i + 4] = dword_140404A6C[487148677];
      dword_140404A6C[487148677] = v17 + 1;
    }
    v45 = v3;
    if ( (_DWORD)v3 )
    {
      v43 = v49[2];
      v18 = 0;
      v42 = v50[6];
      do
      {
        v19 = *(int *)(v4 + 4 * v18);
        v20 = v18++;
        v21 = v18;
        if ( v18 >= 3 )
          v21 = v18 % 3uLL;
        v22 = 0;
        v23 = 0;
        v24 = 5873 * v19;
        v25 = &dword_140404A6C[5873 * v19 + 283831867];
        v26 = v25;
        while ( *(v26 - 279) )
        {
          if ( !*v26 )
          {
            ++v23;
            ++v22;
            break;
          }
          if ( !v26[279] )
          {
            v23 += 2;
            v22 += 2;
            break;
          }
          if ( !v26[558] )
          {
            v23 += 3;
            v22 += 3;
            break;
          }
          v23 += 4;
          v26 += 1116;
          v22 += 4;
          if ( v23 >= 16 )
            break;
        }
        sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v22 + 283831588 + v24]), 0, 0x45Cu);
        v27 = v24 * 4 + 1116 * v23;
        *(unsigned int *)((char *)&dword_140404A6C[283831590] + v27) = v50[v21 + 4];
        *(unsigned int *)((char *)&dword_140404A6C[283831588] + v27) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v27) = 6 - (v20 < 3);
        v28 = (int)dword_140404A6C[v21 + 487148744];
        *(unsigned int *)((char *)&dword_140404A6C[283831592] + v27) = v28;
        *(unsigned int *)((char *)&dword_140404A6C[283831606] + v27) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[283831603] + v27) = dword_140404A6C[1760 * v28 + 278845898];
        LODWORD(v28) = v49[v21];
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v27) = v28;
        v29 = _mm_cvtsi32_si128(v28);
        *(unsigned int *)((char *)&dword_140404A6C[283831605] + v27) = v41;
        v30 = v44;
        v31 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0];
        *(float *)((char *)&dword_140404A6C[283831610] + v27) = v31 * -0.0000125;
        *(float *)((char *)&dword_140404A6C[283831609] + v27) = v31 * 0.000024999999;
        *(unsigned int *)((char *)&dword_140404A6C[283831595] + v27) = *(_DWORD *)(v30 + 4 * v21);
        *(unsigned int *)((char *)&dword_140404A6C[283831607] + v27) = 0;
        sub_1400519F0(v19, v22);
        if ( !v20 && (rand() & 7) == 0 )
        {
          v32 = 0;
          v33 = 0;
          while ( *(v25 - 279) )
          {
            if ( !*v25 )
            {
              ++v33;
              ++v32;
              break;
            }
            if ( !v25[279] )
            {
              v33 += 2;
              v32 += 2;
              break;
            }
            if ( !v25[558] )
            {
              v33 += 3;
              v32 += 3;
              break;
            }
            v33 += 4;
            v25 += 1116;
            v32 += 4;
            if ( v33 >= 16 )
              break;
          }
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[279 * v32 + 283831588 + v24]), 0, 0x45Cu);
          v34 = v43;
          v35 = (float)v43;
          v36 = 1116 * v33 + 23492 * v19;
          *(unsigned int *)((char *)&dword_140404A6C[283831590] + v36) = v42;
          v37 = dword_140404A6C[487148746];
          v38 = 1760LL * (int)dword_140404A6C[487148746];
          *(float *)((char *)&dword_140404A6C[283831609] + v36) = v35 * 0.000024999999;
          *(float *)((char *)&dword_140404A6C[283831610] + v36) = v35 * -0.0000125;
          *(unsigned int *)((char *)&dword_140404A6C[283831592] + v36) = v37;
          *(unsigned int *)((char *)&dword_140404A6C[283831588] + v36) = 1;
          *(unsigned int *)((char *)&dword_140404A6C[283831591] + v36) = 6;
          *(unsigned int *)((char *)&dword_140404A6C[283831604] + v36) = v34;
          *(unsigned int *)((char *)&dword_140404A6C[283831603] + v36) = dword_140404A6C[v38 + 278845898];
          *(unsigned int *)((char *)&dword_140404A6C[283831605] + v36) = v41;
          *(unsigned int *)((char *)&dword_140404A6C[283831595] + v36) = *(_DWORD *)(v44 + 8);
          *(unsigned int *)((char *)&dword_140404A6C[283831607] + v36) = 0;
          sub_1400519F0(v19, v32);
        }
        v4 = v44;
      }
      while ( v18 < v45 );
    }
  }
  return 0; /* the function has no caller */
}
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D94: using guessed type unsigned int;

//----- (000000014005AF40) ----------------------------------------------------
void            sub_14005AF40(__int64 a1, int a2, char *a3)
{
  int v5; // edi
  int v6; // ebx
  int v7; // r14d
  int *v8; // rdi
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  int v13; // ebx
       char *v14; // rax
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // r12d
  _DWORD *v18; // rbx
  __int64 v19; // rax
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  int v26; // edi
  unsigned int v27; // eax
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // ebx
  signed int v31; // r14d
  __int64 v32; // rsi
  int v33; // edi
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r15
  int v37; // r13d
  unsigned __int64 v38; // rax
  int v39; // r14d
  int *v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  unsigned int v47; // eax
  int v48; // r8d
  __int64 v49; // rsi
  _BYTE *v50; // rbx
  int v51; // edi
       char *v52; // rax
  int v53; // r9d
  __int64 v54; // r12
  unsigned int *v55; // rax
  int v56; // r8d
  char *v57; // rbx
  __int64 v59; // rcx
  float v60; // xmm1_4
  unsigned int v61; // eax
  unsigned int v62; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005AF40[1280];
#define v63 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 0)) /* [rsp+8h] */
#define v64 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 64)) /* [rsp+48h] */
#define v65 (*(unsigned __int64 (*))(void *)(sr_frame_14005AF40 + 72)) /* [rsp+50h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 80)) /* [rsp+58h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 88)) /* [rsp+60h] */
#define v68 (*(signed int (*))(void *)(sr_frame_14005AF40 + 96)) /* [rsp+68h] */
#define v69 (*(int (*))(void *)(sr_frame_14005AF40 + 100)) /* [rsp+6Ch] */
#define v70 (*(char * (*))(void *)(sr_frame_14005AF40 + 104)) /* [rsp+70h] */
#define v71 (*(unsigned int * (*))(void *)(sr_frame_14005AF40 + 112)) /* [rsp+78h] */
#define v72 (*(int (*))(void *)(sr_frame_14005AF40 + 120)) /* [rsp+80h] */
#define v73 (*(int (*))(void *)(sr_frame_14005AF40 + 128)) /* [rsp+88h] */
#define v74 (*(int (*))(void *)(sr_frame_14005AF40 + 132)) /* [rsp+8Ch] */
#define v75 (*(_OWORD (*)[2])(void *)(sr_frame_14005AF40 + 160)) /* [rsp+A8h] */
#define v76 (*(int (*))(void *)(sr_frame_14005AF40 + 192)) /* [rsp+C8h] */
#define v77 (*(_DWORD (*)[10])(void *)(sr_frame_14005AF40 + 200)) /* [rsp+D0h] */
#define v78 (*(char (*)[1024])(void *)(sr_frame_14005AF40 + 240)) /* [rsp+F8h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_14005AF40 + 1264)) /* [rsp+4F8h] */

  if ( a2 < 2 )
    return;
  v71 = (unsigned int *)a3;
  v69 = a2;
  v5 = ((rand() & 1) == 0) + 1;
  v6 = v5;
  if ( a2 > 3 && (rand() & 1) == 0 )
    v6 = v5 + 1;
  v7 = a2 - 1;
  v8 = v77;
  if ( v6 <= a2 - 1 )
    v7 = v6;
  v9 = dword_140404A6C[179992853] + 522000;
  if ( (signed int)(dword_140404A6C[179992853] + 522000) > 3870000 )
    v9 = 3870000;
  v68 = v9;
  v10 = 0;
  v11 = dword_140404A6C[487148678] + 19;
  v12 = dword_140404A6C[487148678] + 1;
  LODWORD(v64) = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v12 = 0;
  dword_140404A6C[487148678] = v12;
  do
  {
    if ( v10 )
    {
      v13 = 2000;
      *v8 = 2000;
      if ( (rand() & 1) == 0 )
      {
        v13 = 2500;
        *v8 = 2500;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( (rand() & 3) == 0 )
      {
        v13 += 500;
        *v8 = v13;
      }
      if ( v11 == 23 )
        *v8 = 5 * v13;
    }
    else
    {
      *v8 = 0;
    }
    ++v10;
    ++v8;
  }
  while ( v10 < a2 );
  v14 = (     char *)(a3 - (char *)v77);
  v15 = v7;
  v70 = (     char *)(a3 - (char *)v77);
  v16 = 0;
  v67 = v7;
  v17 = 0;
  do
  {
    v75[0] = xmmword_140278D30;
    v76 = 1065353216;
    v18 = &v77[v16];
    v19 = *(int *)&v14[(_QWORD)v18];
    v75[1] = xmmword_140278D30;
    v20 = *(float *)&dword_140404A6C[5873 * v19 + 283831498];
    v21 = *(float *)&dword_140404A6C[5873 * v19 + 283831499];
    v22 = *(float *)&dword_140404A6C[5873 * v19 + 283831500];
    sub_14007B2A0((__int64)v75, (float *)v75 + 3, *(float *)&dword_140404A6C[5873 * v19 + 283831497] - 1.570796326795);
    v23 = v20 - (float)(*(float *)v75 * 1.5);
    *(float *)&v65 = v23;
    v24 = v21 - (float)(*((float *)v75 + 1) * 1.5);
    *((float *)&v65 + 1) = v24;
    v25 = v22 - (float)(*((float *)v75 + 2) * 1.5);
    *(float *)&v66 = v25;
    if ( !v17 )
    {
      v26 = v64;
      v27 = sr_CreateItem(v64, (float *)&v65, nullptr, (float *)v75);
      v28 = *(float *)v75 * 0.75;
      dword_140404A6C[487148744] = v27;
      v29 = *((float *)v75 + 1) * 0.75;
      *(&v73 + v16) = 0;
      *(float *)&v65 = v28 + v23;
      *((float *)&v65 + 1) = v29 + v24;
      *(float *)&v66 = (float)(*((float *)v75 + 2) * 0.75) + v25;
      goto LABEL_52;
    }
    *(&v73 + v16) = 0;
    if ( v16 <= v15 )
    {
      v30 = *v18 - 500;
      *(&v73 + v16) = v30;
      if ( v30 >= 5000 )
      {
        if ( (rand() & 1) != 0 )
        {
LABEL_33:
          if ( (rand() & 1) != 0 )
            goto LABEL_36;
          v30 -= 1000;
          *(&v73 + v16) = v30;
LABEL_35:
          if ( v30 < 1000 )
          {
LABEL_40:
            if ( v30 > 0 )
            {
              do
              {
                v31 = sr_CreateItem(16, (float *)&v65, nullptr, (float *)v75);
                if ( v31 != -1 )
                {
                  v32 = 4;
                  do
                  {
                    if ( v30 > 0 )
                    {
                      v33 = sr_CreateItem(18, (float *)&v65, nullptr, (float *)v75);
                      v30 -= 100;
                      v34 = 1760LL * v33;
                      dword_140404A6C[v34 + 278846062] = 0;
                      for ( dword_140404A6C[v34 + 278846063] = 5; v30 > 0; v30 -= 100 )
                      {
                        if ( !(unsigned int)sub_1400C3AB0(v33, 0, 5) )
                          break;
                      }
                      sub_1400E35D0(v31, v33, -1, 0);
                    }
                    --v32;
                  }
                  while ( v32 );
                }
                v23 = v23 + (float)(*(float *)v75 * 0.75);
                v24 = v24 + (float)(*((float *)v75 + 1) * 0.75);
                v65 = __PAIR64__(LODWORD(v24), LODWORD(v23));
                v25 = v25 + (float)(*((float *)v75 + 2) * 0.75);
                *(float *)&v66 = v25;
              }
              while ( v30 > 0 );
              v15 = v67;
            }
            goto LABEL_51;
          }
LABEL_36:
          if ( (rand() & 1) != 0 || (*(&v73 + v16) = v30 - 500, v30 -= 500, v30 >= 1000) )
          {
            if ( (rand() & 3) == 0 )
            {
              v30 -= 500;
              *(&v73 + v16) = v30;
            }
          }
          goto LABEL_40;
        }
        v30 -= 2000;
        *(&v73 + v16) = v30;
      }
      if ( v30 < 3000 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_51:
    v26 = v64;
LABEL_52:
    v14 = v70;
    ++v17;
    ++v16;
  }
  while ( v17 < v69 );
  v35 = v74;
  v73 = v74;
  if ( v74 < 5000 )
    goto LABEL_56;
  if ( (rand() & 1) != 0 )
    goto LABEL_57;
  v35 -= 2000;
  v73 = v35;
LABEL_56:
  if ( v35 >= 3000 )
  {
LABEL_57:
    if ( (rand() & 1) == 0 )
    {
      v35 -= 1000;
      v73 = v35;
      goto LABEL_59;
    }
LABEL_60:
    if ( (rand() & 3) == 3 || (v35 -= 500, v73 = v35, v35 >= 1000) )
    {
      if ( (rand() & 1) == 0 )
        v73 = v35 - 500;
    }
  }
  else
  {
LABEL_59:
    if ( v35 >= 1000 )
      goto LABEL_60;
  }
  v36 = 0;
  v37 = 0;
  v70 = (     char *)&dword_140404A6C[1268 * v26 + 278521297];
  LODWORD(v64) = v68 / 3600;
  v38 = (char *)v71 - (char *)v77;
  v65 = (char *)v71 - (char *)v77;
  do
  {
    v39 = 0;
    v40 = &v77[v36];
    v41 = 0;
    v42 = *(int *)((char *)v40 + v38);
    v72 = v42;
    v43 = v42;
    v44 = &dword_140404A6C[5873 * v42 + 283831867];
    while ( *(v44 - 279) )
    {
      if ( !*v44 )
      {
        ++v41;
        ++v39;
        break;
      }
      if ( !v44[279] )
      {
        v41 += 2;
        v39 += 2;
        break;
      }
      if ( !v44[558] )
      {
        v41 += 3;
        v39 += 3;
        break;
      }
      v41 += 4;
      v44 += 1116;
      v39 += 4;
      if ( v41 >= 16 )
        break;
    }
    v45 = 23492 * v43;
    v46 = 23492 * v43 + 1116LL * v39;
    sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[283831588] + v46)), 0, 0x45Cu);
    v47 = dword_140404A6C[487148677];
    v48 = v39 + 1;
    v49 = v45 + 1116 * v41;
    v50 = (char *)&dword_140404A6C[283831611] + v46;
    v51 = *v40;
    *(unsigned int *)((char *)&dword_140404A6C[283831588] + v49) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[283831590] + v49) = v47;
    if ( v37 )
    {
      v54 = v67;
      v55 = v71;
      if ( v36 > v67 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 4;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Acquire the disk by any means neccessary.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          v70,
          v51);
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 3;
        sub_140158AB0(
          v50,
          "Transaction(%d):\n"
          "We have received reports that %s has acquired a disk\n"
          "containing information that will be beneficial to one of our\n"
          "subsidiaries.  Negotiate the best terms and execute the deal.\n"
          "You have been provided with $%d.\n"
          "\n"
          "%s value:               $%d Bonus",
          v48,
          off_1402B2890[*v55],
          *(&v73 + v36),
          v70,
          v51);
      }
    }
    else
    {
      v52 = v70;
      v53 = *(&v73 + v36);
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v49) = 2;
      sub_140158AB0(
        v50,
        "Transaction(%d):\n"
        "We have acquired a disk that has information that can be\n"
        "traded for money with another corporation.\n"
        "The corporation expects at least $%d from this deal.\n"
        "\n"
        "%s value:               $%d Bonus",
        v48,
        v53,
        v52,
        v51);
      v54 = v67;
    }
    v56 = (int)v64 / 60 % -12;
    if ( !v56 )
      v56 = 12;
    sub_140158AB0(v78, "\nThis mission expires at %d:%d%d\n\n", v56, (int)v64 % 60 / 10 % 6, (int)v64 % 60 % 10);
    v57 = v50 - 1;
    while ( *++v57 != 0 )
      ;
    strcpy(v57, v78);
    sub_140051BD0(v72, v39);
    v59 = 1760LL * (int)dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831592] + v49) = dword_140404A6C[487148744];
    *(unsigned int *)((char *)&dword_140404A6C[283831606] + v49) = -1;
    *(unsigned int *)((char *)&dword_140404A6C[283831603] + v49) = dword_140404A6C[v59 + 278845898];
    if ( v37 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = v51;
      v60 = (float)v51 * -0.0000125;
      *(float *)((char *)&dword_140404A6C[283831609] + v49) = (float)v51 * 0.000024999999;
    }
    else
    {
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v49) = 0;
      v60 = 0.0;
      *(unsigned int *)((char *)&dword_140404A6C[283831609] + v49) = 0;
    }
    v61 = v68;
    *(float *)((char *)&dword_140404A6C[283831610] + v49) = v60;
    ++v37;
    *(unsigned int *)((char *)&dword_140404A6C[283831605] + v49) = v61;
    v67 = v54;
    *(unsigned int *)((char *)&dword_140404A6C[283831595] + v49) = *v71;
    v62 = *(&v73 + v36++);
    *(unsigned int *)((char *)&dword_140404A6C[283831607] + v49) = v62;
    v38 = v65;
  }
  while ( v37 < v69 );
  ++dword_140404A6C[487148677];
}
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 1B4657C80: using guessed type unsigned int;
// 1B4657C84: using guessed type unsigned int;
// 1B4657D8C: using guessed type unsigned int;

//----- (000000014005B840) ----------------------------------------------------
double            sub_14005B840(int a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r11
  unsigned int *v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // r10
  unsigned int *v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  signed int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

  v3 = 2310LL * a2;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[178322641] = 0;
  v5 = 0;
  dword_140404A6C[178519250] = 0;
  v6 = 0;
  dword_140404A6C[177495247] = 0;
  v7 = (int)dword_140404A6C[v3 + 432531270];
  v8 = a2;
  v9 = 0;
  if ( v7 >= 4 )
  {
    v10 = &dword_140404A6C[v3 + 432531273];
    v11 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v9 = 4 * v11;
    do
    {
      v12 = (int)(3 * v6);
      v13 = *(v10 - 2);
      v10 += 12;
      dword_140404A6C[v12 + 177167567] = v13;
      dword_140404A6C[v12 + 177167568] = *(v10 - 13);
      dword_140404A6C[v12 + 177167569] = *(v10 - 12);
      ++dword_140404A6C[177167565];
      v14 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v14 + 177167567] = *(v10 - 11);
      dword_140404A6C[v14 + 177167568] = *(v10 - 10);
      dword_140404A6C[v14 + 177167569] = *(v10 - 9);
      ++dword_140404A6C[177167565];
      v15 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v15 + 177167567] = *(v10 - 8);
      dword_140404A6C[v15 + 177167568] = *(v10 - 7);
      dword_140404A6C[v15 + 177167569] = *(v10 - 6);
      ++dword_140404A6C[177167565];
      v16 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v16 + 177167567] = *(v10 - 5);
      dword_140404A6C[v16 + 177167568] = *(v10 - 4);
      dword_140404A6C[v16 + 177167569] = *(v10 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v11;
    }
    while ( v11 );
    v5 = dword_140404A6C[177495247];
  }
  if ( v9 < v7 )
  {
    v17 = v7 - v9;
    v18 = &dword_140404A6C[2310 * v8 + 432531273 + 3 * v9];
    do
    {
      v19 = (int)(3 * v6);
      v20 = *(v18 - 2);
      v18 += 3;
      dword_140404A6C[v19 + 177167567] = v20;
      dword_140404A6C[v19 + 177167568] = *(v18 - 4);
      dword_140404A6C[v19 + 177167569] = *(v18 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v17;
    }
    while ( v17 );
    v5 = dword_140404A6C[177495247];
  }
  v21 = dword_140404A6C[v3 + 432532039];
  if ( v21 > 0 )
  {
    v22 = (unsigned int)v21;
    v23 = &dword_140404A6C[v3 + 432532041];
    do
    {
      if ( *(v23 - 1) == 4 )
      {
        v24 = *v23;
        dword_140404A6C[3 * v5 + 177495248] = *v23;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v23[1];
        v25 = v23[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v25;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v26 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v26 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011349] = 0;
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v24;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v25;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v23[3];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v27 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v27 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v27 + 178011347] = 0;
        *(_QWORD *)&dword_140404A6C[v27 + 178011349] = 0;
        v5 = ++dword_140404A6C[177495247];
      }
      v23 += 6;
      --v22;
    }
    while ( v22 );
  }
  if ( a2 == 1 || a2 == 4 )
  {
    v28 = v5 - 8;
    v29 = 6 * v28;
    dword_140404A6C[v29 + 178011345] = 0;
    v30 = 3LL * v28;
    dword_140404A6C[2 * v30 + 178011346] = 1065353216;
    dword_140404A6C[2 * v30 + 178011347] = 1065353216;
    dword_140404A6C[2 * v30 + 178011348] = 1065353216;
    dword_140404A6C[2 * v30 + 178011349] = 1065353216;
    dword_140404A6C[v29 + 178011350] = 0;
    v31 = (int32_t)(6u * (dword_140404A6C[177495247] - 7u));
    dword_140404A6C[v31 + 178011345] = 0;
    dword_140404A6C[v31 + 178011346] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v31 + 178011347] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v31 + 178011349] = 0;
    v32 = (int32_t)(6u * (dword_140404A6C[177495247] - 20u));
    v33 = (int32_t)(dword_140404A6C[177495247] - 20u);
    dword_140404A6C[v32 + 178011345] = 0;
    v34 = 3 * v33;
    dword_140404A6C[2 * v34 + 178011346] = 1065353216;
    dword_140404A6C[2 * v34 + 178011347] = 1065353216;
    dword_140404A6C[2 * v34 + 178011348] = 1065353216;
    dword_140404A6C[2 * v34 + 178011349] = 1065353216;
    dword_140404A6C[v32 + 178011350] = 0;
    v35 = (int32_t)(6u * (dword_140404A6C[177495247] - 19u));
    *(_QWORD *)&dword_140404A6C[v35 + 178011349] = 0;
    *(_QWORD *)&dword_140404A6C[v35 + 178011347] = 1065353216;
    dword_140404A6C[v35 + 178011346] = 1065353216;
    dword_140404A6C[v35 + 178011345] = 0;
  }
  return sub_1401449C0(a1, 1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (000000014005CBB0) ----------------------------------------------------
__int64            sub_14005CBB0(unsigned int a1, unsigned int *a2, unsigned int *a3, float a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v10; // rbx

  v5 = (int)dword_140404A6C[73990061];
  if ( (int)dword_140404A6C[73990061] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v10 = 60LL * (int)dword_140404A6C[73990061];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v10 + 73007022]), 0, 0xECu);
  dword_140404A6C[v10 + 73007021] = a1;
  dword_140404A6C[v10 + 73007022] = 0x10000;
  dword_140404A6C[v10 + 73007026] = *a2;
  dword_140404A6C[v10 + 73007027] = a2[1];
  dword_140404A6C[v10 + 73007028] = a2[2];
  dword_140404A6C[v10 + 73007029] = *a2;
  dword_140404A6C[v10 + 73007030] = a2[1];
  dword_140404A6C[v10 + 73007031] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v10 + 73007032] = *a3;
    dword_140404A6C[v10 + 73007033] = a3[1];
    dword_140404A6C[v10 + 73007034] = a3[2];
  }
  *(float *)&dword_140404A6C[v10 + 73007023] = a4;
  dword_140404A6C[v10 + 73007024] = 993158992;
  dword_140404A6C[v10 + 73007025] = 1065353216;
  if ( a5 != -1 )
    dword_140404A6C[60 * v5 + 73007075 + (int)dword_140404A6C[v10 + 73007074]++] = a5;
  dword_140404A6C[73990061] = v5 + 1;
  return (unsigned int)v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005CCF0) ----------------------------------------------------
__int64 sub_14005CCF0()
{
  unsigned int v0; // edi
  unsigned int *v1; // rax
  __int64 v3; // rbx
  bool v4; // zf
  unsigned int v5; // eax

  v0 = 0;
  v1 = &dword_140404A6C[71856253];
  while ( *v1 )
  {
    ++v0;
    v1 += 3597;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[72777085] )
      return 0xFFFFFFFFLL;
  }
  if ( v0 == -1 )
    return 0xFFFFFFFFLL;
  v3 = 3597LL * (int)v0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 71856254]), 0, 0x3830u);
  v4 = dword_140404A6C[283831448] == 1;
  dword_140404A6C[v3 + 71856268] = -1;
  dword_140404A6C[v3 + 71856253] = 1;
  dword_140404A6C[v3 + 71856286] = 17;
  dword_140404A6C[v3 + 71856292] = -1;
  dword_140404A6C[v3 + 71856272] = 50000;
  dword_140404A6C[v3 + 71857786] = 0;
  dword_140404A6C[v3 + 71857811] = 0;
  dword_140404A6C[v3 + 71857836] = 0;
  dword_140404A6C[v3 + 71857861] = 0;
  dword_140404A6C[v3 + 71857886] = 0;
  dword_140404A6C[v3 + 71857911] = 0;
  dword_140404A6C[v3 + 71857936] = 0;
  dword_140404A6C[v3 + 71857961] = 0;
  dword_140404A6C[v3 + 71856342] = 0;
  if ( v4 )
  {
    v5 = dword_140404A6C[v3 + 71856342];
    if ( dword_140404A6C[283831312] == 3 )
      v5 = 2;
    dword_140404A6C[v3 + 71856342] = v5;
  }
  dword_140404A6C[v3 + 71856333] = 1065353216;
  rand();
  dword_140404A6C[v3 + 71859768] = 1027604480;
  dword_140404A6C[v3 + 71859769] = 1027604480;
  dword_140404A6C[v3 + 71859770] = -1105618534;
  dword_140404A6C[v3 + 71859774] = -1119879168;
  dword_140404A6C[v3 + 71859775] = 1027604480;
  dword_140404A6C[v3 + 71859776] = -1105618534;
  dword_140404A6C[v3 + 71859771] = 1065353216;
  dword_140404A6C[v3 + 71859772] = 1065353216;
  dword_140404A6C[v3 + 71859773] = 1065353216;
  dword_140404A6C[v3 + 71859777] = 1065353216;
  dword_140404A6C[v3 + 71859778] = 1065353216;
  dword_140404A6C[v3 + 71859779] = 1065353216;
  dword_140404A6C[v3 + 71859825] = rand() % 5;
  dword_140404A6C[v3 + 71859817] = rand() % 6;
  if ( (rand() & 3) != 3 )
    dword_140404A6C[v3 + 71859817] = 2;
  dword_140404A6C[v3 + 71859818] = rand() % 6;
  dword_140404A6C[v3 + 71859819] = rand() % 9;
  dword_140404A6C[v3 + 71859820] = rand() % 8;
  dword_140404A6C[v3 + 71859663] = -1;
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005CF80) ----------------------------------------------------
__int64            sub_14005CF80(
        unsigned int a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v7; // rax
  unsigned int v11; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4

  v7 = &dword_140404A6C[18215709];
  v11 = 0;
  while ( *v7 )
  {
    ++v11;
    v7 += 47;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[18600733] )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v13 = 47LL * (int)v11;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v13 + 18215710]), 0, 0xB8u);
  dword_140404A6C[v13 + 18215714] = a5;
  dword_140404A6C[v13 + 18215709] = 1;
  dword_140404A6C[v13 + 18215710] = a1;
  dword_140404A6C[v13 + 18215752] = 1056964608;
  dword_140404A6C[v13 + 18215753] = 1048576000;
  dword_140404A6C[v13 + 18215754] = 1056964608;
  dword_140404A6C[v13 + 18215715] = *a2;
  dword_140404A6C[v13 + 18215716] = a2[1];
  dword_140404A6C[v13 + 18215717] = a2[2];
  dword_140404A6C[v13 + 18215724] = *a3;
  dword_140404A6C[v13 + 18215725] = a3[1];
  dword_140404A6C[v13 + 18215726] = a3[2];
  dword_140404A6C[v13 + 18215727] = a3[3];
  dword_140404A6C[v13 + 18215728] = a3[4];
  dword_140404A6C[v13 + 18215729] = a3[5];
  dword_140404A6C[v13 + 18215730] = a3[6];
  dword_140404A6C[v13 + 18215731] = a3[7];
  dword_140404A6C[v13 + 18215732] = a3[8];
  if ( a4 )
  {
    dword_140404A6C[v13 + 18215718] = *a4;
    dword_140404A6C[v13 + 18215719] = a4[1];
    dword_140404A6C[v13 + 18215720] = a4[2];
  }
  dword_140404A6C[v13 + 18215742] = *a6;
  dword_140404A6C[v13 + 18215743] = a6[1];
  dword_140404A6C[v13 + 18215744] = a6[2];
  v14 = 47LL * (int)v11;
  v15 = *(float *)&dword_140404A6C[v14 + 18215742];
  if ( v15 <= 0.0 )
    v16 = 0.0;
  else
    v16 = 1.0 / v15;
  *(float *)&dword_140404A6C[v14 + 18215745] = v16;
  v17 = *(float *)&dword_140404A6C[v14 + 18215743];
  if ( v17 <= 0.0 )
    v18 = 0.0;
  else
    v18 = 1.0 / v17;
  *(float *)&dword_140404A6C[v14 + 18215746] = v18;
  v19 = *(float *)&dword_140404A6C[v14 + 18215744];
  if ( v19 <= 0.0 )
    v20 = 0.0;
  else
    v20 = 1.0 / v19;
  *(float *)&dword_140404A6C[v14 + 18215747] = v20;
  v21 = dword_140404A6C[v13 + 18215742];
  dword_140404A6C[v13 + 18215748] = v21;
  v22 = dword_140404A6C[v13 + 18215743];
  if ( *(float *)&v21 > *(float *)&v22 )
  {
    dword_140404A6C[v13 + 18215748] = v22;
    v21 = v22;
  }
  v23 = dword_140404A6C[v13 + 18215744];
  if ( *(float *)&v21 > *(float *)&v23 )
    dword_140404A6C[v13 + 18215748] = v23;
  return v11;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005D1F0) ----------------------------------------------------
__int64            sub_14005D1F0(__int64 a1)
{
  float v1; // xmm6_4
  float v2; // xmm1_4
  int v3; // xmm0_4
  signed int v4; // r14d
  __int64 v5; // rdx
  int v6; // ebp
  unsigned int v7; // eax
  signed int v8; // eax
  signed int v9; // esi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D1F0[64];
#define v17 (*(float (*))(void *)(sr_frame_14005D1F0 + 0)) /* [rsp+20h] */
#define v18 (*(float (*))(void *)(sr_frame_14005D1F0 + 4)) /* [rsp+24h] */
#define v19 (*(int (*))(void *)(sr_frame_14005D1F0 + 8)) /* [rsp+28h] */
#define v20 (*(_OWORD (*)[2])(void *)(sr_frame_14005D1F0 + 16)) /* [rsp+30h] */
#define v21 (*(int (*))(void *)(sr_frame_14005D1F0 + 48)) /* [rsp+50h] */

  v1 = *(float *)(a1 + 4);
  v2 = *(float *)a1 - 8.0;
  v20[0] = xmmword_140278D30;
  v20[1] = xmmword_140278D30;
  v21 = 1065353216;
  v3 = *(_DWORD *)(a1 + 8);
  v18 = v1;
  v19 = v3;
  v17 = v2;
  v4 = sr_CreateItem(36, &v17, nullptr, (float *)v20);
  v5 = 1760LL * v4;
  dword_140404A6C[273270150] = v4;
  v6 = 0;
  v7 = dword_140404A6C[v5 + 278845915];
  dword_140404A6C[v5 + 278845897] = 1;
  dword_140404A6C[v5 + 278846111] = v7;
  do
  {
    v1 = v1 + 0.5;
    v18 = v1;
    v8 = sr_CreateItem(36, &v17, nullptr, (float *)v20);
    v9 = v8;
    v10 = v8;
    if ( v6 == 15 )
      dword_140404A6C[47 * dword_140404A6C[1760 * v8 + 278845915] + 18215718] = 1015580809;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v12 = 61LL * (int)result;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v12 + 486149254]), 0, 0xF0u);
    dword_140404A6C[v12 + 486149253] = 1;
    dword_140404A6C[v12 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
    dword_140404A6C[v12 + 486149293] = -1;
    v13 = dword_140404A6C[1760 * v4 + 278845915];
    dword_140404A6C[v12 + 486149291] = v13;
    v14 = dword_140404A6C[1760 * v10 + 278845915];
    dword_140404A6C[v12 + 486149292] = v14;
    dword_140404A6C[v12 + 486149281] = 1048576000;
    dword_140404A6C[v12 + 486149282] = 1052770304;
    dword_140404A6C[v12 + 486149267] = 0;
    *(_QWORD *)&dword_140404A6C[v12 + 486149268] = 1048576000;
    dword_140404A6C[v12 + 486149270] = 0;
    dword_140404A6C[v12 + 486149271] = -1098907648;
    dword_140404A6C[v12 + 486149272] = 0;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v15 = (int)result;
    v16 = 61LL * (int)result;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v16 + 486149254]), 0, 0xF0u);
    dword_140404A6C[v16 + 486149253] = 1;
    dword_140404A6C[v16 + 486149254] = 8;
    result = 18 * v15;
    *(_QWORD *)&dword_140404A6C[v16 + 486149256] = 0x10000;
    dword_140404A6C[v16 + 486149291] = v13;
    ++v6;
    dword_140404A6C[v16 + 486149292] = v14;
    v4 = v9;
    dword_140404A6C[v16 + 486149293] = -1;
    *(_QWORD *)&dword_140404A6C[2 * result + 485543033] = 0;
    dword_140404A6C[2 * result + 485543035] = 0;
    dword_140404A6C[v16 + 486149281] = 0;
    dword_140404A6C[v16 + 486149282] = 998244352;
  }
  while ( v6 < 16 );
  return result;
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 181676084: using guessed type unsigned int;

//----- (000000014005D4C0) ----------------------------------------------------
double            sub_14005D4C0(int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D4C0[16];
#define v8 (*(__int64 (*))(void *)(sr_frame_14005D4C0 + 0)) /* [rsp+20h] */
#define v9 (*(float (*))(void *)(sr_frame_14005D4C0 + 8)) /* [rsp+28h] */

  v9 = -a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v8 = 0;
  sub_140002D00((float *)&v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v8
#undef v9

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005D550) ----------------------------------------------------
__int64            sub_14005D550(int a1)
{
  __int64 v1; // r13
  int v2; // r12d
  signed int v3; // r14d
  int v4; // r15d
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  float v13; // xmm1_4
  double v14; // xmm2_8
  float v15; // xmm0_4
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // xmm0_4
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D550[624];
#define v25 (*(__int64 (*))(void *)(sr_frame_14005D550 + 8)) /* [rsp+0h] */
#define v26 (*(float (*)[4])(void *)(sr_frame_14005D550 + 40)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_14005D550 + 56)) /* [rsp+30h] */
#define v28 (*(__int128 (*))(void *)(sr_frame_14005D550 + 64)) /* [rsp+38h] */
#define v29 (*(__int128 (*))(void *)(sr_frame_14005D550 + 80)) /* [rsp+48h] */
#define v30 (*(int (*))(void *)(sr_frame_14005D550 + 96)) /* [rsp+58h] */
#define v31 (*(char (*)[512])(void *)(sr_frame_14005D550 + 104)) /* [rsp+60h] */
#define v32 (*(__int64 (*))(void *)(sr_frame_14005D550 + 616)) /* [rsp+260h] */

  v1 = a1;
  v2 = sub_14024C22C("data");
  v3 = 0;
  v4 = sub_14024C22C("mission");
  v5 = 0;
  do
  {
    v6 = aTestSrm[v5];
    v31[v5++] = v6;
  }
  while ( v6 );
  v7 = sub_14020B8D8(v31, "rb");
  v8 = v7;
  if ( v7 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v7));
    if ( Buffer != 1 )
    {
      sub_14020B9E8(v8);
      goto LABEL_14;
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[486132853]), 4, 1, (FILE *)(uintptr_t)(v8));
    v9 = 0;
    if ( (int)dword_140404A6C[486132853] > 0 )
    {
      do
      {
        v10 = 4LL * v9;
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 486132854]), 4, 3, (FILE *)(uintptr_t)(v8));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 486132857]), 4, 1, (FILE *)(uintptr_t)(v8));
        ++v9;
      }
      while ( v9 < (int)dword_140404A6C[486132853] );
      v3 = 0;
    }
    sub_14020B9E8(v8);
  }
  if ( !v4 )
    sub_14024C22C("..");
  if ( !v2 )
    sub_14024C22C("..");
LABEL_14:
  v11 = 1025 * v1;
  if ( (int)dword_140404A6C[1025 * v1 + 486132853] > 0 )
  {
    v12 = &dword_140404A6C[v11 + 486132856];
    do
    {
      v13 = *((float *)v12 - 1);
      *(_QWORD *)&v14 = v12[1];
      LODWORD(v26[0]) = *(v12 - 2);
      v15 = *(float *)v12;
      v26[1] = v13;
      v26[2] = v15;
      v28 = xmmword_140278D30;
      v30 = 1065353216;
      v29 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v28, (float *)&v28 + 3, v14);
      v16 = (int)sub_14005CCF0();
      v17 = 3597 * v16;
      dword_140404A6C[v17 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v16 + 71856254], Parameters);
      dword_140404A6C[v17 + 71859139] = 1;
      dword_140404A6C[v17 + 71859816] = 1;
      dword_140404A6C[v17 + 71859821] = 3;
      dword_140404A6C[v17 + 71859822] = 1;
      v28 = xmmword_140278D30;
      v30 = 1065353216;
      v29 = xmmword_140278D30;
      v18 = sub_140053840(v26, (float *)&v28, v16);
      v19 = v12[1];
      dword_140404A6C[v17 + 71856292] = v18;
      dword_140404A6C[v17 + 71859143] = v19;
      dword_140404A6C[7166 * v18 + 280651341] = v19;
      sub_140051DC0(v16);
      v20 = sr_CreateItem(1, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v20, -1, dword_140404A6C[3597 * v16 + 71856292], 0);
      v21 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v21, -1, dword_140404A6C[3597 * v16 + 71856292], 1);
      v22 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v22, -1, dword_140404A6C[3597 * v16 + 71856292], 3);
      v23 = sr_CreateItem(2, v26, nullptr, (float *)&v28);
      sub_1400E35D0(v23, -1, dword_140404A6C[3597 * v16 + 71856292], 3);
      ++v3;
      v12 += 4;
    }
    while ( v3 < (int)dword_140404A6C[v11 + 486132853] );
  }
  return 0; /* the function has no caller */
}
#undef v25
#undef v26
#undef Buffer
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005D920) ----------------------------------------------------
__int64 sub_14005D920()
{
  signed int v0; // ebx
  __int64 v1; // r14
  float v2; // xmm3_4
  float v3; // xmm8_4
  float v4; // xmm6_4
  int v5; // r10d
  float v6; // xmm10_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float v9; // xmm13_4
  float v10; // xmm12_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  signed int v17; // eax
  unsigned int *v18; // rsi
  __int64 v19; // r15
  int v20; // r13d
  int v21; // r12d
  unsigned int *v22; // rbx
  signed int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rdx
  float *v26; // r14
  float *v27; // r15
  signed int v28; // eax
  signed int v29; // eax
  int i; // ebx
  signed int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rbx
  float v34; // xmm1_4
  signed int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdx
  float *v38; // rdi
  float *v39; // r14
  signed int v40; // eax
  signed int v41; // eax
  int j; // ebx
  signed int v43; // eax
  signed int v44; // eax
  __int64 v45; // r15
  int v46; // edi
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rsi
  char v50; // al
  __int64 v51; // rdi
  float v52; // xmm2_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  int v55; // r10d
  float v56; // xmm10_4
  float v57; // xmm9_4
  float v58; // xmm11_4
  float v59; // xmm13_4
  float v60; // xmm12_4
  __int64 v61; // rcx
  float v62; // xmm1_4
  float v63; // xmm5_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  signed int v67; // r14d
  __int64 v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // xmm1_4
  signed int v72; // eax
  __int64 v73; // rbx
  __int64 v74; // rcx
  int v75; // r15d
  unsigned int *v76; // r12
  __int64 v77; // rdi
  __int64 v78; // rbx
  unsigned int v79; // xmm1_4
  signed int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rax
  float *v83; // rdi
  float *v84; // r14
  signed int v85; // eax
  signed int v86; // eax
  int k; // ebx
  signed int v88; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005D920[368];
#define v90 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 0)) /* [rsp+28h] */
#define v91 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 0)) /* [rsp+28h] */
#define v92 (*(float (*))(void *)(sr_frame_14005D920 + 16)) /* [rsp+38h] */
#define v93 (*(float (*))(void *)(sr_frame_14005D920 + 20)) /* [rsp+3Ch] */
#define v94 (*(float (*))(void *)(sr_frame_14005D920 + 24)) /* [rsp+40h] */
#define v95 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 32)) /* [rsp+48h] */
#define v96 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 36)) /* [rsp+4Ch] */
#define v97 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 40)) /* [rsp+50h] */
#define v98 (*(float (*))(void *)(sr_frame_14005D920 + 48)) /* [rsp+58h] */
#define v99 (*(float (*))(void *)(sr_frame_14005D920 + 52)) /* [rsp+5Ch] */
#define v100 (*(float (*))(void *)(sr_frame_14005D920 + 56)) /* [rsp+60h] */
#define v101 (*(float (*))(void *)(sr_frame_14005D920 + 60)) /* [rsp+64h] */
#define v102 (*(float (*))(void *)(sr_frame_14005D920 + 64)) /* [rsp+68h] */
#define v103 (*(float (*))(void *)(sr_frame_14005D920 + 68)) /* [rsp+6Ch] */
#define v104 (*(float (*))(void *)(sr_frame_14005D920 + 72)) /* [rsp+70h] */
#define v105 (*(float (*))(void *)(sr_frame_14005D920 + 76)) /* [rsp+74h] */
#define v106 (*(float (*))(void *)(sr_frame_14005D920 + 80)) /* [rsp+78h] */
#define v107 (*(unsigned int (*))(void *)(sr_frame_14005D920 + 336)) /* [rsp+178h] */
#define v108 (*(signed int (*))(void *)(sr_frame_14005D920 + 336)) /* [rsp+178h] */
#define v109 (*(unsigned int * (*))(void *)(sr_frame_14005D920 + 344)) /* [rsp+180h] */
#define v110 (*(__int64 (*))(void *)(sr_frame_14005D920 + 352)) /* [rsp+188h] */
#define v111 (*(__int64 (*))(void *)(sr_frame_14005D920 + 360)) /* [rsp+190h] */

  *(__m128i *)&dword_140404A6C[284024360] = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
  dword_140404A6C[284024376] = 0;
  *(_OWORD *)&dword_140404A6C[284024364] = *(_OWORD *)&dword_140404A6C[284024360];
  *(_OWORD *)&dword_140404A6C[284024368] = *(_OWORD *)&dword_140404A6C[284024360];
  *(_OWORD *)&dword_140404A6C[284024372] = *(_OWORD *)&dword_140404A6C[284024360];
  v0 = sub_14012CEB0(dword_140404A6C[284024359], 0, 67, 0, 1, 0.0625);
  v1 = 1532LL * v0;
  v110 = v1;
  v2 = *(float *)((char *)&dword_140404A6C[132400654] + v1);
  v3 = *(float *)((char *)&dword_140404A6C[132400655] + v1);
  v4 = *(float *)((char *)&dword_140404A6C[132400651] + v1);
  v5 = *(unsigned int *)((char *)&dword_140404A6C[132400637] + v1);
  v6 = *(float *)((char *)&dword_140404A6C[132400649] + v1);
  v7 = *(float *)((char *)&dword_140404A6C[132400652] + v1);
  v8 = *(float *)((char *)&dword_140404A6C[132400656] + v1);
  v9 = *(float *)((char *)&dword_140404A6C[132400650] + v1);
  v10 = *(float *)((char *)&dword_140404A6C[132400653] + v1);
  v11 = 24944LL * v5;
  v12 = *(float *)((char *)&dword_140404A6C[132400641] + v1) - (float)(v2 * 1.5);
  v98 = *(float *)((char *)&dword_140404A6C[132400648] + v1);
  v101 = v4;
  v104 = v2;
  v99 = v6;
  v102 = v7;
  v105 = v3;
  v13 = -*(float *)&dword_140404A6C[v11 + 346708247];
  v14 = -*(float *)&dword_140404A6C[v11 + 346708248];
  v15 = -*(float *)&dword_140404A6C[v11 + 346708249];
  v100 = v9;
  v103 = v10;
  v106 = v8;
  v92 = (float)((float)(v12 + (float)(v98 * v13)) + (float)(v4 * v14)) + (float)(v2 * v15);
  v93 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[132400642] + v1) - (float)(v3 * 1.5))
                      + (float)(v6 * v13))
              + (float)(v7 * v14))
      + (float)(v3 * v15);
  v16 = *(float *)((char *)&dword_140404A6C[132400643] + v1) - (float)(v8 * 1.5);
  v90 = *(unsigned int *)((char *)&dword_140404A6C[132401011] + v1);
  v95 = *(unsigned int *)((char *)&dword_140404A6C[132400644] + v1);
  v97 = *(unsigned int *)((char *)&dword_140404A6C[132400646] + v1);
  v94 = (float)((float)(v16 + (float)(v9 * v13)) + (float)(v10 * v14)) + (float)(v8 * v15);
  v96 = *(unsigned int *)((char *)&dword_140404A6C[132400645] + v1);
  v17 = sr_CreateVehicle(v5, &v92, &v95, (unsigned int *)&v98, v90);
  v18 = &dword_140404A6C[71856292];
  v19 = 20840LL * v17;
  v20 = 0;
  v107 = v17;
  *(unsigned int *)((char *)&dword_140404A6C[132400639] + v1) = v17;
  v21 = 0;
  v111 = v19;
  *(unsigned int *)((char *)&dword_140404A6C[129720183] + v19) = v0;
  v22 = &dword_140404A6C[284024368];
  v109 = &dword_140404A6C[284024368];
  do
  {
    if ( *(v18 - 39) && *v18 == -1 )
    {
      v23 = sub_140053840(
              (float *)((char *)&dword_140404A6C[129716720] + v19),
              (float *)((char *)&dword_140404A6C[129716726] + v19),
              v21);
      v24 = v23;
      *v18 = v23;
      *v22 = v21;
      sub_140051DC0(v21);
      if ( v20 < (int)dword_140404A6C[24944 * *(unsigned int *)((char *)&dword_140404A6C[132400637] + v1) + 346732491] )
      {
        v25 = 7166 * v24;
        dword_140404A6C[v25 + 280651313] = v107;
        dword_140404A6C[v25 + 280651314] = v20;
      }
      if ( v20 > 0 && (_DWORD)v24 != -1 )
      {
        v26 = (float *)&dword_140404A6C[7166 * v24 + 280651452];
        v27 = (float *)&dword_140404A6C[7166 * v24 + 280651440];
        v28 = sr_CreateItem(9, v27, nullptr, v26);
        sub_1400E35D0(v28, -1, v24, 0);
        v29 = sr_CreateItem(10, v27, nullptr, v26);
        sub_1400E35D0(v29, -1, v24, 1);
        for ( i = 1; i < 8; ++i )
        {
          v31 = sr_CreateItem(10, v27, nullptr, v26);
          sub_1400E35D0(v31, -1, v24, ((i - 1) >> 1) + 3);
        }
        v22 = v109;
        v1 = v110;
        v19 = v111;
      }
      ++v20;
      v18[1] = 0x40000000;
      ++v22;
      v18[3] = -1082130432;
      v109 = v22;
    }
    ++v21;
    v18 += 3597;
  }
  while ( v21 < 256 );
  if ( v20 == 1 )
  {
    v32 = (int)sub_14005CCF0();
    v33 = 3597 * v32;
    dword_140404A6C[v33 + 71856286] = 0;
    sub_140158AB0(&dword_140404A6C[3597 * v32 + 71856254], "Gunner");
    v34 = *(float *)((char *)&dword_140404A6C[129716721] + v19);
    v92 = *(float *)((char *)&dword_140404A6C[129716720] + v19);
    v94 = *(float *)((char *)&dword_140404A6C[129716722] + v19);
    v93 = v34;
    dword_140404A6C[v33 + 71859139] = 1;
    dword_140404A6C[284024369] = v32;
    dword_140404A6C[v33 + 71859816] = 1;
    *(_QWORD *)&dword_140404A6C[v33 + 71859821] = 1;
    v35 = sub_140053840(&v92, (float *)((char *)&dword_140404A6C[129716726] + v19), v32);
    v36 = v35;
    dword_140404A6C[v33 + 71856292] = v35;
    sub_140051DC0(v32);
    v37 = 7166 * v36;
    dword_140404A6C[v37 + 280651313] = v107;
    dword_140404A6C[v37 + 280651314] = 1;
    if ( (_DWORD)v36 != -1 )
    {
      v38 = (float *)&dword_140404A6C[v37 + 280651452];
      v39 = (float *)&dword_140404A6C[v37 + 280651440];
      v40 = sr_CreateItem(
              9,
              (float *)&dword_140404A6C[v37 + 280651440],
              nullptr,
              (float *)&dword_140404A6C[v37 + 280651452]);
      sub_1400E35D0(v40, -1, v36, 0);
      v41 = sr_CreateItem(10, v39, nullptr, v38);
      sub_1400E35D0(v41, -1, v36, 1);
      for ( j = 1; j < 8; ++j )
      {
        v43 = sr_CreateItem(10, v39, nullptr, v38);
        sub_1400E35D0(v43, -1, v36, ((j - 1) >> 1) + 3);
      }
    }
  }
  v44 = sub_14012CEB0(7, 1u, 67, 0, 1, 0.875);
  v45 = v44;
  dword_140404A6C[179992045] = v44;
  if ( dword_140404A6C[225426046] )
  {
    v47 = 0;
    v46 = rand() % (signed int)dword_140404A6C[225426046];
    do
    {
      v48 = 396LL * v46;
      if ( (int)dword_140404A6C[v48 + 225426059] <= 3 && (int)dword_140404A6C[v48 + 225426060] <= 3 )
        break;
      ++v47;
      v46 = rand() % (signed int)dword_140404A6C[225426046];
    }
    while ( v47 < 1024 );
  }
  else
  {
    v46 = 0;
  }
  v49 = 383 * v45;
  v50 = rand();
  sub_140008E40(v45, dword_140404A6C[383 * v45 + 132400993], 0, v46, v50 & 1);
  v51 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + 1532 * v45 + 533815948;
  dword_140404A6C[v49 + 132400668] = 0;
  *(_QWORD *)v51 = 1065353216;
  *(_QWORD *)(v51 + 8) = 0;
  *(_QWORD *)(v51 + 16) = 1065353216;
  *(_QWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 32) = 1065353216;
  sub_14007B2A0(v51, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 1532 * v45 + 533815960), sr_export_float_lane_container(1070141403));
  sub_14007B2A0(
    ((intptr_t)dword_140404A6C - 0x404a6cLL) + v49 * 4 + 533815948,
    (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v49 * 4 + 533815960),
    sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v49 + 132400647]));
  v52 = *(float *)&dword_140404A6C[383 * v45 + 132400654];
  v53 = *(float *)&dword_140404A6C[383 * v45 + 132400655];
  v54 = *(float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 1532 * v45 + 533815960);
  v55 = dword_140404A6C[383 * v45 + 132400637];
  v56 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 1532 * v45 + 533815948);
  v57 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 1532 * v45 + 533815960);
  v58 = *(float *)&dword_140404A6C[383 * v45 + 132400656];
  v59 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 1532 * v45 + 533815948);
  v60 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 1532 * v45 + 533815960);
  v61 = 24944LL * v55;
  v62 = *(float *)&dword_140404A6C[v49 + 132400641] - (float)(*(float *)&dword_140404A6C[v49 + 132400654] * 1.5);
  v98 = *(float *)v51;
  v101 = v54;
  v104 = v52;
  v99 = v56;
  v102 = v57;
  v105 = v53;
  v63 = -*(float *)&dword_140404A6C[v61 + 346708247];
  v64 = -*(float *)&dword_140404A6C[v61 + 346708248];
  v65 = -*(float *)&dword_140404A6C[v61 + 346708249];
  v100 = v59;
  v103 = v60;
  v106 = v58;
  v92 = (float)((float)(v62 + (float)(v98 * v63)) + (float)(v54 * v64)) + (float)(v52 * v65);
  v93 = (float)((float)((float)(*(float *)&dword_140404A6C[383 * v45 + 132400642] - (float)(v53 * 1.5))
                      + (float)(v56 * v63))
              + (float)(v57 * v64))
      + (float)(v53 * v65);
  v66 = (float)(*(float *)&dword_140404A6C[383 * v45 + 132400643] - (float)(v58 * 1.5)) + (float)(v59 * v63);
  v91 = dword_140404A6C[383 * v45 + 132401011];
  v95 = dword_140404A6C[383 * v45 + 132400644];
  v97 = dword_140404A6C[383 * v45 + 132400646];
  v94 = (float)(v66 + (float)(v60 * v64)) + (float)(v58 * v65);
  v96 = dword_140404A6C[383 * v45 + 132400645];
  v67 = sr_CreateVehicle(v55, &v92, &v95, (unsigned int *)&v98, v91);
  v68 = 5210LL * v67;
  v108 = v67;
  dword_140404A6C[v49 + 132400639] = v67;
  dword_140404A6C[v68 + 129720183] = v45;
  dword_140404A6C[v68 + 129720333] = 1134542848;
  v69 = (int)sub_14005CCF0();
  v70 = 3597 * v69;
  dword_140404A6C[v70 + 71856286] = 7;
  sub_140158AB0((_BYTE *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 14388 * v69 + 291638372), Parameters);
  v71 = dword_140404A6C[v68 + 129716721];
  v92 = *(float *)&dword_140404A6C[v68 + 129716720];
  v94 = *(float *)&dword_140404A6C[v68 + 129716722];
  v93 = *(float *)&v71;
  dword_140404A6C[v70 + 71859139] = 1;
  dword_140404A6C[284024360] = v69;
  dword_140404A6C[v70 + 71859816] = 1;
  dword_140404A6C[v70 + 71859821] = 2;
  dword_140404A6C[v70 + 71859822] = 1;
  dword_140404A6C[v70 + 71859142] = 1;
  *(_QWORD *)&dword_140404A6C[v70 + 71859146] = 0;
  v72 = sub_140053840(&v92, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v68 * 4 + 523080260), v69);
  v73 = v72;
  dword_140404A6C[v70 + 71856292] = v72;
  sub_140051DC0(v69);
  v74 = 7166 * v73;
  dword_140404A6C[v74 + 280651313] = v67;
  dword_140404A6C[v74 + 280651314] = 0;
  v75 = 1;
  if ( (int)dword_140404A6C[284024357] > 1 )
  {
    v76 = &dword_140404A6C[284024361];
    do
    {
      v77 = (int)sub_14005CCF0();
      v78 = 3597 * v77;
      dword_140404A6C[v78 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v77 + 71856254], Parameters);
      v79 = dword_140404A6C[v68 + 129716721];
      v92 = *(float *)&dword_140404A6C[v68 + 129716720];
      v94 = *(float *)&dword_140404A6C[v68 + 129716722];
      v93 = *(float *)&v79;
      dword_140404A6C[v78 + 71859139] = 1;
      *v76 = v77;
      dword_140404A6C[v78 + 71859816] = 1;
      dword_140404A6C[v78 + 71859821] = 2;
      dword_140404A6C[v78 + 71859822] = 1;
      v80 = sub_140053840(&v92, (float *)&dword_140404A6C[v68 + 129716726], v77);
      v81 = v80;
      dword_140404A6C[v78 + 71856292] = v80;
      sub_140051DC0(v77);
      v82 = 7166 * v81;
      dword_140404A6C[v82 + 280651313] = v67;
      dword_140404A6C[v82 + 280651314] = v75;
      if ( (_DWORD)v81 != -1 )
      {
        v83 = (float *)&dword_140404A6C[v82 + 280651452];
        v84 = (float *)&dword_140404A6C[v82 + 280651440];
        v85 = sr_CreateItem(
                7,
                (float *)&dword_140404A6C[v82 + 280651440],
                nullptr,
                (float *)&dword_140404A6C[v82 + 280651452]);
        sub_1400E35D0(v85, -1, v81, 0);
        v86 = sr_CreateItem(8, v84, nullptr, v83);
        sub_1400E35D0(v86, -1, v81, 1);
        for ( k = 1; k < 4; ++k )
        {
          v88 = sr_CreateItem(8, v84, nullptr, v83);
          sub_1400E35D0(v88, -1, v81, ((k - 1) >> 1) + 3);
        }
        v67 = v108;
      }
      ++v75;
      ++v76;
    }
    while ( v75 < (int)dword_140404A6C[284024357] );
  }
  return sub_14012E960(128);
}
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
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402799B0: using guessed type __int128 xmmword_1402799B0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2220: using guessed type unsigned int;
// 183F7C30C: using guessed type unsigned int;
// 183F7C31C: using guessed type unsigned int;
// 183F7C32C: using guessed type unsigned int;
// 183F7C330: using guessed type unsigned int;
// 183F7C33C: using guessed type unsigned int;
// 183F7C34C: using guessed type unsigned int;

//----- (000000014005E520) ----------------------------------------------------
__int64 sub_14005E520()
{
  signed int v0; // r8d
  unsigned int *v1; // r10
  int v2; // r9d
  signed int v3; // edi
  int v4; // r11d
  int v5; // ebx
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  unsigned int *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // r9d
  int v18; // ebx
  int v19; // esi
  unsigned int v20; // edi
  signed int v21; // edx
  unsigned int *v22; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E520[80];
#define v24 (*(__int64 (*))(void *)(sr_frame_14005E520 + 0)) /* [rsp+0h] */
#define v25 (*(unsigned int (*)[8])(void *)(sr_frame_14005E520 + 32)) /* [rsp+20h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14005E520 + 64)) /* [rsp+40h] */

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  v3 = 0;
  dword_140404A6C[487148754] = 0;
  dword_140404A6C[283831504] = 0;
  v4 = 0;
  dword_140404A6C[283837377] = 0;
  dword_140404A6C[283843250] = 0;
  dword_140404A6C[487148679] = 0;
  do
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = v4;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    ++v4;
    v1 += 5873;
  }
  while ( v4 < 3 );
  if ( v3 > 0 )
    v2 /= v3;
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( v3 )
  {
    if ( v3 > 1 )
    {
      v12 = 1024;
      do
      {
        v13 = rand() % (signed int)dword_140404A6C[487148679];
        v14 = rand();
        v15 = &dword_140404A6C[v13 + 487148677];
        v16 = v14 % (signed int)dword_140404A6C[487148679];
        v17 = dword_140404A6C[v16 + 487148680];
        dword_140404A6C[v16 + 487148680] = v15[3];
        v15[3] = v17;
        --v12;
      }
      while ( v12 );
      v3 = dword_140404A6C[487148679];
    }
    while ( 1 )
    {
      v18 = v3;
      if ( v3 > 0 )
        sub_1401FC920((__m128i *)v25, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
      v19 = 1;
      if ( v3 >= 2 && (rand() & 7u) < 6 )
      {
        v19 = 0;
        if ( (rand() & 1) == 0 && v3 > 3 )
          v18 = 3;
        if ( (rand() & 0xF) == 0 && v18 > 2 )
          break;
      }
      if ( v18 != 3 || (rand() & 3) != 0 )
      {
        if ( v19 == 1 )
        {
          if ( (rand() & 3u) < 2 && v18 > 3 )
            v18 = 3;
          if ( (rand() & 3) == 0 && v18 > 2 )
            v18 = 2;
          if ( (rand() & 3) == 0 && v18 > 1 )
            v18 = 1;
          sub_140059640(1u, v18, (__int64)v25);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      sub_140059920(3, 3, (char *)v25);
LABEL_56:
      v20 = dword_140404A6C[487148679];
      ++dword_140404A6C[283785906];
      v21 = 0;
      if ( (signed int)(dword_140404A6C[487148679] - v18) > 0 )
      {
        v22 = &dword_140404A6C[487148680];
        do
        {
          ++v21;
          *v22 = v22[v18];
          ++v22;
          v20 = dword_140404A6C[487148679];
        }
        while ( v21 < (signed int)(dword_140404A6C[487148679] - v18) );
      }
      v3 = v20 - v18;
      dword_140404A6C[487148679] = v3;
      if ( v3 <= 0 )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v18 = 2;
LABEL_55:
    sub_14005A0E0(0, v18, v25);
    goto LABEL_56;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v24
#undef v25
#undef v26

// 14005E7C2: conditional instruction was optimized away because esi.4==0
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 183E93534: using guessed type unsigned int;
// 183EBFDAC: using guessed type unsigned int;
// 183EC5970: using guessed type unsigned int;
// 183ECB534: using guessed type unsigned int;
// 1B4657C88: using guessed type unsigned int;
// 1B4657DB4: using guessed type unsigned int;

//----- (000000014005E860) ----------------------------------------------------
__int64 sub_14005E860()
{
  int v0; // r9d
  unsigned int *v1; // r10
  int v2; // r11d
  signed int v3; // r8d
  int i; // ebx
  int v5; // edi
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // r9d
  int v24; // ebx
  unsigned int v25; // r8d
  signed int v26; // edx
  unsigned int *v27; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005E860[80];
#define v29 (*(__int64 (*))(void *)(sr_frame_14005E860 + 0)) /* [rsp+0h] */
#define v30 (*(__m128i (*)[2])(void *)(sr_frame_14005E860 + 32)) /* [rsp+20h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_14005E860 + 64)) /* [rsp+40h] */

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  dword_140404A6C[487148754] = 0;
  v3 = 0;
  dword_140404A6C[487148679] = 0;
  for ( i = 0; i < 6; ++i )
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = i;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    v1 += 5873;
  }
  if ( v3 > 0 )
    v2 /= v3;
  v12 = dword_140404A6C[283831474];
  v13 = dword_140404A6C[456202453];
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( !dword_140404A6C[283831506] )
  {
    if ( dword_140404A6C[456202453] )
    {
      v14 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v14) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v14) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v14) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v14) = 1;
    }
    dword_140404A6C[283831509] = 1;
  }
  if ( !dword_140404A6C[283837379] )
  {
    if ( v13 )
    {
      v15 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v15) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v15) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15) = 1;
    }
    dword_140404A6C[283837382] = 1;
  }
  if ( !dword_140404A6C[283843252] )
  {
    if ( v13 )
    {
      v16 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v16) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v16) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v16) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v16) = 1;
    }
    dword_140404A6C[283843255] = 1;
  }
  if ( !dword_140404A6C[283849125] )
  {
    if ( v13 )
    {
      v17 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v17) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v17) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v17) = 3;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v17) = 1;
    }
    dword_140404A6C[283849128] = 1;
  }
  if ( !dword_140404A6C[283854998] )
  {
    if ( v13 )
    {
      v18 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v18) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v18) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v18) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v18) = 1;
    }
    dword_140404A6C[283855001] = 1;
  }
  if ( !dword_140404A6C[283860871] )
  {
    if ( v13 )
    {
      v19 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v19) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v19) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v19) = 5;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v19) = 1;
    }
    dword_140404A6C[283860874] = 1;
  }
  if ( v3 && v0 <= 3726000 )
  {
    if ( v3 > 1 )
    {
      v20 = 1024;
      do
      {
        v21 = rand() % (signed int)dword_140404A6C[487148679];
        v22 = 4LL * (rand() % (signed int)dword_140404A6C[487148679]) + 1952808076;
        v23 = *(_DWORD *)(v22 + ((intptr_t)dword_140404A6C - 0x404a6cLL));
        *(_DWORD *)(v22 + ((intptr_t)dword_140404A6C - 0x404a6cLL)) = dword_140404A6C[v21 + 487148680];
        dword_140404A6C[v21 + 487148680] = v23;
        --v20;
      }
      while ( v20 );
      v3 = dword_140404A6C[487148679];
    }
    do
    {
      v24 = v3;
      if ( v3 > 0 )
        sub_1401FC920(v30, (     __m128i *)&dword_140404A6C[487148680], 4LL * v3);
      if ( (rand() & 3u) < 2 && v24 > 3 )
        v24 = 3;
      if ( (rand() & 3) == 0 && v24 > 2 )
        v24 = 2;
      if ( (rand() & 3) == 0 && v24 > 1 )
        v24 = 1;
      sub_1400589A0(0, v24, (__int64)v30);
      v25 = dword_140404A6C[487148679];
      v26 = 0;
      ++dword_140404A6C[283785906];
      if ( (signed int)(dword_140404A6C[487148679] - v24) > 0 )
      {
        v27 = &dword_140404A6C[487148680];
        do
        {
          ++v26;
          *v27 = v27[v24];
          ++v27;
          v25 = dword_140404A6C[487148679];
        }
        while ( v26 < (signed int)(dword_140404A6C[487148679] - v24) );
      }
      v3 = v25 - v24;
      dword_140404A6C[487148679] = v3;
    }
    while ( v3 > 0 );
  }
  return 0; /* the function has no caller */
}
#undef v29
#undef v30
#undef v31

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC0: using guessed type unsigned int;
// 183E93534: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFDC0: using guessed type unsigned int;
// 183EC5984: using guessed type unsigned int;
// 183ECB548: using guessed type unsigned int;
// 183ED110C: using guessed type unsigned int;
// 183ED6CD0: using guessed type unsigned int;
// 183EDC894: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1B4657C88: using guessed type unsigned int;
// 1B4657DB4: using guessed type unsigned int;

//----- (000000014005ED40) ----------------------------------------------------
__int64            sub_14005ED40(int a1, float *a2, __int64 a3, float a4, float a5)
{
  __int64 v6; // rdi
  float v7; // xmm6_4
  float v8; // xmm7_4

  v6 = a1;
  v7 = 1.0;
  v8 = fminf(a4, 1.0);
  if ( fsqrt(
         (float)((float)((float)(*(float *)&dword_140404A6C[284024503] - a2[1])
                       * (float)(*(float *)&dword_140404A6C[284024503] - a2[1]))
               + (float)((float)(*(float *)&dword_140404A6C[284024502] - *a2)
                       * (float)(*(float *)&dword_140404A6C[284024502] - *a2)))
       + (float)((float)(*(float *)&dword_140404A6C[284024504] - a2[2])
               * (float)(*(float *)&dword_140404A6C[284024504] - a2[2]))) > 128.0
    || (unsigned int)sub_1400DC050(a2, (float *)&dword_140404A6C[284024502], 0) )
  {
    v7 = 0.5;
  }
  if ( dword_140404A6C[8 * v6 + 18165777] )
    sub_140069FA0(v6, (unsigned int *)a2, v8 * v7, a5, 0);
  return 0xFFFFFFFFLL;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014005EE40) ----------------------------------------------------
__int64            sub_14005EE40(unsigned int a1, unsigned int *a2, float *a3, float a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned int v7; // xmm0_4
  float *v8; // rdi
  float *v9; // rbp
  int v10; // xmm3_4
  int v11; // xmm2_4
  int v12; // xmm1_4
  float *v13; // rdx

  v4 = dword_140404A6C[433435845];
  if ( (int)dword_140404A6C[433435845] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v6 = 37LL * (int)dword_140404A6C[433435845];
  dword_140404A6C[v6 + 432826949] = a1;
  dword_140404A6C[v6 + 432826952] = *a2;
  dword_140404A6C[v6 + 432826953] = a2[1];
  dword_140404A6C[v6 + 432826954] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v6 + 432826955] = *(_DWORD *)a3;
    dword_140404A6C[v6 + 432826956] = *((_DWORD *)a3 + 1);
    v7 = *((_DWORD *)a3 + 2);
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[v6 + 432826955] = 0;
    v7 = 0;
  }
  dword_140404A6C[v6 + 432826957] = v7;
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1u:
        dword_140404A6C[v6 + 432826950] = 0xFFFF;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4 * 0.25;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4 * 0.5;
        dword_140404A6C[v6 + 432826951] = 993158992;
        dword_140404A6C[v6 + 432826983] = 1065311273;
        break;
      case 2u:
        dword_140404A6C[v6 + 432826950] = 60;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4;
        dword_140404A6C[v6 + 432826951] = 993158992;
        dword_140404A6C[v6 + 432826983] = 1064933786;
        break;
      case 5u:
        *(_QWORD *)&dword_140404A6C[v6 + 432826950] = 3;
        *(float *)&dword_140404A6C[v6 + 432826984] = a4;
        *(float *)&dword_140404A6C[v6 + 432826985] = a4;
        dword_140404A6C[v6 + 432826983] = 1063256064;
        break;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[v6 + 432826950] = 0xFFFF;
    *(float *)&dword_140404A6C[v6 + 432826984] = a4;
    *(float *)&dword_140404A6C[v6 + 432826985] = a4;
    dword_140404A6C[v6 + 432826983] = 0;
    v8 = (float *)&dword_140404A6C[v6 + 432826949];
    sub_14007A240((__int64)&dword_140404A6C[v6 + 432826967], a3);
    v9 = (float *)&dword_140404A6C[v6 + 432826949];
    if ( fabs(*(float *)&dword_140404A6C[v6 + 432826968]) >= 0.70700002 )
    {
      v10 = dword_1402F617C;
      v11 = dword_1402F6180;
      v9[12] = (float)(*(float *)&dword_1402F617C * v8[20]) - (float)(*(float *)&dword_1402F6180 * v8[19]);
      v12 = dword_1402F6178;
    }
    else
    {
      v10 = dword_1402F618C;
      v11 = dword_1402F6190;
      v9[12] = (float)(*(float *)&dword_1402F618C * v8[20]) - (float)(*(float *)&dword_1402F6190 * v8[19]);
      v12 = dword_1402F6188;
    }
    v9[13] = (float)(*(float *)&v11 * v8[18]) - (float)(*(float *)&v12 * v8[20]);
    v9[14] = (float)(*(float *)&v12 * v8[19]) - (float)(*(float *)&v10 * v8[18]);
    sub_14007A240((__int64)(v9 + 12), v9 + 12);
    v13 = (float *)&dword_140404A6C[v6 + 432826964];
    *v13 = (float)(v8[19] * v9[14]) - (float)(v8[20] * v9[13]);
    v13[1] = (float)(v9[12] * v8[20]) - (float)(v9[14] * v8[18]);
    v13[2] = (float)(v9[13] * v8[18]) - (float)(v9[12] * v8[19]);
    sub_14007A240((__int64)v13, v13);
    *(float *)&dword_140404A6C[v6 + 432826952] = (float)(v8[18] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826952];
    *(float *)&dword_140404A6C[v6 + 432826953] = (float)(v8[19] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826953];
    *(float *)&dword_140404A6C[v6 + 432826954] = (float)(v8[20] * 0.015625) + *(float *)&dword_140404A6C[v6 + 432826954];
  }
  dword_140404A6C[433435845] = v4 + 1;
  return v4;
}

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A7971D80: using guessed type unsigned int;

//----- (000000014005F150) ----------------------------------------------------
__int64            sub_14005F150(unsigned int a1, unsigned int *a2, unsigned int *a3, float *a4)
{
  unsigned int v4; // r11d
  __int64 v7; // r8
  unsigned int v8; // xmm0_4
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  float v12; // xmm1_4
  int v13; // ecx
  unsigned int v14; // xmm2_4
  unsigned int v15; // r11d
  unsigned int v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4

  v4 = dword_140404A6C[431564581];
  if ( (int)dword_140404A6C[431564581] >= 0x4000 )
    return 0xFFFFFFFFLL;
  v7 = 26LL * (int)dword_140404A6C[431564581];
  dword_140404A6C[v7 + 431138501] = a1;
  dword_140404A6C[v7 + 431138504] = *a2;
  dword_140404A6C[v7 + 431138505] = a2[1];
  dword_140404A6C[v7 + 431138506] = a2[2];
  if ( a3 )
  {
    dword_140404A6C[v7 + 431138507] = *a3;
    dword_140404A6C[v7 + 431138508] = a3[1];
    v8 = a3[2];
  }
  else
  {
    v8 = 0;
    *(_QWORD *)&dword_140404A6C[v7 + 431138507] = 0;
  }
  dword_140404A6C[v7 + 431138509] = v8;
  dword_140404A6C[v7 + 431138510] = *(_DWORD *)a4;
  dword_140404A6C[v7 + 431138511] = *((_DWORD *)a4 + 1);
  dword_140404A6C[v7 + 431138512] = *((_DWORD *)a4 + 2);
  dword_140404A6C[v7 + 431138513] = *((_DWORD *)a4 + 3);
  dword_140404A6C[v7 + 431138514] = *((_DWORD *)a4 + 4);
  dword_140404A6C[v7 + 431138515] = *((_DWORD *)a4 + 5);
  v9 = dword_140404A6C[133919253];
  dword_140404A6C[v7 + 431138516] = *((_DWORD *)a4 + 6);
  dword_140404A6C[v7 + 431138517] = *((_DWORD *)a4 + 7);
  v10 = v9 + 1;
  dword_140404A6C[v7 + 431138518] = *((_DWORD *)a4 + 8);
  dword_140404A6C[v7 + 431138523] = 993158992;
  dword_140404A6C[v7 + 431138524] = 1065311273;
  dword_140404A6C[133919253] = v10;
  v11 = 15731 * ((v9 << 13) ^ v9) * ((v9 << 13) ^ v9) + 789221;
  v13 = 15731 * (v10 ^ ((v9 + 1) << 13)) * (v10 ^ ((v9 + 1) << 13)) + 789221;
  v12 = (float)(0.06666667 - (float)((float)((v11 * v11 - 771171059) & 0x7FFFFFFF) * 6.2088175e-11)) + 0.20000002;
  *(float *)&v14 = v12 * a4[3];
  v15 = v4 + 1;
  dword_140404A6C[v7 + 431138519] = v14;
  *(float *)&dword_140404A6C[v7 + 431138520] = v12 * a4[4];
  *(float *)&v16 = v12 * a4[5];
  dword_140404A6C[133919253] = v10 + 1;
  dword_140404A6C[v7 + 431138521] = v16;
  v17 = -0.20000002 - (float)((float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * -6.2088175e-11) + 0.06666667);
  *(float *)&dword_140404A6C[v7 + 431138519] = (float)(v17 * *a4) + *(float *)&v14;
  *(float *)&dword_140404A6C[v7 + 431138520] = (float)(v17 * a4[1]) + *(float *)&dword_140404A6C[v7 + 431138520];
  v18 = v17 * a4[2];
  dword_140404A6C[431564581] = v15;
  *(float *)&dword_140404A6C[v7 + 431138521] = v18 + *(float *)&dword_140404A6C[v7 + 431138521];
  dword_140404A6C[v7 + 431138524] = 1065311273;
  dword_140404A6C[v7 + 431138503] = 1;
  return v15 - 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12C0: using guessed type unsigned int;
// 1A724E700: using guessed type unsigned int;

//----- (000000014005F370) ----------------------------------------------------
double            sub_14005F370(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int *v5; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F370[16];
#define v7 (*(__int64 (*))(void *)(sr_frame_14005F370 + 0)) /* [rsp+20h] */
#define v8 (*(int (*))(void *)(sr_frame_14005F370 + 8)) /* [rsp+28h] */

  dword_140404A6C[177167565] = 0;
  v3 = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  if ( a2 == 1 )
  {
    v7 = 0;
    v8 = 0;
    sub_140002D00((float *)&v7, 0.02, 0.02, 0.02);
    v3 = dword_140404A6C[177495247];
  }
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v5 - 1) = 0;
      ++v4;
      *(_QWORD *)(v5 + 1) = 0;
      *(_QWORD *)(v5 + 3) = 0;
      v5 += 6;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v7
#undef v8

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F400) ----------------------------------------------------
double            sub_14005F400(int a1)
{
  int v2; // ecx
  unsigned int *v3; // rax
  float v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = -0.042187501;
  v5[1] = 0.0;
  v5[2] = -0.125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v5, 0.037500001, 0.03125, 0.001);
  *(float *)&dword_140404A6C[177167570] = *(float *)&dword_140404A6C[177167570] + -0.0093750004;
  *(float *)&dword_140404A6C[177167573] = *(float *)&dword_140404A6C[177167573] + -0.0093750004;
  *(float *)&dword_140404A6C[177167576] = *(float *)&dword_140404A6C[177167576] + 0.0046875002;
  *(float *)&dword_140404A6C[177167567] = *(float *)&dword_140404A6C[177167567] + 0.0046875002;
  v5[0] = 0.042187501;
  sub_140002D00(v5, 0.037500001, 0.03125, 0.001);
  v2 = 0;
  *(float *)&dword_140404A6C[177167591] = *(float *)&dword_140404A6C[177167591] + 0.0093750004;
  *(float *)&dword_140404A6C[177167600] = *(float *)&dword_140404A6C[177167600] + 0.0093750004;
  *(float *)&dword_140404A6C[177167594] = *(float *)&dword_140404A6C[177167594] + -0.0046875002;
  *(float *)&dword_140404A6C[177167597] = *(float *)&dword_140404A6C[177167597] + -0.0046875002;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v3 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v3 - 1) = 0;
      ++v2;
      *(_QWORD *)(v3 + 1) = 0;
      *(_QWORD *)(v3 + 3) = 0;
      v3 += 6;
    }
    while ( v2 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F5A0) ----------------------------------------------------
double            sub_14005F5A0(int a1, float a2, float a3, float a4)
{
  int v5; // ebx
  float v6; // xmm0_4
  float v7; // xmm0_4
  int v8; // ecx
  unsigned int *v9; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F5A0[16];
#define v11 (*(float (*))(void *)(sr_frame_14005F5A0 + 0)) /* [rsp+20h] */
#define v12 (*(float (*))(void *)(sr_frame_14005F5A0 + 4)) /* [rsp+24h] */
#define v13 (*(float (*))(void *)(sr_frame_14005F5A0 + 8)) /* [rsp+28h] */

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v12 = a3 - 0.0625;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v11 = 0.0;
  v13 = 0.0;
  sub_140002D00(&v11, a2, 0.0625, a4);
  v5 = 0;
  v12 = -0.0625;
  do
  {
    if ( !v5 || v5 == 3 )
      v6 = 0.0625 - a2;
    else
      v6 = a2 - 0.0625;
    v11 = v6;
    if ( (unsigned int)v5 >= 2 )
      v7 = a4 - 0.0625;
    else
      v7 = 0.0625 - a4;
    v13 = v7;
    sub_140002D00(&v11, 0.0625, a3, 0.0625);
    ++v5;
  }
  while ( v5 < 4 );
  v8 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v9 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v9 - 1) = 0;
      ++v8;
      *(_QWORD *)(v9 + 1) = 0;
      *(_QWORD *)(v9 + 3) = 0;
      v9 += 6;
    }
    while ( v8 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}
#undef v11
#undef v12
#undef v13

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005F6E0) ----------------------------------------------------
__int64            sub_14005F6E0(unsigned int a1, float *a2, float a3, float a4)
{
  int v4; // r15d
  __int64 v5; // r11
  __int64 v7; // rax
  unsigned int v8; // xmm3_4
  unsigned int v9; // xmm3_4
  unsigned int v10; // xmm3_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm12_4
  float v16; // xmm2_4
  float v17; // xmm13_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm11_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm2_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm8_4
  float v38; // xmm10_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm10_4
  float v50; // xmm8_4
  float v51; // xmm2_4
  float v52; // xmm8_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm13_4
  float v60; // xmm6_4
  float v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm1_4
  float v65; // xmm5_4
  float v66; // xmm6_4
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 v69; // rax
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm5_4
  int v75; // edx
  float v76; // xmm9_4
  float v77; // xmm8_4
  float v78; // xmm10_4
  float v79; // xmm11_4
  float v80; // xmm12_4
  float v81; // xmm13_4
  float v82; // xmm3_4
  float v83; // xmm2_4
  float v84; // xmm4_4
  __int64 v85; // rcx
  int i; // esi
  unsigned int v87; // edi
  __int64 v88; // r14
  unsigned int v89; // r10d
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // edx
  __int64 v98; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005F6E0[320];
#define v100 (*(__int64 (*))(void *)(sr_frame_14005F6E0 + 0)) /* [rsp+8h] */
#define v101 (*(float (*))(void *)(sr_frame_14005F6E0 + 32)) /* [rsp+28h] */
#define v102 (*(float (*))(void *)(sr_frame_14005F6E0 + 36)) /* [rsp+2Ch] */
#define v103 (*(float (*))(void *)(sr_frame_14005F6E0 + 40)) /* [rsp+30h] */
#define v104 (*(float (*))(void *)(sr_frame_14005F6E0 + 44)) /* [rsp+34h] */
#define v105 (*(float (*))(void *)(sr_frame_14005F6E0 + 48)) /* [rsp+38h] */
#define v106 (*(float (*))(void *)(sr_frame_14005F6E0 + 56)) /* [rsp+40h] */
#define v107 (*(float (*))(void *)(sr_frame_14005F6E0 + 60)) /* [rsp+44h] */
#define v108 (*(float (*)[12])(void *)(sr_frame_14005F6E0 + 64)) /* [rsp+48h] */
#define v109 (*(float (*))(void *)(sr_frame_14005F6E0 + 112)) /* [rsp+78h] */
#define v110 (*(int (*))(void *)(sr_frame_14005F6E0 + 116)) /* [rsp+7Ch] */
#define v111 (*(_DWORD (*)[10])(void *)(sr_frame_14005F6E0 + 120)) /* [rsp+80h] */
#define v112 (*(float (*))(void *)(sr_frame_14005F6E0 + 160)) /* [rsp+A8h] */
#define v113 (*(float (*))(void *)(sr_frame_14005F6E0 + 164)) /* [rsp+ACh] */
#define v114 (*(float (*)[10])(void *)(sr_frame_14005F6E0 + 168)) /* [rsp+B0h] */
#define v115 (*(float (*))(void *)(sr_frame_14005F6E0 + 208)) /* [rsp+D8h] */
#define v116 (*(float (*))(void *)(sr_frame_14005F6E0 + 212)) /* [rsp+DCh] */
#define v117 (*(_DWORD (*)[10])(void *)(sr_frame_14005F6E0 + 216)) /* [rsp+E0h] */
#define v118 (*(float (*))(void *)(sr_frame_14005F6E0 + 256)) /* [rsp+108h] */
#define v119 (*(int (*))(void *)(sr_frame_14005F6E0 + 260)) /* [rsp+10Ch] */
#define v120 (*(_DWORD (*)[10])(void *)(sr_frame_14005F6E0 + 264)) /* [rsp+110h] */
#define v121 (*(__int64 (*))(void *)(sr_frame_14005F6E0 + 304)) /* [rsp+138h] */

  v4 = dword_140404A6C[421506973];
  v5 = 15432LL * (int)dword_140404A6C[421506973];
  v101 = a3;
  v7 = (int)dword_140404A6C[421506973];
  dword_140404A6C[v5 + 358297501] = a1;
  dword_140404A6C[v5 + 358297506] = 0;
  dword_140404A6C[v5 + 358300579] = 0;
  *(float *)&v8 = a2[3] + *a2;
  dword_140404A6C[v5 + 358297503] = v8;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[4] + a2[1];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[5] + a2[2];
  *(float *)&v9 = *(float *)&v8 + a2[6];
  dword_140404A6C[v5 + 358297503] = v9;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[7] + *(float *)&dword_140404A6C[v5 + 358297504];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[8] + *(float *)&dword_140404A6C[v5 + 358297505];
  *(float *)&v10 = *(float *)&v9 + a2[9];
  dword_140404A6C[v5 + 358297503] = v10;
  *(float *)&dword_140404A6C[v5 + 358297504] = a2[10] + *(float *)&dword_140404A6C[v5 + 358297504];
  *(float *)&dword_140404A6C[v5 + 358297505] = a2[11] + *(float *)&dword_140404A6C[v5 + 358297505];
  *(float *)&dword_140404A6C[v5 + 358297503] = *(float *)&v10 * 0.25;
  *(float *)&dword_140404A6C[v5 + 358297504] = *(float *)&dword_140404A6C[v5 + 358297504] * 0.25;
  *(float *)&dword_140404A6C[v5 + 358297505] = *(float *)&dword_140404A6C[v5 + 358297505] * 0.25;
  v11 = a2[3];
  v12 = a2[5];
  v13 = a2[2];
  v14 = *a2;
  v15 = a2[9];
  v16 = v13 - v12;
  v17 = a2[11];
  v18 = v11 - *a2;
  v110 = *((_DWORD *)a2 + 1);
  v105 = a2[4];
  *(float *)&v111[8] = v105;
  *(float *)&v120[7] = a2[6];
  *(float *)&v120[8] = a2[7];
  *(float *)&v120[9] = a2[8];
  v119 = *((_DWORD *)a2 + 10);
  v109 = v14;
  *(float *)v111 = v13;
  v102 = v11;
  *(float *)&v111[7] = v11;
  v103 = v12;
  *(float *)&v111[9] = v12;
  v118 = v15;
  *(float *)v120 = v17;
  v19 = fsqrt((float)(v16 * v16) + (float)(v18 * v18));
  if ( v19 == 0.0 )
  {
    v21 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v20 = (float)(1.0 / v19) * v18;
    v21 = (float)(1.0 / v19) * v16;
  }
  v22 = a2[6];
  v23 = a4 * 0.33333334;
  v24 = v23 + a2[1];
  v25 = v23 + a2[4];
  v26 = fsqrt((float)((float)(v17 - v13) * (float)(v17 - v13)) + (float)((float)(v15 - v14) * (float)(v15 - v14)))
      * 0.33333334;
  v104 = v24;
  v113 = v24;
  v27 = a2[8] - v12;
  v28 = (float)(v21 * v26) + v14;
  v114[8] = v25;
  v29 = (float)(v20 * v26) + v13;
  v112 = v28;
  v114[0] = v29;
  v30 = fsqrt((float)(v27 * v27) + (float)((float)(v22 - v11) * (float)(v22 - v11))) * 0.33333334;
  v31 = v20 * v30;
  v32 = (float)(v21 * v30) + v11;
  v33 = a2[9] - v22;
  v34 = a2[8] - a2[11];
  v35 = v31 + v12;
  v114[7] = v32;
  v114[9] = v35;
  v36 = fsqrt((float)(v34 * v34) + (float)(v33 * v33));
  if ( v36 == 0.0 )
  {
    v38 = 0.0;
    v37 = 0.0;
  }
  else
  {
    v37 = (float)(1.0 / v36) * v33;
    v38 = (float)(1.0 / v36) * v34;
  }
  v39 = a2[10];
  v40 = a2[3] - a2[6];
  v41 = fsqrt((float)((float)(v13 - a2[11]) * (float)(v13 - a2[11])) + (float)((float)(v14 - a2[9])
                                                                             * (float)(v14 - a2[9])));
  v101 = v101 * 0.33333334;
  v42 = a2[5] - a2[8];
  v43 = v41 * 0.33333334;
  v116 = v39 - v101;
  v44 = (float)(v38 * v43) + a2[9];
  v45 = (float)(v37 * v43) + a2[11];
  v46 = fsqrt((float)(v42 * v42) + (float)(v40 * v40)) * 0.33333334;
  v47 = (float)((float)(a2[3] - *a2) * 0.33333334) + *a2;
  *(float *)&v111[2] = (float)((float)(a2[4] - a2[1]) * 0.33333334) + a2[1];
  v48 = a2[2];
  v49 = (float)(v38 * v46) + a2[6];
  v50 = v37 * v46;
  v51 = a2[7] - v101;
  v52 = v50 + a2[8];
  *(float *)&v111[1] = v47;
  v53 = a2[5] - v48;
  v115 = v44;
  *(float *)v117 = v45;
  *(float *)&v117[7] = v49;
  *(float *)&v117[9] = v52;
  *(float *)&v117[8] = v51;
  *(float *)&v111[3] = (float)(v53 * 0.33333334) + v48;
  v54 = (float)((float)(*a2 - v102) * 0.33333334) + v102;
  *(float *)&v111[6] = (float)((float)(v48 - v103) * 0.33333334) + v103;
  v55 = a2[4] - a2[1];
  *(float *)&v111[4] = v54;
  *(float *)&v111[5] = (float)((float)(a2[1] - a2[4]) * 0.33333334) + a2[4];
  v114[1] = (float)((float)(v32 - v28) * 0.33333334) + v28;
  v114[2] = (float)(v55 * 0.33333334) + v104;
  v114[4] = (float)((float)(v28 - v32) * 0.33333334) + v32;
  v114[3] = (float)((float)(v35 - v29) * 0.33333334) + v29;
  v56 = a2[1] - v105;
  *(float *)&v117[2] = (float)((float)(v51 - (float)(v39 - v101)) * 0.33333334) + (float)(v39 - v101);
  v57 = (float)((float)((float)(v39 - v101) - v51) * 0.33333334) + v51;
  v58 = a2[9];
  v59 = (float)((float)(v29 - v35) * 0.33333334) + v35;
  v60 = a2[7];
  *(float *)&v117[5] = v57;
  v61 = a2[6];
  v114[6] = v59;
  v114[5] = (float)(v56 * 0.33333334) + v25;
  *(float *)&v117[1] = (float)((float)(v49 - v44) * 0.33333334) + v44;
  *(float *)&v117[4] = (float)((float)(v44 - v49) * 0.33333334) + v49;
  v62 = a2[8];
  *(float *)&v117[3] = (float)((float)(v52 - v45) * 0.33333334) + v45;
  *(float *)&v117[6] = (float)((float)(v45 - v52) * 0.33333334) + v52;
  v63 = a2[10];
  *(float *)&v120[1] = (float)((float)(v61 - v58) * 0.33333334) + v58;
  *(float *)&v120[4] = (float)((float)(v58 - v61) * 0.33333334) + v61;
  *(float *)&v120[2] = (float)((float)(v60 - v63) * 0.33333334) + v63;
  v64 = a2[11];
  v65 = (float)((float)(v63 - v60) * 0.33333334) + v60;
  v66 = 0.0;
  *(float *)&v120[5] = v65;
  *(float *)&v120[3] = (float)((float)(v62 - v64) * 0.33333334) + v64;
  *(float *)&v120[6] = (float)((float)(v64 - v62) * 0.33333334) + v62;
  v67 = 17;
  v68 = 5144 * v7;
  do
  {
    v69 = 0;
    v70 = 1.0 - v66;
    do
    {
      v71 = (float)((float)((float)(*(float *)&v117[v69 - 1] * 3.0) * v70) + (float)(v66 * *(float *)&v120[v69 - 1]))
          * v66;
      v72 = (float)(v114[v69 - 1] * 3.0) * (float)(v70 * v70);
      *(float *)((char *)&v106 + v69 * 4) = (float)((float)((float)((float)((float)((float)(*(float *)((char *)&v115 + v69 * 4)
                                                                                          * 3.0)
                                                                                  * v70)
                                                                          + (float)(v66
                                                                                  * *(float *)((char *)&v118 + v69 * 4)))
                                                                  * v66)
                                                          + (float)((float)(*(float *)((char *)&v112 + v69 * 4) * 3.0)
                                                                  * (float)(v70 * v70)))
                                                  * v66)
                                          + (float)((float)(v70 * v70)
                                                  * (float)(v70 * *(float *)((char *)&v109 + v69 * 4)));
      v73 = (float)((float)((float)((float)(*(float *)&v117[v69] * 3.0) * v70) + (float)(v66 * *(float *)&v120[v69]))
                  * v66)
          + (float)((float)(v114[v69] * 3.0) * (float)(v70 * v70));
      v108[v69 - 1] = (float)((float)(v71 + v72) * v66)
                    + (float)((float)(v70 * *(float *)&v111[v69 - 1]) * (float)(v70 * v70));
      v108[v69] = (float)(v73 * v66) + (float)((float)(v70 * *(float *)&v111[v69]) * (float)(v70 * v70));
      v69 += 3;
    }
    while ( v69 < 12 );
    v74 = 0.0;
    v75 = 0;
    v76 = v108[4] * 3.0;
    v77 = v108[1] * 3.0;
    v78 = v108[2] * 3.0;
    v79 = v108[5] * 3.0;
    v80 = v108[3] * 3.0;
    v81 = v108[6] * 3.0;
    do
    {
      v82 = (float)((float)((float)((float)((float)(v108[7] * v74) + (float)((float)(1.0 - v74) * v76)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v77) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v106) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      v83 = (float)((float)((float)((float)((float)(v108[8] * v74) + (float)((float)(1.0 - v74) * v79)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v78) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v107) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      v84 = (float)((float)((float)((float)((float)((float)(1.0 - v74) * v81) + (float)(v108[9] * v74)) * v74)
                          + (float)((float)((float)(1.0 - v74) * v80) * (float)(1.0 - v74)))
                  * v74)
          + (float)((float)((float)((float)(1.0 - v74) * v108[0]) * (float)(1.0 - v74)) * (float)(1.0 - v74));
      if ( (v75 & 0xFFFFFFEF) == 0 )
        v83 = 23.0;
      v74 = v74 + 0.0625;
      ++v75;
      v85 = 3 * (v68 + (int)dword_140404A6C[v5 + 358297506]);
      *(float *)&dword_140404A6C[v85 + 358297507] = v82;
      *(float *)&dword_140404A6C[v85 + 358297508] = v83;
      *(float *)&dword_140404A6C[v85 + 358297509] = v84;
      ++dword_140404A6C[v5 + 358297506];
    }
    while ( v75 <= 16 );
    v66 = v66 + 0.0625;
    --v67;
  }
  while ( v67 );
  for ( i = 18; i < 290; i += 17 )
  {
    v87 = i;
    v88 = 4;
    do
    {
      v89 = v87 + 2;
      dword_140404A6C[3 * v68 + 358300588 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 18;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 17;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      v90 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v90 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v90] = v87 - 18;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 1;
      v91 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v91 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v91] = v87 - 17;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      v92 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v92 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v92] = v87 - 17;
      v93 = v87 - 15;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87;
      v94 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v94 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v94] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 15;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 2;
      v95 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v95 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v95] = v87 - 16;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 2;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 + 1;
      v96 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v96 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v96] = v87 - 15;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v87 - 14;
      v97 = v87 + 3;
      v87 += 4;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v97;
      v98 = (int)dword_140404A6C[v5 + 358300579];
      dword_140404A6C[v5 + 358300579] = v98 + 1;
      dword_140404A6C[3 * v68 + 358300591 + 3 * v98] = v93;
      dword_140404A6C[3 * v68 + 358300589 + 3 * (int)dword_140404A6C[v5 + 358300579]] = v97;
      dword_140404A6C[3 * v68 + 358300590 + 3 * (int)dword_140404A6C[v5 + 358300579]++] = v89;
      --v88;
    }
    while ( v88 );
  }
  *(_QWORD *)&dword_140404A6C[v5 + 358300580] = 0;
  *(_QWORD *)&dword_140404A6C[v5 + 358300584] = 0;
  dword_140404A6C[v5 + 358300582] = 0;
  dword_140404A6C[v5 + 358300586] = dword_140404A6C[v5 + 358300579];
  sub_1401899F0(v4);
  ++dword_140404A6C[421506973];
  return 0; /* return is ignored by reset callers */
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
#undef v120
#undef v121
