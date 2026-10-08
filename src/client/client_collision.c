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
  float v7; // xmm11_4
  unsigned int v9; // r10d
  __int64 v10; // r11
  float v11; // xmm14_4
  __int64 v12; // rbx
  float v13; // xmm0_4
  float v14; // xmm13_4
  float v15; // xmm12_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  float v18; // xmm12_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm14_4
  float v25; // xmm9_4
  float v26; // xmm13_4
  float v27; // xmm5_4
  float v28; // xmm12_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm14_4
  int v32; // r9d
  signed int v33; // r15d
  int v34; // eax
  int v35; // edx
  int v36; // r8d
  int v37; // ecx
  signed int v38; // r14d
  signed int v39; // edi
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r13
  unsigned int v43; // esi
  unsigned int v44; // eax
  float v45; // xmm12_4
  unsigned int v46; // xmm7_4
  float v47; // xmm15_4
  float v48; // xmm13_4
  unsigned int v49; // xmm8_4
  unsigned int v50; // xmm11_4
  float v51; // xmm9_4
  float v52; // xmm10_4
  float *v53; // rsi
  unsigned int v54; // ecx
  float v55; // xmm2_4
  float v56; // xmm6_4
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // xmm7_4
  float v60; // xmm0_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm15_4
  float v64; // xmm5_4
  float v65; // xmm15_4
  float v66; // xmm14_4
  float v67; // xmm12_4
  float *v68; // rax
  float v69; // xmm5_4
  float v70; // xmm9_4
  float v71; // xmm10_4
  float v72; // xmm0_4
  float v73; // xmm4_4
  float v74; // xmm3_4
  unsigned int v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // r8d
  unsigned int v78; // esi
  unsigned int v79; // ax
  float v80; // xmm8_4
  float v81; // xmm9_4
  float v82; // xmm11_4
  float v83; // xmm15_4
  float v84; // xmm10_4
  float v85; // xmm12_4
  unsigned int v86; // xmm7_4
  float v87; // xmm14_4
  float v88; // xmm3_4
  unsigned int v89; // r8d
  float v90; // xmm4_4
  float v91; // xmm7_4
  float v92; // xmm6_4
  float v93; // xmm2_4
  float *v94; // rax
  float v95; // xmm13_4
  float v96; // xmm1_4
  float v97; // xmm15_4
  float v98; // xmm0_4
  float v99; // xmm8_4
  float v100; // xmm7_4
  float v101; // xmm0_4
  float v102; // xmm5_4
  float v103; // xmm3_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm9_4
  float v107; // xmm10_4
  float v108; // xmm12_4
  float v109; // xmm0_4
  float v110; // xmm4_4
  float *v111; // rax
  float v112; // xmm3_4
  float v113; // xmm15_4
  unsigned int v114; // edx
  float v115; // xmm8_4
  float v116; // xmm9_4
  float v117; // xmm11_4
  float v118; // xmm15_4
  float v119; // xmm10_4
  float v120; // xmm12_4
  float v121; // xmm7_4
  float v122; // xmm14_4
  unsigned int v123; // ecx
  float v124; // xmm4_4
  float v125; // xmm6_4
  float v126; // xmm2_4
  float v127; // xmm13_4
  float v128; // xmm1_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm7_4
  float v132; // xmm0_4
  float v133; // xmm15_4
  float v134; // xmm5_4
  float v135; // xmm4_4
  float v136; // xmm5_4
  float v137; // xmm9_4
  float v138; // xmm10_4
  float *v139; // rsi
  float v140; // xmm12_4
  float v141; // xmm0_4
  float v142; // xmm15_4
  float v143; // xmm4_4
  float v144; // xmm3_4
  unsigned int v145; // esi
  unsigned int v146; // r13d
  unsigned int v147; // ax
  float v148; // xmm8_4
  float v149; // xmm9_4
  float v150; // xmm7_4
  float v151; // xmm12_4
  float v152; // xmm14_4
  float v153; // xmm10_4
  float v154; // xmm13_4
  float v155; // xmm11_4
  float v156; // xmm6_4
  float v157; // xmm1_4
  float v158; // xmm3_4
  float v159; // xmm5_4
  float v160; // xmm0_4
  float v161; // xmm2_4
  float v162; // xmm4_4
  float v163; // xmm1_4
  float v164; // xmm4_4
  float *v165; // rax
  float v166; // xmm3_4
  float v167; // xmm5_4
  float v168; // xmm0_4
  float v169; // xmm6_4
  float v170; // xmm3_4
  float *v171; // rax
  float v172; // xmm0_4
  float sr_collision_position[3];
  float sr_collision_normal[3];
  int sr_collision_cell[3];
  unsigned sr_collision_displaced_cell[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003C760[272];
#define v174 (*(__int64 (*))(void *)(sr_frame_14003C760 + 8)) /* [rsp+8h] */
#define v175 (*(__int64 (*))(void *)(sr_frame_14003C760 + 48)) /* [rsp+30h] */
#define v176 (*(__int64 (*))(void *)(sr_frame_14003C760 + 64)) /* [rsp+40h] */
#define v177 (*(__int64 (*))(void *)(sr_frame_14003C760 + 72)) /* [rsp+48h] */
#define v178 (*(signed int (*))(void *)(sr_frame_14003C760 + 88)) /* [rsp+58h] */
#define v179 (*(int (*))(void *)(sr_frame_14003C760 + 92)) /* [rsp+5Ch] */
#define v180 (*(float (*))(void *)(sr_frame_14003C760 + 96)) /* [rsp+60h] */
#define v187 (*(float (*))(void *)(sr_frame_14003C760 + 136)) /* [rsp+88h] */
#define v188 (*(float (*))(void *)(sr_frame_14003C760 + 140)) /* [rsp+8Ch] */
#define v189 (*(float * (*))(void *)(sr_frame_14003C760 + 144)) /* [rsp+90h] */
#define v190 (*(float (*))(void *)(sr_frame_14003C760 + 152)) /* [rsp+98h] */
#define v191 (*(float (*))(void *)(sr_frame_14003C760 + 156)) /* [rsp+9Ch] */
#define v195 (*(float * (*))(void *)(sr_frame_14003C760 + 176)) /* [rsp+B0h] */
#define v199 (*(float (*)[4])(void *)(sr_frame_14003C760 + 200)) /* [rsp+C8h] */
#define v200 (*(int (*))(void *)(sr_frame_14003C760 + 216)) /* [rsp+D8h] */
#define v201 (*(int (*))(void *)(sr_frame_14003C760 + 220)) /* [rsp+DCh] */
#define v202 (*(int (*))(void *)(sr_frame_14003C760 + 224)) /* [rsp+E0h] */
#define v203 (*(int (*))(void *)(sr_frame_14003C760 + 228)) /* [rsp+E4h] */
#define v204 (*(__int64 (*))(void *)(sr_frame_14003C760 + 232)) /* [rsp+E8h] */
#define v205 (*(float (*)[4])(void *)(sr_frame_14003C760 + 240)) /* [rsp+F0h] */
#define v206 (*(__int128 (*))(void *)(sr_frame_14003C760 + 256)) /* [rsp+100h] */

  v7 = *(float *)&a7;
  v9 = a4;
  *a3 = 65536.0;
  v10 = a4;
  v11 = *a5;
  v12 = 263004LL * a4;
  v13 = *a5 + *(float *)&a7;
  v178 = a4;
  v195 = a2;
  v189 = a1;
  v204 = a4;
  if ( v13 < *(float *)&dword_140404A6C[v12 + 111579657] )
    return 0;
  v14 = a5[1];
  if ( (float)(v14 + *(float *)&a7) < *(float *)&dword_140404A6C[v12 + 111579658] )
    return 0;
  v15 = a5[2];
  if ( (float)(v15 + *(float *)&a7) < *(float *)&dword_140404A6C[v12 + 111579659] )
    return 0;
  if ( (float)(v11 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579660] )
    return 0;
  if ( (float)(v14 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579661] )
    return 0;
  if ( (float)(v15 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579662] )
    return 0;
  v16 = v11 - *(float *)&dword_140404A6C[v12 + 111579638];
  v17 = v14 - *(float *)&dword_140404A6C[v12 + 111579639];
  v18 = v15 - *(float *)&dword_140404A6C[v12 + 111579640];
  v19 = a6[1];
  v20 = v16 * *(float *)&dword_140404A6C[v12 + 111579641];
  v21 = v18 * *(float *)&dword_140404A6C[v12 + 111579643];
  v22 = v16 * *(float *)&dword_140404A6C[v12 + 111579644];
  v23 = v17 * *(float *)&dword_140404A6C[v12 + 111579645];
  v24 = v16 * *(float *)&dword_140404A6C[v12 + 111579647];
  v25 = v20 + (float)(v17 * *(float *)&dword_140404A6C[v12 + 111579642]);
  v26 = v17 * *(float *)&dword_140404A6C[v12 + 111579648];
  v27 = v18 * *(float *)&dword_140404A6C[v12 + 111579646];
  v28 = v18 * *(float *)&dword_140404A6C[v12 + 111579649];
  v199[0] = *a6;
  v29 = v22 + v23;
  v199[2] = a6[2];
  v199[1] = v19;
  v30 = *(float *)&dword_140404A6C[v12 + 111579654];
  v205[0] = v25 + v21;
  v31 = v24 + v26;
  v205[1] = v29 + v27;
  v205[2] = v31 + v28;
  v32 = (int)(float)((float)((float)(*(float *)&a7 + v21) + v25) * v30);
  v179 = v32;
  v33 = (int)(float)((float)((float)(v29 + v27) - *(float *)&a7) * v30);
  v34 = (int)(float)((float)((float)(v25 + v21) - *(float *)&a7) * v30);
  sr_collision_cell[1] = v33;
  v200 = v34;
  v35 = (int)(float)((float)((float)(v31 + v28) - *(float *)&a7) * v30);
  v36 = (int)(float)((float)((float)(*(float *)&a7 + v27) + v29) * v30);
  v202 = v35;
  v203 = v36;
  v37 = (int)(float)((float)((float)(*(float *)&a7 + v28) + v31) * v30);
  v201 = v37;
  if ( v33 > v36 )
    return 0;
  sr_collision_cell[1] = (int)(float)((float)((float)(v29 + v27) - *(float *)&a7) * v30);
  do
  {
    sr_collision_cell[2] = v35;
    v38 = v35;
    if ( v35 > v37 )
      goto LABEL_48;
    do
    {
      sr_collision_cell[0] = v34;
      v39 = v34;
      if ( v34 > v32 )
        goto LABEL_46;
      do
      {
        if ( v39 < 0 )
          goto LABEL_44;
        if ( v39 >= (int)(dword_140404A6C[v12 + 111579650] << 6) )
          goto LABEL_44;
        if ( v33 < 0 )
          goto LABEL_44;
        if ( v33 >= (int)(dword_140404A6C[v12 + 111579651] << 6) )
          goto LABEL_44;
        if ( v38 < 0 )
          goto LABEL_44;
        if ( v38 >= (int)(dword_140404A6C[v12 + 111579652] << 6) )
          goto LABEL_44;
        v40 = *(int *)(*(_QWORD *)&dword_140404A6C[v12 + 111579655]
                     + 4LL
                     * (int)((v39 >> 6)
                           + dword_140404A6C[v12 + 111579650]
                           * ((v38 >> 6) + dword_140404A6C[v12 + 111579652] * (v33 >> 6))));
        if ( (_DWORD)v40 == -1 )
          goto LABEL_44;
        v41 = (int)dword_140404A6C[263004 * v10
                                 + 111579985
                                 + 513 * v40
                                 + 64 * ((v33 >> 3) & 7)
                                 + 8 * ((v38 >> 3) & 7)
                                 + ((v39 >> 3) & 7)];
        if ( (_DWORD)v41 == -1 )
          goto LABEL_44;
        v42 = 6930 * v41 + (v39 & 7) + 8 * ((v38 & 7) + 8 * (v33 & 7u));
        v43 = dword_140404A6C[v42 + 83194359];
        v44 = v43 & 0xE0000000;
        if ( (v43 & 0xE0000000) == 0x40000000 )
        {
          LODWORD(v177) = dword_140404A6C[v12 + 111579653];
          LODWORD(v176) = v43;
          *(float *)&v175 = v7;
          if ( sub_14003E100(&sr_collision_position[0], &sr_collision_normal[0], &v180, v205, v199, v175, &sr_collision_cell[0], v176, v177) && v180 < *a3 )
          {
            v45 = *(float *)&dword_140404A6C[v12 + 111579643];
            v46 = dword_140404A6C[v12 + 111579645];
            v47 = *(float *)&dword_140404A6C[v12 + 111579646];
            v48 = *(float *)&dword_140404A6C[v12 + 111579649];
            v49 = dword_140404A6C[v12 + 111579641];
            v50 = dword_140404A6C[v12 + 111579642];
            v51 = *(float *)&dword_140404A6C[v12 + 111579647];
            v52 = *(float *)&dword_140404A6C[v12 + 111579648];
            v53 = v189;
            v54 = v178;
            v187 = *(float *)&dword_140404A6C[v12 + 111579644];
            v188 = *(float *)&v46;
            v55 = sr_collision_normal[0];
            v56 = (float)(v47 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579640];
            v57 = sr_collision_normal[1];
            v58 = *(float *)&v46;
            v59 = (float)((float)(*(float *)&v46 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579639])
                + (float)((float)(v52 * sr_collision_position[2]) + (float)(*(float *)&v50 * sr_collision_position[0]));
            v60 = sr_collision_normal[2];
            v61 = (float)(v48 * sr_collision_position[2]) + (float)(v45 * sr_collision_position[0]);
            v62 = v187;
            sr_collision_position[0] = (float)((float)(v51 * sr_collision_position[2]) + (float)(*(float *)&v49 * sr_collision_position[0]))
                 + (float)((float)(v187 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v63 = (float)((float)(v47 * sr_collision_normal[1]) + (float)(v45 * sr_collision_normal[0])) + (float)(v48 * sr_collision_normal[2]);
            *v189 = sr_collision_position[0];
LABEL_27:
            v68 = v195;
            v69 = v61 + v56;
            v53[1] = v59;
            v53[2] = v69;
            v70 = v51 * v60;
            v71 = v52 * v60;
            v72 = v180;
            v68[2] = v63;
            sr_collision_position[2] = v69;
            sr_collision_position[1] = v59;
            sr_collision_normal[2] = v63;
            v73 = (float)((float)(v62 * v57) + (float)(*(float *)&v49 * v55)) + v70;
            v74 = (float)((float)(v58 * v57) + (float)(*(float *)&v50 * v55)) + v71;
            *v68 = v73;
            sr_collision_normal[0] = v73;
            v68[1] = v74;
            *a3 = v72;
            sr_collision_normal[1] = v74;
            v75 = sub_140012DE0(v54, v39, v33, v38, dword_140404A6C[73007008]);
            v9 = v178;
            v32 = v179;
            v7 = *(float *)&a7;
            dword_140404A6C[73007007] = v75;
            goto LABEL_34;
          }
          goto LABEL_32;
        }
        if ( v44 == 0x80000000 )
        {
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &v180,
                 v205,
                 v199,
                 v7,
                 &sr_collision_cell[0],
                 v43,
                 *(float *)&dword_140404A6C[v12 + 111579653])
            && v180 < *a3 )
          {
            v64 = *(float *)&dword_140404A6C[v12 + 111579642];
            v65 = *(float *)&dword_140404A6C[v12 + 111579643];
            v66 = *(float *)&dword_140404A6C[v12 + 111579646];
            v67 = *(float *)&dword_140404A6C[v12 + 111579649];
            v51 = *(float *)&dword_140404A6C[v12 + 111579647];
            v49 = dword_140404A6C[v12 + 111579644];
            v50 = dword_140404A6C[v12 + 111579645];
            v52 = *(float *)&dword_140404A6C[v12 + 111579648];
            v54 = v178;
            v188 = *(float *)&dword_140404A6C[v12 + 111579641];
            dword_140404A6C[73007009] = v43;
            v53 = v189;
            dword_140404A6C[73007002] = v178;
            v187 = v64;
            dword_140404A6C[73007003] = v39;
            dword_140404A6C[73007004] = v33;
            dword_140404A6C[73007005] = v38;
            dword_140404A6C[73007012] = -1;
            dword_140404A6C[73007015] = -1;
            v55 = sr_collision_normal[1];
            v56 = (float)(v66 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579640];
            v57 = sr_collision_normal[0];
            v58 = v64;
            v59 = (float)((float)(*(float *)&v50 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579639])
                + (float)((float)(v52 * sr_collision_position[2]) + (float)(v64 * sr_collision_position[0]));
            v60 = sr_collision_normal[2];
            v61 = (float)(v67 * sr_collision_position[2]) + (float)(v65 * sr_collision_position[0]);
            v62 = v188;
            sr_collision_position[0] = (float)((float)(v51 * sr_collision_position[2]) + (float)(v188 * sr_collision_position[0]))
                 + (float)((float)(*(float *)&v49 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v63 = (float)((float)(v65 * sr_collision_normal[0]) + (float)(v66 * sr_collision_normal[1])) + (float)(v67 * sr_collision_normal[2]);
            *v189 = sr_collision_position[0];
            goto LABEL_27;
          }
          goto LABEL_32;
        }
        if ( v44 == -1073741824 )
        {
          v76 = v39 - (unsigned __int8)v43;
          v190 = *(float *)&v76;
          v77 = v33 - BYTE2(v43);
          sr_collision_displaced_cell[0] = v76;
          v78 = v38 - BYTE1(v43);
          v191 = *(float *)&v77;
          sr_collision_displaced_cell[1] = v77;
          sr_collision_displaced_cell[2] = v78;
          v79 = sub_1400129D0(v9, v76, v77, v78);
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &v180,
                 v205,
                 v199,
                 v7,
                 (int *)&sr_collision_displaced_cell[0],
                 v79,
                 *(float *)&dword_140404A6C[v12 + 111579653])
            && v180 < *a3 )
          {
            v80 = *(float *)&dword_140404A6C[v12 + 111579641];
            v81 = *(float *)&dword_140404A6C[v12 + 111579647];
            v82 = *(float *)&dword_140404A6C[v12 + 111579642];
            v83 = *(float *)&dword_140404A6C[v12 + 111579643];
            v84 = *(float *)&dword_140404A6C[v12 + 111579648];
            v85 = *(float *)&dword_140404A6C[v12 + 111579649];
            v86 = dword_140404A6C[v12 + 111579645];
            v87 = *(float *)&dword_140404A6C[v12 + 111579646];
            v88 = sr_collision_position[2];
            v89 = LODWORD(v191);
            v187 = *(float *)&dword_140404A6C[v12 + 111579644];
            v90 = v83 * sr_collision_position[0];
            v188 = *(float *)&v86;
            v91 = (float)(*(float *)&v86 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579639];
            v92 = (float)(v87 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579640];
            v93 = sr_collision_normal[1];
            v94 = v189;
            v95 = (float)((float)(v81 * sr_collision_position[2]) + (float)(v80 * sr_collision_position[0]))
                + (float)((float)(v187 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v96 = sr_collision_normal[0];
            v97 = v83 * sr_collision_normal[0];
            v98 = (float)(v84 * sr_collision_position[2]) + (float)(v82 * sr_collision_position[0]);
            v99 = v80 * sr_collision_normal[0];
            *v189 = v95;
            v100 = v91 + v98;
            v101 = sr_collision_normal[2];
            v102 = (float)(v85 * v88) + v90;
            v103 = v188 * v93;
            v104 = v187;
            v94[1] = v100;
            v105 = v102 + v92;
            v106 = v81 * v101;
            v107 = v84 * v101;
            v108 = v85 * v101;
            v109 = v180;
            v94[2] = v105;
            v110 = (float)((float)(v104 * v93) + v99) + v106;
            v111 = v195;
            *v195 = v110;
            sr_collision_position[0] = v95;
            sr_collision_position[1] = v100;
            sr_collision_position[2] = v105;
            sr_collision_normal[0] = v110;
            v112 = (float)(v103 + (float)(v82 * v96)) + v107;
            v113 = (float)(v97 + (float)(v87 * v93)) + v108;
            v111[1] = v112;
            sr_collision_normal[1] = v112;
            v111[2] = v113;
            *a3 = v109;
            sr_collision_normal[2] = v113;
            v7 = *(float *)&a7;
            dword_140404A6C[73007007] = sub_140012DE0(v178, LODWORD(v190), v89, v78, dword_140404A6C[73007008]);
          }
LABEL_32:
          v32 = v179;
          v9 = v178;
        }
        v53 = v189;
LABEL_34:
        v114 = dword_140404A6C[v42 + 83197431];
        if ( (v114 & 0xE0000000) == 0x80000000 )
        {
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &v180,
                 v205,
                 v199,
                 v7,
                 &sr_collision_cell[0],
                 v114,
                 *(float *)&dword_140404A6C[v12 + 111579653])
            && v180 < *a3 )
          {
            v115 = *(float *)&dword_140404A6C[v12 + 111579641];
            v116 = *(float *)&dword_140404A6C[v12 + 111579647];
            v117 = *(float *)&dword_140404A6C[v12 + 111579642];
            v118 = *(float *)&dword_140404A6C[v12 + 111579643];
            v119 = *(float *)&dword_140404A6C[v12 + 111579648];
            v120 = *(float *)&dword_140404A6C[v12 + 111579649];
            v121 = *(float *)&dword_140404A6C[v12 + 111579645];
            v122 = *(float *)&dword_140404A6C[v12 + 111579646];
            v123 = v178;
            v187 = *(float *)&dword_140404A6C[v12 + 111579644];
            v124 = v118 * sr_collision_position[0];
            v190 = v121;
            v125 = (float)(v122 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579640];
            v126 = sr_collision_normal[1];
            v127 = (float)((float)(v116 * sr_collision_position[2]) + (float)(v115 * sr_collision_position[0]))
                 + (float)((float)(v187 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v128 = sr_collision_normal[0];
            v129 = v120 * sr_collision_position[2];
            v130 = v121;
            v131 = (float)((float)(v121 * sr_collision_position[1]) + *(float *)&dword_140404A6C[v12 + 111579639])
                 + (float)((float)(v119 * sr_collision_position[2]) + (float)(v117 * sr_collision_position[0]));
            v132 = sr_collision_normal[2];
            v133 = (float)(v118 * sr_collision_normal[0]) + (float)(v122 * sr_collision_normal[1]);
            *v53 = v127;
            v134 = v129 + v124;
            v135 = v187 * v126;
            v53[1] = v131;
            v136 = v134 + v125;
            v137 = v116 * v132;
            v138 = v119 * v132;
            v53[2] = v136;
            v139 = v195;
            v140 = v120 * v132;
            v141 = v180;
            v142 = v133 + v140;
            sr_collision_position[0] = v127;
            sr_collision_position[1] = v131;
            sr_collision_position[2] = v136;
            v195[2] = v142;
            sr_collision_normal[2] = v142;
            v143 = (float)(v135 + (float)(v115 * v128)) + v137;
            v144 = (float)((float)(v130 * v126) + (float)(v117 * v128)) + v138;
            *v139 = v143;
            sr_collision_normal[0] = v143;
            v139[1] = v144;
            *a3 = v141;
            sr_collision_normal[1] = v144;
            dword_140404A6C[73007007] = sub_140016720(v123, v39, v33, v38, dword_140404A6C[73007008]);
          }
          v32 = v179;
        }
        else if ( (v114 & 0xE0000000) == 0xC0000000 )
        {
          v145 = v39 - (unsigned __int8)v114;
          sr_collision_displaced_cell[0] = v145;
          v146 = v33 - BYTE2(v114);
          sr_collision_displaced_cell[1] = v146;
          LODWORD(v188) = v38 - BYTE1(v114);
          sr_collision_displaced_cell[2] = LODWORD(v188);
          v147 = sub_140016450(v9, v145, v146, LODWORD(v188));
          if ( sub_14003E4B0(
                 &sr_collision_position[0],
                 (__int64)&sr_collision_normal[0],
                 &v180,
                 v205,
                 v199,
                 v7,
                 (int *)&sr_collision_displaced_cell[0],
                 v147,
                 *(float *)&dword_140404A6C[v12 + 111579653])
            && v180 < *a3 )
          {
            v148 = *(float *)&dword_140404A6C[v12 + 111579641];
            v149 = *(float *)&dword_140404A6C[v12 + 111579647];
            v150 = *(float *)&dword_140404A6C[v12 + 111579644];
            v151 = *(float *)&dword_140404A6C[v12 + 111579643];
            v152 = *(float *)&dword_140404A6C[v12 + 111579649];
            v153 = *(float *)&dword_140404A6C[v12 + 111579645];
            v154 = *(float *)&dword_140404A6C[v12 + 111579642];
            v155 = *(float *)&dword_140404A6C[v12 + 111579648];
            v156 = sr_collision_normal[0];
            v157 = sr_collision_position[0] * v151;
            v158 = (float)(sr_collision_position[1] * *(float *)&dword_140404A6C[v12 + 111579646])
                 + *(float *)&dword_140404A6C[v12 + 111579640];
            v159 = (float)(sr_collision_position[1] * v153) + *(float *)&dword_140404A6C[v12 + 111579639];
            v160 = (float)(sr_collision_position[2] * v155) + (float)(sr_collision_position[0] * v154);
            sr_collision_position[0] = (float)((float)(sr_collision_position[2] * v149) + (float)(sr_collision_position[0] * v148))
                 + (float)((float)(sr_collision_position[1] * v150) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v161 = sr_collision_normal[2];
            v162 = (float)(sr_collision_position[2] * v152) + v157;
            v163 = sr_collision_normal[2] * v149;
            v190 = v159 + v160;
            sr_collision_position[1] = v159 + v160;
            v191 = v162 + v158;
            sr_collision_position[2] = v162 + v158;
            v164 = sr_collision_normal[1] * *(float *)&dword_140404A6C[v12 + 111579646];
            v165 = v189;
            v166 = sr_collision_normal[1] * v153;
            v167 = (float)(sr_collision_normal[1] * v150) + (float)(sr_collision_normal[0] * v148);
            *v189 = sr_collision_position[0];
            v168 = v156;
            v165[1] = v190;
            v169 = (float)((float)(v156 * v151) + v164) + (float)(v161 * v152);
            v165[2] = v191;
            v170 = (float)(v166 + (float)(v168 * v154)) + (float)(v161 * v155);
            v171 = v195;
            v172 = v180;
            sr_collision_normal[0] = v167 + v163;
            sr_collision_normal[2] = v169;
            *v195 = v167 + v163;
            v171[1] = v170;
            v171[2] = v169;
            *a3 = v172;
            sr_collision_normal[1] = v170;
            dword_140404A6C[73007007] = sub_140016720(v178, v145, v146, LODWORD(v188), dword_140404A6C[73007008]);
          }
          v32 = v179;
        }
LABEL_44:
        v9 = v178;
        ++v39;
        v7 = *(float *)&a7;
        v10 = v178;
        sr_collision_cell[0] = v39;
      }
      while ( v39 <= v32 );
      v9 = v178;
      v10 = v204;
      v34 = v200;
      v37 = v201;
LABEL_46:
      sr_collision_cell[2] = ++v38;
    }
    while ( v38 <= v37 );
    v35 = v202;
    v36 = v203;
LABEL_48:
    sr_collision_cell[1] = ++v33;
  }
  while ( v33 <= v36 );
  unsigned char sr_collision_hit;
  __asm__ volatile("comiss %2, %1; seta %0" : "=qm"(sr_collision_hit)
                   : "x"(_mm_set_ss(65536.0f)), "x"(_mm_set_ss(*a3)) : "cc");
  return sr_collision_hit;
}
#undef v174
#undef v175
#undef v176
#undef v177
#undef v178
#undef v179
#undef v180
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v195
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef v206


//----- (000000014003DE80) ----------------------------------------------------
__int64            sub_14003DE80(float *a1, float *a2, float a3)
{
  float v5; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  unsigned int v9; // xmm0_4
  signed int v10; // ebx
  unsigned int *v11; // rdi
  __int64 v13; // [rsp-20h] [rbp-121C0h] BYREF
  float sr_collision_upper[3];
  uint32_t sr_collision_lower[3];
  _Alignas(16) uint32_t sr_collision_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003DE80[147776];
#define v14 (*(__int64 (*))(void *)(sr_frame_14003DE80 + 0)) /* [rsp+10h] */
#define v21 (*(float (*))(void *)(sr_frame_14003DE80 + 48)) /* [rsp+40h] */
#define v26 (*(int (*)[18436])(void *)(sr_frame_14003DE80 + 74016)) /* [rsp+12130h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_14003DE80 + 147760)) /* [rsp+24140h] */

  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  v5 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  *(float *)&v9 = *a1 - a3;
  v26[0] = 0;
  v26[8193] = 0;
  v26[16386] = 0;
  sr_collision_lower[0] = v9;
  (*(float *)&sr_collision_lower[1]) = v7 - a3;
  sr_collision_upper[0] = v5 + a3;
  sr_collision_upper[1] = v7 + a3;
  sr_collision_upper[2] = v8 + a3;
  (*(float *)&sr_collision_lower[2]) = v8 - a3;
  sub_1400D05B0(v26, (float *)&sr_collision_lower[0], &sr_collision_upper[0]);
  if ( sub_14003DAE0((float *)&(*(__int128 *)(void *)sr_collision_result), (__int64)v26, a1, a2, a3) && *(float *)&dword_140404A6C[73006988] > (*(float *)&sr_collision_result[7]) )
  {
    dword_140404A6C[73006987] = 0;
    *(_OWORD *)&dword_140404A6C[73006981] = (*(__int128 *)(void *)sr_collision_result);
    dword_140404A6C[73007006] = 0;
    dword_140404A6C[73006985] = sr_collision_result[4];
    dword_140404A6C[73006986] = sr_collision_result[5];
    *(float *)&dword_140404A6C[73006988] = (*(float *)&sr_collision_result[7]);
    dword_140404A6C[73007002] = 0;
  }
  v10 = 0;
  v11 = &dword_140404A6C[111579637];
  do
  {
    if ( *v11 )
    {
      *(float *)&v14 = a3;
      if ( (unsigned int)sub_14003C760((float *)&sr_collision_lower[0], &sr_collision_upper[0], &v21, v10, a1, a2, v14) )
      {
        if ( *(float *)&dword_140404A6C[73006988] > v21 )
        {
          dword_140404A6C[73006981] = sr_collision_lower[0];
          *(float *)&dword_140404A6C[73006982] = (*(float *)&sr_collision_lower[1]);
          *(float *)&dword_140404A6C[73006983] = (*(float *)&sr_collision_lower[2]);
          *(float *)&dword_140404A6C[73006984] = sr_collision_upper[0];
          *(float *)&dword_140404A6C[73006985] = sr_collision_upper[1];
          *(float *)&dword_140404A6C[73006986] = sr_collision_upper[2];
          *(float *)&dword_140404A6C[73006988] = v21;
          dword_140404A6C[73006987] = 0;
          dword_140404A6C[73007006] = dword_140404A6C[73007007];
          dword_140404A6C[73007002] = v10;
        }
      }
    }
    ++v10;
    v11 += 263004;
  }
  while ( v10 < 4 );
  unsigned char sr_collision_hit;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_collision_hit)
                   : "x"(_mm_set_ss(*(float *)&dword_140404A6C[73006988])),
                     "x"(_mm_set_ss(65536.0f)) : "cc");
  return sr_collision_hit;
}
#undef v14
#undef v21
#undef v26
#undef v27

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 193AC8820: using guessed type unsigned int;
// 193ACA824: using guessed type unsigned int;
// 193ACF028: using guessed type unsigned int;
// 193AD082C: using guessed type unsigned int;

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
  unsigned sr_minimum[3];
  unsigned sr_maximum[3];
  union { __int128 first; unsigned words[8]; float coordinates[8]; } sr_hit;
  float *v4; // r13
  float *v5; // r15
  unsigned int *v6; // rdi
  int i; // ebx
  int v8; // edi
  unsigned int *v9; // rbx
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  int v20; // r11d
  float v21; // xmm11_4
  float v22; // xmm9_4
  int v23; // r12d
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r13
  unsigned __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v40; // [rsp-20h] [rbp-C310h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC050[99216];
#define v41 (*(float (*))(void *)(sr_frame_1400DC050 + 0)) /* [rsp+10h] */
#define v42 (*(int (*))(void *)(sr_frame_1400DC050 + 4)) /* [rsp+14h] */
#define v47 (*(float * (*))(void *)(sr_frame_1400DC050 + 48)) /* [rsp+40h] */
#define v48 (*(float * (*))(void *)(sr_frame_1400DC050 + 56)) /* [rsp+48h] */
#define v49 (*(int (*)[12292])(void *)(sr_frame_1400DC050 + 64)) /* [rsp+50h] */
#define v56 (*(_DWORD (*)[64])(void *)(sr_frame_1400DC050 + 98944)) /* [rsp+18290h] */
#define v57 (*(__int64 (*))(void *)(sr_frame_1400DC050 + 99200)) /* [rsp+18390h] */

  v48 = a2;
  v47 = a1;
  v4 = a2;
  dword_140404A6C[73006987] = 1065353216;
  dword_140404A6C[73007012] = -1;
  v5 = a1;
  dword_140404A6C[73007015] = -1;
  dword_140404A6C[73007002] = -1;
  if ( (unsigned int)sub_1400D1830((unsigned __int64)&sr_hit.first, a1, a2) && *(float *)&dword_140404A6C[73006987] > sr_hit.coordinates[6] )
  {
    *(_QWORD *)&dword_140404A6C[73006989] = 0;
    __builtin_memcpy(&dword_140404A6C[73006981], &sr_hit.first, 16);
    dword_140404A6C[73006991] = 0;
    dword_140404A6C[73006985] = sr_hit.words[4];
    dword_140404A6C[73006986] = sr_hit.words[5];
    *(float *)&dword_140404A6C[73006987] = sr_hit.coordinates[6];
    dword_140404A6C[73007002] = -1;
  }
  v6 = &dword_140404A6C[111579637];
  for ( i = 0; i < 4; ++i )
  {
    if ( *v6
      && (unsigned int)sub_1400D6B60((float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), &v41, (unsigned int)i, v5, v4)
      && v41 < *(float *)&dword_140404A6C[73006987] )
    {
      dword_140404A6C[73006981] = sr_minimum[0];
      dword_140404A6C[73006982] = sr_minimum[1];
      dword_140404A6C[73006983] = sr_minimum[2];
      *(float *)&dword_140404A6C[73006984] = (*(float *)&sr_maximum[0]);
      dword_140404A6C[73006985] = sr_maximum[1];
      dword_140404A6C[73006986] = sr_maximum[2];
      *(float *)&dword_140404A6C[73006987] = v41;
      *(_QWORD *)&dword_140404A6C[73006989] = 0;
      dword_140404A6C[73006991] = 0;
      dword_140404A6C[73007002] = i;
    }
    v6 += 263004;
  }
  if ( a3 )
  {
    v8 = 0;
    v9 = &dword_140404A6C[433433164];
    do
    {
      if ( *(v9 - 7)
        && (unsigned int)sub_1400D8B70((float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), &v41, v8, v5, v4)
        && v41 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006981] = sr_minimum[0];
        dword_140404A6C[73006983] = sr_minimum[2];
        dword_140404A6C[73006982] = sr_minimum[1];
        dword_140404A6C[73006985] = sr_maximum[1];
        v10 = *(v9 - 2);
        *(float *)&dword_140404A6C[73006984] = (*(float *)&sr_maximum[0]);
        dword_140404A6C[73006989] = v10;
        v11 = *v9;
        dword_140404A6C[73006986] = sr_maximum[2];
        v12 = *(v9 - 1);
        dword_140404A6C[73006991] = v11;
        dword_140404A6C[73006990] = v12;
        *(float *)&dword_140404A6C[73006987] = v41;
        dword_140404A6C[73007002] = -1;
      }
      ++v8;
      v9 += 21;
    }
    while ( v8 < 128 );
  }
  v13 = *v5;
  v14 = *v4;
  if ( *v5 >= *v4 )
  {
    (*(float *)&sr_maximum[0]) = *v5;
    v15 = v13;
  }
  else
  {
    (*(float *)&sr_maximum[0]) = *v4;
    v15 = v14;
  }
  v16 = fminf(v13, v14);
  v17 = v4[1];
  v18 = fmaxf(v4[2], v5[2]);
  v19 = fminf(v4[2], v5[2]);
  sr_minimum[0] = LODWORD(v16);
  v49[0] = 0;
  v20 = 0;
  v21 = fminf(v17, v5[1]);
  v22 = fmaxf(v17, v5[1]);
  v23 = (int)(float)(v16 * 0.015625);
  v49[12289] = 0;
  sr_minimum[2] = LODWORD(v19);
  v41 = *(float *)&v23;
  v24 = (int)(float)(v15 * 0.015625);
  sr_minimum[1] = LODWORD(v21);
  v42 = v24;
  v25 = (int)(float)(v19 * 0.015625);
  v26 = (int)(float)(v18 * 0.015625);
  sr_maximum[1] = LODWORD(v22);
  sr_maximum[2] = LODWORD(v18);
  if ( v25 <= v26 )
  {
    v27 = v25;
    v28 = 0;
    v29 = (__int64)v25 << 6;
    v30 = (unsigned int)(v26 - v25 + 1);
    do
    {
      if ( v27 <= 0x3F && v23 <= v24 )
      {
        v31 = v23;
        v32 = (unsigned int)(v24 - v23 + 1);
        do
        {
          if ( v31 <= 0x3F )
          {
            v33 = 0;
            v34 = (int)dword_140404A6C[9 * v29 + 254352099 + 9 * v31];
            if ( v34 > 0 )
            {
              do
              {
                if ( v28 < 64 )
                {
                  ++v20;
                  v56[v28++] = dword_140404A6C[8 * v29 + 254352100 + 8 * v31 + v29 + v31 + v33];
                }
                ++v33;
              }
              while ( v33 < v34 );
            }
          }
          ++v31;
          --v32;
        }
        while ( v32 );
        *(float *)&v23 = v41;
        v24 = v42;
      }
      ++v27;
      v29 += 64;
      --v30;
    }
    while ( v30 );
    v5 = v47;
    v4 = v48;
  }
  v35 = v20;
  if ( v20 > 0 )
  {
    v36 = 0;
    do
    {
      v37 = (int)v56[v36];
      v38 = 15432 * v37;
      if ( v15 >= *(float *)&dword_140404A6C[15432 * v37 + 358312926]
        && v22 >= *(float *)&dword_140404A6C[v38 + 358312927]
        && v18 >= *(float *)&dword_140404A6C[v38 + 358312928]
        && v16 <= *(float *)&dword_140404A6C[v38 + 358312929]
        && v21 <= *(float *)&dword_140404A6C[v38 + 358312930]
        && v19 <= *(float *)&dword_140404A6C[v38 + 358312931] )
      {
        sub_140188720(v49, (float *)&sr_minimum[0], &(*(float *)&sr_maximum[0]), v37, 2);
      }
      ++v36;
    }
    while ( v36 < v35 );
  }
  if ( sub_1400DA300((__int64)&sr_hit.first, v49, v5, v4) && *(float *)&dword_140404A6C[73006987] > sr_hit.coordinates[6] )
  {
    *(_QWORD *)&dword_140404A6C[73006989] = 0;
    __builtin_memcpy(&dword_140404A6C[73006981], &sr_hit.first, 16);
    dword_140404A6C[73006991] = 0;
    dword_140404A6C[73006985] = sr_hit.words[4];
    dword_140404A6C[73006986] = sr_hit.words[5];
    *(float *)&dword_140404A6C[73006987] = sr_hit.coordinates[6];
    dword_140404A6C[73007002] = -1;
  }
  return !(*(float *)&dword_140404A6C[73006987] >= 1.0f);
}
#undef v41
#undef v42
#undef v47
#undef v48
#undef v49
#undef v56
#undef v57

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400E21F0) ----------------------------------------------------
__int64            sub_1400E21F0(int a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float *v4; // r14
  __int64 v5; // r9
  float *v6; // r15
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rcx
  __int64 v16; // r12
  signed int v17; // esi
  __int64 v18; // r11
  __int64 v19; // rdx
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm15_4
  signed __int64 v29; // r15
  signed __int64 v30; // rsi
  signed __int64 v31; // r14
  unsigned __int64 v32; // r8
  signed __int64 v33; // rdx
  signed __int64 v34; // r10
  signed __int64 v35; // rbx
  signed __int64 v36; // rdi
  signed __int64 v37; // r13
  float *v38; // rax
  signed __int64 v39; // r12
  __int64 v40; // r8
  signed __int64 v41; // r11
  float v42; // xmm4_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm4_4
  float v50; // xmm1_4
  float v51; // xmm6_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm0_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm0_4
  float v71; // xmm5_4
  float v72; // xmm3_4
  float v73; // xmm1_4
  float v74; // xmm6_4
  float v75; // xmm2_4
  signed __int64 v76; // rcx
  float v77; // xmm1_4
  signed __int64 v78; // rcx
  float v79; // xmm1_4
  float v80; // xmm7_4
  float v81; // xmm8_4
  float v82; // xmm9_4
  float v83; // xmm10_4
  float v84; // xmm11_4
  float v85; // xmm12_4
  float v86; // xmm13_4
  float v87; // xmm14_4
  float v88; // xmm15_4
  float *v89; // rax
  __int64 v90; // rdx
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm6_4
  float v94; // xmm1_4
  float v95; // xmm3_4
  float v96; // xmm1_4
  int *v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rax
  float v100; // xmm15_4
  float v101; // xmm14_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm3_4
  __int64 v105; // rax
  float v106; // xmm2_4
  float v107; // xmm1_4
  float v108; // xmm3_4
  float v109; // xmm13_4
  float v110; // xmm11_4
  float v111; // xmm12_4
  float v112; // xmm13_4
  float v113; // xmm11_4
  float v114; // xmm4_4
  float v115; // xmm5_4
  float v116; // xmm10_4
  float v117; // xmm0_4
  float v118; // xmm8_4
  float v119; // xmm9_4
  float v120; // xmm6_4
  __int64 v121; // rax
  float v122; // xmm3_4
  float v123; // xmm4_4
  float v124; // xmm3_4
  float v125; // xmm4_4
  float v126; // xmm5_4
  float v127; // xmm3_4
  float v128; // xmm4_4
  float v129; // xmm0_4
  float v130; // xmm8_4
  float v131; // xmm9_4
  float v132; // xmm6_4
  _Alignas(8) unsigned char sr_mesh_normal[16];
  _Alignas(8) unsigned char sr_mesh_third[16];
  _Alignas(8) unsigned char sr_mesh_hit[16];
  _Alignas(8) unsigned char sr_mesh_second[16];
  _Alignas(8) unsigned char sr_mesh_first[16];
  _Alignas(16) unsigned char sr_mesh_vertices[3072];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E21F0[3312];
#define v134 (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 0)) /* [rsp+8h] */
#define v141 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 112)) /* [rsp+78h] */
#define v146 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 152)) /* [rsp+A0h] */
#define v147 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 160)) /* [rsp+A8h] */
#define v148 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 168)) /* [rsp+B0h] */
#define v149 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 176)) /* [rsp+B8h] */
#define v150 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 184)) /* [rsp+C0h] */
#define v151 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 192)) /* [rsp+C8h] */
#define v152 (*(signed __int64 (*))(void *)(sr_frame_1400E21F0 + 200)) /* [rsp+D0h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 208)) /* [rsp+D8h] */
#define v166 (*(__int64 (*))(void *)(sr_frame_1400E21F0 + 3296)) /* [rsp+CE8h] */

  v3 = *a2;
  v4 = a3;
  v5 = 5210LL * a1;
  (*(float * *)(void *)sr_mesh_second) = a3;
  v6 = a2;
  (*(float * *)(void *)sr_mesh_hit) = a2;
  v7 = *(float *)&dword_140404A6C[v5 + 129716753];
  if ( v3 < v7 && v7 > *a3 )
    return 0;
  v8 = *(float *)&dword_140404A6C[v5 + 129716754];
  v9 = a2[1];
  if ( v9 < v8 && v8 > a3[1] )
    return 0;
  v10 = *(float *)&dword_140404A6C[v5 + 129716755];
  v11 = a2[2];
  if ( v11 < v10 && v10 > a3[2] )
    return 0;
  v12 = *(float *)&dword_140404A6C[v5 + 129716756];
  if ( v3 > v12 && v12 < *a3 )
    return 0;
  v13 = *(float *)&dword_140404A6C[v5 + 129716757];
  if ( v9 > v13 && v13 < a3[1] )
    return 0;
  v14 = *(float *)&dword_140404A6C[v5 + 129716758];
  if ( v11 > v14 && v14 < a3[2] )
    return 0;
  v15 = (int)dword_140404A6C[v5 + 129716710];
  v16 = 180288 * v15;
  v17 = 0;
  dword_140404A6C[73006987] = 1065353216;
  (*(__int64 *)(void *)sr_mesh_normal) = v15;
  v18 = 0;
  (*(__int64 *)(void *)sr_mesh_third) = 180288 * v15;
  v19 = (int)dword_140404A6C[45072 * v15 + 335161466];
  v153 = v19;
  if ( v19 < 4 )
  {
    if ( v19 <= 0 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v20 = *(float *)&dword_140404A6C[v5 + 129716726];
  v21 = *(float *)&dword_140404A6C[v5 + 129716720];
  v22 = *(float *)&dword_140404A6C[v5 + 129716727];
  v23 = *(float *)&dword_140404A6C[v5 + 129716721];
  v24 = *(float *)&dword_140404A6C[v5 + 129716728];
  v25 = *(float *)&dword_140404A6C[v5 + 129716722];
  v26 = *(float *)&dword_140404A6C[v5 + 129716729];
  v27 = *(float *)&dword_140404A6C[v5 + 129716730];
  v28 = *(float *)&dword_140404A6C[v5 + 129716731];
  v141 = &(sr_mesh_vertices+28)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v29 = v141;
  v148 = (char *)&(*(int *)(void *)(sr_mesh_vertices+0)) - v16 - (char *)&dword_140404A6C[335161468];
  v146 = &(sr_mesh_vertices+32)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v30 = v146;
  v149 = &(sr_mesh_vertices+12)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v147 = &(sr_mesh_vertices+40)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v31 = v147;
  v150 = &(*(char *)(sr_mesh_vertices+24)) - v16 - (char *)&dword_140404A6C[335161468];
  v152 = &(sr_mesh_vertices+44)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v32 = v19 - 4;
  v33 = v149;
  v34 = (char *)&(*(int *)(void *)(sr_mesh_vertices+4)) - v16 - (char *)&dword_140404A6C[335161468];
  v151 = &(*(char *)(sr_mesh_vertices+36)) - v16 - (char *)&dword_140404A6C[335161468];
  v35 = &(sr_mesh_vertices+12)[-v16 - 4] - (_BYTE *)&dword_140404A6C[335161468];
  v36 = &(sr_mesh_vertices+16)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v37 = &(sr_mesh_vertices+20)[-v16] - (_BYTE *)&dword_140404A6C[335161468];
  v38 = (float *)((char *)&dword_140404A6C[335161468] + v16);
  v39 = v148;
  v40 = (v32 >> 2) + 1;
  (*(__int64 *)(void *)sr_mesh_first) = 4 * v40;
  v41 = v150;
  do
  {
    v42 = *(v38 - 1);
    v43 = v38[1];
    v44 = v28 * *v38;
    v45 = v38[3];
    v46 = (float)((float)((float)(v22 * v42) + v23) + (float)(v27 * *v38))
        + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v43);
    v47 = *(float *)&dword_140404A6C[v5 + 129716734];
    *(float *)((char *)v38 + v39) = (float)((float)((float)(v20 * v42) + v21) + (float)(v26 * *v38))
                                  + (float)(*(float *)&dword_140404A6C[v5 + 129716732] * v43);
    v48 = v24 * v42;
    v49 = v38[2];
    v50 = v47 * v43;
    v51 = v38[4];
    *(float *)((char *)v38 + v34) = v46;
    v52 = (float)((float)(v48 + v25) + v44) + v50;
    v53 = *(float *)&dword_140404A6C[v5 + 129716732] * v51;
    *(float *)((char *)v38 + v35) = v52;
    v54 = (float)((float)((float)(v20 * v49) + v21) + (float)(v26 * v45)) + v53;
    v55 = (float)((float)(v22 * v49) + v23) + (float)(v27 * v45);
    v56 = v28 * v45;
    v57 = v38[6];
    v58 = v55 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v51);
    v59 = *(float *)&dword_140404A6C[v5 + 129716734];
    *(float *)((char *)v38 + v33) = v54;
    v60 = v24 * v49;
    v61 = v38[5];
    v62 = v59 * v51;
    v63 = v38[7];
    *(float *)((char *)v38 + v36) = v58;
    v64 = (float)((float)(v60 + v25) + v56) + v62;
    v65 = *(float *)&dword_140404A6C[v5 + 129716732] * v63;
    *(float *)((char *)v38 + v37) = v64;
    *(float *)((char *)v38 + v41) = (float)((float)((float)(v20 * v61) + v21) + (float)(v26 * v57)) + v65;
    v66 = (float)(v24 * v61) + v25;
    v67 = v22 * v61;
    v68 = v38[8];
    v69 = (float)(v67 + v23) + (float)(v27 * v57);
    v70 = v28 * v57;
    v71 = v38[9];
    v72 = v69 + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v63);
    v73 = *(float *)&dword_140404A6C[v5 + 129716734] * v63;
    v74 = v38[10];
    *(float *)((char *)v38 + v29) = v72;
    v75 = (float)(v66 + v70) + v73;
    v76 = v151;
    v77 = *(float *)&dword_140404A6C[v5 + 129716732] * v74;
    *(float *)((char *)v38 + v30) = v75;
    *(float *)((char *)v38 + v76) = (float)((float)((float)(v20 * v68) + v21) + (float)(v26 * v71)) + v77;
    v78 = v152;
    v79 = *(float *)&dword_140404A6C[v5 + 129716734] * v74;
    *(float *)((char *)v38 + v31) = (float)((float)((float)(v22 * v68) + v23) + (float)(v27 * v71))
                                  + (float)(*(float *)&dword_140404A6C[v5 + 129716733] * v74);
    *(float *)((char *)v38 + v78) = (float)((float)((float)(v24 * v68) + v25) + (float)(v28 * v71)) + v79;
    v38 += 12;
    --v40;
  }
  while ( v40 );
  v19 = v153;
  v18 = (*(__int64 *)(void *)sr_mesh_first);
  v17 = 0;
  v4 = (*(float * *)(void *)sr_mesh_second);
  v6 = (*(float * *)(void *)sr_mesh_hit);
  v16 = (*(__int64 *)(void *)sr_mesh_third);
  v15 = (*(__int64 *)(void *)sr_mesh_normal);
  if ( (*(__int64 *)(void *)sr_mesh_first) < v153 )
  {
LABEL_17:
    v80 = *(float *)&dword_140404A6C[v5 + 129716726];
    v81 = *(float *)&dword_140404A6C[v5 + 129716720];
    v82 = *(float *)&dword_140404A6C[v5 + 129716727];
    v83 = *(float *)&dword_140404A6C[v5 + 129716721];
    v84 = *(float *)&dword_140404A6C[v5 + 129716728];
    v85 = *(float *)&dword_140404A6C[v5 + 129716722];
    v86 = *(float *)&dword_140404A6C[v5 + 129716729];
    v87 = *(float *)&dword_140404A6C[v5 + 129716730];
    v88 = *(float *)&dword_140404A6C[v5 + 129716731];
    v89 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12 * (v18 + 15024 * v15) + 1344859228);
    v90 = v19 - v18;
    do
    {
      v91 = *(v89 - 1);
      v92 = *v89;
      v93 = v89[1];
      v94 = *(float *)&dword_140404A6C[v5 + 129716733] * v93;
      *(float *)((uintptr_t)v89 + (uintptr_t)&(*(int *)(void *)(sr_mesh_vertices+0)) - v16 - (uintptr_t)&dword_140404A6C[335161468]) = (float)((float)((float)(v80 * v91) + v81)
                                                                                                  + (float)(v86 * *v89))
                                                                                          + (float)(*(float *)&dword_140404A6C[v5 + 129716732]
                                                                                                  * v93);
      v95 = (float)((float)((float)(v82 * v91) + v83) + (float)(v87 * v92)) + v94;
      v96 = *(float *)&dword_140404A6C[v5 + 129716734] * v93;
      *(float *)((uintptr_t)v89 + (uintptr_t)&(*(int *)(void *)(sr_mesh_vertices+4)) - v16 - (uintptr_t)&dword_140404A6C[335161468]) = v95;
      *(float *)((uintptr_t)v89 + ((uintptr_t)(sr_mesh_vertices+12) + (-v16 - 4)) - (uintptr_t)&dword_140404A6C[335161468]) = (float)((float)((float)(v84 * v91) + v85)
                                                                                               + (float)(v88 * v92))
                                                                                       + v96;
      v89 += 3;
      --v90;
    }
    while ( v90 );
  }
