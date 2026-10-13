#include "shared_client.h"

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C588: using guessed type unsigned int;

//----- (0000000140031530) ----------------------------------------------------
__int64            sub_140031530(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, float a7)
{
  float v7; // xmm12_4
  __int64 v9; // r15
  __int64 v10; // r10
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm3_4
  float v28; // xmm11_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm13_4
  float v32; // xmm14_4
  float v33; // xmm15_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm15_4
  float v37; // xmm4_4
  float v38; // xmm14_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm8_4
  float v42; // xmm0_4
  float v43; // xmm13_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm8_4
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm7_4
  float v50; // xmm2_4
  float v51; // xmm5_4
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm1_4
  signed int v55; // r14d
  int v56; // r8d
  float v57; // xmm1_4
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // r9d
  int v62; // r12d
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rbx
  unsigned int v66; // eax
  float v67; // xmm0_4
  __int64 v68; // rax
  __m128i v69; // xmm10
  signed int v70; // r14d
  signed int v71; // ecx
  float v72; // xmm8_4
  float v73; // xmm10_4
  float v74; // xmm9_4
  int v75; // edi
  unsigned int v76; // r15d
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rbx
  double v80; // xmm7_8
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  __int128 v86; // xmm0
  __int64 v87; // rcx
  unsigned int *v88; // rbx
  BOOL v89; // eax
  float v90; // xmm2_4
  float *v91; // r8
  float v92; // xmm1_4
  unsigned int v93; // eax
  unsigned int v94; // r10d
  float v95; // xmm0_4
  float v96; // xmm1_4
  float *v97; // r8
  float v98; // xmm0_4
  __int16 v99; // dx
  int v100; // ebx
  int v101; // edi
  __int64 v102; // rcx
  unsigned int v103; // xmm1_4
  int v104; // ebx
  __int64 v105; // xmm2_8
  float v106; // xmm2_4
  __int64 v107; // xmm2_8
  unsigned int v108; // ebx
  unsigned int v109; // eax
  float v110; // xmm5_4
  float v111; // xmm9_4
  float v112; // xmm15_4
  float v113; // xmm10_4
  float v114; // xmm8_4
  float v115; // xmm11_4
  float v116; // xmm12_4
  float v117; // xmm14_4
  float *v118; // rdi
  float *v119; // rdx
  float v120; // xmm2_4
  float v121; // xmm13_4
  float v122; // xmm8_4
  float v123; // xmm7_4
  float v124; // xmm0_4
  float v125; // xmm5_4
  float v126; // xmm15_4
  float v127; // xmm4_4
  float v128; // xmm3_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm7_4
  float v132; // xmm8_4
  float v133; // xmm9_4
  float v134; // xmm10_4
  float v135; // xmm13_4
  float v136; // xmm11_4
  float v137; // xmm12_4
  float v138; // xmm15_4
  float v139; // xmm4_4
  float v140; // xmm5_4
  float v141; // xmm0_4
  float v142; // xmm14_4
  float v143; // xmm2_4
  float v144; // xmm6_4
  float v145; // xmm1_4
  float v146; // xmm14_4
  float v147; // xmm3_4
  float v148; // xmm4_4
  float v149; // xmm5_4
  float v150; // xmm0_4
  unsigned int v151; // r10d
  unsigned int v152; // r8d
  unsigned int v153; // ebx
  float v154; // xmm13_4
  float v155; // xmm9_4
  float v156; // xmm10_4
  float v157; // xmm8_4
  float v158; // xmm11_4
  float v159; // xmm14_4
  float v160; // xmm12_4
  float v161; // xmm1_4
  float *v162; // rdx
  unsigned int v163; // eax
  float v164; // xmm2_4
  float v165; // xmm15_4
  float v166; // xmm7_4
  float v167; // xmm0_4
  float v168; // xmm5_4
  float v169; // xmm15_4
  float v170; // xmm0_4
  float v171; // xmm1_4
  float v172; // xmm0_4
  float v173; // xmm4_4
  float v174; // xmm5_4
  float v175; // xmm6_4
  float v176; // xmm3_4
  float v177; // xmm0_4
  float v178; // xmm5_4
  float v179; // xmm6_4
  float v180; // xmm0_4
  unsigned int v181; // ebx
  unsigned int v182; // eax
  float v183; // xmm7_4
  float v184; // xmm11_4
  float v185; // xmm12_4
  float v186; // xmm9_4
  float v187; // xmm10_4
  float v188; // xmm13_4
  float v189; // xmm14_4
  float v190; // xmm15_4
  float v191; // xmm4_4
  float v192; // xmm6_4
  float v193; // xmm0_4
  float v194; // xmm5_4
  float v195; // xmm8_4
  float v196; // xmm5_4
  float v197; // xmm4_4
  float *v198; // rax
  float v199; // xmm8_4
  float v200; // xmm9_4
  float v201; // xmm1_4
  float v202; // xmm10_4
  float v203; // xmm5_4
  float v204; // xmm13_4
  float v205; // xmm15_4
  float v206; // xmm14_4
  float v207; // xmm2_4
  float v208; // xmm0_4
  float v209; // xmm3_4
  float v210; // xmm1_4
  float v211; // xmm4_4
  unsigned int v212; // edx
  unsigned int v213; // r8d
  unsigned int v214; // ebx
  float v215; // xmm9_4
  float v216; // xmm14_4
  float v217; // xmm13_4
  float v218; // xmm8_4
  float v219; // xmm12_4
  float *v220; // rax
  float v221; // xmm4_4
  float v222; // xmm10_4
  float v223; // xmm6_4
  float v224; // xmm1_4
  float v225; // xmm11_4
  float v226; // xmm0_4
  float v227; // xmm15_4
  float v228; // xmm7_4
  float v229; // xmm3_4
  float v230; // xmm7_4
  float v231; // xmm5_4
  float v232; // xmm2_4
  float v233; // xmm0_4
  float v234; // xmm4_4
  float v235; // xmm2_4
  float v236; // xmm5_4
  float v237; // xmm0_4
  float *v239; // rcx
  float *v240; // rdx
  float v241; // xmm1_4
  float v242; // xmm0_4
  float v243; // xmm1_4
  float v244; // xmm0_4
  float v245; // xmm1_4
  float v246; // xmm0_4
  __int64 v247; // [rsp-20h] [rbp-1B48h] BYREF
  float sr_swept_position[3];
  float sr_swept_normal[3];
  float sr_swept_origin[3];
  int sr_swept_cell[3];
  unsigned sr_swept_displaced_cell[3];
  float sr_swept_mesh_result[8];
  _Alignas(16) float sr_swept_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140031530[13248];
#define v248 (*(__int64 (*))(void *)(sr_frame_140031530 + 0)) /* [rsp+8h] */
#define v249 (*(__int64 (*))(void *)(sr_frame_140031530 + 16)) /* [rsp+18h] */
#define v250 (*(__int64 (*))(void *)(sr_frame_140031530 + 24)) /* [rsp+20h] */
#define v251 (*(float (*))(void *)(sr_frame_140031530 + 40)) /* [rsp+30h] */
#define v252 (*(unsigned int (*))(void *)(sr_frame_140031530 + 44)) /* [rsp+34h] */
#define v259 (*(float (*))(void *)(sr_frame_140031530 + 80)) /* [rsp+58h] */
#define v260 (*(int (*))(void *)(sr_frame_140031530 + 84)) /* [rsp+5Ch] */
#define v261 (*(float (*))(void *)(sr_frame_140031530 + 6816)) /* [rsp+1AA8h] */
#define v262 (*(__int64 (*))(void *)(sr_frame_140031530 + 6824)) /* [rsp+1AB0h] */
#define v263 (*(float (*))(void *)(sr_frame_140031530 + 6832)) /* [rsp+1AB8h] */
#define v264 (*(float * (*))(void *)(sr_frame_140031530 + 6840)) /* [rsp+1AC0h] */
#define v265 (*(__int64 (*))(void *)(sr_frame_140031530 + 6848)) /* [rsp+1AC8h] */
#define v269 (*(float (*))(void *)(sr_frame_140031530 + 6872)) /* [rsp+1AE0h] */
#define v270 (*(float * (*))(void *)(sr_frame_140031530 + 6880)) /* [rsp+1AE8h] */
#define v274 (*(unsigned int (*))(void *)(sr_frame_140031530 + 6904)) /* [rsp+1B00h] */
#define v275 (*(__int64 (*))(void *)(sr_frame_140031530 + 6912)) /* [rsp+1B08h] */
#define v279 (*(int (*))(void *)(sr_frame_140031530 + 6936)) /* [rsp+1B20h] */
#define v280 (*(int (*))(void *)(sr_frame_140031530 + 6940)) /* [rsp+1B24h] */
#define v281 (*(int (*))(void *)(sr_frame_140031530 + 6944)) /* [rsp+1B28h] */
#define v282 (*(float (*)[4])(void *)(sr_frame_140031530 + 6952)) /* [rsp+1B30h] */
#define v283 (*(__int64 (*))(void *)(sr_frame_140031530 + 6968)) /* [rsp+1B40h] */
#define v286 (*(float (*)[4])(void *)(sr_frame_140031530 + 7016)) /* [rsp+1B70h] */
#define v287 (*(float (*)[4])(void *)(sr_frame_140031530 + 7032)) /* [rsp+1B80h] */
#define v291 (*(_BYTE (*)[6144])(void *)(sr_frame_140031530 + 7088)) /* [rsp+1BB8h] */
#define v292 (*(__int64 (*))(void *)(sr_frame_140031530 + 13232)) /* [rsp+33B8h] */

  v7 = a7;
  v9 = 1052016LL * a4;
  *a3 = 65536.0;
  v10 = a4;
  v264 = a1;
  v252 = a4;
  v11 = *(float *)((char *)&dword_140404A6C[111579657] + v9);
  v265 = a4;
  v12 = *a5;
  v13 = *a5 + a7;
  v270 = a2;
  v283 = v9;
  if ( v13 < v11 && (float)(a7 + *a6) < v11 )
    return 0;
  v14 = a5[1];
  v15 = *(float *)((char *)&dword_140404A6C[111579658] + v9);
  if ( (float)(v14 + a7) < v15 && (float)(a7 + a6[1]) < v15 )
    return 0;
  v16 = a5[2];
  v17 = *(float *)((char *)&dword_140404A6C[111579659] + v9);
  if ( (float)(v16 + a7) < v17 && (float)(a7 + a6[2]) < v17 )
    return 0;
  v18 = *(float *)((char *)&dword_140404A6C[111579660] + v9);
  if ( (float)(v12 - a7) > v18 && (float)(*a6 - a7) > v18 )
    return 0;
  v19 = *(float *)((char *)&dword_140404A6C[111579661] + v9);
  if ( (float)(v14 - a7) > v19 && (float)(a6[1] - a7) > v19 )
    return 0;
  v20 = *(float *)((char *)&dword_140404A6C[111579662] + v9);
  if ( (float)(v16 - a7) > v20 && (float)(a6[2] - a7) > v20 )
    return 0;
  v21 = *(float *)((char *)&dword_140404A6C[111579638] + v9);
  v22 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
  v23 = v12 - v21;
  v24 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
  v25 = *(float *)((char *)&dword_140404A6C[111579639] + v9);
  v26 = *(float *)((char *)&dword_140404A6C[111579640] + v9);
  v27 = v14 - v25;
  v28 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
  v29 = v16 - v26;
  v30 = *(float *)((char *)&dword_140404A6C[111579646] + v9);
  v31 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
  v32 = *(float *)((char *)&dword_140404A6C[111579645] + v9) * v27;
  v33 = (float)(*(float *)((char *)&dword_140404A6C[111579642] + v9) * v27) + (float)(v22 * v23);
  v269 = v27;
  v34 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
  v35 = v24 * v23;
  v36 = v33 + (float)(v28 * v29);
  v263 = v23;
  v37 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
  v38 = (float)(v32 + v35) + (float)(v30 * v29);
  v287[0] = v36;
  v39 = v37 * v29;
  v40 = *a6 - v21;
  v41 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
  v42 = a6[1] - v25;
  v43 = (float)((float)(v31 * v269) + (float)(v34 * v263)) + v39;
  v287[1] = v38;
  v44 = a6[2] - v26;
  v45 = v34 * v40;
  v46 = (float)((float)(v41 * v42) + (float)(v22 * v40)) + (float)(v28 * v44);
  v47 = (float)(*(float *)((char *)&dword_140404A6C[111579645] + v9) * v42) + (float)(v24 * v40);
  v48 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
  v49 = v47 + (float)(v30 * v44);
  sr_swept_origin[0] = v40;
  v50 = *(float *)((char *)&dword_140404A6C[111579654] + v9);
  v287[2] = v43;
  sr_swept_origin[1] = v42;
  sr_swept_origin[2] = v44;
  v286[0] = v46;
  v286[1] = v49;
  v51 = (float)((float)(v48 * v42) + v45) + (float)(v37 * v44);
  v286[2] = v51;
  v52 = v36 >= v46 ? v46 : v36;
  v53 = (int)(float)((float)(v52 - a7) * v50);
  v269 = *(float *)&v53;
  v260 = (int)(float)((float)(fmaxf(v36, v46) + a7) * v50);
  v54 = v38 >= v49 ? v49 : v38;
  v55 = (int)(float)(v50 * (float)(v54 - a7));
  v56 = (int)(float)((float)(fmaxf(v38, v49) + a7) * v50);
  v263 = *(float *)&v55;
  v281 = v56;
  v57 = v43 >= v51 ? v51 : v43;
  sr_swept_cell[1] = v55;
  v58 = (int)(float)(v50 * (float)(v57 - a7));
  v59 = (int)(float)((float)(fmaxf(v43, v51) + a7) * v50);
  v280 = v58;
  v279 = v59;
  if ( v55 > v56 )
    return 0;
  sr_swept_cell[1] = v55;
  do
  {
    sr_swept_cell[2] = v58;
    v60 = v58;
    if ( v58 > v59 )
      goto LABEL_98;
    v61 = v260;
    do
    {
      sr_swept_cell[0] = v53;
      v62 = v53;
      if ( v53 <= v61 )
      {
        while ( 1 )
        {
          if ( v62 < 0 )
            goto LABEL_94;
          if ( v62 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v9) << 6) )
            goto LABEL_94;
          if ( v55 < 0 )
            goto LABEL_94;
          if ( v55 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579651] + v9) << 6) )
            goto LABEL_94;
          if ( v60 < 0 )
            goto LABEL_94;
          if ( v60 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v9) << 6) )
            goto LABEL_94;
          v63 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v9)
                       + 4LL
                       * (int)((v62 >> 6)
                             + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v9)
                             * ((v60 >> 6) + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v9) * (v55 >> 6))));
          if ( (_DWORD)v63 == -1 )
            goto LABEL_94;
          v64 = (int)dword_140404A6C[263004 * v10
                                   + 111579985
                                   + 513 * v63
                                   + 64 * ((v55 >> 3) & 7)
                                   + 8 * ((v60 >> 3) & 7)
                                   + ((v62 >> 3) & 7)];
          if ( (_DWORD)v64 == -1 )
            goto LABEL_94;
          v65 = 6930 * v64 + (v62 & 7) + 8 * ((v60 & 7) + 8 * (v55 & 7u));
          v275 = v65;
          v66 = dword_140404A6C[v65 + 83199479];
          if ( v66 )
          {
            v67 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
            v68 = v66 & 0x3FF;
            v69 = _mm_cvtsi32_si128(v55);
            v70 = 0;
            v71 = HIBYTE(dword_140404A6C[v65 + 83199479]) & 3;
            v261 = *(float *)&v68;
            v259 = *(float *)&v71;
            v262 = 3792 * v68;
            v72 = (float)((float)v62 + 0.5) * v67;
            v73 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v69), f32)[0] * v67;
            v74 = (float)((float)v60 + 0.5) * v67;
            if ( (int)dword_140404A6C[948 * v68 + 272299416] > 0 )
            {
              v75 = 1;
              v76 = sr_swept_cell[2];
              v77 = v262;
              v78 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v262 + 1093411124;
              do
              {
                if ( (v75 & dword_140404A6C[v65 + 83199991]) == 0 )
                {
                  v79 = *(int *)(v78 - 36);
                  (*(__int128 *)(void *)sr_swept_rotation) = xmmword_140278D30;
                  sr_swept_rotation[8] = 1.0;
                  (*(__int128 *)(void *)(sr_swept_rotation+4)) = xmmword_140278D30;
                  v80 = (float)v71 * 1.570796326795;
                  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(v80))) /* the original converts to float (cvtsd2ss) before this call */);
                  v81 = (float)((float)((float)(*(float *)(v78 - 32) * *(float *)&(*(__int128 *)(void *)sr_swept_rotation)) + v72)
                              + (float)(*(float *)(v78 - 28) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 3)))
                      + (float)(*(float *)(v78 - 24) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 2));
                  v82 = *(float *)(v78 - 24) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 3);
                  v83 = (float)((float)(*(float *)(v78 - 32) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 1)) + v73)
                      + (float)(*(float *)(v78 - 28) * *(float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)));
                  v84 = *(float *)(v78 - 24) * sr_swept_rotation[8];
                  v85 = (float)((float)(*(float *)(v78 - 32) * *((float *)&(*(__int128 *)(void *)sr_swept_rotation) + 2)) + v74)
                      + (float)(*(float *)(v78 - 28) * *((float *)&(*(__int128 *)(void *)(sr_swept_rotation+4)) + 1));
                  (*(__int128 *)(void *)sr_swept_rotation) = *(_OWORD *)(v78 - 20);
                  v86 = *(_OWORD *)(v78 - 4);
                  v282[0] = v81;
                  (*(__int128 *)(void *)(sr_swept_rotation+4)) = v86;
                  sr_swept_rotation[8] = *(float *)(v78 + 12);
                  v282[1] = v83 + v82;
                  v282[2] = v85 + v84;
                  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(v80))) /* the original converts to float (cvtsd2ss) before this call */);
                  v87 = 1268 * v79;
                  if ( *(_QWORD *)&dword_140404A6C[1268 * v79 + 278522249] )
                  {
                    v88 = &dword_140404A6C[v87 + 278522247];
                    sub_14011BF40((__int64)v291, (__int64)&dword_140404A6C[v87 + 278522247], v282, (float *)&(*(__int128 *)(void *)sr_swept_rotation));
                    v89 = sub_140033BE0(sr_swept_mesh_result, (__int64)v88, (__int64)v291, v287, v286, SLODWORD(v7));
                    *(float *)&v71 = v259;
                    v65 = v275;
                    if ( v89 )
                    {
                      v90 = sr_swept_mesh_result[7];
                      if ( sr_swept_mesh_result[7] < *a3 )
                      {
                        v91 = v264;
                        v92 = sr_swept_mesh_result[1];
                        v93 = LODWORD(v263);
                        v94 = v252;
                        *v264 = sr_swept_mesh_result[0];
                        v95 = sr_swept_mesh_result[2];
                        v91[1] = v92;
                        v96 = sr_swept_mesh_result[3];
                        v91[2] = v95;
                        v97 = v270;
                        v98 = sr_swept_mesh_result[4];
                        *v270 = v96;
                        v97[2] = sr_swept_mesh_result[5];
                        v97[1] = v98;
                        dword_140404A6C[73007004] = v93;
                        *(float *)&dword_140404A6C[73007013] = v261;
                        dword_140404A6C[73007009] = 0;
                        dword_140404A6C[73007002] = v94;
                        dword_140404A6C[73007003] = v62;
                        dword_140404A6C[73007005] = v76;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007014] = v71;
                        dword_140404A6C[73007015] = v70;
                        *a3 = v90;
                      }
                    }
                  }
                  else
                  {
                    *(float *)&v71 = v259;
                    v65 = v275;
                  }
                  v77 = v262;
                }
                ++v70;
                v75 = __ROL4__(v75, 1);
                v78 += 116;
              }
              while ( v70 < *(int *)((char *)&dword_140404A6C[272299416] + v77) );
              v9 = v283;
              v60 = sr_swept_cell[2];
            }
            *(float *)&v55 = v263;
          }
          v99 = dword_140404A6C[v65 + 83198967];
          v100 = dword_140404A6C[v65 + 83198967];
          if ( v100 > 0 )
            break;
LABEL_64:
          v108 = dword_140404A6C[v275 + 83194359];
          v109 = v108 & 0xE0000000;
          if ( (v108 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(v250) = *(unsigned int *)((char *)&dword_140404A6C[111579653] + v9);
            LODWORD(v249) = v108;
            *(float *)&v248 = v7;
            if ( sub_140034370(&sr_swept_position[0], &sr_swept_normal[0], &v251, v287, v286, v248, &sr_swept_cell[0], v249, v250) && v251 < *a3 )
            {
              v110 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v111 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v112 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v113 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v114 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v115 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v116 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v117 = *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v118 = v264;
              v119 = v270;
              v261 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v259 = v110;
              v120 = sr_swept_normal[1];
              v121 = (float)((float)(v111 * sr_swept_position[2]) + (float)(v261 * sr_swept_position[0]))
                   + (float)((float)(v114 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              v122 = v114 * sr_swept_normal[1];
              v123 = (float)((float)(v115 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579639] + v9))
                   + (float)((float)(v113 * sr_swept_position[2]) + (float)(v110 * sr_swept_position[0]));
              v124 = sr_swept_normal[2];
              v125 = (float)(v116 * sr_swept_position[2]) + (float)(v112 * sr_swept_position[0]);
              v126 = v112 * sr_swept_normal[0];
              v127 = v261 * sr_swept_normal[0];
              v128 = v259 * sr_swept_normal[0];
              v129 = v125 + (float)((float)(v117 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579640] + v9));
              *v264 = v121;
              v118[1] = v123;
              v118[2] = v129;
              sr_swept_position[0] = v121;
              sr_swept_normal[0] = (float)(v127 + v122) + (float)(v111 * v124);
              *v119 = sr_swept_normal[0];
              sr_swept_position[1] = v123;
              v130 = (float)(v128 + (float)(v115 * v120)) + (float)(v113 * v124);
              sr_swept_position[2] = v129;
              sr_swept_normal[2] = (float)(v126 + (float)(v117 * v120)) + (float)(v116 * v124);
              v119[2] = sr_swept_normal[2];
LABEL_72:
              v150 = v251;
              v119[1] = v130;
              *a3 = v150;
              dword_140404A6C[73007009] = v108;
              dword_140404A6C[73007003] = v62;
              dword_140404A6C[73007004] = v55;
              dword_140404A6C[73007005] = v60;
LABEL_73:
              v151 = v252;
              v7 = a7;
              dword_140404A6C[73007002] = v252;
              sr_swept_normal[1] = v130;
              dword_140404A6C[73007012] = -1;
              dword_140404A6C[73007015] = -1;
              goto LABEL_79;
            }
          }
          else if ( v109 == 0x80000000 )
          {
            if ( sub_140034AE0(
                   &sr_swept_position[0],
                   (__int64)&sr_swept_normal[0],
                   &v251,
                   v287,
                   v286,
                   SLODWORD(v7),
                   (__int64)&sr_swept_cell[0],
                   v108,
                   *(float *)((char *)&dword_140404A6C[111579653] + v9))
              && v251 < *a3 )
            {
              v131 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v132 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v133 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v134 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v135 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v136 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v137 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v138 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v118 = v264;
              v119 = v270;
              v139 = (float)(sr_swept_position[1] * *(float *)((char *)&dword_140404A6C[111579646] + v9))
                   + *(float *)((char *)&dword_140404A6C[111579640] + v9);
              v140 = (float)(sr_swept_position[1] * v134) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v141 = (float)(sr_swept_position[2] * v136) + (float)(sr_swept_position[0] * v135);
              v142 = (float)(sr_swept_position[2] * v138) + (float)(sr_swept_position[0] * v137);
              v143 = sr_swept_normal[2];
              v261 = (float)((float)(sr_swept_position[0] * v132) + (float)(sr_swept_position[1] * v131))
                   + (float)((float)(sr_swept_position[2] * v133) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              sr_swept_position[0] = v261;
              v144 = sr_swept_normal[0];
              v145 = sr_swept_normal[2] * v133;
              v146 = v142 + v139;
              v259 = v140 + v141;
              v147 = sr_swept_normal[1];
              sr_swept_position[1] = v140 + v141;
              v148 = sr_swept_normal[1] * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v149 = (float)(sr_swept_normal[1] * v131) + (float)(sr_swept_normal[0] * v132);
              v264[2] = v146;
              sr_swept_position[2] = v146;
              *v118 = v261;
              v118[1] = v259;
              sr_swept_normal[0] = v149 + v145;
              *v119 = v149 + v145;
              v130 = (float)((float)(v147 * v134) + (float)(v144 * v135)) + (float)(v143 * v136);
              sr_swept_normal[2] = (float)((float)(v144 * v137) + v148) + (float)(v143 * v138);
              v119[2] = sr_swept_normal[2];
              goto LABEL_72;
            }
          }
          else if ( v109 == -1073741824 )
          {
            v274 = v62 - (unsigned __int8)v108;
            v152 = v55 - BYTE2(v108);
            v153 = v60 - BYTE1(v108);
            sr_swept_displaced_cell[0] = v274;
            LODWORD(v262) = v152;
            sr_swept_displaced_cell[1] = v152;
            sr_swept_displaced_cell[2] = v153;
            LODWORD(v259) = sub_1400129D0(v252, v274, v152, v153);
            if ( sub_140034AE0(
                   &sr_swept_position[0],
                   (__int64)&sr_swept_normal[0],
                   &v251,
                   v287,
                   v286,
                   SLODWORD(v7),
                   (__int64)&sr_swept_displaced_cell[0],
                   LODWORD(v259),
                   *(float *)((char *)&dword_140404A6C[111579653] + v9))
              && v251 < *a3 )
            {
              v154 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v155 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v156 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
              v157 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v158 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v159 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v160 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
              v161 = sr_swept_position[2];
              v118 = v264;
              v162 = v270;
              v163 = LODWORD(v259);
              v164 = sr_swept_normal[2];
              v165 = (float)(sr_swept_position[2] * v156) + (float)(sr_swept_position[0] * v155);
              v167 = (float)(sr_swept_position[1] * v157) + *(float *)((char *)&dword_140404A6C[111579638] + v9);
              sr_swept_position[2] = (float)((float)(*(float *)((char *)&dword_140404A6C[111579649] + v9) * sr_swept_position[2]) + (float)(v154 * sr_swept_position[0]))
                   + (float)((float)(*(float *)((char *)&dword_140404A6C[111579646] + v9) * sr_swept_position[1])
                           + *(float *)((char *)&dword_140404A6C[111579640] + v9));
              v166 = sr_swept_position[2];
              v168 = (float)(sr_swept_position[1] * v158) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v169 = v165 + v167;
              v170 = v161 * v160;
              v171 = sr_swept_normal[2] * v156;
              v172 = v170 + (float)(sr_swept_position[0] * v159);
              sr_swept_position[0] = v169;
              v261 = v168 + v172;
              sr_swept_position[1] = v168 + v172;
              v173 = sr_swept_normal[1] * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v174 = (float)(sr_swept_normal[1] * v157) + (float)(sr_swept_normal[0] * v155);
              v175 = sr_swept_normal[0] * v154;
              v176 = (float)(sr_swept_normal[1] * v158) + (float)(sr_swept_normal[0] * v159);
              v177 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              *v264 = v169;
              v178 = v174 + v171;
              v118[2] = v166;
              v179 = (float)(v175 + v173) + (float)(v177 * v164);
              sr_swept_normal[0] = v178;
              v118[1] = v261;
              v130 = v176 + (float)(v164 * v160);
              v180 = v251;
              *v162 = v178;
              v162[2] = v179;
              sr_swept_normal[2] = v179;
              v162[1] = v130;
              *a3 = v180;
              dword_140404A6C[73007009] = v163;
              dword_140404A6C[73007003] = v274;
              dword_140404A6C[73007004] = v262;
              dword_140404A6C[73007005] = v153;
              goto LABEL_73;
            }
          }
          v118 = v264;
          v151 = v252;
LABEL_79:
          v181 = dword_140404A6C[v275 + 83197431];
          v182 = v181 & 0xE0000000;
          if ( (v181 & 0xE0000000) == 0x40000000 )
          {
            LODWORD(v250) = *(unsigned int *)((char *)&dword_140404A6C[111579653] + v9);
            LODWORD(v249) = v181;
            *(float *)&v248 = v7;
            if ( !sub_140034370(&sr_swept_position[0], &sr_swept_normal[0], &v251, v287, v286, v248, &sr_swept_cell[0], v249, v250) || v251 >= *a3 )
              goto LABEL_93;
            v183 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
            v184 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
            v185 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
            v186 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
            v187 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
            v188 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
            v189 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
            v190 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
            v191 = v185 * sr_swept_position[0];
            v192 = *(float *)((char *)&dword_140404A6C[111579646] + v9) * sr_swept_position[1];
            v193 = (float)(v188 * sr_swept_position[2]) + (float)(v184 * sr_swept_position[0]);
            v194 = v190 * sr_swept_position[2];
            *(float *)&v262 = (float)((float)(v187 * sr_swept_position[2]) + (float)(v183 * sr_swept_position[0]))
                            + (float)((float)(v186 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
            sr_swept_position[0] = *(float *)&v262;
            v195 = v189 * sr_swept_position[1];
          }
          else
          {
            if ( v182 != 0x80000000 )
            {
              if ( v182 != -1073741824 )
                goto LABEL_93;
              v212 = v62 - (unsigned __int8)v181;
              v261 = *(float *)&v212;
              v213 = v55 - BYTE2(v181);
              sr_swept_displaced_cell[0] = v212;
              v214 = v60 - BYTE1(v181);
              v259 = *(float *)&v213;
              sr_swept_displaced_cell[1] = v213;
              sr_swept_displaced_cell[2] = v214;
              v274 = sub_140016450(v151, v212, v213, v214);
              if ( !sub_140034AE0(
                      &sr_swept_position[0],
                      (__int64)&sr_swept_normal[0],
                      &v251,
                      v287,
                      v286,
                      SLODWORD(v7),
                      (__int64)&sr_swept_displaced_cell[0],
                      v274,
                      *(float *)((char *)&dword_140404A6C[111579653] + v9))
                || v251 >= *a3 )
              {
                goto LABEL_93;
              }
              v215 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
              v216 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
              v217 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
              v218 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
              v219 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
              v220 = v270;
              v221 = v217 * sr_swept_position[0];
              v222 = (float)(v219 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579639] + v9);
              v223 = (float)(*(float *)((char *)&dword_140404A6C[111579646] + v9) * sr_swept_position[1])
                   + *(float *)((char *)&dword_140404A6C[111579640] + v9);
              v224 = sr_swept_normal[2];
              v225 = *(float *)((char *)&dword_140404A6C[111579647] + v9) * sr_swept_normal[2];
              v226 = (float)(*(float *)((char *)&dword_140404A6C[111579648] + v9) * sr_swept_position[2]) + (float)(v216 * sr_swept_position[0]);
              v227 = *(float *)((char *)&dword_140404A6C[111579648] + v9) * sr_swept_normal[2];
              *(float *)&v262 = (float)((float)(*(float *)((char *)&dword_140404A6C[111579647] + v9) * sr_swept_position[2])
                                      + (float)(v215 * sr_swept_position[0]))
                              + (float)((float)(v218 * sr_swept_position[1]) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
              sr_swept_position[0] = *(float *)&v262;
              v228 = (float)(*(float *)((char *)&dword_140404A6C[111579649] + v9) * sr_swept_position[2]) + v221;
              sr_swept_position[1] = v222 + v226;
              v229 = sr_swept_normal[1] * *(float *)((char *)&dword_140404A6C[111579646] + v9);
              v230 = v228 + v223;
              v231 = sr_swept_normal[0] * v217;
              v232 = (float)(sr_swept_normal[1] * v219) + (float)(sr_swept_normal[0] * v216);
              sr_swept_position[2] = v230;
              v233 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
              v234 = (float)((float)(sr_swept_normal[1] * v218) + (float)(sr_swept_normal[0] * v215)) + v225;
              v118[1] = sr_swept_position[1];
              v118[2] = v230;
              v235 = v232 + v227;
              sr_swept_normal[0] = v234;
              v236 = (float)(v231 + v229) + (float)(v233 * v224);
              *(_DWORD *)v118 = v262;
              v237 = v251;
              *v220 = v234;
              v220[1] = v235;
              v220[2] = v236;
              LODWORD(v220) = v274;
              *a3 = v237;
              dword_140404A6C[73007009] = (unsigned int)v220;
              dword_140404A6C[73007002] = v252;
              sr_swept_normal[1] = v235;
              sr_swept_normal[2] = v236;
              *(float *)&dword_140404A6C[73007003] = v261;
              *(float *)&dword_140404A6C[73007004] = v259;
              dword_140404A6C[73007005] = v214;
              goto LABEL_92;
            }
            if ( !sub_140034AE0(
                    &sr_swept_position[0],
                    (__int64)&sr_swept_normal[0],
                    &v251,
                    v287,
                    v286,
                    SLODWORD(v7),
                    (__int64)&sr_swept_cell[0],
                    v181,
                    *(float *)((char *)&dword_140404A6C[111579653] + v9))
              || v251 >= *a3 )
            {
              goto LABEL_93;
            }
            v183 = *(float *)((char *)&dword_140404A6C[111579641] + v9);
            v184 = *(float *)((char *)&dword_140404A6C[111579642] + v9);
            v185 = *(float *)((char *)&dword_140404A6C[111579643] + v9);
            v186 = *(float *)((char *)&dword_140404A6C[111579644] + v9);
            v187 = *(float *)((char *)&dword_140404A6C[111579647] + v9);
            v188 = *(float *)((char *)&dword_140404A6C[111579648] + v9);
            v189 = *(float *)((char *)&dword_140404A6C[111579645] + v9);
            v190 = *(float *)((char *)&dword_140404A6C[111579649] + v9);
            v191 = v185 * sr_swept_position[0];
            v192 = *(float *)((char *)&dword_140404A6C[111579646] + v9) * sr_swept_position[1];
            v193 = (float)(v188 * sr_swept_position[2]) + (float)(v184 * sr_swept_position[0]);
            v194 = v190 * sr_swept_position[2];
            *(float *)&v262 = (float)((float)(v186 * sr_swept_position[1]) + (float)(v183 * sr_swept_position[0]))
                            + (float)((float)(v187 * sr_swept_position[2]) + *(float *)((char *)&dword_140404A6C[111579638] + v9));
            sr_swept_position[0] = *(float *)&v262;
            v195 = v189 * sr_swept_position[1];
          }
          v196 = v194 + v191;
          v197 = sr_swept_normal[0];
          v198 = v270;
          v199 = (float)(v195 + *(float *)((char *)&dword_140404A6C[111579639] + v9)) + v193;
          v200 = v186 * sr_swept_normal[1];
          v201 = sr_swept_normal[0];
          v202 = v187 * sr_swept_normal[2];
          v203 = v196 + (float)(v192 + *(float *)((char *)&dword_140404A6C[111579640] + v9));
          v204 = v188 * sr_swept_normal[2];
          v205 = v190 * sr_swept_normal[2];
          v206 = v189 * sr_swept_normal[1];
          v207 = sr_swept_normal[1] * *(float *)((char *)&dword_140404A6C[111579646] + v9);
          *(_DWORD *)v118 = v262;
          v208 = v251;
          v118[1] = v199;
          v118[2] = v203;
          sr_swept_position[1] = v199;
          sr_swept_position[2] = v203;
          v209 = (float)((float)(v197 * v183) + v200) + v202;
          v210 = (float)((float)(v201 * v184) + v206) + v204;
          v211 = (float)((float)(v197 * v185) + v207) + v205;
          *v198 = v209;
          sr_swept_normal[0] = v209;
          v198[1] = v210;
          sr_swept_normal[1] = v210;
          v198[2] = v211;
          LODWORD(v198) = v252;
          *a3 = v208;
          dword_140404A6C[73007009] = v181;
          dword_140404A6C[73007002] = (unsigned int)v198;
          dword_140404A6C[73007003] = v62;
          dword_140404A6C[73007004] = v55;
          dword_140404A6C[73007005] = v60;
          sr_swept_normal[2] = v211;
LABEL_92:
          dword_140404A6C[73007015] = -1;
          dword_140404A6C[73007012] = -1;
LABEL_93:
          v10 = v265;
          v61 = v260;
LABEL_94:
          v7 = a7;
          sr_swept_cell[0] = ++v62;
          if ( v62 > v61 )
          {
            *(float *)&v53 = v269;
            v59 = v279;
            goto LABEL_96;
          }
        }
        v101 = v100 & 0x7F;
        v102 = 2310LL * (v100 & 0x7F);
        v103 = dword_140404A6C[v102 + 432533577];
        sr_swept_origin[0] = *(float *)&dword_140404A6C[v102 + 432533576];
        sr_swept_origin[2] = *(float *)&dword_140404A6C[v102 + 432533578];
        sr_swept_origin[1] = *(float *)&v103;
        if ( (v99 & 0xC00) == 0x400 )
        {
          sub_14007B4D0(&sr_swept_origin[0], (float *)&dword_1402F6188, sr_export_float_lane_container(1070141403));
          v104 = v100 & 0xC00;
          goto LABEL_56;
        }
        v104 = v100 & 0xC00;
        if ( v104 == 2048 )
        {
          v105 = 1078530011;
        }
        else
        {
          if ( v104 != 3072 )
            goto LABEL_56;
          v105 = 1083624420;
        }
        sub_14007B4D0(&sr_swept_origin[0], (float *)&dword_1402F6188, *(double *)&v105);
LABEL_56:
        v106 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
        sr_swept_rotation[8] = 1.0;
        sr_swept_origin[0] = sr_swept_origin[0] + (float)((float)((float)v62 + 0.5) * v106);
        sr_swept_origin[1] = sr_swept_origin[1] + (float)((float)v55 * v106);
        sr_swept_origin[2] = sr_swept_origin[2] + (float)((float)((float)v60 + 0.5) * v106);
        (*(__int128 *)(void *)sr_swept_rotation) = xmmword_140278D30;
        (*(__int128 *)(void *)(sr_swept_rotation+4)) = xmmword_140278D30;
        switch ( v104 )
        {
          case 1024:
            v107 = 1070141403;
            break;
          case 2048:
            v107 = 1078530011;
            break;
          case 3072:
            v107 = 1083624420;
            break;
          default:
            goto LABEL_63;
        }
        sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_swept_rotation), (float *)&dword_1402F6188, *(double *)&v107);
LABEL_63:
        if ( sub_140032E60(&sr_swept_position[0], (__int64)&sr_swept_normal[0], &v251, v101, &sr_swept_origin[0], (float *)&(*(__int128 *)(void *)sr_swept_rotation), v287, v286, v7) )
        {
          v239 = v264;
          v240 = v270;
          v241 = sr_swept_position[1];
          *v264 = sr_swept_position[0];
          v242 = sr_swept_position[2];
          v239[1] = v241;
          v243 = sr_swept_normal[0];
          v239[2] = v242;
          v244 = sr_swept_normal[1];
          *v240 = v243;
          v245 = sr_swept_normal[2];
          v240[1] = v244;
          v246 = v251;
          v240[2] = v245;
          *a3 = v246;
          dword_140404A6C[73007003] = -1;
          return 1;
        }
        goto LABEL_64;
      }
LABEL_96:
      sr_swept_cell[2] = ++v60;
    }
    while ( v60 <= v59 );
    v58 = v280;
    v56 = v281;
LABEL_98:
    ++v55;
    v263 = *(float *)&v55;
    sr_swept_cell[1] = v55;
  }
  while ( v55 <= v56 );
  unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_swept_hit;
}
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef v259
#undef v260
#undef v261
#undef v262
#undef v263
#undef v264
#undef v265
#undef v269
#undef v270
#undef v274
#undef v275
#undef v279
#undef v280
#undef v281
#undef v282
#undef v283
#undef v286
#undef v287
#undef v291
#undef v292

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84900: using guessed type unsigned int;
// 151A84904: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (0000000140032E60) ----------------------------------------------------
_BOOL8            sub_140032E60(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  float *v12; // rdx
  float v14; // xmm7_4
  float v15; // xmm9_4
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  signed int v22; // r12d
  __int64 v23; // r8
  unsigned int *v24; // rsi
  float v25; // xmm9_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  __int64 v29; // rax
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm1_4
  float v36; // xmm15_4
  float v37; // xmm13_4
  float v38; // xmm3_4
  float v39; // xmm14_4
  float v40; // xmm12_4
  float v41; // xmm8_4
  float v42; // xmm9_4
  float v43; // xmm0_4
  bool v44; // zf
  float v45; // xmm8_4
  float v46; // xmm3_4
  float v47; // xmm9_4
  __int64 v48; // rax
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm6_4
  float v54; // xmm5_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  int v58; // xmm1_4
  int v59; // xmm0_4
  int v60; // xmm1_4
  int v61; // xmm0_4
  float v62; // xmm2_4
  int v63; // xmm1_4
  int v64; // xmm0_4
  int v65; // xmm1_4
  int v66; // xmm0_4
  _Alignas(8) unsigned sr_swept_surface_normal[3];
  int sr_swept_surface_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140032E60[400];
#define v68 (*(__int64 (*))(void *)(sr_frame_140032E60 + 0)) /* [rsp+28h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_140032E60 + 40)) /* [rsp+50h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_140032E60 + 48)) /* [rsp+58h] */
#define v76 (*(float (*)[4])(void *)(sr_frame_140032E60 + 88)) /* [rsp+80h] */
#define v77 (*(float (*)[4])(void *)(sr_frame_140032E60 + 104)) /* [rsp+90h] */
#define v78 (*(float (*)[4])(void *)(sr_frame_140032E60 + 120)) /* [rsp+A0h] */
#define v79 (*(float (*)[4])(void *)(sr_frame_140032E60 + 136)) /* [rsp+B0h] */
#define v80 (*(float (*))(void *)(sr_frame_140032E60 + 384)) /* [rsp+1A8h] */
#define v81 (*(float (*))(void *)(sr_frame_140032E60 + 392)) /* [rsp+1B0h] */

  v12 = a7;
  v14 = a9;
  v15 = *a5;
  v16 = 2310LL * a4;
  v69 = v16 * 4;
  v17 = *(float *)&dword_140404A6C[v16 + 432531269];
  v18 = *a5 - v17;
  if ( (float)(*a7 + a9) < v18 && (float)(a9 + *a8) < v18 )
    return 0;
  v19 = a5[1];
  if ( (float)(a7[1] + a9) < (float)(v19 - v17) && (float)(a9 + a8[1]) < (float)(v19 - v17) )
    return 0;
  v20 = a5[2] - v17;
  if ( (float)(a7[2] + a9) < v20 && (float)(a9 + a8[2]) < v20 )
    return 0;
  if ( (float)(*a7 - a9) > (float)(v17 + v15) && (float)(*a8 - a9) > (float)(v17 + v15) )
    return 0;
  if ( (float)(a7[1] - a9) > (float)(v17 + v19) && (float)(a8[1] - a9) > (float)(v17 + v19) )
    return 0;
  v21 = v17 + a5[2];
  if ( (float)(a7[2] - a9) > v21 && (float)(a8[2] - a9) > v21 )
    return 0;
  v22 = 0;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[v16 + 432532039] <= 0 )
    return 0;
  v23 = 770LL * a4;
  v24 = &dword_140404A6C[v16 + 432532042];
  v70 = v23;
  do
  {
    v25 = a6[3];
    v26 = *(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*(v24 - 1)];
    v27 = *(float *)&dword_140404A6C[3 * v23 + 432531272 + 3 * (int)*(v24 - 1)];
    v28 = *(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*(v24 - 1)];
    v29 = v23 + (int)v24[1];
    v30 = (float)((float)(v25 * v27) + (float)(*a6 * v26)) + (float)(a6[6] * v28);
    v31 = (float)((float)(a6[4] * v27) + (float)(a6[1] * v26)) + (float)(a6[7] * v28);
    v32 = *(float *)&dword_140404A6C[3 * v23 + 432531272 + 3 * (int)*v24];
    v33 = (float)((float)(a6[5] * v27) + (float)(a6[2] * v26)) + (float)(a6[8] * v28);
    v34 = (float)((float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * *a6) + (float)(v32 * v25))
        + (float)(*(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*v24] * a6[6]);
    v35 = *(float *)&dword_140404A6C[3 * v23 + 432531273 + 3 * (int)*v24];
    v36 = (float)((float)(v32 * a6[4]) + (float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * a6[1]))
        + (float)(v35 * a6[7]);
    v37 = (float)((float)(*(float *)&dword_140404A6C[3 * v23 + 432531271 + 3 * (int)*v24] * a6[2]) + (float)(v32 * a6[5]))
        + (float)(v35 * a6[8]);
    v38 = *(float *)&dword_140404A6C[3 * v29 + 432531273];
    v80 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * *a6)
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * v25))
        + (float)(v38 * a6[6]);
    v39 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * a6[2])
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * a6[5]))
        + (float)(v38 * a6[8]);
    v81 = (float)((float)(*(float *)&dword_140404A6C[3 * v29 + 432531271] * a6[1])
                + (float)(*(float *)&dword_140404A6C[3 * v29 + 432531272] * a6[4]))
        + (float)(v38 * a6[7]);
    v40 = (float)((float)(v81 - v31) * (float)(v37 - v33)) - (float)((float)(v39 - v33) * (float)(v36 - v31));
    v41 = (float)((float)(v39 - v33) * (float)(v34 - v30)) - (float)((float)(v80 - v30) * (float)(v37 - v33));
    v42 = (float)((float)(v80 - v30) * (float)(v36 - v31)) - (float)((float)(v81 - v31) * (float)(v34 - v30));
    v43 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42));
    if ( v43 == 0.0 )
    {
      (*(int64_t *)(void *)sr_swept_surface_normal) = 0;
      (*(float *)&sr_swept_surface_normal[2]) = 0.0;
    }
    else
    {
      *(float *)&(*(int64_t *)(void *)sr_swept_surface_normal) = (float)(1.0 / v43) * v40;
      *((float *)&(*(int64_t *)(void *)sr_swept_surface_normal) + 1) = (float)(1.0 / v43) * v41;
      (*(float *)&sr_swept_surface_normal[2]) = (float)(1.0 / v43) * v42;
    }
    v44 = *(v24 - 2) == 4;
    v45 = a5[1];
    v46 = *a5;
    v47 = a5[2];
    v77[1] = v31 + v45;
    v77[0] = v30 + v46;
    v77[2] = v33 + v47;
    v78[1] = v45 + v36;
    v78[2] = v47 + v37;
    v78[0] = v34 + v46;
    v76[0] = v46 + v80;
    v76[1] = v45 + v81;
    v76[2] = v47 + v39;
    if ( v44 )
    {
      v48 = v23 + (int)v24[2];
      v49 = (float)(*(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[3]) + v46;
      v50 = *(float *)&dword_140404A6C[3 * v48 + 432531273];
      v51 = *(float *)&dword_140404A6C[3 * v48 + 432531271];
      v52 = (float)((float)(v50 * a6[6]) + (float)(v51 * *a6)) + v49;
      v53 = (float)(v50 * a6[8]) + (float)(v51 * a6[2]);
      v54 = *(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[5];
      v55 = (float)(v50 * a6[7]) + (float)(v51 * a6[1]);
      v56 = (float)(*(float *)&dword_140404A6C[3 * v48 + 432531272] * a6[4]) + v45;
      v79[0] = v52;
      v79[1] = v55 + v56;
      v79[2] = v53 + (float)(v54 + v47);
    }
    *(float *)&v68 = v14;
    if ( (unsigned int)sub_140035690((float *)&sr_swept_surface_point[0], (float *)&(*(int64_t *)(void *)sr_swept_surface_normal), &a9, v12, a8, v68, v77, v78, v76) )
    {
      v57 = a9;
      if ( a9 < *a3 )
      {
        v58 = sr_swept_surface_point[1];
        *a1 = sr_swept_surface_point[0];
        v59 = sr_swept_surface_point[2];
        a1[1] = v58;
        v60 = (*(int64_t *)(void *)sr_swept_surface_normal);
        a1[2] = v59;
        v61 = HIDWORD((*(int64_t *)(void *)sr_swept_surface_normal));
        *(_DWORD *)a2 = v60;
        *(float *)(a2 + 8) = (*(float *)&sr_swept_surface_normal[2]);
        *(_DWORD *)(a2 + 4) = v61;
        *a3 = v57;
      }
    }
    if ( *(v24 - 2) == 4 )
    {
      *(float *)&v68 = v14;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_surface_point[0], (float *)&(*(int64_t *)(void *)sr_swept_surface_normal), &a9, a7, a8, v68, v77, v76, v79) )
      {
        v62 = a9;
        if ( a9 < *a3 )
        {
          v63 = sr_swept_surface_point[1];
          *a1 = sr_swept_surface_point[0];
          v64 = sr_swept_surface_point[2];
          a1[1] = v63;
          v65 = (*(int64_t *)(void *)sr_swept_surface_normal);
          a1[2] = v64;
          v66 = HIDWORD((*(int64_t *)(void *)sr_swept_surface_normal));
          *(_DWORD *)a2 = v65;
          *(float *)(a2 + 8) = (*(float *)&sr_swept_surface_normal[2]);
          *(_DWORD *)(a2 + 4) = v66;
          *a3 = v62;
        }
      }
    }
    v12 = a7;
    ++v22;
    v23 = v70;
    v24 += 6;
  }
  while ( v22 < *(int *)((char *)&dword_140404A6C[432532039] + v69) );
  return *a3 < 65536.0;
}
#undef v68
#undef v69
#undef v70
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81

// 14003370C: variable 'v30' is possibly undefined

//----- (00000001400337B0) ----------------------------------------------------
_BOOL8            sub_1400337B0(float *a1, __int64 a2, float *a3, float *a4, int a5)
{
  int v5; // r14d
  int *v10; // rsi
  int v11; // xmm10_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm4_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  float v35; // xmm1_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  float v44; // xmm1_4
  _Alignas(8) unsigned sr_swept_triangle_normal[3];
  int sr_swept_triangle_point[3];
  float sr_swept_triangle_vertex[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400337B0[304];
#define v46 (*(__int64 (*))(void *)(sr_frame_1400337B0 + 0)) /* [rsp+30h] */
#define v54 (*(float (*)[4])(void *)(sr_frame_1400337B0 + 88)) /* [rsp+88h] */
#define v55 (*(float (*)[4])(void *)(sr_frame_1400337B0 + 104)) /* [rsp+98h] */
#define v56 (*(float (*)[6])(void *)(sr_frame_1400337B0 + 120)) /* [rsp+A8h] */
#define v57 (*(float (*))(void *)(sr_frame_1400337B0 + 296)) /* [rsp+158h] */

  v5 = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v10 = (int *)(a2 + 32784);
  v11 = a5;
  do
  {
    v12 = *(float *)(a2 + 16LL * *(v10 - 1) + 12);
    v13 = *(float *)(a2 + 16LL * *(v10 - 1) + 16);
    v14 = 2LL * *v10;
    v54[0] = *(float *)(a2 + 16LL * *(v10 - 1) + 8);
    v54[2] = v13;
    v54[1] = v12;
    v15 = *(float *)(a2 + 8 * v14 + 16);
    v16 = *(float *)(a2 + 8 * v14 + 8);
    v17 = *(float *)(a2 + 8 * v14 + 12);
    v18 = 2LL * v10[1];
    v55[2] = v15;
    v19 = v15 - v13;
    v55[1] = v17;
    v20 = v17 - v12;
    v55[0] = v16;
    v21 = v16 - v54[0];
    v22 = *(float *)(a2 + 8 * v18 + 8);
    v23 = *(float *)(a2 + 8 * v18 + 12);
    sr_swept_triangle_vertex[2] = *(float *)(a2 + 8 * v18 + 16);
    sr_swept_triangle_vertex[0] = v22;
    v24 = v22 - v54[0];
    sr_swept_triangle_vertex[1] = v23;
    v25 = v23 - v12;
    v26 = (float)(v25 * v19) - (float)((float)(sr_swept_triangle_vertex[2] - v13) * v20);
    v27 = (float)((float)(sr_swept_triangle_vertex[2] - v13) * v21) - (float)(v24 * v19);
    v28 = (float)(v24 * v20) - (float)(v25 * v21);
    v29 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
    if ( v29 == 0.0 )
    {
      (*(int64_t *)(void *)sr_swept_triangle_normal) = 0;
      (*(float *)&sr_swept_triangle_normal[2]) = 0.0;
    }
    else
    {
      *(float *)&(*(int64_t *)(void *)sr_swept_triangle_normal) = v26 * (float)(1.0 / v29);
      *((float *)&(*(int64_t *)(void *)sr_swept_triangle_normal) + 1) = v27 * (float)(1.0 / v29);
      (*(float *)&sr_swept_triangle_normal[2]) = v28 * (float)(1.0 / v29);
    }
    LODWORD(v46) = v11;
    if ( (unsigned int)sub_140035690((float *)&sr_swept_triangle_point[0], (float *)&(*(int64_t *)(void *)sr_swept_triangle_normal), &v57, a3, a4, v46, v54, v55, sr_swept_triangle_vertex) )
    {
      v30 = v57;
      if ( v57 < a1[7] )
      {
        v31 = sr_swept_triangle_point[1];
        *(_DWORD *)a1 = sr_swept_triangle_point[0];
        v32 = sr_swept_triangle_point[2];
        *((_DWORD *)a1 + 1) = v31;
        v33 = (*(int64_t *)(void *)sr_swept_triangle_normal);
        *((_DWORD *)a1 + 2) = v32;
        v34 = HIDWORD((*(int64_t *)(void *)sr_swept_triangle_normal));
        *((_DWORD *)a1 + 3) = v33;
        v35 = (*(float *)&sr_swept_triangle_normal[2]);
        *((_DWORD *)a1 + 4) = v34;
        a1[5] = v35;
        a1[7] = v30;
      }
    }
    if ( *(v10 - 2) == 4 )
    {
      v36 = 2LL * v10[2];
      v37 = *(float *)(a2 + 16LL * v10[2] + 12);
      v56[0] = *(float *)(a2 + 16LL * v10[2] + 8);
      v38 = *(float *)(a2 + 8 * v36 + 16);
      LODWORD(v46) = v11;
      v56[1] = v37;
      v56[2] = v38;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_triangle_point[0], (float *)&(*(int64_t *)(void *)sr_swept_triangle_normal), &v57, a3, a4, v46, v54, sr_swept_triangle_vertex, v56) )
      {
        v39 = v57;
        if ( v57 < a1[7] )
        {
          v40 = sr_swept_triangle_point[1];
          *(_DWORD *)a1 = sr_swept_triangle_point[0];
          v41 = sr_swept_triangle_point[2];
          *((_DWORD *)a1 + 1) = v40;
          v42 = (*(int64_t *)(void *)sr_swept_triangle_normal);
          *((_DWORD *)a1 + 2) = v41;
          v43 = HIDWORD((*(int64_t *)(void *)sr_swept_triangle_normal));
          *((_DWORD *)a1 + 3) = v42;
          v44 = (*(float *)&sr_swept_triangle_normal[2]);
          *((_DWORD *)a1 + 4) = v43;
          a1[5] = v44;
          a1[7] = v39;
        }
      }
    }
    ++v5;
    v10 += 8;
  }
  while ( v5 < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}
#undef v46
#undef v54
#undef v55
#undef v56
#undef v57

// 140033E24: variable 'v51' is possibly undefined

//----- (0000000140033FE0) ----------------------------------------------------
__int64            sub_140033FE0(float *a1, float *a2, float a3)
{
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm12_4
  float v9; // xmm2_4
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  signed int v22; // ebx
  unsigned int *v23; // rdi
  __int64 v25; // [rsp-20h] [rbp-12220h] BYREF
  float sr_swept_lower[3];
  float sr_swept_upper[3];
  _Alignas(16) unsigned sr_swept_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033FE0[147824];
#define v32 (*(float (*))(void *)(sr_frame_140033FE0 + 0)) /* [rsp+40h] */
#define v37 (*(int (*)[18436])(void *)(sr_frame_140033FE0 + 74064)) /* [rsp+12190h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_140033FE0 + 147808)) /* [rsp+241A0h] */

  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = *a1 - a3;
  v9 = *a2;
  v10 = *a1 + a3;
  v11 = a2[1];
  v12 = a2[2];
  v13 = v6 - a3;
  v37[0] = 0;
  sr_swept_upper[0] = v8;
  sr_swept_lower[0] = v10;
  v14 = v7 - a3;
  v37[8193] = 0;
  v15 = v6 + a3;
  sr_swept_upper[1] = v13;
  v16 = v7 + a3;
  v37[16386] = 0;
  sr_swept_upper[2] = v14;
  v17 = v11 - a3;
  sr_swept_lower[1] = v15;
  v18 = v12 - a3;
  sr_swept_lower[2] = v16;
  if ( v8 > (float)(v9 - a3) )
  {
    sr_swept_upper[0] = v9 - a3;
    v8 = v9 - a3;
  }
  if ( v13 > v17 )
  {
    sr_swept_upper[1] = v11 - a3;
    v13 = v11 - a3;
  }
  if ( v14 > v18 )
  {
    sr_swept_upper[2] = v12 - a3;
    v14 = v12 - a3;
  }
  if ( v10 < (float)(v9 - a3) )
  {
    sr_swept_lower[0] = v9 - a3;
    v10 = v9 - a3;
  }
  if ( v15 < v17 )
  {
    sr_swept_lower[1] = v11 - a3;
    v15 = v11 - a3;
  }
  if ( v16 < v18 )
  {
    sr_swept_lower[2] = v12 - a3;
    v16 = v12 - a3;
  }
  v19 = v9 + a3;
  v20 = v11 + a3;
  v21 = v12 + a3;
  if ( v8 > v19 )
    sr_swept_upper[0] = v19;
  if ( v13 > v20 )
    sr_swept_upper[1] = v20;
  if ( v14 > v21 )
    sr_swept_upper[2] = v21;
  if ( v10 < v19 )
    sr_swept_lower[0] = v19;
  if ( v15 < v20 )
    sr_swept_lower[1] = v20;
  if ( v16 < v21 )
    sr_swept_lower[2] = v21;
  sub_1400D05B0(v37, &sr_swept_upper[0], &sr_swept_lower[0]);
  if ( sub_1400337B0((float *)&(*(__int128 *)(void *)sr_swept_result), (__int64)v37, a1, a2, SLODWORD(a3)) && *(float *)&dword_140404A6C[73006988] > (*(float *)&sr_swept_result[7]) )
  {
    dword_140404A6C[73007002] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = (*(__int128 *)(void *)sr_swept_result);
    dword_140404A6C[73006985] = sr_swept_result[4];
    dword_140404A6C[73006986] = sr_swept_result[5];
    *(float *)&dword_140404A6C[73006988] = (*(float *)&sr_swept_result[7]);
  }
  v22 = 0;
  v23 = &dword_140404A6C[111579637];
  do
  {
    if ( *v23
      && (unsigned int)sub_140031530(&sr_swept_upper[0], &sr_swept_lower[0], &v32, v22, a1, a2, a3)
      && *(float *)&dword_140404A6C[73006988] > v32 )
    {
      *(float *)&dword_140404A6C[73006981] = sr_swept_upper[0];
      *(float *)&dword_140404A6C[73006982] = sr_swept_upper[1];
      *(float *)&dword_140404A6C[73006983] = sr_swept_upper[2];
      *(float *)&dword_140404A6C[73006984] = sr_swept_lower[0];
      *(float *)&dword_140404A6C[73006985] = sr_swept_lower[1];
      *(float *)&dword_140404A6C[73006986] = sr_swept_lower[2];
      *(float *)&dword_140404A6C[73006988] = v32;
      dword_140404A6C[73007002] = v22;
    }
    ++v22;
    v23 += 263004;
  }
  while ( v22 < 4 );
  unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(*(float *)&dword_140404A6C[73006988])), "x"(_mm_set_ss(65536.0f)) : "cc");
  return sr_swept_hit;
}
#undef v32
#undef v37
#undef v38

// 140034E1F: variable 'v138' is possibly undefined
// 140034EBC: variable 'v139' is possibly undefined
// 14003524F: variable 'v140' is possibly undefined
// 1400354D9: variable 'v141' is possibly undefined
// 140035583: variable 'v142' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848F4: using guessed type unsigned int;

//----- (0000000140035690) ----------------------------------------------------
__int64            sub_140035690(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        float *a7,
        float *a8,
        float *a9)
{
  extern int collision_sphere_triangle(float *point, float *normal, float *distance, const float *from, const float *to,
                                       float radius, const float *a, const float *b, const float *c);
  float radius;
  /* src/engine/collision.c; the radius arrives as float bits in a stack slot. */
  memcpy(&radius, &a6, sizeof radius);
  return collision_sphere_triangle(a1, a2, a3, a4, a5, radius, a7, a8, a9);
}

//----- (000000014003C760) ----------------------------------------------------
__int64            sub_14003C760(float *a1, float *a2, float *a3, signed int a4, float *a5, float *a6, __int64 a7)
{
  extern int collision_wheel_block_layer(float point[3], float normal[3], float *distance, int layer,
                                         const float centre[3], const float axle[3], float radius);
  /* a7 arrives as float bits in its stack slot. */
  return collision_wheel_block_layer(a1, a2, a3, a4, a5, a6, *(float *)&a7);
}

//----- (000000014003DE80) ----------------------------------------------------
__int64            sub_14003DE80(float *a1, float *a2, float a3)
{
  extern int collision_wheel_level(const float centre[3], const float axle[3], float radius);
  return collision_wheel_level(a1, a2, a3);
}

//----- (000000014004A7A0) ----------------------------------------------------
__int64            sub_14004A7A0(int a1, int a2, int *a3, int *a4, float *a5, float *a6, float *a7, float *a8)
{
  float *v8; // r10
  int v9; // r13d
  float *v10; // r15
  int *v11; // r11
  __int64 v12; // rdx
  float *v13; // r9
  __int64 v14; // r8
  float v15; // xmm10_4
  float *v16; // rax
  float v17; // xmm11_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float *v20; // rcx
  float v21; // xmm14_4
  __int64 v22; // r8
  float v23; // xmm15_4
  float v24; // xmm9_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm9_4
  __int64 v45; // rdx
  float *v46; // r12
  __int64 v47; // r8
  float v48; // xmm10_4
  float *v49; // rax
  float v50; // xmm11_4
  float v51; // xmm12_4
  float v52; // xmm13_4
  float *v53; // rcx
  float v54; // xmm14_4
  __int64 v55; // r8
  float v56; // xmm15_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm3_4
  float v60; // xmm9_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  float v63; // xmm8_4
  float v64; // xmm5_4
  float v65; // xmm2_4
  float v66; // xmm7_4
  float v67; // xmm4_4
  float v68; // xmm1_4
  float v69; // xmm6_4
  unsigned int v70; // xmm0_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm9_4
  float v76; // xmm0_4
  float v77; // xmm8_4
  __int64 v78; // rdx
  int v79; // r14d
  int v80; // eax
  float *v81; // rdi
  int v82; // esi
  float v83; // xmm8_4
  float v84; // xmm9_4
  float v85; // xmm3_4
  float v86; // xmm5_4
  float v87; // xmm2_4
  float v88; // xmm6_4
  float v89; // xmm9_4
  float v90; // xmm1_4
  float v91; // xmm4_4
  float v92; // xmm7_4
  unsigned int v93; // xmm0_4
  float v94; // xmm8_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm4_4
  float v98; // xmm0_4
  float v99; // xmm8_4
  int v100; // r14d
  __int64 v101; // rbx
  int v102; // ecx
  unsigned int v103; // xmm3_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  unsigned int v106; // xmm4_4
  float v107; // xmm0_4
  float v108; // xmm2_4
  int v109; // r14d
  float *v110; // rdi
  int v111; // esi
  float v112; // xmm9_4
  float v113; // xmm3_4
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm9_4
  float v117; // xmm4_4
  float v118; // xmm2_4
  float v119; // xmm1_4
  float v120; // xmm7_4
  unsigned int v121; // xmm0_4
  float v122; // xmm8_4
  float v123; // xmm6_4
  float v124; // xmm0_4
  float v125; // xmm4_4
  float v126; // xmm0_4
  float v127; // xmm8_4
  int v128; // r14d
  __int64 v129; // rbx
  int v130; // ecx
  unsigned int v131; // xmm3_4
  float v132; // xmm5_4
  float v133; // xmm1_4
  unsigned int v134; // xmm4_4
  float v135; // xmm0_4
  float v136; // xmm2_4
  int v137; // r8d
  float *v138; // rcx
  __int64 v139; // rax
  bool v140; // cc
  float v141; // xmm6_4
  float v142; // xmm10_4
  float v143; // xmm5_4
  float v144; // xmm11_4
  float v145; // xmm13_4
  float v146; // xmm10_4
  float v147; // xmm2_4
  float v148; // xmm3_4
  float v149; // xmm0_4
  float v150; // xmm1_4
  float v151; // xmm4_4
  float v152; // xmm6_4
  float v153; // xmm5_4
  float v154; // xmm11_4
  float v155; // xmm0_4
  float v156; // xmm13_4
  float v157; // xmm11_4
  float v158; // xmm13_4
  float v159; // xmm0_4
  float v160; // xmm10_4
  float v161; // xmm10_4
  int *v162; // r13
  float v163; // xmm7_4
  int v164; // ebx
  float v165; // xmm6_4
  float v166; // xmm4_4
  int v167; // r14d
  __int64 v168; // rdi
  float v169; // xmm8_4
  float v170; // xmm5_4
  float v171; // xmm9_4
  float v172; // xmm3_4
  float v173; // xmm7_4
  float v174; // xmm6_4
  float v175; // xmm2_4
  float v176; // xmm1_4
  float v177; // xmm5_4
  float v178; // xmm3_4
  unsigned int v179; // xmm0_4
  float v180; // xmm1_4
  float v181; // xmm8_4
  float v182; // xmm0_4
  float v183; // xmm8_4
  float v184; // xmm9_4
  float v185; // xmm4_4
  float v186; // xmm0_4
  float v187; // xmm7_4
  float v188; // xmm6_4
  float v189; // xmm0_4
  float v190; // xmm5_4
  float v191; // xmm7_4
  float v192; // xmm6_4
  __int64 v193; // r11
  int v194; // edx
  __int64 v195; // r9
  unsigned int v196; // eax
  _DWORD *v197; // r8
  __int64 v198; // r10
  __int64 v199; // rax
  float v200; // xmm2_4
  float v201; // xmm0_4
  int v202; // edx
  __int64 v203; // rax
  float v204; // xmm2_4
  float v205; // xmm0_4
  int v206; // edx
  __int64 v207; // rax
  float v208; // xmm2_4
  float v209; // xmm0_4
  int v210; // edx
  __int64 v211; // rax
  float v212; // xmm2_4
  float v213; // xmm0_4
  __int64 v214; // rax
  float v215; // xmm2_4
  float v216; // xmm0_4
  __int64 v217; // r9
  _DWORD *v218; // r8
  __int64 v219; // r10
  __int64 v220; // rax
  float v221; // xmm2_4
  float v222; // xmm0_4
  __int64 v223; // rax
  float v224; // xmm2_4
  float v225; // xmm0_4
  int v226; // r8d
  int v227; // ebx
  __int64 v228; // rsi
  __int64 v229; // rdi
  int v230; // edx
  unsigned int v231; // eax
  __int64 v232; // r10
  __int64 v233; // r11
  _DWORD *v234; // r9
  __int64 v235; // rax
  float v236; // xmm1_4
  float v237; // xmm2_4
  float v238; // xmm3_4
  int v239; // edx
  __int64 v240; // rax
  float v241; // xmm1_4
  float v242; // xmm2_4
  float v243; // xmm3_4
  int v244; // edx
  __int64 v245; // rax
  float v246; // xmm1_4
  float v247; // xmm2_4
  float v248; // xmm3_4
  int v249; // edx
  __int64 v250; // rax
  float v251; // xmm1_4
  float v252; // xmm2_4
  float v253; // xmm3_4
  __int64 v254; // rax
  float v255; // xmm1_4
  float v256; // xmm2_4
  float v257; // xmm3_4
  __int64 v258; // r10
  _DWORD *v259; // r9
  __int64 v260; // r11
  __int64 v261; // rax
  float v262; // xmm1_4
  float v263; // xmm2_4
  float v264; // xmm3_4
  __int64 v265; // rax
  float v266; // xmm1_4
  float v267; // xmm2_4
  float v268; // xmm3_4
  int v269; // r15d
  __int64 v270; // r12
  int v271; // edi
  int v272; // ebx
  int v273; // r14d
  __int64 v274; // rsi
  __int64 v275; // rdx
  __int64 v276; // rax
  float v277; // xmm1_4
  float v278; // xmm0_4
  __int64 v279; // rdx
  __int64 v280; // rax
  int v281; // xmm1_4
  float v282; // xmm0_4
  __int64 v283; // rax
  float v284; // xmm1_4
  float v285; // xmm0_4
  __int64 v286; // rax
  float v287; // xmm1_4
  float v288; // xmm0_4
  float v289; // xmm13_4
  float v290; // xmm14_4
  __m128 v291; // xmm10
  __m128 v292; // xmm11
  float v293; // xmm6_4
  float v294; // xmm15_4
  float v295; // xmm7_4
  float v296; // xmm9_4
  float v297; // xmm8_4
  float v298; // xmm0_4
  unsigned __int64 v299; // xmm0_8
  float v300; // xmm1_4
  unsigned int v301; // xmm11_4
  unsigned int v302; // xmm10_4
  float v303; // xmm1_4
  float v304; // xmm9_4
  __int64 v306; // [rsp-20h] [rbp-3BB0h] BYREF
  _Alignas(8) unsigned sr_shape_offset_b[3];
  float sr_shape_offset_a[3];
  float sr_shape_center_a[3];
  _Alignas(8) unsigned sr_shape_edge_normal[3];
  _Alignas(8) unsigned sr_shape_edge_a[3];
  _Alignas(8) unsigned sr_shape_edge_b[3];
  float sr_shape_contact[7];
  _Alignas(8) unsigned sr_shape_vertices_a[1536];
  _Alignas(8) unsigned sr_shape_vertices_b[2048];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14004A7A0[29824];
#define v307 (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 0)) /* [rsp+10h] */
#define v308 (*(int (*))(void *)(sr_frame_14004A7A0 + 8)) /* [rsp+18h] */
#define v309 (*(int (*))(void *)(sr_frame_14004A7A0 + 16)) /* [rsp+20h] */
#define v315 (*(int (*))(void *)(sr_frame_14004A7A0 + 64)) /* [rsp+50h] */
#define v316 (*(int (*))(void *)(sr_frame_14004A7A0 + 68)) /* [rsp+54h] */
#define v317 (*(float (*))(void *)(sr_frame_14004A7A0 + 72)) /* [rsp+58h] */
#define v318 (*(int (*))(void *)(sr_frame_14004A7A0 + 76)) /* [rsp+5Ch] */
#define v319 (*(int (*))(void *)(sr_frame_14004A7A0 + 15104)) /* [rsp+3B10h] */
#define v325 (*(int (*))(void *)(sr_frame_14004A7A0 + 15144)) /* [rsp+3B38h] */
#define v326 (*(int (*))(void *)(sr_frame_14004A7A0 + 15148)) /* [rsp+3B3Ch] */
#define v327 (*(float * (*))(void *)(sr_frame_14004A7A0 + 15152)) /* [rsp+3B40h] */
#define v328 (*(int * (*))(void *)(sr_frame_14004A7A0 + 15160)) /* [rsp+3B48h] */
#define v329 (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 15168)) /* [rsp+3B50h] */
#define v330 (*(float * (*))(void *)(sr_frame_14004A7A0 + 15176)) /* [rsp+3B58h] */
#define v331 (*(int * (*))(void *)(sr_frame_14004A7A0 + 15184)) /* [rsp+3B60h] */
#define v332 (*(float (*))(void *)(sr_frame_14004A7A0 + 15192)) /* [rsp+3B68h] */
#define v333 (*(float (*))(void *)(sr_frame_14004A7A0 + 15196)) /* [rsp+3B6Ch] */
#define v334 (*(float (*))(void *)(sr_frame_14004A7A0 + 15200)) /* [rsp+3B70h] */
#define v335 (*(float (*))(void *)(sr_frame_14004A7A0 + 15204)) /* [rsp+3B74h] */
#define v336 (*(float (*))(void *)(sr_frame_14004A7A0 + 15208)) /* [rsp+3B78h] */
#define v337 (*(float (*))(void *)(sr_frame_14004A7A0 + 15212)) /* [rsp+3B7Ch] */
#define v338 (*(float (*)[4])(void *)(sr_frame_14004A7A0 + 15216)) /* [rsp+3B80h] */
#define v339 (*(float (*)[4])(void *)(sr_frame_14004A7A0 + 15232)) /* [rsp+3B90h] */
#define v350 (*(float (*)[6])(void *)(sr_frame_14004A7A0 + 15320)) /* [rsp+3BE8h] */
#define v351 (*(_QWORD (*)[8])(void *)(sr_frame_14004A7A0 + 15344)) /* [rsp+3C00h] */
#define v352 (*(_QWORD (*)[8])(void *)(sr_frame_14004A7A0 + 15408)) /* [rsp+3C40h] */
#define v357 (*(__int64 (*))(void *)(sr_frame_14004A7A0 + 29808)) /* [rsp+7480h] */

  v8 = a8;
  v9 = 0;
  v10 = a5;
  v11 = a4;
  v318 = a2;
  v12 = *a3;
  v331 = a4;
  v13 = a6;
  v328 = a3;
  v319 = a1;
  v330 = a8;
  v327 = a6;
  v316 = 0;
  if ( v12 > 0 )
  {
    v14 = *((_QWORD *)a3 + 1);
    v15 = a6[3];
    v16 = ((float *)(void *)(sr_shape_vertices_a+2));
    v17 = *a6;
    v18 = a6[6];
    v19 = a6[4];
    v20 = (float *)(v14 + 8);
    v21 = a6[1];
    v22 = v14 - (_QWORD)((float *)(void *)(sr_shape_vertices_a+2));
    v23 = a6[7];
    do
    {
      v24 = *(v20 - 1);
      v25 = *(float *)((char *)v16 + v22);
      v26 = *v20;
      v27 = v24 * v15;
      v20 += 3;
      v28 = v25 * a6[2];
      v29 = v24;
      v30 = v24 * a6[5];
      v31 = v26;
      v32 = v29 * v19;
      v33 = v26;
      v34 = v26 * a6[8];
      v35 = v25 * v17;
      v36 = v31 * v18;
      v37 = *(float *)((char *)v16 + v22) * v21;
      v38 = v35 + v27;
      v39 = v33 * v23;
      v40 = (float)(v27 + *a5) + (float)(v35 + v36);
      sr_shape_offset_a[0] = v38 + v36;
      v41 = v37 + v32;
      v42 = v32 + a5[1];
      *(v16 - 2) = v40;
      sr_shape_offset_a[1] = v41 + v39;
      v43 = v28 + v30;
      v44 = v30 + a5[2];
      *(v16 - 1) = v42 + (float)(v37 + v39);
      sr_shape_offset_a[2] = v43 + v34;
      *v16 = v44 + (float)(v28 + v34);
      v16 += 3;
      --v12;
    }
    while ( v12 );
  }
  v45 = *v11;
  v46 = a7;
  if ( v45 > 0 )
  {
    v47 = *((_QWORD *)v11 + 1);
    v48 = a8[3];
    v49 = ((float *)(void *)(sr_shape_vertices_b+2));
    v50 = *a8;
    v51 = a8[6];
    v52 = a8[4];
    v53 = (float *)(v47 + 8);
    v54 = a8[1];
    v55 = v47 - (_QWORD)((float *)(void *)(sr_shape_vertices_b+2));
    v56 = a8[7];
    do
    {
      v57 = *(v53 - 1);
      v58 = *(float *)((char *)v49 + v55);
      v59 = v58;
      v60 = v58 * a8[2];
      v61 = *v53;
      v53 += 3;
      v62 = v61;
      v63 = v61 * a8[8];
      v64 = v57;
      v65 = v57;
      v66 = v57 * a8[5];
      v67 = v61 * v51;
      v68 = v62 * v56;
      v69 = (float)(v58 * v50) + (float)(v64 * v48);
      *(float *)&v70 = v69 + v67;
      v71 = v67 + *a7;
      sr_shape_offset_a[0] = *(float *)&v70;
      v72 = (float)(v59 * v54) + (float)(v65 * v52);
      v73 = v72 + v68;
      v74 = v68 + a7[1];
      *(v49 - 2) = v69 + v71;
      sr_shape_offset_a[1] = v73;
      v75 = v60 + v66;
      v76 = v75 + v63;
      v77 = v63 + a7[2];
      *(v49 - 1) = v72 + v74;
      sr_shape_offset_a[2] = v76;
      *v49 = v75 + v77;
      v49 += 3;
      --v45;
    }
    while ( v45 );
  }
  v78 = (__int64)v328;
  v79 = 0;
  v80 = v328[4];
  v315 = 0;
  if ( v80 > 0 )
  {
    v81 = (float *)(v328 + 10);
    do
    {
      v82 = 0;
      v83 = *(v81 - 3);
      v84 = *(v81 - 2);
      v85 = *(v81 - 4) * *v13;
      v86 = v84 * v13[6];
      v87 = v84 * v13[7];
      v88 = v83 * v13[3];
      v89 = v84 * v13[8];
      v90 = *(v81 - 4) * v13[1];
      v91 = v83 * v13[4];
      v92 = *(v81 - 4) * v13[2];
      *(float *)&v93 = (float)(v85 + v88) + v86;
      v94 = v83 * v13[5];
      v95 = v88 + *a5;
      sr_shape_offset_a[0] = *(float *)&v93;
      v96 = v90 + v91;
      v97 = v91 + a5[1];
      sr_shape_center_a[0] = (float)(v86 + v85) + v95;
      sr_shape_offset_a[1] = v96 + v87;
      v98 = v92 + v94;
      v99 = v94 + a5[2];
      sr_shape_center_a[1] = (float)(v87 + v90) + v97;
      sr_shape_offset_a[2] = v98 + v89;
      sr_shape_center_a[2] = (float)(v89 + v92) + v99;
      if ( *((int *)v81 - 1) > 0 )
      {
        v100 = v318;
        v101 = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&sr_shape_contact[0],
                 (__int64)v11,
                 (__int64)sr_shape_vertices_b,
                 (__int64)a7,
                 v8,
                 &sr_shape_center_a[0],
                 (float *)&sr_shape_vertices_a[3 * *(_DWORD *)(v101 + *(_QWORD *)v81)]) )
          {
            v102 = *(_DWORD *)(v101 + *(_QWORD *)v81);
            v309 = 1023410176;
            v308 = 1015021568;
            LODWORD(v307) = 1053609165;
            *(float *)&v103 = sr_shape_contact[0] - *a7;
            v104 = (float)((float)((float)(sr_shape_contact[1] - *(float *)&sr_shape_vertices_a[3 * v102 + 1]) * sr_shape_contact[4])
                         + (float)((float)(sr_shape_contact[0] - *(float *)&sr_shape_vertices_a[3 * v102]) * sr_shape_contact[3]))
                 + (float)((float)(sr_shape_contact[2] - ((float *)(void *)(sr_shape_vertices_a+2))[3 * v102]) * sr_shape_contact[5]);
            v105 = sr_shape_contact[1] - a5[1];
            *(float *)&v106 = sr_shape_contact[1] - a7[1];
            sr_shape_offset_a[0] = sr_shape_contact[0] - *a5;
            v107 = sr_shape_contact[2] - a5[2];
            v108 = sr_shape_contact[2] - a7[2];
            v317 = v104;
            sr_shape_offset_a[1] = v105;
            sr_shape_offset_a[2] = v107;
            (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(v106, v103);
            (*(float *)&sr_shape_offset_b[2]) = v108;
            sub_1400052C0(
              v319,
              v100,
              (unsigned int *)&sr_shape_offset_a[0],
              (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
              (unsigned int *)&sr_shape_contact[3],
              v104,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v9 = 1;
          }
          v8 = v330;
          ++v82;
          v11 = v331;
          v101 += 4;
        }
        while ( v82 < *((_DWORD *)v81 - 1) );
        v79 = v315;
        v13 = v327;
        v78 = (__int64)v328;
        v316 = v9;
      }
      v80 = *(_DWORD *)(v78 + 16);
      ++v79;
      v81 += 14;
      v315 = v79;
    }
    while ( v79 < v80 );
  }
  v109 = 0;
  v315 = 0;
  if ( v11[4] > 0 )
  {
    v110 = (float *)(v11 + 10);
    do
    {
      v111 = 0;
      v112 = *(v110 - 2);
      v113 = *(v110 - 4) * *v8;
      v114 = v112 * v8[6];
      v115 = *(v110 - 3) * v8[3];
      v116 = v112 * v8[8];
      v117 = *(v110 - 3) * v8[4];
      v118 = *(v110 - 4) * v8[1];
      v119 = *(v110 - 2) * v8[7];
      v120 = *(v110 - 4) * v8[2];
      *(float *)&v121 = (float)(v113 + v115) + v114;
      v122 = *(v110 - 3) * v8[5];
      v123 = v115 + *a7;
      sr_shape_offset_a[0] = *(float *)&v121;
      v124 = v118 + v117;
      v125 = v117 + a7[1];
      sr_shape_center_a[0] = (float)(v114 + v113) + v123;
      sr_shape_offset_a[1] = v124 + v119;
      v126 = v120 + v122;
      v127 = v122 + a7[2];
      sr_shape_center_a[1] = v125 + (float)(v119 + v118);
      sr_shape_offset_a[2] = v126 + v116;
      sr_shape_center_a[2] = (float)(v116 + v120) + v127;
      if ( *((int *)v110 - 1) > 0 )
      {
        v128 = v318;
        v129 = 0;
        do
        {
          if ( sub_1400DAD20(
                 (__int64)&sr_shape_contact[0],
                 v78,
                 (__int64)sr_shape_vertices_a,
                 (__int64)a5,
                 v13,
                 &sr_shape_center_a[0],
                 (float *)&sr_shape_vertices_b[3 * *(_DWORD *)(v129 + *(_QWORD *)v110)]) )
          {
            v130 = *(_DWORD *)(v129 + *(_QWORD *)v110);
            v309 = 1023410176;
            v308 = 1015021568;
            LODWORD(v307) = 1053609165;
            *(float *)&v131 = sr_shape_contact[0] - *a5;
            v132 = (float)((float)((float)(sr_shape_contact[1] - *(float *)&sr_shape_vertices_b[3 * v130 + 1]) * sr_shape_contact[4])
                         + (float)((float)(sr_shape_contact[0] - *(float *)&sr_shape_vertices_b[3 * v130]) * sr_shape_contact[3]))
                 + (float)((float)(sr_shape_contact[2] - ((float *)(void *)(sr_shape_vertices_b+2))[3 * v130]) * sr_shape_contact[5]);
            v133 = sr_shape_contact[1] - a7[1];
            *(float *)&v134 = sr_shape_contact[1] - a5[1];
            sr_shape_offset_a[0] = sr_shape_contact[0] - *a7;
            v135 = sr_shape_contact[2] - a7[2];
            v136 = sr_shape_contact[2] - a5[2];
            v317 = v132;
            sr_shape_offset_a[1] = v133;
            sr_shape_offset_a[2] = v135;
            (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(v134, v131);
            (*(float *)&sr_shape_offset_b[2]) = v136;
            sub_1400052C0(
              v128,
              v319,
              (unsigned int *)&sr_shape_offset_a[0],
              (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
              (unsigned int *)&sr_shape_contact[3],
              v132,
              0x3ECCCCCDu,
              0.015625,
              0x3D000000u);
            v9 = 1;
          }
          v13 = v327;
          ++v111;
          v78 = (__int64)v328;
          v129 += 4;
        }
        while ( v111 < *((_DWORD *)v110 - 1) );
        v109 = v315;
        v8 = v330;
        v11 = v331;
        v316 = v9;
      }
      v13 = v327;
      ++v109;
      v110 += 14;
      v315 = v109;
    }
    while ( v109 < v11[4] );
    v80 = *(_DWORD *)(v78 + 16);
  }
  v137 = 0;
  v326 = 0;
  if ( v80 <= 0 )
    return (uint32_t)v9;
  v138 = v327;
  v139 = v78 + 32;
  v329 = v78 + 32;
  do
  {
    v140 = v11[4] <= 0;
    v141 = *(float *)(v139 - 8);
    v142 = *(float *)(v139 - 4);
    v143 = *(float *)v139;
    v144 = v142 * v138[3];
    v325 = 0;
    v145 = v142 * v138[4];
    v146 = v142 * v138[5];
    v147 = v143 * v138[6];
    v148 = v141 * v138[1];
    v149 = (float)(v141 * *v138) + v144;
    v150 = v143 * v138[7];
    v151 = (float)(v141 * *v138) + v147;
    v152 = v141 * v138[2];
    v153 = v143 * v138[8];
    v154 = v144 + *v10;
    sr_shape_offset_a[0] = v149 + v147;
    v155 = v148 + v145;
    v156 = v145 + v10[1];
    v157 = v154 + v151;
    v336 = v157;
    v158 = v156 + (float)(v148 + v150);
    sr_shape_center_a[0] = v157;
    sr_shape_offset_a[1] = v155 + v150;
    v159 = v152 + v146;
    v160 = v146 + v10[2];
    v337 = v158;
    sr_shape_center_a[1] = v158;
    v161 = v160 + (float)(v152 + v153);
    sr_shape_offset_a[2] = v159 + v153;
    v335 = v161;
    sr_shape_center_a[2] = v161;
    if ( v140 )
      goto LABEL_98;
    v162 = v11 + 8;
    do
    {
      v163 = *((float *)v162 - 2);
      v164 = 0;
      v165 = *((float *)v162 - 1);
      v166 = v163 * *v8;
      v167 = *(_DWORD *)(v139 + 32);
      v168 = 0;
      v169 = v165 * v8[3];
      v351[0] = 0;
      v170 = *(float *)v162;
      v171 = v163 * v8[1];
      v172 = v165;
      v352[0] = 0;
      v173 = v163 * v8[2];
      v174 = v165 * v8[5];
      v175 = v170 * v8[6];
      v176 = v170;
      v177 = v170 * v8[8];
      v178 = v172 * v8[4];
      *(float *)&v179 = (float)(v166 + v169) + v175;
      v180 = v176 * v8[7];
      v181 = v169 + *v46;
      sr_shape_offset_a[0] = *(float *)&v179;
      v182 = v171 + v178;
      v183 = v181 + (float)(v166 + v175);
      v184 = (float)(v171 + v180) + (float)(v178 + v46[1]);
      v350[0] = v183;
      v185 = v183 - v157;
      sr_shape_offset_a[1] = v182 + v180;
      v186 = v173 + v174;
      v350[1] = v184;
      v187 = v173 + v177;
      v188 = v174 + v46[2];
      v333 = v183 - v157;
      v189 = v186 + v177;
      v190 = v184 - v158;
      v191 = v187 + v188;
      sr_shape_offset_a[2] = v189;
      v332 = v184 - v158;
      v350[2] = v191;
      v192 = v191 - v161;
      v334 = v191 - v161;
      if ( v167 < 4 )
      {
        if ( v167 <= 0 )
          goto LABEL_54;
        v193 = *(_QWORD *)(v139 + 40);
        v194 = 1;
LABEL_49:
        v217 = v164;
        v218 = (_DWORD *)(v193 + 12 * v168);
        v219 = (unsigned int)(v167 - v164);
        do
        {
          v220 = 3 * *v218;
          v221 = *(float *)&sr_shape_vertices_a[v220 + 1];
          v222 = ((float *)(void *)(sr_shape_vertices_a+2))[v220];
          sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[v220] - v157;
          sr_shape_offset_a[1] = v221 - v158;
          sr_shape_offset_a[2] = v222 - v161;
          if ( (float)((float)((float)((float)(v221 - v158) * v190) + (float)(sr_shape_offset_a[0] * v185))
                     + (float)((float)(v222 - v161) * v192)) < 0.0 )
          {
            v223 = 3 * v218[1];
            v224 = *(float *)&sr_shape_vertices_a[v223 + 1];
            v225 = ((float *)(void *)(sr_shape_vertices_a+2))[v223];
            *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[v223] - v157;
            *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = v224 - v158;
            (*(float *)&sr_shape_offset_b[2]) = v225 - v161;
            if ( (float)((float)((float)((float)(v224 - v158) * v190) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * v185))
                       + (float)((float)(v225 - v161) * v192)) < 0.0 )
              *((_DWORD *)v351 + (v217 >> 5)) |= v194;
          }
          v194 = __ROL4__(v194, 1);
          v218 += 3;
          ++v217;
          --v219;
        }
        while ( v219 );
        goto LABEL_54;
      }
      v193 = *(_QWORD *)(v139 + 40);
      v194 = 1;
      v195 = 2;
      v196 = ((unsigned int)(v167 - 4) >> 2) + 1;
      v197 = (_DWORD *)(v193 + 12);
      v198 = v196;
      v164 = 4 * v196;
      v168 = 4LL * v196;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * *(v197 - 3) + 1] - v158) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * *(v197 - 3)] - v157) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * *(v197 - 3)] - v161) * v192)) < 0.0 )
        {
          v199 = 3 * *(v197 - 2);
          v200 = *(float *)&sr_shape_vertices_a[v199 + 1];
          v201 = ((float *)(void *)(sr_shape_vertices_a+2))[v199];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[v199] - v157;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = v200 - v158;
          (*(float *)&sr_shape_offset_b[2]) = v201 - v161;
          if ( (float)((float)((float)((float)(v200 - v158) * v190) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * v185))
                     + (float)((float)(v201 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 - 2) >> 5)) |= v194;
        }
        v202 = __ROL4__(v194, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * *v197 + 1] - v158) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * *v197] - v157) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * *v197] - v161) * v192)) < 0.0 )
        {
          v203 = 3 * v197[1];
          v204 = *(float *)&sr_shape_vertices_a[v203 + 1];
          v205 = ((float *)(void *)(sr_shape_vertices_a+2))[v203];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[v203] - v157;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = v204 - v158;
          (*(float *)&sr_shape_offset_b[2]) = v205 - v161;
          if ( (float)((float)((float)((float)(v204 - v158) * v190) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * v185))
                     + (float)((float)(v205 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 - 1) >> 5)) |= v202;
        }
        v206 = __ROL4__(v202, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_a[3 * v197[3] + 1] - v158) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_a[3 * v197[3]] - v157) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_a+2))[3 * v197[3]] - v161) * v192)) < 0.0 )
        {
          v207 = 3 * v197[4];
          v208 = *(float *)&sr_shape_vertices_a[v207 + 1];
          v209 = ((float *)(void *)(sr_shape_vertices_a+2))[v207];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[v207] - v157;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = v208 - v158;
          (*(float *)&sr_shape_offset_b[2]) = v209 - v161;
          if ( (float)((float)((float)((float)(v208 - v158) * v190) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * v185))
                     + (float)((float)(v209 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + (v195 >> 5)) |= v206;
        }
        v210 = __ROL4__(v206, 1);
        v211 = 3 * v197[6];
        v212 = *(float *)&sr_shape_vertices_a[v211 + 1];
        v213 = ((float *)(void *)(sr_shape_vertices_a+2))[v211];
        sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[v211] - v157;
        sr_shape_offset_a[1] = v212 - v158;
        sr_shape_offset_a[2] = v213 - v161;
        if ( (float)((float)((float)((float)(v212 - v158) * v190) + (float)(sr_shape_offset_a[0] * v185))
                   + (float)((float)(v213 - v161) * v192)) < 0.0 )
        {
          v214 = 3 * v197[7];
          v215 = *(float *)&sr_shape_vertices_a[v214 + 1];
          v216 = ((float *)(void *)(sr_shape_vertices_a+2))[v214];
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = *(float *)&sr_shape_vertices_a[v214] - v157;
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = v215 - v158;
          (*(float *)&sr_shape_offset_b[2]) = v216 - v161;
          if ( (float)((float)((float)((float)(v215 - v158) * v190) + (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) * v185))
                     + (float)((float)(v216 - v161) * v192)) < 0.0 )
            *((_DWORD *)v351 + ((v195 + 1) >> 5)) |= v210;
        }
        v194 = __ROL4__(v210, 1);
        v197 += 12;
        v195 += 4;
        --v198;
      }
      while ( v198 );
      if ( v164 < v167 )
        goto LABEL_49;
LABEL_54:
      v226 = v162[8];
      v227 = 0;
      v228 = 0;
      if ( v226 < 4 )
      {
        if ( v226 <= 0 )
          goto LABEL_78;
        v229 = *((_QWORD *)v162 + 5);
        v230 = 1;
LABEL_73:
        v258 = v227;
        v259 = (_DWORD *)(v229 + 12 * v228);
        v260 = (unsigned int)(v226 - v227);
        do
        {
          v261 = 3 * *v259;
          v262 = *(float *)&sr_shape_vertices_b[v261 + 1] - v184;
          v263 = ((float *)(void *)(sr_shape_vertices_b+2))[v261] - v191;
          v264 = v185 * (float)(*(float *)&sr_shape_vertices_b[v261] - v183);
          sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_b[v261] - v183;
          sr_shape_offset_a[1] = v262;
          sr_shape_offset_a[2] = v263;
          if ( (float)((float)(v264 + (float)(v190 * v262)) + (float)(v192 * v263)) > 0.0 )
          {
            v265 = 3 * v259[1];
            v266 = *(float *)&sr_shape_vertices_b[v265] - v183;
            v267 = ((float *)(void *)(sr_shape_vertices_b+2))[v265] - v191;
            v268 = v190 * (float)(*(float *)&sr_shape_vertices_b[v265 + 1] - v184);
            *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[v265 + 1] - v184;
            *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = v266;
            (*(float *)&sr_shape_offset_b[2]) = v267;
            if ( (float)((float)(v268 + (float)(v185 * v266)) + (float)(v192 * v267)) > 0.0 )
              *((_DWORD *)v352 + (v258 >> 5)) |= v230;
          }
          v230 = __ROL4__(v230, 1);
          v259 += 3;
          ++v258;
          --v260;
        }
        while ( v260 );
        goto LABEL_78;
      }
      v229 = *((_QWORD *)v162 + 5);
      v230 = 1;
      v231 = ((unsigned int)(v226 - 4) >> 2) + 1;
      v232 = 2;
      v233 = v231;
      v234 = (_DWORD *)(v229 + 12);
      v227 = 4 * v231;
      v228 = 4LL * v231;
      do
      {
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * *(v234 - 3) + 1] - v184) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * *(v234 - 3)] - v183) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * *(v234 - 3)] - v191) * v192)) > 0.0 )
        {
          v235 = 3 * *(v234 - 2);
          v236 = *(float *)&sr_shape_vertices_b[v235] - v183;
          v237 = ((float *)(void *)(sr_shape_vertices_b+2))[v235] - v191;
          v238 = v190 * (float)(*(float *)&sr_shape_vertices_b[v235 + 1] - v184);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[v235 + 1] - v184;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = v236;
          (*(float *)&sr_shape_offset_b[2]) = v237;
          if ( (float)((float)(v238 + (float)(v185 * v236)) + (float)(v192 * v237)) > 0.0 )
            *((_DWORD *)v352 + ((v232 - 2) >> 5)) |= v230;
        }
        v239 = __ROL4__(v230, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * *v234 + 1] - v184) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * *v234] - v183) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * *v234] - v191) * v192)) > 0.0 )
        {
          v240 = 3 * v234[1];
          v241 = *(float *)&sr_shape_vertices_b[v240] - v183;
          v242 = ((float *)(void *)(sr_shape_vertices_b+2))[v240] - v191;
          v243 = v190 * (float)(*(float *)&sr_shape_vertices_b[v240 + 1] - v184);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[v240 + 1] - v184;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = v241;
          (*(float *)&sr_shape_offset_b[2]) = v242;
          if ( (float)((float)(v243 + (float)(v185 * v241)) + (float)(v192 * v242)) > 0.0 )
            *((_DWORD *)v352 + ((v232 - 1) >> 5)) |= v239;
        }
        v244 = __ROL4__(v239, 1);
        if ( (float)((float)((float)((float)(*(float *)&sr_shape_vertices_b[3 * v234[3] + 1] - v184) * v190)
                           + (float)((float)(*(float *)&sr_shape_vertices_b[3 * v234[3]] - v183) * v185))
                   + (float)((float)(((float *)(void *)(sr_shape_vertices_b+2))[3 * v234[3]] - v191) * v192)) > 0.0 )
        {
          v245 = 3 * v234[4];
          v246 = *(float *)&sr_shape_vertices_b[v245] - v183;
          v247 = ((float *)(void *)(sr_shape_vertices_b+2))[v245] - v191;
          v248 = v190 * (float)(*(float *)&sr_shape_vertices_b[v245 + 1] - v184);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[v245 + 1] - v184;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = v246;
          (*(float *)&sr_shape_offset_b[2]) = v247;
          if ( (float)((float)(v248 + (float)(v185 * v246)) + (float)(v192 * v247)) > 0.0 )
            *((_DWORD *)v352 + (v232 >> 5)) |= v244;
        }
        v249 = __ROL4__(v244, 1);
        v250 = 3 * v234[6];
        v251 = *(float *)&sr_shape_vertices_b[v250 + 1] - v184;
        v252 = ((float *)(void *)(sr_shape_vertices_b+2))[v250] - v191;
        v253 = v185 * (float)(*(float *)&sr_shape_vertices_b[v250] - v183);
        sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_b[v250] - v183;
        sr_shape_offset_a[1] = v251;
        sr_shape_offset_a[2] = v252;
        if ( (float)((float)(v253 + (float)(v190 * v251)) + (float)(v192 * v252)) > 0.0 )
        {
          v254 = 3 * v234[7];
          v255 = *(float *)&sr_shape_vertices_b[v254] - v183;
          v256 = ((float *)(void *)(sr_shape_vertices_b+2))[v254] - v191;
          v257 = v190 * (float)(*(float *)&sr_shape_vertices_b[v254 + 1] - v184);
          *((float *)&(*(uint64_t *)(void *)sr_shape_offset_b) + 1) = *(float *)&sr_shape_vertices_b[v254 + 1] - v184;
          *(float *)&(*(uint64_t *)(void *)sr_shape_offset_b) = v255;
          (*(float *)&sr_shape_offset_b[2]) = v256;
          if ( (float)((float)(v257 + (float)(v185 * v255)) + (float)(v192 * v256)) > 0.0 )
            *((_DWORD *)v352 + ((v232 + 1) >> 5)) |= v249;
        }
        v230 = __ROL4__(v249, 1);
        v234 += 12;
        v232 += 4;
        --v233;
      }
      while ( v233 );
      if ( v227 < v226 )
        goto LABEL_73;
LABEL_78:
      v139 = v329;
      v269 = 0;
      v315 = 0;
      if ( v167 > 0 )
      {
        v270 = 0;
        do
        {
          v271 = 0;
          if ( v226 > 0 )
          {
            v272 = 1;
            v273 = __ROL4__(1, v269) & *((_DWORD *)v351 + ((__int64)v269 >> 5));
            v274 = 0;
            do
            {
              if ( !v273 || (v272 & *((_DWORD *)v352 + ((__int64)v271 >> 5))) == 0 )
              {
                v275 = *(_QWORD *)(v329 + 40);
                v276 = 3 * *(_DWORD *)(v275 + v270);
                v277 = *(float *)&sr_shape_vertices_a[v276 + 1];
                sr_shape_offset_a[0] = *(float *)&sr_shape_vertices_a[v276];
                v278 = ((float *)(void *)(sr_shape_vertices_a+2))[v276];
                LODWORD(v276) = *(_DWORD *)(v275 + v270 + 4);
                v279 = *((_QWORD *)v162 + 5);
                sr_shape_offset_a[2] = v278;
                sr_shape_offset_a[1] = v277;
                v280 = 3 * (int)v276;
                v281 = sr_shape_vertices_a[v280 + 1];
                LODWORD((*(uint64_t *)(void *)sr_shape_offset_b)) = sr_shape_vertices_a[v280];
                v282 = ((float *)(void *)(sr_shape_vertices_a+2))[v280];
                LODWORD(v280) = *(_DWORD *)(v279 + v274);
                (*(float *)&sr_shape_offset_b[2]) = v282;
                HIDWORD((*(uint64_t *)(void *)sr_shape_offset_b)) = v281;
                v283 = 3 * (int)v280;
                v284 = *(float *)&sr_shape_vertices_b[v283 + 1];
                v339[0] = *(float *)&sr_shape_vertices_b[v283];
                v285 = ((float *)(void *)(sr_shape_vertices_b+2))[v283];
                LODWORD(v283) = *(_DWORD *)(v279 + v274 + 4);
                v339[2] = v285;
                v339[1] = v284;
                v286 = 3 * (int)v283;
                v287 = *(float *)&sr_shape_vertices_b[v286 + 1];
                v338[0] = *(float *)&sr_shape_vertices_b[v286];
                v288 = ((float *)(void *)(sr_shape_vertices_b+2))[v286];
                v338[1] = v287;
                v338[2] = v288;
                if ( (unsigned int)sub_14008CEB0(
                                     (float *)&(*(uint64_t *)(void *)sr_shape_edge_a),
                                     (float *)&(*(uint64_t *)(void *)sr_shape_edge_b),
                                     &v317,
                                     &sr_shape_offset_a[0],
                                     (float *)&(*(uint64_t *)(void *)sr_shape_offset_b),
                                     v339,
                                     v338) )
                {
                  v289 = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b);
                  v290 = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1);
                  v291 = ((__m128)_mm_cvtsi32_si128((int)((*(uint64_t *)(void *)sr_shape_edge_a))));
                  v292 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD((*(uint64_t *)(void *)sr_shape_edge_a)))));
                  v293 = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a);
                  v294 = (*(float *)&sr_shape_edge_b[2]);
                  v295 = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1);
                  v296 = (*(float *)&sr_shape_edge_a[2]);
                  v297 = (*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2]);
                  *(float *)&(*(int64_t *)(void *)sr_shape_edge_normal) = *(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a);
                  *((float *)&(*(int64_t *)(void *)sr_shape_edge_normal) + 1) = *((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1);
                  (*(float *)&sr_shape_edge_normal[2]) = (*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2]);
                  if ( (float)((float)((float)(v332 * (float)(*((float *)&(*(uint64_t *)(void *)sr_shape_edge_b) + 1) - *((float *)&(*(uint64_t *)(void *)sr_shape_edge_a) + 1)))
                                     + (float)(v333 * (float)(*(float *)&(*(uint64_t *)(void *)sr_shape_edge_b) - *(float *)&(*(uint64_t *)(void *)sr_shape_edge_a))))
                             + (float)(v334 * (float)((*(float *)&sr_shape_edge_b[2]) - (*(float *)&sr_shape_edge_a[2])))) <= 0.0
                    && sub_140187410(v339, v338, &sr_shape_center_a[0], &sr_shape_offset_a[0], (float *)&(*(uint64_t *)(void *)sr_shape_offset_b))
                    && sub_140187410(&sr_shape_offset_a[0], (float *)&(*(uint64_t *)(void *)sr_shape_offset_b), v350, v339, v338) )
                  {
                    v298 = fsqrt((float)((float)(v295 * v295) + (float)(v293 * v293)) + (float)(v297 * v297));
                    if ( v298 == 0.0 )
                    {
                      (*(int64_t *)(void *)sr_shape_edge_normal) = 0;
                      (*(float *)&sr_shape_edge_normal[2]) = 0.0;
                    }
                    else
                    {
                      *(float *)&(*(int64_t *)(void *)sr_shape_edge_normal) = (float)(1.0 / v298) * v293;
                      *((float *)&(*(int64_t *)(void *)sr_shape_edge_normal) + 1) = (float)(1.0 / v298) * v295;
                      (*(float *)&sr_shape_edge_normal[2]) = (float)(1.0 / v298) * v297;
                    }
                    SR_VEC_LANES(128, v291, f32)[0] = (float)(SR_VEC_LANES(128, v291, f32)[0] + v289) * 0.5;
                    SR_VEC_LANES(128, v292, f32)[0] = (float)(SR_VEC_LANES(128, v292, f32)[0] + v290) * 0.5;
                    (*(float *)&sr_shape_offset_b[2]) = (float)(v296 + v294) * 0.5;
                    v299 = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v291, v292), u64)[0];
                    v300 = SR_VEC_LANES(128, v292, f32)[0];
                    *(float *)&v301 = SR_VEC_LANES(128, v292, f32)[0] - a7[1];
                    (*(uint64_t *)(void *)sr_shape_offset_b) = v299;
                    (*(uint64_t *)(void *)sr_shape_edge_a) = v299;
                    (*(uint64_t *)(void *)sr_shape_edge_b) = v299;
                    LODWORD(v299) = SR_VEC_LANES(128, v291, i32)[0];
                    *(float *)&v302 = SR_VEC_LANES(128, v291, f32)[0] - *a7;
                    (*(float *)&sr_shape_edge_a[2]) = (*(float *)&sr_shape_offset_b[2]);
                    (*(float *)&sr_shape_edge_b[2]) = (*(float *)&sr_shape_offset_b[2]);
                    (*(uint64_t *)(void *)sr_shape_offset_b) = __PAIR64__(v301, v302);
                    v303 = v300 - a5[1];
                    sr_shape_offset_a[0] = *(float *)&v299 - *a5;
                    *(float *)&v299 = (*(float *)&sr_shape_offset_b[2]) - a5[2];
                    v304 = (*(float *)&sr_shape_offset_b[2]) - a7[2];
                    sr_shape_offset_a[1] = v303;
                    sr_shape_offset_a[2] = *(float *)&v299;
                    (*(float *)&sr_shape_offset_b[2]) = v304;
                    sub_1400052C0(
                      v319,
                      v318,
                      (unsigned int *)&sr_shape_offset_a[0],
                      (unsigned int *)&(*(uint64_t *)(void *)sr_shape_offset_b),
                      (unsigned int *)&(*(int64_t *)(void *)sr_shape_edge_normal),
                      v317,
                      0x3ECCCCCDu,
                      0.015625,
                      0x3D000000u);
                    v316 = 1;
                  }
                }
              }
              v226 = v162[8];
              ++v271;
              v272 = __ROL4__(v272, 1);
              v274 += 12;
            }
            while ( v271 < v226 );
            v269 = v315;
            v139 = v329;
          }
          ++v269;
          v270 += 12;
          v315 = v269;
        }
        while ( v269 < *(_DWORD *)(v139 + 32) );
        v161 = v335;
        v157 = v336;
        v158 = v337;
        v46 = a7;
      }
      v162 += 14;
      v11 = v331;
      v8 = v330;
      ++v325;
    }
    while ( v325 < v331[4] );
    v10 = a5;
    v138 = v327;
    v78 = (__int64)v328;
    v137 = v326;
LABEL_98:
    v8 = v330;
    ++v137;
    v139 += 56;
    v326 = v137;
    v329 = v139;
  }
  while ( v137 < *(_DWORD *)(v78 + 16) );
  return (uint32_t)v316;
}
#undef v307
#undef v308
#undef v309
#undef v315
#undef v316
#undef v317
#undef v318
#undef v319
#undef v325
#undef v326
#undef v327
#undef v328
#undef v329
#undef v330
#undef v331
#undef v332
#undef v333
#undef v334
#undef v335
#undef v336
#undef v337
#undef v338
#undef v339
#undef v350
#undef v351
#undef v352
#undef v357


//----- (0000000140077FA0) ----------------------------------------------------
_BOOL8            sub_140077FA0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  extern int collision_line_triangle(float *point, const float *normal, float *t, const float *from, const float *to,
                                     const float *a, const float *b, const float *c);
  /* src/engine/collision.c */
  return collision_line_triangle(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400DAD20) ----------------------------------------------------
_BOOL8            sub_1400DAD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6, float *a7)
{
  int v7; // eax
  float *v10; // r12
  float *v11; // r13
  __int64 v12; // r15
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdx
  bool v16; // zf
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm8_4
  __int64 v36; // rax
  float v37; // xmm1_4
  float v38; // xmm2_4
  int v39; // xmm1_4
  float v40; // xmm2_4
  int v41; // xmm1_4
  int sr_shape_triangle_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DAD20[240];
#define v43 (*(int (*))(void *)(sr_frame_1400DAD20 + 0)) /* [rsp+48h] */
#define v47 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 24)) /* [rsp+60h] */
#define v48 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 40)) /* [rsp+70h] */
#define v49 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 56)) /* [rsp+80h] */
#define v50 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 72)) /* [rsp+90h] */
#define v51 (*(float (*)[4])(void *)(sr_frame_1400DAD20 + 88)) /* [rsp+A0h] */
#define v52 (*(float (*))(void *)(sr_frame_1400DAD20 + 224)) /* [rsp+128h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_1400DAD20 + 232)) /* [rsp+130h] */

  v53 = a2;
  v7 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v43 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = a7;
  v11 = a6;
  v12 = a2 + 48;
  do
  {
    v13 = 0;
    if ( *(int *)v12 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v12 + 8);
        v16 = *(_DWORD *)(v15 + v14 + 4) == 4;
        v17 = *(float *)(v15 + v14 + 24);
        v18 = *(float *)(v15 + v14 + 28);
        v19 = *(float *)(v15 + v14 + 32);
        v20 = 3 * *(_DWORD *)(v15 + v14 + 8);
        v21 = *(float *)(a3 + 4 * v20 + 4);
        v48[0] = *(float *)(a3 + 4 * v20);
        v22 = *(float *)(a3 + 4 * v20 + 8);
        LODWORD(v20) = *(_DWORD *)(v15 + v14 + 12);
        v48[2] = v22;
        v48[1] = v21;
        v23 = 3 * (int)v20;
        v24 = *(float *)(a3 + 4 * v23 + 4);
        v50[0] = *(float *)(a3 + 4 * v23);
        v25 = *(float *)(a3 + 4 * v23 + 8);
        LODWORD(v23) = *(_DWORD *)(v15 + v14 + 16);
        v50[2] = v25;
        v50[1] = v24;
        v26 = 3 * (int)v23;
        v27 = *(float *)(a3 + 4 * v26 + 4);
        v47[0] = *(float *)(a3 + 4 * v26);
        v47[2] = *(float *)(a3 + 4 * v26 + 8);
        v47[1] = v27;
        v28 = v17 * a5[1];
        v29 = (float)((float)(v18 * a5[3]) + (float)(v17 * *a5)) + (float)(v19 * a5[6]);
        v30 = v19 * a5[7];
        v31 = (float)(v17 * a5[2]) + (float)(v18 * a5[5]);
        v32 = v19 * a5[8];
        v33 = (float)(v18 * a5[4]) + v28;
        v49[0] = v29;
        v34 = v31 + v32;
        v35 = v33 + v30;
        v49[2] = v34;
        v49[1] = v35;
        if ( v16 )
        {
          v36 = 3 * *(_DWORD *)(v15 + v14 + 20);
          v37 = *(float *)(a3 + 4 * v36 + 4);
          v51[0] = *(float *)(a3 + 4 * v36);
          v51[2] = *(float *)(a3 + 4 * v36 + 8);
          v51[1] = v37;
        }
        if ( sub_140077FA0((float *)&sr_shape_triangle_point[0], v49, &v52, v11, v10, v48, v50, v47) )
        {
          v38 = v52;
          if ( v52 < *(float *)(a1 + 24) )
          {
            v39 = sr_shape_triangle_point[1];
            *(_DWORD *)a1 = sr_shape_triangle_point[0];
            *(_DWORD *)(a1 + 8) = sr_shape_triangle_point[2];
            *(_DWORD *)(a1 + 4) = v39;
            *(float *)(a1 + 12) = v29;
            *(float *)(a1 + 16) = v35;
            *(float *)(a1 + 20) = v34;
            *(float *)(a1 + 24) = v38;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v12 + 8) + v14 + 4) == 4
          && sub_140077FA0((float *)&sr_shape_triangle_point[0], v49, &v52, v11, v10, v48, v47, v51) )
        {
          v40 = v52;
          if ( v52 < *(float *)(a1 + 24) )
          {
            v41 = sr_shape_triangle_point[1];
            *(_DWORD *)a1 = sr_shape_triangle_point[0];
            *(_DWORD *)(a1 + 8) = sr_shape_triangle_point[2];
            *(_DWORD *)(a1 + 4) = v41;
            *(float *)(a1 + 12) = v29;
            *(float *)(a1 + 16) = v35;
            *(float *)(a1 + 20) = v34;
            *(float *)(a1 + 24) = v40;
          }
        }
        ++v13;
        v14 += 36;
      }
      while ( v13 < *(_DWORD *)v12 );
      v7 = v43;
      a2 = v53;
    }
    ++v7;
    v12 += 56;
    v43 = v7;
  }
  while ( v7 < *(_DWORD *)(a2 + 16) );
  return *(float *)(a1 + 24) < 1.0;
}
#undef v43
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;

//----- (00000001400DC050) ----------------------------------------------------
int                sub_1400DC050(float *a1, float *a2, int a3)
{
  /* Clean implementation: src/engine/collision_level.c, checked against the original executable
     (tools/native-compare suite levelsweep). */
  extern int collision_sweep_level(float *from, float *to, int with_records);
  return collision_sweep_level(a1, a2, a3);
}

//----- (00000001400E21F0) ----------------------------------------------------
__int64            sub_1400E21F0(int a1, float *a2, float *a3)
{
  extern int collision_ray_hull(int vehicle, const float from[3], const float to[3]);
  return collision_ray_hull(a1, a2, a3);
}

//----- (0000000140108930) ----------------------------------------------------
__int64 sub_140108930()
{
  extern void vehicle_update_all(void);
  vehicle_update_all();
  return 0;
}

//----- (000000014010D0D0) ----------------------------------------------------
__int64            sub_14010D0D0(int a1, int a2)
{
  extern void vehicle_collide_wheel(int vehicle, int wheel);
  vehicle_collide_wheel(a1, a2);
  return 0;
}

//----- (0000000140151190) ----------------------------------------------------
__int64            sub_140151190(float *a1, float *a2, float *a3, signed int a4, float *a5, __int64 a6)
{
  float v6; // xmm11_4
  float *v7; // r12
  __int64 v8; // r10
  float v9; // xmm13_4
  __int64 v10; // r14
  float v11; // xmm0_4
  bool v12; // cf
  float v13; // xmm12_4
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm1_4
  float v17; // xmm12_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm5_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm13_4
  float v26; // xmm12_4
  float v27; // xmm10_4
  float v28; // xmm6_4
  int v29; // eax
  int v30; // edx
  int v31; // ebx
  int v32; // r8d
  int v33; // ecx
  int v34; // r13d
  int v35; // r9d
  int v36; // r15d
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rsi
  unsigned int v40; // eax
  float v41; // xmm0_4
  signed int v42; // esi
  __int64 v43; // r12
  float v44; // xmm9_4
  __int64 v45; // rdi
  double v46; // xmm10_8
  int v47; // ebx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm2_4
  int v53; // edi
  __int16 v54; // dx
  __int16 v55; // bx
  unsigned int v56; // edi
  __int64 v57; // rcx
  unsigned int v58; // xmm1_4
  int v59; // ebx
  __int64 v60; // xmm2_8
  float v61; // xmm2_4
  __int64 v62; // xmm2_8
  int v63; // r9d
  unsigned int v64; // eax
  BOOL v65; // eax
  float *v66; // rdi
  float v67; // xmm11_4
  float v68; // xmm7_4
  float v69; // xmm12_4
  float v70; // xmm9_4
  float v71; // xmm10_4
  float v72; // xmm13_4
  float v73; // xmm15_4
  float v74; // xmm14_4
  float *v75; // rcx
  float *v76; // rdx
  float v77; // xmm4_4
  float v78; // xmm6_4
  float v79; // xmm0_4
  float v80; // xmm5_4
  float v81; // xmm4_4
  float v82; // xmm9_4
  float v83; // xmm1_4
  float v84; // xmm5_4
  float v85; // xmm8_4
  float v86; // xmm10_4
  float v87; // xmm13_4
  float v88; // xmm15_4
  float v89; // xmm14_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  BOOL v95; // eax
  float v96; // xmm5_4
  float v97; // xmm11_4
  float v98; // xmm9_4
  float v99; // xmm7_4
  float v100; // xmm15_4
  float v101; // xmm10_4
  float v102; // xmm8_4
  float v103; // xmm12_4
  float v104; // xmm14_4
  float *v105; // rcx
  float *v106; // rdx
  float v107; // xmm2_4
  float v108; // xmm13_4
  float v109; // xmm11_4
  float v110; // xmm6_4
  float v111; // xmm1_4
  float v112; // xmm7_4
  float v113; // xmm0_4
  float v114; // xmm3_4
  float v115; // xmm5_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  float v119; // xmm9_4
  float v120; // xmm10_4
  float v121; // xmm12_4
  float v122; // xmm0_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm15_4
  float v126; // eax
  BOOL v127; // eax
  float v128; // xmm5_4
  float v129; // xmm11_4
  float v130; // xmm9_4
  float v131; // xmm12_4
  float v132; // xmm10_4
  float v133; // xmm8_4
  float v134; // xmm13_4
  float v135; // xmm15_4
  float *v136; // rcx
  float *v137; // rdx
  float v138; // xmm4_4
  float v139; // xmm2_4
  float v140; // xmm14_4
  float v141; // xmm12_4
  float v142; // xmm6_4
  float v143; // xmm1_4
  float v144; // xmm7_4
  float v145; // xmm0_4
  float v146; // xmm3_4
  float v147; // xmm5_4
  float v148; // xmm4_4
  float v149; // xmm5_4
  float v150; // xmm3_4
  float v151; // xmm9_4
  float v152; // xmm10_4
  float v153; // xmm13_4
  float v154; // xmm0_4
  float v155; // xmm3_4
  float v156; // xmm15_4
  float v157; // xmm4_4
  int v158; // r9d
  unsigned int v159; // eax
  float v160; // xmm8_4
  float v161; // xmm9_4
  float v162; // xmm11_4
  float v163; // xmm12_4
  float v164; // xmm10_4
  float v165; // xmm13_4
  float v166; // xmm7_4
  float v167; // xmm15_4
  float *v168; // rcx
  float *v169; // rdx
  float v170; // xmm6_4
  float v171; // xmm2_4
  float v172; // xmm14_4
  float v173; // xmm8_4
  float v174; // xmm1_4
  float v175; // xmm15_4
  float v176; // xmm3_4
  float v177; // xmm7_4
  float v178; // xmm0_4
  float v179; // xmm5_4
  float v180; // xmm4_4
  float v181; // xmm5_4
  float v182; // xmm10_4
  float v183; // xmm13_4
  float v184; // xmm4_4
  float v185; // xmm0_4
  float v186; // xmm3_4
  float v187; // xmm15_4
  float v188; // xmm15_4
  float v189; // xmm3_4
  float v190; // xmm5_4
  float v191; // xmm0_4
  float v192; // xmm6_4
  float v193; // xmm5_4
  float v194; // xmm0_4
  float v195; // xmm4_4
  float v196; // xmm0_4
  float *v197; // rcx
  float v198; // xmm3_4
  float *v199; // rdx
  float v200; // xmm5_4
  float v201; // xmm1_4
  float v202; // xmm2_4
  float v203; // xmm3_4
  float v204; // xmm6_4
  float v205; // xmm0_4
  float v206; // eax
  float v207; // xmm5_4
  float v208; // xmm0_4
  float *v210; // rdi
  float *v211; // rbx
  float v212; // xmm1_4
  float *v213; // rax
  float v214; // xmm0_4
  float v215; // xmm1_4
  float v216; // xmm0_4
  float v217; // xmm1_4
  float v218; // xmm0_4
  float *v219; // rdi
  float *v220; // rbx
  float *v221; // rdx
  float *v222; // r8
  float v223; // xmm1_4
  float v224; // xmm0_4
  float v225; // xmm1_4
  float v226; // xmm0_4
  float v227; // xmm1_4
  float v228; // xmm0_4
  float sr_static_sphere_point[3];
  float sr_static_sphere_normal[3];
  float sr_static_sphere_origin[3];
  int sr_static_sphere_cell[3];
  _Alignas(8) unsigned sr_static_sphere_displaced_cell[4];
  _Alignas(8) unsigned sr_static_sphere_center[4];
  _Alignas(16) unsigned sr_static_sphere_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140151190[320];
#define v229 (*(__int64 (*))(void *)(sr_frame_140151190 + 0)) /* [rsp+8h] */
#define v230 (*(float (*))(void *)(sr_frame_140151190 + 64)) /* [rsp+48h] */
#define v237 (*(float (*))(void *)(sr_frame_140151190 + 104)) /* [rsp+70h] */
#define v238 (*(int (*))(void *)(sr_frame_140151190 + 108)) /* [rsp+74h] */
#define v239 (*(__int64 (*))(void *)(sr_frame_140151190 + 112)) /* [rsp+78h] */
#define v240 (*(__int64 (*))(void *)(sr_frame_140151190 + 120)) /* [rsp+80h] */
#define v244 (*(float * (*))(void *)(sr_frame_140151190 + 144)) /* [rsp+98h] */
#define v245 (*(__int64 (*))(void *)(sr_frame_140151190 + 152)) /* [rsp+A0h] */
#define v246 (*(float * (*))(void *)(sr_frame_140151190 + 160)) /* [rsp+A8h] */
#define v247 (*(float * (*))(void *)(sr_frame_140151190 + 168)) /* [rsp+B0h] */
#define v251 (*(unsigned int (*))(void *)(sr_frame_140151190 + 192)) /* [rsp+C8h] */
#define v255 (*(int (*))(void *)(sr_frame_140151190 + 216)) /* [rsp+E0h] */
#define v256 (*(int (*))(void *)(sr_frame_140151190 + 220)) /* [rsp+E4h] */
#define v257 (*(int (*))(void *)(sr_frame_140151190 + 224)) /* [rsp+E8h] */
#define v258 (*(int (*))(void *)(sr_frame_140151190 + 228)) /* [rsp+ECh] */
#define v259 (*(float * (*))(void *)(sr_frame_140151190 + 232)) /* [rsp+F0h] */
#define v260 (*(float (*)[4])(void *)(sr_frame_140151190 + 240)) /* [rsp+F8h] */
#define v266 (*(__int64 (*))(void *)(sr_frame_140151190 + 312)) /* [rsp+140h] */

  const float sr_static_sphere_axis[3] = {0.0f, 1.0f, 0.0f};
  v6 = *(float *)&a6;
  v7 = a3;
  v8 = a4;
  *a3 = 65536.0;
  v9 = *a5;
  v10 = 263004LL * a4;
  v11 = *a5 + *(float *)&a6;
  v251 = a4;
  v259 = a3;
  v247 = a2;
  v246 = a1;
  v12 = v11 < *(float *)&dword_140404A6C[v10 + 111579657];
  v245 = a4;
  if ( v12 )
    return 0;
  v13 = a5[1];
  if ( (float)(v13 + *(float *)&a6) < *(float *)&dword_140404A6C[v10 + 111579658] )
    return 0;
  v14 = a5[2];
  if ( (float)(v14 + *(float *)&a6) < *(float *)&dword_140404A6C[v10 + 111579659] )
    return 0;
  if ( (float)(v9 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579660] )
    return 0;
  if ( (float)(v13 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579661] )
    return 0;
  if ( (float)(v14 - *(float *)&a6) > *(float *)&dword_140404A6C[v10 + 111579662] )
    return 0;
  v15 = v9 - *(float *)&dword_140404A6C[v10 + 111579638];
  v16 = *(float *)&dword_140404A6C[v10 + 111579654];
  v17 = v13 - *(float *)&dword_140404A6C[v10 + 111579639];
  v18 = v14 - *(float *)&dword_140404A6C[v10 + 111579640];
  v244 = (float *)&dword_140404A6C[v10 + 111579641];
  sr_static_sphere_origin[0] = v15;
  v19 = v15 * *(float *)&dword_140404A6C[v10 + 111579644];
  v20 = v15 * *(float *)&dword_140404A6C[v10 + 111579641];
  v21 = v18 * *(float *)&dword_140404A6C[v10 + 111579643];
  v22 = v17 * *(float *)&dword_140404A6C[v10 + 111579645];
  v23 = v18 * *(float *)&dword_140404A6C[v10 + 111579646];
  v24 = v20 + (float)(v17 * *(float *)&dword_140404A6C[v10 + 111579642]);
  v25 = v15 * *(float *)&dword_140404A6C[v10 + 111579647];
  sr_static_sphere_origin[1] = v17;
  v26 = v17 * *(float *)&dword_140404A6C[v10 + 111579648];
  sr_static_sphere_origin[2] = v18;
  v27 = v18 * *(float *)&dword_140404A6C[v10 + 111579649];
  v28 = v19 + v22;
  ((float *)(void *)sr_static_sphere_center)[0] = v24 + v21;
  ((float *)(void *)sr_static_sphere_center)[1] = v28 + v23;
  v29 = (int)(float)((float)((float)(v24 + v21) - *(float *)&a6) * v16);
  *(float *)&(*(int64_t *)(void *)(sr_static_sphere_center+2)) = (float)(v25 + v26) + v27;
  v255 = v29;
  v30 = (int)(float)((float)(*(float *)&(*(int64_t *)(void *)(sr_static_sphere_center+2)) - *(float *)&a6) * v16);
  v257 = v30;
  v238 = (int)(float)((float)((float)(*(float *)&a6 + v21) + v24) * v16);
  v31 = (int)(float)((float)((float)(v28 + v23) - *(float *)&a6) * v16);
  LODWORD(v239) = v31;
  sr_static_sphere_cell[1] = v31;
  v32 = (int)(float)((float)((float)(*(float *)&a6 + v23) + v28) * v16);
  v258 = v32;
  v33 = (int)(float)((float)((float)(*(float *)&a6 + v27) + (float)(v25 + v26)) * v16);
  v256 = v33;
  if ( v31 > v32 )
    return 0;
  sr_static_sphere_cell[1] = (int)(float)((float)((float)(v28 + v23) - *(float *)&a6) * v16);
  while ( 1 )
  {
    sr_static_sphere_cell[2] = v30;
    v34 = v30;
    if ( v30 <= v33 )
      break;
LABEL_74:
    LODWORD(v239) = ++v31;
    sr_static_sphere_cell[1] = v31;
    if ( v31 > v32 )
      { unsigned char sr_swept_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_swept_hit)
    : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_swept_hit; }
  }
  v35 = v238;
  while ( 1 )
  {
    sr_static_sphere_cell[0] = v29;
    v36 = v29;
    if ( v29 <= v35 )
      break;
LABEL_72:
    sr_static_sphere_cell[2] = ++v34;
    if ( v34 > v33 )
    {
      v30 = v257;
      v32 = v258;
      goto LABEL_74;
    }
  }
  while ( 1 )
  {
    if ( v36 < 0 )
      goto LABEL_70;
    if ( v36 >= (int)(dword_140404A6C[v10 + 111579650] << 6) )
      goto LABEL_70;
    if ( v31 < 0 )
      goto LABEL_70;
    if ( v31 >= (int)(dword_140404A6C[v10 + 111579651] << 6) )
      goto LABEL_70;
    if ( v34 < 0 )
      goto LABEL_70;
    if ( v34 >= (int)(dword_140404A6C[v10 + 111579652] << 6) )
      goto LABEL_70;
    v37 = *(int *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655]
                 + 4LL
                 * (int)((v36 >> 6)
                       + dword_140404A6C[v10 + 111579650] * ((v34 >> 6) + dword_140404A6C[v10 + 111579652] * (v31 >> 6))));
    if ( (_DWORD)v37 == -1 )
      goto LABEL_70;
    v38 = (int)dword_140404A6C[263004 * v8
                             + 111579985
                             + 513 * v37
                             + 64 * ((v31 >> 3) & 7)
                             + 8 * ((v34 >> 3) & 7)
                             + ((v36 >> 3) & 7)];
    if ( (_DWORD)v38 == -1 )
      goto LABEL_70;
    v39 = 6930 * v38 + (v36 & 7) + 8 * ((v34 & 7) + 8 * (v31 & 7u));
    v240 = v39;
    v40 = dword_140404A6C[v39 + 83199479];
    if ( !v40 )
      goto LABEL_26;
    v41 = *(float *)&dword_140404A6C[v10 + 111579653];
    v42 = 0;
    v43 = 948LL * (v40 & 0x3FF);
    v44 = (float)v31 * v41;
    sr_static_sphere_origin[0] = (float)((float)v36 + 0.5) * v41;
    sr_static_sphere_origin[1] = v44;
    sr_static_sphere_origin[2] = (float)((float)v34 + 0.5) * v41;
    if ( (int)dword_140404A6C[v43 + 272299416] > 0 )
      break;
LABEL_25:
    v7 = v259;
    v39 = v240;
LABEL_26:
    v53 = dword_140404A6C[v39 + 83198967];
    v54 = v53;
    v55 = v53;
    if ( v53 > 0 )
    {
      v56 = v53 & 0x7F;
      v57 = 2310LL * v56;
      v58 = dword_140404A6C[v57 + 432533577];
      sr_static_sphere_origin[0] = *(float *)&dword_140404A6C[v57 + 432533576];
      sr_static_sphere_origin[2] = *(float *)&dword_140404A6C[v57 + 432533578];
      sr_static_sphere_origin[1] = *(float *)&v58;
      if ( (v54 & 0xC00) == 0x400 )
      {
        sub_14007B4D0(&sr_static_sphere_origin[0], (float *)sr_static_sphere_axis, sr_export_float_lane_container(1070141403));
        v59 = v55 & 0xC00;
        goto LABEL_34;
      }
      v59 = v55 & 0xC00;
      if ( v59 == 2048 )
      {
        v60 = 1078530011;
        goto LABEL_33;
      }
      if ( v59 == 3072 )
      {
        v60 = 1083624420;
LABEL_33:
        sub_14007B4D0(&sr_static_sphere_origin[0], (float *)sr_static_sphere_axis, *(double *)&v60);
      }
LABEL_34:
      v61 = *(float *)&dword_140404A6C[v10 + 111579653];
      (*(float *)(void *)(sr_static_sphere_rotation+8)) = 1.0;
      sr_static_sphere_origin[0] = sr_static_sphere_origin[0] + (float)((float)((float)v36 + 0.5) * v61);
      sr_static_sphere_origin[1] = sr_static_sphere_origin[1] + (float)((float)(int)v239 * v61);
      sr_static_sphere_origin[2] = sr_static_sphere_origin[2] + (float)((float)((float)v34 + 0.5) * v61);
      (*(__int128 *)(void *)sr_static_sphere_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = xmmword_140278D30;
      switch ( v59 )
      {
        case 1024:
          v62 = 1070141403;
          goto LABEL_40;
        case 2048:
          v62 = 1078530011;
          goto LABEL_40;
        case 3072:
          v62 = 1083624420;
LABEL_40:
          sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, *(double *)&v62);
          break;
      }
      if ( sub_140152750(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &v230, v56, &sr_static_sphere_origin[0], (float *)&(*(__int128 *)(void *)sr_static_sphere_rotation), ((float *)(void *)sr_static_sphere_center), v6) )
      {
        v219 = v246;
        sub_14007B0F0(v246, v246, v244);
        v220 = v247;
        v221 = v247;
        v222 = v244;
        *v219 = *(float *)&dword_140404A6C[v10 + 111579638] + *v219;
        v219[1] = *(float *)&dword_140404A6C[v10 + 111579639] + v219[1];
        v219[2] = *(float *)&dword_140404A6C[v10 + 111579640] + v219[2];
        sub_14007B0F0(v221, v221, v222);
        v223 = sr_static_sphere_point[1];
        *v219 = sr_static_sphere_point[0];
        v224 = sr_static_sphere_point[2];
        v219[1] = v223;
        v225 = sr_static_sphere_normal[0];
        v219[2] = v224;
        v226 = sr_static_sphere_normal[1];
        *v220 = v225;
        v227 = sr_static_sphere_normal[2];
        v220[1] = v226;
        v228 = v230;
        v220[2] = v227;
        *v7 = v228;
        dword_140404A6C[73007003] = -1;
        return 1;
      }
    }
    v63 = dword_140404A6C[v39 + 83194359];
    v64 = v63 & 0xE0000000;
    if ( (v63 & 0xE0000000) == 0x40000000 )
    {
      v65 = sub_1401543C0(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &v230, ((float *)(void *)sr_static_sphere_center), v6, &sr_static_sphere_cell[0], v63, *(float *)&dword_140404A6C[v10 + 111579653]);
      v66 = v244;
      if ( v65 && v230 < *v7 )
      {
        v67 = v244[1];
        v68 = *v244;
        v69 = v244[2];
        v70 = v244[3];
        v71 = v244[6];
        v72 = v244[7];
        v73 = v244[8];
        v74 = v244[4];
        v75 = v246;
        v76 = v247;
        v31 = v239;
        v77 = v69 * sr_static_sphere_point[0];
        v78 = (float)(v244[5] * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579640];
        v79 = (float)(v72 * sr_static_sphere_point[2]) + (float)(v67 * sr_static_sphere_point[0]);
        v237 = (float)((float)(v71 * sr_static_sphere_point[2]) + (float)(*v244 * sr_static_sphere_point[0]))
             + (float)((float)(v70 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579638]);
        sr_static_sphere_point[0] = v237;
        v80 = (float)(v73 * sr_static_sphere_point[2]) + v77;
        v81 = sr_static_sphere_normal[0];
        v82 = v70 * sr_static_sphere_normal[1];
        v83 = sr_static_sphere_normal[0] * v67;
        v84 = v80 + v78;
        v6 = *(float *)&a6;
        v85 = (float)((float)(v74 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579639]) + v79;
        v86 = v71 * sr_static_sphere_normal[2];
        v87 = v72 * sr_static_sphere_normal[2];
        v88 = v73 * sr_static_sphere_normal[2];
        v89 = v74 * sr_static_sphere_normal[1];
        v90 = sr_static_sphere_normal[1] * v244[5];
        *v246 = v237;
        v91 = v230;
        v75[1] = v85;
        v75[2] = v84;
        v92 = (float)(v83 + v89) + v87;
        sr_static_sphere_point[1] = v85;
        sr_static_sphere_point[2] = v84;
        v76[1] = v92;
        sr_static_sphere_normal[1] = v92;
        v93 = (float)((float)(v81 * v68) + v82) + v86;
        v94 = (float)((float)(v81 * v69) + v90) + v88;
        *v76 = v93;
        sr_static_sphere_normal[0] = v93;
        v76[2] = v94;
        *v7 = v91;
        sr_static_sphere_normal[2] = v94;
        goto LABEL_56;
      }
      goto LABEL_50;
    }
    if ( v64 == 0x80000000 )
    {
      v95 = sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &v230,
              ((float *)(void *)sr_static_sphere_center),
              v6,
              (__int64)&sr_static_sphere_cell[0],
              *(float *)&v63,
              *(float *)&dword_140404A6C[v10 + 111579653]);
      v66 = v244;
      if ( v95 && v230 < *v7 )
      {
        v96 = v244[1];
        v97 = v244[4];
        v98 = v244[6];
        v99 = v97;
        v100 = v244[2];
        v101 = v244[7];
        v102 = v244[3];
        v103 = v244[8];
        v104 = v244[5];
        v105 = v246;
        v106 = v247;
        v237 = *v244;
        *(float *)&v240 = v96;
        v107 = sr_static_sphere_normal[1];
        v108 = (float)((float)(v98 * sr_static_sphere_point[2]) + (float)(v237 * sr_static_sphere_point[0]))
             + (float)((float)(v102 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v109 = v97 * sr_static_sphere_normal[1];
        v110 = (float)(v104 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579640];
        v111 = sr_static_sphere_normal[0];
        v112 = (float)((float)(v99 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v101 * sr_static_sphere_point[2]) + (float)(v96 * sr_static_sphere_point[0]));
        v113 = sr_static_sphere_normal[2];
        v114 = v96;
        v115 = (float)(v103 * sr_static_sphere_point[2]) + (float)(v100 * sr_static_sphere_point[0]);
        *v246 = v108;
        v116 = v237;
        v105[1] = v112;
        v117 = v115 + v110;
        v118 = (float)(v114 * v111) + v109;
        v119 = v98 * v113;
        v6 = *(float *)&a6;
        v105[2] = v117;
        v120 = v101 * v113;
        v121 = v103 * v113;
        v122 = v230;
        v123 = v118 + v120;
        v106[1] = v123;
        sr_static_sphere_point[0] = v108;
        sr_static_sphere_point[1] = v112;
        sr_static_sphere_point[2] = v117;
        sr_static_sphere_normal[1] = v123;
        v124 = (float)((float)(v116 * v111) + (float)(v102 * v107)) + v119;
        v125 = (float)((float)(v100 * v111) + (float)(v104 * v107)) + v121;
        *v106 = v124;
        sr_static_sphere_normal[0] = v124;
        v106[2] = v125;
        *v7 = v122;
        sr_static_sphere_normal[2] = v125;
      }
LABEL_50:
      v31 = v239;
      goto LABEL_56;
    }
    v31 = v239;
    if ( v64 == -1073741824 )
    {
      sr_static_sphere_displaced_cell[0] = v36 - (unsigned __int8)v63;
      sr_static_sphere_displaced_cell[1] = v239 - BYTE2(v63);
      LODWORD((*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2))) = v34 - BYTE1(v63);
      LODWORD(v126) = sub_1400129D0(v251, sr_static_sphere_displaced_cell[0], sr_static_sphere_displaced_cell[1], (*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2)));
      v127 = sub_1401564A0(
               &sr_static_sphere_point[0],
               &sr_static_sphere_normal[0],
               &v230,
               ((float *)(void *)sr_static_sphere_center),
               v6,
               (__int64)&sr_static_sphere_displaced_cell[0],
               v126,
               *(float *)&dword_140404A6C[v10 + 111579653]);
      v66 = v244;
      if ( v127 && v230 < *v7 )
      {
        v128 = v244[1];
        v129 = v244[4];
        v130 = v244[6];
        v131 = v244[2];
        v132 = v244[7];
        v133 = v244[3];
        v134 = v244[8];
        v135 = v244[5];
        v136 = v246;
        v137 = v247;
        v138 = v131 * sr_static_sphere_point[0];
        *(float *)&v240 = *v244;
        v237 = v128;
        v139 = sr_static_sphere_normal[0];
        v140 = (float)((float)(v130 * sr_static_sphere_point[2]) + (float)(*(float *)&v240 * sr_static_sphere_point[0]))
             + (float)((float)(v133 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v141 = v131 * sr_static_sphere_normal[0];
        v142 = (float)(v135 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579640];
        v143 = sr_static_sphere_normal[1];
        v144 = (float)((float)(v129 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v132 * sr_static_sphere_point[2]) + (float)(v128 * sr_static_sphere_point[0]));
        v145 = sr_static_sphere_normal[2];
        v146 = v128;
        v147 = (float)(v134 * sr_static_sphere_point[2]) + v138;
        *v246 = v140;
        v148 = *(float *)&v240;
        v136[1] = v144;
        v149 = v147 + v142;
        v136[2] = v149;
        v150 = (float)(v146 * v139) + (float)(v129 * v143);
        v6 = *(float *)&a6;
        v151 = v130 * v145;
        v152 = v132 * v145;
        v153 = v134 * v145;
        v154 = v230;
        v155 = v150 + v152;
        v156 = (float)((float)(v135 * v143) + v141) + v153;
        sr_static_sphere_point[0] = v140;
        sr_static_sphere_point[1] = v144;
        v137[1] = v155;
        sr_static_sphere_point[2] = v149;
        sr_static_sphere_normal[1] = v155;
        v137[2] = v156;
        sr_static_sphere_normal[2] = v156;
        v157 = (float)((float)(v148 * v139) + (float)(v133 * v143)) + v151;
        *v137 = v157;
        *v7 = v154;
        sr_static_sphere_normal[0] = v157;
      }
    }
    else
    {
      v66 = v244;
    }
LABEL_56:
    v158 = dword_140404A6C[v39 + 83197431];
    v159 = v158 & 0xE0000000;
    if ( (v158 & 0xE0000000) == 0x40000000 )
    {
      if ( sub_1401543C0(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &v230, ((float *)(void *)sr_static_sphere_center), v6, &sr_static_sphere_cell[0], v158, *(float *)&dword_140404A6C[v10 + 111579653])
        && v230 < *v7 )
      {
        v160 = *v66;
        v161 = v66[6];
        v162 = v66[1];
        v163 = v66[2];
        v164 = v66[7];
        v165 = v66[8];
        v166 = v66[4];
        v167 = v66[5];
        v168 = v246;
        v169 = v247;
        v237 = v66[3];
        *(float *)&v240 = v166;
        v170 = (float)(v167 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579640];
        v171 = sr_static_sphere_normal[0];
        v172 = (float)((float)(v161 * sr_static_sphere_point[2]) + (float)(v160 * sr_static_sphere_point[0]))
             + (float)((float)(v237 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579638]);
        v173 = v160 * sr_static_sphere_normal[0];
        v174 = sr_static_sphere_normal[1];
        v175 = v167 * sr_static_sphere_normal[1];
        v176 = v166;
        v177 = (float)((float)(v166 * sr_static_sphere_point[1]) + *(float *)&dword_140404A6C[v10 + 111579639])
             + (float)((float)(v164 * sr_static_sphere_point[2]) + (float)(v162 * sr_static_sphere_point[0]));
        v178 = sr_static_sphere_normal[2];
        v179 = (float)(v165 * sr_static_sphere_point[2]) + (float)(v163 * sr_static_sphere_point[0]);
        *v246 = v172;
        v180 = v237 * v174;
        v168[1] = v177;
        v181 = v179 + v170;
        v182 = v164 * v178;
        v168[2] = v181;
        v183 = v165 * v178;
        v184 = (float)(v180 + v173) + (float)(v161 * v178);
        v185 = v230;
        *v169 = v184;
        sr_static_sphere_point[0] = v172;
        sr_static_sphere_point[1] = v177;
        sr_static_sphere_point[2] = v181;
        sr_static_sphere_normal[0] = v184;
        v186 = (float)((float)(v176 * v174) + (float)(v162 * v171)) + v182;
        v187 = (float)(v175 + (float)(v163 * v171)) + v183;
        v169[1] = v186;
        sr_static_sphere_normal[1] = v186;
        v169[2] = v187;
        *v7 = v185;
        sr_static_sphere_normal[2] = v187;
      }
      goto LABEL_69;
    }
    if ( v159 == 0x80000000 )
    {
      if ( !sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &v230,
              ((float *)(void *)sr_static_sphere_center),
              v6,
              (__int64)&sr_static_sphere_cell[0],
              *(float *)&v158,
              *(float *)&dword_140404A6C[v10 + 111579653])
        || v230 >= *v7 )
      {
        goto LABEL_69;
      }
      v188 = (float)((float)(sr_static_sphere_point[2] * v66[6]) + (float)(sr_static_sphere_point[0] * *v66))
           + (float)((float)(sr_static_sphere_point[1] * v66[3]) + *(float *)&dword_140404A6C[v10 + 111579638]);
      v189 = sr_static_sphere_normal[1];
      v190 = (float)((float)(sr_static_sphere_point[1] * v66[4]) + *(float *)&dword_140404A6C[v10 + 111579639])
           + (float)((float)(sr_static_sphere_point[2] * v66[7]) + (float)(sr_static_sphere_point[0] * v66[1]));
      v237 = (float)((float)(sr_static_sphere_point[2] * v66[8]) + (float)(sr_static_sphere_point[0] * v66[2]))
           + (float)((float)(sr_static_sphere_point[1] * v66[5]) + *(float *)&dword_140404A6C[v10 + 111579640]);
      sr_static_sphere_point[2] = v237;
      *(float *)&v240 = v190;
      v191 = sr_static_sphere_normal[0] * *v66;
      sr_static_sphere_point[1] = v190;
      v192 = sr_static_sphere_normal[1] * v66[5];
      v193 = (float)(sr_static_sphere_normal[1] * v66[3]) + v191;
      v194 = sr_static_sphere_normal[0];
      v195 = sr_static_sphere_normal[0] * v66[2];
    }
    else
    {
      if ( v159 != -1073741824 )
        goto LABEL_69;
      sr_static_sphere_displaced_cell[0] = v36 - (unsigned __int8)v158;
      sr_static_sphere_displaced_cell[1] = v31 - BYTE2(v158);
      LODWORD((*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2))) = v34 - BYTE1(v158);
      LODWORD(v206) = sub_140016450(v251, sr_static_sphere_displaced_cell[0], sr_static_sphere_displaced_cell[1], (*(int64_t *)(void *)(sr_static_sphere_displaced_cell+2)));
      if ( !sub_1401564A0(
              &sr_static_sphere_point[0],
              &sr_static_sphere_normal[0],
              &v230,
              ((float *)(void *)sr_static_sphere_center),
              v6,
              (__int64)&sr_static_sphere_displaced_cell[0],
              v206,
              *(float *)&dword_140404A6C[v10 + 111579653])
        || v230 >= *v7 )
      {
        goto LABEL_69;
      }
      v188 = (float)((float)(sr_static_sphere_point[2] * v66[6]) + (float)(sr_static_sphere_point[0] * *v66))
           + (float)((float)(sr_static_sphere_point[1] * v66[3]) + *(float *)&dword_140404A6C[v10 + 111579638]);
      v207 = (float)((float)(sr_static_sphere_point[1] * v66[4]) + *(float *)&dword_140404A6C[v10 + 111579639])
           + (float)((float)(sr_static_sphere_point[2] * v66[7]) + (float)(sr_static_sphere_point[0] * v66[1]));
      v237 = (float)((float)(sr_static_sphere_point[2] * v66[8]) + (float)(sr_static_sphere_point[0] * v66[2]))
           + (float)((float)(sr_static_sphere_point[1] * v66[5]) + *(float *)&dword_140404A6C[v10 + 111579640]);
      sr_static_sphere_point[2] = v237;
      *(float *)&v240 = v207;
      v208 = sr_static_sphere_normal[1] * v66[3];
      v189 = sr_static_sphere_normal[1];
      v195 = sr_static_sphere_normal[1] * v66[5];
      sr_static_sphere_point[1] = v207;
      v193 = (float)(sr_static_sphere_normal[0] * *v66) + v208;
      v194 = sr_static_sphere_normal[0];
      v192 = sr_static_sphere_normal[0] * v66[2];
    }
    v196 = v194 * v66[1];
    v197 = v246;
    v198 = v189 * v66[4];
    v199 = v247;
    sr_static_sphere_point[0] = v188;
    v200 = v193 + (float)(sr_static_sphere_normal[2] * v66[6]);
    v201 = sr_static_sphere_normal[2] * v66[7];
    v202 = sr_static_sphere_normal[2] * v66[8];
    *((_DWORD *)v246 + 1) = v240;
    v203 = (float)(v198 + v196) + v201;
    v197[2] = v237;
    v204 = (float)(v192 + v195) + v202;
    v205 = v230;
    *v197 = v188;
    v199[1] = v203;
    *v199 = v200;
    v199[2] = v204;
    *v7 = v205;
    sr_static_sphere_normal[1] = v203;
    sr_static_sphere_normal[0] = v200;
    sr_static_sphere_normal[2] = v204;
LABEL_69:
    v8 = v245;
    v35 = v238;
LABEL_70:
    v6 = *(float *)&a6;
    sr_static_sphere_cell[0] = ++v36;
    if ( v36 > v35 )
    {
      v29 = v255;
      v33 = v256;
      goto LABEL_72;
    }
  }
  v45 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v43 * 4 + 1093411124;
  v46 = (float)(HIBYTE(v40) & 3) * 1.570796326795;
  while ( 1 )
  {
    v47 = *(_DWORD *)(v45 - 36);
    (*(float *)(void *)(sr_static_sphere_rotation+8)) = 1.0;
    (*(__int128 *)(void *)sr_static_sphere_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = xmmword_140278D30;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, sr_export_float_lane_container(sr_text_float_bits((float)(v46))) /* the original converts to float (cvtsd2ss) before this call */);
    v48 = *(float *)(v45 - 32);
    v49 = *(float *)(v45 - 28);
    v50 = *(float *)(v45 - 24);
    v260[0] = (float)((float)((float)(*(float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) * v48) + (float)((float)((float)v36 + 0.5) * v41))
                    + (float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 3) * v49))
            + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 2) * v50);
    v260[1] = (float)((float)((float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 1) * v48) + v44) + (float)(*(float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) * v49))
            + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 3) * v50);
    v51 = (float)((float)(*((float *)&(*(__int128 *)(void *)sr_static_sphere_rotation) + 2) * v48) + (float)((float)((float)v34 + 0.5) * v41))
        + (float)(*((float *)&(*(__int128 *)(void *)(sr_static_sphere_rotation+4)) + 1) * v49);
    (*(__int128 *)(void *)sr_static_sphere_rotation) = *(_OWORD *)(v45 - 20);
    v52 = v51 + (float)((*(float *)(void *)(sr_static_sphere_rotation+8)) * v50);
    (*(__int128 *)(void *)(sr_static_sphere_rotation+4)) = *(_OWORD *)(v45 - 4);
    (*(float *)(void *)(sr_static_sphere_rotation+8)) = *(float *)(v45 + 12);
    v260[2] = v52;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_static_sphere_rotation), (float *)sr_static_sphere_axis, sr_export_float_lane_container(sr_text_float_bits((float)(v46))) /* the original converts to float (cvtsd2ss) before this call */);
    if ( sub_140153850(&sr_static_sphere_point[0], &sr_static_sphere_normal[0], &v230, v47, v260, (float *)&(*(__int128 *)(void *)sr_static_sphere_rotation), ((float *)(void *)sr_static_sphere_center), v6) )
      break;
    ++v42;
    v45 += 116;
    if ( v42 >= (int)dword_140404A6C[v43 + 272299416] )
      goto LABEL_25;
  }
  v210 = v246;
  v211 = v247;
  v212 = sr_static_sphere_point[1];
  v213 = v259;
  *v246 = sr_static_sphere_point[0];
  v214 = sr_static_sphere_point[2];
  v210[1] = v212;
  v215 = sr_static_sphere_normal[0];
  v210[2] = v214;
  v216 = sr_static_sphere_normal[1];
  *v211 = v215;
  v217 = sr_static_sphere_normal[2];
  v211[1] = v216;
  v218 = v230;
  v211[2] = v217;
  *v213 = v218;
  dword_140404A6C[73007003] = -1;
  return 1;
}
#undef v229
#undef v230
#undef v237
#undef v238
#undef v239
#undef v240
#undef v244
#undef v245
#undef v246
#undef v247
#undef v251
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260
#undef v266

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D8: using guessed type unsigned int;

//----- (0000000140152750) ----------------------------------------------------
_BOOL8            sub_140152750(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  float v13; // xmm7_4
  __int64 v14; // rax
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  signed int v20; // r12d
  __int64 v21; // rdx
  unsigned int *v22; // r14
  float v23; // xmm12_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  __int64 v27; // rax
  float v28; // xmm13_4
  float v29; // xmm14_4
  float v30; // xmm8_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm12_4
  float v37; // xmm7_4
  float v38; // xmm9_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm8_4
  float v43; // xmm9_4
  float v44; // xmm7_4
  bool v45; // zf
  float v46; // xmm3_4
  float v47; // xmm15_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm12_4
  float v51; // xmm12_4
  float v52; // xmm13_4
  float v53; // xmm14_4
  __int64 v54; // rax
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm6_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm6_4
  float v62; // xmm5_4
  float v63; // xmm4_4
  float v64; // xmm6_4
  float v65; // xmm1_4
  float v66; // xmm3_4
  float v67; // xmm4_4
  float v68; // xmm5_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm2_4
  float v74; // xmm4_4
  float v75; // xmm5_4
  float v76; // xmm1_4
  float sr_sphere_152750_vector_78[3];
  float sr_sphere_152750_vector_81[3];
  float sr_sphere_152750_vector_84[3];
  float sr_sphere_152750_vector_87[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140152750[384];
#define v90 (*(float (*))(void *)(sr_frame_140152750 + 0)) /* [rsp+88h] */
#define v91 (*(float (*))(void *)(sr_frame_140152750 + 4)) /* [rsp+8Ch] */
#define v92 (*(float (*))(void *)(sr_frame_140152750 + 8)) /* [rsp+90h] */
#define v93 (*(float (*)[4])(void *)(sr_frame_140152750 + 16)) /* [rsp+98h] */
#define v94 (*(float (*)[4])(void *)(sr_frame_140152750 + 32)) /* [rsp+A8h] */
#define v95 (*(float (*)[4])(void *)(sr_frame_140152750 + 48)) /* [rsp+B8h] */
#define v96 (*(float (*)[4])(void *)(sr_frame_140152750 + 64)) /* [rsp+C8h] */
#define v97 (*(float (*))(void *)(sr_frame_140152750 + 80)) /* [rsp+D8h] */
#define v98 (*(float (*))(void *)(sr_frame_140152750 + 84)) /* [rsp+DCh] */
#define v99 (*(__int64 (*))(void *)(sr_frame_140152750 + 88)) /* [rsp+E0h] */
#define v100 (*(__int64 (*))(void *)(sr_frame_140152750 + 96)) /* [rsp+E8h] */
#define v101 (*(float (*))(void *)(sr_frame_140152750 + 344)) /* [rsp+1E0h] */
#define v102 (*(float (*))(void *)(sr_frame_140152750 + 352)) /* [rsp+1E8h] */
#define v103 (*(float (*))(void *)(sr_frame_140152750 + 368)) /* [rsp+1F8h] */
#define v104 (*(float (*))(void *)(sr_frame_140152750 + 376)) /* [rsp+200h] */

  v13 = *a7;
  v14 = 2310LL * a4;
  v15 = *a5;
  v16 = *a5;
  v18 = *a7 + a8;
  v99 = v14 * 4;
  v19 = *(float *)&dword_140404A6C[v14 + 432531269];
  if ( v18 < (float)(v16 - v19) )
    return 0;
  if ( (float)(a7[1] + a8) < (float)(a5[1] - v19) )
    return 0;
  if ( (float)(a7[2] + a8) < (float)(a5[2] - v19) )
    return 0;
  if ( (float)(v13 - a8) > (float)(v15 + v19) )
    return 0;
  if ( (float)(a7[1] - a8) > (float)(a5[1] + v19) )
    return 0;
  if ( (float)(a7[2] - a8) > (float)(a5[2] + v19) )
    return 0;
  v20 = 0;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[v14 + 432532039] <= 0 )
    return 0;
  v21 = 770LL * a4;
  v22 = &dword_140404A6C[v14 + 432532042];
  v100 = v21;
  do
  {
    v23 = a6[3];
    v24 = *(float *)&dword_140404A6C[3 * v21 + 432531271 + 3 * (int)*(v22 - 1)];
    v25 = *(float *)&dword_140404A6C[3 * v21 + 432531272 + 3 * (int)*(v22 - 1)];
    v26 = *(float *)&dword_140404A6C[3 * v21 + 432531273 + 3 * (int)*(v22 - 1)];
    v27 = v21 + (int)v22[1];
    v28 = (float)((float)(v23 * v25) + (float)(*a6 * v24)) + (float)(a6[6] * v26);
    v29 = (float)((float)(a6[4] * v25) + (float)(a6[1] * v24)) + (float)(a6[7] * v26);
    v30 = (float)((float)(a6[5] * v25) + (float)(a6[2] * v24)) + (float)(a6[8] * v26);
    v31 = *(float *)&dword_140404A6C[3 * v21 + 432531271 + 3 * (int)*v22];
    v32 = *(float *)&dword_140404A6C[3 * v21 + 432531272 + 3 * (int)*v22];
    v33 = *(float *)&dword_140404A6C[3 * v27 + 432531271];
    v34 = *(float *)&dword_140404A6C[3 * v27 + 432531272];
    v35 = *(float *)&dword_140404A6C[3 * v27 + 432531273];
    v104 = v30;
    v101 = (float)((float)(v31 * *a6) + (float)(v32 * v23))
         + (float)(*(float *)&dword_140404A6C[3 * v21 + 432531273 + 3 * (int)*v22] * a6[6]);
    v103 = (float)((float)(v31 * a6[1]) + (float)(v32 * a6[4]))
         + (float)(*(float *)&dword_140404A6C[3 * v21 + 432531273 + 3 * (int)*v22] * a6[7]);
    v102 = (float)((float)(v31 * a6[2]) + (float)(v32 * a6[5]))
         + (float)(*(float *)&dword_140404A6C[3 * v21 + 432531273 + 3 * (int)*v22] * a6[8]);
    v90 = (float)((float)(v33 * *a6) + (float)(v34 * v23)) + (float)(v35 * a6[6]);
    v36 = (float)((float)(v33 * a6[1]) + (float)(v34 * a6[4])) + (float)(v35 * a6[7]);
    v37 = (float)((float)(v33 * a6[2]) + (float)(v34 * a6[5])) + (float)(v35 * a6[8]);
    v91 = v36;
    v92 = v37;
    v38 = (float)((float)(v36 - v29) * (float)(v102 - v30)) - (float)((float)(v37 - v30) * (float)(v103 - v29));
    v39 = (float)((float)(v37 - v30) * (float)(v101 - v28)) - (float)((float)(v90 - v28) * (float)(v102 - v30));
    v40 = (float)((float)(v90 - v28) * (float)(v103 - v29)) - (float)((float)(v36 - v29) * (float)(v101 - v28));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      sr_sphere_152750_vector_78[0] = 0.0;
      v42 = 0.0;
      sr_sphere_152750_vector_78[1] = 0.0;
      v43 = 0.0;
      v44 = 0.0;
    }
    else
    {
      v42 = (float)(1.0 / v41) * v38;
      v43 = (float)(1.0 / v41) * v39;
      sr_sphere_152750_vector_78[0] = v42;
      v44 = (float)(1.0 / v41) * v40;
      sr_sphere_152750_vector_78[1] = v43;
    }
    v45 = *(v22 - 2) == 4;
    v46 = *a5;
    v47 = a5[1];
    v48 = *a5 + v101;
    v49 = a5[2];
    v50 = *a5;
    sr_sphere_152750_vector_78[2] = v44;
    v51 = v50 + v28;
    v95[0] = v48;
    v52 = v47 + v29;
    v53 = v49 + v104;
    v95[1] = v47 + v103;
    v94[0] = v51;
    v95[2] = v49 + v102;
    v94[1] = v52;
    v93[0] = v46 + v90;
    v94[2] = v49 + v104;
    v93[1] = v47 + v91;
    v93[2] = v49 + v92;
    if ( v45 )
    {
      v54 = v21 + (int)v22[2];
      v55 = *(float *)&dword_140404A6C[3 * v54 + 432531271];
      v56 = (float)((float)(v55 * *a6) + (float)(*(float *)&dword_140404A6C[3 * v54 + 432531272] * a6[3]))
          + (float)((float)(*(float *)&dword_140404A6C[3 * v54 + 432531273] * a6[6]) + v46);
      v57 = (float)(*(float *)&dword_140404A6C[3 * v54 + 432531273] * a6[8]) + (float)(v55 * a6[2]);
      v58 = *(float *)&dword_140404A6C[3 * v54 + 432531272] * a6[5];
      v59 = (float)(*(float *)&dword_140404A6C[3 * v54 + 432531273] * a6[7]) + (float)(v55 * a6[1]);
      v60 = (float)(*(float *)&dword_140404A6C[3 * v54 + 432531272] * a6[4]) + v47;
      v96[0] = v56;
      v61 = v57 + (float)(v58 + a5[2]);
      v96[1] = v59 + v60;
      v96[2] = v61;
    }
    v62 = a7[1];
    v63 = *a7;
    v64 = a7[2];
    v65 = *a7 - v51;
    sr_sphere_152750_vector_84[1] = v62 - v52;
    sr_sphere_152750_vector_84[0] = v65;
    sr_sphere_152750_vector_84[2] = v64 - v53;
    v66 = (float)((float)(v43 * (float)(v62 - v52)) + (float)(v42 * v65)) + (float)(v44 * (float)(v64 - v53));
    if ( v66 <= a8 && v66 >= 0.0 )
    {
      sr_sphere_152750_vector_84[0] = (float)(v42 * (float)-a8) + v63;
      sr_sphere_152750_vector_84[1] = (float)(v43 * (float)-a8) + v62;
      sr_sphere_152750_vector_84[2] = (float)(v44 * (float)-a8) + v64;
      if ( sub_140077FA0(&sr_sphere_152750_vector_81[0], &sr_sphere_152750_vector_78[0], &v97, a7, &sr_sphere_152750_vector_84[0], v94, v95, v93) )
      {
        v67 = sr_sphere_152750_vector_81[1];
        v68 = sr_sphere_152750_vector_81[2];
        v69 = fsqrt(
                (float)((float)((float)(sr_sphere_152750_vector_81[1] - a7[1]) * (float)(sr_sphere_152750_vector_81[1] - a7[1]))
                      + (float)((float)(sr_sphere_152750_vector_81[0] - *a7) * (float)(sr_sphere_152750_vector_81[0] - *a7)))
              + (float)((float)(sr_sphere_152750_vector_81[2] - a7[2]) * (float)(sr_sphere_152750_vector_81[2] - a7[2])));
        if ( v69 < *a3 )
        {
          *a1 = sr_sphere_152750_vector_81[0];
          a1[1] = v67;
          a1[2] = v68;
          *a2 = v42;
          a2[1] = v43;
          a2[2] = v44;
          *a3 = v69;
        }
      }
    }
    if ( *(v22 - 2) == 4 )
    {
      v70 = *a7;
      v71 = a7[1];
      v72 = a7[2];
      sr_sphere_152750_vector_87[0] = *a7 - v51;
      sr_sphere_152750_vector_87[1] = v71 - v52;
      sr_sphere_152750_vector_87[2] = v72 - v53;
      v73 = (float)((float)((float)(v71 - v52) * v43) + (float)(sr_sphere_152750_vector_87[0] * v42)) + (float)((float)(v72 - v53) * v44);
      if ( v73 <= a8 && v73 >= 0.0 )
      {
        sr_sphere_152750_vector_87[0] = (float)(v42 * (float)-a8) + v70;
        sr_sphere_152750_vector_87[1] = (float)(v43 * (float)-a8) + v71;
        sr_sphere_152750_vector_87[2] = (float)(v44 * (float)-a8) + v72;
        if ( sub_140077FA0(&sr_sphere_152750_vector_81[0], &sr_sphere_152750_vector_78[0], &v98, a7, &sr_sphere_152750_vector_87[0], v94, v93, v96) )
        {
          v74 = sr_sphere_152750_vector_81[1];
          v75 = sr_sphere_152750_vector_81[2];
          v76 = fsqrt(
                  (float)((float)((float)(sr_sphere_152750_vector_81[1] - a7[1]) * (float)(sr_sphere_152750_vector_81[1] - a7[1]))
                        + (float)((float)(sr_sphere_152750_vector_81[0] - *a7) * (float)(sr_sphere_152750_vector_81[0] - *a7)))
                + (float)((float)(sr_sphere_152750_vector_81[2] - a7[2]) * (float)(sr_sphere_152750_vector_81[2] - a7[2])));
          if ( v76 < *a3 )
          {
            *a1 = sr_sphere_152750_vector_81[0];
            a1[1] = v74;
            a1[2] = v75;
            *a2 = v42;
            a2[1] = v43;
            a2[2] = v44;
            *a3 = v76;
          }
        }
      }
    }
    ++v20;
    v21 = v100;
    v22 += 6;
  }
  while ( v20 < *(int *)((char *)&dword_140404A6C[432532039] + v99) );
  return *a3 < 65536.0;
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

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140153850) ----------------------------------------------------
_BOOL8            sub_140153850(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  signed int v8; // r12d
  unsigned __int64 v9; // r13
  float v13; // xmm5_4
  unsigned int *v14; // r14
  float v15; // xmm14_4
  float v16; // xmm15_4
  unsigned __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  unsigned __int64 v21; // rax
  float v22; // xmm13_4
  float v23; // xmm12_4
  float v24; // xmm8_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm13_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm6_4
  unsigned __int64 v36; // rax
  float v37; // xmm7_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm2_4
  float v42; // xmm9_4
  float v43; // xmm6_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm0_4
  float v47; // xmm11_4
  float v48; // xmm14_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm7_4
  float v52; // xmm11_4
  float v53; // xmm7_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm6_4
  float v57; // xmm11_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm14_4
  float v65; // xmm15_4
  float v66; // xmm11_4
  float v67; // xmm12_4
  float v68; // xmm13_4
  unsigned __int64 v69; // rax
  float v70; // xmm0_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm5_4
  float v74; // xmm6_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm6_4
  float v78; // xmm6_4
  float v79; // xmm4_4
  float v80; // xmm14_4
  float v81; // xmm1_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm0_4
  float v86; // xmm6_4
  float v87; // xmm4_4
  float v88; // xmm1_4
  float v89; // xmm11_4
  float v90; // xmm3_4
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm0_4
  float sr_sphere_153850_vector_95[3];
  float sr_sphere_153850_vector_98[3];
  float sr_sphere_153850_vector_101[3];
  float sr_sphere_153850_vector_104[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140153850[368];
#define v107 (*(float (*))(void *)(sr_frame_140153850 + 8)) /* [rsp+88h] */
#define v108 (*(float (*))(void *)(sr_frame_140153850 + 12)) /* [rsp+8Ch] */
#define v109 (*(float (*))(void *)(sr_frame_140153850 + 16)) /* [rsp+90h] */
#define v110 (*(float (*))(void *)(sr_frame_140153850 + 20)) /* [rsp+94h] */
#define v111 (*(float (*))(void *)(sr_frame_140153850 + 24)) /* [rsp+98h] */
#define v112 (*(float (*)[4])(void *)(sr_frame_140153850 + 32)) /* [rsp+A0h] */
#define v113 (*(float (*)[4])(void *)(sr_frame_140153850 + 48)) /* [rsp+B0h] */
#define v114 (*(float (*)[4])(void *)(sr_frame_140153850 + 64)) /* [rsp+C0h] */
#define v115 (*(float (*)[4])(void *)(sr_frame_140153850 + 80)) /* [rsp+D0h] */
#define v116 (*(__int128 (*))(void *)(sr_frame_140153850 + 96)) /* [rsp+E0h] */
#define v117 (*(float (*))(void *)(sr_frame_140153850 + 344)) /* [rsp+1D8h] */
#define v118 (*(float (*))(void *)(sr_frame_140153850 + 352)) /* [rsp+1E0h] */

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 65536.0;
  if ( (int)dword_140404A6C[v9 / 4 + 278521861] <= 0 )
    return 0;
  v13 = a8;
  v14 = &dword_140404A6C[v9 / 4 + 278521865];
  do
  {
    v15 = a6[3];
    v16 = *a6;
    v17 = v9 + 12LL * (int)*(v14 - 1);
    v18 = *(float *)((char *)&dword_140404A6C[278521669] + v17);
    v19 = *(float *)((char *)&dword_140404A6C[278521670] + v17);
    v20 = *(float *)((char *)&dword_140404A6C[278521671] + v17);
    v21 = v9 + 12LL * (int)*v14;
    v22 = a6[4] * v19;
    v23 = (float)(v15 * v19) + (float)(*a6 * v18);
    v24 = a6[5] * v19;
    v25 = *(float *)((char *)&dword_140404A6C[278521670] + v21);
    v26 = a6[1];
    v27 = *(float *)((char *)&dword_140404A6C[278521669] + v21) * v26;
    v28 = v23 + (float)(a6[6] * v20);
    v29 = v22 + (float)(v26 * v18);
    v30 = a6[2] * v18;
    v31 = *(float *)((char *)&dword_140404A6C[278521671] + v21);
    v32 = v29 + (float)(a6[7] * v20);
    v33 = a6[8] * v20;
    v34 = *(float *)((char *)&dword_140404A6C[278521669] + v21);
    v35 = v34 * a6[2];
    v36 = v9 + 12LL * (int)v14[1];
    v37 = *(float *)((char *)&dword_140404A6C[278521669] + v36);
    v118 = (float)(v24 + v30) + v33;
    v38 = v25 * a6[4];
    v39 = (float)((float)(v34 * *a6) + (float)(v25 * v15)) + (float)(v31 * a6[6]);
    v40 = v35 + (float)(v25 * a6[5]);
    v41 = *(float *)((char *)&dword_140404A6C[278521670] + v36);
    v42 = (float)(v27 + v38) + (float)(v31 * a6[7]);
    v117 = v39;
    v43 = v40 + (float)(v31 * a6[8]);
    v44 = *(float *)((char *)&dword_140404A6C[278521671] + v36);
    v107 = v42;
    v108 = v43;
    v45 = v39 - v28;
    v46 = v41 * a6[4];
    v47 = (float)((float)(v37 * v16) + (float)(v41 * v15)) + (float)(v44 * a6[6]);
    v48 = v37 * a6[1];
    v49 = v44 * a6[7];
    v50 = v44 * a6[8];
    v51 = (float)(v37 * a6[2]) + (float)(v41 * a6[5]);
    v109 = v47;
    v52 = v47 - v28;
    v53 = v51 + v50;
    v54 = v42 - v32;
    v110 = (float)(v48 + v46) + v49;
    v111 = v53;
    v55 = (float)((float)(v110 - v32) * (float)(v43 - v118)) - (float)((float)(v53 - v118) * (float)(v42 - v32));
    v56 = (float)((float)(v53 - v118) * v45) - (float)(v52 * (float)(v43 - v118));
    v57 = (float)(v52 * v54) - (float)((float)(v110 - v32) * v45);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      sr_sphere_153850_vector_95[0] = 0.0;
      v59 = 0.0;
      sr_sphere_153850_vector_95[1] = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      sr_sphere_153850_vector_95[0] = v59;
      v61 = (float)(1.0 / v58) * v57;
      sr_sphere_153850_vector_95[1] = v60;
    }
    v62 = *(v14 - 2) == 4;
    sr_sphere_153850_vector_95[2] = v61;
    v63 = *a5;
    v64 = a5[1];
    v65 = a5[2];
    v66 = *a5 + v28;
    v114[0] = *a5 + v117;
    v67 = v64 + v32;
    v68 = v65 + v118;
    v114[1] = v64 + v107;
    v113[0] = v66;
    v114[2] = v65 + v108;
    v113[1] = v67;
    v112[0] = v63 + v109;
    v113[2] = v65 + v118;
    v112[1] = v64 + v110;
    v112[2] = v65 + v111;
    if ( v62 )
    {
      v69 = v9 + 12LL * (int)v14[2];
      v70 = *(float *)((char *)&dword_140404A6C[278521669] + v69);
      v71 = (float)((float)(v70 * *a6) + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v69) * a6[3]))
          + (float)((float)(*(float *)((char *)&dword_140404A6C[278521671] + v69) * a6[6]) + v63);
      v72 = *(float *)((char *)&dword_140404A6C[278521670] + v69);
      v73 = v72 * a6[5];
      v74 = (float)(*(float *)((char *)&dword_140404A6C[278521671] + v69) * a6[8]) + (float)(v70 * a6[2]);
      v75 = v72 * a6[4];
      v76 = (float)(*(float *)((char *)&dword_140404A6C[278521671] + v69) * a6[7]) + (float)(v70 * a6[1]);
      v115[0] = v71;
      v77 = v74 + (float)(v73 + v65);
      v13 = a8;
      v115[2] = v77;
      v115[1] = v76 + (float)(v75 + v64);
    }
    v78 = a7[1];
    v79 = *a7;
    v80 = a7[2];
    v81 = *a7 - v66;
    sr_sphere_153850_vector_101[1] = v78 - v67;
    sr_sphere_153850_vector_101[0] = v81;
    sr_sphere_153850_vector_101[2] = v80 - v68;
    v82 = (float)((float)(v60 * (float)(v78 - v67)) + (float)(v59 * v81)) + (float)(v61 * (float)(v80 - v68));
    if ( v82 <= v13 && v82 >= 0.0 )
    {
      sr_sphere_153850_vector_101[0] = (float)(v59 * (float)-v13) + v79;
      sr_sphere_153850_vector_101[1] = (float)(v60 * (float)-v13) + v78;
      sr_sphere_153850_vector_101[2] = (float)(v61 * (float)-v13) + v80;
      if ( sub_140077FA0(&sr_sphere_153850_vector_98[0], &sr_sphere_153850_vector_95[0], (float *)&v116, a7, &sr_sphere_153850_vector_101[0], v113, v114, v112) )
      {
        v83 = sr_sphere_153850_vector_98[1];
        v84 = sr_sphere_153850_vector_98[2];
        v85 = fsqrt(
                (float)((float)((float)(sr_sphere_153850_vector_98[0] - *a7) * (float)(sr_sphere_153850_vector_98[0] - *a7))
                      + (float)((float)(sr_sphere_153850_vector_98[1] - a7[1]) * (float)(sr_sphere_153850_vector_98[1] - a7[1])))
              + (float)((float)(sr_sphere_153850_vector_98[2] - a7[2]) * (float)(sr_sphere_153850_vector_98[2] - a7[2])));
        if ( v85 < *a3 )
        {
          *a1 = sr_sphere_153850_vector_98[0];
          a1[1] = v83;
          a1[2] = v84;
          *a2 = v59;
          a2[1] = v60;
          a2[2] = v61;
          *a3 = v85;
        }
      }
      v13 = a8;
    }
    if ( *(v14 - 2) == 4 )
    {
      v86 = a7[1];
      v87 = *a7;
      v88 = *a7 - v66;
      v89 = a7[2];
      sr_sphere_153850_vector_104[1] = v86 - v67;
      sr_sphere_153850_vector_104[0] = v88;
      sr_sphere_153850_vector_104[2] = v89 - v68;
      v90 = (float)((float)(v60 * (float)(v86 - v67)) + (float)(v59 * v88)) + (float)(v61 * (float)(v89 - v68));
      if ( v90 <= v13 && v90 >= 0.0 )
      {
        sr_sphere_153850_vector_104[0] = (float)(v59 * (float)-v13) + v87;
        sr_sphere_153850_vector_104[1] = (float)(v60 * (float)-v13) + v86;
        sr_sphere_153850_vector_104[2] = (float)(v61 * (float)-v13) + v89;
        if ( sub_140077FA0(&sr_sphere_153850_vector_98[0], &sr_sphere_153850_vector_95[0], (float *)&v116 + 1, a7, &sr_sphere_153850_vector_104[0], v113, v112, v115) )
        {
          v91 = sr_sphere_153850_vector_98[1];
          v92 = sr_sphere_153850_vector_98[2];
          v93 = fsqrt(
                  (float)((float)((float)(sr_sphere_153850_vector_98[0] - *a7) * (float)(sr_sphere_153850_vector_98[0] - *a7))
                        + (float)((float)(sr_sphere_153850_vector_98[1] - a7[1]) * (float)(sr_sphere_153850_vector_98[1] - a7[1])))
                + (float)((float)(sr_sphere_153850_vector_98[2] - a7[2]) * (float)(sr_sphere_153850_vector_98[2] - a7[2])));
          if ( v93 < *a3 )
          {
            *a1 = sr_sphere_153850_vector_98[0];
            a1[1] = v91;
            a1[2] = v92;
            *a2 = v59;
            a2[1] = v60;
            a2[2] = v61;
            *a3 = v93;
          }
        }
      }
    }
    v13 = a8;
    ++v8;
    v14 += 6;
  }
  while ( v8 < (int)dword_140404A6C[v9 / 4 + 278521861] );
  return *a3 < 65536.0;
}
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


//----- (00000001401543C0) ----------------------------------------------------
_BOOL8            sub_1401543C0(float *a1, float *a2, float *a3, float *a4, float a5, int *a6, int a7, float a8)
{
  int *v8; // r12
  float v9; // xmm1_4
  float *v10; // r13
  float v13; // xmm11_4
  int v15; // edx
  signed int v17; // r15d
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm10_4
  float v22; // xmm12_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm5_4
  float v27; // xmm14_4
  __int64 v28; // rcx
  __int64 v29; // rax
  float v30; // xmm15_4
  float v31; // xmm0_4
  float v32; // xmm13_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rax
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm5_4
  float v40; // xmm2_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm10_4
  float v48; // xmm3_4
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm5_4
  float v52; // xmm1_4
  float v53; // xmm8_4
  float v54; // xmm11_4
  float v55; // xmm7_4
  float v56; // xmm12_4
  float v57; // xmm3_4
  float v58; // xmm5_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm9_4
  float v62; // xmm10_4
  float v63; // xmm4_4
  float v64; // xmm2_4
  float v65; // xmm9_4
  float v66; // xmm10_4
  float v67; // xmm4_4
  float v68; // xmm8_4
  float v69; // xmm12_4
  float v70; // xmm13_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  float v73; // xmm11_4
  float v74; // xmm0_4
  float v75; // xmm8_4
  float v76; // xmm4_4
  float v77; // xmm11_4
  float v78; // xmm12_4
  float v79; // xmm13_4
  float v80; // xmm9_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm4_4
  float v84; // xmm11_4
  float v85; // xmm9_4
  float v86; // xmm4_4
  float v87; // xmm12_4
  float v88; // xmm10_4
  float v89; // xmm13_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm10_4
  float v93; // xmm0_4
  float v94; // xmm11_4
  float v95; // xmm12_4
  float v96; // xmm13_4
  float v97; // xmm0_4
  float v98; // xmm9_4
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm4_4
  float v102; // xmm11_4
  float v103; // xmm9_4
  float v104; // xmm4_4
  float v105; // xmm12_4
  float v106; // xmm10_4
  float v107; // xmm13_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm10_4
  float v111; // xmm0_4
  float v112; // xmm14_4
  float v113; // xmm15_4
  float v114; // xmm12_4
  float v115; // xmm11_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm0_4
  float v119; // xmm4_4
  bool v120; // cf
  float v121; // xmm9_4
  float v122; // xmm10_4
  float v123; // xmm4_4
  float v124; // xmm5_4
  float v125; // xmm7_4
  float v126; // xmm3_4
  float v127; // xmm1_4
  float v128; // xmm3_4
  float v129; // xmm2_4
  float v130; // xmm5_4
  float sr_sphere_1543c0_vector_142[3];
  float sr_sphere_1543c0_vector_145[3];
  float sr_sphere_1543c0_vector_148[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401543C0[464];
#define v132 (*(float (*))(void *)(sr_frame_1401543C0 + 8)) /* [rsp+48h] */
#define v133 (*(float (*))(void *)(sr_frame_1401543C0 + 16)) /* [rsp+50h] */
#define v134 (*(float (*))(void *)(sr_frame_1401543C0 + 20)) /* [rsp+54h] */
#define v135 (*(float (*))(void *)(sr_frame_1401543C0 + 24)) /* [rsp+58h] */
#define v136 (*(float (*))(void *)(sr_frame_1401543C0 + 28)) /* [rsp+5Ch] */
#define v137 (*(float (*))(void *)(sr_frame_1401543C0 + 32)) /* [rsp+60h] */
#define v138 (*(float (*))(void *)(sr_frame_1401543C0 + 36)) /* [rsp+64h] */
#define v139 (*(float (*))(void *)(sr_frame_1401543C0 + 40)) /* [rsp+68h] */
#define v140 (*(float (*))(void *)(sr_frame_1401543C0 + 44)) /* [rsp+6Ch] */
#define v141 (*(float (*))(void *)(sr_frame_1401543C0 + 48)) /* [rsp+70h] */
#define v151 (*(float (*))(void *)(sr_frame_1401543C0 + 104)) /* [rsp+A8h] */
#define v152 (*(float (*))(void *)(sr_frame_1401543C0 + 108)) /* [rsp+ACh] */
#define v153 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 112)) /* [rsp+B0h] */
#define v154 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 128)) /* [rsp+C0h] */
#define v155 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 144)) /* [rsp+D0h] */
#define v156 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 160)) /* [rsp+E0h] */
#define v157 (*(float (*)[4])(void *)(sr_frame_1401543C0 + 176)) /* [rsp+F0h] */
#define v158 (*(__int128 (*))(void *)(sr_frame_1401543C0 + 192)) /* [rsp+100h] */
#define v159 (*(float (*))(void *)(sr_frame_1401543C0 + 424)) /* [rsp+1E8h] */
#define v160 (*(float (*))(void *)(sr_frame_1401543C0 + 448)) /* [rsp+200h] */

  static const unsigned sr_static_voxel_vertices[24] = {0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u,0x3f800000u,0x00000000u,0x3f800000u,0x3f800000u};
  static const unsigned sr_static_voxel_normals[18] = {0x00000000u,0xbf800000u,0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0xbf800000u,0x00000000u,0x00000000u,0x00000000u,0x00000000u,0xbf800000u,0x3f800000u,0x00000000u,0x00000000u,0x00000000u,0x3f800000u,0x00000000u};
  static const unsigned sr_static_voxel_faces[24] = {0x00000003u,0x00000002u,0x00000001u,0x00000000u,0x00000007u,0x00000006u,0x00000002u,0x00000003u,0x00000004u,0x00000007u,0x00000003u,0x00000000u,0x00000005u,0x00000004u,0x00000000u,0x00000001u,0x00000006u,0x00000005u,0x00000001u,0x00000002u,0x00000004u,0x00000005u,0x00000006u,0x00000007u};
  v8 = (sr_static_voxel_faces+1);
  v9 = a8;
  v10 = (float *)(sr_static_voxel_normals+2);
  v13 = a5;
  v15 = a7;
  v17 = 0;
  *a3 = 65536.0;
  v18 = (float)*a6;
  v19 = (float)a6[1];
  v20 = (float)a6[2];
  v160 = v18;
  v159 = v19;
  v132 = v20;
  do
  {
    if ( ((((64 << v17) & v15) != 0) & _bittest(&v15, v17)) == 0 )
      goto LABEL_63;
    v21 = *a4;
    v22 = a4[1];
    v23 = *(v10 - 2);
    v24 = *(v10 - 1);
    v25 = *v10;
    v26 = a4[2];
    v27 = (float)(v18 + *(float *)&sr_static_voxel_vertices[3 * *(v8 - 1)]) * v9;
    v28 = 3LL * *v8;
    v29 = v8[1];
    v30 = (float)(v19 + *(float *)&sr_static_voxel_vertices[3 * *(v8 - 1) + 1]) * v9;
    v31 = v18 + *(float *)&sr_static_voxel_vertices[3 * *v8];
    v32 = (float)(v20 + *(float *)&sr_static_voxel_vertices[3 * *(v8 - 1) + 2]) * v9;
    v154[0] = v27;
    v154[1] = v30;
    v152 = v32;
    v154[2] = v32;
    v135 = v31 * v9;
    v156[0] = v31 * v9;
    v33 = v19 + *(float *)&sr_static_voxel_vertices[v28 + 1];
    v155[0] = v23;
    v155[1] = v24;
    v155[2] = v25;
    v136 = v33 * v9;
    v156[1] = v33 * v9;
    v34 = v20 + *(float *)&sr_static_voxel_vertices[v28 + 2];
    v35 = 3 * v29;
    v36 = v8[2];
    v133 = v34 * v9;
    v156[2] = v34 * v9;
    v137 = (float)(v18 + *(float *)&sr_static_voxel_vertices[v35]) * v9;
    v153[0] = v137;
    v138 = (float)(v19 + *(float *)&sr_static_voxel_vertices[v35 + 1]) * v9;
    v153[1] = v138;
    v134 = (float)(v20 + *(float *)&sr_static_voxel_vertices[v35 + 2]) * v9;
    v153[2] = v134;
    v139 = (float)(v18 + *(float *)&sr_static_voxel_vertices[3 * v36]) * v9;
    v157[0] = v139;
    v37 = v19 + *(float *)&sr_static_voxel_vertices[3 * v36 + 1];
    sr_sphere_1543c0_vector_142[0] = v21 - v27;
    v140 = v37 * v9;
    v157[1] = v37 * v9;
    v38 = v20 + *(float *)&sr_static_voxel_vertices[3 * v36 + 2];
    sr_sphere_1543c0_vector_142[1] = v22 - v30;
    v141 = v38 * v9;
    v157[2] = v38 * v9;
    v39 = v26 - v32;
    sr_sphere_1543c0_vector_142[2] = v39;
    v40 = (float)((float)((float)(v21 - v27) * v23) + (float)((float)(v22 - v30) * v24)) + (float)(v39 * v25);
    if ( v40 > 0.0 )
    {
      sr_sphere_1543c0_vector_145[0] = v21 - v27;
      sr_sphere_1543c0_vector_145[1] = v22 - v30;
      sr_sphere_1543c0_vector_145[2] = v39;
      if ( v40 <= v13 )
      {
        v41 = (float)((float)-v13 * v25) + a4[2];
        sr_sphere_1543c0_vector_145[0] = (float)((float)-v13 * v23) + v21;
        sr_sphere_1543c0_vector_145[1] = (float)((float)-v13 * v24) + v22;
        sr_sphere_1543c0_vector_145[2] = v41;
        if ( sub_140077FA0(&sr_sphere_1543c0_vector_142[0], v155, (float *)&v158, a4, &sr_sphere_1543c0_vector_145[0], v154, v156, v153) )
        {
          v42 = sr_sphere_1543c0_vector_142[1];
          v43 = sr_sphere_1543c0_vector_142[2];
          v44 = fsqrt(
                  (float)((float)((float)(sr_sphere_1543c0_vector_142[1] - a4[1]) * (float)(sr_sphere_1543c0_vector_142[1] - a4[1]))
                        + (float)((float)(sr_sphere_1543c0_vector_142[0] - *a4) * (float)(sr_sphere_1543c0_vector_142[0] - *a4)))
                + (float)((float)(sr_sphere_1543c0_vector_142[2] - a4[2]) * (float)(sr_sphere_1543c0_vector_142[2] - a4[2])));
          if ( v44 < *a3 )
          {
            *a1 = sr_sphere_1543c0_vector_142[0];
            a1[1] = v42;
            a1[2] = v43;
            *a2 = v23;
            a2[1] = v24;
            a2[2] = v25;
            *a3 = v44;
          }
        }
      }
      v45 = *a4;
      v46 = a4[1];
      v47 = a4[2];
      v48 = v23 * (float)(*a4 - v27);
      sr_sphere_1543c0_vector_148[0] = *a4 - v27;
      sr_sphere_1543c0_vector_148[2] = v47 - v32;
      sr_sphere_1543c0_vector_148[1] = v46 - v30;
      v49 = (float)(v48 + (float)(v24 * (float)(v46 - v30))) + (float)((float)(v47 - v32) * v25);
      if ( v49 <= v13 && v49 >= 0.0 )
      {
        sr_sphere_1543c0_vector_148[0] = (float)(v23 * (float)-v13) + v45;
        sr_sphere_1543c0_vector_148[1] = (float)(v24 * (float)-v13) + v46;
        sr_sphere_1543c0_vector_148[2] = (float)(v25 * (float)-v13) + v47;
        if ( sub_140077FA0(&sr_sphere_1543c0_vector_142[0], v155, (float *)&v158 + 1, a4, &sr_sphere_1543c0_vector_148[0], v154, v153, v157) )
        {
          v50 = sr_sphere_1543c0_vector_142[1];
          v51 = sr_sphere_1543c0_vector_142[2];
          v52 = fsqrt(
                  (float)((float)((float)(sr_sphere_1543c0_vector_142[1] - a4[1]) * (float)(sr_sphere_1543c0_vector_142[1] - a4[1]))
                        + (float)((float)(sr_sphere_1543c0_vector_142[0] - *a4) * (float)(sr_sphere_1543c0_vector_142[0] - *a4)))
                + (float)((float)(sr_sphere_1543c0_vector_142[2] - a4[2]) * (float)(sr_sphere_1543c0_vector_142[2] - a4[2])));
          if ( v52 < *a3 )
          {
            *a1 = sr_sphere_1543c0_vector_142[0];
            a1[1] = v50;
            a1[2] = v51;
            *a2 = v23;
            a2[1] = v24;
            a2[2] = v25;
            *a3 = v52;
          }
        }
      }
      v53 = v135 - v27;
      v54 = v136 - v30;
      v55 = a4[1];
      v56 = v133 - v32;
      v57 = a4[2];
      v58 = *a4;
      v59 = *a4 - v27;
      v60 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v56 * v56));
      v151 = v55 - v30;
      if ( v60 == 0.0 )
      {
        v61 = 0.0;
        v62 = 0.0;
        v63 = 0.0;
      }
      else
      {
        v61 = (float)(1.0 / v60) * v53;
        v62 = (float)(1.0 / v60) * v54;
        v63 = (float)(1.0 / v60) * v56;
      }
      v64 = (float)((float)(v62 * v151) + (float)(v61 * v59)) + (float)(v63 * (float)(v57 - v32));
      if ( v64 <= 0.0
        || v64 >= v60
        || (v65 = (float)(v61 * v64) + v27,
            v66 = (float)(v62 * v64) + v30,
            v67 = (float)(v63 * v64) + v32,
            v68 = v58 - v65,
            v69 = v55 - v66,
            v70 = v57 - v67,
            v71 = fsqrt((float)((float)(v69 * v69) + (float)(v68 * v68)) + (float)(v70 * v70)),
            v71 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v71 == 0.0 )
        {
          v72 = 0.0;
          v73 = 0.0;
          v74 = 0.0;
        }
        else
        {
          v72 = (float)(1.0 / v71) * v68;
          v73 = (float)(1.0 / v71) * v69;
          v74 = (float)(1.0 / v71) * v70;
        }
        v75 = *a3;
        if ( *a3 > v71 )
        {
          *a1 = v65;
          v75 = v71;
          a1[1] = v66;
          a1[2] = v67;
          *a2 = v72;
          a2[1] = v73;
          a2[2] = v74;
          *a3 = v71;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v76 = v137 - v135;
      v77 = v138 - v136;
      v78 = v134 - v133;
      v79 = fsqrt((float)((float)(v77 * v77) + (float)(v76 * v76)) + (float)(v78 * v78));
      if ( v79 == 0.0 )
      {
        v80 = 0.0;
        v81 = 0.0;
        v82 = 0.0;
      }
      else
      {
        v80 = (float)(1.0 / v79) * v76;
        v81 = (float)(1.0 / v79) * v77;
        v82 = (float)(1.0 / v79) * v78;
      }
      v83 = (float)((float)(v80 * (float)(v58 - v135)) + (float)((float)(v55 - v136) * v81))
          + (float)((float)(v57 - v133) * v82);
      if ( v83 <= 0.0
        || v83 >= v79
        || (v84 = (float)(v83 * v81) + v136,
            v85 = (float)(v80 * v83) + v135,
            v86 = (float)(v83 * v82) + v133,
            v87 = v55 - v84,
            v88 = v58 - v85,
            v89 = v57 - v86,
            v90 = fsqrt((float)((float)(v87 * v87) + (float)(v88 * v88)) + (float)(v89 * v89)),
            v90 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v90 == 0.0 )
        {
          v91 = 0.0;
          v92 = 0.0;
          v93 = 0.0;
        }
        else
        {
          v91 = (float)(1.0 / v90) * v88;
          v92 = (float)(1.0 / v90) * v87;
          v93 = (float)(1.0 / v90) * v89;
        }
        if ( v75 > v90 )
        {
          *a1 = v85;
          v75 = v90;
          a1[1] = v84;
          a1[2] = v86;
          *a2 = v91;
          a2[1] = v92;
          a2[2] = v93;
          *a3 = v90;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v94 = v139 - v137;
      v95 = v140 - v138;
      v96 = v141 - v134;
      v97 = fsqrt((float)((float)(v95 * v95) + (float)(v94 * v94)) + (float)(v96 * v96));
      if ( v97 == 0.0 )
      {
        v98 = 0.0;
        v99 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = (float)(1.0 / v97) * v94;
        v99 = (float)(1.0 / v97) * v95;
        v100 = (float)(1.0 / v97) * v96;
      }
      v101 = (float)((float)((float)(v55 - v138) * v99) + (float)(v98 * (float)(v58 - v137)))
           + (float)((float)(v57 - v134) * v100);
      if ( v101 <= 0.0
        || v101 >= v97
        || (v102 = (float)(v101 * v99) + v138,
            v103 = (float)(v98 * v101) + v137,
            v104 = (float)(v101 * v100) + v134,
            v105 = v55 - v102,
            v106 = v58 - v103,
            v107 = v57 - v104,
            v108 = fsqrt((float)((float)(v105 * v105) + (float)(v106 * v106)) + (float)(v107 * v107)),
            v108 >= a5) )
      {
        v75 = *a3;
      }
      else
      {
        if ( v108 == 0.0 )
        {
          v109 = 0.0;
          v110 = 0.0;
          v111 = 0.0;
        }
        else
        {
          v109 = (float)(1.0 / v108) * v106;
          v110 = (float)(1.0 / v108) * v105;
          v111 = (float)(1.0 / v108) * v107;
        }
        if ( v75 > v108 )
        {
          *a1 = v103;
          v75 = v108;
          a1[1] = v102;
          a1[2] = v104;
          *a2 = v109;
          a2[1] = v110;
          a2[2] = v111;
          *a3 = v108;
          v58 = *a4;
          v55 = a4[1];
          v57 = a4[2];
        }
      }
      v112 = v27 - v139;
      v113 = v30 - v140;
      v114 = v152 - v141;
      v115 = fsqrt((float)((float)(v113 * v113) + (float)(v112 * v112)) + (float)(v114 * v114));
      if ( v115 == 0.0 )
      {
        v116 = 0.0;
        v117 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v116 = (float)(1.0 / v115) * v112;
        v117 = (float)(1.0 / v115) * v113;
        v118 = (float)(1.0 / v115) * v114;
      }
      v119 = (float)((float)((float)(v55 - v140) * v117) + (float)((float)(v58 - v139) * v116))
           + (float)((float)(v57 - v141) * v118);
      if ( v119 <= 0.0 )
      {
        v13 = a5;
      }
      else
      {
        v120 = v119 < v115;
        v13 = a5;
        if ( v120 )
        {
          v121 = (float)(v119 * v116) + v139;
          v122 = (float)(v119 * v117) + v140;
          v123 = (float)(v119 * v118) + v141;
          v124 = v58 - v121;
          v125 = v55 - v122;
          v126 = v57 - v123;
          v127 = fsqrt((float)((float)(v125 * v125) + (float)(v124 * v124)) + (float)(v126 * v126));
          if ( v127 < a5 )
          {
            if ( v127 == 0.0 )
            {
              v129 = 0.0;
              v130 = 0.0;
              v128 = 0.0;
            }
            else
            {
              v128 = v126 * (float)(1.0 / v127);
              v129 = (float)(1.0 / v127) * v124;
              v130 = (float)(1.0 / v127) * v125;
            }
            v15 = a7;
            if ( v75 > v127 )
            {
              *a1 = v121;
              a1[1] = v122;
              a1[2] = v123;
              *a2 = v129;
              a2[1] = v130;
              a2[2] = v128;
              *a3 = v127;
            }
            goto LABEL_62;
          }
        }
      }
      v15 = a7;
    }
LABEL_62:
    v20 = v132;
    v19 = v159;
    v18 = v160;
    v9 = a8;
LABEL_63:
    ++v17;
    v8 += 4;
    v10 += 3;
  }
  while ( v17 < 6 );
  return *a3 < 65536.0;
}
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
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


//----- (00000001401564A0) ----------------------------------------------------
_BOOL8            sub_1401564A0(float *a1, float *a2, float *a3, float *a4, float a5, __int64 a6, float a7, float a8)
{
  unsigned __int16 v8; // r10
  float v10; // xmm4_4
  float v12; // r9d
  float v15; // xmm10_4
  signed int v16; // r15d
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
  signed int v148; // r13d
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
  float sr_sphere_1564a0_vector_323[3];
  float sr_sphere_1564a0_vector_327[3];
  _Alignas(8) unsigned sr_sphere_mesh_offset[3];
  float sr_sphere_1564a0_vector_345[3];
  float sr_sphere_1564a0_vector_348[3];
  float sr_sphere_1564a0_vector_352[3];
  float sr_sphere_1564a0_vector_355[3];
  float sr_sphere_1564a0_vector_358[3];
  float sr_sphere_1564a0_vector_363[3];
  float sr_sphere_1564a0_vector_366[3];
  float sr_sphere_1564a0_vector_369[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401564A0[528];
#define v326 (*(float (*))(void *)(sr_frame_1401564A0 + 0)) /* [rsp+58h] */
#define v330 (*(float (*))(void *)(sr_frame_1401564A0 + 24)) /* [rsp+70h] */
#define v331 (*(float (*))(void *)(sr_frame_1401564A0 + 28)) /* [rsp+74h] */
#define v332 (*(float (*))(void *)(sr_frame_1401564A0 + 32)) /* [rsp+78h] */
#define v333 (*(float (*))(void *)(sr_frame_1401564A0 + 36)) /* [rsp+7Ch] */
#define v334 (*(float (*))(void *)(sr_frame_1401564A0 + 40)) /* [rsp+80h] */
#define v335 (*(float (*))(void *)(sr_frame_1401564A0 + 44)) /* [rsp+84h] */
#define v336 (*(float (*))(void *)(sr_frame_1401564A0 + 48)) /* [rsp+88h] */
#define v337 (*(float (*))(void *)(sr_frame_1401564A0 + 52)) /* [rsp+8Ch] */
#define v338 (*(float (*))(void *)(sr_frame_1401564A0 + 56)) /* [rsp+90h] */
#define v339 (*(float (*))(void *)(sr_frame_1401564A0 + 60)) /* [rsp+94h] */
#define v340 (*(float (*))(void *)(sr_frame_1401564A0 + 64)) /* [rsp+98h] */
#define v341 (*(float (*))(void *)(sr_frame_1401564A0 + 68)) /* [rsp+9Ch] */
#define v342 (*(float (*))(void *)(sr_frame_1401564A0 + 72)) /* [rsp+A0h] */
#define v351 (*(float (*))(void *)(sr_frame_1401564A0 + 128)) /* [rsp+D8h] */
#define v361 (*(int (*))(void *)(sr_frame_1401564A0 + 184)) /* [rsp+110h] */
#define v362 (*(__int64 (*))(void *)(sr_frame_1401564A0 + 192)) /* [rsp+118h] */
#define v372 (*(float (*))(void *)(sr_frame_1401564A0 + 248)) /* [rsp+150h] */
#define v373 (*(float (*))(void *)(sr_frame_1401564A0 + 252)) /* [rsp+154h] */
#define v374 (*(float (*))(void *)(sr_frame_1401564A0 + 256)) /* [rsp+158h] */
#define v375 (*(float (*)[43])(void *)(sr_frame_1401564A0 + 260)) /* [rsp+15Ch] */
#define v376 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v377 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v378 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v379 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v380 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v381 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v382 (*(float (*))(void *)(sr_frame_1401564A0 + 496)) /* [rsp+248h] */
#define v383 (*(float (*))(void *)(sr_frame_1401564A0 + 520)) /* [rsp+260h] */

  v8 = LOWORD(a7);
  v10 = a8;
  v12 = a7;
  v15 = a5;
  *a3 = 65536.0;
  v16 = 0;
  v17 = HIWORD(LODWORD(v12));
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  v19 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  v20 = 58LL * v8;
  v21 = (float)*(int *)a6;
  v361 = v17;
  v22 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v18), f32)[0];
  v362 = v20 * 4;
  v23 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v19), f32)[0];
  v351 = v21;
  v341 = v22;
  v383 = v23;
  if ( (int)dword_140404A6C[v20 + 20074623] > 0 )
  {
    v24 = 0;
    do
    {
      v25 = *(_QWORD *)&dword_140404A6C[v20 + 20074615];
      v26 = *(_QWORD *)&dword_140404A6C[v20 + 20074631];
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
      sr_sphere_1564a0_vector_348[0] = v29;
      v36 = 3 * (int)v31;
      v37 = v34 * v10;
      v335 = v35 * v10;
      v38 = v21 + *(float *)(v25 + 4 * v36);
      v39 = v22 + *(float *)(v25 + 4 * v36 + 4);
      v40 = v23 + *(float *)(v25 + 4 * v36 + 8);
      LODWORD(v36) = *(_DWORD *)(v24 + v26 + 12);
      sr_sphere_1564a0_vector_352[2] = v35 * v10;
      v41 = v37 - v32;
      v42 = 3 * (int)v36;
      v331 = v32;
      v43 = v21 + *(float *)(v25 + 4 * v42);
      sr_sphere_1564a0_vector_348[1] = v32;
      v326 = v30;
      sr_sphere_1564a0_vector_348[2] = v30;
      v339 = v33 * v10;
      sr_sphere_1564a0_vector_352[0] = v33 * v10;
      v336 = v37;
      v337 = v43 * v10;
      sr_sphere_1564a0_vector_355[0] = v43 * v10;
      v44 = v341 + *(float *)(v25 + 4 * v42 + 4);
      sr_sphere_1564a0_vector_352[1] = v37;
      v334 = v38 * v10;
      sr_sphere_1564a0_vector_345[0] = v38 * v10;
      v333 = v39 * v10;
      sr_sphere_1564a0_vector_345[1] = v39 * v10;
      v376 = v40 * v10;
      v338 = v44 * v10;
      sr_sphere_1564a0_vector_355[1] = v44 * v10;
      v45 = v383 + *(float *)(v25 + 4 * v42 + 8);
      sr_sphere_1564a0_vector_345[2] = v40 * v10;
      v340 = (float)(v35 * v10) - v30;
      v332 = v45 * v10;
      sr_sphere_1564a0_vector_355[2] = v45 * v10;
      v330 = (float)(v33 * v10) - v29;
      v46 = (float)(v39 * v10) - v32;
      v47 = (float)(v40 * v10) - v30;
      v48 = (float)(v46 * v340) - (float)(v47 * v41);
      v49 = (float)(v47 * v330) - (float)((float)((float)(v38 * v10) - v29) * v340);
      v50 = (float)((float)((float)(v38 * v10) - v29) * v41) - (float)(v46 * v330);
      v51 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
      if ( v51 == 0.0 )
      {
        sr_sphere_1564a0_vector_327[0] = 0.0;
        v52 = 0.0;
        sr_sphere_1564a0_vector_327[1] = 0.0;
        v53 = 0.0;
        sr_sphere_1564a0_vector_327[2] = 0.0;
        v54 = 0.0;
      }
      else
      {
        v52 = v48 * (float)(1.0 / v51);
        v53 = v49 * (float)(1.0 / v51);
        v54 = v50 * (float)(1.0 / v51);
        sr_sphere_1564a0_vector_327[0] = v52;
        sr_sphere_1564a0_vector_327[1] = v53;
        sr_sphere_1564a0_vector_327[2] = v54;
      }
      v55 = *a4 - v29;
      v56 = a4[1] - v32;
      v57 = a4[2] - v30;
      sr_sphere_1564a0_vector_323[0] = v55;
      sr_sphere_1564a0_vector_323[1] = v56;
      sr_sphere_1564a0_vector_323[2] = v57;
      if ( (float)((float)((float)(v56 * v53) + (float)(v55 * v52)) + (float)(v57 * v54)) > 0.0 )
      {
        (*(uint64_t *)(void *)sr_sphere_mesh_offset) = __PAIR64__(LODWORD(v56), LODWORD(v55));
        (*(float *)(void *)(sr_sphere_mesh_offset+2)) = v57;
        v58 = (float)((float)(v56 * v53) + (float)(v55 * v52)) + (float)(v57 * v54);
        if ( v58 <= a5 && v58 >= 0.0 )
        {
          v59 = (float)(v53 * (float)-a5) + a4[1];
          *(float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset) = (float)(v52 * (float)-a5) + *a4;
          *((float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset) + 1) = v59;
          (*(float *)(void *)(sr_sphere_mesh_offset+2)) = (float)(v54 * (float)-a5) + a4[2];
          if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &v372, a4, (float *)&(*(uint64_t *)(void *)sr_sphere_mesh_offset), &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
          {
            v60 = sr_sphere_1564a0_vector_323[1];
            v61 = sr_sphere_1564a0_vector_323[2];
            v62 = fsqrt(
                    (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                          + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                  + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
            v63 = v62 < *a3;
            a7 = v62;
            if ( v63 )
            {
              *a1 = sr_sphere_1564a0_vector_323[0];
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
        sr_sphere_1564a0_vector_358[1] = v64 - v32;
        sr_sphere_1564a0_vector_358[0] = v67;
        sr_sphere_1564a0_vector_358[2] = v66;
        v68 = (float)((float)(v53 * (float)(v64 - v32)) + (float)(v52 * v67)) + (float)(v54 * v66);
        if ( v68 <= a5 && v68 >= 0.0 )
        {
          sr_sphere_1564a0_vector_358[0] = (float)(v52 * (float)-a5) + v65;
          sr_sphere_1564a0_vector_358[1] = (float)(v53 * (float)-a5) + v64;
          sr_sphere_1564a0_vector_358[2] = (float)(v54 * (float)-a5) + a4[2];
          if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &v373, a4, &sr_sphere_1564a0_vector_358[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
          {
            v69 = sr_sphere_1564a0_vector_323[1];
            v70 = sr_sphere_1564a0_vector_323[2];
            v71 = fsqrt(
                    (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                          + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                  + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
            v63 = v71 < *a3;
            a7 = v71;
            if ( v63 )
            {
              *a1 = sr_sphere_1564a0_vector_323[0];
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
    while ( v16 < (int)dword_140404A6C[v20 + 20074623] );
    LOWORD(v17) = v361;
  }
  v147 = v362;
  v148 = 0;
  if ( *(int *)((char *)&dword_140404A6C[20074651] + v362) > 0 )
  {
    v149 = 0;
    (*(uint64_t *)(void *)sr_sphere_mesh_offset) = 0;
    v150 = 1;
    do
    {
      if ( ((unsigned __int16)v150 & (unsigned __int16)v17 & 0x3FF) == 0 )
      {
        v151 = 6 * v149;
        v152 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v147);
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
        sr_sphere_1564a0_vector_355[0] = v337;
        v164 = v157 * v10;
        v339 = (float)(v22 + *(float *)(v152 + 48 * v149 + 40)) * v10;
        sr_sphere_1564a0_vector_355[1] = v339;
        v165 = v161 * v10;
        v166 = v160 * v10;
        v167 = (float)(v383 + *(float *)(v152 + 48 * v149 + 44)) * v10;
        v168 = v163 * v10;
        v169 = v159 * v10;
        v332 = v162;
        sr_sphere_1564a0_vector_352[1] = v162;
        v335 = v155 * v10;
        sr_sphere_1564a0_vector_345[2] = v155 * v10;
        v338 = v156 * v10;
        sr_sphere_1564a0_vector_345[0] = v156 * v10;
        v340 = v167;
        sr_sphere_1564a0_vector_355[2] = v167;
        v333 = v158 * v10;
        sr_sphere_1564a0_vector_352[2] = v158 * v10;
        v170 = (float)(v158 * v10) - v166;
        sr_sphere_1564a0_vector_348[0] = v168;
        sr_sphere_1564a0_vector_348[1] = v165;
        sr_sphere_1564a0_vector_348[2] = v166;
        v171 = (float)((float)(v164 - v165) * v170)
             - (float)((float)((float)(v155 * v10) - v166) * (float)(v162 - v165));
        v336 = v169;
        sr_sphere_1564a0_vector_352[0] = v169;
        v334 = v164;
        sr_sphere_1564a0_vector_345[1] = v164;
        v172 = (float)((float)((float)(v155 * v10) - v166) * (float)(v169 - v168))
             - (float)((float)((float)(v156 * v10) - v168) * v170);
        v173 = (float)((float)((float)(v156 * v10) - v168) * (float)(v162 - v165))
             - (float)((float)(v164 - v165) * (float)(v169 - v168));
        v174 = fsqrt((float)((float)(v172 * v172) + (float)(v171 * v171)) + (float)(v173 * v173));
        if ( v174 == 0.0 )
        {
          sr_sphere_1564a0_vector_327[0] = 0.0;
          v175 = 0.0;
          sr_sphere_1564a0_vector_327[1] = 0.0;
          v176 = 0.0;
          sr_sphere_1564a0_vector_327[2] = 0.0;
          v177 = 0.0;
        }
        else
        {
          v175 = v171 * (float)(1.0 / v174);
          v176 = v172 * (float)(1.0 / v174);
          v177 = v173 * (float)(1.0 / v174);
          sr_sphere_1564a0_vector_327[0] = v175;
          sr_sphere_1564a0_vector_327[1] = v176;
          sr_sphere_1564a0_vector_327[2] = v177;
        }
        v178 = *a4 - v168;
        v179 = a4[1] - v165;
        v180 = a4[2] - v166;
        sr_sphere_1564a0_vector_323[0] = v178;
        sr_sphere_1564a0_vector_323[1] = v179;
        sr_sphere_1564a0_vector_323[2] = v180;
        if ( (float)((float)((float)(v179 * v176) + (float)(v178 * v175)) + (float)(v180 * v177)) > 0.0 )
        {
          sr_sphere_1564a0_vector_358[1] = v179;
          sr_sphere_1564a0_vector_358[0] = v178;
          sr_sphere_1564a0_vector_358[2] = v180;
          v181 = (float)((float)(v179 * v176) + (float)(v178 * v175)) + (float)(v180 * v177);
          if ( v181 <= v15 && v181 >= 0.0 )
          {
            v182 = (float)((float)-v15 * v176) + a4[1];
            v183 = (float)((float)-v15 * v177) + a4[2];
            sr_sphere_1564a0_vector_358[0] = (float)((float)-v15 * v175) + *a4;
            sr_sphere_1564a0_vector_358[1] = v182;
            sr_sphere_1564a0_vector_358[2] = v183;
            if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &v373, a4, &sr_sphere_1564a0_vector_358[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
            {
              v184 = sr_sphere_1564a0_vector_323[1];
              v185 = sr_sphere_1564a0_vector_323[2];
              v186 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              v63 = v186 < *a3;
              a7 = v186;
              if ( v63 )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
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
          sr_sphere_1564a0_vector_363[0] = *a4 - v168;
          sr_sphere_1564a0_vector_363[1] = v188 - v165;
          sr_sphere_1564a0_vector_363[2] = v189 - v166;
          v190 = (float)((float)((float)(v188 - v165) * v176) + (float)(sr_sphere_1564a0_vector_363[0] * v175))
               + (float)((float)(v189 - v166) * v177);
          if ( v190 <= v15 && v190 >= 0.0 )
          {
            sr_sphere_1564a0_vector_363[0] = (float)((float)-v15 * v175) + v187;
            sr_sphere_1564a0_vector_363[1] = (float)((float)-v15 * v176) + v188;
            sr_sphere_1564a0_vector_363[2] = (float)((float)-v15 * v177) + v189;
            if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &v372, a4, &sr_sphere_1564a0_vector_363[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
            {
              v191 = sr_sphere_1564a0_vector_323[1];
              v192 = sr_sphere_1564a0_vector_323[2];
              v193 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              v63 = v193 < *a3;
              a7 = v193;
              if ( v63 )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
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
            v149 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
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
            v149 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
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
        v256 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v362);
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
        sr_sphere_1564a0_vector_355[0] = (float)(v351 + *(float *)(v256 + 8 * v151)) * a8;
        v267 = (float)(v383 + *(float *)(v256 + 8 * v151 + 8)) * a8;
        v268 = v263 * a8;
        v269 = v264 * a8;
        sr_sphere_1564a0_vector_345[1] = v266;
        v270 = v266 - v268;
        v271 = v265 * a8;
        sr_sphere_1564a0_vector_355[2] = v267;
        sr_sphere_1564a0_vector_345[2] = v257 * a8;
        v272 = (float)(v257 * a8) - v269;
        sr_sphere_1564a0_vector_352[2] = v259 * a8;
        v273 = (float)(v259 * a8) - v269;
        sr_sphere_1564a0_vector_345[0] = v258 * a8;
        v274 = (float)(v258 * a8) - v271;
        sr_sphere_1564a0_vector_355[1] = v260 * a8;
        sr_sphere_1564a0_vector_352[1] = v261 * a8;
        v275 = (float)(v261 * a8) - v268;
        sr_sphere_1564a0_vector_352[0] = v262 * a8;
        v276 = (float)(v262 * a8) - v271;
        sr_sphere_1564a0_vector_348[0] = v271;
        v277 = (float)(v270 * v273) - (float)(v272 * v275);
        sr_sphere_1564a0_vector_348[1] = v268;
        v278 = (float)(v272 * v276) - (float)(v274 * v273);
        sr_sphere_1564a0_vector_348[2] = v269;
        v279 = (float)(v274 * v275) - (float)(v270 * v276);
        v280 = fsqrt((float)((float)(v278 * v278) + (float)(v277 * v277)) + (float)(v279 * v279));
        if ( v280 == 0.0 )
        {
          sr_sphere_1564a0_vector_327[0] = 0.0;
          v281 = 0.0;
          sr_sphere_1564a0_vector_327[1] = 0.0;
          v282 = 0.0;
          sr_sphere_1564a0_vector_327[2] = 0.0;
          v283 = 0.0;
        }
        else
        {
          v281 = v277 * (float)(1.0 / v280);
          v282 = v278 * (float)(1.0 / v280);
          v283 = v279 * (float)(1.0 / v280);
          sr_sphere_1564a0_vector_327[0] = v281;
          sr_sphere_1564a0_vector_327[1] = v282;
          sr_sphere_1564a0_vector_327[2] = v283;
        }
        v284 = a4[1] - v268;
        v285 = *a4;
        v286 = a4[2] - v269;
        v287 = *a4 - v271;
        sr_sphere_1564a0_vector_323[1] = v284;
        sr_sphere_1564a0_vector_323[0] = v287;
        sr_sphere_1564a0_vector_323[2] = v286;
        if ( (float)((float)((float)(v284 * v282) + (float)(v287 * v281)) + (float)(v286 * v283)) > 0.0 )
        {
          sr_sphere_1564a0_vector_366[1] = v284;
          sr_sphere_1564a0_vector_366[0] = v287;
          sr_sphere_1564a0_vector_366[2] = v286;
          v288 = (float)((float)(v284 * v282) + (float)(v287 * v281)) + (float)(v286 * v283);
          if ( v288 <= v15 && v288 >= 0.0 )
          {
            v289 = (float)((float)-v15 * v282) + a4[1];
            v290 = (float)((float)-v15 * v283) + a4[2];
            sr_sphere_1564a0_vector_366[0] = (float)((float)-v15 * v281) + v285;
            sr_sphere_1564a0_vector_366[1] = v289;
            sr_sphere_1564a0_vector_366[2] = v290;
            if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &v374, a4, &sr_sphere_1564a0_vector_366[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
            {
              v291 = sr_sphere_1564a0_vector_323[1];
              v292 = sr_sphere_1564a0_vector_323[2];
              v293 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              v63 = v293 < *a3;
              a7 = v293;
              if ( v63 )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
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
          sr_sphere_1564a0_vector_369[0] = *a4 - v271;
          sr_sphere_1564a0_vector_369[1] = v295 - v268;
          sr_sphere_1564a0_vector_369[2] = v296 - v269;
          v297 = (float)((float)((float)(v295 - v268) * v282) + (float)(sr_sphere_1564a0_vector_369[0] * v281))
               + (float)((float)(v296 - v269) * v283);
          if ( v297 <= v15 && v297 >= 0.0 )
          {
            sr_sphere_1564a0_vector_369[0] = (float)((float)-v15 * v281) + v294;
            sr_sphere_1564a0_vector_369[1] = (float)((float)-v15 * v282) + v295;
            sr_sphere_1564a0_vector_369[2] = (float)((float)-v15 * v283) + v296;
            if ( sub_140077FA0(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], v375, a4, &sr_sphere_1564a0_vector_369[0], &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
            {
              v298 = sr_sphere_1564a0_vector_323[1];
              v299 = sr_sphere_1564a0_vector_323[2];
              v300 = fsqrt(
                       (float)((float)((float)(sr_sphere_1564a0_vector_323[1] - a4[1]) * (float)(sr_sphere_1564a0_vector_323[1] - a4[1]))
                             + (float)((float)(sr_sphere_1564a0_vector_323[0] - *a4) * (float)(sr_sphere_1564a0_vector_323[0] - *a4)))
                     + (float)((float)(sr_sphere_1564a0_vector_323[2] - a4[2]) * (float)(sr_sphere_1564a0_vector_323[2] - a4[2])));
              v63 = v300 < *a3;
              a7 = v300;
              if ( v63 )
              {
                *a1 = sr_sphere_1564a0_vector_323[0];
                a1[1] = v298;
                a1[2] = v299;
                *a2 = v281;
                a2[1] = v282;
                a2[2] = v283;
                *a3 = v300;
              }
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, v15, &sr_sphere_1564a0_vector_348[0], &sr_sphere_1564a0_vector_352[0]) )
          {
            v301 = a7;
            if ( a7 < *a3 )
            {
              v302 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              v303 = sr_sphere_1564a0_vector_323[2];
              a1[1] = v302;
              v304 = sr_sphere_1564a0_vector_327[0];
              a1[2] = v303;
              v305 = sr_sphere_1564a0_vector_327[1];
              *a2 = v304;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = v305;
              *a3 = v301;
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, v15, &sr_sphere_1564a0_vector_352[0], &sr_sphere_1564a0_vector_345[0]) )
          {
            v306 = a7;
            if ( a7 < *a3 )
            {
              v307 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              v308 = sr_sphere_1564a0_vector_323[2];
              a1[1] = v307;
              v309 = sr_sphere_1564a0_vector_327[0];
              a1[2] = v308;
              v310 = sr_sphere_1564a0_vector_327[1];
              *a2 = v309;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = v310;
              *a3 = v306;
            }
          }
          if ( (unsigned int)sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, v15, &sr_sphere_1564a0_vector_345[0], &sr_sphere_1564a0_vector_355[0]) )
          {
            v311 = a7;
            if ( a7 < *a3 )
            {
              v312 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              v313 = sr_sphere_1564a0_vector_323[2];
              a1[1] = v312;
              v314 = sr_sphere_1564a0_vector_327[0];
              a1[2] = v313;
              v315 = sr_sphere_1564a0_vector_327[1];
              *a2 = v314;
              a2[2] = sr_sphere_1564a0_vector_327[2];
              a2[1] = v315;
              *a3 = v311;
            }
          }
          v316 = sub_140154200(&sr_sphere_1564a0_vector_323[0], &sr_sphere_1564a0_vector_327[0], &a7, a4, v15, &sr_sphere_1564a0_vector_355[0], &sr_sphere_1564a0_vector_348[0]);
          v149 = (*(uint64_t *)(void *)sr_sphere_mesh_offset);
          if ( v316 )
          {
            v317 = a7;
            if ( a7 < *a3 )
            {
              v318 = sr_sphere_1564a0_vector_323[1];
              *a1 = sr_sphere_1564a0_vector_323[0];
              v319 = sr_sphere_1564a0_vector_323[2];
              a1[1] = v318;
              v320 = sr_sphere_1564a0_vector_327[0];
              a1[2] = v319;
              v321 = sr_sphere_1564a0_vector_327[1];
              *a2 = v320;
              a2[2] = sr_sphere_1564a0_vector_327[2];
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
      (*(uint64_t *)(void *)sr_sphere_mesh_offset) = v149;
    }
    while ( v148 < *(int *)((char *)&dword_140404A6C[20074651] + v362) );
  }
  return *a3 < 65536.0;
}
#undef v326
#undef v330
#undef v331
#undef v332
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
#undef v351
#undef v361
#undef v362
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

//----- (0000000140006F70) ----------------------------------------------------
__int64            sub_140006F70(int a1, float *a2, float *a3, float a4)
{
  __int64 v4; // rbx
  int v5; // r11d
  __int64 result; // rax
  int v8; // r10d
  int *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  __int64 v29; // rcx
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm7_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  __int64 v37; // rcx
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  __int64 v43; // r11
  unsigned int *v44; // r9
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm4_4
  __int64 v48; // rcx
  float v49; // xmm7_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm5_4

  v4 = a1;
  v5 = 0;
  result = 20840LL * a1;
  v8 = *(unsigned int *)((char *)&dword_140404A6C[129716768] + result);
  if ( v8 < 4 )
  {
    if ( v8 <= 0 )
      return result;
    v12 = 0;
    goto LABEL_8;
  }
  v9 = (int *)((char *)&dword_140404A6C[129716770] + result);
  v10 = ((unsigned int)(v8 - 4) >> 2) + 1;
  v11 = v10;
  v5 = 4 * v10;
  v12 = 4LL * v10;
  do
  {
    v13 = 60LL * *(v9 - 1);
    v14 = *v9;
    v15 = *(float *)&dword_140404A6C[v13 + 73007027] - a2[1];
    v16 = *(float *)&dword_140404A6C[v13 + 73007028] - a2[2];
    v17 = *(float *)&dword_140404A6C[v13 + 73007026] - *a2;
    v18 = (float)((float)(a3[1] * v17) - (float)(*a3 * v15)) * a4;
    v19 = (float)((float)(*a3 * v16) - (float)(a3[2] * v17)) * a4;
    *(float *)&dword_140404A6C[v13 + 73007032] = (float)((float)((float)(a3[2] * v15) - (float)(a3[1] * v16)) * a4)
                                               + *(float *)&dword_140404A6C[v13 + 73007032];
    *(float *)&dword_140404A6C[v13 + 73007033] = v19 + *(float *)&dword_140404A6C[v13 + 73007033];
    *(float *)&dword_140404A6C[v13 + 73007034] = v18 + *(float *)&dword_140404A6C[v13 + 73007034];
    v20 = 60 * v14;
    v21 = v9[1];
    v22 = *(float *)&dword_140404A6C[v20 + 73007027] - a2[1];
    v23 = *(float *)&dword_140404A6C[v20 + 73007028] - a2[2];
    v24 = *(float *)&dword_140404A6C[v20 + 73007026] - *a2;
    v25 = (float)((float)(a3[1] * v24) - (float)(*a3 * v22)) * a4;
    v26 = (float)((float)(*a3 * v23) - (float)(a3[2] * v24)) * a4;
    *(float *)&dword_140404A6C[v20 + 73007032] = (float)((float)((float)(a3[2] * v22) - (float)(a3[1] * v23)) * a4)
                                               + *(float *)&dword_140404A6C[v20 + 73007032];
    *(float *)&dword_140404A6C[v20 + 73007033] = v26 + *(float *)&dword_140404A6C[v20 + 73007033];
    *(float *)&dword_140404A6C[v20 + 73007034] = v25 + *(float *)&dword_140404A6C[v20 + 73007034];
    v27 = a3[2];
    v28 = *a3;
    v29 = 60 * v21;
    v30 = *(float *)&dword_140404A6C[60 * v21 + 73007027] - a2[1];
    v31 = *(float *)&dword_140404A6C[60 * v21 + 73007028] - a2[2];
    v32 = *(float *)&dword_140404A6C[60 * v21 + 73007026] - *a2;
    *(float *)&v33 = (float)((float)((float)(v27 * v30) - (float)(a3[1] * v31)) * a4)
                   + *(float *)&dword_140404A6C[60 * v21 + 73007032];
    result = v9[2];
    v34 = *a3 * v31;
    v9 += 4;
    v35 = a3[1] * v32;
    dword_140404A6C[v29 + 73007032] = v33;
    *(float *)&dword_140404A6C[v29 + 73007033] = (float)((float)(v34 - (float)(v27 * v32)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007033];
    *(float *)&dword_140404A6C[v29 + 73007034] = (float)((float)(v35 - (float)(v28 * v30)) * a4)
                                               + *(float *)&dword_140404A6C[v29 + 73007034];
    v36 = a3[1];
    v37 = 60 * result;
    v38 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
    v39 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
    v40 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
    v41 = a3[2] * v40;
    v42 = *a3;
    *(float *)&dword_140404A6C[v37 + 73007032] = (float)((float)((float)(a3[2] * v38) - (float)(v36 * v39)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007032];
    *(float *)&dword_140404A6C[v37 + 73007033] = (float)((float)((float)(v42 * v39) - v41) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007033];
    *(float *)&dword_140404A6C[v37 + 73007034] = (float)((float)((float)(v36 * v40) - (float)(v42 * v38)) * a4)
                                               + *(float *)&dword_140404A6C[60 * result + 73007034];
    --v11;
  }
  while ( v11 );
  if ( v5 < v8 )
  {
LABEL_8:
    v43 = (unsigned int)(v8 - v5);
    v44 = &dword_140404A6C[5210 * v4 + 129716769 + v12];
    do
    {
      v45 = a3[2];
      v46 = a3[1];
      v47 = *a3;
      result = (int)*v44++;
      v48 = 60 * result;
      v49 = *(float *)&dword_140404A6C[60 * result + 73007026] - *a2;
      v50 = *(float *)&dword_140404A6C[60 * result + 73007027] - a2[1];
      v51 = *(float *)&dword_140404A6C[60 * result + 73007028] - a2[2];
      v52 = v51 * *a3;
      *(float *)&dword_140404A6C[v48 + 73007032] = (float)((float)((float)(v50 * v45) - (float)(v51 * v46)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007032];
      *(float *)&dword_140404A6C[v48 + 73007033] = (float)((float)(v52 - (float)(v49 * v45)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007033];
      *(float *)&dword_140404A6C[v48 + 73007034] = (float)((float)((float)(v49 * v46) - (float)(v50 * v47)) * a4)
                                                 + *(float *)&dword_140404A6C[60 * result + 73007034];
      --v43;
    }
    while ( v43 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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

//----- (0000000140080070) ----------------------------------------------------
void            sub_140080070(int a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  signed int v4; // eax
  __int64 v5; // rdi
  unsigned int *v6; // rsi
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // r10
  unsigned int *v14; // rdx
  signed int v15; // ecx
  __int64 v16; // r9
  unsigned int *v17; // rax
  int v18; // eax
  __int64 v19; // r11
  unsigned int *v20; // r10
  __int64 v21; // r9
  signed int v22; // ecx
  unsigned int *v23; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rax

  if ( a1 >= 0 )
  {
    v2 = dword_140404A6C[73990061];
    if ( a1 < (int)dword_140404A6C[73990061] )
    {
      v3 = 60LL * a1;
      v4 = dword_140404A6C[v3 + 73007041] - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = &dword_140404A6C[60 * a1 + 73007042 + v4];
        do
        {
          sub_14007F370(*v6);
          --v5;
          --v6;
        }
        while ( v5 >= 0 );
      }
      v7 = v2 - 1;
      dword_140404A6C[73990061] = v2 - 1;
      if ( a1 != v2 - 1 )
      {
        v8 = &dword_140404A6C[v3 + 73007021];
        v9 = &dword_140404A6C[60 * v7 + 73007021];
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v8 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v8 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v8 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v8 + 6) = *((_OWORD *)v9 + 6);
        v10 = &dword_140404A6C[v3 + 73007053];
        v11 = *((_OWORD *)v9 + 7);
        v9 += 32;
        *((_OWORD *)v10 - 1) = v11;
        *(_OWORD *)v10 = *(_OWORD *)v9;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v9 + 6);
        v12 = dword_140404A6C[v3 + 73007041];
        if ( v12 > 0 )
        {
          v13 = (unsigned int)v12;
          v14 = &dword_140404A6C[v3 + 73007042];
          do
          {
            v15 = 0;
            v16 = 61LL * (int)*v14;
            if ( (int)dword_140404A6C[v16 + 486149258] > 0 )
            {
              v17 = &dword_140404A6C[v16 + 486149259];
              do
              {
                if ( *v17 == v7 )
                  *v17 = a1;
                ++v15;
                ++v17;
              }
              while ( v15 < (int)dword_140404A6C[v16 + 486149258] );
            }
            ++v14;
            --v13;
          }
          while ( v13 );
        }
        v18 = dword_140404A6C[v3 + 73007074];
        if ( v18 > 0 )
        {
          v19 = (unsigned int)v18;
          v20 = &dword_140404A6C[v3 + 73007075];
          do
          {
            v21 = (int)*v20;
            v22 = 0;
            v23 = &dword_140404A6C[5210 * v21 + 129716768];
            if ( (int)*v23 > 0 )
            {
              v24 = 5210 * v21;
              do
              {
                if ( dword_140404A6C[v24 + 129716769] == v7 )
                  dword_140404A6C[v24 + 129716769] = a1;
                ++v22;
                ++v24;
              }
              while ( v22 < (int)*v23 );
            }
            ++v20;
            --v19;
          }
          while ( v19 );
        }
        v25 = &dword_140404A6C[280651312];
        do
        {
          if ( *(v25 - 9) && *v25 == v7 )
            *v25 = a1;
          if ( v25[7157] && v25[7166] == v7 )
            v25[7166] = a1;
          if ( v25[14323] && v25[14332] == v7 )
            v25[14332] = a1;
          if ( v25[21489] )
          {
            if ( v25[21498] == v7 )
              v25[21498] = a1;
          }
          v25 += 28664;
        }
        while ( (__int64)v25 < (__int64)&dword_140404A6C[282485808] );
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;

//----- (00000001400A4B40) ----------------------------------------------------
__int64            sub_1400A4B40(__int64 a1, int a2, float *a3)
{
  signed int v3; // r10d
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int *v8; // r8
  float v9; // xmm9_4
  float v10; // xmm11_4
  __int64 v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm7_4

  v3 = 0;
  result = a2;
  v5 = 5210LL * a2;
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (int)dword_140404A6C[v5 + 129716768] > 0 )
  {
    v8 = &dword_140404A6C[v5 + 129716769];
    v9 = 0.0;
    v10 = 0.0;
    do
    {
      v11 = 60LL * (int)*v8;
      v12 = *(float *)&dword_140404A6C[v11 + 73007026] - *a3;
      v13 = *(float *)&dword_140404A6C[v11 + 73007028] - a3[2];
      v14 = *(float *)&dword_140404A6C[v11 + 73007027] - a3[1];
      *(float *)a1 = (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6178)
                                                           - (float)(v12 * *(float *)&dword_1402F6180))
                                                   * *(float *)&dword_140404A6C[v11 + 73007033])
                                           + (float)((float)((float)(v14 * *(float *)&dword_1402F6180)
                                                           - (float)(v13 * *(float *)&dword_1402F617C))
                                                   * *(float *)&dword_140404A6C[v11 + 73007032]))
                                   + (float)((float)((float)(v12 * *(float *)&dword_1402F617C)
                                                   - (float)(v14 * *(float *)&dword_1402F6178))
                                           * *(float *)&dword_140404A6C[v11 + 73007034]))
                           * 0.0078125)
                   + *(float *)a1;
      v9 = v9
         + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6188)
                                                 - (float)(v12 * *(float *)&dword_1402F6190))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007033])
                                 * 0.0078125)
                         + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F6190)
                                                 - (float)(v13 * *(float *)&dword_1402F618C))
                                         * *(float *)&dword_140404A6C[60 * *v8 + 73007032])
                                 * 0.0078125))
                 + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F618C)
                                         - (float)(v14 * *(float *)&dword_1402F6188))
                                 * *(float *)&dword_140404A6C[60 * *v8 + 73007034])
                         * 0.0078125));
      *(float *)(a1 + 4) = v9;
      result = (int)*v8;
      v10 = v10
          + (float)((float)((float)((float)((float)((float)(v13 * *(float *)&dword_1402F6198)
                                                  - (float)(v12 * *(float *)&dword_1402F61A0))
                                          * *(float *)&dword_140404A6C[60 * result + 73007033])
                                  * 0.0078125)
                          + (float)((float)((float)((float)(v14 * *(float *)&dword_1402F61A0)
                                                  - (float)(v13 * *(float *)&dword_1402F619C))
                                          * *(float *)&dword_140404A6C[60 * result + 73007032])
                                  * 0.0078125))
                  + (float)((float)((float)((float)(v12 * *(float *)&dword_1402F619C)
                                          - (float)(v14 * *(float *)&dword_1402F6198))
                                  * *(float *)&dword_140404A6C[60 * result + 73007034])
                          * 0.0078125));
      ++v3;
      *(float *)(a1 + 8) = v10;
      ++v8;
    }
    while ( v3 < (int)dword_140404A6C[v5 + 129716768] );
  }
  return result;
}

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B91E0) ----------------------------------------------------
__int64            sub_1400B91E0(int a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern int human_probe_ground(int human, float *from, float *to);
  return human_probe_ground(a1, a2, a3);
}

//----- (00000001400CA430) ----------------------------------------------------
_UNKNOWN **sub_1400CA430(int item)
{
  /* src/engine/item_contacts.c */
  extern void item_solve_human_contacts(int);
  /* The native leftover register result is discarded by every reviewed caller. */
  item_solve_human_contacts(item);
  return 0;
}

//----- (00000001400CAA90) ----------------------------------------------------
__int64            sub_1400CAA90(int a1, float *a2, float a3)
{
  int *v3; // rdi
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r12
  float v9; // xmm5_4
  float v10; // xmm15_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm8_4
  float v16; // xmm12_4
  float v17; // xmm11_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm10_4
  __int64 v31; // rcx
  float v32; // xmm2_4
  float v33; // xmm9_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm8_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  __int64 v45; // rax
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CAA90[368];
#define v58 (*(__int64 (*))(void *)(sr_frame_1400CAA90 + 0)) /* [rsp+40h] */
#define v59 (*(float (*))(void *)(sr_frame_1400CAA90 + 8)) /* [rsp+48h] */
#define v60 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 16)) /* [rsp+50h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 20)) /* [rsp+54h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_1400CAA90 + 24)) /* [rsp+58h] */
#define v63 (*(float (*))(void *)(sr_frame_1400CAA90 + 32)) /* [rsp+60h] */
#define v64 (*(float (*))(void *)(sr_frame_1400CAA90 + 36)) /* [rsp+64h] */
#define v65 (*(float (*))(void *)(sr_frame_1400CAA90 + 40)) /* [rsp+68h] */
#define v66 (*(float (*))(void *)(sr_frame_1400CAA90 + 44)) /* [rsp+6Ch] */
#define v67 (*(float (*))(void *)(sr_frame_1400CAA90 + 48)) /* [rsp+70h] */
#define v68 (*(float (*))(void *)(sr_frame_1400CAA90 + 52)) /* [rsp+74h] */
#define v69 (*(float (*))(void *)(sr_frame_1400CAA90 + 56)) /* [rsp+78h] */
#define v70 (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 64)) /* [rsp+80h] */
#define v71 (*(float (*))(void *)(sr_frame_1400CAA90 + 80)) /* [rsp+90h] */
#define v72 (*(float (*))(void *)(sr_frame_1400CAA90 + 84)) /* [rsp+94h] */
#define v73 (*(float (*))(void *)(sr_frame_1400CAA90 + 88)) /* [rsp+98h] */
#define v74 (*(float (*)[4])(void *)(sr_frame_1400CAA90 + 96)) /* [rsp+A0h] */
#define v76 (*(float (*))(void *)(sr_frame_1400CAA90 + 360)) /* [rsp+1A8h] */

  v3 = dword_1402B3664;
  v4 = 0;
  v6 = 0;
  v7 = 1760LL * a1;
  dword_140404A6C[73006988] = 1199570944;
  v8 = 1268LL * (int)dword_140404A6C[v7 + 278845898];
  do
  {
    v9 = *(float *)&dword_140404A6C[v8 + 278521350];
    v10 = *(float *)&dword_140404A6C[v8 + 278521351];
    v11 = *(float *)&dword_140404A6C[v7 + 278845934];
    v12 = *(float *)&dword_140404A6C[v7 + 278845937];
    v13 = *(float *)&dword_140404A6C[v8 + 278521352];
    v14 = *(float *)&dword_140404A6C[v7 + 278845940];
    v15 = *(float *)&dword_140404A6C[v7 + 278845938];
    v16 = *(float *)&dword_140404A6C[v7 + 278845941];
    v17 = *(float *)&dword_140404A6C[v7 + 278845942];
    v18 = 3LL * *v3;
    v19 = (float)((float)((float)(*(float *)&dword_1402B34F0[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F0[3 * *(v3 - 1)])
                - 0.5)
        * v9;
    v20 = (float)((float)((float)(*(float *)&dword_1402B34F4[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F4[3 * *(v3 - 1)])
                - 0.5)
        * v10;
    v21 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F8[3 * *(v3 - 1)])
                - 0.5)
        * v13;
    v63 = (float)((float)((float)(v11 * v19) + *(float *)&dword_140404A6C[v7 + 278845916]) + (float)(v12 * v20))
        + (float)(v14 * v21);
    v70[0] = v63;
    v22 = *(float *)&dword_140404A6C[v7 + 278845939] * v20;
    v64 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v19)
                        + *(float *)&dword_140404A6C[v7 + 278845917])
                + (float)(v15 * v20))
        + (float)(v16 * v21);
    v70[1] = v64;
    v23 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845936] * v19) + *(float *)&dword_140404A6C[v7 + 278845918])
        + v22;
    v24 = (float)(*(float *)&dword_1402B34F0[v18] - 0.5) + *(float *)&dword_1402B34F0[v18];
    v25 = *(float *)&dword_1402B34F4[v18];
    v65 = v23 + (float)(v17 * v21);
    v70[2] = v65;
    v26 = (float)(v24 - 0.5) * v9;
    v27 = (float)((float)((float)(v25 - 0.5) + v25) - 0.5) * v10;
    v28 = (float)((float)(*(float *)&dword_1402B34F8[v18] - 0.5) + *(float *)&dword_1402B34F8[v18]) - 0.5;
    v29 = *(float *)&dword_140404A6C[v7 + 278845916];
    v30 = v11;
    v31 = 3LL * v3[1];
    v32 = v28 * v13;
    v33 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v26) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)(v15 * v27);
    v34 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v26) + *(float *)&dword_140404A6C[v7 + 278845918];
    v35 = *(float *)&dword_140404A6C[v7 + 278845939] * v27;
    v71 = (float)((float)((float)(v30 * v26) + v29) + (float)(v12 * v27)) + (float)(v14 * v32);
    v36 = v34 + v35;
    v37 = *(float *)&dword_1402B34F0[v31];
    v72 = v33 + (float)(v16 * v32);
    v73 = v36 + (float)(v17 * v32);
    v38 = (float)((float)((float)(v37 - 0.5) + v37) - 0.5) * v9;
    v39 = (float)((float)((float)(*(float *)&dword_1402B34F4[v31] - 0.5) + *(float *)&dword_1402B34F4[v31]) - 0.5) * v10;
    v40 = (float)(*(float *)&dword_140404A6C[v7 + 278845934] * v38) + v29;
    v41 = (float)((float)((float)(*(float *)&dword_1402B34F8[v31] - 0.5) + *(float *)&dword_1402B34F8[v31]) - 0.5) * v13;
    v42 = (float)(*(float *)&dword_140404A6C[v7 + 278845935] * v38) + *(float *)&dword_140404A6C[v7 + 278845917];
    v67 = (float)(v40 + (float)(v12 * v39)) + (float)(v41 * v14);
    v43 = *(float *)&dword_140404A6C[v7 + 278845939] * v39;
    v44 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v38) + *(float *)&dword_140404A6C[v7 + 278845918];
    v68 = (float)(v42 + (float)(*(float *)&dword_140404A6C[v7 + 278845938] * v39)) + (float)(v41 * v16);
    v45 = v3[2];
    v46 = v44 + v43;
    v47 = *(float *)&dword_1402B34F0[3 * v45];
    v66 = v46 + (float)(v41 * v17);
    v69 = v66;
    v48 = (float)((float)((float)(v47 - 0.5) + v47) - 0.5) * v9;
    v49 = (float)(v48 * *(float *)&dword_140404A6C[v7 + 278845934]) + *(float *)&dword_140404A6C[v7 + 278845916];
    v50 = (float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845935]) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                        + *(float *)&dword_1402B34F4[3 * v45])
                                - 0.5)
                        * v10)
                * *(float *)&dword_140404A6C[v7 + 278845938]);
    v51 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * v45] - 0.5) + *(float *)&dword_1402B34F8[3 * v45]) - 0.5)
        * v13;
    v52 = (float)((float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845936])
                        + *(float *)&dword_140404A6C[v7 + 278845918])
                + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                + *(float *)&dword_1402B34F4[3 * v45])
                                        - 0.5)
                                * v10)
                        * *(float *)&dword_140404A6C[v7 + 278845939]))
        + (float)(v51 * v17);
    v74[0] = (float)(v49
                   + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                   + *(float *)&dword_1402B34F4[3 * v45])
                                           - 0.5)
                                   * v10)
                           * *(float *)&dword_140404A6C[v7 + 278845937]))
           + (float)(v51 * v14);
    v74[2] = v52;
    v74[1] = v50 + (float)(v51 * v16);
    v53 = (float)((float)(v68 - v64) * (float)(v73 - v65)) - (float)((float)(v66 - v65) * (float)(v72 - v64));
    v54 = (float)((float)(v66 - v65) * (float)(v71 - v63)) - (float)((float)(v67 - v63) * (float)(v73 - v65));
    v55 = (float)((float)(v67 - v63) * (float)(v72 - v64)) - (float)((float)(v68 - v64) * (float)(v71 - v63));
    v56 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55));
    if ( v56 == 0.0 )
    {
      v58 = 0;
      v59 = 0.0;
    }
    else
    {
      *(float *)&v58 = (float)(1.0 / v56) * v53;
      *((float *)&v58 + 1) = (float)(1.0 / v56) * v54;
      v59 = (float)(1.0 / v56) * v55;
    }
    if ( sub_140158760((float *)&v60, (float *)&v58, &v76, a2, a3, v70, &v71, &v67)
      && *(float *)&dword_140404A6C[73006988] > v76 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v76;
      dword_140404A6C[73006993] = v6;
    }
    if ( sub_140158760((float *)&v60, (float *)&v58, &v76, a2, a3, v70, &v67, v74)
      && *(float *)&dword_140404A6C[73006988] > v76 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v76;
      dword_140404A6C[73006993] = v6;
    }
    ++v6;
    v3 += 4;
  }
  while ( v6 < 6 );
  LOBYTE(v4) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v4;
}
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
#undef v71
#undef v72
#undef v73
#undef v74
#undef v76

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;

//----- (00000001400D8B70) ----------------------------------------------------
__int64            sub_1400D8B70(float *a1, float *a2, float *a3, int a4, float *a5, float *a6)
{
  /* Clean implementation: src/engine/collision_models.c, checked against the original executable
     (tools/native-compare suite models). */
  extern int collision_sweep_model(float *point, float *normal, float *fraction, int index, const float *from,
                                   const float *to);
  return (unsigned int)collision_sweep_model(a1, a2, a3, a4, a5, a6);
}

//----- (00000001400D97A0) ----------------------------------------------------
__int64            sub_1400D97A0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  /* Clean implementation: src/engine/collision_models.c, checked against the original executable
     (tools/native-compare suite models). */
  extern int collision_sweep_model_at(float *point, float *normal, float *fraction, int model, const float *position,
                                      const float *rotation, const float *from, const float *to);
  return (unsigned int)collision_sweep_model_at(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400DB060) ----------------------------------------------------
_BOOL8            sub_1400DB060(int a1, float *a2, float *a3, float a4)
{
  unsigned int *v4; // rdi
  float v6; // xmm9_4
  int v7; // ebx
  float v8; // xmm10_4
  __int64 v9; // r14
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm14_4
  unsigned int v14; // xmm15_4
  __int64 v15; // r13
  float *v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm8_4
  __int64 v19; // rcx
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  unsigned int v28; // xmm7_4
  unsigned int v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm10_4
  float v39; // xmm0_4
  float v40; // xmm10_4
  float v41; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB060[80];
#define v43 (*(float (*))(void *)(sr_frame_1400DB060 + 0)) /* [rsp+48h] */
#define v44 (*(float (*))(void *)(sr_frame_1400DB060 + 4)) /* [rsp+4Ch] */
#define v45 (*(float (*))(void *)(sr_frame_1400DB060 + 12)) /* [rsp+54h] */
#define v46 (*(float (*))(void *)(sr_frame_1400DB060 + 16)) /* [rsp+58h] */
#define v47 (*(float (*))(void *)(sr_frame_1400DB060 + 20)) /* [rsp+5Ch] */
#define v48 (*(float (*))(void *)(sr_frame_1400DB060 + 24)) /* [rsp+60h] */
#define v49 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 32)) /* [rsp+68h] */
#define v50 (*(float (*)[4])(void *)(sr_frame_1400DB060 + 48)) /* [rsp+78h] */
#define v51 (*(float (*))(void *)(sr_frame_1400DB060 + 64)) /* [rsp+88h] */
#define v52 (*(float (*))(void *)(sr_frame_1400DB060 + 68)) /* [rsp+8Ch] */
#define v53 (*(float (*))(void *)(sr_frame_1400DB060 + 72)) /* [rsp+90h] */

  v4 = &dword_140404A6C[282486067];
  v6 = v44;
  v7 = 0;
  v8 = v44;
  v9 = 0;
  v11 = v44;
  v12 = v44;
  v13 = 1.0;
  v14 = LODWORD(v44);
  dword_140404A6C[73006987] = 1065353216;
  v15 = 7166LL * a1;
  v16 = (float *)&dword_140404A6C[v15 + 280651442];
  do
  {
    v17 = *((float *)v4 + 1) * -0.5;
    v18 = *((float *)v4 + 1) * 0.5;
    v19 = v15 * 4 + 12 * (v9 + (int)*v4);
    v20 = *(float *)((char *)&dword_140404A6C[280651453] + v19);
    v21 = *(float *)((char *)&dword_140404A6C[280651454] + v19);
    v22 = (float)(*(float *)((char *)&dword_140404A6C[280651452] + v19) * v18) + *(v16 - 2);
    v50[0] = (float)(*(float *)((char *)&dword_140404A6C[280651452] + v19) * v17) + *(v16 - 2);
    v23 = (float)(v20 * v17) + *(v16 - 1);
    v49[0] = v22;
    v24 = (float)(v20 * v18) + *(v16 - 1);
    v50[1] = v23;
    v25 = (float)(v21 * v17) + *v16;
    v49[1] = v24;
    v26 = (float)(v21 * v18) + *v16;
    v50[2] = v25;
    v27 = a4 + *((float *)v4 + 2);
    v49[2] = v26;
    if ( sub_1400D6890(&v51, &v46, &v45, a2, a3, v50, v49, v27) )
    {
      v28 = LODWORD(v51);
      v29 = LODWORD(v52);
      v30 = v46 - v51;
      v31 = v47 - v52;
      v14 = LODWORD(v53);
      v32 = v48 - v53;
      v44 = v51;
      v43 = v52;
      v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
      if ( v33 == 0.0 )
      {
        v11 = 0.0;
        v12 = 0.0;
        v6 = 0.0;
      }
      else
      {
        v11 = (float)(1.0 / v33) * v30;
        v12 = (float)(1.0 / v33) * v31;
        v6 = (float)(1.0 / v33) * v32;
      }
      v34 = *a3 - *a2;
      v35 = a3[1] - a2[1];
      v36 = a3[2] - a2[2];
      v37 = v53 - a2[2];
      v38 = (float)(v51 - *a2) * v34;
      v39 = (float)(v52 - a2[1]) * v35;
      v47 = v35;
      v40 = v38 + v39;
      v41 = v45;
      v46 = v34;
      v48 = v36;
      v8 = (float)(v40 + (float)(v37 * v36))
         / (float)((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
    }
    else
    {
      v41 = 65536.0;
      v29 = LODWORD(v43);
      v28 = LODWORD(v44);
    }
    if ( v41 < 65536.0 && v13 > v8 )
    {
      dword_140404A6C[73006981] = v28;
      v13 = v8;
      dword_140404A6C[73006982] = v29;
      dword_140404A6C[73006983] = v14;
      *(float *)&dword_140404A6C[73006984] = v11;
      *(float *)&dword_140404A6C[73006985] = v12;
      *(float *)&dword_140404A6C[73006986] = v6;
      *(float *)&dword_140404A6C[73006987] = v8;
      dword_140404A6C[73006994] = v7;
    }
    ++v7;
    v9 += 26;
    v16 += 78;
    v4 += 25;
  }
  while ( v7 < 16 );
  return v13 < 1.0;
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53

// 1400DB0AE: variable 'v44' is possibly undefined
// 1400DB361: variable 'v43' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;

//----- (00000001400DC940) ----------------------------------------------------
__int64            sub_1400DC940(int a1, float *a2, float *a3, int a4)
{
  /* Clean implementation: src/engine/collision_soft_vehicle.c, checked against the original executable
     (tools/native-compare suite softveh). */
  extern int collision_ray_soft_vehicle(int vehicle, const float *from, const float *to, int wheels);
  return (unsigned int)collision_ray_soft_vehicle(a1, a2, a3, a4);
}

//----- (00000001400E2D40) ----------------------------------------------------
_BOOL8            sub_1400E2D40(int a1, float *a2, float *a3)
{
  __int64 v4; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  signed int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r15
  int *v17; // rbx
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  __int64 v22; // rcx
  float v23; // xmm3_4
  float v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm11_4
  float v29; // xmm12_4
  float v30; // xmm10_4
  float v31; // xmm11_4
  float v32; // xmm12_4
  float v33; // xmm6_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  __int64 v50; // rcx
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm1_4
  float v54; // xmm3_4
  float v55; // xmm5_4
  float v56; // xmm4_4
  float v57; // xmm10_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm6_4
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  float v68; // xmm5_4
  float v69; // xmm1_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E2D40[320];
#define v73 (*(float (*))(void *)(sr_frame_1400E2D40 + 0)) /* [rsp+40h] */
#define v74 (*(float (*))(void *)(sr_frame_1400E2D40 + 4)) /* [rsp+44h] */
#define v75 (*(float (*))(void *)(sr_frame_1400E2D40 + 8)) /* [rsp+48h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_1400E2D40 + 16)) /* [rsp+50h] */
#define v77 (*(float (*))(void *)(sr_frame_1400E2D40 + 24)) /* [rsp+58h] */
#define v78 (*(__int64 (*))(void *)(sr_frame_1400E2D40 + 32)) /* [rsp+60h] */
#define v79 (*(float (*))(void *)(sr_frame_1400E2D40 + 40)) /* [rsp+68h] */
#define v80 (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 48)) /* [rsp+70h] */
#define v81 (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 52)) /* [rsp+74h] */
#define v82 (*(unsigned int (*))(void *)(sr_frame_1400E2D40 + 56)) /* [rsp+78h] */
#define v83 (*(float (*)[4])(void *)(sr_frame_1400E2D40 + 64)) /* [rsp+80h] */
#define v84 (*(float (*))(void *)(sr_frame_1400E2D40 + 304)) /* [rsp+170h] */
#define v85 (*(float (*))(void *)(sr_frame_1400E2D40 + 312)) /* [rsp+178h] */

  v4 = 5210LL * a1;
  v6 = *(float *)&dword_140404A6C[v4 + 129716753];
  if ( *a2 < v6 && v6 > *a3 )
    return 0;
  v7 = a2[1];
  v8 = *(float *)&dword_140404A6C[v4 + 129716754];
  if ( v7 < v8 && v8 > a3[1] )
    return 0;
  v9 = a2[2];
  v10 = *(float *)&dword_140404A6C[v4 + 129716755];
  if ( v9 < v10 && v10 > a3[2] )
    return 0;
  v11 = *(float *)&dword_140404A6C[v4 + 129716756];
  if ( *a2 > v11 && v11 < *a3 )
    return 0;
  v12 = *(float *)&dword_140404A6C[v4 + 129716757];
  if ( v7 > v12 && v12 < a3[1] )
    return 0;
  v13 = *(float *)&dword_140404A6C[v4 + 129716758];
  if ( v9 > v13 && v13 < a3[2] )
    return 0;
  v14 = 0;
  v15 = 45072LL * (int)dword_140404A6C[v4 + 129716710];
  dword_140404A6C[73006987] = 1065353216;
  if ( (int)dword_140404A6C[v15 + 335164539] <= 0 )
    return 0;
  v16 = 5210LL * a1;
  v17 = (int *)&dword_140404A6C[v15 + 335164542];
  do
  {
    v18 = 60LL * (int)dword_140404A6C[v16 + 129716769 + *v17];
    v19 = *(float *)&dword_140404A6C[v18 + 73007028];
    v20 = *(float *)&dword_140404A6C[v18 + 73007026];
    v21 = *(float *)&dword_140404A6C[v18 + 73007027];
    v22 = 60LL * (int)dword_140404A6C[v16 + 129716769 + v17[1]];
    v85 = v19;
    v83[2] = v19;
    v83[0] = v20;
    v83[1] = v21;
    v23 = *(float *)&dword_140404A6C[v22 + 73007026];
    v24 = *(float *)&dword_140404A6C[v22 + 73007028];
    v25 = (int)dword_140404A6C[v16 + 129716769 + v17[2]];
    HIDWORD(v78) = dword_140404A6C[v22 + 73007027];
    v79 = v24;
    v26 = v24 - v19;
    *(float *)&v78 = v23;
    v27 = v23 - v20;
    v28 = *(float *)&dword_140404A6C[60 * v25 + 73007028];
    v29 = *(float *)&dword_140404A6C[60 * v25 + 73007026];
    HIDWORD(v76) = dword_140404A6C[60 * v25 + 73007027];
    v30 = *((float *)&v76 + 1) - v21;
    v77 = v28;
    v31 = v28 - v19;
    *(float *)&v76 = v29;
    v32 = v29 - v20;
    v33 = (float)((float)(*((float *)&v76 + 1) - v21) * v26) - (float)(v31 * (float)(*((float *)&v78 + 1) - v21));
    v34 = (float)(v31 * v27) - (float)(v32 * v26);
    v35 = (float)(v32 * (float)(*((float *)&v78 + 1) - v21)) - (float)((float)(*((float *)&v76 + 1) - v21) * v27);
    v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
    if ( v36 == 0.0 )
    {
      v73 = 0.0;
      v37 = 0.0;
      v74 = 0.0;
      v38 = 0.0;
      v75 = 0.0;
      v39 = 0.0;
    }
    else
    {
      v37 = v33 * (float)(1.0 / v36);
      v38 = v34 * (float)(1.0 / v36);
      v39 = v35 * (float)(1.0 / v36);
      v73 = v37;
      v74 = v38;
      v75 = v39;
    }
    if ( sub_140077FA0((float *)&v80, &v73, &v84, a2, a3, v83, (float *)&v78, (float *)&v76)
      && v84 < *(float *)&dword_140404A6C[73006987] )
    {
      v40 = v16 + *v17;
      dword_140404A6C[73006981] = v80;
      dword_140404A6C[73006982] = v81;
      dword_140404A6C[73006983] = v82;
      dword_140404A6C[73006994] = dword_140404A6C[v40 + 129716769];
      v41 = v16 + v17[1];
      *(float *)&dword_140404A6C[73006984] = v37;
      *(float *)&dword_140404A6C[73006985] = v38;
      *(float *)&dword_140404A6C[73006986] = v39;
      *(float *)&dword_140404A6C[73006987] = v84;
      dword_140404A6C[73006995] = dword_140404A6C[v41 + 129716769];
      v42 = v17[2];
      dword_140404A6C[73006993] = v14;
      dword_140404A6C[73006996] = dword_140404A6C[v16 + 129716769 + v42];
      sub_14002D370(
        (float *)&dword_140404A6C[73006998],
        (float *)&dword_140404A6C[73006981],
        v83,
        (float *)&v78,
        (float *)&v76);
      v43 = 60LL * (int)dword_140404A6C[73006994];
      v44 = 60LL * (int)dword_140404A6C[73006995];
      v45 = 60LL * (int)dword_140404A6C[73006996];
      v46 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v44 + 73007034])
          + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v43 + 73007034]);
      v47 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v45 + 73007033];
      v48 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v45 + 73007034];
      v49 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v44 + 73007033])
          + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v43 + 73007033]);
      *(float *)&dword_140404A6C[73006989] = (float)((float)(*(float *)&dword_140404A6C[73006999]
                                                           * *(float *)&dword_140404A6C[v44 + 73007032])
                                                   + (float)(*(float *)&dword_140404A6C[73006998]
                                                           * *(float *)&dword_140404A6C[v43 + 73007032]))
                                           + (float)(*(float *)&dword_140404A6C[73007000]
                                                   * *(float *)&dword_140404A6C[v45 + 73007032]);
      *(float *)&dword_140404A6C[73006991] = v46 + v48;
      *(float *)&dword_140404A6C[73006990] = v49 + v47;
    }
    if ( *(v17 - 1) == 4 )
    {
      v78 = v76;
      v79 = v77;
      v50 = 60LL * (int)dword_140404A6C[v16 + 129716769 + v17[3]];
      v51 = *(float *)&dword_140404A6C[v50 + 73007028];
      v52 = *(float *)&dword_140404A6C[v50 + 73007027];
      LODWORD(v76) = dword_140404A6C[v50 + 73007026];
      v77 = v51;
      v53 = v51 - v85;
      *((float *)&v76 + 1) = v52;
      v54 = v52 - v21;
      v55 = (float)(v32 * v53) - (float)(v31 * (float)(*(float *)&v76 - v20));
      v56 = (float)(v31 * v54) - (float)(v30 * v53);
      v57 = (float)(v30 * (float)(*(float *)&v76 - v20)) - (float)(v32 * v54);
      v58 = fsqrt((float)((float)(v55 * v55) + (float)(v56 * v56)) + (float)(v57 * v57));
      if ( v58 == 0.0 )
      {
        v73 = 0.0;
        v59 = 0.0;
        v74 = 0.0;
        v60 = 0.0;
        v75 = 0.0;
        v61 = 0.0;
      }
      else
      {
        v59 = (float)(1.0 / v58) * v56;
        v60 = (float)(1.0 / v58) * v55;
        v61 = (float)(1.0 / v58) * v57;
        v73 = v59;
        v74 = v60;
        v75 = v61;
      }
      if ( sub_140077FA0((float *)&v80, &v73, &v84, a2, a3, v83, (float *)&v78, (float *)&v76)
        && v84 < *(float *)&dword_140404A6C[73006987] )
      {
        v62 = v16 + *v17;
        dword_140404A6C[73006981] = v80;
        dword_140404A6C[73006982] = v81;
        dword_140404A6C[73006983] = v82;
        dword_140404A6C[73006994] = dword_140404A6C[v62 + 129716769];
        v63 = v16 + v17[2];
        *(float *)&dword_140404A6C[73006984] = v59;
        *(float *)&dword_140404A6C[73006985] = v60;
        *(float *)&dword_140404A6C[73006986] = v61;
        *(float *)&dword_140404A6C[73006987] = v84;
        dword_140404A6C[73006995] = dword_140404A6C[v63 + 129716769];
        v64 = v17[3];
        dword_140404A6C[73006993] = v14;
        dword_140404A6C[73006996] = dword_140404A6C[v16 + 129716769 + v64];
        sub_14002D370(
          (float *)&dword_140404A6C[73006998],
          (float *)&dword_140404A6C[73006981],
          v83,
          (float *)&v78,
          (float *)&v76);
        v65 = 60LL * (int)dword_140404A6C[73006994];
        v66 = 60LL * (int)dword_140404A6C[73006995];
        v67 = 60LL * (int)dword_140404A6C[73006996];
        v68 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v66 + 73007034])
            + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v65 + 73007034]);
        v69 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v67 + 73007033];
        v70 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v67 + 73007034];
        v71 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v66 + 73007033])
            + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v65 + 73007033]);
        *(float *)&dword_140404A6C[73006989] = (float)((float)(*(float *)&dword_140404A6C[73006999]
                                                             * *(float *)&dword_140404A6C[v66 + 73007032])
                                                     + (float)(*(float *)&dword_140404A6C[73006998]
                                                             * *(float *)&dword_140404A6C[v65 + 73007032]))
                                             + (float)(*(float *)&dword_140404A6C[73007000]
                                                     * *(float *)&dword_140404A6C[v67 + 73007032]);
        *(float *)&dword_140404A6C[73006991] = v68 + v70;
        *(float *)&dword_140404A6C[73006990] = v71 + v69;
      }
    }
    ++v14;
    v17 += 6;
  }
  while ( v14 < (int)dword_140404A6C[v15 + 335164539] );
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
#undef v85

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (00000001401540B0) ----------------------------------------------------
__int64            sub_1401540B0(float *a1, float a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  signed int v4; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401540B0[112];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401540B0 + 0)) /* [rsp+28h] */
#define v8 (*(float (*)[4])(void *)(sr_frame_1401540B0 + 8)) /* [rsp+30h] */
#define v9 (*(float (*)[4])(void *)(sr_frame_1401540B0 + 24)) /* [rsp+40h] */
#define v10 (*(float (*))(void *)(sr_frame_1401540B0 + 96)) /* [rsp+88h] */

  v2 = &dword_140404A6C[111579637];
  v3 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v4 = 0;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  do
  {
    if ( *v2 )
    {
      *(float *)&v7 = a2;
      if ( (unsigned int)sub_140151190(v8, v9, &v10, v4, a1, v7) )
      {
        if ( *(float *)&dword_140404A6C[73006988] > v10 )
        {
          *(float *)&dword_140404A6C[73006981] = v8[0];
          *(float *)&dword_140404A6C[73006982] = v8[1];
          *(float *)&dword_140404A6C[73006983] = v8[2];
          *(float *)&dword_140404A6C[73006984] = v9[0];
          *(float *)&dword_140404A6C[73006985] = v9[1];
          *(float *)&dword_140404A6C[73006986] = v9[2];
          *(float *)&dword_140404A6C[73006988] = v10;
          dword_140404A6C[73007002] = v4;
        }
      }
    }
    ++v4;
    v2 += 263004;
  }
  while ( v4 < 4 );
  LOBYTE(v3) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v3;
}
#undef v7
#undef v8
#undef v9
#undef v10

// 140154130: variable 'v7' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (0000000140188120) ----------------------------------------------------
__int64 sub_140188120()
{
  unsigned int *v0; // rsi
  int v1; // ecx
  signed int v2; // edi
  float *v3; // rbx
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float *v17; // rcx
  float v18; // xmm11_4
  float v19; // xmm12_4
  int v20; // eax
  __int64 v21; // rdx
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float *v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm2_4
  int v28; // eax
  __int64 v29; // rdx
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float *v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm2_4
  int v36; // eax
  __int64 v37; // rdx
  float v38; // xmm2_4
  float v39; // xmm1_4
  float *v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140188120[64];
#define v48 (*(__int64 (*))(void *)(sr_frame_140188120 + 0)) /* [rsp+0h] */
#define v49 (*(float (*))(void *)(sr_frame_140188120 + 32)) /* [rsp+20h] */
#define v50 (*(float (*))(void *)(sr_frame_140188120 + 36)) /* [rsp+24h] */
#define v51 (*(float (*))(void *)(sr_frame_140188120 + 40)) /* [rsp+28h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_140188120 + 48)) /* [rsp+30h] */

  v0 = &dword_140404A6C[129720373];
  v1 = dword_140404A6C[431138493];
  do
  {
    if ( *(v0 - 3664) )
    {
      v2 = 0;
      if ( (int)*v0 > 0 )
      {
        v3 = (float *)(v0 + 36);
        do
        {
          if ( *(v3 - 2) > 0.03125 )
          {
            v4 = *(v3 - 16) - *(v3 - 1);
            v5 = *(v3 - 15) - *v3;
            v6 = *(v3 - 14) - v3[1];
            v7 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
            if ( v7 == 0.0 )
            {
              v8 = 0.0;
              v9 = 0.0;
              v10 = 0.0;
            }
            else
            {
              v8 = (float)(1.0 / v7) * v4;
              v9 = (float)(1.0 / v7) * v5;
              v10 = (float)(1.0 / v7) * v6;
            }
            v11 = v10 * -0.0625;
            v12 = v9 * 0.0625;
            v13 = v8 * 0.0625;
            v14 = *(v3 - 16) - v11;
            v15 = *(v3 - 15) - v12;
            v16 = *(v3 - 14) - v13;
            v17 = (float *)&dword_140404A6C[17 * v1 + 430859966];
            *v17 = v14;
            v18 = v14 - *(float *)&dword_1402F6188;
            v17[1] = v15;
            v19 = v15 - *(float *)&dword_1402F618C;
            v17[2] = v16;
            v49 = v18;
            v50 = v19;
            v51 = v16 - *(float *)&dword_1402F6190;
            v20 = sub_1400DC050(v17, &v49, 0);
            v21 = (int)dword_140404A6C[431138493];
            if ( v20 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859967] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v22 = v11 + *(v3 - 16);
            v23 = v12 + *(v3 - 15);
            *(float *)&dword_140404A6C[17 * v21 + 430859969] = *(v3 - 2) * 8.0;
            v24 = v13 + *(v3 - 14);
            v25 = (float *)&dword_140404A6C[17 * v21 + 430859970];
            v25[2] = v24;
            v26 = v24 - *(float *)&dword_1402F6190;
            *v25 = v22;
            v27 = v22 - *(float *)&dword_1402F6188;
            v25[1] = v23;
            v51 = v26;
            v49 = v27;
            v50 = v23 - *(float *)&dword_1402F618C;
            v28 = sub_1400DC050(v25, &v49, 0);
            v29 = (int)dword_140404A6C[431138493];
            if ( v28 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859971] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v30 = v11 + *(v3 - 1);
            v31 = v12 + *v3;
            *(float *)&dword_140404A6C[17 * v29 + 430859973] = *(v3 - 2) * 8.0;
            v32 = v13 + v3[1];
            v33 = (float *)&dword_140404A6C[17 * v29 + 430859974];
            v33[2] = v32;
            v34 = v32 - *(float *)&dword_1402F6190;
            *v33 = v30;
            v35 = v30 - *(float *)&dword_1402F6188;
            v33[1] = v31;
            v51 = v34;
            v49 = v35;
            v50 = v31 - *(float *)&dword_1402F618C;
            v36 = sub_1400DC050(v33, &v49, 0);
            v37 = (int)dword_140404A6C[431138493];
            if ( v36 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859975] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v38 = *(v3 - 1) - v11;
            v39 = *v3 - v12;
            *(float *)&dword_140404A6C[17 * v37 + 430859977] = v3[2] * 8.0;
            v40 = (float *)&dword_140404A6C[17 * v37 + 430859978];
            v41 = v3[1] - v13;
            *v40 = v38;
            v42 = v38 - *(float *)&dword_1402F6188;
            v40[2] = v41;
            v43 = v41 - *(float *)&dword_1402F6190;
            v40[1] = v39;
            v49 = v42;
            v51 = v43;
            v50 = v39 - *(float *)&dword_1402F618C;
            v44 = sub_1400DC050(v40, &v49, 0);
            v45 = (int)dword_140404A6C[431138493];
            if ( v44 )
              *(float *)&dword_140404A6C[17 * dword_140404A6C[431138493] + 430859979] = *(float *)&dword_140404A6C[73006982]
                                                                                      + 0.03125;
            v46 = dword_140404A6C[431138494];
            *(float *)&dword_140404A6C[17 * v45 + 430859981] = v3[2] * 8.0;
            v1 = ((_WORD)v45 + 1) & 0x3FFF;
            dword_140404A6C[431138493] = v1;
            if ( v46 == v1 )
              dword_140404A6C[431138494] = ((_WORD)v46 + 1) & 0x3FFF;
          }
          ++v2;
          *(v3 - 1) = *(v3 - 16);
          *v3 = *(v3 - 15);
          v3[1] = *(v3 - 14);
          v3[2] = *(v3 - 2);
          v3 += 43;
        }
        while ( v2 < (int)*v0 );
      }
    }
    v0 += 5210;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[132387893] );
  return 0; /* the function has no caller */
}
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52

// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A70AE560: using guessed type unsigned int;
// 1A70AE564: using guessed type unsigned int;


//----- (0000000140019000) ----------------------------------------------------
__m128            sub_140019000(float *a1, float *a2)
{
  float v2; // xmm0_4
  __int128 v4; // xmm6

  v2 = a2[2] - a1[2];
  if ( fsqrt(
         (float)((float)((float)(a2[1] - a1[1]) * (float)(a2[1] - a1[1]))
               + (float)((float)(*a2 - *a1) * (float)(*a2 - *a1)))
       + (float)(v2 * v2)) <= 128.0 )
  {
    v4 = 0x3F800000u;
    if ( (unsigned int)sub_1400DC050(a1, a2, 0) )
      return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
    return (__m128)v4;
  }
  else
  {
    return ((__m128)_mm_cvtsi32_si128((int)(0x3F000000u)));
  }
}


//----- (000000014002D370) ----------------------------------------------------
float *           sub_14002D370(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  extern void collision_triangle_weights(float *weights, const float *point, const float *a, const float *b,
                                         const float *c);
  /* src/engine/collision.c; the original returns a5 (a leftover register). */
  collision_triangle_weights(a1, a2, a3, a4, a5);
  return a5;
}

//----- (000000014002E730) ----------------------------------------------------
__int64            sub_14002E730(__int64 a1, int a2, __int64 a3, float *a4)
{
  __int64 v4; // r13
  __int64 result; // rax
  signed __int64 v7; // r8
  signed int v8; // esi
  __int64 v9; // r10
  __int64 v10; // r13
  float *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r15
  float *v15; // r11
  __int64 v16; // r9
  __int64 v17; // rbx
  float *v18; // r8
  float v19; // xmm0_4
  float *v20; // rcx
  float v21; // xmm10_4
  float v22; // xmm13_4
  __int64 v23; // rdx
  float v24; // xmm12_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  float v27; // xmm9_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r12
  float *v42; // r9
  float v43; // xmm15_4
  __int64 v44; // rbx
  float *v45; // rbp
  __int64 v46; // r15
  __int64 v47; // r8
  float *v48; // r11
  __int64 v49; // rdi
  __int64 v50; // rax
  float *v51; // rdx
  float v52; // xmm14_4
  float v53; // xmm13_4
  float v54; // xmm1_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm12_4
  float v58; // xmm2_4
  float v59; // xmm4_4
  float v60; // xmm7_4
  float v61; // xmm0_4
  float v62; // xmm6_4
  float v63; // xmm5_4
  float v64; // xmm3_4
  float v65; // xmm7_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm9_4
  float v70; // xmm10_4
  __int64 v71; // rcx
  __m128 v72; // xmm0
  __m128 v73; // xmm2
  __m128 v74; // xmm2
  __m128 v75; // xmm0
  __m128 v76; // xmm2
  unsigned __int64 v77; // rdx
  __m128 v78; // xmm2
  __m128 v79; // xmm0
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002E730[256];
#define v80 (*(__m128i (*))(void *)(sr_frame_14002E730 + 0)) /* [rsp+10h] */
#define v82 (*(signed int (*))(void *)(sr_frame_14002E730 + 248)) /* [rsp+108h] */

  v82 = a2;
  v4 = a1;
  result = a3;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  if ( a2 > 0 )
  {
    v10 = 1;
    v11 = (float *)(result + 4);
    v12 = a2;
    do
    {
      if ( v10 < v9 )
      {
        v13 = v10 + 1;
        v14 = v9 - v10;
        v15 = v11 + 3;
        do
        {
          if ( v13 < v9 )
          {
            v16 = v13 + 1;
            v17 = v9 - v13;
            v18 = v15 + 3;
            do
            {
              if ( v16 < v9 )
              {
                v19 = *(v15 - 1);
                v20 = v18 + 4;
                v21 = *v15;
                v22 = *(v18 - 1) - v19;
                v23 = v9 - v16;
                v24 = v15[1];
                v25 = *v18 - *v15;
                v26 = v18[1] - v24;
                v27 = *(v11 - 1) - v19;
                do
                {
                  v28 = *(v20 - 2) - v19;
                  v29 = *(v20 - 1) - v21;
                  v30 = (float)(v26 * v29) - (float)((float)(*v20 - v24) * v25);
                  v31 = (float)((float)(*v20 - v24) * v22) - (float)(v28 * v26);
                  v32 = (float)(v28 * v25) - (float)(v22 * v29);
                  v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
                  if ( v33 == 0.0 )
                  {
                    v34 = 0.0;
                    v35 = 0.0;
                    v36 = 0.0;
                  }
                  else
                  {
                    v34 = v30 * (float)(1.0 / v33);
                    v35 = v31 * (float)(1.0 / v33);
                    v36 = v32 * (float)(1.0 / v33);
                  }
                  v37 = *v11 - v21;
                  v38 = v11[1] - v24;
                  if ( (float)((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 0.0 )
                  {
                    v34 = -v34;
                    v35 = -v35;
                    v36 = -v36;
                  }
                  v19 = *(v15 - 1);
                  v39 = v8 + 1;
                  if ( fabs((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 1.52587890625e-05 )
                    v39 = v8;
                  v20 += 3;
                  v8 = v39;
                  --v23;
                }
                while ( v23 );
              }
              v18 += 3;
              ++v16;
              --v17;
            }
            while ( v17 );
          }
          ++v13;
          v15 += 3;
          --v14;
        }
        while ( v14 );
      }
      ++v10;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v4 = a1;
    v7 = 0;
    result = a3;
    a2 = v82;
  }
  v80 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
  if ( a2 <= 0 )
  {
    LODWORD(v71) = 0;
  }
  else
  {
    v40 = 0;
    v41 = (unsigned int)a2;
    v42 = (float *)(result + 8);
    do
    {
      *(_DWORD *)(v4 + 4 * v40) = 0;
      v43 = 0.0;
      v44 = 0;
      if ( v9 > 0 )
      {
        v45 = (float *)(result + 4);
        do
        {
          v46 = v44 + 1;
          v47 = v44 + 1;
          if ( v44 + 1 < v9 )
          {
            v48 = v45 + 3;
            do
            {
              v49 = v47 + 1;
              v50 = v47 + 1;
              if ( v47 + 1 < v9 )
              {
                v51 = v48 + 4;
                do
                {
                  if ( v44 != v40 && v47 != v40 && v50 != v40 )
                  {
                    v52 = v45[1];
                    v53 = *v45;
                    v54 = v48[1] - v52;
                    v55 = *v51 - v52;
                    v56 = *v48 - *v45;
                    v57 = *(v45 - 1);
                    v58 = *(v51 - 1) - *v45;
                    v59 = *(v48 - 1) - v57;
                    v60 = (float)(v54 * v58) - (float)(v55 * v56);
                    v61 = *(v51 - 2) - v57;
                    v62 = (float)(v61 * v56) - (float)(v59 * v58);
                    v63 = (float)(v55 * v59) - (float)(v61 * v54);
                    v64 = fsqrt((float)((float)(v63 * v63) + (float)(v60 * v60)) + (float)(v62 * v62));
                    if ( v64 == 0.0 )
                    {
                      v65 = 0.0;
                      v66 = 0.0;
                      v67 = 0.0;
                    }
                    else
                    {
                      v65 = v60 * (float)(1.0 / v64);
                      v66 = v63 * (float)(1.0 / v64);
                      v67 = v62 * (float)(1.0 / v64);
                    }
                    v68 = *(v42 - 2) - v57;
                    v69 = *(v42 - 1) - v53;
                    v70 = *v42 - v52;
                    if ( (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) < 0.0 )
                    {
                      v65 = -v65;
                      v66 = -v66;
                      v67 = -v67;
                    }
                    if ( fabs((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) >= 1.52587890625e-05 )
                    {
                      v43 = v43
                          + (float)((float)((float)((float)((float)(a4[1] - v53) * v66)
                                                  + (float)((float)(*a4 - v57) * v65))
                                          + (float)((float)(a4[2] - v52) * v67))
                                  / (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)));
                      *(float *)(v4 + 4 * v40) = v43;
                    }
                  }
                  ++v50;
                  v51 += 3;
                }
                while ( v50 < v9 );
              }
              v48 += 3;
              ++v47;
            }
            while ( v49 < v9 );
          }
          v45 += 3;
          ++v44;
        }
        while ( v46 < v9 );
        result = a3;
        v7 = 0;
      }
      ++v40;
      v42 += 3;
      --v41;
    }
    while ( v41 );
    result = v82;
    LODWORD(v71) = 0;
    if ( (unsigned int)v82 >= 0x10 )
    {
      v72 = _mm_cvtepi32_ps(v80);
      result = v4 + 32;
      v73 = _mm_rcp_ps(v72);
      v74 = _mm_sub_ps(_mm_add_ps(v73, v73), _mm_mul_ps(_mm_mul_ps(v73, v73), v72));
      do
      {
        v75 = _mm_loadu_ps((const float *)(const void *)((result - 32)));
        result += 64;
        LODWORD(v71) = v71 + 16;
        v7 += 16LL;
        _mm_storeu_ps((float *)(void *)((result - 96)), _mm_mul_ps(v74, v75));
        _mm_storeu_ps((float *)(void *)((result - 80)), _mm_mul_ps(v74, _mm_loadu_ps((const float *)(const void *)((result - 80)))));
        _mm_storeu_ps((float *)(void *)((result - 64)), _mm_mul_ps(v74, _mm_loadu_ps((const float *)(const void *)((result - 64)))));
        _mm_storeu_ps((float *)(void *)((result - 48)), _mm_mul_ps(_mm_loadu_ps((const float *)(const void *)((result - 48))), v74));
      }
      while ( v7 < (__int64)(v82 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v71 = (int)v71;
  if ( (int)v71 < v9 )
  {
    result = v9 - (int)v71;
    if ( result < 4 )
      goto LABEL_57;
    v76 = ((__m128)_mm_cvtsi32_si128((int)(0x3F800000u)));
    result = v4 + 4LL * (int)v71 + 8;
    v77 = ((unsigned __int64)(v9 - (int)v71 - 4) >> 2) + 1;
    SR_VEC_LANES(128, v76, f32)[0] = 1.0 / (float)v8;
    v71 = (int)v71 + 4 * v77;
    v78 = _mm_shuffle_ps(v76, v76, 0);
    do
    {
      v79 = _mm_loadu_ps((const float *)(const void *)((result - 8)));
      result += 16;
      _mm_storeu_ps((float *)(void *)((result - 24)), _mm_mul_ps(v79, v78));
      --v77;
    }
    while ( v77 );
    if ( v71 < v9 )
    {
LABEL_57:
      do
      {
        *(float *)(v4 + 4 * v71) = (float)(1.0 / (float)v8) * *(float *)(v4 + 4 * v71);
        ++v71;
      }
      while ( v71 < v9 );
    }
  }
  return result;
}
#undef v80
#undef v82

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (0000000140033610) ----------------------------------------------------
_BOOL8            sub_140033610(float *a1, int *a2, float *a3, float *a4, int a5)
{
  int v5; // esi
  int *v10; // rdi
  int v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // xmm0_4
  int v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033610[192];
#define v30 (*(__int64 (*))(void *)(sr_frame_140033610 + 0)) /* [rsp+30h] */
#define v31 (*(int (*))(void *)(sr_frame_140033610 + 40)) /* [rsp+58h] */
#define v32 (*(int (*))(void *)(sr_frame_140033610 + 44)) /* [rsp+5Ch] */
#define v33 (*(int (*))(void *)(sr_frame_140033610 + 48)) /* [rsp+60h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_140033610 + 56)) /* [rsp+68h] */
#define v35 (*(float (*)[4])(void *)(sr_frame_140033610 + 72)) /* [rsp+78h] */
#define v36 (*(float (*)[4])(void *)(sr_frame_140033610 + 88)) /* [rsp+88h] */
#define v37 (*(float (*)[16])(void *)(sr_frame_140033610 + 104)) /* [rsp+98h] */
#define v38 (*(float (*))(void *)(sr_frame_140033610 + 184)) /* [rsp+E8h] */

  v5 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v10 = a2 + 3;
  v11 = a5;
  do
  {
    v12 = *((float *)v10 - 1);
    LODWORD(v36[0]) = *(v10 - 2);
    v13 = *(float *)v10;
    v36[1] = v12;
    v14 = *((float *)v10 + 1);
    v36[2] = v13;
    v15 = *((float *)v10 + 2);
    v35[0] = v14;
    v16 = *((float *)v10 + 3);
    v35[1] = v15;
    v17 = *((float *)v10 + 4);
    v35[2] = v16;
    v18 = *((float *)v10 + 5);
    v34[0] = v17;
    v19 = *((float *)v10 + 6);
    v34[1] = v18;
    v20 = v10[7];
    v34[2] = v19;
    v21 = v10[8];
    v31 = v20;
    v22 = v10[9];
    LODWORD(v30) = v11;
    v32 = v21;
    v33 = v22;
    if ( (unsigned int)sub_140035690(v37, (float *)&v31, &v38, a3, a4, v30, v36, v35, v34) )
    {
      v23 = v38;
      if ( v38 < a1[7] )
      {
        v24 = v37[1];
        *a1 = v37[0];
        v25 = v37[2];
        a1[1] = v24;
        v26 = v31;
        a1[2] = v25;
        v27 = v32;
        *((_DWORD *)a1 + 3) = v26;
        v28 = v33;
        *((_DWORD *)a1 + 4) = v27;
        *((_DWORD *)a1 + 5) = v28;
        a1[7] = v23;
      }
    }
    ++v5;
    v10 += 12;
  }
  while ( v5 < *a2 );
  return a1[7] < 65536.0;
}
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38

// 14003399E: variable 'v46' is possibly undefined

//----- (0000000140033B50) ----------------------------------------------------
__int64            sub_140033B50(float *a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-30B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140033B50[6272];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_140033B50 + 0)) /* [rsp+10h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_140033B50 + 6144)) /* [rsp+1810h] */
#define v12 (*(float * (*))(void *)(sr_frame_140033B50 + 6240)) /* [rsp+1870h] */
#define v13 (*(float * (*))(void *)(sr_frame_140033B50 + 6248)) /* [rsp+1878h] */
#define v14 (*(int (*))(void *)(sr_frame_140033B50 + 6256)) /* [rsp+1880h] */

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  return sub_140033BE0(a1, a2, (__int64)v10, v4, v6, v14); /* 0x140033BB6: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14


//----- (0000000140033BE0) ----------------------------------------------------
_BOOL8 sub_140033BE0(float *hit, __int64 mesh, __int64 placed, float *from, float *to, int radius_bits)
{
  extern int collision_capsule_placed_mesh(void *, const void *, const float (*)[3], const float *, const float *, float);
  float radius;
  __builtin_memcpy(&radius, &radius_bits, 4);
  return collision_capsule_placed_mesh(hit, (const void *)(uintptr_t)mesh,
                                       (const float (*)[3])(uintptr_t)placed, from, to, radius);
}

//----- (0000000140034370) ----------------------------------------------------
_BOOL8            sub_140034370(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  int *v10; // r15
  int *v11; // r12
  float v13; // xmm7_4
  signed int v16; // esi
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  __int64 v30; // rax
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // eax
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  unsigned sr_swept_cell_hit_normal[3];
  unsigned sr_swept_cell_hit_point[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034370[304];
#define v49 (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_140034370 + 0)) /* [rsp+30h] */
#define v57 (*(float (*)[4])(void *)(sr_frame_140034370 + 72)) /* [rsp+78h] */
#define v58 (*(float (*)[4])(void *)(sr_frame_140034370 + 88)) /* [rsp+88h] */
#define v59 (*(float (*)[4])(void *)(sr_frame_140034370 + 104)) /* [rsp+98h] */
#define v60 (*(float (*)[24])(void *)(sr_frame_140034370 + 120)) /* [rsp+A8h] */
#define v61 (*(float * (*))(void *)(sr_frame_140034370 + 288)) /* [rsp+150h] */

  v61 = a4;
  v9 = a8;
  v10 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = *(float *)&a9;
  v16 = 0;
  *a3 = 65536.0;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  do
  {
    if ( ((((64 << v16) & v9) != 0) & _bittest(&v9, v16)) != 0 )
    {
      v20 = 3LL * *(v10 - 1);
      v21 = *v10;
      v22 = (float)(v18 + *(float *)&dword_1402B34F0[3 * *(v10 - 1) + 1]) * v13;
      v58[0] = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) * v13;
      v23 = v19 + *(float *)&dword_1402B34F0[v20 + 2];
      v24 = 3 * v21;
      v58[1] = v22;
      v25 = v10[1];
      v26 = (float)(v18 + *(float *)&dword_1402B34F0[v24 + 1]) * v13;
      v58[2] = v23 * v13;
      v27 = v17 + *(float *)&dword_1402B34F0[v24];
      v59[1] = v26;
      v59[0] = v27 * v13;
      v28 = v19 + *(float *)&dword_1402B34F0[v24 + 2];
      v29 = 3 * v25;
      v30 = v10[2];
      v31 = (float)(v18 + *(float *)&dword_1402B34F0[v29 + 1]) * v13;
      v59[2] = v28 * v13;
      v32 = v17 + *(float *)&dword_1402B34F0[v29];
      v57[1] = v31;
      v57[0] = v32 * v13;
      v33 = v18 + *(float *)&dword_1402B34F0[3 * v30 + 1];
      v57[2] = (float)(v19 + *(float *)&dword_1402B34F0[v29 + 2]) * v13;
      v34 = v17 + *(float *)&dword_1402B34F0[3 * v30];
      LODWORD(v49) = a6;
      v60[1] = v33 * v13;
      v35 = *(v11 - 1);
      v60[0] = v34 * v13;
      v36 = v19 + *(float *)&dword_1402B34F0[3 * v30 + 2];
      sr_swept_cell_hit_normal[1] = v35;
      v60[2] = v36 * v13;
      sr_swept_cell_hit_normal[0] = *(v11 - 2);
      sr_swept_cell_hit_normal[2] = *v11;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, a4, a5, v49, v58, v59, v57) )
      {
        v37 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v38 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          v39 = sr_swept_cell_hit_point[2];
          a1[1] = v38;
          v40 = sr_swept_cell_hit_normal[0];
          a1[2] = v39;
          v41 = sr_swept_cell_hit_normal[1];
          *a2 = v40;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = v41;
          *(_DWORD *)a3 = v37;
        }
      }
      LODWORD(v50) = a6;
      v42 = sub_140035690((float *)&sr_swept_cell_hit_point[0], (float *)&sr_swept_cell_hit_normal[0], (float *)&a9, v61, a5, v50, v58, v57, v60);
      a4 = v61;
      if ( v42 )
      {
        v43 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v44 = sr_swept_cell_hit_point[1];
          *a1 = sr_swept_cell_hit_point[0];
          v45 = sr_swept_cell_hit_point[2];
          a1[1] = v44;
          v46 = sr_swept_cell_hit_normal[0];
          a1[2] = v45;
          v47 = sr_swept_cell_hit_normal[1];
          *a2 = v46;
          a2[2] = sr_swept_cell_hit_normal[2];
          a2[1] = v47;
          *(_DWORD *)a3 = v43;
        }
      }
    }
    ++v16;
    v10 += 4;
    v11 += 3;
  }
  while ( v16 < 6 );
  return *a3 < 65536.0;
}
#undef v49
#undef v50
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61

// 14003458D: variable 'v49' is possibly undefined
// 140034623: variable 'v50' is possibly undefined
// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3664: using guessed type int dword_1402B3664[];

//----- (00000001400346F0) ----------------------------------------------------
__int64            sub_1400346F0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  float *v10; // r15
  float *v12; // r13
  float *v14; // r14
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400346F0[16];
#define v31 (*(float (*))(void *)(sr_frame_1400346F0 + 0)) /* [rsp+40h] */
#define v32 (*(float (*))(void *)(sr_frame_1400346F0 + 4)) /* [rsp+44h] */
#define v33 (*(float (*))(void *)(sr_frame_1400346F0 + 8)) /* [rsp+48h] */

  v10 = a9;
  v12 = a8;
  v14 = a7;
  sub_14006EC40(a2, a7, a8, a9);
  v17 = a2[1];
  v18 = a2[2];
  v19 = (float)((float)((float)(a4[1] - v14[1]) * v17) + (float)((float)(*a4 - *v14) * *a2))
      + (float)((float)(a4[2] - v14[2]) * v18);
  v20 = (float)((float)((float)(a5[1] - v14[1]) * v17) + (float)((float)(*a5 - *v14) * *a2))
      + (float)((float)(a5[2] - v14[2]) * v18);
  if ( v19 >= a6 && v20 >= a6 )
    return 0;
  if ( v19 >= 0.0 )
  {
    if ( v19 > 0.0 && v20 > 0.0 )
    {
      v22 = *a2 * (float)(a6 * -1.125);
      v23 = v17 * (float)(a6 * -1.125);
      v24 = v18 * (float)(a6 * -1.125);
      if ( v19 >= v20 )
      {
        v28 = v23 + a5[1];
        v29 = v24 + a5[2];
        v31 = v22 + *a5;
        v32 = v28;
        v33 = v29;
        if ( !sub_140077FA0(a1, a2, &a6, a5, &v31, v14, v12, v10)
          && !sub_140077FA0(a1, a2, &a6, a5, &v31, v14, v10, a10) )
        {
          return 0;
        }
        v30 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(v30 * v30));
      }
      else
      {
        v25 = v23 + a4[1];
        v26 = v24 + a4[2];
        v31 = v22 + *a4;
        v32 = v25;
        v33 = v26;
        if ( !sub_140077FA0(a1, a2, &a6, a4, &v31, v14, v12, v10)
          && !sub_140077FA0(a1, a2, &a6, a4, &v31, v14, v10, a10) )
        {
          return 0;
        }
        v27 = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(v27 * v27));
      }
      return 1;
    }
  }
  else if ( v20 < 0.0 )
  {
    return 0;
  }
  if ( !sub_140077FA0(a1, a2, &a6, a4, a5, v14, v12, v10)
    && !sub_140077FA0(a1, a2, &a6, a4, a5, v14, v10, a10)
    && !sub_140077FA0(a1, a2, &a6, a5, a4, v14, v12, v10)
    && !sub_140077FA0(a1, a2, &a6, a5, a4, v14, v10, a10) )
  {
    return 0;
  }
  *a3 = 0.0;
  return 1;
}
#undef v31
#undef v32
#undef v33


//----- (0000000140034AE0) ----------------------------------------------------
_BOOL8            sub_140034AE0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        float a9)
{
  float v10; // xmm0_4
  float v14; // xmm9_4
  signed int v15; // r14d
  unsigned int v16; // r8d
  __m128i v17; // xmm15
  __int64 v18; // r12
  float v19; // xmm1_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  __int64 v29; // rax
  float v30; // xmm8_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  __int64 v33; // rax
  float v34; // xmm8_4
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  __int64 v39; // rax
  float v40; // xmm10_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm11_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  int v52; // xmm1_4
  int v53; // xmm0_4
  int v54; // xmm1_4
  int v55; // xmm0_4
  float v56; // xmm2_4
  int v57; // xmm1_4
  int v58; // xmm0_4
  int v59; // xmm1_4
  int v60; // xmm0_4
  signed int v61; // r15d
  int v62; // r12d
  __int64 v63; // r14
  float v64; // xmm4_4
  float v65; // xmm3_4
  __int64 v66; // rax
  float v67; // xmm10_4
  float v68; // xmm11_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm8_4
  float v74; // xmm4_4
  float v75; // xmm7_4
  float v76; // xmm2_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  float v79; // xmm2_4
  float v80; // xmm4_4
  float v81; // xmm10_4
  float v82; // xmm7_4
  float v83; // xmm6_4
  float v84; // xmm3_4
  float v85; // xmm8_4
  float v86; // xmm5_4
  float v87; // xmm0_4
  float v88; // xmm11_4
  float v89; // xmm10_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  int v92; // xmm1_4
  int v93; // xmm0_4
  int v94; // xmm1_4
  int v95; // xmm0_4
  float v96; // xmm2_4
  int v97; // xmm1_4
  int v98; // xmm0_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  __int64 v101; // rax
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm5_4
  float v105; // xmm1_4
  float v106; // xmm6_4
  float v107; // xmm3_4
  float v108; // xmm8_4
  float v109; // xmm4_4
  float v110; // xmm7_4
  float v111; // xmm2_4
  float v112; // xmm5_4
  float v113; // xmm0_4
  float v114; // xmm2_4
  float v115; // xmm4_4
  float v116; // xmm10_4
  float v117; // xmm7_4
  float v118; // xmm6_4
  float v119; // xmm3_4
  float v120; // xmm8_4
  float v121; // xmm5_4
  float v122; // xmm0_4
  float v123; // xmm11_4
  float v124; // xmm10_4
  float v125; // xmm0_4
  float v126; // xmm2_4
  int v127; // xmm1_4
  int v128; // xmm0_4
  int v129; // xmm1_4
  int v130; // xmm0_4
  int v131; // eax
  float v132; // xmm2_4
  int v133; // xmm1_4
  int v134; // xmm0_4
  int v135; // xmm1_4
  int v136; // xmm0_4
  _Alignas(8) unsigned sr_swept_mesh_hit_normal[3];
  unsigned sr_swept_mesh_hit_point[3];
  float sr_swept_mesh_vertex_c[3];
  float sr_swept_mesh_vertex_a[3];
  float sr_swept_mesh_vertex_b[3];
  float sr_swept_mesh_vertex_d[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140034AE0[432];
#define v138 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v141 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v142 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 0)) /* [rsp+28h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 40)) /* [rsp+50h] */
#define v161 (*(unsigned int (*))(void *)(sr_frame_140034AE0 + 376)) /* [rsp+1A0h] */
#define v162 (*(__int64 (*))(void *)(sr_frame_140034AE0 + 408)) /* [rsp+1C0h] */
#define v163 (*(float (*))(void *)(sr_frame_140034AE0 + 416)) /* [rsp+1C8h] */

  v10 = 65536.0;
  v14 = a9;
  v15 = 0;
  *a3 = 65536.0;
  v16 = HIWORD(a8);
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a7 + 4));
  v18 = 58LL * (unsigned __int16)a8;
  v19 = (float)*(int *)(a7 + 8);
  v161 = HIWORD(a8);
  v20 = (float)*(int *)a7;
  v162 = v18 * 4;
  v163 = v19;
  v21 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v17), f32)[0];
  if ( (int)dword_140404A6C[v18 + 20074623] > 0 )
  {
    v22 = 0;
    v143 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v18 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v18 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v19 + *(float *)(v23 + 4 * v25 + 8);
      v27 = v20 + *(float *)(v23 + 4 * v25);
      v28 = (float)(v21 + *(float *)(v23 + 4 * v25 + 4)) * v14;
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      sr_swept_mesh_vertex_a[2] = v26 * v14;
      v30 = v20 + *(float *)(v23 + 4 * v29);
      v31 = v21 + *(float *)(v23 + 4 * v29 + 4);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      sr_swept_mesh_vertex_a[0] = v27 * v14;
      v33 = 3 * (int)v29;
      sr_swept_mesh_vertex_b[0] = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v27 * v14);
      v35 = v19 + *(float *)(v23 + 4 * v33 + 8);
      v36 = v20 + *(float *)(v23 + 4 * v33);
      v37 = v21 + *(float *)(v23 + 4 * v33 + 4);
      LODWORD(v33) = *(_DWORD *)(v22 + v24 + 12);
      sr_swept_mesh_vertex_b[1] = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v39 = 3 * (int)v33;
      sr_swept_mesh_vertex_c[2] = v35 * v14;
      v40 = (float)(v35 * v14) - (float)(v26 * v14);
      v41 = v20 + *(float *)(v23 + 4 * v39);
      v42 = v21 + *(float *)(v23 + 4 * v39 + 4);
      sr_swept_mesh_vertex_c[1] = v37 * v14;
      v43 = (float)(v37 * v14) - v28;
      sr_swept_mesh_vertex_c[0] = v36 * v14;
      v44 = (float)(v36 * v14) - (float)(v27 * v14);
      sr_swept_mesh_vertex_b[2] = v32 * v14;
      v45 = (float)(v32 * v14) - (float)(v26 * v14);
      sr_swept_mesh_vertex_d[0] = v41 * v14;
      v46 = (float)(v163 + *(float *)(v23 + 4 * v39 + 8)) * v14;
      sr_swept_mesh_vertex_a[1] = v28;
      sr_swept_mesh_vertex_d[1] = v42 * v14;
      sr_swept_mesh_vertex_d[2] = v46;
      v47 = (float)(v43 * v45) - (float)(v40 * v38);
      v48 = (float)(v40 * v34) - (float)(v44 * v45);
      v49 = (float)(v44 * v38) - (float)(v43 * v34);
      v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
      if ( v50 == 0.0 )
      {
        (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
      }
      else
      {
        *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v50) * v47;
        *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v50) * v48;
        (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v50) * v49;
      }
      LODWORD(v138) = a6;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v138, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
      {
        v51 = a9;
        if ( a9 < *a3 )
        {
          v52 = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          v53 = sr_swept_mesh_hit_point[2];
          a1[1] = v52;
          v54 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = v53;
          v55 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = v54;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = v55;
          *a3 = v51;
          dword_140404A6C[73007010] = v15;
        }
      }
      LODWORD(v139) = a6;
      if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v139, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
      {
        v56 = a9;
        if ( a9 < *a3 )
        {
          v57 = sr_swept_mesh_hit_point[1];
          *a1 = sr_swept_mesh_hit_point[0];
          v58 = sr_swept_mesh_hit_point[2];
          a1[1] = v57;
          v59 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
          a1[2] = v58;
          v60 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
          *(_DWORD *)a2 = v59;
          *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
          *(_DWORD *)(a2 + 4) = v60;
          *a3 = v56;
          dword_140404A6C[73007010] = v15;
        }
      }
      v19 = v163;
      v22 = v143 + 16;
      ++v15;
      v143 += 16;
    }
    while ( v15 < (int)dword_140404A6C[v18 + 20074623] );
    v10 = *a3;
    LOWORD(v16) = v161;
  }
  v61 = 0;
  if ( (int)dword_140404A6C[v18 + 20074651] > 0 )
  {
    v62 = 1;
    v63 = 0;
    do
    {
      if ( ((unsigned __int16)v16 & (unsigned __int16)v62 & 0x3FF) == 0 )
      {
        v64 = v19;
        v65 = v19;
        v66 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v162);
        v67 = v19 + *(float *)(v63 + v66 + 32);
        v68 = v20 + *(float *)(v63 + v66 + 24);
        v69 = v21 + *(float *)(v63 + v66 + 4);
        v70 = v21 + *(float *)(v63 + v66 + 40);
        v71 = v21 + *(float *)(v63 + v66 + 16);
        v72 = v65 + *(float *)(v63 + v66 + 20);
        v73 = v20 + *(float *)(v63 + v66 + 12);
        v74 = v64 + *(float *)(v63 + v66 + 8);
        v75 = v20 + *(float *)(v63 + v66);
        v76 = (float)(v21 + *(float *)(v63 + v66 + 28)) * v14;
        sr_swept_mesh_vertex_d[0] = (float)(v20 + *(float *)(v63 + v66 + 36)) * v14;
        v77 = v69 * v14;
        v78 = (float)(v163 + *(float *)(v63 + v66 + 44)) * v14;
        sr_swept_mesh_vertex_c[1] = v76;
        v79 = v76 - v77;
        sr_swept_mesh_vertex_d[2] = v78;
        v80 = v74 * v14;
        sr_swept_mesh_vertex_c[2] = v67 * v14;
        v81 = (float)(v67 * v14) - v80;
        v82 = v75 * v14;
        sr_swept_mesh_vertex_a[1] = v77;
        sr_swept_mesh_vertex_c[0] = v68 * v14;
        sr_swept_mesh_vertex_d[1] = v70 * v14;
        sr_swept_mesh_vertex_b[1] = v71 * v14;
        v83 = (float)(v71 * v14) - v77;
        sr_swept_mesh_vertex_b[2] = v72 * v14;
        v84 = (float)(v72 * v14) - v80;
        sr_swept_mesh_vertex_b[0] = v73 * v14;
        v85 = (float)(v73 * v14) - v82;
        sr_swept_mesh_vertex_a[0] = v82;
        sr_swept_mesh_vertex_a[2] = v80;
        v86 = (float)(v79 * v84) - (float)(v81 * v83);
        v87 = (float)(v68 * v14) - v82;
        v88 = (float)(v87 * v83) - (float)(v79 * v85);
        v89 = (float)(v81 * v85) - (float)(v87 * v84);
        v90 = fsqrt((float)((float)(v89 * v89) + (float)(v86 * v86)) + (float)(v88 * v88));
        if ( v90 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v90) * v86;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v90) * v89;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v90) * v88;
        }
        LODWORD(v138) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v138, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          v91 = a9;
          if ( a9 < *a3 )
          {
            v92 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v93 = sr_swept_mesh_hit_point[2];
            a1[1] = v92;
            v94 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v93;
            v95 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v94;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v95;
            *a3 = v91;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v140) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v140, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]) )
        {
          v96 = a9;
          if ( a9 < *a3 )
          {
            v97 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v98 = sr_swept_mesh_hit_point[2];
            a1[1] = v97;
            v99 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v98;
            v100 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v99;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v100;
            *a3 = v96;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        v101 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v162);
        v102 = v163 + *(float *)(v63 + v101 + 20);
        v103 = v20 + *(float *)(v63 + v101 + 12);
        v104 = v21 + *(float *)(v63 + v101 + 40);
        v105 = v21 + *(float *)(v63 + v101 + 4);
        v106 = v21 + *(float *)(v63 + v101 + 28);
        v107 = v163 + *(float *)(v63 + v101 + 32);
        v108 = v20 + *(float *)(v63 + v101 + 24);
        v109 = v163 + *(float *)(v63 + v101 + 44);
        v110 = v20 + *(float *)(v63 + v101 + 36);
        v111 = (float)(v21 + *(float *)(v63 + v101 + 16)) * v14;
        sr_swept_mesh_vertex_d[0] = (float)(v20 + *(float *)(v63 + v101)) * v14;
        v112 = v104 * v14;
        v113 = (float)(v163 + *(float *)(v63 + v101 + 8)) * v14;
        sr_swept_mesh_vertex_c[1] = v111;
        v114 = v111 - v112;
        sr_swept_mesh_vertex_d[2] = v113;
        v115 = v109 * v14;
        sr_swept_mesh_vertex_c[2] = v102 * v14;
        v116 = (float)(v102 * v14) - v115;
        v117 = v110 * v14;
        sr_swept_mesh_vertex_a[1] = v112;
        sr_swept_mesh_vertex_c[0] = v103 * v14;
        sr_swept_mesh_vertex_d[1] = v105 * v14;
        sr_swept_mesh_vertex_b[1] = v106 * v14;
        v118 = (float)(v106 * v14) - v112;
        sr_swept_mesh_vertex_b[2] = v107 * v14;
        v119 = (float)(v107 * v14) - v115;
        sr_swept_mesh_vertex_b[0] = v108 * v14;
        v120 = (float)(v108 * v14) - v117;
        sr_swept_mesh_vertex_a[0] = v117;
        sr_swept_mesh_vertex_a[2] = v115;
        v121 = (float)(v114 * v119) - (float)(v116 * v118);
        v122 = (float)(v103 * v14) - v117;
        v123 = (float)(v122 * v118) - (float)(v114 * v120);
        v124 = (float)(v116 * v120) - (float)(v122 * v119);
        v125 = fsqrt((float)((float)(v124 * v124) + (float)(v121 * v121)) + (float)(v123 * v123));
        if ( v125 == 0.0 )
        {
          (*(int64_t *)(void *)sr_swept_mesh_hit_normal) = 0;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = 0.0;
        }
        else
        {
          *(float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) = (float)(1.0 / v125) * v121;
          *((float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal) + 1) = (float)(1.0 / v125) * v124;
          (*(float *)(void *)(sr_swept_mesh_hit_normal+2)) = (float)(1.0 / v125) * v123;
        }
        LODWORD(v141) = a6;
        if ( (unsigned int)sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v141, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_b[0], &sr_swept_mesh_vertex_c[0]) )
        {
          v126 = a9;
          if ( a9 < *a3 )
          {
            v127 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v128 = sr_swept_mesh_hit_point[2];
            a1[1] = v127;
            v129 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v128;
            v130 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v129;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v130;
            *a3 = v126;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
        LODWORD(v142) = a6;
        v131 = sub_140035690((float *)&sr_swept_mesh_hit_point[0], (float *)&(*(int64_t *)(void *)sr_swept_mesh_hit_normal), &a9, a4, a5, v142, &sr_swept_mesh_vertex_a[0], &sr_swept_mesh_vertex_c[0], &sr_swept_mesh_vertex_d[0]);
        LOWORD(v16) = v161;
        if ( v131 )
        {
          v132 = a9;
          if ( a9 < *a3 )
          {
            v133 = sr_swept_mesh_hit_point[1];
            *a1 = sr_swept_mesh_hit_point[0];
            v134 = sr_swept_mesh_hit_point[2];
            a1[1] = v133;
            v135 = (*(int64_t *)(void *)sr_swept_mesh_hit_normal);
            a1[2] = v134;
            v136 = HIDWORD((*(int64_t *)(void *)sr_swept_mesh_hit_normal));
            *(_DWORD *)a2 = v135;
            *(float *)(a2 + 8) = (*(float *)(void *)(sr_swept_mesh_hit_normal+2));
            *(_DWORD *)(a2 + 4) = v136;
            *a3 = v132;
            dword_140404A6C[73007010] = v61 | 0x10000;
          }
        }
      }
      ++v61;
      v19 = v163;
      v63 += 48;
      v62 = __ROL4__(v62, 1);
    }
    while ( v61 < *(int *)((char *)&dword_140404A6C[20074651] + v162) );
    v10 = *a3;
  }
  return v10 < 65536.0;
}
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v161
#undef v162
#undef v163


//----- (0000000140035B70) ----------------------------------------------------
__int64            sub_140035B70(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  extern int collision_sphere_triangle_face(float *point, float *normal, float *distance, const float *from,
                                            const float *to, float radius, const float *a, const float *b,
                                            const float *c);
  /* src/engine/collision.c */
  return collision_sphere_triangle_face(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

//----- (000000014003D830) ----------------------------------------------------
_BOOL8            sub_14003D830(float *a1, int *a2, float *a3, float *a4, float a5)
{
  extern int collision_wheel_triangles(void *hit, const void *list, const float centre[3], const float axle[3],
                                       float radius);
  return collision_wheel_triangles(a1, a2, a3, a4, a5);
}

//----- (000000014003DAE0) ----------------------------------------------------
_BOOL8            sub_14003DAE0(float *a1, __int64 a2, float *a3, float *a4, float a5)
{
  extern int collision_wheel_level_mesh(void *hit, const void *mesh, const float centre[3], const float axle[3],
                                        float radius);
  return collision_wheel_level_mesh(a1, (const void *)a2, a3, a4, a5);
}

//----- (000000014003E100) ----------------------------------------------------
_BOOL8            sub_14003E100(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        float *a4,
        float *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  extern int collision_wheel_cube(float point[3], float normal[3], float *distance, const float centre[3],
                                  const float axle[3], float radius, const int voxel[3], unsigned int faces,
                                  float scale);
  /* a6 and a9 arrive as float bits in their stack slots. */
  return collision_wheel_cube((float *)(void *)a1, (float *)(void *)a2, a3, a4, a5, *(float *)&a6, a7,
                              (unsigned int)a8, *(float *)&a9);
}

//----- (000000014003F0B0) ----------------------------------------------------
_BOOL8            sub_14003F0B0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  extern int collision_wheel_triangle(float point[3], float normal[3], float *distance, const float centre[3],
                                      const float axle[3], float radius, const float a[3], const float b[3],
                                      const float c[3]);
  return collision_wheel_triangle(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

//----- (000000014003FB90) ----------------------------------------------------
__int64            sub_14003FB90(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 result; // rax

  v8 = a1;
  v9 = 2310LL * a1;
  v10 = 770LL * a1;
  v11 = (int)dword_140404A6C[v9 + 432531270];
  *(float *)&v12 = (float)((float)(*(float *)dword_1402B34F8 - 0.5) * a7) + a4;
  *(float *)&dword_140404A6C[3 * v10 + 432531271 + 3 * v11] = (float)((float)(*(float *)dword_1402B34F0 - 0.5) * a5)
                                                            + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)dword_1402B34F4 - 0.5) * a6)
                                                                                             + a3;
  v13 = *(float *)&dword_1402B34FC - 0.5;
  dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v12;
  v14 = (int)dword_140404A6C[v9 + 432531270];
  v15 = *(float *)&dword_1402B3500 - 0.5;
  dword_140404A6C[v9 + 432531270] = v14 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v14] = (float)(v13 * a5) + a2;
  v16 = *(float *)&dword_1402B3504 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v15 * a6) + a3;
  v17 = (float)(*(float *)&dword_1402B350C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v16 * a7) + a4;
  v18 = (int)dword_140404A6C[v9 + 432531270];
  v19 = *(float *)&dword_1402B3508 - 0.5;
  dword_140404A6C[v9 + 432531270] = v18 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v18] = (float)(v19 * a5) + a2;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v17 + a3;
  *(float *)&v20 = (float)((float)(*(float *)&dword_1402B3518 - 0.5) * a6) + a3;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)((float)(*(float *)&dword_1402B3510 - 0.5) * a7)
                                                                                             + a4;
  v21 = (int)dword_140404A6C[v9 + 432531270];
  v22 = *(float *)&dword_1402B3514 - 0.5;
  dword_140404A6C[v9 + 432531270] = v21 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v21] = (float)(v22 * a5) + a2;
  v23 = *(float *)&dword_1402B351C - 0.5;
  dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v20;
  v24 = (float)(*(float *)&dword_1402B3524 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v23 * a7) + a4;
  v25 = (int)dword_140404A6C[v9 + 432531270];
  v26 = *(float *)&dword_1402B3520 - 0.5;
  dword_140404A6C[v9 + 432531270] = v25 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v25] = (float)(v26 * a5) + a2;
  v27 = *(float *)&dword_1402B3528 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v24 + a3;
  v28 = (float)(*(float *)&dword_1402B3530 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v27 * a7) + a4;
  v29 = (int)dword_140404A6C[v9 + 432531270];
  v30 = *(float *)&dword_1402B352C - 0.5;
  dword_140404A6C[v9 + 432531270] = v29 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v29] = (float)(v30 * a5) + a2;
  v31 = *(float *)&dword_1402B3534 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v28 + a3;
  v8 *= 385;
  v32 = (float)(*(float *)&dword_1402B353C - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v31 * a7) + a4;
  v33 = (int)dword_140404A6C[v9 + 432531270];
  v34 = *(float *)&dword_1402B3538 - 0.5;
  dword_140404A6C[v9 + 432531270] = v33 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v33] = (float)(v34 * a5) + a2;
  v35 = *(float *)&dword_1402B3540 - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v32 + a3;
  v36 = (float)(*(float *)&dword_1402B3548 - 0.5) * a6;
  *(float *)&dword_140404A6C[3 * v10 + 432531273 + 3 * (int)dword_140404A6C[v9 + 432531270]] = (float)(v35 * a7) + a4;
  v37 = (int)dword_140404A6C[v9 + 432531270];
  v38 = *(float *)&dword_1402B3544 - 0.5;
  dword_140404A6C[v9 + 432531270] = v37 + 1;
  *(float *)&dword_140404A6C[3 * v10 + 432531274 + 3 * v37] = (float)(v38 * a5) + a2;
  v39 = *(float *)&dword_1402B354C - 0.5;
  *(float *)&dword_140404A6C[3 * v10 + 432531272 + 3 * (int)dword_140404A6C[v9 + 432531270]] = v36 + a3;
  v40 = v10 + (int)dword_140404A6C[v9 + 432531270];
  LODWORD(v10) = v11 + dword_1402B3660[0];
  *(float *)&dword_140404A6C[3 * v40 + 432531273] = (float)(v39 * a7) + a4;
  v41 = (int)dword_140404A6C[v9 + 432532039];
  ++dword_140404A6C[v9 + 432531270];
  dword_140404A6C[6 * v8 + 432532041 + 6 * v41] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3664[0];
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3668[0];
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B366C[0];
  LODWORD(v10) = v11 + dword_1402B3670;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v42 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v42 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v42] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3674;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3678;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B367C;
  LODWORD(v10) = v11 + dword_1402B3680;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v43 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v43 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v43] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3684;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3688;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B368C;
  LODWORD(v10) = v11 + dword_1402B3690;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v44 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v44 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v44] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3694;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B3698;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B369C;
  LODWORD(v10) = v11 + dword_1402B36A0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v45 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v45 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v45] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36A8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36AC;
  LODWORD(v10) = v11 + dword_1402B36B0;
  dword_140404A6C[6 * v8 + 432532040 + 6 * (int)dword_140404A6C[v9 + 432532039]] = 4;
  v46 = (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[v9 + 432532039] = v46 + 1;
  dword_140404A6C[6 * v8 + 432532047 + 6 * v46] = v10;
  dword_140404A6C[6 * v8 + 432532042 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B4;
  dword_140404A6C[6 * v8 + 432532043 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36B8;
  dword_140404A6C[6 * v8 + 432532044 + 6 * (int)dword_140404A6C[v9 + 432532039]] = v11 + dword_1402B36BC;
  result = v8 + (int)dword_140404A6C[v9 + 432532039];
  dword_140404A6C[6 * result + 432532040] = 4;
  ++dword_140404A6C[v9 + 432532039];
  return result;
}
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
  extern int collision_mesh_contact(int body_a, int body_b, const void *a, const void *b, const float *position_a,
                                    const float *rotation_a, const float *position_b, const float *rotation_b,
                                    unsigned int flags);
  /* src/engine/collision_mesh.c; only bit 0 of the flag is read. */
  return collision_mesh_contact(a1, a2, (const void *)(uintptr_t)a3, (const void *)(uintptr_t)a4, a5, a6, a7, a8,
                                (unsigned char)a9);
}

//----- (000000014004A130) ----------------------------------------------------
__int64            sub_14004A130(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_mesh_point_sweep(void *hit, const void *mesh, const float *position, const float *rotation,
                                        const float *from, const float *to);
  /* src/engine/collision_mesh.c. Hex-Rays had dropped the last two arguments (the sweep's ends, read from the stack)
     and passed two unset locals instead; no code of the original calls this routine. */
  return collision_mesh_point_sweep(a1, (const void *)a2, a3, a4, a5, a6);
}


//----- (000000014004A1D0) ----------------------------------------------------
_BOOL8            sub_14004A1D0(float *a1, __int64 a2, __int64 a3, __int64 a4, float *a5, float *a6)
{
  extern int collision_mesh_point_faces(void *hit, const void *mesh, const float (*points)[3], const float (*normals)[3],
                                        const float *from, const float *to);
  /* src/engine/collision_mesh.c */
  return collision_mesh_point_faces(a1, (const void *)a2, (const float (*)[3])a3, (const float (*)[3])a4, a5, a6);
}


//----- (000000014004A480) ----------------------------------------------------
__int64            sub_14004A480(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  extern void collision_mesh_transform(float (*points)[3], float (*normals)[3], const void *mesh, const float *position,
                                       const float *r);
  /* src/engine/collision_mesh.c; the original returns a leftover pointer; its callers (0x14004A130 and
     0x140048DA0, now in src/engine) do not read it. */
  collision_mesh_transform((float (*)[3])a1, (float (*)[3])a2, (const void *)a3, a4, a5);
  return 0;
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


//----- (00000001400779F0) ----------------------------------------------------
__int64            sub_1400779F0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_line_plane(float *point, const float *normal, float *t, const float *from, const float *to,
                                  const float *plane_point);
  /* src/engine/collision.c */
  return collision_line_plane(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140077B30) ----------------------------------------------------
__int64            sub_140077B30(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  extern int collision_edge_plane(float point[3], const float normal[3], float *t, const float a[3], const float b[3],
                                  const float on_plane[3]);
  return collision_edge_plane(a1, a2, a3, a4, a5, a6);
}

//----- (0000000140077C80) ----------------------------------------------------
_BOOL8            sub_140077C80(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm14_4
  float v18; // xmm15_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4

  if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
    return 0;
  v11 = a6[1];
  v12 = a6[2];
  v13 = *a6;
  v14 = a1[1];
  v15 = a1[2];
  v16 = *a1;
  v17 = a2[1];
  v18 = *a2;
  if ( (float)((float)((float)((float)((float)((float)(v14 - v11) * (float)(a7[2] - v12))
                                     - (float)((float)(v15 - v12) * (float)(a7[1] - v11)))
                             * *a2)
                     + (float)((float)((float)((float)(v15 - v12) * (float)(*a7 - v13))
                                     - (float)((float)(*a1 - v13) * (float)(a7[2] - v12)))
                             * v17))
             + (float)((float)((float)((float)(*a1 - v13) * (float)(a7[1] - v11))
                             - (float)((float)(v14 - v11) * (float)(*a7 - v13)))
                     * a2[2])) < 0.0 )
    return 0;
  v19 = a8[1] - a7[1];
  v20 = a8[2] - a7[2];
  if ( (float)((float)((float)((float)((float)((float)(v14 - a7[1]) * v20) - (float)((float)(v15 - a7[2]) * v19)) * v18)
                     + (float)((float)((float)((float)(v15 - a7[2]) * (float)(*a8 - *a7))
                                     - (float)((float)(v16 - *a7) * v20))
                             * v17))
             + (float)((float)((float)((float)(v16 - *a7) * v19) - (float)((float)(v14 - a7[1]) * (float)(*a8 - *a7)))
                     * a2[2])) < 0.0 )
    return 0;
  v21 = v14 - a8[1];
  v22 = v16 - *a8;
  v23 = a9[2] - a8[2];
  v24 = a9[1] - a8[1];
  v25 = (float)(v21 * v23) - (float)((float)(v15 - a8[2]) * v24);
  v26 = v22 * v23;
  v27 = a2[2];
  return (float)((float)((float)(v25 * v18)
                       + (float)((float)((float)((float)(v15 - a8[2]) * (float)(*a9 - *a8)) - v26) * v17))
               + (float)((float)((float)(v22 * v24) - (float)(v21 * (float)(*a9 - *a8))) * v27)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v14 - a9[1]) * (float)(v12 - a9[2]))
                                       - (float)((float)(v15 - a9[2]) * (float)(v11 - a9[1])))
                               * v18)
                       + (float)((float)((float)((float)(v15 - a9[2]) * (float)(v13 - *a9))
                                       - (float)((float)(v16 - *a9) * (float)(v12 - a9[2])))
                               * v17))
               + (float)((float)((float)((float)(v16 - *a9) * (float)(v11 - a9[1]))
                               - (float)((float)(v14 - a9[1]) * (float)(v13 - *a9)))
                       * v27)) >= 0.0;
}


//----- (0000000140078230) ----------------------------------------------------
_BOOL8            sub_140078230(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm14_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm15_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm2_4

  if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
    return 0;
  v10 = a6[1];
  v11 = a6[2];
  v12 = *a6;
  v13 = a1[1];
  v14 = a1[2];
  v15 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v13 - v10) * (float)(a7[2] - v11))
                                     - (float)((float)(v14 - v11) * (float)(a7[1] - v10)))
                             * *a2)
                     + (float)((float)((float)((float)(v14 - v11) * (float)(*a7 - v12))
                                     - (float)((float)(*a1 - v12) * (float)(a7[2] - v11)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v12) * (float)(a7[1] - v10))
                             - (float)((float)(v13 - v10) * (float)(*a7 - v12)))
                     * a2[2])) < 0.0 )
    return 0;
  v16 = v13 - a7[1];
  v17 = a8[2] - a7[2];
  v19 = v14 - a7[2];
  v20 = *a8 - *a7;
  v22 = a8[1] - a7[1];
  v23 = v19 * v20;
  v24 = (float)(v16 * v17) - (float)(v19 * v22);
  v25 = v15 - *a7;
  v26 = v25 * v22;
  v27 = a2[2];
  v28 = v25 * v17;
  v29 = a2[1];
  if ( (float)((float)((float)(v24 * *a2) + (float)((float)(v23 - v28) * v29))
             + (float)((float)(v26 - (float)(v16 * v20)) * v27)) < 0.0 )
    return 0;
  v21 = a8[1];
  v18 = *a8;
  return (float)((float)((float)((float)((float)((float)(v13 - v21) * (float)(v11 - a8[2]))
                                       - (float)((float)(v14 - a8[2]) * (float)(v10 - v21)))
                               * *a2)
                       + (float)((float)((float)((float)(v14 - a8[2]) * (float)(v12 - v18))
                                       - (float)((float)(v15 - v18) * (float)(v11 - a8[2])))
                               * v29))
               + (float)((float)((float)((float)(v15 - v18) * (float)(v10 - v21))
                               - (float)((float)(v13 - v21) * (float)(v12 - v18)))
                       * v27)) >= 0.0;
}


//----- (000000014008CEB0) ----------------------------------------------------
__int64            sub_14008CEB0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  extern int collision_edge_edge(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                 const float *b0, const float *b1);
  /* src/engine/collision_mesh.c */
  return collision_edge_edge(a1, a2, a3, a4, a5, a6, a7);
}


//----- (00000001400D6890) ----------------------------------------------------
_BOOL8            sub_1400D6890(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  extern int collision_segment_segment(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                                       const float *b0, const float *b1, float radius);
  /* src/engine/collision.c */
  return collision_segment_segment(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (00000001400D8790) ----------------------------------------------------
_BOOL8            sub_1400D8790(float *a1, __int64 a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  int *v7; // rdi
  int *v11; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  __int64 v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rcx
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  _BOOL8 result; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8790[80];
#define v33 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 0)) /* [rsp+40h] */
#define v34 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 16)) /* [rsp+50h] */
#define v35 (*(float (*)[4])(void *)(sr_frame_1400D8790 + 32)) /* [rsp+60h] */
#define v36 (*(float (*)[8])(void *)(sr_frame_1400D8790 + 48)) /* [rsp+70h] */

  v7 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = 0;
  while ( 1 )
  {
    v14 = 3LL * *(v7 - 1);
    v15 = *a6;
    v16 = a6[1];
    v17 = a6[2];
    v18 = *a7;
    v19 = a7[1];
    v20 = a7[2];
    v21 = *v7;
    v34[0] = (float)(*a7 * *(float *)&dword_1402B34F0[3 * *(v7 - 1)]) + *a6;
    v34[1] = (float)(v19 * *(float *)&dword_1402B34F0[v14 + 1]) + v16;
    v22 = v20 * *(float *)&dword_1402B34F0[v14 + 2];
    v23 = 3 * v21;
    v24 = v7[1];
    v34[2] = v22 + v17;
    v35[0] = (float)(v18 * *(float *)&dword_1402B34F0[v23]) + v15;
    v35[1] = (float)(v19 * *(float *)&dword_1402B34F0[v23 + 1]) + v16;
    v25 = v20 * *(float *)&dword_1402B34F0[v23 + 2];
    v26 = 3 * v24;
    v27 = v7[2];
    v35[2] = v25 + v17;
    v33[0] = (float)(v18 * *(float *)&dword_1402B34F0[v26]) + v15;
    v33[1] = (float)(v19 * *(float *)&dword_1402B34F0[v26 + 1]) + v16;
    v28 = v19 * *(float *)&dword_1402B34F0[3 * v27 + 1];
    v29 = (float)(v20 * *(float *)&dword_1402B34F0[v26 + 2]) + v17;
    v30 = v20 * *(float *)&dword_1402B34F0[3 * v27 + 2];
    v31 = (float)(v18 * *(float *)&dword_1402B34F0[3 * v27]) + v15;
    *(_DWORD *)a2 = *(v11 - 2);
    *(_DWORD *)(a2 + 4) = *(v11 - 1);
    *(_DWORD *)(a2 + 8) = *v11;
    v33[2] = v29;
    v36[0] = v31;
    v36[1] = v28 + v16;
    v36[2] = v30 + v17;
    if ( sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v35, v33) )
      break;
    result = sub_140077FA0(a1, (float *)a2, a3, a4, a5, v34, v33, v36);
    if ( result )
      break;
    ++v13;
    v7 += 4;
    v11 += 3;
    if ( v13 >= 6 )
      return result;
  }
  return 1;
}
#undef v33
#undef v34
#undef v35
#undef v36

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3664: using guessed type int dword_1402B3664[];

//----- (00000001400D89E0) ----------------------------------------------------
_BOOL8            sub_1400D89E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D89E0[48];
#define v21 (*(float (*))(void *)(sr_frame_1400D89E0 + 0)) /* [rsp+44h] */
#define v22 (*(float (*)[4])(void *)(sr_frame_1400D89E0 + 4)) /* [rsp+48h] */
#define v23 (*(float (*)[6])(void *)(sr_frame_1400D89E0 + 20)) /* [rsp+58h] */

  if ( sub_1400D6890(v22, v23, &v21, a4, a5, a6, a7, a8) )
  {
    v12 = v22[0];
    v13 = v22[2];
    a1[1] = v22[1];
    v14 = v23[0];
    a1[2] = v13;
    v15 = v23[1];
    *a1 = v12;
    *a2 = v14 - v12;
    v16 = v23[2];
    a2[1] = v15 - a1[1];
    a2[2] = v16 - a1[2];
    sub_14007A240((__int64)a2, a2);
    v17 = a5[1] - a4[1];
    v18 = a5[2] - a4[2];
    v19 = v21;
    *a3 = (float)((float)((float)((float)(*a1 - *a4) * (float)(*a5 - *a4)) + (float)((float)(a1[1] - a4[1]) * v17))
                + (float)((float)(a1[2] - a4[2]) * v18))
        / (float)((float)((float)(v17 * v17) + (float)((float)(*a5 - *a4) * (float)(*a5 - *a4))) + (float)(v18 * v18));
  }
  else
  {
    v19 = 65536.0;
  }
  return v19 < 65536.0;
}
#undef v21
#undef v22
#undef v23


//----- (00000001400DA300) ----------------------------------------------------
_BOOL8            sub_1400DA300(__int64 a1, int *a2, float *a3, float *a4)
{
  /* Clean implementation: src/engine/collision_level.c, checked against the original executable
     (tools/native-compare suite segtri). */
  extern int collision_segment_triangles(float *hit, const void *triangles, const float *from, const float *to);
  return collision_segment_triangles((float *)(uintptr_t)a1, a2, a3, a4);
}

//----- (00000001400DA580) ----------------------------------------------------
_BOOL8            sub_1400DA580(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4; // r14d
  int *v9; // rsi
  float v10; // xmm1_4
  float v11; // xmm2_4
  __int64 v12; // rax
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm4_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm9_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm9_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm2_4
  int v37; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA580[256];
#define v39 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 0)) /* [rsp+48h] */
#define v40 (*(float (*))(void *)(sr_frame_1400DA580 + 8)) /* [rsp+50h] */
#define v41 (*(int (*))(void *)(sr_frame_1400DA580 + 16)) /* [rsp+58h] */
#define v42 (*(int (*))(void *)(sr_frame_1400DA580 + 20)) /* [rsp+5Ch] */
#define v43 (*(int (*))(void *)(sr_frame_1400DA580 + 24)) /* [rsp+60h] */
#define v44 (*(float (*)[2])(void *)(sr_frame_1400DA580 + 32)) /* [rsp+68h] */
#define v45 (*(float (*))(void *)(sr_frame_1400DA580 + 40)) /* [rsp+70h] */
#define v46 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 48)) /* [rsp+78h] */
#define v47 (*(float (*)[4])(void *)(sr_frame_1400DA580 + 64)) /* [rsp+88h] */
#define v48 (*(float (*)[6])(void *)(sr_frame_1400DA580 + 80)) /* [rsp+98h] */
#define v49 (*(float (*))(void *)(sr_frame_1400DA580 + 240)) /* [rsp+138h] */

  v4 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v9 = (int *)(a2 + 32784);
  do
  {
    v10 = *(float *)(a2 + 16LL * *(v9 - 1) + 12);
    v11 = *(float *)(a2 + 16LL * *(v9 - 1) + 16);
    v12 = 2LL * *v9;
    v46[0] = *(float *)(a2 + 16LL * *(v9 - 1) + 8);
    v46[2] = v11;
    v46[1] = v10;
    v13 = *(float *)(a2 + 8 * v12 + 16);
    v14 = *(float *)(a2 + 8 * v12 + 8);
    v15 = *(float *)(a2 + 8 * v12 + 12);
    v16 = 2LL * v9[1];
    v47[2] = v13;
    v17 = v13 - v11;
    v47[1] = v15;
    v18 = v15 - v10;
    v47[0] = v14;
    v19 = v14 - v46[0];
    v20 = *(float *)(a2 + 8 * v16 + 8);
    v21 = *(float *)(a2 + 8 * v16 + 12);
    v45 = *(float *)(a2 + 8 * v16 + 16);
    v44[0] = v20;
    v22 = v20 - v46[0];
    v44[1] = v21;
    v23 = v21 - v10;
    v24 = (float)(v23 * v17) - (float)((float)(v45 - v11) * v18);
    v25 = (float)((float)(v45 - v11) * v19) - (float)(v22 * v17);
    v26 = (float)(v22 * v18) - (float)(v23 * v19);
    v27 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
    if ( v27 == 0.0 )
    {
      v39[0] = 0.0;
      v28 = 0.0;
      v40 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v24 * (float)(1.0 / v27);
      v29 = v26 * (float)(1.0 / v27);
      v39[0] = v28;
      v30 = v25 * (float)(1.0 / v27);
      v40 = v29;
    }
    v39[1] = v30;
    if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v47, v44) )
    {
      v31 = v49;
      if ( v49 < *(float *)(a1 + 24) )
      {
        v32 = v42;
        *(_DWORD *)a1 = v41;
        *(_DWORD *)(a1 + 8) = v43;
        *(_DWORD *)(a1 + 4) = v32;
        *(float *)(a1 + 12) = v28;
        *(float *)(a1 + 16) = v30;
        *(float *)(a1 + 20) = v29;
        *(float *)(a1 + 24) = v31;
      }
    }
    if ( *(v9 - 2) == 4 )
    {
      v33 = 2LL * v9[2];
      v34 = *(float *)(a2 + 16LL * v9[2] + 12);
      v48[0] = *(float *)(a2 + 16LL * v9[2] + 8);
      v35 = *(float *)(a2 + 8 * v33 + 16);
      v48[1] = v34;
      v48[2] = v35;
      if ( sub_140077FA0((float *)&v41, v39, &v49, a3, a4, v46, v44, v48) )
      {
        v36 = v49;
        if ( v49 < *(float *)(a1 + 24) )
        {
          v37 = v42;
          *(_DWORD *)a1 = v41;
          *(_DWORD *)(a1 + 8) = v43;
          *(_DWORD *)(a1 + 4) = v37;
          *(float *)(a1 + 12) = v28;
          *(float *)(a1 + 16) = v30;
          *(float *)(a1 + 20) = v29;
          *(float *)(a1 + 24) = v36;
        }
      }
    }
    ++v4;
    v9 += 8;
  }
  while ( v4 < *(_DWORD *)(a2 + 32772) );
  return *(float *)(a1 + 24) < 1.0;
}
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
#undef v49


//----- (00000001400DA8E0) ----------------------------------------------------
__int64            sub_1400DA8E0(__int64 a1, __int64 a2, float *a3, float *a4)
{
  float *v4; // rdi
  float *v6; // rbx
  __int64 v9; // [rsp-20h] [rbp-30B0h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DA8E0[6256];
#define v10 (*(_BYTE (*)[6144])(void *)(sr_frame_1400DA8E0 + 0)) /* [rsp+10h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1400DA8E0 + 6144)) /* [rsp+1810h] */
#define v12 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6240)) /* [rsp+1870h] */
#define v13 (*(float * (*))(void *)(sr_frame_1400DA8E0 + 6248)) /* [rsp+1878h] */

  v4 = v12;
  v6 = v13;
  sub_14011BF40((__int64)v10, a2, a3, a4);
  return sub_1400DA960(a1, a2, (__int64)v10, v4, v6); /* 0x1400DA937: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12
#undef v13


//----- (00000001400DA960) ----------------------------------------------------
_BOOL8            sub_1400DA960(__int64 a1, __int64 a2, __int64 a3, float *a4, float *a5)
{
  /* Clean implementation: src/engine/collision_placed_sweep.c, checked against the original executable
     (tools/native-compare suite cellmesh). */
  extern int collision_segment_placed_mesh(float *hit, const void *mesh, const void *points, const float *from,
                                           const float *to);
  return collision_segment_placed_mesh((float *)(uintptr_t)a1, (const void *)(uintptr_t)a2,
                                       (const void *)(uintptr_t)a3, a4, a5);
}

//----- (00000001400DB460) ----------------------------------------------------
__int64            sub_1400DB460(_DWORD *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8; // r15d
  unsigned __int64 v9; // r12
  float *v13; // r13
  unsigned int *v14; // rsi
  float v15; // xmm8_4
  unsigned __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  unsigned __int64 v20; // rax
  float v21; // xmm5_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm13_4
  float v25; // xmm2_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm11_4
  float v31; // xmm13_4
  unsigned __int64 v32; // rax
  float v33; // xmm14_4
  float v34; // xmm15_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm9_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm3_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm7_4
  bool v45; // zf
  float v46; // xmm3_4
  float v47; // xmm10_4
  float v48; // xmm11_4
  unsigned __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  int v59; // xmm1_4
  float v60; // xmm2_4
  int v61; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DB460[368];
#define v63 (*(float (*))(void *)(sr_frame_1400DB460 + 0)) /* [rsp+40h] */
#define v64 (*(float (*)[2])(void *)(sr_frame_1400DB460 + 8)) /* [rsp+48h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DB460 + 16)) /* [rsp+50h] */
#define v66 (*(int (*))(void *)(sr_frame_1400DB460 + 24)) /* [rsp+58h] */
#define v67 (*(int (*))(void *)(sr_frame_1400DB460 + 28)) /* [rsp+5Ch] */
#define v68 (*(int (*))(void *)(sr_frame_1400DB460 + 32)) /* [rsp+60h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 40)) /* [rsp+68h] */
#define v70 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 56)) /* [rsp+78h] */
#define v71 (*(float (*)[4])(void *)(sr_frame_1400DB460 + 72)) /* [rsp+88h] */
#define v72 (*(float (*)[6])(void *)(sr_frame_1400DB460 + 88)) /* [rsp+98h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DB460 + 352)) /* [rsp+1A0h] */
#define v74 (*(float (*))(void *)(sr_frame_1400DB460 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 / 4 + 278521861] <= 0 )
    return 0;
  v13 = a5;
  v14 = &dword_140404A6C[v9 / 4 + 278521865];
  do
  {
    v15 = a6[3];
    v16 = v9 + 12LL * (int)*(v14 - 1);
    v17 = *(float *)((char *)&dword_140404A6C[278521669] + v16);
    v18 = *(float *)((char *)&dword_140404A6C[278521670] + v16);
    v19 = *(float *)((char *)&dword_140404A6C[278521671] + v16);
    v20 = v9 + 12LL * (int)*v14;
    v21 = *(float *)((char *)&dword_140404A6C[278521669] + v20);
    v22 = a6[4] * v18;
    v23 = (float)(v15 * v18) + (float)(*a6 * v17);
    v24 = a6[5] * v18;
    v25 = *(float *)((char *)&dword_140404A6C[278521670] + v20);
    v26 = v23 + (float)(a6[6] * v19);
    v27 = v22 + (float)(a6[1] * v17);
    v28 = a6[2] * v17;
    v29 = *(float *)((char *)&dword_140404A6C[278521671] + v20);
    v30 = v27 + (float)(a6[7] * v19);
    v31 = (float)(v24 + v28) + (float)(a6[8] * v19);
    v32 = v9 + 12LL * (int)v14[1];
    v33 = (float)((float)(v21 * *a6) + (float)(v25 * v15)) + (float)(v29 * a6[6]);
    v34 = (float)((float)(v21 * a6[1]) + (float)(v25 * a6[4])) + (float)(v29 * a6[7]);
    v35 = (float)((float)(v21 * a6[2]) + (float)(v25 * a6[5])) + (float)(v29 * a6[8]);
    v36 = *(float *)((char *)&dword_140404A6C[278521671] + v32);
    v73 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * *a6)
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * v15))
        + (float)(v36 * a6[6]);
    v37 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * a6[2])
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * a6[5]))
        + (float)(v36 * a6[8]);
    v63 = (float)((float)(*(float *)((char *)&dword_140404A6C[278521669] + v32) * a6[1])
                + (float)(*(float *)((char *)&dword_140404A6C[278521670] + v32) * a6[4]))
        + (float)(v36 * a6[7]);
    v38 = (float)((float)(v63 - v30) * (float)(v35 - v31)) - (float)((float)(v37 - v31) * (float)(v34 - v30));
    v39 = (float)((float)(v37 - v31) * (float)(v33 - v26)) - (float)((float)(v73 - v26) * (float)(v35 - v31));
    v40 = (float)((float)(v73 - v26) * (float)(v34 - v30)) - (float)((float)(v63 - v30) * (float)(v33 - v26));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v64[0] = 0.0;
      v42 = 0.0;
      v65 = 0.0;
      v44 = 0.0;
      v43 = 0.0;
    }
    else
    {
      v42 = v38 * (float)(1.0 / v41);
      v43 = v40 * (float)(1.0 / v41);
      v64[0] = v42;
      v44 = v39 * (float)(1.0 / v41);
      v65 = v43;
    }
    v45 = *(v14 - 2) == 4;
    v46 = *v13;
    v64[1] = v44;
    v70[0] = v26 + v46;
    v47 = v13[1];
    v71[0] = v33 + v46;
    v69[0] = v73 + v46;
    v70[1] = v30 + v47;
    v48 = v13[2];
    v71[1] = v34 + v47;
    v69[1] = v63 + v47;
    v70[2] = v31 + v48;
    v71[2] = v35 + v48;
    v69[2] = v37 + v48;
    if ( v45 )
    {
      v49 = v9 + 12LL * (int)v14[2];
      v50 = (float)(*(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[3]) + v46;
      v51 = *(float *)((char *)&dword_140404A6C[278521671] + v49);
      v52 = *(float *)((char *)&dword_140404A6C[278521669] + v49);
      v53 = (float)((float)(v51 * a6[6]) + (float)(v52 * *a6)) + v50;
      v54 = (float)(v51 * a6[8]) + (float)(v52 * a6[2]);
      v55 = *(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[5];
      v56 = (float)(v51 * a6[7]) + (float)(v52 * a6[1]);
      v57 = (float)(*(float *)((char *)&dword_140404A6C[278521670] + v49) * a6[4]) + v47;
      v72[0] = v53;
      v72[1] = v56 + v57;
      v72[2] = v54 + (float)(v55 + v48);
    }
    if ( sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v71, v69) )
    {
      v58 = v74;
      if ( v74 < *a3 )
      {
        v59 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v59;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v58;
      }
    }
    if ( *(v14 - 2) == 4 && sub_140077FA0((float *)&v66, v64, &v74, a7, a8, v70, v69, v72) )
    {
      v60 = v74;
      if ( v74 < *a3 )
      {
        v61 = v67;
        *a1 = v66;
        a1[2] = v68;
        a1[1] = v61;
        *a2 = v42;
        a2[1] = v44;
        a2[2] = v43;
        *a3 = v60;
      }
    }
    ++v8;
    v14 += 6;
  }
  while ( v8 < (int)dword_140404A6C[v9 / 4 + 278521861] );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;

//----- (00000001400DBAD0) ----------------------------------------------------
__int64            sub_1400DBAD0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  signed int v8; // ebx
  __int64 v9; // r13
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm12_4
  float v21; // xmm9_4
  float v22; // xmm13_4
  float v23; // xmm10_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  float v29; // xmm15_4
  __int64 v30; // rax
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm15_4
  __int64 v34; // rax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm15_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm15_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  float v45; // xmm9_4
  float v46; // xmm8_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm3_4
  float v50; // xmm8_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  float v53; // xmm1_4
  float v54; // xmm5_4
  float v55; // xmm0_4
  float v56; // xmm13_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DBAD0[368];
#define v61 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 0)) /* [rsp+40h] */
#define v62 (*(float (*))(void *)(sr_frame_1400DBAD0 + 16)) /* [rsp+50h] */
#define v63 (*(float (*))(void *)(sr_frame_1400DBAD0 + 20)) /* [rsp+54h] */
#define v64 (*(float (*))(void *)(sr_frame_1400DBAD0 + 24)) /* [rsp+58h] */
#define v65 (*(float (*))(void *)(sr_frame_1400DBAD0 + 28)) /* [rsp+5Ch] */
#define v66 (*(float (*))(void *)(sr_frame_1400DBAD0 + 32)) /* [rsp+60h] */
#define v67 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 40)) /* [rsp+68h] */
#define v68 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 56)) /* [rsp+78h] */
#define v69 (*(float (*)[4])(void *)(sr_frame_1400DBAD0 + 72)) /* [rsp+88h] */
#define v70 (*(float (*)[6])(void *)(sr_frame_1400DBAD0 + 88)) /* [rsp+98h] */
#define v71 (*(float (*))(void *)(sr_frame_1400DBAD0 + 352)) /* [rsp+1A0h] */
#define v72 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */
#define v73 (*(float (*))(void *)(sr_frame_1400DBAD0 + 360)) /* [rsp+1A8h] */

  v8 = 0;
  v9 = 50LL * a4;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v9 + 272248227] <= 0 )
    return 0;
  v13 = 0;
  do
  {
    v14 = *(_QWORD *)&dword_140404A6C[v9 + 272248223];
    v15 = *(_QWORD *)&dword_140404A6C[v9 + 272248229];
    v16 = 3 * *(_DWORD *)(v13 + v15);
    v17 = *(float *)(v14 + 4 * v16);
    v18 = *(float *)(v14 + 4 * v16 + 4);
    v19 = *(float *)(v14 + 4 * v16 + 8);
    v20 = a6[3];
    v21 = *a6;
    v22 = a6[6];
    v23 = a6[4];
    v24 = a6[1];
    v25 = a6[7];
    v26 = a6[5];
    v27 = a6[8];
    v62 = (float)((float)(v20 * v18) + (float)(*a6 * v17)) + (float)(v22 * v19);
    v63 = (float)((float)(v23 * v18) + (float)(v24 * v17)) + (float)(v25 * v19);
    v28 = a6[2];
    v29 = (float)(v26 * v18) + (float)(v28 * v17);
    v30 = 3 * *(_DWORD *)(v13 + v15 + 4);
    v31 = *(float *)(v14 + 4 * v30 + 4);
    v32 = *(float *)(v14 + 4 * v30 + 8);
    v64 = v29 + (float)(v27 * v19);
    v33 = *(float *)(v14 + 4 * v30);
    v34 = 3 * *(_DWORD *)(v13 + v15 + 8);
    v35 = v31;
    v36 = v33 * v24;
    v65 = (float)((float)(v33 * v21) + (float)(v31 * v20)) + (float)(v32 * v22);
    v37 = (float)(v33 * v28) + (float)(v31 * v26);
    v38 = *(float *)(v14 + 4 * v34 + 4);
    v72 = v36 + (float)(v35 * v23);
    v39 = v32;
    v40 = v37 + (float)(v32 * v27);
    v41 = *(float *)(v14 + 4 * v34 + 8);
    v73 = v72 + (float)(v39 * v25);
    v42 = v38 * v20;
    v43 = *(float *)(v14 + 4 * v34);
    v44 = (float)((float)(v43 * v21) + v42) + (float)(v41 * v22);
    v45 = (float)((float)(v43 * v28) + (float)(v38 * v26)) + (float)(v41 * v27);
    v71 = (float)((float)(v43 * v24) + (float)(v38 * v23)) + (float)(v41 * v25);
    v46 = (float)((float)(v71 - v63) * (float)(v40 - v64)) - (float)((float)(v45 - v64) * (float)(v73 - v63));
    v47 = (float)((float)(v45 - v64) * (float)(v65 - v62)) - (float)((float)(v44 - v62) * (float)(v40 - v64));
    v48 = (float)((float)(v44 - v62) * (float)(v73 - v63)) - (float)((float)(v71 - v63) * (float)(v65 - v62));
    v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
    if ( v49 == 0.0 )
    {
      v61[0] = 0.0;
      v50 = 0.0;
      v51 = 0.0;
      v52 = 0.0;
    }
    else
    {
      v50 = v46 * (float)(1.0 / v49);
      v51 = v47 * (float)(1.0 / v49);
      v61[0] = v50;
      v52 = v48 * (float)(1.0 / v49);
    }
    v53 = a5[1];
    v54 = v62 + *a5;
    v55 = a5[2];
    v56 = v44 + *a5;
    v57 = v65 + *a5;
    v61[2] = v52;
    v61[1] = v51;
    v69[0] = v54;
    v67[1] = v71 + v53;
    v69[1] = v63 + v53;
    v69[2] = v64 + v55;
    v68[0] = v57;
    v68[1] = v73 + v53;
    v68[2] = v40 + v55;
    v67[0] = v56;
    v67[2] = v45 + v55;
    if ( sub_140077FA0(v70, v61, &v66, a7, a8, v69, v68, v67) )
    {
      v58 = v66;
      if ( v66 < *a3 )
      {
        v59 = v70[1];
        *a1 = v70[0];
        a1[2] = v70[2];
        a1[1] = v59;
        *a2 = v50;
        a2[1] = v51;
        a2[2] = v52;
        *a3 = v58;
      }
    }
    ++v8;
    v13 += 12;
  }
  while ( v8 < (int)dword_140404A6C[v9 + 272248227] );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
}
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
#undef v71
#undef v72
#undef v73

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;
// 151A848A0: using guessed type unsigned int;
// 151A848A4: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A848D4: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (00000001400DC650) ----------------------------------------------------
__int64            sub_1400DC650(float *a1, __int64 a2, float *a3, float *a4, float *a5, int *a6, int a7, float a8)
{
  /* Clean implementation: src/engine/collision_cells.c, checked against the original executable
     (tools/native-compare suite cellmesh). */
  extern int collision_segment_cell(float *point, float *normal, float *t, const float *from, const float *to,
                                    const int *voxel, unsigned int faces, float scale);
  return (unsigned int)collision_segment_cell(a1, (float *)(uintptr_t)a2, a3, a4, a5, a6, (unsigned int)a7, a8);
}

//----- (00000001400DE770) ----------------------------------------------------
_BOOL8            sub_1400DE770(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, __int64 a6, float a7, float a8)
{
  /* Clean implementation: src/engine/collision_shapes.c, checked against the original executable
     (tools/native-compare suite shapes). a7 carries the block type and gone mask as integer bits. */
  extern int collision_segment_block_shape(float *point, float *normal, float *t, const float *from, const float *to,
                                           const int *voxel, unsigned int type_and_gone, float scale);
  unsigned int type_and_gone;
  __builtin_memcpy(&type_and_gone, &a7, 4);
  return collision_segment_block_shape((float *)a1, a2, a3, a4, a5, (const int *)(uintptr_t)a6, type_and_gone, a8);
}

//----- (00000001400DF380) ----------------------------------------------------
__int64            sub_1400DF380(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  extern int collision_ray_sphere(float *point, float *normal, float *fraction, const float *from, const float *to,
                                  const float *centre, float radius);
  /* src/engine/collision.c */
  return collision_ray_sphere(a1, a2, a3, a4, a5, a6, a7);
}

//----- (00000001400DF5B0) ----------------------------------------------------
_BOOL8            sub_1400DF5B0(float *a1, float *a2, int a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int *v9; // rdi
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  __int64 v16; // rax
  __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm3_4
  float v29; // xmm9_4
  float v30; // xmm8_4
  float v31; // xmm7_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DF5B0[256];
#define v33 (*(float (*)[2])(void *)(sr_frame_1400DF5B0 + 0)) /* [rsp+48h] */
#define v34 (*(float (*))(void *)(sr_frame_1400DF5B0 + 8)) /* [rsp+50h] */
#define v35 (*(float (*))(void *)(sr_frame_1400DF5B0 + 16)) /* [rsp+58h] */
#define v36 (*(float (*))(void *)(sr_frame_1400DF5B0 + 20)) /* [rsp+5Ch] */
#define v37 (*(float (*))(void *)(sr_frame_1400DF5B0 + 24)) /* [rsp+60h] */
#define v38 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 32)) /* [rsp+68h] */
#define v39 (*(float (*)[4])(void *)(sr_frame_1400DF5B0 + 48)) /* [rsp+78h] */
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400DF5B0 + 64)) /* [rsp+88h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 68)) /* [rsp+8Ch] */
#define v42 (*(__int64 (*))(void *)(sr_frame_1400DF5B0 + 240)) /* [rsp+138h] */

  dword_140404A6C[73006987] = 1065353216;
  v6 = a4 + 15432LL * a3;
  v7 = (int)dword_140404A6C[v6 + 358300580];
  if ( (int)v7 >= (int)dword_140404A6C[v6 + 358300584] )
    return 0;
  v8 = 5144LL * a3;
  v9 = &dword_140404A6C[3 * v8 + 358300589 + 3 * v7];
  do
  {
    v10 = v8 + (int)*v9;
    v11 = *(float *)&dword_140404A6C[3 * v8 + 358297508 + 3 * (int)*(v9 - 1)];
    v12 = *(float *)&dword_140404A6C[3 * v8 + 358297509 + 3 * (int)*(v9 - 1)];
    LODWORD(v39[0]) = dword_140404A6C[3 * v8 + 358297507 + 3 * (int)*(v9 - 1)];
    v39[1] = v11;
    v13 = *(float *)&dword_140404A6C[3 * v10 + 358297509];
    v14 = *(float *)&dword_140404A6C[3 * v10 + 358297507];
    v15 = *(float *)&dword_140404A6C[3 * v10 + 358297508];
    v16 = (int)v9[1];
    v38[2] = v13;
    v17 = v8 + v16;
    v18 = v13 - v12;
    v38[1] = v15;
    v19 = v15 - v11;
    v38[0] = v14;
    v20 = v14 - v39[0];
    v39[2] = v12;
    v21 = *(float *)&dword_140404A6C[3 * v17 + 358297509];
    v22 = *(float *)&dword_140404A6C[3 * v17 + 358297507];
    v36 = *(float *)&dword_140404A6C[3 * v17 + 358297508];
    v37 = v21;
    v23 = v21 - v12;
    v35 = v22;
    v24 = v22 - v39[0];
    v25 = (float)((float)(v36 - v11) * v18) - (float)(v23 * v19);
    v26 = (float)(v23 * v20) - (float)(v24 * v18);
    v27 = (float)(v24 * v19) - (float)((float)(v36 - v11) * v20);
    v28 = fsqrt((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
    if ( v28 == 0.0 )
    {
      v33[0] = 0.0;
      v29 = 0.0;
      v34 = 0.0;
      v31 = 0.0;
      v30 = 0.0;
    }
    else
    {
      v29 = v25 * (float)(1.0 / v28);
      v30 = v27 * (float)(1.0 / v28);
      v33[0] = v29;
      v31 = v26 * (float)(1.0 / v28);
      v34 = v30;
    }
    v33[1] = v31;
    if ( sub_140077FA0((float *)&v40, v33, (float *)&v42, a1, a2, v39, v38, &v35)
      && *(float *)&v42 < *(float *)&dword_140404A6C[73006987] )
    {
      dword_140404A6C[73006981] = v40;
      *(_QWORD *)&dword_140404A6C[73006982] = v41;
      *(float *)&dword_140404A6C[73006984] = v29;
      *(float *)&dword_140404A6C[73006985] = v31;
      *(float *)&dword_140404A6C[73006986] = v30;
      dword_140404A6C[73006987] = v42;
    }
    LODWORD(v7) = v7 + 1;
    v9 += 3;
  }
  while ( (int)v7 < (int)dword_140404A6C[v6 + 358300584] );
  return *(float *)&dword_140404A6C[73006987] < 1.0;
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
#undef v42

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A84898: using guessed type unsigned int;

//----- (00000001400DF8C0) ----------------------------------------------------
_BOOL8            sub_1400DF8C0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm14_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm15_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm2_4

  if ( a9 )
  {
    if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
      return 0;
  }
  else if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
  {
    return 0;
  }
  v12 = a6[1];
  v13 = a6[2];
  v14 = *a6;
  v15 = a1[1];
  v16 = a1[2];
  v17 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v15 - v12) * (float)(a7[2] - v13))
                                     - (float)((float)(v16 - v13) * (float)(a7[1] - v12)))
                             * *a2)
                     + (float)((float)((float)((float)(v16 - v13) * (float)(*a7 - v14))
                                     - (float)((float)(*a1 - v14) * (float)(a7[2] - v13)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v14) * (float)(a7[1] - v12))
                             - (float)((float)(v15 - v12) * (float)(*a7 - v14)))
                     * a2[2])) < 0.0 )
    return 0;
  v18 = v15 - a7[1];
  v19 = a8[2] - a7[2];
  v21 = v16 - a7[2];
  v22 = *a8 - *a7;
  v24 = a8[1] - a7[1];
  v25 = v21 * v22;
  v26 = (float)(v18 * v19) - (float)(v21 * v24);
  v27 = v17 - *a7;
  v28 = v27 * v24;
  v29 = a2[2];
  v30 = v27 * v19;
  v31 = a2[1];
  if ( (float)((float)((float)(v26 * *a2) + (float)((float)(v25 - v30) * v31))
             + (float)((float)(v28 - (float)(v18 * v22)) * v29)) < 0.0 )
    return 0;
  v20 = *a8;
  v23 = a8[1];
  return (float)((float)((float)((float)((float)((float)(v15 - v23) * (float)(v13 - a8[2]))
                                       - (float)((float)(v16 - a8[2]) * (float)(v12 - v23)))
                               * *a2)
                       + (float)((float)((float)((float)(v16 - a8[2]) * (float)(v14 - v20))
                                       - (float)((float)(v17 - v20) * (float)(v13 - a8[2])))
                               * v31))
               + (float)((float)((float)((float)(v17 - v20) * (float)(v12 - v23))
                               - (float)((float)(v15 - v23) * (float)(v14 - v20)))
                       * v29)) >= 0.0;
}


//----- (00000001400DFB70) ----------------------------------------------------
__int64            sub_1400DFB70(int a1, float *a2, float *a3, int a4)
{
  extern int collision_ray_vehicle(int vehicle, const float *from, const float *to, int wheels);
  /* src/engine/collision.c */
  return collision_ray_vehicle(a1, a2, a3, a4);
}
//----- (000000014011BF40) ----------------------------------------------------
__int64 sub_14011BF40(__int64 out, __int64 mesh, float *position, float *rotation)
{
  extern uintptr_t collision_place_mesh(float (*)[3], const void *, const float *, const float *);
  return (__int64)collision_place_mesh((float (*)[3])(uintptr_t)out, (const void *)(uintptr_t)mesh,
                                      position, rotation);
}

//----- (0000000140139560) ----------------------------------------------------
__int64 sub_140139560()
{
  sub_14003FB90(6, 0.0, 2.0, -1.625, 4.0, 4.0, 0.25);
  dword_140404A6C[432545129] = 1080033280;
  sub_14003FB90(1, 0.0, 0.0, 0.0, 0.375, 6.0, 0.375);
  sub_14003FB90(1, 0.0, 3.0, -5.0, 0.25, 0.25, 10.0);
  sub_14003FB90(1, 0.0, 3.0, -6.0, 0.3125, 1.0, 0.5);
  sub_14003FB90(1, 0.0, 3.0, -10.0, 0.3125, 1.0, 0.5);
  dword_140404A6C[432535887] = 1078984704;
  dword_140404A6C[432535888] = -1082130432;
  dword_140404A6C[432535886] = 0;
  dword_140404A6C[432533579] = 1077936128;
  return sub_14003FB90(4, 0.0, 2.625, -8.0, 0.0625, 0.5, 2.0);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A7600B98: using guessed type unsigned int;
// 1A7602FA4: using guessed type unsigned int;
// 1A7602FA8: using guessed type unsigned int;
// 1A7602FAC: using guessed type unsigned int;
// 1A760C010: using guessed type unsigned int;

//----- (000000014014CBE0) ----------------------------------------------------
void sub_14014CBE0()
{
  __int64 v0; // rbp
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  unsigned int *v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
       __m128i *v10; // rdx
  signed int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // r11d
  __int64 v45; // r8
  __int64 v46; // rax
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8

  v0 = 6;
  dword_140404A6C[159842279] = 6;
  dword_140404A6C[159842283] = 8;
  free(*(void **)&dword_140404A6C[159842281]);
  *(_QWORD *)&dword_140404A6C[159842281] = sr_path_malloc(12 * dword_140404A6C[159842279]);
  free(*(void **)&dword_140404A6C[159842285]);
  *(_QWORD *)&dword_140404A6C[159842285] = sr_path_malloc(12 * dword_140404A6C[159842283]);
  **(_DWORD **)&dword_140404A6C[159842281] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 4LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 16LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 20LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 24LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 40LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 44LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 48LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 56LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 60LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 64LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 68LL) = 0;
  **(_DWORD **)&dword_140404A6C[159842285] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 4LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 8LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 16LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 20LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 24LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 28LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 32LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 40LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 44LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 48LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 52LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 56LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 60LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 64LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 68LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 72LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 76LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 80LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 84LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 88LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 92LL) = 5;
  unk_140404180(1, &dword_140404A6C[159842277]);
  unk_140404180(1, &dword_140404A6C[159842278]);
  qword_140404170(34962, dword_140404A6C[159842277], v1);
  unk_140404190(34962, 12 * dword_140404A6C[159842279], *(_QWORD *)&dword_140404A6C[159842281], 35044);
  qword_140404170(34962, 0, v2);
  qword_140404170(34963, dword_140404A6C[159842278], v3);
  unk_140404190(34963, 12 * dword_140404A6C[159842283], *(_QWORD *)&dword_140404A6C[159842285], 35044);
  qword_140404170(34963, 0, v4);
  v5 = &dword_140404A6C[159842289];
  v6 = &dword_140404A6C[159842288];
  do
  {
    free(*((void **)v5 + 1));
    v7 = sr_path_malloc((int)(12 * (*(v5 - 10) + 3 * *(v5 - 6))));
    v8 = *((void **)v5 + 3);
    *((_QWORD *)v5 + 1) = v7;
    free(v8);
    v9 = sr_path_malloc((int)(48 * *(v5 - 6)));
    v10 = *((     __m128i **)v5 - 4);
    *((_QWORD *)v5 + 3) = v9;
    LODWORD(v9) = *(v5 - 10);
    *v5 = v9;
    sub_1401FC920(*((__m128i **)v5 + 1), v10, 12 * (int)v9);
    v11 = 0;
    v5[4] = 0;
    if ( (int)*(v5 - 6) > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *((_QWORD *)v5 - 4);
        v14 = *((_QWORD *)v5 - 2);
        v15 = 3 * *(_DWORD *)(v12 + v14);
        v16 = 3 * *(_DWORD *)(v12 + v14 + 4);
        v17 = *(float *)(v13 + 4 * v16) + *(float *)(v13 + 4 * v15);
        v18 = *(float *)(v13 + 4 * v16 + 4) + *(float *)(v13 + 4 * v15 + 4);
        v19 = *(float *)(v13 + 4 * v16 + 8) + *(float *)(v13 + 4 * v15 + 8);
        v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
        if ( v20 == 0.0 )
        {
          v22 = 0.0;
          v23 = 0.0;
          v24 = 0.0;
        }
        else
        {
          v21 = 1.0 / v20;
          v22 = (float)(1.0 / v20) * v17;
          v23 = v21 * v18;
          v24 = v21 * v19;
        }
        v25 = *((_QWORD *)v5 + 1);
        v26 = (int)(3 * *v5);
        *(float *)(v25 + 4 * v26) = v22;
        *(float *)(v25 + 4 * v26 + 4) = v23;
        *(float *)(v25 + 4 * v26 + 8) = v24;
        v27 = *((_QWORD *)v5 - 4);
        v28 = *((_QWORD *)v5 - 2);
        v29 = *v5 + 1;
        *v5 = v29;
        v30 = 3 * *(_DWORD *)(v12 + v28 + 4);
        v31 = 3 * *(_DWORD *)(v12 + v28 + 8);
        v32 = *(float *)(v27 + 4 * v31 + 4) + *(float *)(v27 + 4 * v30 + 4);
        v33 = *(float *)(v27 + 4 * v30) + *(float *)(v27 + 4 * v31);
        v34 = *(float *)(v27 + 4 * v31 + 8) + *(float *)(v27 + 4 * v30 + 8);
        v35 = fsqrt((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v37 = 0.0;
          v38 = 0.0;
          v39 = 0.0;
        }
        else
        {
          v36 = 1.0 / v35;
          v37 = (float)(1.0 / v35) * v33;
          v38 = v36 * v32;
          v39 = v36 * v34;
        }
        v40 = 3 * v29;
        v41 = *((_QWORD *)v5 + 1);
        *(float *)(v41 + 4 * v40) = v37;
        *(float *)(v41 + 4 * v40 + 4) = v38;
        *(float *)(v41 + 4 * v40 + 8) = v39;
        v42 = *((_QWORD *)v5 - 4);
        v43 = *((_QWORD *)v5 - 2);
        v44 = *v5 + 1;
        *v5 = v44;
        v45 = 3 * *(_DWORD *)(v12 + v43 + 8);
        v46 = 3 * *(_DWORD *)(v12 + v43);
        v47 = *(float *)(v42 + 4 * v46) + *(float *)(v42 + 4 * v45);
        v48 = *(float *)(v42 + 4 * v46 + 4) + *(float *)(v42 + 4 * v45 + 4);
        v49 = *(float *)(v42 + 4 * v46 + 8) + *(float *)(v42 + 4 * v45 + 8);
        v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
        if ( v50 == 0.0 )
        {
          v52 = 0.0;
          v53 = 0.0;
          v54 = 0.0;
        }
        else
        {
          v51 = 1.0 / v50;
          v52 = (float)(1.0 / v50) * v47;
          v53 = v51 * v48;
          v54 = v51 * v49;
        }
        v55 = 3 * v44;
        v56 = *((_QWORD *)v5 + 1);
        *(float *)(v56 + 4 * v55) = v52;
        *(float *)(v56 + 4 * v55 + 4) = v53;
        *(float *)(v56 + 4 * v55 + 8) = v54;
        ++*v5;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2));
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 8);
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 3;
        ++v11;
        LODWORD(v56) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 4);
        v12 += 12;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = v56;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
      }
      while ( v11 < (int)*(v5 - 6) );
    }
    unk_140404180(1, v6 - 1);
    unk_140404180(1, v6);
    qword_140404170(34962, *(v5 - 2), v57);
    unk_140404190(34962, (int)(12 * *v5), *((_QWORD *)v5 + 1), 35044);
    qword_140404170(34962, 0, v58);
    qword_140404170(34963, *(v5 - 1), v59);
    unk_140404190(34963, (int)(12 * v5[4]), *((_QWORD *)v5 + 3), 35044);
    qword_140404170(34963, 0, v60);
    v6 += 10;
    v5 += 10;
    --v0;
  }
  while ( v0 );
}

// 14014CEAF: variable 'v1' is possibly undefined
// 14014CEE2: variable 'v2' is possibly undefined
// 14014CEF3: variable 'v3' is possibly undefined
// 14014CF26: variable 'v4' is possibly undefined
// 14014D33B: variable 'v57' is possibly undefined
// 14014D367: variable 'v58' is possibly undefined
// 14014D375: variable 'v59' is possibly undefined
// 14014D3A2: variable 'v60' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1665C4A08: using guessed type unsigned int;
// 1665C4A18: using guessed type unsigned int;

//----- (0000000140153040) ----------------------------------------------------
_BOOL8            sub_140153040(__int64 a1, __int64 a2, float *a3, float *a4, float *a5, float a6)
{
  int v6; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm12_4
  float v15; // xmm15_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __int64 v20; // rax
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm8_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm14_4
  __int64 v31; // rax
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm6_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm12_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm7_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm15_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm12_4
  float v68; // xmm12_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  __int64 v71; // rax
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm6_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm1_4
  float v78; // xmm6_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  float v90; // xmm3_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm5_4
  float v94; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140153040[416];
#define v96 (*(float (*))(void *)(sr_frame_140153040 + 8)) /* [rsp+48h] */
#define v97 (*(float (*))(void *)(sr_frame_140153040 + 12)) /* [rsp+4Ch] */
#define v98 (*(float (*))(void *)(sr_frame_140153040 + 16)) /* [rsp+50h] */
#define v99 (*(float (*))(void *)(sr_frame_140153040 + 24)) /* [rsp+58h] */
#define v100 (*(float (*))(void *)(sr_frame_140153040 + 28)) /* [rsp+5Ch] */
#define v101 (*(float (*))(void *)(sr_frame_140153040 + 32)) /* [rsp+60h] */
#define v102 (*(float (*))(void *)(sr_frame_140153040 + 40)) /* [rsp+68h] */
#define v103 (*(float (*))(void *)(sr_frame_140153040 + 44)) /* [rsp+6Ch] */
#define v104 (*(float (*))(void *)(sr_frame_140153040 + 48)) /* [rsp+70h] */
#define v105 (*(float (*))(void *)(sr_frame_140153040 + 56)) /* [rsp+78h] */
#define v106 (*(float (*))(void *)(sr_frame_140153040 + 60)) /* [rsp+7Ch] */
#define v107 (*(float (*))(void *)(sr_frame_140153040 + 64)) /* [rsp+80h] */
#define v108 (*(float (*))(void *)(sr_frame_140153040 + 72)) /* [rsp+88h] */
#define v109 (*(float (*))(void *)(sr_frame_140153040 + 76)) /* [rsp+8Ch] */
#define v110 (*(float (*))(void *)(sr_frame_140153040 + 80)) /* [rsp+90h] */
#define v111 (*(float (*))(void *)(sr_frame_140153040 + 84)) /* [rsp+94h] */
#define v112 (*(float (*))(void *)(sr_frame_140153040 + 88)) /* [rsp+98h] */
#define v113 (*(float (*)[4])(void *)(sr_frame_140153040 + 96)) /* [rsp+A0h] */
#define v114 (*(float (*)[4])(void *)(sr_frame_140153040 + 112)) /* [rsp+B0h] */
#define v115 (*(float (*)[4])(void *)(sr_frame_140153040 + 128)) /* [rsp+C0h] */
#define v116 (*(float (*)[4])(void *)(sr_frame_140153040 + 144)) /* [rsp+D0h] */
#define v117 (*(__int128 (*))(void *)(sr_frame_140153040 + 160)) /* [rsp+E0h] */
#define v118 (*(float (*))(void *)(sr_frame_140153040 + 392)) /* [rsp+1C8h] */
#define v119 (*(float (*))(void *)(sr_frame_140153040 + 400)) /* [rsp+1D0h] */

  v6 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( *(int *)(a2 + 48) <= 0 )
    return 0;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(_QWORD *)(a2 + 56);
    v14 = a4[3];
    v15 = *a4;
    v16 = 3 * *(_DWORD *)(v11 + v13 + 8);
    v17 = *(float *)(v12 + 4 * v16);
    v18 = *(float *)(v12 + 4 * v16 + 4);
    v19 = *(float *)(v12 + 4 * v16 + 8);
    v20 = 3 * *(_DWORD *)(v11 + v13 + 12);
    v21 = a4[4] * v18;
    v22 = (float)(v14 * v18) + (float)(*a4 * v17);
    v23 = a4[5] * v18;
    v24 = *(float *)(v12 + 4 * v20 + 4);
    v25 = *(float *)(v12 + 4 * v20);
    v26 = v22 + (float)(a4[6] * v19);
    v27 = v21 + (float)(a4[1] * v17);
    v28 = a4[2] * v17;
    v29 = *(float *)(v12 + 4 * v20 + 8);
    v30 = v27 + (float)(a4[7] * v19);
    v31 = 3 * *(_DWORD *)(v11 + v13 + 16);
    v32 = (float)(v23 + v28) + (float)(a4[8] * v19);
    v33 = v25;
    v34 = (float)((float)(v25 * *a4) + (float)(v24 * v14)) + (float)(v29 * a4[6]);
    v35 = *(float *)(v12 + 4 * v31);
    v36 = v29 * a4[7];
    v37 = (float)(v25 * a4[2]) + (float)(v24 * a4[5]);
    v38 = (float)(v33 * a4[1]) + (float)(v24 * a4[4]);
    v39 = *(float *)(v12 + 4 * v31 + 4);
    v40 = v37 + (float)(v29 * a4[8]);
    v41 = *(float *)(v12 + 4 * v31 + 8);
    v42 = v38 + v36;
    v118 = v32;
    v43 = v41 * a4[6];
    v119 = v34;
    v108 = v42;
    v109 = v40;
    v44 = (float)((float)(v35 * v15) + (float)(v39 * v14)) + v43;
    v45 = v39 * a4[4];
    v46 = v34 - v26;
    v47 = v35 * a4[1];
    v48 = v41 * a4[7];
    v49 = v41 * a4[8];
    v50 = (float)(v35 * a4[2]) + (float)(v39 * a4[5]);
    v110 = v44;
    v51 = v50 + v49;
    v52 = v42;
    v111 = (float)(v47 + v45) + v48;
    v53 = v44 - v26;
    v54 = v52 - v30;
    v112 = v51;
    v55 = (float)((float)(v111 - v30) * (float)(v40 - v32)) - (float)((float)(v51 - v32) * v54);
    v56 = (float)((float)(v51 - v32) * v46) - (float)(v53 * (float)(v40 - v32));
    v57 = (float)(v53 * v54) - (float)((float)(v111 - v30) * v46);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v96 = 0.0;
      v59 = 0.0;
      v97 = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v96 = v59;
      v61 = (float)(1.0 / v58) * v57;
      v97 = v60;
    }
    v62 = *(_DWORD *)(v11 + v13 + 4) == 4;
    v63 = *a3;
    v64 = a3[1];
    v65 = *a3 + v119;
    v66 = a3[2];
    v67 = *a3;
    v98 = v61;
    v68 = v67 + v26;
    v115[0] = v65;
    v69 = v64 + v30;
    v70 = v66 + v118;
    v115[1] = v64 + v108;
    v114[0] = v68;
    v115[2] = v66 + v109;
    v114[1] = v69;
    v113[0] = v63 + v110;
    v114[2] = v66 + v118;
    v113[1] = v64 + v111;
    v113[2] = v66 + v112;
    if ( v62 )
    {
      v71 = 3 * *(_DWORD *)(v11 + v13 + 20);
      v72 = *(float *)(v12 + 4 * v71);
      v73 = (float)((float)(v72 * *a4) + (float)(*(float *)(v12 + 4 * v71 + 4) * a4[3]))
          + (float)((float)(*(float *)(v12 + 4 * v71 + 8) * a4[6]) + v63);
      v74 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[8]) + (float)(v72 * a4[2]);
      v75 = *(float *)(v12 + 4 * v71 + 4) * a4[5];
      v76 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[7]) + (float)(v72 * a4[1]);
      v77 = (float)(*(float *)(v12 + 4 * v71 + 4) * a4[4]) + v64;
      v116[0] = v73;
      v78 = v74 + (float)(v75 + a3[2]);
      v116[1] = v76 + v77;
      v116[2] = v78;
    }
    v79 = a5[1];
    v80 = *a5;
    v81 = a5[2];
    v82 = *a5 - v68;
    v103 = v79 - v69;
    v102 = v82;
    v104 = v81 - v70;
    v83 = (float)((float)(v60 * (float)(v79 - v69)) + (float)(v59 * v82)) + (float)(v61 * (float)(v81 - v70));
    if ( v83 <= a6 && v83 >= 0.0 )
    {
      v102 = (float)(v59 * (float)-a6) + v80;
      v103 = (float)(v60 * (float)-a6) + v79;
      v104 = (float)(v61 * (float)-a6) + v81;
      if ( sub_140077FA0(&v99, &v96, (float *)&v117, a5, &v102, v114, v115, v113) )
      {
        v84 = v100;
        v85 = v101;
        v86 = fsqrt(
                (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                      + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
              + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
        if ( (float)(a6 - v86) > *(float *)(a1 + 28) )
        {
          *(float *)a1 = v99;
          *(float *)(a1 + 4) = v84;
          *(float *)(a1 + 8) = v85;
          *(float *)(a1 + 12) = v59;
          *(float *)(a1 + 16) = v60;
          *(float *)(a1 + 20) = v61;
          *(float *)(a1 + 28) = a6 - v86;
        }
      }
    }
    if ( *(_DWORD *)(v11 + *(_QWORD *)(a2 + 56) + 4) == 4 )
    {
      v87 = *a5;
      v88 = a5[1];
      v89 = a5[2];
      v90 = v59 * (float)(*a5 - v68);
      v105 = *a5 - v68;
      v106 = v88 - v69;
      v107 = v89 - v70;
      v91 = (float)(v90 + (float)(v60 * (float)(v88 - v69))) + (float)(v61 * (float)(v89 - v70));
      if ( v91 <= a6 && v91 >= 0.0 )
      {
        v105 = (float)(v59 * (float)-a6) + v87;
        v106 = (float)(v60 * (float)-a6) + v88;
        v107 = (float)(v61 * (float)-a6) + v89;
        if ( sub_140077FA0(&v99, &v96, (float *)&v117 + 1, a5, &v105, v114, v113, v116) )
        {
          v92 = v100;
          v93 = v101;
          v94 = fsqrt(
                  (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                        + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
                + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
          if ( (float)(a6 - v94) > *(float *)(a1 + 28) )
          {
            *(float *)a1 = v99;
            *(float *)(a1 + 4) = v92;
            *(float *)(a1 + 8) = v93;
            *(float *)(a1 + 12) = v59;
            *(float *)(a1 + 16) = v60;
            *(float *)(a1 + 20) = v61;
            *(float *)(a1 + 28) = a6 - v94;
          }
        }
      }
    }
    ++v6;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 48) );
  return *(float *)(a1 + 28) > 0.0;
}
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
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140154200) ----------------------------------------------------
__int64            sub_140154200(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7)
{
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm4_4

  v7 = 0.0;
  v8 = *a7 - *a6;
  v9 = a7[1] - a6[1];
  v10 = a7[2] - a6[2];
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    v14 = v10 * (float)(1.0 / v11);
  }
  v15 = (float)((float)((float)(*a4 - *a6) * v12) + (float)((float)(a4[1] - a6[1]) * v13))
      + (float)((float)(a4[2] - a6[2]) * v14);
  if ( v15 <= 0.0 )
    return 0;
  if ( v15 >= v11 )
    return 0;
  v16 = (float)(v12 * v15) + *a6;
  *a1 = v16;
  v17 = (float)(v13 * v15) + a6[1];
  a1[1] = v17;
  v18 = (float)(v14 * v15) + a6[2];
  a1[2] = v18;
  v19 = *a4 - v16;
  v20 = a4[1] - v17;
  v21 = a4[2] - v18;
  v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  if ( v22 >= a5 )
    return 0;
  if ( v22 == 0.0 )
  {
    v23 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v7 = (float)(1.0 / v22) * v21;
    v23 = (float)(1.0 / v22) * v20;
    v24 = (float)(1.0 / v22) * v19;
  }
  *a2 = v24;
  a2[1] = v23;
  a2[2] = v7;
  *a3 = v22;
  return 1;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B34F0: using guessed type int sr_static_voxel_vertices[];
// 1402B3558: using guessed type int (sr_static_voxel_normals+2)[18];
// 1402B3664: using guessed type int (sr_static_voxel_faces+1)[];

//----- (00000001401563E0) ----------------------------------------------------
__int64            sub_1401563E0(_DWORD *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v6 = *a4 - *a6;
  v7 = a4[1] - a6[1];
  v8 = a4[2] - a6[2];
  v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  if ( v9 < a5 )
  {
    *a2 = (float)(1.0 / v9) * v6;
    a2[1] = (float)(1.0 / v9) * v7;
    a2[2] = (float)(1.0 / v9) * v8;
    *a1 = *(_DWORD *)a4;
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = *((_DWORD *)a4 + 2);
    *a3 = a5 - v9;
  }
  return 0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140187410) ----------------------------------------------------
_BOOL8            sub_140187410(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  extern int collision_edge_side(const float *p0, const float *p1, const float *c, const float *e0, const float *e1);
  /* src/engine/collision_mesh.c */
  return collision_edge_side(a1, a2, a3, a4, a5);
}