LABEL_19:
  if ( *(int *)((char *)&dword_140404A6C[335164539] + v16) > 0 )
  {
    v97 = (int *)((char *)&dword_140404A6C[335164543] + v16);
    do
    {
      v98 = 3LL * *(v97 - 1);
      v99 = *v97;
      LODWORD(v100) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * *(v97 - 1));
      LODWORD(v101) = *(&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * *(v97 - 1));
      (*(float *)(void *)(sr_mesh_first+8)) = *(float *)&(sr_mesh_vertices+12)[12 * *(v97 - 1) - 4];
      v102 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * v99);
      v103 = *(float *)&(sr_mesh_vertices+12)[12 * v99 - 4];
      v104 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * v99);
      v105 = v97[1];
      *((float *)&(*(float * *)(void *)sr_mesh_second) + 1) = v102;
      v106 = v102 - v100;
      (*(float *)(void *)(sr_mesh_second+8)) = v103;
      v107 = v103 - (*(float *)(void *)(sr_mesh_first+8));
      *(float *)&(*(float * *)(void *)sr_mesh_second) = v104;
      v108 = v104 - v101;
      (*(__int64 *)(void *)sr_mesh_first) = __PAIR64__(LODWORD(v100), LODWORD(v101));
      v109 = *(float *)&(sr_mesh_vertices+12)[12 * v105 - 4];
      v110 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * v105);
      HIDWORD((*(__int64 *)(void *)sr_mesh_third)) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * v105);
      v111 = *((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - v100;
      *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8)) = v109;
      v112 = v109 - (*(float *)(void *)(sr_mesh_first+8));
      *(float *)&(*(__int64 *)(void *)sr_mesh_third) = v110;
      v113 = v110 - v101;
      v114 = (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - v100) * v107) - (float)(v112 * v106);
      v115 = (float)(v112 * v108) - (float)(v113 * v107);
      v116 = (float)(v113 * v106) - (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - v100) * v108);
      v117 = fsqrt((float)((float)(v115 * v115) + (float)(v114 * v114)) + (float)(v116 * v116));
      if ( v117 == 0.0 )
      {
        (*(__int64 *)(void *)sr_mesh_normal) = 0;
        v118 = 0.0;
        v119 = 0.0;
        LODWORD((*(__int64 *)(void *)(sr_mesh_normal+8))) = 0;
        v120 = 0.0;
      }
      else
      {
        v118 = (float)(1.0f / v117) * v114;
        v119 = (float)(1.0f / v117) * v115;
        v120 = (float)(1.0f / v117) * v116;
        *(float *)&(*(__int64 *)(void *)sr_mesh_normal) = v118;
        *((float *)&(*(__int64 *)(void *)sr_mesh_normal) + 1) = v119;
        *(float *)&(*(__int64 *)(void *)(sr_mesh_normal+8)) = v120;
      }
      if ( sub_140077FA0(
             (float *)&(*(float * *)(void *)sr_mesh_hit),
             (float *)&(*(__int64 *)(void *)sr_mesh_normal),
             (float *)&v141,
             v6,
             v4,
             (float *)&(*(__int64 *)(void *)sr_mesh_first),
             (float *)&(*(float * *)(void *)sr_mesh_second),
             (float *)&(*(__int64 *)(void *)sr_mesh_third))
        && *(float *)&v141 < *(float *)&dword_140404A6C[73006987] )
      {
        dword_140404A6C[73006981] = (unsigned int)(*(float * *)(void *)sr_mesh_hit);
        *(_QWORD *)&dword_140404A6C[73006982] = __PAIR64__((*(__int64 *)(void *)(sr_mesh_hit+8)), HIDWORD((*(float * *)(void *)sr_mesh_hit)));
        *(float *)&dword_140404A6C[73006984] = v118;
        *(float *)&dword_140404A6C[73006985] = v119;
        *(float *)&dword_140404A6C[73006986] = v120;
        dword_140404A6C[73006987] = v141;
        dword_140404A6C[73006993] = v17;
      }
      if ( *(v97 - 2) == 4 )
      {
        (*(float * *)(void *)sr_mesh_second) = (float *)(*(__int64 *)(void *)sr_mesh_third);
        (*(float *)(void *)(sr_mesh_second+8)) = *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8));
        v121 = v97[2];
        v122 = *(float *)&(sr_mesh_vertices+12)[12 * v121 - 4];
        v123 = *((float *)&(*(int *)(void *)(sr_mesh_vertices+0)) + 3 * v121);
        HIDWORD((*(__int64 *)(void *)sr_mesh_third)) = *(&(*(int *)(void *)(sr_mesh_vertices+4)) + 3 * v121);
        *(float *)&(*(__int64 *)(void *)(sr_mesh_third+8)) = v122;
        v124 = v122 - *(float *)&(sr_mesh_vertices+12)[4 * v98 - 4];
        *(float *)&(*(__int64 *)(void *)sr_mesh_third) = v123;
        v125 = v123 - v101;
        v126 = (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - v100) * v112) - (float)(v124 * v111);
        v127 = (float)(v124 * v113) - (float)(v125 * v112);
        v128 = (float)(v125 * v111) - (float)((float)(*((float *)&(*(__int64 *)(void *)sr_mesh_third) + 1) - v100) * v113);
        v129 = fsqrt((float)((float)(v127 * v127) + (float)(v126 * v126)) + (float)(v128 * v128));
        if ( v129 == 0.0 )
        {
          (*(__int64 *)(void *)sr_mesh_normal) = 0;
          v130 = 0.0;
          v131 = 0.0;
          LODWORD((*(__int64 *)(void *)(sr_mesh_normal+8))) = 0;
          v132 = 0.0;
        }
        else
        {
          v130 = (float)(1.0f / v129) * v126;
          v131 = (float)(1.0f / v129) * v127;
          v132 = (float)(1.0f / v129) * v128;
          *(float *)&(*(__int64 *)(void *)sr_mesh_normal) = v130;
          *((float *)&(*(__int64 *)(void *)sr_mesh_normal) + 1) = v131;
          *(float *)&(*(__int64 *)(void *)(sr_mesh_normal+8)) = v132;
        }
        if ( sub_140077FA0(
               (float *)&(*(float * *)(void *)sr_mesh_hit),
               (float *)&(*(__int64 *)(void *)sr_mesh_normal),
               (float *)&v141,
               v6,
               v4,
               (float *)&(*(__int64 *)(void *)sr_mesh_first),
               (float *)&(*(float * *)(void *)sr_mesh_second),
               (float *)&(*(__int64 *)(void *)sr_mesh_third))
          && *(float *)&v141 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006981] = (unsigned int)(*(float * *)(void *)sr_mesh_hit);
          *(_QWORD *)&dword_140404A6C[73006982] = __PAIR64__((*(__int64 *)(void *)(sr_mesh_hit+8)), HIDWORD((*(float * *)(void *)sr_mesh_hit)));
          *(float *)&dword_140404A6C[73006984] = v130;
          *(float *)&dword_140404A6C[73006985] = v131;
          *(float *)&dword_140404A6C[73006986] = v132;
          dword_140404A6C[73006987] = v141;
          dword_140404A6C[73006993] = v17;
        }
      }
      ++v17;
      v97 += 6;
    }
    while ( v17 < *(int *)((char *)&dword_140404A6C[335164539] + v16) );
  }
  unsigned char sr_mesh_found;
  __asm__ volatile("comiss %2, %1; setb %0" : "=qm"(sr_mesh_found)
                   : "x"(_mm_set_ss(*(float *)&dword_140404A6C[73006987])), "x"(_mm_set_ss(1.0f)) : "cc");
  return sr_mesh_found;
}
#undef v134
#undef v141
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153
#undef v166

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B27ECF4: using guessed type unsigned int;

//----- (0000000140108930) ----------------------------------------------------
__int64 sub_140108930()
{
  float *v0; // rbx
  int v1; // r12d
  signed int v2; // r14d
  float v3; // xmm4_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  __int64 v7; // r15
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float *v11; // rdi
  float v12; // xmm0_4
  float *v13; // rsi
  float v14; // xmm6_4
  float v15; // xmm1_4
  unsigned int v16; // eax
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm1_4
  unsigned int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm0_4
  __int64 v24; // rcx
  float v25; // xmm5_4
  float v26; // xmm12_4
  float v27; // xmm10_4
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm9_4
  float v31; // xmm6_4
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm11_4
  float v35; // xmm0_4
  float v36; // xmm13_4
  float v37; // xmm9_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm1_4
  float v43; // xmm5_4
  float v44; // xmm12_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float *v51; // rsi
  unsigned int *v52; // rdi
  __int64 v53; // rbx
  int v54; // eax
  unsigned int v55; // xmm7_4
  float v56; // xmm4_4
  unsigned int v57; // xmm5_4
  unsigned int v58; // xmm6_4
  float v59; // xmm3_4
  __int64 v60; // rax
  float v61; // xmm0_4
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edx
  __int64 v65; // rcx
  unsigned int v66; // xmm0_4
  unsigned int v67; // xmm1_4
  unsigned int v68; // xmm2_4
  unsigned int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // rcx
  unsigned int v72; // xmm0_4
  float v73; // xmm1_4
  unsigned int v74; // xmm2_4
  __int64 v75; // rdx
  float v76; // xmm5_4
  float v77; // xmm9_4
  float v78; // xmm6_4
  float v79; // xmm7_4
  float v80; // xmm8_4
  float v81; // xmm10_4
  float v82; // xmm5_4
  float v83; // xmm4_4
  float v84; // xmm4_4
  unsigned int v85; // eax
  __int64 v86; // rcx
  float v87; // xmm3_4
  bool v88; // cc
  int v89; // r14d
  unsigned int *v90; // rsi
  __int64 v91; // r15
  __int64 v92; // rax
  float v93; // xmm10_4
  float v94; // xmm4_4
  float v95; // xmm8_4
  float v96; // xmm6_4
  float v97; // xmm3_4
  float v98; // xmm1_4
  float v99; // xmm7_4
  float v100; // xmm9_4
  float v101; // xmm2_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm10_4
  float v105; // xmm0_4
  __int64 v106; // rdx
  unsigned int *v107; // rcx
  unsigned int *v108; // rcx
  __int64 v109; // r13
  signed int v110; // r12d
  __int64 v111; // rbx
  float *v112; // r15
  float v113; // xmm1_4
  float v114; // xmm2_4
  float v115; // xmm3_4
  float v116; // xmm6_4
  float v117; // xmm3_4
  float v118; // xmm5_4
  float v119; // xmm3_4
  float v120; // xmm6_4
  float v121; // xmm1_4
  float v122; // xmm0_4
  float v123; // xmm0_4
  float v124; // xmm1_4
  unsigned int v125; // r10d
  float v126; // xmm10_4
  int v127; // esi
  float v128; // xmm11_4
  float v129; // xmm12_4
  unsigned int v130; // edx
  unsigned int v131; // r9d
  unsigned int v132; // esi
  unsigned int v133; // r14d
  unsigned int v134; // r11d
  unsigned int v135; // r8d
  __int64 v136; // rcx
  unsigned int v137; // xmm0_4
  unsigned int v138; // xmm1_4
  unsigned int v139; // xmm2_4
  float v140; // xmm8_4
  float v141; // xmm7_4
  float v142; // xmm9_4
  float v143; // xmm6_4
  int v144; // eax
  float v145; // xmm0_4
  unsigned int v146; // xmm1_4
  float v147; // xmm8_4
  float v148; // xmm9_4
  unsigned int *v149; // r8
  __int64 v150; // rdx
  float v151; // xmm1_4
  float *v152; // rcx
  float v153; // xmm6_4
  float v154; // xmm4_4
  float v155; // xmm7_4
  float v156; // xmm0_4
  float v157; // xmm8_4
  float v158; // xmm0_4
  unsigned int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // rdx
  float v162; // xmm1_4
  float *v163; // rcx
  float v164; // xmm6_4
  float v165; // xmm4_4
  float v166; // xmm7_4
  float v167; // xmm0_4
  float v168; // xmm8_4
  float v169; // xmm0_4
  unsigned int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // rdx
  float v173; // xmm1_4
  float *v174; // rcx
  float v175; // xmm6_4
  float v176; // xmm4_4
  float v177; // xmm7_4
  float v178; // xmm0_4
  float v179; // xmm8_4
  float v180; // xmm0_4
  unsigned int v181; // eax
  __int64 v182; // rcx
  __int64 v183; // rdx
  float v184; // xmm1_4
  float *v185; // rcx
  float v186; // xmm6_4
  float v187; // xmm4_4
  float v188; // xmm7_4
  float v189; // xmm0_4
  float v190; // xmm8_4
  float v191; // xmm0_4
  unsigned int v192; // eax
  __int64 v193; // rcx
  __int64 v194; // rdx
  float v195; // xmm1_4
  float *v196; // rcx
  float v197; // xmm6_4
  float v198; // xmm4_4
  float v199; // xmm7_4
  float v200; // xmm0_4
  float v201; // xmm8_4
  float v202; // xmm0_4
  unsigned int v203; // eax
  __int64 v204; // rcx
  __int64 v205; // rdx
  float v206; // xmm1_4
  float *v207; // rcx
  float v208; // xmm6_4
  float v209; // xmm4_4
  float v210; // xmm7_4
  float v211; // xmm0_4
  float v212; // xmm8_4
  float v213; // xmm0_4
  unsigned int v214; // eax
  __int64 v215; // rcx
  __int64 v216; // rdx
  float v217; // xmm1_4
  float *v218; // rcx
  float v219; // xmm6_4
  float v220; // xmm4_4
  float v221; // xmm7_4
  float v222; // xmm0_4
  float v223; // xmm8_4
  float v224; // xmm0_4
  unsigned int v225; // eax
  __int64 v226; // rcx
  __int64 v227; // rdx
  float v228; // xmm1_4
  float *v229; // rcx
  float v230; // xmm6_4
  float v231; // xmm4_4
  float v232; // xmm7_4
  float v233; // xmm0_4
  float v234; // xmm8_4
  float v235; // xmm0_4
  unsigned int v236; // eax
  __int64 v237; // rcx
  __int64 v238; // rdi
  unsigned int *v239; // r14
  float *v240; // rsi
  __int64 v241; // r13
  char *v242; // r15
  __int64 v243; // r12
  __int64 v244; // rdi
  __int64 v245; // r8
  int v246; // eax
  unsigned int *v247; // rax
  unsigned int *v248; // rbx
  int v249; // r13d
  int v250; // r15d
  unsigned int *v251; // rsi
  __int64 v252; // rax
  __int64 v253; // r12
  signed int v254; // r14d
  float *v255; // r13
  float *v256; // rdi
  float v257; // xmm1_4
  float v258; // xmm2_4
  float v259; // xmm3_4
  float v260; // xmm6_4
  float v261; // xmm3_4
  float v262; // xmm5_4
  float v263; // xmm3_4
  float v264; // xmm6_4
  float v265; // xmm1_4
  float v266; // xmm0_4
  float v267; // xmm0_4
  float v268; // xmm1_4
  __int64 v269; // r10
  __int64 v270; // rdx
  float v271; // xmm1_4
  float v272; // xmm0_4
  float v273; // xmm1_4
  float v274; // xmm0_4
  float sr_mesh_ray_start[3];
  float sr_mesh_ray_end[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140108930[2256];
#define v276 (*(_DWORD (*)[12])(void *)(sr_frame_140108930 + 0)) /* [rsp+8h] */
#define v277 (*(__int64 (*))(void *)(sr_frame_140108930 + 48)) /* [rsp+38h] */
#define v278 (*(int (*))(void *)(sr_frame_140108930 + 56)) /* [rsp+40h] */
#define v279 (*(int (*))(void *)(sr_frame_140108930 + 64)) /* [rsp+48h] */
#define v280 (*(int (*))(void *)(sr_frame_140108930 + 80)) /* [rsp+58h] */
#define v281 (*(__int64 (*))(void *)(sr_frame_140108930 + 88)) /* [rsp+60h] */
#define v282 (*(__int64 (*))(void *)(sr_frame_140108930 + 96)) /* [rsp+68h] */
#define v283 (*(__int64 (*))(void *)(sr_frame_140108930 + 104)) /* [rsp+70h] */
#define v284 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 112)) /* [rsp+78h] */
#define v285 (*(int (*))(void *)(sr_frame_140108930 + 120)) /* [rsp+80h] */
#define v286 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 128)) /* [rsp+88h] */
#define v287 (*(unsigned int * (*))(void *)(sr_frame_140108930 + 136)) /* [rsp+90h] */
#define v288 (*(unsigned int (*))(void *)(sr_frame_140108930 + 144)) /* [rsp+98h] */
#define v289 (*(char (*))(void *)(sr_frame_140108930 + 152)) /* [rsp+A0h] */
#define v296 (*(__int64 (*))(void *)(sr_frame_140108930 + 2240)) /* [rsp+8C8h] */

  v0 = (float *)&dword_140404A6C[129716748];
  v1 = 0;
  v2 = 0;
  dword_140404A6C[284024928] = 0;
  do
  {
    if ( !*((_DWORD *)v0 - 39) )
      goto LABEL_31;
    v3 = *(v0 - 4);
    v4 = *(v0 - 1) - v3;
    v5 = *v0 - *(v0 - 3);
    v6 = *(v0 - 2);
    v7 = *((int *)v0 - 29);
    v8 = v0[1] - v6;
    *(v0 - 1) = v3;
    *v0 = *(v0 - 3);
    v0[1] = v6;
    v9 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v8 * v8));
    if ( *(v0 - 27) < -32.0 )
      *(v0 - 32) = 0.0;
    if ( *((_DWORD *)v0 - 38) != 14 )
    {
      if ( v9 <= 0.11666667 )
      {
        v11 = v0 + 5161;
        v13 = v0 + 5161;
        v12 = v0[5161];
        v10 = v9 * 60.0;
        if ( v9 <= 0.033333335 )
        {
          if ( v12 > 0.5 )
          {
            v20 = (float)((float)(unsigned __int8)rand() * 0.0009765625) + 0.875;
            if ( dword_140404A6C[456202453] )
            {
              v21 = dword_140404A6C[283831474];
              v22 = (__int64)(int)dword_140404A6C[308307070] << 7;
              v23 = *v11 * 0.5;
              ++dword_140404A6C[308307070];
              HIWORD(dword_140404A6C[308307070]) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v22) = 9;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v22) = v21;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v22) = dword_140404A6C[283785964];
              *(unsigned int *)((char *)&dword_140404A6C[297756287] + v22) = *((_DWORD *)v0 - 28);
              *(unsigned int *)((char *)&dword_140404A6C[297756288] + v22) = *((_DWORD *)v0 - 27);
              *(unsigned int *)((char *)&dword_140404A6C[297756289] + v22) = *((_DWORD *)v0 - 26);
              *(float *)((char *)&dword_140404A6C[297756297] + v22) = v23;
              *(float *)((char *)&dword_140404A6C[297756298] + v22) = v20;
            }
          }
          *v11 = 0.0;
          goto LABEL_18;
        }
      }
      else
      {
        v10 = v9 * 60.0;
        sub_14000B650(v2, (int)(float)((float)(v9 * 60.0) + 10.0));
        v11 = v0 + 5161;
        v12 = v0[5161];
        v13 = v0 + 5161;
      }
      v14 = (float)(v10 * 0.125) + v12;
      *v11 = v14;
      if ( v14 > 2.0 )
      {
        v15 = (float)((float)(unsigned __int8)rand() * 0.0009765625) + 0.875;
        if ( dword_140404A6C[456202453] )
        {
          v16 = dword_140404A6C[283831474];
          v17 = *v11;
          v18 = (__int64)(int)dword_140404A6C[308307070] << 7;
          v19 = *v11 - 2.0;
          ++dword_140404A6C[308307070];
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v18) = 9;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v18) = v16;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v18) = dword_140404A6C[283785964];
          *(unsigned int *)((char *)&dword_140404A6C[297756287] + v18) = *((_DWORD *)v0 - 28);
          *(unsigned int *)((char *)&dword_140404A6C[297756288] + v18) = *((_DWORD *)v0 - 27);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v18) = *((_DWORD *)v0 - 26);
          *(float *)((char *)&dword_140404A6C[297756297] + v18) = v17 * 0.5;
          *(float *)((char *)&dword_140404A6C[297756298] + v18) = v15;
        }
        else
        {
          v19 = *v13 - 2.0;
        }
        *v11 = v19;
      }
    }
LABEL_18:
    v24 = 47 * v7;
    v25 = *(float *)&dword_140404A6C[47 * v7 + 18215719];
    v26 = *(float *)&dword_140404A6C[47 * v7 + 18215718];
    v27 = *(float *)&dword_140404A6C[47 * v7 + 18215720];
    v28 = (float)(v26 * v26) + (float)(v25 * v25);
    v29 = (float)(v27 * v27) + v28;
    v30 = fsqrt(v29);
    if ( v30 == 0.0 )
    {
      v31 = 0.0;
      v32 = 0.0;
      v33 = 0.0;
    }
    else
    {
      v31 = (float)(1.0 / v30) * v26;
      v32 = (float)(1.0 / v30) * v25;
      v33 = (float)(1.0 / v30) * v27;
    }
    v34 = *(float *)&dword_140404A6C[v24 + 18215724];
    if ( *(float *)&dword_140404A6C[297756277] >= *(float *)&dword_140404A6C[v24 + 18215716] )
      v35 = -0.30000001;
    else
      v35 = -0.0015;
    v36 = v30 * -0.125;
    v37 = v30 * 0.125;
    v38 = fminf(
            fmaxf(
              (float)(v29 * v35)
            * (float)((float)((float)(v32 * *(float *)&dword_140404A6C[v24 + 18215725]) + (float)(v31 * v34))
                    + (float)(v33 * *(float *)&dword_140404A6C[v24 + 18215726])),
              v36),
            v37);
    v39 = (float)((float)((float)(v27 + v27) * v27) + v28) + v28;
    v40 = (float)(v34 * v38) + v26;
    *(float *)&dword_140404A6C[v24 + 18215718] = v40;
    *(float *)&dword_140404A6C[v24 + 18215719] = (float)(v38 * *(float *)&dword_140404A6C[v24 + 18215725]) + v25;
    *(float *)&dword_140404A6C[v24 + 18215720] = (float)(v38 * *(float *)&dword_140404A6C[v24 + 18215726]) + v27;
    v41 = *(float *)&dword_140404A6C[v24 + 18215727];
    if ( *(float *)&dword_140404A6C[297756277] >= *(float *)&dword_140404A6C[v24 + 18215716] )
      v42 = v39 * -0.30000001;
    else
      v42 = (float)(v39 * -0.00075000001) - (float)(v39 * 0.00075000001);
    v43 = fminf(
            fmaxf(
              (float)((float)((float)(v32 * *(float *)&dword_140404A6C[v24 + 18215728]) + (float)(v31 * v41))
                    + (float)(v33 * *(float *)&dword_140404A6C[v24 + 18215729]))
            * v42,
              v36),
            v37);
    v44 = (float)(v41 * v43) + v40;
    *(float *)&dword_140404A6C[v24 + 18215718] = v44;
    *(float *)&dword_140404A6C[v24 + 18215719] = (float)(v43 * *(float *)&dword_140404A6C[v24 + 18215728])
                                               + *(float *)&dword_140404A6C[v24 + 18215719];
    v45 = *(float *)&dword_140404A6C[297756277];
    v46 = (float)(v43 * *(float *)&dword_140404A6C[v24 + 18215729]) + *(float *)&dword_140404A6C[v24 + 18215720];
    *(float *)&dword_140404A6C[v24 + 18215720] = v46;
    v47 = *(float *)&dword_140404A6C[v24 + 18215730];
    v48 = (float)((float)(v32 * *(float *)&dword_140404A6C[v24 + 18215731]) + (float)(v31 * v47))
        + (float)(v33 * *(float *)&dword_140404A6C[v24 + 18215732]);
    if ( v45 >= *(float *)&dword_140404A6C[v24 + 18215716] )
      v49 = v29 * -0.075000003;
    else
      v49 = v39 * -0.0001875;
    v50 = fminf(fmaxf(v48 * v49, v36), v37);
    *(float *)&dword_140404A6C[v24 + 18215718] = (float)(v47 * v50) + v44;
    *(float *)&dword_140404A6C[v24 + 18215719] = (float)(v50 * *(float *)&dword_140404A6C[v24 + 18215731])
                                               + *(float *)&dword_140404A6C[v24 + 18215719];
    *(float *)&dword_140404A6C[v24 + 18215720] = (float)(v50 * *(float *)&dword_140404A6C[v24 + 18215732]) + v46;
LABEL_31:
    ++v2;
    v0 += 5210;
  }
  while ( v2 < 512 );
  v51 = (float *)&dword_140404A6C[129716720];
  v52 = &dword_140404A6C[129716721];
  v280 = 0;
  v286 = &dword_140404A6C[129716720];
  v284 = &dword_140404A6C[129716720];
  v287 = &dword_140404A6C[129716721];
  while ( 2 )
  {
    if ( !*(v52 - 12) )
      goto LABEL_106;
    v53 = (int)*(v52 - 2);
    v54 = *(v52 - 10);
    v285 = *(v52 - 2);
    if ( v54 == 1 )
    {
      sub_14010AA70(v1);
      v54 = *(v52 - 10);
    }
    if ( v54 == 2 )
      sub_14010AF90(v1);
    if ( *(v52 - 11) == 13 )
    {
      sub_14010C110(v1);
      if ( *(v52 - 11) == 13 )
      {
        v55 = v52[24];
        v56 = 0.46666667;
        v57 = v52[23];
        v58 = v52[25];
        v59 = (float)((float)(*(float *)&v55 * *((float *)v52 + 12)) + (float)(*(float *)&v57 * *((float *)v52 + 11)))
            + (float)(*(float *)&v58 * *((float *)v52 + 13));
        v52[3648] = (int)(float)(fabs(v59) * 7200.0);
        v60 = (int)v52[5088];
        if ( (_DWORD)v60 != -1 )
        {
          v61 = fminf(
                  fminf(
                    *(float *)&dword_140404A6C[15432 * dword_140404A6C[15432 * v60 + 358312924] + 358312932],
                    *(float *)&dword_140404A6C[15432 * v60 + 358312932]),
                  *(float *)&dword_140404A6C[15432 * dword_140404A6C[15432 * v60 + 358312925] + 358312932]);
          v56 = (float)(v61 * 0.46666667) * v61;
        }
        v62 = v52[2550];
        if ( v59 <= -0.033333335 )
        {
          if ( v62 )
          {
            if ( dword_140404A6C[456202453] )
            {
              v69 = dword_140404A6C[283831474];
              v70 = dword_140404A6C[308307070];
              v71 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v71) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v71) = v69;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v71) = v1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v71) = 6;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v71) = 3;
              if ( v52 == (unsigned int *)4 )
              {
                v72 = 0;
                v73 = 0.0;
                v74 = 0;
              }
              else
              {
                v72 = v52[1];
                v73 = *(float *)v52;
                v74 = *(v52 - 1);
              }
              *(unsigned int *)((char *)&dword_140404A6C[297756287] + v71) = v74;
              *(float *)((char *)&dword_140404A6C[297756288] + v71) = v73;
              *(unsigned int *)((char *)&dword_140404A6C[297756289] + v71) = v72;
              *(unsigned int *)((char *)&dword_140404A6C[297756290] + v71) = v57;
              *(unsigned int *)((char *)&dword_140404A6C[297756291] + v71) = v55;
              *(unsigned int *)((char *)&dword_140404A6C[297756292] + v71) = v58;
              dword_140404A6C[308307070] = v70 + 1;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v52[2550] = 0;
          }
        }
        else if ( !v62 )
        {
          if ( dword_140404A6C[456202453] )
          {
            v63 = dword_140404A6C[283831474];
            v64 = dword_140404A6C[308307070];
            v65 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v65) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v65) = v63;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v65) = v1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v65) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v65) = 3;
            if ( v52 == (unsigned int *)4 )
            {
              v66 = 0;
              v67 = 0;
              v68 = 0;
            }
            else
            {
              v66 = v52[1];
              v67 = *v52;
              v68 = *(v52 - 1);
            }
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v65) = v68;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v65) = v67;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v65) = v66;
            *(unsigned int *)((char *)&dword_140404A6C[297756290] + v65) = v57;
            *(unsigned int *)((char *)&dword_140404A6C[297756291] + v65) = v55;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v65) = v58;
            dword_140404A6C[308307070] = v64 + 1;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v52[2550] = 1;
        }
        v75 = (int)v52[5090];
        v76 = *((float *)v52 - 1);
        v77 = *(float *)v52;
        v78 = *((float *)v52 + 1);
        v79 = *(float *)&dword_140404A6C[5 * v75 + 112631655];
        v80 = *(float *)&dword_140404A6C[5 * v75 + 112631656];
        v81 = *(float *)&dword_140404A6C[5 * v75 + 112631657];
        if ( (float)((float)((float)((float)(v80 - v77) * (float)(v80 - v77))
                           + (float)((float)(v79 - v76) * (float)(v79 - v76)))
                   + (float)((float)(v81 - v78) * (float)(v81 - v78))) < 65536.0 )
        {
          sr_mesh_ray_start[0] = v76 - v79;
          v82 = (float)(v76 - v79) * *((float *)v52 + 11);
          sr_mesh_ray_start[1] = v77 - v80;
          v83 = (float)(v77 - v80) * *((float *)v52 + 12);
          sr_mesh_ray_start[2] = v78 - v81;
          v84 = (float)(v83 + v82) + (float)((float)(v78 - v81) * *((float *)v52 + 13));
          if ( v84 < 16.0 )
            v84 = 0.0;
          if ( v52[5089] == 1 )
            v84 = -v84;
          v56 = v84 * 0.0018229167;
          if ( v59 >= 0.016666668 || v59 <= -0.016666668 )
          {
LABEL_68:
            v52[5087] = 0;
          }
          else if ( (int)++v52[5087] >= 900 )
          {
            v85 = v75 + 1;
            if ( (int)v75 + 1 >= (int)dword_140404A6C[112631653] )
              v85 = 0;
            v52[5090] = v85;
            goto LABEL_68;
          }
        }
        v86 = 47LL * (int)*(v52 - 2);
        v87 = fminf(fmaxf((float)(v59 + v56) * 8.0, -0.875), 0.75) * -0.0011111111;
        *(float *)&dword_140404A6C[v86 + 18215718] = (float)(v87 * *(float *)&dword_140404A6C[v86 + 18215730])
                                                   + *(float *)&dword_140404A6C[v86 + 18215718];
        *(float *)&dword_140404A6C[v86 + 18215719] = (float)(v87 * *(float *)&dword_140404A6C[v86 + 18215731])
                                                   + *(float *)&dword_140404A6C[v86 + 18215719];
        *(float *)&dword_140404A6C[v86 + 18215720] = (float)(v87 * *(float *)&dword_140404A6C[v86 + 18215732])
                                                   + *(float *)&dword_140404A6C[v86 + 18215720];
      }
    }
    v88 = (int)v52[3652] <= 0;
    v89 = 0;
    v283 = v53;
    if ( !v88 )
    {
      v90 = v52 + 3674;
      v91 = 47 * v53;
      do
      {
        v92 = (int)*(v90 - 21);
        v93 = *(float *)&dword_140404A6C[v91 + 18215728];
        v94 = *((float *)v90 - 11) + *((float *)v90 + 8);
        v95 = *(float *)&dword_140404A6C[v91 + 18215729];
        v96 = *((float *)v90 - 12) * *(float *)&dword_140404A6C[v91 + 18215726];
        v97 = *(float *)&dword_140404A6C[47 * v92 + 18215716];
        v98 = (float)(*((float *)v90 - 10) * *(float *)&dword_140404A6C[v91 + 18215731])
            + *(float *)&dword_140404A6C[v91 + 18215716];
        v99 = (float)(*((float *)v90 - 10) * *(float *)&dword_140404A6C[v91 + 18215732])
            + *(float *)&dword_140404A6C[v91 + 18215717];
        v100 = *(float *)&dword_140404A6C[v91 + 18215727]
             * (float)(*(float *)&dword_140404A6C[47 * v92 + 18215715]
                     - (float)((float)((float)(*((float *)v90 - 12) * *(float *)&dword_140404A6C[v91 + 18215724])
                                     + (float)(*(float *)&dword_140404A6C[v91 + 18215727] * v94))
                             + (float)((float)(*((float *)v90 - 10) * *(float *)&dword_140404A6C[v91 + 18215730])
                                     + *(float *)&dword_140404A6C[v91 + 18215715])));
        v101 = (float)(v93 * v94) + (float)(*((float *)v90 - 12) * *(float *)&dword_140404A6C[v91 + 18215725]);
        sr_mesh_ray_start[0] = *(float *)&dword_140404A6C[47 * v92 + 18215715]
             - (float)((float)((float)(*((float *)v90 - 12) * *(float *)&dword_140404A6C[v91 + 18215724])
                             + (float)(*(float *)&dword_140404A6C[v91 + 18215727] * v94))
                     + (float)((float)(*((float *)v90 - 10) * *(float *)&dword_140404A6C[v91 + 18215730])
                             + *(float *)&dword_140404A6C[v91 + 18215715]));
        v102 = v101 + v98;
        v103 = *(float *)&dword_140404A6C[47 * v92 + 18215717];
        sr_mesh_ray_start[1] = v97 - v102;
        sr_mesh_ray_start[2] = v103 - (float)((float)((float)(v95 * v94) + v96) + v99);
        v104 = fmaxf((float)((float)(v93 * (float)(v97 - v102)) + v100) + (float)(sr_mesh_ray_start[2] * v95), -1.0);
        if ( v104 > 1.0 )
          v104 = 1.0;
        v105 = *(float *)&dword_140404A6C[47 * v92 + 18215755];
        *((float *)v90 + 7) = v104;
        *((float *)v90 + 12) = v105;
        if ( v105 >= 0.0 )
        {
          if ( v105 > 1.0 )
            v90[12] = 1065353216;
        }
        else
        {
          v90[12] = 0;
        }
        *((float *)v90 - 4) = *((float *)v90 - 5) + *((float *)v90 - 4);
        sub_14010D0D0(v1, v89);
        v106 = (int)*(v90 - 21);
        ++v89;
        v107 = &dword_140404A6C[47 * v106 + 18215715];
        *(v90 - 2) = *v107;
        *(v90 - 1) = v107[1];
        *v90 = v107[2];
        v108 = &dword_140404A6C[47 * v106 + 18215718];
        v90[4] = *v108;
        v90[5] = v108[1];
        v90[6] = v108[2];
        v90 += 43;
      }
      while ( v89 < (int)v52[3652] );
      v51 = (float *)v284;
    }
    v109 = 45072LL * (int)*(v52 - 11);
    v110 = 0;
    if ( (int)dword_140404A6C[v109 + 335161466] > 0 )
    {
      v111 = v283;
      v112 = (float *)&dword_140404A6C[v109 + 335161468];
      do
      {
        v113 = *v112;
        v114 = *v112 * *((float *)v52 + 8);
        v115 = *(v112 - 1);
        v116 = (float)(v115 * *((float *)v52 + 7)) + *((float *)v52 + 1);
        v117 = (float)(v115 * *((float *)v52 + 6)) + *(float *)v52;
        v118 = (float)(*(v112 - 1) * *((float *)v52 + 5)) + *((float *)v52 - 1);
        sr_mesh_ray_start[0] = v118 + v114;
        v119 = v117 + (float)(v113 * *((float *)v52 + 9));
        v120 = v116 + (float)(v113 * *((float *)v52 + 10));
        v121 = v112[1];
        v122 = v121 * *((float *)v52 + 11);
        sr_mesh_ray_start[1] = v119;
        sr_mesh_ray_start[2] = v120;
        sr_mesh_ray_end[0] = (float)(v122 + v114) + v118;
        v123 = (float)(v121 * *((float *)v52 + 12)) + v119;
        v124 = (float)(v121 * *((float *)v52 + 13)) + v120;
        sr_mesh_ray_end[1] = v123;
        sr_mesh_ray_end[2] = v124;
        if ( (unsigned int)sub_1400DC050(v51, &sr_mesh_ray_end[0], 0) )
        {
          v125 = dword_140404A6C[73007002];
          v126 = sr_mesh_ray_end[2];
          v127 = 0;
          v128 = sr_mesh_ray_end[1];
          v129 = sr_mesh_ray_end[0];
          if ( dword_140404A6C[73007002] != -1 )
          {
            v130 = dword_140404A6C[73007003];
            if ( dword_140404A6C[73007003] != -1 )
            {
              v131 = dword_140404A6C[73007009];
              v132 = dword_140404A6C[73007005];
              v133 = dword_140404A6C[73007004];
              if ( dword_140404A6C[73007002] <= 3
                && (dword_140404A6C[73007003] & 0x80000000) == 0
                && (dword_140404A6C[73007009] & 0xE0000000) == 0x80000000
                && (dword_140404A6C[73007010] & 0x10000) != 0 )
              {
                v134 = LOWORD(dword_140404A6C[73007010]);
                if ( dword_140404A6C[456202453] )
                {
                  v135 = dword_140404A6C[308307070];
                  v136 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v136) = 16;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v136) = dword_140404A6C[283831474];
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v136) = v125 + (v130 << 16);
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v136) = v133 + (v132 << 16);
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v136) = v131;
                  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v136) = v134;
                  *(float *)((char *)&dword_140404A6C[297756287] + v136) = v129;
                  *(float *)((char *)&dword_140404A6C[297756288] + v136) = v128;
                  *(float *)((char *)&dword_140404A6C[297756289] + v136) = v126;
                  if ( v52 == (unsigned int *)-92LL )
                  {
                    v137 = 0;
                    v138 = 0;
                    v139 = 0;
                  }
                  else
                  {
                    v137 = v52[25];
                    v138 = v52[24];
                    v139 = v52[23];
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[297756290] + v136) = v139;
                  *(unsigned int *)((char *)&dword_140404A6C[297756291] + v136) = v138;
                  *(unsigned int *)((char *)&dword_140404A6C[297756292] + v136) = v137;
                  dword_140404A6C[308307070] = v135 + 1;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                  v111 = v283;
                }
                sub_140016E30(v125, v130, v133, v132, v131 | (0x10000 << v134));
                v127 = 1;
              }
              else
              {
                v127 = 0;
              }
            }
          }
          v140 = *(float *)&dword_140404A6C[73006982];
          v141 = *(float *)&dword_140404A6C[73006981];
          v142 = *(float *)&dword_140404A6C[73006983];
          v281 = *(_QWORD *)&dword_140404A6C[73006984];
          LODWORD(v282) = dword_140404A6C[73006986];
          sr_mesh_ray_start[1] = *(float *)&dword_140404A6C[73006982] - v128;
          sr_mesh_ray_start[0] = *(float *)&dword_140404A6C[73006981] - v129;
          sr_mesh_ray_start[2] = *(float *)&dword_140404A6C[73006983] - v126;
          v143 = (float)((float)(*(float *)&dword_140404A6C[73006985]
                               * (float)(*(float *)&dword_140404A6C[73006982] - v128))
                       + (float)(*(float *)&dword_140404A6C[73006984]
                               * (float)(*(float *)&dword_140404A6C[73006981] - v129)))
               + (float)(*(float *)&dword_140404A6C[73006986] * (float)(*(float *)&dword_140404A6C[73006983] - v126));
          if ( dword_140404A6C[73007015] == -1 )
          {
            v88 = *v112 >= 0.0;
            sr_mesh_ray_start[0] = (float)(*(float *)&dword_1402F6188 * 0.25) + v129;
            sr_mesh_ray_start[1] = (float)(*(float *)&dword_1402F618C * 0.25) + v128;
            sr_mesh_ray_start[2] = (float)(*(float *)&dword_1402F6190 * 0.25) + v126;
            if ( !v88 )
            {
              v144 = sub_1400DC050(&sr_mesh_ray_start[0], &sr_mesh_ray_end[0], 0);
              v140 = *(float *)&dword_140404A6C[73006982];
              v141 = *(float *)&dword_140404A6C[73006981];
              v142 = *(float *)&dword_140404A6C[73006983];
              if ( v144 )
              {
                v281 = *(_QWORD *)&dword_140404A6C[73006984];
                LODWORD(v282) = dword_140404A6C[73006986];
                v143 = (float)((float)((float)(*(float *)&dword_140404A6C[73006982] - sr_mesh_ray_end[1])
                                     * *(float *)&dword_140404A6C[73006985])
                             + (float)((float)(*(float *)&dword_140404A6C[73006981] - sr_mesh_ray_end[0])
                                     * *(float *)&dword_140404A6C[73006984]))
                     + (float)((float)(*(float *)&dword_140404A6C[73006983] - sr_mesh_ray_end[2])
                             * *(float *)&dword_140404A6C[73006986]);
              }
            }
            v145 = 0.015625;
            v146 = 1023410176;
            if ( v127 )
            {
              v145 = 0.001953125;
              v146 = 998244352;
            }
            LODWORD(v277) = v146;
            *(float *)&v276[10] = v145;
            v276[8] = 1058642330;
            v147 = v140 - *(float *)&dword_140404A6C[47 * v111 + 18215716];
            v148 = v142 - *(float *)&dword_140404A6C[47 * v111 + 18215717];
            sr_mesh_ray_start[0] = v141 - *(float *)&dword_140404A6C[47 * v111 + 18215715];
            sr_mesh_ray_start[1] = v147;
            sr_mesh_ray_start[2] = v148;
            sub_140005160(
              v285,
              (unsigned int *)&sr_mesh_ray_start[0],
              (unsigned int *)&v281,
              fminf(v143, 0.125),
              0x3F19999Au,
              v145,
              v146);
            v51 = (float *)v284;
          }
          else
          {
            v51 = (float *)v284;
          }
        }
        ++v110;
        v112 += 3;
      }
      while ( v110 < (int)dword_140404A6C[v109 + 335161466] );
    }
    v1 = v280;
LABEL_106:
    ++v1;
    v51 += 5210;
    v280 = v1;
    v52 += 5210;
    v284 = (unsigned int *)v51;
    if ( v1 < 512 )
      continue;
    break;
  }
  v149 = &dword_140404A6C[129716731];
  do
  {
    if ( *(v149 - 22) && *(v149 - 21) == 17 && (int)v149[5019] > 0 )
    {
      v150 = 47LL * (int)v149[5020];
      v151 = *(float *)&dword_140404A6C[v150 + 18215729];
      v152 = (float *)&dword_140404A6C[47 * *(v149 - 12) + 18215727];
      v153 = *v152;
      v154 = *v152 * *(float *)&dword_140404A6C[v150 + 18215728];
      v155 = (float)(*(float *)&dword_140404A6C[v150 + 18215728] * v152[2]) - (float)(v151 * v152[1]);
      v156 = *(float *)&dword_140404A6C[v150 + 18215727];
      v157 = v156 * v152[1];
      v158 = v156 * v152[2];
      v159 = *(v149 - 2);
      v160 = 18LL * (int)v149[5033];
      *(float *)&dword_140404A6C[2 * v160 + 485543033] = v155 * 0.0625;
      *(float *)&dword_140404A6C[2 * v160 + 485543035] = (float)(v157 - v154) * 0.0625;
      *(float *)&dword_140404A6C[2 * v160 + 485543034] = (float)((float)(v153 * v151) - v158) * 0.0625;
      dword_140404A6C[2 * v160 + 485543052] = 1;
      dword_140404A6C[2 * v160 + 485543053] = v159;
      dword_140404A6C[2 * v160 + 485543054] = *(v149 - 1);
      dword_140404A6C[2 * v160 + 485543055] = *v149;
    }
    if ( v149[5188] && v149[5189] == 17 && (int)v149[10229] > 0 )
    {
      v161 = 47LL * (int)v149[10230];
      v162 = *(float *)&dword_140404A6C[v161 + 18215729];
      v163 = (float *)&dword_140404A6C[47 * v149[5198] + 18215727];
      v164 = *v163;
      v165 = *v163 * *(float *)&dword_140404A6C[v161 + 18215728];
      v166 = (float)(*(float *)&dword_140404A6C[v161 + 18215728] * v163[2]) - (float)(v162 * v163[1]);
      v167 = *(float *)&dword_140404A6C[v161 + 18215727];
      v168 = v167 * v163[1];
      v169 = v167 * v163[2];
      v170 = v149[5208];
      v171 = 18LL * (int)v149[10243];
      *(float *)&dword_140404A6C[2 * v171 + 485543033] = v166 * 0.0625;
      *(float *)&dword_140404A6C[2 * v171 + 485543034] = (float)((float)(v164 * v162) - v169) * 0.0625;
      *(float *)&dword_140404A6C[2 * v171 + 485543035] = (float)(v168 - v165) * 0.0625;
      dword_140404A6C[2 * v171 + 485543052] = 1;
      dword_140404A6C[2 * v171 + 485543053] = v170;
      dword_140404A6C[2 * v171 + 485543054] = v149[5209];
      dword_140404A6C[2 * v171 + 485543055] = v149[5210];
    }
    if ( v149[10398] && v149[10399] == 17 && (int)v149[15439] > 0 )
    {
      v172 = 47LL * (int)v149[15440];
      v173 = *(float *)&dword_140404A6C[v172 + 18215729];
      v174 = (float *)&dword_140404A6C[47 * v149[10408] + 18215727];
      v175 = *v174;
      v176 = *v174 * *(float *)&dword_140404A6C[v172 + 18215728];
      v177 = (float)(*(float *)&dword_140404A6C[v172 + 18215728] * v174[2]) - (float)(v173 * v174[1]);
      v178 = *(float *)&dword_140404A6C[v172 + 18215727];
      v179 = v178 * v174[1];
      v180 = v178 * v174[2];
      v181 = v149[10418];
      v182 = 18LL * (int)v149[15453];
      *(float *)&dword_140404A6C[2 * v182 + 485543033] = v177 * 0.0625;
      *(float *)&dword_140404A6C[2 * v182 + 485543034] = (float)((float)(v175 * v173) - v180) * 0.0625;
      *(float *)&dword_140404A6C[2 * v182 + 485543035] = (float)(v179 - v176) * 0.0625;
      dword_140404A6C[2 * v182 + 485543052] = 1;
      dword_140404A6C[2 * v182 + 485543053] = v181;
      dword_140404A6C[2 * v182 + 485543054] = v149[10419];
      dword_140404A6C[2 * v182 + 485543055] = v149[10420];
    }
    if ( v149[15608] && v149[15609] == 17 && (int)v149[20649] > 0 )
    {
      v183 = 47LL * (int)v149[20650];
      v184 = *(float *)&dword_140404A6C[v183 + 18215729];
      v185 = (float *)&dword_140404A6C[47 * v149[15618] + 18215727];
      v186 = *v185;
      v187 = *v185 * *(float *)&dword_140404A6C[v183 + 18215728];
      v188 = (float)(*(float *)&dword_140404A6C[v183 + 18215728] * v185[2]) - (float)(v184 * v185[1]);
      v189 = *(float *)&dword_140404A6C[v183 + 18215727];
      v190 = v189 * v185[1];
      v191 = v189 * v185[2];
      v192 = v149[15628];
      v193 = 18LL * (int)v149[20663];
      *(float *)&dword_140404A6C[2 * v193 + 485543033] = v188 * 0.0625;
      *(float *)&dword_140404A6C[2 * v193 + 485543034] = (float)((float)(v186 * v184) - v191) * 0.0625;
      *(float *)&dword_140404A6C[2 * v193 + 485543035] = (float)(v190 - v187) * 0.0625;
      dword_140404A6C[2 * v193 + 485543052] = 1;
      dword_140404A6C[2 * v193 + 485543053] = v192;
      dword_140404A6C[2 * v193 + 485543054] = v149[15629];
      dword_140404A6C[2 * v193 + 485543055] = v149[15630];
    }
    if ( v149[20818] && v149[20819] == 17 && (int)v149[25859] > 0 )
    {
      v194 = 47LL * (int)v149[25860];
      v195 = *(float *)&dword_140404A6C[v194 + 18215729];
      v196 = (float *)&dword_140404A6C[47 * v149[20828] + 18215727];
      v197 = *v196;
      v198 = *v196 * *(float *)&dword_140404A6C[v194 + 18215728];
      v199 = (float)(*(float *)&dword_140404A6C[v194 + 18215728] * v196[2]) - (float)(v195 * v196[1]);
      v200 = *(float *)&dword_140404A6C[v194 + 18215727];
      v201 = v200 * v196[1];
      v202 = v200 * v196[2];
      v203 = v149[20838];
      v204 = 18LL * (int)v149[25873];
      *(float *)&dword_140404A6C[2 * v204 + 485543033] = v199 * 0.0625;
      *(float *)&dword_140404A6C[2 * v204 + 485543034] = (float)((float)(v197 * v195) - v202) * 0.0625;
      *(float *)&dword_140404A6C[2 * v204 + 485543035] = (float)(v201 - v198) * 0.0625;
      dword_140404A6C[2 * v204 + 485543052] = 1;
      dword_140404A6C[2 * v204 + 485543053] = v203;
      dword_140404A6C[2 * v204 + 485543054] = v149[20839];
      dword_140404A6C[2 * v204 + 485543055] = v149[20840];
    }
    if ( v149[26028] && v149[26029] == 17 && (int)v149[31069] > 0 )
    {
      v205 = 47LL * (int)v149[31070];
      v206 = *(float *)&dword_140404A6C[v205 + 18215729];
      v207 = (float *)&dword_140404A6C[47 * v149[26038] + 18215727];
      v208 = *v207;
      v209 = *v207 * *(float *)&dword_140404A6C[v205 + 18215728];
      v210 = (float)(*(float *)&dword_140404A6C[v205 + 18215728] * v207[2]) - (float)(v206 * v207[1]);
      v211 = *(float *)&dword_140404A6C[v205 + 18215727];
      v212 = v211 * v207[1];
      v213 = v211 * v207[2];
      v214 = v149[26048];
      v215 = 18LL * (int)v149[31083];
      *(float *)&dword_140404A6C[2 * v215 + 485543033] = v210 * 0.0625;
      *(float *)&dword_140404A6C[2 * v215 + 485543034] = (float)((float)(v208 * v206) - v213) * 0.0625;
      *(float *)&dword_140404A6C[2 * v215 + 485543035] = (float)(v212 - v209) * 0.0625;
      dword_140404A6C[2 * v215 + 485543052] = 1;
      dword_140404A6C[2 * v215 + 485543053] = v214;
      dword_140404A6C[2 * v215 + 485543054] = v149[26049];
      dword_140404A6C[2 * v215 + 485543055] = v149[26050];
    }
    if ( v149[31238] && v149[31239] == 17 && (int)v149[36279] > 0 )
    {
      v216 = 47LL * (int)v149[36280];
      v217 = *(float *)&dword_140404A6C[v216 + 18215729];
      v218 = (float *)&dword_140404A6C[47 * v149[31248] + 18215727];
      v219 = *v218;
      v220 = *v218 * *(float *)&dword_140404A6C[v216 + 18215728];
      v221 = (float)(*(float *)&dword_140404A6C[v216 + 18215728] * v218[2]) - (float)(v217 * v218[1]);
      v222 = *(float *)&dword_140404A6C[v216 + 18215727];
      v223 = v222 * v218[1];
      v224 = v222 * v218[2];
      v225 = v149[31258];
      v226 = 18LL * (int)v149[36293];
      *(float *)&dword_140404A6C[2 * v226 + 485543033] = v221 * 0.0625;
      *(float *)&dword_140404A6C[2 * v226 + 485543034] = (float)((float)(v219 * v217) - v224) * 0.0625;
      *(float *)&dword_140404A6C[2 * v226 + 485543035] = (float)(v223 - v220) * 0.0625;
      dword_140404A6C[2 * v226 + 485543052] = 1;
      dword_140404A6C[2 * v226 + 485543053] = v225;
      dword_140404A6C[2 * v226 + 485543054] = v149[31259];
      dword_140404A6C[2 * v226 + 485543055] = v149[31260];
    }
    if ( v149[36448] && v149[36449] == 17 && (int)v149[41489] > 0 )
    {
      v227 = 47LL * (int)v149[41490];
      v228 = *(float *)&dword_140404A6C[v227 + 18215729];
      v229 = (float *)&dword_140404A6C[47 * v149[36458] + 18215727];
      v230 = *v229;
      v231 = *v229 * *(float *)&dword_140404A6C[v227 + 18215728];
      v232 = (float)(*(float *)&dword_140404A6C[v227 + 18215728] * v229[2]) - (float)(v228 * v229[1]);
      v233 = *(float *)&dword_140404A6C[v227 + 18215727];
      v234 = v233 * v229[1];
      v235 = v233 * v229[2];
      v236 = v149[36468];
      v237 = 18LL * (int)v149[41503];
      *(float *)&dword_140404A6C[2 * v237 + 485543033] = v232 * 0.0625;
      *(float *)&dword_140404A6C[2 * v237 + 485543034] = (float)((float)(v230 * v228) - v235) * 0.0625;
      *(float *)&dword_140404A6C[2 * v237 + 485543035] = (float)(v234 - v231) * 0.0625;
      dword_140404A6C[2 * v237 + 485543052] = 1;
      dword_140404A6C[2 * v237 + 485543053] = v236;
      dword_140404A6C[2 * v237 + 485543054] = v149[36469];
      dword_140404A6C[2 * v237 + 485543055] = v149[36470];
    }
    v149 += 41680;
  }
  while ( (__int64)v149 < (__int64)&dword_140404A6C[132384251] );
  v238 = 512;
  dword_140404A6C[179992845] = 1;
  v283 = 512;
  v239 = &dword_140404A6C[129716720];
  v240 = (float *)&dword_140404A6C[129716755];
  do
  {
    if ( *((_DWORD *)v240 - 46) )
    {
      v241 = *((int *)v240 - 45);
      sub_140038230((int *)&v288, (int *)v239 + 39, (int *)v239 + 42);
      if ( (int)v288 > 0 )
      {
        v242 = &v289;
        v243 = v288;
        do
        {
          v244 = 1760LL * *(int *)v242;
          if ( *(float *)&dword_140404A6C[v244 + 278845958] <= v240[1]
            && *(float *)&dword_140404A6C[v244 + 278845961] >= *(v240 - 2)
            && *(float *)&dword_140404A6C[v244 + 278845960] <= v240[3]
            && *(float *)&dword_140404A6C[v244 + 278845963] >= *v240
            && *(float *)&dword_140404A6C[v244 + 278845959] <= v240[2]
            && *(float *)&dword_140404A6C[v244 + 278845962] >= *(v240 - 1) )
          {
            if ( (_DWORD)v241 == 17
              && (v245 = 1268LL * (int)dword_140404A6C[v244 + 278845898], dword_140404A6C[v245 + 278521285] == 1) )
            {
              v246 = sub_140048DA0(
                       *((_DWORD *)v240 - 36),
                       dword_140404A6C[v244 + 278845915],
                       (__int64)&dword_140404A6C[335968471],
                       (__int64)&dword_140404A6C[v245 + 278522365],
                       (float *)v239,
                       (float *)v239 + 6,
                       (float *)&dword_140404A6C[v244 + 278845916],
                       (float *)&dword_140404A6C[v244 + 278845934],
                       1);
            }
            else
            {
              v246 = sub_14004A7A0(
                       *((_DWORD *)v240 - 36),
                       dword_140404A6C[v244 + 278845915],
                       (int *)&dword_140404A6C[45072 * v241 + 335202129],
                       (int *)&dword_140404A6C[1268 * dword_140404A6C[v244 + 278845898] + 278522247],
                       (float *)v239,
                       (float *)v239 + 6,
                       (float *)&dword_140404A6C[v244 + 278845916],
                       (float *)&dword_140404A6C[v244 + 278845934]);
            }
            if ( v246 )
              *(_QWORD *)&dword_140404A6C[v244 + 278845895] = 0;
          }
          v242 += 8;
          --v243;
        }
        while ( v243 );
        v238 = v283;
      }
    }
    v239 += 5210;
    v240 += 5210;
    v283 = --v238;
  }
  while ( v238 );
  v247 = &dword_140404A6C[129716720];
  v248 = v287;
  dword_140404A6C[179992845] = 0;
  v249 = 0;
  v280 = 0;
  do
  {
    if ( *(v248 - 12) && *(v248 - 10) != 3 )
    {
      v250 = 0;
      v251 = &dword_140404A6C[129716711];
      do
      {
        if ( v250 != v249 )
        {
          if ( *(v251 - 2) )
          {
            if ( *v251 != 3
              && v248[3454] != v250
              && v251[3464] != v249
              && *((float *)v251 + 42) <= *((float *)v248 + 35)
              && *((float *)v251 + 43) <= *((float *)v248 + 36)
              && *((float *)v251 + 44) <= *((float *)v248 + 37)
              && *((float *)v251 + 45) >= *((float *)v248 + 32)
              && *((float *)v251 + 46) >= *((float *)v248 + 33)
              && *((float *)v251 + 47) >= *((float *)v248 + 34) )
            {
              v252 = (int)*(v248 - 11);
              if ( (_DWORD)v252 != 10 || *(v251 - 1) != 11 )
              {
                v253 = 45072 * v252;
                v254 = 0;
                if ( (int)dword_140404A6C[45072 * v252 + 335161466] > 0 )
                {
                  v255 = (float *)v286;
                  v256 = (float *)&dword_140404A6C[v253 + 335161468];
                  do
                  {
                    v257 = *v256;
                    v258 = *v256 * *((float *)v248 + 8);
                    v259 = *(v256 - 1);
                    v260 = (float)(v259 * *((float *)v248 + 7)) + *((float *)v248 + 1);
                    v261 = (float)(v259 * *((float *)v248 + 6)) + *(float *)v248;
                    v262 = (float)(*(v256 - 1) * *((float *)v248 + 5)) + *((float *)v248 - 1);
                    sr_mesh_ray_start[0] = v262 + v258;
                    v263 = v261 + (float)(v257 * *((float *)v248 + 9));
                    v264 = v260 + (float)(v257 * *((float *)v248 + 10));
                    v265 = v256[1];
                    v266 = v265 * *((float *)v248 + 11);
                    sr_mesh_ray_start[1] = v263;
                    sr_mesh_ray_start[2] = v264;
                    sr_mesh_ray_end[0] = (float)(v266 + v258) + v262;
                    v267 = (float)(v265 * *((float *)v248 + 12)) + v263;
                    v268 = (float)(v265 * *((float *)v248 + 13)) + v264;
                    sr_mesh_ray_end[1] = v267;
                    sr_mesh_ray_end[2] = v268;
                    if ( (unsigned int)sub_1400E21F0(v250, v255, &sr_mesh_ray_end[0]) )
                    {
                      v269 = (int)*(v248 - 2);
                      v270 = (int)v251[8];
                      v279 = 1023410176;
                      v278 = 1015021568;
                      LODWORD(v277) = 1053609165;
                      v271 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v269 + 18215716];
                      sr_mesh_ray_start[0] = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v269 + 18215715];
                      v272 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v269 + 18215717];
                      sr_mesh_ray_start[1] = v271;
                      sr_mesh_ray_start[2] = v272;
                      v273 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v270 + 18215716];
                      *(float *)&v281 = *(float *)&dword_140404A6C[73006981]
                                      - *(float *)&dword_140404A6C[47 * v270 + 18215715];
                      v274 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v270 + 18215717];
                      *((float *)&v281 + 1) = v273;
                      *(float *)&v282 = v274;
                      sub_1400052C0(
                        v269,
                        v270,
                        (unsigned int *)&sr_mesh_ray_start[0],
                        (unsigned int *)&v281,
                        &dword_140404A6C[73006984],
                        fminf(
                          (float)((float)((float)(*(float *)&dword_140404A6C[73006982] - sr_mesh_ray_end[1])
                                        * *(float *)&dword_140404A6C[73006985])
                                + (float)((float)(*(float *)&dword_140404A6C[73006981] - sr_mesh_ray_end[0])
                                        * *(float *)&dword_140404A6C[73006984]))
                        + (float)((float)(*(float *)&dword_140404A6C[73006983] - sr_mesh_ray_end[2])
                                * *(float *)&dword_140404A6C[73006986]),
                          0.125),
                        0x3ECCCCCDu,
                        0.015625,
                        0x3D000000u);
                    }
                    ++v254;
                    v256 += 3;
                  }
                  while ( v254 < (int)dword_140404A6C[v253 + 335161466] );
                  v249 = v280;
                }
              }
            }
          }
        }
        ++v250;
        v251 += 5210;
      }
      while ( v250 < 512 );
      v247 = v286;
    }
    ++v249;
    v247 += 5210;
    v248 += 5210;
    v280 = v249;
    v286 = v247;
  }
  while ( v249 < 512 );
  return 0; /* compatibility result discarded by all reviewed callers */
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
#undef v296

// 140279310: using guessed type __int128 xmmword_140279310;
// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014010D0D0) ----------------------------------------------------
__int64            sub_14010D0D0(int a1, int a2)
{
  int v2; // r10d
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  float v6; // xmm6_4
  unsigned __int64 v7; // rsi
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm0_4
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rbx
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float v47; // xmm0_4
  __int64 v49; // [rsp-20h] [rbp-C330h] BYREF
  _Alignas(8) uint32_t sr_actor_contact_point[3];
  _Alignas(8) uint32_t sr_actor_contact_offset[3];
  float sr_actor_contact_result[8];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010D0D0[99232];
#define v54 (*(int (*))(void *)(sr_frame_14010D0D0 + 0)) /* [rsp+40h] */
#define v55 (*(int (*))(void *)(sr_frame_14010D0D0 + 4)) /* [rsp+44h] */
#define v58 (*(int (*)[12292])(void *)(sr_frame_14010D0D0 + 49760)) /* [rsp+C2A0h] */
#define v59 (*(float (*)[4])(void *)(sr_frame_14010D0D0 + 98928)) /* [rsp+182B0h] */
#define v60 (*(float (*)[68])(void *)(sr_frame_14010D0D0 + 98944)) /* [rsp+182C0h] */
#define v61 (*(__int64 (*))(void *)(sr_frame_14010D0D0 + 99216)) /* [rsp+183D0h] */

  v2 = 0;
  v58[0] = 0;
  v58[12289] = 0;
  v3 = 172LL * a2 + 20840LL * a1;
  v4 = v3;
  v5 = *(int *)((char *)&dword_140404A6C[129720374] + v3);
  v6 = *(float *)((char *)&dword_140404A6C[129720387] + v3) + *(float *)((char *)&dword_140404A6C[129720375] + v3);
  (*(int64_t *)(void *)sr_actor_contact_offset) = v3;
  v7 = v5;
  v55 = v5;
  (*(uint64_t *)(void *)sr_actor_contact_point) = v5;
  v8 = *(float *)&dword_140404A6C[47 * v5 + 18215715];
  v9 = v6 + v8;
  v10 = v8 - v6;
  v11 = *(float *)&dword_140404A6C[47 * v5 + 18215716];
  v12 = v6 + v11;
  v13 = *(float *)&dword_140404A6C[47 * v5 + 18215717];
  v14 = v11 - v6;
  v15 = v13 - v6;
  v59[0] = v9;
  v16 = v6 + v13;
  v60[0] = v10;
  v59[1] = v12;
  v60[1] = v14;
  v17 = (int)(float)(v10 * 0.015625);
  v60[2] = v15;
  v18 = (int)(float)(v15 * 0.015625);
  v19 = (int)(float)(v9 * 0.015625);
  v59[2] = v16;
  v54 = v19;
  v20 = (int)(float)(v16 * 0.015625);
  if ( v18 <= v20 )
  {
    v21 = v18;
    v22 = 0;
    v23 = (__int64)v18 << 6;
    v24 = (unsigned int)(v20 - v18 + 1);
    do
    {
      if ( v21 <= 0x3F && v17 <= v19 )
      {
        v25 = v17;
        v26 = (unsigned int)(v19 - v17 + 1);
        do
        {
          if ( v25 <= 0x3F )
          {
            v27 = 0;
            v28 = (int)dword_140404A6C[9 * v23 + 254352099 + 9 * v25];
            if ( v28 > 0 )
            {
              do
              {
                if ( v22 < 64 )
                {
                  ++v2;
                  LODWORD(v60[v22++ + 4]) = dword_140404A6C[8 * v23 + 254352100 + 8 * v25 + v23 + v25 + v27];
                }
                ++v27;
              }
              while ( v27 < v28 );
            }
          }
          ++v25;
          --v26;
        }
        while ( v26 );
        v19 = v54;
      }
      ++v21;
      v23 += 64;
      --v24;
    }
    while ( v24 );
    v4 = (*(int64_t *)(void *)sr_actor_contact_offset);
    LOWORD(v5) = v55;
    v7 = (*(uint64_t *)(void *)sr_actor_contact_point);
  }
  v29 = v2;
  if ( v2 > 0 )
  {
    v30 = 0;
    do
    {
      v31 = SLODWORD(v60[v30 + 4]);
      v32 = 15432 * v31;
      if ( v9 >= *(float *)&dword_140404A6C[15432 * v31 + 358312926]
        && v12 >= *(float *)&dword_140404A6C[v32 + 358312927]
        && v16 >= *(float *)&dword_140404A6C[v32 + 358312928]
        && v10 <= *(float *)&dword_140404A6C[v32 + 358312929]
        && v14 <= *(float *)&dword_140404A6C[v32 + 358312930]
        && v15 <= *(float *)&dword_140404A6C[v32 + 358312931] )
      {
        sub_140188720(v58, v60, v59, v31, 2);
      }
      ++v30;
    }
    while ( v30 < v29 );
  }
  v33 = 0;
  v34 = 47 * v7;
  do
  {
    LODWORD(v35) = dword_140404A6C[v34 + 18215715];
    LODWORD(v36) = dword_140404A6C[v34 + 18215716];
    v37 = *(float *)&dword_140404A6C[v34 + 18215717];
    (*(uint64_t *)(void *)sr_actor_contact_point) = __PAIR64__(LODWORD(v36), LODWORD(v35));
    (*(float *)&sr_actor_contact_point[2]) = v37;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_31;
      v38 = *(float *)((char *)&dword_140404A6C[129720375] + v4);
    }
    else
    {
      v38 = -*(float *)((char *)&dword_140404A6C[129720375] + v4);
    }
    v39 = (float)(v38 * *(float *)&dword_140404A6C[v34 + 18215724]) + v35;
    v40 = v38 * *(float *)&dword_140404A6C[v34 + 18215725];
    v41 = v38 * *(float *)&dword_140404A6C[v34 + 18215726];
    *(float *)&(*(uint64_t *)(void *)sr_actor_contact_point) = v39;
    *((float *)&(*(uint64_t *)(void *)sr_actor_contact_point) + 1) = v40 + v36;
    (*(float *)&sr_actor_contact_point[2]) = v41 + v37;
LABEL_31:
    if ( (unsigned int)sub_14003DE80(
                         (float *)&(*(uint64_t *)(void *)sr_actor_contact_point),
                         (float *)&dword_140404A6C[v34 + 18215724],
                         *(float *)((char *)&dword_140404A6C[129720387] + v4)) )
    {
      v42 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[v34 + 18215716];
      v43 = *(float *)((char *)&dword_140404A6C[129720387] + v4) - *(float *)&dword_140404A6C[73006988];
      *(float *)&(*(int64_t *)(void *)sr_actor_contact_offset) = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[v34 + 18215715];
      v44 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[v34 + 18215717];
      *((float *)&(*(int64_t *)(void *)sr_actor_contact_offset) + 1) = v42;
      (*(float *)&sr_actor_contact_offset[2]) = v44;
      sub_140005160(v5, (unsigned int *)&(*(int64_t *)(void *)sr_actor_contact_offset), &dword_140404A6C[73006984], v43, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    if ( sub_14003D830(
           sr_actor_contact_result,
           v58,
           (float *)&(*(uint64_t *)(void *)sr_actor_contact_point),
           (float *)&dword_140404A6C[v34 + 18215724],
           *(float *)((char *)&dword_140404A6C[129720387] + v4)) )
    {
      v45 = sr_actor_contact_result[1] - *(float *)&dword_140404A6C[v34 + 18215716];
      v46 = *(float *)((char *)&dword_140404A6C[129720387] + v4) - sr_actor_contact_result[7];
      *(float *)&(*(int64_t *)(void *)sr_actor_contact_offset) = sr_actor_contact_result[0] - *(float *)&dword_140404A6C[v34 + 18215715];
      v47 = sr_actor_contact_result[2] - *(float *)&dword_140404A6C[v34 + 18215717];
      *((float *)&(*(int64_t *)(void *)sr_actor_contact_offset) + 1) = v45;
      (*(float *)&sr_actor_contact_offset[2]) = v47;
      sub_140005160(v5, (unsigned int *)&(*(int64_t *)(void *)sr_actor_contact_offset), ((unsigned *)(void *)(sr_actor_contact_result+3)), v46, 0x3F99999Au, 0.03125, 0x3E000000u);
    }
    ++v33;
  }
  while ( v33 < 2 );
  dword_140404A6C[179992845] = 0;
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v54
#undef v55
#undef v58
#undef v59
#undef v60
#undef v61

// 14015003A: conditional instruction was optimized away because edx.4>=8
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144970AB4: using guessed type unsigned int;
// 144970AB8: using guessed type unsigned int;
// 144970ABC: using guessed type unsigned int;
// 144970AC0: using guessed type unsigned int;
// 144970AC4: using guessed type unsigned int;
// 144970AC8: using guessed type unsigned int;
// 144970ACC: using guessed type unsigned int;
// 144970AD0: using guessed type unsigned int;
// 144970AD4: using guessed type unsigned int;
// 144970AD8: using guessed type unsigned int;
// 144970ADC: using guessed type unsigned int;
// 144970AE0: using guessed type unsigned int;
// 144970AE4: using guessed type unsigned int;
// 144970AE8: using guessed type unsigned int;
// 144970AEC: using guessed type unsigned int;
// 15104AE60: using guessed type unsigned int;
// 183EBFAA0: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 189C1DC80: using guessed type unsigned int;
// 189C7BEC4: using guessed type unsigned int;
// 189CDA108: using guessed type unsigned int;
// 189D3834C: using guessed type unsigned int;
// 189D96590: using guessed type unsigned int;
// 189DF47D4: using guessed type unsigned int;
// 189E52A18: using guessed type unsigned int;
// 189EB0C5C: using guessed type unsigned int;

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
  unsigned int v3; // ebp
  float v4; // xmm6_4
  __int64 v7; // rbx
  unsigned int v8; // xmm7_4
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm9_4
  unsigned int v11; // xmm10_4
  unsigned int v12; // xmm11_4
  unsigned int v13; // xmm12_4
  unsigned int v14; // xmm13_4
  unsigned int v15; // xmm14_4
  unsigned int v16; // xmm15_4
  __int64 v17; // rsi
  signed int v18; // edi
  int *v19; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B91E0[16];
#define v21 (*(unsigned int (*))(void *)(sr_frame_1400B91E0 + 0)) /* [rsp+F0h] */

  v3 = -1;
  v4 = 1.0;
  v7 = a1;
  if ( (unsigned int)sub_1400DC050(a2, a3, 0) )
  {
    v8 = dword_140404A6C[73006981];
    v9 = dword_140404A6C[73006982];
    v10 = dword_140404A6C[73006983];
    v11 = dword_140404A6C[73006984];
    v12 = dword_140404A6C[73006985];
    v13 = dword_140404A6C[73006986];
    v14 = dword_140404A6C[73006989];
    v15 = dword_140404A6C[73006990];
    v16 = dword_140404A6C[73006991];
    v4 = *(float *)&dword_140404A6C[73006987];
  }
  else
  {
    v10 = v21;
    v8 = v21;
    v13 = v21;
    v14 = v21;
    v15 = v21;
    v9 = v21;
    v16 = v21;
    v12 = v21;
    v11 = v21;
  }
  v17 = 7166 * v7;
  v18 = 0;
  if ( (int)dword_140404A6C[7166 * v7 + 280651427] > 0 )
  {
    v19 = (int *)&dword_140404A6C[v17 + 280651428];
    do
    {
      if ( (unsigned int)sub_1400DC940(*v19, a2, a3, 0) && *(float *)&dword_140404A6C[73006987] < v4 )
      {
        v8 = dword_140404A6C[73006981];
        v4 = *(float *)&dword_140404A6C[73006987];
        v9 = dword_140404A6C[73006982];
        v10 = dword_140404A6C[73006983];
        v11 = dword_140404A6C[73006984];
        v12 = dword_140404A6C[73006985];
        v13 = dword_140404A6C[73006986];
        v14 = dword_140404A6C[73006989];
        v15 = dword_140404A6C[73006990];
        v16 = dword_140404A6C[73006991];
        v3 = *v19;
      }
      ++v18;
      ++v19;
    }
    while ( v18 < (int)dword_140404A6C[v17 + 280651427] );
  }
  if ( v4 >= 1.0 )
    return 0;
  dword_140404A6C[73006981] = v8;
  dword_140404A6C[73006982] = v9;
  dword_140404A6C[73006983] = v10;
  dword_140404A6C[73006984] = v11;
  dword_140404A6C[73006985] = v12;
  dword_140404A6C[73006986] = v13;
  dword_140404A6C[73006989] = v14;
  dword_140404A6C[73006990] = v15;
  dword_140404A6C[73006991] = v16;
  *(float *)&dword_140404A6C[73006987] = v4;
  dword_140404A6C[73007011] = v3;
  return 1;
}
#undef v21

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
// 151A848F8: using guessed type unsigned int;

//----- (00000001400CA430) ----------------------------------------------------
_UNKNOWN **           sub_1400CA430(int a1)
{
  _UNKNOWN **result; // rax
  unsigned int *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  float *v5; // rdi
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm3_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  __int64 v17; // r10
  __int64 v18; // rdx
  float v19; // xmm1_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  unsigned int v24; // xmm9_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CA430[240];
#define v25 (*(float (*))(void *)(sr_frame_1400CA430 + 0)) /* [rsp+50h] */
#define v26 (*(float (*))(void *)(sr_frame_1400CA430 + 4)) /* [rsp+54h] */
#define v27 (*(float (*))(void *)(sr_frame_1400CA430 + 8)) /* [rsp+58h] */
#define v28 (*(unsigned int (*)[4])(void *)(sr_frame_1400CA430 + 16)) /* [rsp+60h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400CA430 + 232)) /* [rsp+138h] */

  result = &retaddr;
  v2 = &dword_140404A6C[280651442];
  v3 = a1;
  do
  {
    if ( *(v2 - 139) )
    {
      v4 = 0;
      v5 = (float *)v2;
      do
      {
        if ( v4 == 7 || (unsigned __int64)v4 <= 4 || (unsigned __int64)v4 >= 0xA )
        {
          v6 = *(float *)&dword_140404A6C[1760 * v3 + 278845916];
          v7 = *(float *)&dword_140404A6C[1760 * v3 + 278845917];
          v8 = v6 - *(v5 - 2);
          v9 = *(float *)&dword_140404A6C[1760 * v3 + 278845918];
          v10 = v7 - *(v5 - 1);
          v11 = v9 - *v5;
          v25 = v8;
          v26 = v10;
          v27 = v11;
          v12 = fsqrt((float)((float)(v8 * v8) + (float)(v10 * v10)) + (float)(v11 * v11));
          if ( v12 < 0.36000001 )
          {
            v13 = 0.36000001 - v12;
            if ( v12 == 0.0 )
            {
              v14 = 0.0;
              v15 = 0.0;
              v16 = 0.0;
            }
            else
            {
              v14 = v8 / v12;
              v15 = v10 / v12;
              v16 = v11 / v12;
            }
            v17 = *((int *)v5 - 3);
            v18 = (int)dword_140404A6C[1760 * v3 + 278845915];
            *(float *)&dword_140404A6C[73006981] = v6 - (float)(v14 * 0.11);
            *(float *)&dword_140404A6C[73006984] = -v14;
            *(float *)&dword_140404A6C[73006985] = -v15;
            *(float *)&dword_140404A6C[73006982] = v7 - (float)(v15 * 0.11);
            v19 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v17 + 18215716];
            *(float *)&v20 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v18 + 18215716];
            *(float *)&dword_140404A6C[73006986] = -v16;
            *(float *)&v21 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v17 + 18215715];
            v22 = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v18 + 18215715];
            v26 = v19;
            *(float *)&dword_140404A6C[73006983] = v9 - (float)(v16 * 0.11);
            v28[1] = v20;
            v25 = *(float *)&v21;
            v23 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v17 + 18215717];
            *(float *)&v24 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v18 + 18215717];
            *(float *)v28 = v22;
            v27 = v23;
            v28[2] = v24;
            result = (_UNKNOWN **)sub_1400052C0(
                                    v17,
                                    v18,
                                    (unsigned int *)&v25,
                                    v28,
                                    &dword_140404A6C[73006984],
                                    v13,
                                    0x3ECCCCCDu,
                                    0.03125,
                                    0x3D800000u);
          }
        }
        ++v4;
        v5 += 78;
      }
      while ( v4 < 16 );
    }
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[282485938] );
  return result;
}
#undef v25
#undef v26
#undef v27
#undef v28
#undef retaddr

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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
  float *v6; // r12
  float *v9; // rdx
  __int64 v11; // r15
  float v12; // xmm7_4
  __int64 v13; // rax
  float v14; // xmm3_4
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  signed int v24; // r13d
  float v25; // xmm11_4
  __int64 v26; // r8
  int *v27; // rdi
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  __int64 v33; // rax
  float v34; // xmm10_4
  float v35; // xmm9_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm9_4
  float v39; // xmm12_4
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm12_4
  float v43; // xmm7_4
  float v44; // xmm4_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm8_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm13_4
  float v51; // xmm14_4
  float v52; // xmm7_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm8_4
  float v58; // xmm0_4
  float v59; // xmm12_4
  float v60; // xmm13_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm2_4
  float v64; // xmm5_4
  float v65; // xmm15_4
  float v66; // xmm9_4
  float v67; // xmm1_4
  float v68; // xmm14_4
  float v69; // xmm8_4
  float v70; // xmm10_4
  __int64 v71; // rax
  float v72; // xmm11_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm4_4
  float v78; // xmm2_4
  int v79; // xmm1_4
  float v80; // xmm3_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm5_4
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm4_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  float v90; // xmm2_4
  int v91; // xmm1_4
  float v92; // xmm8_4
  float v93; // xmm10_4
  float v94; // xmm9_4
  float v95; // xmm3_4
  float v96; // xmm12_4
  float v97; // xmm7_4
  float v98; // xmm13_4
  float v99; // xmm0_4
  float v100; // xmm14_4
  float v101; // xmm15_4
  float v102; // xmm5_4
  float v103; // xmm10_4
  float v104; // xmm8_4
  float v105; // xmm3_4
  float v106; // xmm4_4
  unsigned int v108; // xmm1_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D8B70[400];
#define v109 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define v110 (*(float (*))(void *)(sr_frame_1400D8B70 + 0)) /* [rsp+40h] */
#define v111 (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define v112 (*(float (*))(void *)(sr_frame_1400D8B70 + 4)) /* [rsp+44h] */
#define v113 (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define v114 (*(float (*))(void *)(sr_frame_1400D8B70 + 8)) /* [rsp+48h] */
#define v115 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define v116 (*(float (*))(void *)(sr_frame_1400D8B70 + 12)) /* [rsp+4Ch] */
#define v117 (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define v118 (*(float (*))(void *)(sr_frame_1400D8B70 + 16)) /* [rsp+50h] */
#define v119 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define v120 (*(float (*))(void *)(sr_frame_1400D8B70 + 20)) /* [rsp+54h] */
#define v121 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define v122 (*(float (*))(void *)(sr_frame_1400D8B70 + 24)) /* [rsp+58h] */
#define v123 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define v124 (*(float (*))(void *)(sr_frame_1400D8B70 + 28)) /* [rsp+5Ch] */
#define v125 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D8B70 + 32)) /* [rsp+60h] */
#define v127 (*(float (*))(void *)(sr_frame_1400D8B70 + 36)) /* [rsp+64h] */
#define v128 (*(float (*))(void *)(sr_frame_1400D8B70 + 40)) /* [rsp+68h] */
#define v129 (*(float (*))(void *)(sr_frame_1400D8B70 + 44)) /* [rsp+6Ch] */
#define v130 (*(float (*))(void *)(sr_frame_1400D8B70 + 48)) /* [rsp+70h] */
#define v131 (*(float (*))(void *)(sr_frame_1400D8B70 + 52)) /* [rsp+74h] */
#define v132 (*(float (*))(void *)(sr_frame_1400D8B70 + 56)) /* [rsp+78h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D8B70 + 64)) /* [rsp+80h] */
#define v134 (*(int (*))(void *)(sr_frame_1400D8B70 + 68)) /* [rsp+84h] */
#define v135 (*(int (*))(void *)(sr_frame_1400D8B70 + 72)) /* [rsp+88h] */
#define v136 (*(float (*))(void *)(sr_frame_1400D8B70 + 80)) /* [rsp+90h] */
#define v137 (*(float (*))(void *)(sr_frame_1400D8B70 + 84)) /* [rsp+94h] */
#define v138 (*(float (*))(void *)(sr_frame_1400D8B70 + 88)) /* [rsp+98h] */
#define v139 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 96)) /* [rsp+A0h] */
#define v140 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 112)) /* [rsp+B0h] */
#define v141 (*(float (*)[4])(void *)(sr_frame_1400D8B70 + 128)) /* [rsp+C0h] */
#define v142 (*(unsigned __int64 (*))(void *)(sr_frame_1400D8B70 + 144)) /* [rsp+D0h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_1400D8B70 + 152)) /* [rsp+D8h] */
#define v144 (*(float (*))(void *)(sr_frame_1400D8B70 + 392)) /* [rsp+1C8h] */

  v6 = a6;
  v9 = a5;
  v11 = 21LL * a4;
  v12 = *a5;
  v13 = (int)dword_140404A6C[v11 + 433433158];
  v14 = *(float *)&dword_140404A6C[v11 + 433433159];
  v15 = 2310 * v13;
  v142 = 9240 * v13;
  v16 = *(float *)&dword_140404A6C[2310 * v13 + 432531269];
  if ( v12 < (float)(v14 - v16) && (float)(v14 - v16) > *a6 )
    return 0;
  v17 = a5[1];
  v18 = *(float *)&dword_140404A6C[v11 + 433433160] - v16;
  if ( v17 < v18 && v18 > a6[1] )
    return 0;
  v19 = a5[2];
  v20 = *(float *)&dword_140404A6C[v11 + 433433161] - v16;
  if ( v19 < v20 && v20 > a6[2] )
    return 0;
  v21 = v14 + v16;
  if ( v12 > v21 && v21 < *a6 )
    return 0;
  v22 = *(float *)&dword_140404A6C[v11 + 433433160] + v16;
  if ( v17 > v22 && v22 < a6[1] )
    return 0;
  v23 = *(float *)&dword_140404A6C[v11 + 433433161] + v16;
  if ( v19 > v23 && v23 < a6[2] )
    return 0;
  v24 = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v15 + 432532039] <= 0 )
    return 0;
  v25 = v138;
  v26 = 770 * v13;
  v128 = v137;
  v127 = v136;
  v27 = (int *)&dword_140404A6C[v15 + 432532042];
  v143 = 770 * v13;
  do
  {
    v28 = *(float *)&dword_140404A6C[v11 + 433433168];
    v29 = *(float *)&dword_140404A6C[v11 + 433433165];
    v30 = *(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *(v27 - 1)];
    v31 = *(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *(v27 - 1)];
    v32 = *(float *)&dword_140404A6C[3 * v26 + 432531273 + 3 * *(v27 - 1)];
    v33 = v26 + v27[1];
    v34 = (float)((float)(v28 * v31) + (float)(v29 * v30)) + (float)(*(float *)&dword_140404A6C[v11 + 433433171] * v32);
    v35 = (float)(*(float *)&dword_140404A6C[v11 + 433433169] * v31)
        + (float)(*(float *)&dword_140404A6C[v11 + 433433166] * v30);
    v36 = *(float *)&dword_140404A6C[v11 + 433433167] * v30;
    v37 = *(float *)&dword_140404A6C[3 * v26 + 432531273 + 3 * *v27];
    v38 = v35 + (float)(*(float *)&dword_140404A6C[v11 + 433433172] * v32);
    v39 = (float)(*(float *)&dword_140404A6C[v11 + 433433170] * v31) + v36;
    v40 = *(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *v27];
    v41 = v40 * *(float *)&dword_140404A6C[v11 + 433433170];
    v42 = v39 + (float)(*(float *)&dword_140404A6C[v11 + 433433173] * v32);
    v43 = *(float *)&dword_140404A6C[3 * v33 + 432531272];
    v44 = (float)(*(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *v27] * v29) + (float)(v40 * v28);
    v45 = *(float *)&dword_140404A6C[3 * v26 + 432531271 + 3 * *v27];
    v125 = v38;
    v123 = v42;
    v46 = *(float *)&dword_140404A6C[3 * v33 + 432531271];
    v47 = (float)((float)(*(float *)&dword_140404A6C[3 * v26 + 432531272 + 3 * *v27]
                        * *(float *)&dword_140404A6C[v11 + 433433169])
                + (float)(v45 * *(float *)&dword_140404A6C[v11 + 433433166]))
        + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433172]);
    v48 = (float)(v41 + (float)(v45 * *(float *)&dword_140404A6C[v11 + 433433167]))
        + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433173]);
    v113 = v44 + (float)(v37 * *(float *)&dword_140404A6C[v11 + 433433171]);
    v49 = *(float *)&dword_140404A6C[3 * v33 + 432531273];
    v121 = v47;
    v119 = v48;
    v50 = (float)((float)(v46 * v29) + (float)(v43 * v28)) + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433171]);
    v117 = v50;
    v51 = (float)((float)(v43 * *(float *)&dword_140404A6C[v11 + 433433169])
                + (float)(v46 * *(float *)&dword_140404A6C[v11 + 433433166]))
        + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433172]);
    v52 = (float)((float)(v43 * *(float *)&dword_140404A6C[v11 + 433433170])
                + (float)(v46 * *(float *)&dword_140404A6C[v11 + 433433167]))
        + (float)(v49 * *(float *)&dword_140404A6C[v11 + 433433173]);
    v53 = v47 - v38;
    v54 = v51 - v38;
    v111 = v52;
    v55 = (float)((float)(v51 - v38) * (float)(v48 - v42)) - (float)((float)(v52 - v42) * (float)(v47 - v38));
    v56 = (float)((float)(v52 - v42) * (float)(v113 - v34)) - (float)((float)(v50 - v34) * (float)(v48 - v42));
    v57 = (float)((float)(v50 - v34) * v53) - (float)(v54 * (float)(v113 - v34));
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v130 = 0.0;
      v59 = 0.0;
      v131 = 0.0;
      v60 = 0.0;
      v132 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v61 = (float)(1.0 / v58) * v57;
      v130 = v59;
      v131 = v60;
      v132 = v61;
    }
    v62 = *(v27 - 2) == 4;
    v63 = *(float *)&dword_140404A6C[v11 + 433433161];
    v64 = *(float *)&dword_140404A6C[v11 + 433433159];
    v65 = *(float *)&dword_140404A6C[v11 + 433433160] + v125;
    v66 = *(float *)&dword_140404A6C[v11 + 433433160] + v121;
    v67 = *(float *)&dword_140404A6C[v11 + 433433160] + v51;
    v126 = v63 + v123;
    v68 = v64 + v34;
    v140[2] = v63 + v123;
    v69 = v64 + v113;
    v140[1] = v65;
    v140[0] = v64 + v34;
    v70 = v63 + v119;
    v141[0] = v64 + v113;
    v141[1] = v66;
    v139[0] = v64 + v117;
    v141[2] = v63 + v119;
    v139[1] = v67;
    v139[2] = v63 + v111;
    if ( v62 )
    {
      v71 = v26 + v27[2];
      v72 = *(float *)&dword_140404A6C[3 * v71 + 432531273];
      v73 = *(float *)&dword_140404A6C[3 * v71 + 432531271] * *(float *)&dword_140404A6C[v11 + 433433166];
      v74 = *(float *)&dword_140404A6C[3 * v71 + 432531271] * *(float *)&dword_140404A6C[v11 + 433433167];
      v75 = (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272] * *(float *)&dword_140404A6C[v11 + 433433169])
          + *(float *)&dword_140404A6C[v11 + 433433160];
      v127 = (float)((float)(*(float *)&dword_140404A6C[3 * v71 + 432531271]
                           * *(float *)&dword_140404A6C[v11 + 433433165])
                   + (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272]
                           * *(float *)&dword_140404A6C[v11 + 433433168]))
           + (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433171]) + v64);
      v76 = (float)(*(float *)&dword_140404A6C[3 * v71 + 432531272] * *(float *)&dword_140404A6C[v11 + 433433170])
          + *(float *)&dword_140404A6C[v11 + 433433161];
      v136 = v127;
      v77 = (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433172]) + v73) + v75;
      v25 = (float)((float)(v72 * *(float *)&dword_140404A6C[v11 + 433433173]) + v74) + v76;
      v128 = v77;
      v137 = v77;
      v138 = v25;
    }
    if ( sub_140077FA0((float *)&v133, &v130, &v144, v9, v6, v140, v141, v139) )
    {
      v78 = v144;
      if ( v144 < *a3 )
      {
        v79 = v134;
        *(_DWORD *)a1 = v133;
        *((_DWORD *)a1 + 2) = v135;
        *((_DWORD *)a1 + 1) = v79;
        *a2 = v59;
        a2[1] = v60;
        a2[2] = v61;
        *a3 = v78;
        if ( v27[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v80 = v127 - v68;
          v109 = v66 - v65;
          v122 = *a1 - v68;
          v120 = a1[1] - v65;
          v124 = a1[2] - v126;
          v81 = v70 - v126;
          v82 = fsqrt((float)((float)(v109 * v109) + (float)((float)(v69 - v68) * (float)(v69 - v68))) + (float)(v81 * v81));
          v112 = v82;
          if ( v82 == 0.0 )
          {
            v118 = 0.0;
            v83 = 0.0;
            v110 = 0.0;
          }
          else
          {
            v118 = (float)(1.0 / v82) * (float)(v69 - v68);
            v83 = (float)(1.0 / v82) * v81;
            v110 = (float)(1.0 / v82) * v109;
          }
          v84 = v25 - v126;
          v85 = fsqrt((float)((float)((float)(v128 - v65) * (float)(v128 - v65)) + (float)(v80 * v80)) + (float)(v84 * v84));
          v115 = v85;
          if ( v85 == 0.0 )
          {
            v114 = 0.0;
            v88 = 0.0;
            v89 = 0.0;
          }
          else
          {
            v86 = 1.0 / v85;
            v87 = (float)(1.0 / v85) * v80;
            v88 = v86 * (float)(v128 - v65);
            v114 = v87;
            v89 = v86 * v84;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v120 * v110) + (float)(v122 * v118))
                                                                 + (float)(v124 * v83))
                                                         * 8.0)
                                                 / v112);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v88 * v120) + (float)(v122 * v114))
                                                                 + (float)(v89 * v124))
                                                         * 4.0)
                                                 / v115);
        }
      }
    }
    if ( *(v27 - 2) == 4 && sub_140077FA0((float *)&v133, &v130, &v144, a5, v6, v140, v139, &v136) )
    {
      v90 = v144;
      if ( v144 < *a3 )
      {
        v91 = v134;
        *(_DWORD *)a1 = v133;
        *((_DWORD *)a1 + 2) = v135;
        *((_DWORD *)a1 + 1) = v91;
        *a2 = v59;
        a2[1] = v60;
        a2[2] = v61;
        *a3 = v90;
        if ( v27[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v92 = v69 - v68;
          v93 = v70 - v126;
          v94 = v66 - v65;
          v95 = v127 - v68;
          v96 = v128 - v65;
          v97 = *a1 - v68;
          v129 = a1[1] - v65;
          v98 = v25 - v126;
          v116 = a1[2] - v126;
          v99 = fsqrt((float)((float)(v94 * v94) + (float)(v92 * v92)) + (float)(v93 * v93));
          if ( v99 == 0.0 )
          {
            v100 = 0.0;
            v101 = 0.0;
            v102 = 0.0;
          }
          else
          {
            v100 = (float)(1.0 / v99) * v92;
            v101 = (float)(1.0 / v99) * v94;
            v102 = (float)(1.0 / v99) * v93;
          }
          v103 = fsqrt((float)((float)(v96 * v96) + (float)(v95 * v95)) + (float)(v98 * v98));
          if ( v103 == 0.0 )
          {
            v104 = 0.0;
            v105 = 0.0;
            v106 = 0.0;
          }
          else
          {
            v104 = (float)(1.0 / v103) * v95;
            v105 = (float)(1.0 / v103) * v96;
            v106 = (float)(1.0 / v103) * v98;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v97 * v100) + (float)(v129 * v101))
                                                                 + (float)(v116 * v102))
                                                         * 8.0)
                                                 / v99);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v105 * v129) + (float)(v97 * v104))
                                                                 + (float)(v106 * v116))
                                                         * 4.0)
                                                 / v103);
        }
      }
    }
    v9 = a5;
    ++v24;
    v26 = v143;
    v27 += 6;
  }
  while ( v24 < (int)dword_140404A6C[v142 / 4 + 432532039] );
  if ( *a3 >= 1.0 )
    return 0;
  v108 = dword_140404A6C[v11 + 433433163];
  dword_140404A6C[73006989] = dword_140404A6C[v11 + 433433162];
  dword_140404A6C[73006991] = dword_140404A6C[v11 + 433433164];
  dword_140404A6C[73006990] = v108;
  return 1;
}
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
#undef v143
#undef v144

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A4: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A8490C: using guessed type unsigned int;

//----- (00000001400D97A0) ----------------------------------------------------
__int64            sub_1400D97A0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  float *v11; // rdx
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  signed int v26; // r12d
  __int64 v27; // r8
  int *v28; // rdi
  float v29; // xmm12_4
  float v30; // xmm5_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  __int64 v37; // rcx
  float v38; // xmm14_4
  __int64 v39; // rax
  float v40; // xmm13_4
  float v41; // xmm15_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm13_4
  float v45; // xmm1_4
  float v46; // xmm14_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm14_4
  float v50; // xmm1_4
  float v51; // xmm4_4
  float v52; // xmm15_4
  float v53; // xmm9_4
  float v54; // xmm11_4
  float v55; // xmm10_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm10_4
  float v60; // xmm1_4
  float v61; // xmm4_4
  float v62; // xmm11_4
  float v63; // xmm8_4
  float v64; // xmm5_4
  float v65; // xmm12_4
  float v66; // xmm3_4
  float v67; // xmm12_4
  float v68; // xmm7_4
  float v69; // xmm8_4
  bool v70; // zf
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm13_4
  float v74; // xmm2_4
  float v75; // xmm14_4
  float v76; // xmm15_4
  float v77; // xmm0_4
  float v78; // xmm9_4
  float v79; // xmm10_4
  float v80; // xmm11_4
  __int64 v81; // rax
  float v82; // xmm0_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm2_4
  int v86; // xmm1_4
  float v87; // xmm5_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm5_4
  float v91; // xmm4_4
  float v92; // xmm0_4
  float v93; // xmm1_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  float v96; // xmm2_4
  int v97; // xmm1_4
  float v98; // xmm9_4
  float v99; // xmm10_4
  float v100; // xmm11_4
  float v101; // xmm8_4
  float v102; // xmm7_4
  float v103; // xmm12_4
  float v104; // xmm13_4
  float v105; // xmm14_4
  float v106; // xmm0_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm4_4
  float v110; // xmm10_4
  float v111; // xmm9_4
  float v112; // xmm1_4
  float v113; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D97A0[416];
#define v115 (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define v116 (*(float (*))(void *)(sr_frame_1400D97A0 + 0)) /* [rsp+40h] */
#define v117 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define v118 (*(float (*))(void *)(sr_frame_1400D97A0 + 4)) /* [rsp+44h] */
#define v119 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define v120 (*(float (*))(void *)(sr_frame_1400D97A0 + 8)) /* [rsp+48h] */
#define v121 (*(float (*))(void *)(sr_frame_1400D97A0 + 12)) /* [rsp+4Ch] */
#define v122 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 16)) /* [rsp+50h] */
#define v123 (*(float (*))(void *)(sr_frame_1400D97A0 + 24)) /* [rsp+58h] */
#define v124 (*(float (*))(void *)(sr_frame_1400D97A0 + 28)) /* [rsp+5Ch] */
#define v125 (*(float (*))(void *)(sr_frame_1400D97A0 + 32)) /* [rsp+60h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D97A0 + 36)) /* [rsp+64h] */
#define v127 (*(float (*))(void *)(sr_frame_1400D97A0 + 40)) /* [rsp+68h] */
#define v128 (*(float (*))(void *)(sr_frame_1400D97A0 + 48)) /* [rsp+70h] */
#define v129 (*(float (*))(void *)(sr_frame_1400D97A0 + 52)) /* [rsp+74h] */
#define v130 (*(float (*))(void *)(sr_frame_1400D97A0 + 56)) /* [rsp+78h] */
#define v131 (*(int (*))(void *)(sr_frame_1400D97A0 + 64)) /* [rsp+80h] */
#define v132 (*(int (*))(void *)(sr_frame_1400D97A0 + 68)) /* [rsp+84h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D97A0 + 72)) /* [rsp+88h] */
#define v134 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 80)) /* [rsp+90h] */
#define v135 (*(float (*))(void *)(sr_frame_1400D97A0 + 88)) /* [rsp+98h] */
#define v136 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 96)) /* [rsp+A0h] */
#define v137 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 112)) /* [rsp+B0h] */
#define v138 (*(float (*)[4])(void *)(sr_frame_1400D97A0 + 128)) /* [rsp+C0h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 144)) /* [rsp+D0h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400D97A0 + 152)) /* [rsp+D8h] */
#define v141 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v142 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v143 (*(float (*))(void *)(sr_frame_1400D97A0 + 392)) /* [rsp+1C8h] */
#define v144 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */
#define v145 (*(float (*))(void *)(sr_frame_1400D97A0 + 400)) /* [rsp+1D0h] */

  v11 = a7;
  v13 = *a5;
  v14 = *a5;
  v15 = *a7;
  v16 = 2310LL * a4;
  v139 = v16 * 4;
  v17 = *(float *)&dword_140404A6C[v16 + 432531269];
  v18 = v14 - v17;
  if ( v15 < v18 && v18 > *a8 )
    return 0;
  v19 = a7[1];
  v20 = a5[1] - v17;
  if ( v19 < v20 && v20 > a8[1] )
    return 0;
  v21 = a7[2];
  v22 = a5[2] - v17;
  if ( v21 < v22 && v22 > a8[2] )
    return 0;
  v23 = v13 + v17;
  if ( v15 > v23 && v23 < *a8 )
    return 0;
  v24 = a5[1] + v17;
  if ( v19 > v24 && v24 < a8[1] )
    return 0;
  v25 = a5[2] + v17;
  if ( v21 > v25 && v25 < a8[2] )
    return 0;
  v26 = 0;
  *a3 = 1.0;
  if ( (int)dword_140404A6C[v16 + 432532039] <= 0 )
    return 0;
  v27 = 770LL * a4;
  v123 = v135;
  v28 = (int *)&dword_140404A6C[v16 + 432532042];
  v140 = v27;
  v122 = v134;
  do
  {
    v29 = *a6;
    v30 = a6[6];
    v31 = *(float *)&dword_140404A6C[3 * v27 + 432531271 + 3 * *(v28 - 1)];
    v32 = *(float *)&dword_140404A6C[3 * v27 + 432531272 + 3 * *(v28 - 1)];
    v33 = *(float *)&dword_140404A6C[3 * v27 + 432531273 + 3 * *(v28 - 1)];
    v34 = a6[4];
    v35 = a6[5];
    v36 = a6[3];
    v37 = 3 * (v27 + *v28);
    v38 = v34 * v32;
    v39 = v27 + v28[1];
    v40 = (float)(v36 * v32) + (float)(*a6 * v31);
    v41 = v35 * v32;
    v42 = *(float *)&dword_140404A6C[3 * v27 + 432531272 + 3 * *v28];
    v43 = a6[1] * v31;
    v44 = v40 + (float)(v30 * v33);
    v125 = a6[1];
    v45 = a6[7] * v33;
    v46 = v38 + v43;
    v127 = a6[2];
    v47 = v127 * v31;
    v48 = *(float *)&dword_140404A6C[v37 + 432531271];
    v49 = v46 + v45;
    v50 = a6[8] * v33;
    v51 = *(float *)&dword_140404A6C[v37 + 432531273];
    v52 = (float)(v41 + v47) + v50;
    v124 = v29;
    v53 = (float)((float)(v36 * v42) + (float)(v29 * v48)) + (float)(v30 * v51);
    v54 = v35 * v42;
    v55 = (float)(v34 * v42) + (float)(v125 * v48);
    v56 = *(float *)&dword_140404A6C[3 * v39 + 432531272];
    v57 = a6[2] * v48;
    v58 = *(float *)&dword_140404A6C[3 * v39 + 432531271];
    v59 = v55 + (float)(a6[7] * v51);
    v60 = a6[8] * v51;
    v61 = *(float *)&dword_140404A6C[3 * v39 + 432531273];
    v144 = v30;
    v126 = v34;
    v62 = (float)(v54 + v57) + v60;
    v115 = v35;
    v141 = (float)((float)(a6[3] * v56) + (float)(v29 * v58)) + (float)(v30 * v61);
    v119 = (float)((float)(v34 * v56) + (float)(a6[1] * v58)) + (float)(a6[7] * v61);
    v117 = (float)((float)(v35 * v56) + (float)(a6[2] * v58)) + (float)(a6[8] * v61);
    v63 = (float)((float)(v119 - v49) * (float)(v62 - v52)) - (float)((float)(v117 - v52) * (float)(v59 - v49));
    v64 = (float)((float)(v117 - v52) * (float)(v53 - v44)) - (float)((float)(v141 - v44) * (float)(v62 - v52));
    v65 = (float)((float)(v141 - v44) * (float)(v59 - v49)) - (float)((float)(v119 - v49) * (float)(v53 - v44));
    v66 = fsqrt((float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65));
    if ( v66 == 0.0 )
    {
      v128 = 0.0;
      v68 = 0.0;
      v129 = 0.0;
      v69 = 0.0;
      v130 = 0.0;
      v67 = 0.0;
    }
    else
    {
      v67 = v65 * (float)(1.0 / v66);
      v68 = (float)(1.0 / v66) * v63;
      v69 = (float)(1.0 / v66) * v64;
      v128 = v68;
      v130 = v67;
      v129 = v69;
    }
    v70 = *(v28 - 2) == 4;
    v71 = *a5;
    v72 = a5[1];
    v73 = v44 + *a5;
    v74 = a5[2];
    v75 = v49 + v72;
    v76 = v52 + v74;
    v77 = *a5 + v141;
    v78 = v53 + *a5;
    v79 = v59 + v72;
    v137[0] = v73;
    v80 = v62 + v74;
    v137[1] = v75;
    v136[0] = v77;
    v137[2] = v76;
    v138[0] = v78;
    v138[1] = v79;
    v138[2] = v80;
    v136[2] = v74 + v117;
    v136[1] = v72 + v119;
    if ( v70 )
    {
      v81 = v27 + v28[2];
      v82 = *(float *)&dword_140404A6C[3 * v81 + 432531273];
      v83 = *(float *)&dword_140404A6C[3 * v81 + 432531271];
      v84 = *(float *)&dword_140404A6C[3 * v81 + 432531272];
      *(float *)&v122 = (float)((float)(a6[3] * v84) + (float)(v124 * v83)) + (float)((float)(v144 * v82) + v71);
      LODWORD(v134) = v122;
      *((float *)&v122 + 1) = (float)((float)(a6[7] * v82) + (float)(v125 * v83)) + (float)((float)(v126 * v84) + v72);
      HIDWORD(v134) = HIDWORD(v122);
      v123 = (float)((float)(a6[8] * v82) + (float)(v127 * v83)) + (float)((float)(v115 * v84) + a5[2]);
      v135 = v123;
    }
    if ( sub_140077FA0((float *)&v131, &v128, &v121, v11, a8, v137, v138, v136) )
    {
      v85 = v121;
      if ( v121 < *a3 )
      {
        v86 = v132;
        *(_DWORD *)a1 = v131;
        *((_DWORD *)a1 + 2) = v133;
        *((_DWORD *)a1 + 1) = v86;
        *a2 = v68;
        a2[1] = v69;
        a2[2] = v67;
        *a3 = v85;
        if ( v28[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v87 = v78 - v73;
          v142 = *(float *)&v122 - v73;
          v145 = *((float *)&v122 + 1) - v75;
          v127 = v80 - v76;
          v118 = v123 - v76;
          v126 = *a1 - v73;
          v120 = a1[1] - v75;
          v125 = a1[2] - v76;
          v88 = fsqrt(
                  (float)((float)((float)(v79 - v75) * (float)(v79 - v75)) + (float)(v87 * v87))
                + (float)((float)(v80 - v76) * (float)(v80 - v76)));
          v124 = v88;
          if ( v88 == 0.0 )
          {
            v89 = 0.0;
            v90 = 0.0;
            v91 = 0.0;
          }
          else
          {
            v89 = (float)(1.0 / v88) * v87;
            v90 = (float)(1.0 / v88) * (float)(v79 - v75);
            v91 = (float)(1.0 / v88) * v127;
          }
          v92 = fsqrt((float)((float)(v145 * v145) + (float)(v142 * v142)) + (float)(v118 * v118));
          v116 = v92;
          if ( v92 == 0.0 )
          {
            v143 = 0.0;
            v94 = 0.0;
            v95 = 0.0;
          }
          else
          {
            v93 = 1.0 / v92;
            v143 = (float)(1.0 / v92) * v142;
            v94 = (float)(1.0 / v92) * v145;
            v95 = v93 * v118;
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v89 * v126) + (float)(v90 * v120))
                                                                 + (float)(v91 * v125))
                                                         * 8.0)
                                                 / v124);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v94 * v120) + (float)(v126 * v143))
                                                                 + (float)(v95 * v125))
                                                         * 4.0)
                                                 / v116);
        }
      }
    }
    if ( *(v28 - 2) == 4 && sub_140077FA0((float *)&v131, &v128, &v121, a7, a8, v137, v136, (float *)&v134) )
    {
      v96 = v121;
      if ( v121 < *a3 )
      {
        v97 = v132;
        *(_DWORD *)a1 = v131;
        *((_DWORD *)a1 + 2) = v133;
        *((_DWORD *)a1 + 1) = v97;
        *a2 = v68;
        a2[1] = v69;
        a2[2] = v67;
        *a3 = v96;
        if ( v28[3] <= 0 )
        {
          dword_140404A6C[73007016] = -1;
        }
        else
        {
          v98 = v78 - v73;
          v99 = v79 - v75;
          v100 = v80 - v76;
          v101 = *(float *)&v122 - v73;
          v102 = *a1 - v73;
          v103 = *((float *)&v122 + 1) - v75;
          v104 = a1[1] - v75;
          v105 = a1[2] - v76;
          v106 = fsqrt((float)((float)(v99 * v99) + (float)(v98 * v98)) + (float)(v100 * v100));
          if ( v106 == 0.0 )
          {
            v107 = 0.0;
            v108 = 0.0;
            v109 = 0.0;
          }
          else
          {
            v107 = (float)(1.0 / v106) * v98;
            v108 = (float)(1.0 / v106) * v99;
            v109 = (float)(1.0 / v106) * v100;
          }
          v110 = fsqrt(
                   (float)((float)(v103 * v103) + (float)(v101 * v101))
                 + (float)((float)(v123 - v76) * (float)(v123 - v76)));
          if ( v110 == 0.0 )
          {
            v111 = 0.0;
            v112 = 0.0;
            v113 = 0.0;
          }
          else
          {
            v111 = (float)(1.0 / v110) * v101;
            v112 = (float)(1.0 / v110) * v103;
            v113 = (float)(1.0 / v110) * (float)(v123 - v76);
          }
          dword_140404A6C[73007016] = (int)(float)((float)((float)((float)((float)(v107 * v102) + (float)(v108 * v104))
                                                                 + (float)(v105 * v109))
                                                         * 8.0)
                                                 / v106);
          dword_140404A6C[73007017] = (int)(float)((float)((float)((float)((float)(v112 * v104) + (float)(v102 * v111))
                                                                 + (float)(v113 * v105))
                                                         * 4.0)
                                                 / v110);
        }
      }
    }
    v11 = a7;
    ++v26;
    v27 = v140;
    v28 += 6;
  }
  while ( v26 < *(int *)((char *)&dword_140404A6C[432532039] + v139) );
  if ( *a3 >= 1.0 )
    return 0;
  *(_QWORD *)&dword_140404A6C[73006989] = 0;
  dword_140404A6C[73006991] = 0;
  return 1;
}
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
#undef v143
#undef v144
#undef v145

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848A0: using guessed type unsigned int;
// 151A848A8: using guessed type unsigned int;
// 151A8490C: using guessed type unsigned int;

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
  __int64 v5; // rdx
  __int64 v7; // rsi
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // r10d
  signed int v18; // r14d
  signed int v19; // r13d
  unsigned int *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm12_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm11_4
  float v38; // xmm2_4
  __int64 v39; // rax
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  float v45; // xmm6_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm2_4
  __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm5_4
  float v54; // xmm11_4
  float v55; // xmm3_4
  float v56; // xmm14_4
  float v57; // xmm0_4
  float v58; // xmm13_4
  float v59; // xmm15_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm14_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm14_4
  float v70; // xmm0_4
  float v71; // xmm2_4
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  float v77; // xmm2_4
  float v78; // xmm0_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  float v86; // xmm3_4
  float v87; // xmm5_4
  float v88; // xmm6_4
  float v89; // xmm2_4
  __int64 v90; // rax
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm13_4
  float v95; // xmm11_4
  float v96; // xmm14_4
  float v97; // xmm3_4
  float v98; // xmm13_4
  float v99; // xmm14_4
  float v100; // xmm11_4
  float v101; // xmm5_4
  float v102; // xmm6_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm15_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  float v110; // xmm2_4
  float v111; // xmm15_4
  float v112; // xmm1_4
  float v113; // xmm5_4
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rdx
  float v118; // xmm5_4
  float v119; // xmm1_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  float *v122; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400DC940[432];
#define v123 (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define v124 (*(float (*))(void *)(sr_frame_1400DC940 + 0)) /* [rsp+40h] */
#define v125 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v126 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v127 (*(float (*))(void *)(sr_frame_1400DC940 + 4)) /* [rsp+44h] */
#define v128 (*(float (*))(void *)(sr_frame_1400DC940 + 8)) /* [rsp+48h] */
#define v129 (*(float (*))(void *)(sr_frame_1400DC940 + 12)) /* [rsp+4Ch] */
#define v130 (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define v131 (*(float (*))(void *)(sr_frame_1400DC940 + 16)) /* [rsp+50h] */
#define v132 (*(float (*))(void *)(sr_frame_1400DC940 + 20)) /* [rsp+54h] */
#define v133 (*(float (*))(void *)(sr_frame_1400DC940 + 24)) /* [rsp+58h] */
#define v134 (*(float (*))(void *)(sr_frame_1400DC940 + 28)) /* [rsp+5Ch] */
#define v135 (*(float (*))(void *)(sr_frame_1400DC940 + 32)) /* [rsp+60h] */
#define v136 (*(float (*))(void *)(sr_frame_1400DC940 + 36)) /* [rsp+64h] */
#define v137 (*(float (*))(void *)(sr_frame_1400DC940 + 40)) /* [rsp+68h] */
#define v138 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 44)) /* [rsp+6Ch] */
#define v139 (*(float (*))(void *)(sr_frame_1400DC940 + 48)) /* [rsp+70h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 56)) /* [rsp+78h] */
#define v141 (*(float (*))(void *)(sr_frame_1400DC940 + 64)) /* [rsp+80h] */
#define v142 (*(float (*))(void *)(sr_frame_1400DC940 + 68)) /* [rsp+84h] */
#define v143 (*(float (*))(void *)(sr_frame_1400DC940 + 72)) /* [rsp+88h] */
#define v144 (*(float (*))(void *)(sr_frame_1400DC940 + 80)) /* [rsp+90h] */
#define v145 (*(float (*))(void *)(sr_frame_1400DC940 + 84)) /* [rsp+94h] */
#define v146 (*(float (*))(void *)(sr_frame_1400DC940 + 88)) /* [rsp+98h] */
#define v147 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 96)) /* [rsp+A0h] */
#define v148 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 100)) /* [rsp+A4h] */
#define v149 (*(unsigned int (*))(void *)(sr_frame_1400DC940 + 104)) /* [rsp+A8h] */
#define v150 (*(float (*))(void *)(sr_frame_1400DC940 + 112)) /* [rsp+B0h] */
#define v151 (*(float (*))(void *)(sr_frame_1400DC940 + 116)) /* [rsp+B4h] */
#define v152 (*(float (*))(void *)(sr_frame_1400DC940 + 120)) /* [rsp+B8h] */
#define v153 (*(float (*))(void *)(sr_frame_1400DC940 + 124)) /* [rsp+BCh] */
#define v154 (*(int (*))(void *)(sr_frame_1400DC940 + 128)) /* [rsp+C0h] */
#define v155 (*(float (*))(void *)(sr_frame_1400DC940 + 136)) /* [rsp+C8h] */
#define v156 (*(float (*))(void *)(sr_frame_1400DC940 + 140)) /* [rsp+CCh] */
#define v157 (*(float (*))(void *)(sr_frame_1400DC940 + 144)) /* [rsp+D0h] */
#define v158 (*(float (*))(void *)(sr_frame_1400DC940 + 152)) /* [rsp+D8h] */
#define v159 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 160)) /* [rsp+E0h] */
#define v160 (*(__int64 (*))(void *)(sr_frame_1400DC940 + 168)) /* [rsp+E8h] */
#define v161 (*(float (*))(void *)(sr_frame_1400DC940 + 400)) /* [rsp+1D0h] */
#define v162 (*(int (*))(void *)(sr_frame_1400DC940 + 424)) /* [rsp+1E8h] */

  v162 = a4;
  v5 = a1;
  v7 = 5210LL * a1;
  v140 = a1;
  if ( dword_140404A6C[24944 * dword_140404A6C[v7 + 129716710] + 346707717] )
    return sub_1400DFB70(a1, a2, a3, a4);
  v9 = *(float *)&dword_140404A6C[5210 * a1 + 129716753];
  if ( *a2 < v9 && v9 > *a3 )
    return 0;
  v10 = a2[1];
  v11 = *(float *)&dword_140404A6C[5210 * a1 + 129716754];
  if ( v10 < v11 && v11 > a3[1] )
    return 0;
  v12 = a2[2];
  v13 = *(float *)&dword_140404A6C[5210 * a1 + 129716755];
  if ( v12 < v13 && v13 > a3[2] )
    return 0;
  v14 = *(float *)&dword_140404A6C[5210 * a1 + 129716756];
  if ( *a2 > v14 && v14 < *a3 )
    return 0;
  v15 = *(float *)&dword_140404A6C[5210 * a1 + 129716757];
  if ( v10 > v15 && v15 < a3[1] )
    return 0;
  v16 = *(float *)&dword_140404A6C[5210 * a1 + 129716758];
  if ( v12 > v16 && v16 < a3[2] )
    return 0;
  v17 = dword_140404A6C[5210 * a1 + 129717219];
  v18 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v19 = 0;
  v154 = v17;
  if ( v17 > 0 )
  {
    v20 = &dword_140404A6C[v7 + 129717225];
    while ( (int)v20[10] <= 0 )
    {
LABEL_58:
      ++v19;
      v20 += 16;
      if ( v19 >= v17 )
      {
        a4 = v162;
        v18 = 0;
        goto LABEL_60;
      }
    }
    v21 = (int)*(v20 - 4);
    v22 = 5210 * v5;
    v159 = v21;
    v23 = 60LL * (int)dword_140404A6C[5210 * v5 + 129716769 + v21];
    v24 = (int)*v20;
    v25 = *(float *)&dword_140404A6C[v23 + 73007026];
    v26 = *(float *)&dword_140404A6C[v23 + 73007027];
    v27 = *(float *)&dword_140404A6C[v23 + 73007028];
    v155 = v25;
    v156 = v26;
    v157 = v27;
    if ( (_DWORD)v24 != -1 )
    {
      v28 = *((float *)v20 + 4);
      v29 = (int)dword_140404A6C[v22 + 129716769 + v24];
      v30 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007027] - v26) * v28) + v26;
      v155 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007026] - v25) * v28) + v25;
      v25 = v155;
      v31 = *(float *)&dword_140404A6C[60 * v29 + 73007028];
      v156 = v30;
      v26 = v30;
      v157 = (float)((float)(v31 - v27) * v28) + v27;
      v27 = v157;
    }
    v32 = (int)*(v20 - 3);
    v33 = 60LL * (int)dword_140404A6C[v32 + 129716769 + v22];
    v34 = (int)v20[1];
    v35 = *(float *)&dword_140404A6C[v33 + 73007026];
    v36 = *(float *)&dword_140404A6C[v33 + 73007027];
    v37 = *(float *)&dword_140404A6C[v33 + 73007028];
    v134 = v35;
    v144 = v35;
    v135 = v36;
    v145 = v36;
    v136 = v37;
    v146 = v37;
    if ( (_DWORD)v34 != -1 )
    {
      v38 = *((float *)v20 + 5);
      v39 = (int)dword_140404A6C[v22 + 129716769 + v34];
      v40 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007027] - v36) * v38) + v36;
      v134 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007026] - v35) * v38) + v35;
      v35 = v134;
      v144 = v134;
      v41 = *(float *)&dword_140404A6C[60 * v39 + 73007028];
      v36 = v40;
      v135 = v40;
      v145 = v40;
      v136 = (float)((float)(v41 - v37) * v38) + v37;
      v37 = v136;
      v146 = v136;
    }
    v42 = (int)*(v20 - 2);
    v160 = v42;
    v43 = 60LL * (int)dword_140404A6C[v42 + 129716769 + v22];
    v44 = (int)v20[2];
    v45 = *(float *)&dword_140404A6C[v43 + 73007026];
    v46 = *(float *)&dword_140404A6C[v43 + 73007027];
    v47 = *(float *)&dword_140404A6C[v43 + 73007028];
    v128 = v45;
    v141 = v45;
    v129 = v46;
    v142 = v46;
    v161 = v47;
    v143 = v47;
    if ( (_DWORD)v44 != -1 )
    {
      v48 = *((float *)v20 + 6);
      v49 = (int)dword_140404A6C[v22 + 129716769 + v44];
      v50 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007027] - v46) * v48) + v46;
      v128 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007026] - v45) * v48) + v45;
      v45 = v128;
      v141 = v128;
      v51 = *(float *)&dword_140404A6C[60 * v49 + 73007028];
      v46 = v50;
      v129 = v50;
      v142 = v50;
      v161 = (float)((float)(v51 - v47) * v48) + v47;
      v47 = v161;
      v143 = v161;
    }
    v52 = v36 - v26;
    v53 = v37 - v27;
    v151 = v52;
    v54 = v46 - v26;
    v150 = v53;
    v158 = v47 - v27;
    v152 = v35 - v25;
    v153 = v45 - v25;
    v55 = (float)((float)(v46 - v26) * v53) - (float)((float)(v47 - v27) * v52);
    v56 = (float)((float)(v47 - v27) * v152) - (float)(v53 * (float)(v45 - v25));
    v125 = (float)(v52 * (float)(v45 - v25)) - (float)((float)(v46 - v26) * v152);
    v57 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v125 * v125));
    if ( v57 == 0.0 )
    {
      v137 = 0.0;
      v59 = 0.0;
      v139 = 0.0;
      v60 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v58 = (float)(1.0 / v57) * v125;
      v59 = (float)(1.0 / v57) * v55;
      v139 = v58;
      v60 = (float)(1.0 / v57) * v56;
      v137 = v59;
    }
    v61 = *a3;
    v62 = v27 - a3[2];
    v130 = a3[1];
    v123 = a3[2];
    v138 = LODWORD(v60);
    v63 = (float)((float)((float)(v26 - v130) * v60) + (float)((float)(v25 - v61) * v59)) + (float)(v62 * v58);
    v64 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
        + (float)((float)(v27 - a2[2]) * v58);
    if ( v64 <= 0.0 )
    {
      if ( v64 < 0.0 && v63 < 0.0 )
        goto LABEL_40;
    }
    else if ( v63 > 0.0 )
    {
      goto LABEL_40;
    }
    v65 = v130 - a2[1];
    v66 = v123 - a2[2];
    v67 = v61 - *a2;
    v133 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
         + (float)((float)(v27 - a2[2]) * v58);
    v131 = v65;
    v68 = (float)((float)(v65 * v60) + (float)(v67 * v59)) + (float)(v66 * v58);
    if ( v68 != 0.0 )
    {
      v69 = v64 / v68;
      v133 = v69;
      v70 = (float)(v69 * v66) + a2[2];
      v71 = (float)(v69 * v131) + a2[1];
      v126 = (float)(v69 * v67) + *a2;
      v147 = LODWORD(v126);
      v149 = LODWORD(v70);
      v148 = LODWORD(v71);
      if ( (float)((float)((float)((float)((float)(v150 * (float)(v71 - v26)) - (float)(v151 * (float)(v70 - v27))) * v59)
                         + (float)((float)((float)(v152 * (float)(v70 - v27)) - (float)(v150 * (float)(v126 - v25)))
                                 * v60))
                 + (float)((float)((float)(v151 * (float)(v126 - v25)) - (float)(v152 * (float)(v71 - v26))) * v58)) >= 0.0 )
      {
        if ( (float)((float)((float)((float)((float)((float)(v70 - v136) * (float)(v45 - v134))
                                           - (float)((float)(v161 - v136) * (float)(v126 - v134)))
                                   * v60)
                           + (float)((float)((float)((float)(v161 - v136) * (float)(v71 - v135))
                                           - (float)((float)(v46 - v135) * (float)(v70 - v136)))
                                   * v59))
                   + (float)((float)((float)((float)(v46 - v135) * (float)(v126 - v134))
                                   - (float)((float)(v71 - v135) * (float)(v45 - v134)))
                           * v58)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v27 - v161) * (float)(v71 - v129))
                                           - (float)((float)(v26 - v129) * (float)(v70 - v161)))
                                   * v59)
                           + (float)((float)((float)((float)(v25 - v128) * (float)(v70 - v161))
                                           - (float)((float)(v27 - v161) * (float)(v126 - v128)))
                                   * v60))
                   + (float)((float)((float)((float)(v26 - v129) * (float)(v126 - v128))
                                   - (float)((float)(v25 - v128) * (float)(v71 - v129)))
                           * v58)) >= 0.0
          && v69 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v126;
          *(float *)&dword_140404A6C[73006982] = v71;
          v72 = v22 + (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006983] = v70;
          *(float *)&dword_140404A6C[73006984] = v59;
          *(float *)&dword_140404A6C[73006985] = v60;
          *(float *)&dword_140404A6C[73006986] = v58;
          dword_140404A6C[73006994] = dword_140404A6C[v72 + 129716769];
          v73 = (int)dword_140404A6C[4 * v32 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006987] = v69;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + v73];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v74 = 60LL * (int)dword_140404A6C[73006994];
          v75 = 60LL * (int)dword_140404A6C[73006995];
          v76 = 60LL * (int)dword_140404A6C[73006996];
          v77 = (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007032])
              + (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007032]);
          v78 = *(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007033];
          v79 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007034])
              + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007034]);
          v21 = v159;
          v80 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007033];
          v81 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007034];
          v82 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007033]) + v78;
          v42 = v160;
          *(float *)&dword_140404A6C[73006989] = v77
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v76 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v79 + v81;
          *(float *)&dword_140404A6C[73006990] = v82 + v80;
        }
        v46 = v129;
        v45 = v128;
      }
      v47 = v161;
    }
LABEL_40:
    if ( *(v20 - 5) == 4 )
    {
      v83 = (int)*(v20 - 1);
      v144 = v45;
      v145 = v46;
      v146 = v47;
      v84 = 60LL * (int)dword_140404A6C[v83 + 129716769 + v22];
      v85 = (int)v20[3];
      v86 = *(float *)&dword_140404A6C[v84 + 73007026];
      v87 = *(float *)&dword_140404A6C[v84 + 73007027];
      v88 = *(float *)&dword_140404A6C[v84 + 73007028];
      v127 = v86;
      v141 = v86;
      v132 = v87;
      v142 = v87;
      v124 = v88;
      v143 = v88;
      if ( (_DWORD)v85 != -1 )
      {
        v89 = *((float *)v20 + 7);
        v90 = (int)dword_140404A6C[v22 + 129716769 + v85];
        v91 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007027] - v87) * v89) + v87;
        v127 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007026] - v86) * v89) + v86;
        v86 = v127;
        v141 = v127;
        v92 = *(float *)&dword_140404A6C[60 * v90 + 73007028];
        v87 = v91;
        v132 = v91;
        v142 = v91;
        v124 = (float)((float)(v92 - v88) * v89) + v88;
        v88 = v124;
        v143 = v124;
      }
      v93 = v86 - v25;
      v94 = (float)(v158 * (float)(v87 - v26)) - (float)(v54 * (float)(v88 - v27));
      v95 = (float)(v54 * v93) - (float)(v153 * (float)(v87 - v26));
      v96 = (float)(v153 * (float)(v88 - v27)) - (float)(v158 * v93);
      v97 = fsqrt((float)((float)(v96 * v96) + (float)(v94 * v94)) + (float)(v95 * v95));
      if ( v97 == 0.0 )
      {
        v137 = 0.0;
        v98 = 0.0;
        v138 = 0;
        v99 = 0.0;
        v139 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = v94 * (float)(1.0 / v97);
        v99 = v96 * (float)(1.0 / v97);
        v100 = v95 * (float)(1.0 / v97);
        v137 = v98;
        v138 = LODWORD(v99);
        v139 = v100;
      }
      v101 = a3[1];
      v102 = a3[2];
      v103 = (float)((float)((float)(v26 - v101) * v99) + (float)((float)(v25 - *a3) * v98))
           + (float)((float)(v27 - v102) * v100);
      v104 = a2[2];
      v105 = (float)(v27 - v104) * v100;
      v106 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      if ( v106 <= 0.0 )
      {
        if ( v106 < 0.0 && v103 < 0.0 )
          goto LABEL_57;
      }
      else if ( v103 > 0.0 )
      {
        goto LABEL_57;
      }
      v107 = *a3 - *a2;
      v108 = v101 - a2[1];
      v109 = v102 - v104;
      v133 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      v110 = (float)((float)(v108 * v99) + (float)(v107 * v98)) + (float)(v109 * v100);
      if ( v110 != 0.0 )
      {
        v111 = v106 / v110;
        v133 = v111;
        v112 = (float)(v111 * v108) + a2[1];
        v113 = (float)(v111 * v109) + a2[2];
        v136 = (float)(v111 * v107) + *a2;
        v147 = LODWORD(v136);
        v134 = v113;
        v149 = LODWORD(v113);
        v135 = v112;
        v148 = LODWORD(v112);
        if ( (float)((float)((float)((float)((float)((float)(v113 - v27) * v153)
                                           - (float)((float)(v47 - v27) * (float)(v136 - v25)))
                                   * v99)
                           + (float)((float)((float)((float)(v47 - v27) * (float)(v112 - v26))
                                           - (float)((float)(v46 - v26) * (float)(v113 - v27)))
                                   * v98))
                   + (float)((float)((float)((float)(v46 - v26) * (float)(v136 - v25))
                                   - (float)((float)(v112 - v26) * v153))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v134 - v161) * (float)(v127 - v128))
                                           - (float)((float)(v124 - v161) * (float)(v136 - v128)))
                                   * v99)
                           + (float)((float)((float)((float)(v124 - v161) * (float)(v135 - v129))
                                           - (float)((float)(v132 - v129) * (float)(v134 - v161)))
                                   * v98))
                   + (float)((float)((float)((float)(v132 - v129) * (float)(v136 - v128))
                                   - (float)((float)(v135 - v129) * (float)(v127 - v128)))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v25 - v127) * (float)(v134 - v124))
                                           - (float)((float)(v27 - v124) * (float)(v136 - v127)))
                                   * v99)
                           + (float)((float)((float)((float)(v27 - v124) * (float)(v135 - v132))
                                           - (float)((float)(v26 - v132) * (float)(v134 - v124)))
                                   * v98))
                   + (float)((float)((float)((float)(v26 - v132) * (float)(v136 - v127))
                                   - (float)((float)(v25 - v127) * (float)(v135 - v132)))
                           * v100)) >= 0.0
          && v111 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v136;
          *(float *)&dword_140404A6C[73006982] = v135;
          *(float *)&dword_140404A6C[73006983] = v134;
          *(float *)&dword_140404A6C[73006984] = v98;
          *(float *)&dword_140404A6C[73006985] = v99;
          v114 = (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006986] = v100;
          *(float *)&dword_140404A6C[73006987] = v111;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006994] = dword_140404A6C[v22 + 129716769 + v114];
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v83 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v115 = 60LL * (int)dword_140404A6C[73006994];
          v116 = 60LL * (int)dword_140404A6C[73006995];
          v117 = 60LL * (int)dword_140404A6C[73006996];
          v118 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007034])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007034]);
          v119 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007033];
          v120 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007034];
          v121 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007033])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007033]);
          *(float *)&dword_140404A6C[73006989] = (float)((float)(*(float *)&dword_140404A6C[73006999]
                                                               * *(float *)&dword_140404A6C[v116 + 73007032])
                                                       + (float)(*(float *)&dword_140404A6C[73006998]
                                                               * *(float *)&dword_140404A6C[v115 + 73007032]))
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v117 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v118 + v120;
          *(float *)&dword_140404A6C[73006990] = v121 + v119;
        }
      }
    }
LABEL_57:
    v5 = v140;
    goto LABEL_58;
  }
LABEL_60:
  if ( a4 && (int)dword_140404A6C[v7 + 129720373] > 0 )
  {
    v122 = (float *)&dword_140404A6C[v7 + 129720387];
    do
    {
      if ( (unsigned int)sub_1400DF380(
                           (float *)&v147,
                           &v137,
                           &v133,
                           a2,
                           a3,
                           (float *)&dword_140404A6C[43 * v18 + 129720393 + v7],
                           *v122) )
      {
        if ( v133 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006981] = v147;
          dword_140404A6C[73006982] = v148;
          dword_140404A6C[73006983] = v149;
          *(float *)&dword_140404A6C[73006984] = v137;
          dword_140404A6C[73006985] = v138;
          *(float *)&dword_140404A6C[73006986] = v139;
          *(float *)&dword_140404A6C[73006987] = v133;
          dword_140404A6C[73006993] = -1;
          dword_140404A6C[73006994] = v18;
        }
      }
      ++v18;
      v122 += 43;
    }
    while ( v18 < (int)dword_140404A6C[v7 + 129720373] );
  }
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}
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
#undef v143
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
#undef v161
#undef v162

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

