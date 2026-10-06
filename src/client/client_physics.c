#include "shared_client.h"

// 1400AD5F5: variable 'v16' is possibly undefined
// 1400AD683: variable 'v24' is possibly undefined
// 1400ADC9B: variable 'v80' is possibly undefined
// 1400ADD14: variable 'v89' is possibly undefined
// 1400AE8A1: variable 'v202' is possibly undefined
// 1400AE975: variable 'v213' is possibly undefined
// 1400AEA3F: variable 'v222' is possibly undefined
// 1400AEAAD: variable 'v238' is possibly undefined
// 1400B01CE: variable 'v278' is possibly undefined
// 1400B0EA2: variable 'v426' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B1450) ----------------------------------------------------
__int64            sub_1400B1450(
        int a1,
        int a2,
        int a3,
        float *a4,
        float *a5,
        float *a6,
        float a7,
        int a8,
        __m128 *a9,
        float *a10,
        unsigned int *a11,
        unsigned int *a12,
        float a13,
        char a14)
{
  float v15; // xmm2_4
  float v16; // xmm0_4
  __int64 v17; // r15
  float v18; // xmm1_4
  __int64 v19; // r13
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // xmm15_8
  __int64 v24; // rbx
  __int64 v25; // rcx
  float *v26; // r12
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  unsigned int v31; // xmm2_4
  unsigned int v32; // xmm3_4
  unsigned int v33; // xmm4_4
  double v34; // xmm11_8
  float v35; // xmm10_4
  float v36; // xmm8_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm6_4
  float v40; // xmm14_4
  float v41; // xmm9_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm11_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  float v48; // xmm9_4
  float v49; // xmm8_4
  float v50; // xmm10_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm9_4
  float v54; // xmm8_4
  float v55; // xmm10_4
  double v56; // xmm0_8
  float v57; // xmm11_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  __int64 v60; // rax
  float v61; // xmm8_4
  float v62; // xmm9_4
  float v63; // xmm10_4
  __int64 v64; // rdi
  float v65; // xmm2_4
  float *v66; // r9
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm10_4
  float v71; // xmm8_4
  float v72; // xmm0_4
  float v73; // xmm1_4
  double v74; // xmm2_8
  float v75; // xmm1_4
  float v76; // xmm1_4
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdi
  float *v80; // r15
  __int64 v81; // rdx
  __m128 v82; // xmm0
  float v83; // xmm15_4
  float v84; // xmm2_4
  float v85; // xmm8_4
  float v86; // xmm10_4
  float v87; // xmm5_4
  float v88; // xmm3_4
  float v89; // xmm4_4
  float v90; // xmm0_4
  float v91; // xmm9_4
  float v92; // xmm0_4
  float v93; // xmm9_4
  double v94; // xmm0_8
  float v95; // xmm1_4
  float v96; // xmm1_4
  __int64 v97; // rax
  float v98; // xmm4_4
  float v99; // xmm9_4
  float v100; // xmm2_4
  float v101; // xmm0_4
  float v102; // xmm5_4
  unsigned int v103; // xmm3_4
  float v104; // xmm1_4
  float v105; // xmm4_4
  float v106; // xmm9_4
  float v107; // xmm2_4
  __int64 v108; // rcx
  __int64 v109; // rax
  float *v110; // rbx
  float v111; // xmm3_4
  float v112; // xmm4_4
  float v113; // xmm5_4
  float v114; // xmm8_4
  float v115; // xmm5_4
  float v116; // xmm8_4
  float v117; // xmm4_4
  float v118; // xmm9_4
  float v119; // xmm10_4
  float v120; // xmm12_4
  float v121; // xmm3_4
  float v122; // xmm0_4
  float v123; // xmm8_4
  float v124; // xmm7_4
  double v125; // xmm0_8
  float v126; // xmm1_4
  float v127; // xmm1_4
  __int64 v128; // rcx
  float v129; // xmm8_4
  float v130; // xmm6_4
  __int64 v131; // rax
  float v132; // xmm7_4
  float v133; // xmm2_4
  float v134; // xmm0_4
  unsigned int v135; // xmm3_4
  float v136; // xmm1_4
  float v137; // xmm7_4
  float v138; // xmm1_4
  float v139; // xmm8_4
  _Alignas(16) unsigned sr_joint_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B1450[208];
#define v141 (*(_DWORD (*)[12])(void *)(sr_frame_1400B1450 + 0)) /* [rsp+0h] */
#define v142 (*(__int128 (*))(void *)(sr_frame_1400B1450 + 48)) /* [rsp+30h] */
#define v143 (*(__m128 (*))(void *)(sr_frame_1400B1450 + 64)) /* [rsp+40h] */
#define v144 (*(float (*))(void *)(sr_frame_1400B1450 + 88)) /* [rsp+58h] */
#define v145 (*(__int64 (*))(void *)(sr_frame_1400B1450 + 96)) /* [rsp+60h] */
#define v146 (*(float (*))(void *)(sr_frame_1400B1450 + 104)) /* [rsp+68h] */
#define v147 (*(__int128 (*))(void *)(sr_frame_1400B1450 + 112)) /* [rsp+70h] */
#define v148 (*(float (*))(void *)(sr_frame_1400B1450 + 128)) /* [rsp+80h] */
#define v149 (*(unsigned int (*))(void *)(sr_frame_1400B1450 + 132)) /* [rsp+84h] */
#define v150 (*(unsigned int (*))(void *)(sr_frame_1400B1450 + 136)) /* [rsp+88h] */
#define v151 (*(float (*))(void *)(sr_frame_1400B1450 + 140)) /* [rsp+8Ch] */
#define v152 (*(int (*))(void *)(sr_frame_1400B1450 + 144)) /* [rsp+90h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_1400B1450 + 152)) /* [rsp+98h] */
#define v157 (*(__int64 (*))(void *)(sr_frame_1400B1450 + 200)) /* [rsp+C8h] */

  v15 = *a4;
  v16 = a4[1] * a4[1];
  v17 = a3;
  v18 = a4[2] * a4[2];
  v144 = *(float *)&a2;
  v19 = a1;
  v20 = (float)((float)(v15 * v15) + v16) + v18;
  v21 = fabs(a7);
  v22 = fsqrt(v20);
  if ( v22 > v21 )
    v22 = v21;
  HIDWORD(v23) = 0;
  *(float *)&v23 = acos((float)(v22 / a7)) * -2.0;
  if ( (a14 & 4) != 0 )
    v23 ^= 0x80000000uLL;
  v153 = v17;
  v24 = 7166 * v19;
  v25 = 28664 * v19 + 312 * v17;
  v26 = (float *)((char *)&dword_140404A6C[280651452] + v25);
  LODWORD(v145) = *(unsigned int *)((char *)&dword_140404A6C[280651511] + v25);
  sub_14007AE70(
    (float *)&(*(__int128 *)(void *)sr_joint_rotation),
    (float *)((char *)&dword_140404A6C[280651452] + v25),
    (float *)&dword_140404A6C[7166 * v19 + 280651452 + 78 * SLODWORD(v144)]);
  sub_14010E370(SR_VEC_LANES(128, v143, f32), (float *)&(*(__int128 *)(void *)sr_joint_rotation));
  v27 = a4[1];
  v28 = (float)((float)(v27 * a5[1]) + (float)(*a4 * *a5)) + (float)(a4[2] * a5[2]);
  v29 = (float)((float)(v27 * a5[4]) + (float)(*a4 * a5[3])) + (float)(a4[2] * a5[5]);
  v30 = (float)((float)(v27 * a5[7]) + (float)(*a4 * a5[6])) + (float)(a4[2] * a5[8]);
  if ( (a14 & 4) == 0 && v29 > -0.0625 )
    v29 = -0.0625;
  *(float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) = -v29;
  *((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1) = -v30;
  *((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3) = -v28;
  sub_14007A240((__int64)&(*(__int128 *)(void *)sr_joint_rotation) + 12, (float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3);
  *((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 2) = (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1) * *(float *)&dword_1402F617C)
                        - (float)(*(float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) * *(float *)&dword_1402F6180);
  *((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 3) = (float)(*((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3) * *(float *)&dword_1402F6180)
                        - (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1) * *(float *)&dword_1402F6178);
  (*(float *)&sr_joint_rotation[8]) = (float)(*(float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) * *(float *)&dword_1402F6178)
       - (float)(*((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3) * *(float *)&dword_1402F617C);
  sub_14007A240((__int64)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 8, (float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 2);
  *(float *)&(*(__int128 *)(void *)sr_joint_rotation) = (float)((*(float *)&sr_joint_rotation[8]) * *(float *)&(*(__int128 *)(void *)(sr_joint_rotation+4))) - (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 3) * *((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1));
  *((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 1) = (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 2) * *((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1)) - (float)((*(float *)&sr_joint_rotation[8]) * *((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3));
  *((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 2) = (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 3) * *((float *)&(*(__int128 *)(void *)sr_joint_rotation) + 3))
                        - (float)(*((float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 2) * *(float *)&(*(__int128 *)(void *)(sr_joint_rotation+4)));
  sub_14007A240((__int64)&(*(__int128 *)(void *)sr_joint_rotation), (float *)&(*(__int128 *)(void *)sr_joint_rotation));
  v31 = DWORD1((*(__int128 *)(void *)sr_joint_rotation));
  v32 = DWORD2((*(__int128 *)(void *)sr_joint_rotation));
  v33 = DWORD1((*(__int128 *)(void *)(sr_joint_rotation+4)));
  DWORD1((*(__int128 *)(void *)sr_joint_rotation)) = HIDWORD((*(__int128 *)(void *)sr_joint_rotation));
  DWORD1((*(__int128 *)(void *)(sr_joint_rotation+4))) = HIDWORD((*(__int128 *)(void *)(sr_joint_rotation+4)));
  *((_QWORD *)&(*(__int128 *)(void *)sr_joint_rotation) + 1) = __PAIR64__(v31, DWORD2((*(__int128 *)(void *)(sr_joint_rotation+4))));
  *((_QWORD *)&(*(__int128 *)(void *)(sr_joint_rotation+4)) + 1) = __PAIR64__(v33, v32);
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_joint_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container((unsigned __int64)a8));
  HIDWORD(v34) = HIDWORD(v23);
  *(float *)&v34 = *(float *)&v23 * -0.5;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_joint_rotation), (float *)&dword_1402F6178, v34);
  sub_14010E370((float *)&v142, (float *)&(*(__int128 *)(void *)sr_joint_rotation));
  v35 = *(float *)&v142;
  v36 = *((float *)&v142 + 1);
  LODWORD(v37) = v142;
  v147 = v142;
  v38 = *((float *)&v142 + 1);
  v39 = *((float *)&v142 + 2);
  v40 = *((float *)&v142 + 2);
  v41 = *((float *)&v142 + 3);
  v152 = a14 & 8;
  if ( (a14 & 8) != 0 )
  {
    (*(float *)&sr_joint_rotation[8]) = 1.0;
    (*(__int128 *)(void *)sr_joint_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_joint_rotation+4)) = xmmword_140278D30;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_joint_rotation), (float *)&dword_1402F6188, sr_export_float_lane_container((unsigned __int64)a8));
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_joint_rotation), (float *)&dword_1402F6178, v34);
    sub_14010E370((float *)&v147, (float *)&(*(__int128 *)(void *)sr_joint_rotation));
    v40 = *((float *)&v147 + 2);
    v38 = *((float *)&v147 + 1);
    LODWORD(v37) = v147;
  }
  v42 = SR_VEC_LANES(128, v143, f32)[3];
  v43 = SR_VEC_LANES(128, v143, f32)[2];
  v44 = SR_VEC_LANES(128, v143, f32)[0];
  v45 = SR_VEC_LANES(128, v143, f32)[1];
  v46 = SR_VEC_LANES(128, v143, f32)[2] * v39;
  v47 = 0.0;
  if ( (float)((float)((float)(SR_VEC_LANES(128, v143, f32)[3] * v41) + v46)
             + (float)((float)(SR_VEC_LANES(128, v143, f32)[0] * v35) + (float)(SR_VEC_LANES(128, v143, f32)[1] * v36))) < 0.0 )
  {
    v143 = _mm_xor_ps(v143, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v43 = SR_VEC_LANES(128, v143, f32)[2];
    v45 = SR_VEC_LANES(128, v143, f32)[1];
    v44 = SR_VEC_LANES(128, v143, f32)[0];
    v42 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v143, v143, 255), f32)[0];
  }
  SR_VEC_LANES(128, v143, f32)[2] = -v43;
  SR_VEC_LANES(128, v143, f32)[0] = -v44;
  SR_VEC_LANES(128, v143, f32)[1] = -v45;
  v48 = (float)((float)((float)((float)-v44 * *((float *)&v142 + 3)) + (float)(v42 * v35))
              + (float)((float)-v45 * *((float *)&v142 + 2)))
      - (float)((float)-v43 * v36);
  v49 = (float)((float)((float)(v42 * *((float *)&v142 + 1)) - (float)((float)-v44 * *((float *)&v142 + 2)))
              + (float)((float)-v45 * *((float *)&v142 + 3)))
      + (float)((float)-v43 * v35);
  v50 = (float)((float)((float)((float)-v44 * *((float *)&v142 + 1)) + (float)(v42 * *((float *)&v142 + 2)))
              - (float)((float)-v45 * *(float *)&v142))
      + (float)((float)-v43 * *((float *)&v142 + 3));
  v51 = (float)((float)((float)(v42 * *((float *)&v142 + 3)) - (float)((float)-v44 * *(float *)&v142))
              - (float)((float)-v45 * *((float *)&v142 + 1)))
      - (float)((float)-v43 * *((float *)&v142 + 2));
  v52 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
  if ( v52 == 0.0 )
  {
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
  }
  else
  {
    v53 = v48 * (float)(1.0 / v52);
    v54 = v49 * (float)(1.0 / v52);
    v55 = v50 * (float)(1.0 / v52);
  }
  v56 = acos(fminf(fmaxf(v51, -1.0), 1.0));
  v57 = a13;
  v146 = -a13;
  v58 = v56 + v56;
  v59 = fmaxf(v58, -a13);
  if ( a13 < v59 )
    v59 = a13;
  v60 = (int)v145;
  v61 = v54 * v59;
  v145 = v60;
  v62 = v53 * v59;
  v63 = v55 * v59;
  v64 = 36 * v60;
  v65 = v61 * v26[4];
  v66 = (float *)&dword_140404A6C[36 * v60 + 485543033];
  v67 = v62 * v26[1];
  v68 = (float)((float)(v61 * v26[3]) + (float)(v62 * *v26)) + (float)(v63 * v26[6]);
  v69 = v63 * v26[7];
  v70 = v63 * v26[8];
  v71 = (float)(v61 * v26[5]) + (float)(v62 * v26[2]);
  *v66 = v68;
  v66[1] = (float)(v65 + v67) + v69;
  v66[2] = v71 + v70;
  v72 = (float)(*a6 * 0.5) + v68;
  *v66 = v72;
  v73 = (float)(a6[1] * 0.5) + *(float *)&dword_140404A6C[36 * v60 + 485543034];
  v66[1] = v73;
  *(_QWORD *)&v74 = *((unsigned int *)a6 + 2);
  *(float *)&v74 = (float)(*(float *)&v74 * 0.5) + *(float *)&dword_140404A6C[36 * v60 + 485543035];
  v66[2] = *(float *)&v74;
  if ( (_DWORD)v17 == 10 )
  {
    v75 = *(float *)&dword_140404A6C[v24 + 280657947];
    *v66 = v72 + *(float *)&dword_140404A6C[v24 + 280657945];
    v66[1] = *(float *)&dword_140404A6C[v24 + 280657946] + *(float *)&dword_140404A6C[v64 + 485543034];
    v66[2] = v75 + *(float *)&dword_140404A6C[v64 + 485543035];
  }
  else if ( (_DWORD)v17 == 13 )
  {
    v76 = v73 + *(float *)&dword_140404A6C[v24 + 280657949];
    *(float *)&v74 = *(float *)&v74 + *(float *)&dword_140404A6C[v24 + 280657950];
    *v66 = v72 + *(float *)&dword_140404A6C[v24 + 280657948];
    v66[1] = v76;
    v66[2] = *(float *)&v74;
  }
  if ( (a14 & 0x10) != 0 )
  {
    v141[10] = 1065353216;
    sub_1400B2BF0(v19, SLODWORD(v144), v17, v66, *a10, 1.0);
    sub_1400A9940(v19, SLODWORD(v144), v17, (float *)&dword_140404A6C[61 * v145 + 486149283]);
    v60 = v145;
  }
  v77 = 61 * v60;
  dword_140404A6C[v64 + 485543048] = 0;
  dword_140404A6C[v77 + 486149287] = *a12;
  dword_140404A6C[v77 + 486149288] = *a11;
  v78 = v24 * 4 + 312 * (v17 + 1);
  v79 = *(int *)((char *)&dword_140404A6C[280651511] + v78);
  v80 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v78 + 1126819164);
  sub_14007AE70((float *)&(*(__int128 *)(void *)sr_joint_rotation), v80, v26);
  sub_14010E370(SR_VEC_LANES(128, v143, f32), (float *)&(*(__int128 *)(void *)sr_joint_rotation));
  v82 = sub_1401F8AC0(sr_export_float_lane_container(COERCE_UNSIGNED_INT(*(float *)&v23 * 0.5f)), v81, v74);
  v83 = SR_VEC_LANES(128, v143, f32)[3];
  v84 = SR_VEC_LANES(128, v143, f32)[0];
  v85 = SR_VEC_LANES(128, v82, f32)[0];
  v86 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v82, v82, 1), f32)[0];
  v151 = v86;
  if ( (float)((float)(SR_VEC_LANES(128, v82, f32)[0] * SR_VEC_LANES(128, v143, f32)[0]) + (float)(v86 * SR_VEC_LANES(128, v143, f32)[3])) < 0.0
    && (float)(v86 * SR_VEC_LANES(128, v143, f32)[3]) < 0.0 )
  {
    v143 = _mm_xor_ps(v143, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v84 = SR_VEC_LANES(128, v143, f32)[0];
    v83 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v143, v143, 255), f32)[0];
  }
  SR_VEC_LANES(128, v143, f32)[0] = -v84;
  SR_VEC_LANES(128, v143, i32)[1] ^= 0x80000000;
  SR_VEC_LANES(128, v143, f32)[2] = -SR_VEC_LANES(128, v143, f32)[2];
  v87 = (float)(v86 * (float)-v84) + (float)(SR_VEC_LANES(128, v82, f32)[0] * v83);
  v88 = (float)(SR_VEC_LANES(128, v143, f32)[2] * v86) - (float)(SR_VEC_LANES(128, v143, f32)[1] * SR_VEC_LANES(128, v82, f32)[0]);
  v89 = (float)(v86 * v83) - (float)(SR_VEC_LANES(128, v82, f32)[0] * (float)-v84);
  *(float *)&v145 = (float)(SR_VEC_LANES(128, v143, f32)[2] * SR_VEC_LANES(128, v82, f32)[0]) + (float)(SR_VEC_LANES(128, v143, f32)[1] * v86);
  v90 = fsqrt((float)((float)(*(float *)&v145 * *(float *)&v145) + (float)(v87 * v87)) + (float)(v88 * v88));
  if ( v90 == 0.0 )
  {
    v92 = 0.0;
    v93 = 0.0;
    v144 = 0.0;
  }
  else
  {
    v91 = 1.0 / v90;
    v144 = (float)(1.0 / v90) * v87;
    v92 = (float)(1.0 / v90) * *(float *)&v145;
    v93 = v91 * v88;
  }
  *(float *)&v145 = v92;
  v94 = acos(fminf(fmaxf(v89, -1.0), 1.0));
  v95 = v94 + v94;
  v96 = fmaxf(v95, v146);
  if ( a13 < v96 )
    v96 = a13;
  v97 = 18 * v79;
  v98 = *(float *)&v145 * v96;
  v99 = v93 * v96;
  v100 = (float)(*(float *)&v145 * v96) * v80[4];
  v101 = v144 * v96;
  v102 = (float)(v144 * v96) * v80[2];
  *(float *)&v103 = (float)((float)((float)(*(float *)&v145 * v96) * v80[3]) + (float)((float)(v144 * v96) * *v80))
                  + (float)(v99 * v80[6]);
  v104 = v99 * v80[7];
  v105 = (float)(v98 * v80[5]) + v102;
  v106 = v99 * v80[8];
  v107 = v100 + (float)(v101 * v80[1]);
  dword_140404A6C[2 * v97 + 485543033] = v103;
  v108 = 61 * v79;
  *(float *)&dword_140404A6C[2 * v97 + 485543034] = v107 + v104;
  *(float *)&dword_140404A6C[2 * v97 + 485543035] = v105 + v106;
  *(float *)&dword_140404A6C[2 * v97 + 485543033] = (float)(*a6 * 0.5) + *(float *)&v103;
  *(float *)&dword_140404A6C[2 * v97 + 485543034] = (float)(a6[1] * 0.5)
                                                  + *(float *)&dword_140404A6C[2 * v97 + 485543034];
  *(float *)&dword_140404A6C[2 * v97 + 485543035] = (float)(a6[2] * 0.5)
                                                  + *(float *)&dword_140404A6C[2 * v97 + 485543035];
  dword_140404A6C[2 * v97 + 485543048] = 0;
  dword_140404A6C[v108 + 486149287] = a12[1];
  dword_140404A6C[v108 + 486149288] = a11[1];
  v109 = v24 * 4 + 312 * (v153 + 2);
  v110 = (float *)((char *)&dword_140404A6C[280651452] + v109);
  LODWORD(v145) = *(unsigned int *)((char *)&dword_140404A6C[280651511] + v109);
  sub_14007AE70((float *)&(*(__int128 *)(void *)sr_joint_rotation), (float *)((char *)&dword_140404A6C[280651452] + v109), v80);
  sub_14010E370(SR_VEC_LANES(128, v143, f32), (float *)&(*(__int128 *)(void *)sr_joint_rotation));
  v142 = xmmword_140279490;
  if ( (a14 & 2) != 0 )
  {
    v85 = -v85;
    *((float *)&v142 + 3) = v86;
    v37 = -v37;
    v148 = v85;
    v38 = -v38;
    *(float *)&v142 = v85;
    v40 = -v40;
    *(_QWORD *)&v147 = __PAIR64__(LODWORD(v38), LODWORD(v37));
    *((float *)&v147 + 2) = v40;
    v149 = 0x80000000;
    v150 = 0x80000000;
    sub_140105930((float *)&v142, (float *)&v142, (float *)&v147);
    if ( (float)((float)((float)(*((float *)&v142 + 3) * SR_VEC_PTR_LANES(128, a9, f32)[3])
                       + (float)(*((float *)&v142 + 2) * SR_VEC_PTR_LANES(128, a9, f32)[2]))
               + (float)((float)(*((float *)&v142 + 1) * SR_VEC_PTR_LANES(128, a9, f32)[1]) + (float)(*(float *)&v142 * SR_VEC_PTR_LANES(128, a9, f32)[0]))) < 0.0 )
      *a9 = _mm_xor_ps(*a9, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    sub_140105930((float *)&v142, (float *)&v142, SR_VEC_PTR_LANES(128, a9, f32));
  }
  if ( v152 )
  {
    *((float *)&v142 + 3) = v86;
    v148 = -v85;
    *(float *)&v142 = -v85;
    *(float *)&v147 = -v37;
    *((float *)&v147 + 1) = -v38;
    *((float *)&v147 + 2) = -v40;
    v149 = 0x80000000;
    v150 = 0x80000000;
    *(_QWORD *)((char *)&v142 + 4) = 0;
    sub_140105930((float *)&v142, (float *)&v142, (float *)&v147);
  }
  v111 = SR_VEC_LANES(128, v143, f32)[3];
  v112 = SR_VEC_LANES(128, v143, f32)[2];
  v113 = SR_VEC_LANES(128, v143, f32)[0];
  v114 = SR_VEC_LANES(128, v143, f32)[1];
  if ( (float)((float)((float)(SR_VEC_LANES(128, v143, f32)[3] * *((float *)&v142 + 3))
                     + (float)(SR_VEC_LANES(128, v143, f32)[2] * *((float *)&v142 + 2)))
             + (float)((float)(SR_VEC_LANES(128, v143, f32)[0] * *(float *)&v142) + (float)(SR_VEC_LANES(128, v143, f32)[1] * *((float *)&v142 + 1)))) < 0.0 )
  {
    v143 = _mm_xor_ps(v143, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v112 = SR_VEC_LANES(128, v143, f32)[2];
    v114 = SR_VEC_LANES(128, v143, f32)[1];
    v113 = SR_VEC_LANES(128, v143, f32)[0];
    v111 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v143, v143, 255), f32)[0];
  }
  v115 = -v113;
  v116 = -v114;
  v117 = -v112;
  v118 = (float)((float)((float)(v115 * *((float *)&v142 + 3)) + (float)(v111 * *(float *)&v142))
               + (float)(v116 * *((float *)&v142 + 2)))
       - (float)(v117 * *((float *)&v142 + 1));
  v119 = (float)((float)((float)(v111 * *((float *)&v142 + 1)) - (float)(v115 * *((float *)&v142 + 2)))
               + (float)(v116 * *((float *)&v142 + 3)))
       + (float)(v117 * *(float *)&v142);
  v120 = (float)((float)((float)(v115 * *((float *)&v142 + 1)) + (float)(v111 * *((float *)&v142 + 2)))
               - (float)(v116 * *(float *)&v142))
       + (float)(v117 * *((float *)&v142 + 3));
  v121 = (float)((float)((float)(v111 * *((float *)&v142 + 3)) - (float)(v115 * *(float *)&v142))
               - (float)(v116 * *((float *)&v142 + 1)))
       - (float)(v117 * *((float *)&v142 + 2));
  v122 = fsqrt((float)((float)(v119 * v119) + (float)(v118 * v118)) + (float)(v120 * v120));
  if ( v122 == 0.0 )
  {
    v123 = 0.0;
    v124 = 0.0;
  }
  else
  {
    v47 = (float)(1.0 / v122) * v118;
    v123 = (float)(1.0 / v122) * v119;
    v124 = (float)(1.0 / v122) * v120;
  }
  v125 = acos(fminf(fmaxf(v121, -1.0), 1.0));
  v126 = v125 + v125;
  v127 = fmaxf(v126, v146);
  if ( a13 >= v127 )
    v57 = v127;
  v128 = (int)v145;
  v129 = v123 * v57;
  v130 = v47 * v57;
  v131 = 18LL * (int)v145;
  v132 = v124 * v57;
  v133 = v129 * v110[4];
  v134 = v130 * v110[1];
  *(float *)&v135 = (float)((float)(v129 * v110[3]) + (float)(v130 * *v110)) + (float)(v132 * v110[6]);
  v136 = v132;
  v137 = v132 * v110[8];
  v138 = v136 * v110[7];
  v139 = (float)(v129 * v110[5]) + (float)(v130 * v110[2]);
  dword_140404A6C[2 * v131 + 485543033] = v135;
  v128 *= 244;
  *(float *)&dword_140404A6C[2 * v131 + 485543034] = (float)(v133 + v134) + v138;
  *(float *)&dword_140404A6C[2 * v131 + 485543035] = v139 + v137;
  *(float *)&dword_140404A6C[2 * v131 + 485543033] = (float)(*a6 * 0.5) + *(float *)&v135;
  *(float *)&dword_140404A6C[2 * v131 + 485543034] = (float)(a6[1] * 0.5)
                                                   + *(float *)&dword_140404A6C[2 * v131 + 485543034];
  *(float *)&dword_140404A6C[2 * v131 + 485543035] = (float)(a6[2] * 0.5)
                                                   + *(float *)&dword_140404A6C[2 * v131 + 485543035];
  dword_140404A6C[2 * v131 + 485543048] = 0;
  *(unsigned int *)((char *)&dword_140404A6C[486149287] + v128) = a12[2];
  *(unsigned int *)((char *)&dword_140404A6C[486149288] + v128) = a11[2];
  return 0; /* compatibility result discarded by all reviewed callers */
}
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
#undef v157

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B2E70) ----------------------------------------------------
__int64            sub_1400B2E70(int a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  unsigned int *v3; // r12
  float v4; // xmm7_4
  float *v5; // rax
  float v6; // xmm8_4
  int v7; // esi
  float v8; // xmm9_4
  __int64 v9; // r13
  float v10; // xmm10_4
  float v11; // xmm6_4
  float *v12; // r14
  float *v13; // r15
  __int64 v14; // rdi
  float *v15; // rbx
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm1_4
  int v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  unsigned int v23; // xmm1_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  __int64 v26; // rcx
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float *v30; // r13
  float *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r13
  int v35; // edi
  __int64 v36; // r15
  int *v37; // r14
  int *v38; // r12
  int v39; // xmm6_4
  unsigned int *v40; // rbx
  __int64 v41; // r10
  __int64 v42; // rdx
  float v43; // xmm1_4
  float v44; // xmm0_4
  unsigned int v45; // xmm3_4
  unsigned int v46; // xmm4_4
  __int64 v47; // r12
  int v48; // r15d
  unsigned __int64 v49; // rcx
  float *v50; // rdx
  unsigned int *v51; // r13
  float v52; // xmm7_4
  __int64 v53; // r14
  unsigned int *v54; // rsi
  float v55; // xmm8_4
  float *v56; // rcx
  int v57; // ebx
  float *v58; // rdi
  float v59; // xmm1_4
  float v60; // xmm0_4
  float v61; // xmm7_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm0_4
  float v65; // xmm8_4
  unsigned int v66; // xmm0_4
  float v67; // xmm8_4
  float v68; // xmm13_4
  float v69; // xmm7_4
  float v70; // xmm8_4
  __int64 v71; // rax
  float *v72; // rcx
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm7_4
  float v77; // xmm0_4
  float v78; // xmm7_4
  float v79; // xmm0_4
  float v80; // xmm8_4
  float v81; // xmm0_4
  float v82; // xmm8_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm1_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  __int64 v91; // r10
  __int64 v92; // rdx
  unsigned int v93; // xmm7_4
  unsigned int v94; // xmm0_4
  float v95; // xmm1_4
  unsigned int v96; // xmm7_4
  unsigned int v97; // xmm8_4
  __int64 v99; // [rsp-20h] [rbp-CAE0h] BYREF
  unsigned sr_joint_contact_a[3];
  float sr_joint_contact_offset[3];
  unsigned sr_joint_contact_b[3];
  float sr_joint_contact_point[3];
  unsigned sr_joint_collision[9];
  unsigned sr_joint_triangle_b[3];
  unsigned sr_joint_triangle_a[3];
  unsigned sr_joint_vehicle_list[516];
  int sr_joint_triangles[12290];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B2E70[103168];
#define v100 (*(unsigned int * (*))(void *)(sr_frame_1400B2E70 + 0)) /* [rsp+0h] */
#define v101 (*(float * (*))(void *)(sr_frame_1400B2E70 + 8)) /* [rsp+8h] */
#define v102 (*(float * (*))(void *)(sr_frame_1400B2E70 + 16)) /* [rsp+10h] */
#define v103 (*(unsigned __int64 * (*))(void *)(sr_frame_1400B2E70 + 24)) /* [rsp+18h] */
#define v104 (*(float * (*))(void *)(sr_frame_1400B2E70 + 32)) /* [rsp+20h] */
#define v105 (*(float * (*))(void *)(sr_frame_1400B2E70 + 48)) /* [rsp+30h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_1400B2E70 + 72)) /* [rsp+48h] */
#define v109 (*(float (*))(void *)(sr_frame_1400B2E70 + 80)) /* [rsp+50h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_1400B2E70 + 51816)) /* [rsp+CA68h] */
#define v127 (*(float (*)[3])(void *)(sr_frame_1400B2E70 + 51860)) /* [rsp+CA94h] */
#define v130 (*(float * (*))(void *)(sr_frame_1400B2E70 + 51888)) /* [rsp+CAB0h] */
#define v138 (*(__int64 (*))(void *)(sr_frame_1400B2E70 + 103152)) /* [rsp+192F0h] */

  v1 = 28664LL * a1;
  v109 = *(float *)&a1;
  sr_joint_triangles[0] = 0;
  sr_joint_triangles[12289] = 0;
  v130 = (float *)((char *)&dword_140404A6C[280651418] + v1);
  v118 = v1;
  sub_140188900(
    sr_joint_triangles,
    (float *)((char *)&dword_140404A6C[280651415] + v1),
    (float *)((char *)&dword_140404A6C[280651418] + v1),
    4);
  v2 = sr_joint_triangles[0];
  v3 = &dword_140404A6C[282486069];
  v4 = (*(float *)&sr_joint_collision[2]);
  v5 = (float *)((char *)&dword_140404A6C[280651439] + v1);
  v6 = (*(float *)&sr_joint_collision[1]);
  v7 = 0;
  v8 = (*(float *)&sr_joint_collision[0]);
  v9 = 0;
  v105 = (float *)((char *)&dword_140404A6C[280651439] + v1);
  do
  {
    if ( v7 != 12
      && v7 != 15
      && (v7 != 11 && v7 != 14
       || *(unsigned int *)((char *)&dword_140404A6C[280651325] + v1) == 2
       || *(int *)((char *)&dword_140404A6C[280651318] + v1) <= 0
       || *(int *)((char *)&dword_140404A6C[280658299] + v1) < 50) )
    {
      v10 = *(float *)v3;
      v11 = 65536.0;
      (*(float *)&sr_joint_collision[7]) = 65536.0;
      if ( v2 > 0 )
      {
        v12 = (float *)((char *)&dword_140404A6C[280651508] + v1 + v9);
        v13 = (float *)((char *)&dword_140404A6C[280651505] + v1 + v9);
        v14 = (unsigned int)v2;
        v15 = (float *)&(*(char *)(void *)(sr_joint_triangles+3));
        do
        {
          v16 = *((_DWORD *)v15 - 2);
          v17 = *((_DWORD *)v15 - 1);
          v104 = &sr_joint_contact_point[0];
          (*(uint64_t *)(void *)sr_joint_triangle_a) = __PAIR64__(v17, v16);
          v18 = *((_DWORD *)v15 + 1);
          (*(float *)&sr_joint_triangle_a[2]) = *v15;
          (*(uint64_t *)(void *)sr_joint_triangle_b) = __PAIR64__(*((_DWORD *)v15 + 2), v18);
          v19 = *((_DWORD *)v15 + 3);
          v103 = &(*(uint64_t *)(void *)sr_joint_triangle_b);
          v20 = v15[4];
          sr_joint_triangle_b[2] = v19;
          v21 = v15[5];
          sr_joint_contact_point[0] = v20;
          v22 = v15[6];
          sr_joint_contact_point[1] = v21;
          v23 = *((unsigned int *)v15 + 7);
          v102 = (float *)&(*(uint64_t *)(void *)sr_joint_triangle_a);
          sr_joint_contact_point[2] = v22;
          v24 = *((_DWORD *)v15 + 8);
          (*(float *)&sr_joint_contact_a[0]) = *(float *)&v23;
          v25 = *((_DWORD *)v15 + 9);
          *(float *)&v101 = v10;
          (*(uint64_t *)(void *)(sr_joint_contact_a+1)) = __PAIR64__(v25, v24);
          if ( (unsigned int)sub_140035690(
                               &(*(float *)&sr_joint_contact_b[0]),
                               &(*(float *)&sr_joint_contact_a[0]),
                               (float *)&v108,
                               v13,
                               v12,
                               (__int64)v101,
                               (float *)&(*(uint64_t *)(void *)sr_joint_triangle_a),
                               (float *)&(*(uint64_t *)(void *)sr_joint_triangle_b),
                               &sr_joint_contact_point[0])
            && v11 > *(float *)&v108 )
          {
            v11 = *(float *)&v108;
            v8 = (*(float *)&sr_joint_contact_b[0]);
            v6 = *(float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1));
            v4 = *((float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1)) + 1);
            (*(float *)&sr_joint_collision[3]) = (*(float *)&sr_joint_contact_a[0]);
            (*(uint64_t *)(void *)(sr_joint_collision+4)) = (*(uint64_t *)(void *)(sr_joint_contact_a+1));
          }
          v15 += 12;
          --v14;
        }
        while ( v14 );
        v5 = v105;
        (*(float *)&sr_joint_collision[7]) = v11;
        (*(float *)&sr_joint_collision[2]) = v4;
        (*(float *)&sr_joint_collision[1]) = v6;
        (*(float *)&sr_joint_collision[0]) = v8;
        if ( v11 < 65536.0 )
        {
          v26 = *(int *)v105;
          v27 = *(float *)v3;
          LODWORD(v102) = 1031798784;
          LODWORD(v101) = 1023410176;
          LODWORD(v100) = 1053609165;
          v28 = v6 - *(float *)&dword_140404A6C[47 * v26 + 18215716];
          sr_joint_contact_offset[0] = v8 - *(float *)&dword_140404A6C[47 * v26 + 18215715];
          v29 = v4 - *(float *)&dword_140404A6C[47 * v26 + 18215717];
          sr_joint_contact_offset[1] = v28;
          sr_joint_contact_offset[2] = v29;
          sub_140005160(v26, (unsigned int *)&sr_joint_contact_offset[0], (unsigned int *)&(*(float *)&sr_joint_collision[3]), v27 - v11, 0x3ECCCCCDu, 0.03125, 0x3D800000u);
          v5 = v105;
        }
        v2 = sr_joint_triangles[0];
        v1 = v118;
      }
    }
    v5 += 78;
    ++v7;
    v9 += 312;
    v105 = v5;
    v3 += 25;
  }
  while ( v7 < 16 );
  sub_140038230(
    (int *)&sr_joint_vehicle_list[0],
    (int *)((char *)&dword_140404A6C[280651421] + v1),
    (int *)((char *)&dword_140404A6C[280651424] + v1));
  if ( (int)sr_joint_vehicle_list[0] > 0 )
  {
    v30 = (float *)((unsigned char *)(void *)(sr_joint_vehicle_list+1));
    v31 = v130;
    v105 = (float *)((unsigned char *)(void *)(sr_joint_vehicle_list+1));
    v32 = sr_joint_vehicle_list[0];
    v108 = sr_joint_vehicle_list[0];
    do
    {
      v33 = 1760LL * *(int *)v30;
      if ( *(float *)&dword_140404A6C[v33 + 278845958] <= *v31
        && *(float *)&dword_140404A6C[v33 + 278845961] >= *(float *)((char *)&dword_140404A6C[280651415] + v1)
        && *(float *)&dword_140404A6C[v33 + 278845960] <= v31[2]
        && *(float *)&dword_140404A6C[v33 + 278845963] >= *(float *)((char *)&dword_140404A6C[280651417] + v1)
        && *(float *)&dword_140404A6C[v33 + 278845959] <= v31[1]
        && *(float *)&dword_140404A6C[v33 + 278845962] >= *(float *)((char *)&dword_140404A6C[280651416] + v1) )
      {
        v34 = v118;
        v35 = 0;
        v36 = 0;
        v37 = (int *)&dword_140404A6C[282486069];
        v38 = (int *)((char *)&dword_140404A6C[280651439] + v1);
        do
        {
          if ( v35 == 7 || (unsigned int)v35 <= 4 || (unsigned int)v35 >= 0xA )
          {
            v39 = *v37;
            v40 = &dword_140404A6C[1268 * dword_140404A6C[v33 + 278845898] + 278522247];
            sub_14011BF40(
              (__int64)sr_joint_triangles,
              (__int64)v40,
              (float *)&dword_140404A6C[47 * dword_140404A6C[v33 + 278845915] + 18215715],
              (float *)&dword_140404A6C[47 * dword_140404A6C[v33 + 278845915] + 18215724]);
            if ( sub_140033BE0(
                   &(*(float *)&sr_joint_collision[0]),
                   (__int64)v40,
                   (__int64)sr_joint_triangles,
                   (float *)((char *)&dword_140404A6C[v36 + 280651505] + v34),
                   (float *)((char *)&dword_140404A6C[v36 + 280651508] + v34),
                   v39) )
            {
              v41 = *v38;
              v42 = (int)dword_140404A6C[v33 + 278845915];
              (*(float *)&sr_joint_contact_b[0]) = (*(float *)&sr_joint_collision[3]);
              LODWORD(v104) = 1040187392;
              (*(uint64_t *)(void *)(sr_joint_contact_b+1)) = (*(uint64_t *)(void *)(sr_joint_collision+4));
              LODWORD(v103) = 1031798784;
              sr_joint_contact_point[0] = (*(float *)&sr_joint_collision[0]);
              sr_joint_contact_point[1] = (*(float *)&sr_joint_collision[1]);
              sr_joint_contact_point[2] = (*(float *)&sr_joint_collision[2]);
              LODWORD(v102) = 1053609165;
              v43 = (*(float *)&sr_joint_collision[1]) - *(float *)&dword_140404A6C[47 * v41 + 18215716];
              sr_joint_contact_offset[0] = (*(float *)&sr_joint_collision[0]) - *(float *)&dword_140404A6C[47 * v41 + 18215715];
              sr_joint_contact_offset[2] = (*(float *)&sr_joint_collision[2]) - *(float *)&dword_140404A6C[47 * v41 + 18215717];
              v44 = *(float *)v37 - (*(float *)&sr_joint_collision[7]);
              sr_joint_contact_offset[1] = v43;
              *(float *)&v101 = v44;
              *(float *)&v45 = (*(float *)&sr_joint_collision[1]) - *(float *)&dword_140404A6C[47 * v42 + 18215716];
              *(float *)&v46 = (*(float *)&sr_joint_collision[2]) - *(float *)&dword_140404A6C[47 * v42 + 18215717];
              (*(float *)&sr_joint_contact_a[0]) = (*(float *)&sr_joint_collision[0]) - *(float *)&dword_140404A6C[47 * v42 + 18215715];
              (*(uint64_t *)(void *)(sr_joint_contact_a+1)) = __PAIR64__(v46, v45);
              sub_1400052C0(
                v41,
                v42,
                (unsigned int *)&sr_joint_contact_offset[0],
                (unsigned int *)&(*(float *)&sr_joint_contact_a[0]),
                (unsigned int *)&(*(float *)&sr_joint_contact_b[0]),
                v44,
                0x3ECCCCCDu,
                0.0625,
                0x3E000000u);
              *(_QWORD *)&dword_140404A6C[v33 + 278845895] = 0;
            }
          }
          ++v35;
          v36 += 78;
          v38 += 78;
          v37 += 25;
        }
        while ( v35 < 16 );
        v30 = v105;
        v32 = v108;
        v1 = v118;
        v31 = v130;
      }
      v30 += 2;
      --v32;
      v105 = v30;
      v108 = v32;
    }
    while ( v32 );
  }
  if ( LODWORD(v109) + 1 < 256LL )
  {
    v47 = 7166LL * (LODWORD(v109) + 1);
    do
    {
      if ( dword_140404A6C[v47 + 280651303]
        && dword_140404A6C[v47 + 280651313] == -1
        && *(float *)&dword_140404A6C[v47 + 280651415] <= *v130
        && *(float *)&dword_140404A6C[v47 + 280651418] >= *(float *)((char *)&dword_140404A6C[280651415] + v1)
        && *(float *)&dword_140404A6C[v47 + 280651417] <= v130[2]
        && *(float *)&dword_140404A6C[v47 + 280651420] >= *(float *)((char *)&dword_140404A6C[280651417] + v1)
        && *(float *)&dword_140404A6C[v47 + 280651416] <= v130[1]
        && *(float *)&dword_140404A6C[v47 + 280651419] >= *(float *)((char *)&dword_140404A6C[280651416] + v1) )
      {
        v48 = 0;
        v49 = 0;
        LODWORD(v108) = 0;
        v50 = (float *)((char *)&dword_140404A6C[280651442] + v1);
        (*(uint64_t *)(void *)sr_joint_triangle_b) = 0;
        v105 = (float *)((char *)&dword_140404A6C[280651442] + v1);
        v51 = &dword_140404A6C[282486067];
        do
        {
          if ( v48 == 13 || (unsigned int)v48 <= 0xA || (unsigned int)v48 >= 0x10 )
          {
            v52 = *((float *)v51 + 1) * -0.5;
            v53 = 0;
            v54 = &dword_140404A6C[282486067];
            v55 = *((float *)v51 + 1) * 0.5;
            v56 = (float *)((char *)&dword_140404A6C[3 * v49 + 280651452 + 3 * (int)*v51] + v1);
            v57 = 0;
            v58 = (float *)&dword_140404A6C[v47 + 280651442];
            v59 = (float)(v55 * v56[1]) + *(v50 - 1);
            (*(float *)&sr_joint_collision[0]) = (float)(v52 * *v56) + *(v50 - 2);
            v60 = v52 * v56[1];
            v61 = v52 * v56[2];
            v62 = v60 + *(v50 - 1);
            *(float *)&(*(uint64_t *)(void *)(sr_joint_collision+4)) = v59;
            v63 = v61 + *v50;
            (*(float *)&sr_joint_collision[1]) = v62;
            v64 = v55 * *v56;
            v65 = v55 * v56[2];
            *(float *)&v66 = v64 + *(v50 - 2);
            (*(float *)&sr_joint_collision[2]) = v63;
            v67 = v65 + *v50;
            (*(float *)&sr_joint_collision[3]) = *(float *)&v66;
            *((float *)&(*(uint64_t *)(void *)(sr_joint_collision+4)) + 1) = v67;
            do
            {
              if ( v57 == 13 || (unsigned int)v57 <= 0xA || (unsigned int)v57 >= 0x10 )
              {
                v68 = *((float *)v51 + 2) + *((float *)v54 + 2);
                v69 = *((float *)v54 + 1) * -0.5;
                v70 = *((float *)v54 + 1) * 0.5;
                v71 = 3 * (v53 + (int)*v54);
                *(float *)&v103 = v68;
                v72 = (float *)&dword_140404A6C[v71 + 280651452 + v47];
                v102 = v127;
                v101 = &(*(float *)&sr_joint_collision[6]);
                v73 = v69 * *v72;
                v100 = (unsigned int *)&(*(float *)&sr_joint_collision[3]);
                v74 = (float)(v70 * v72[1]) + *(v58 - 1);
                (*(float *)&sr_joint_collision[6]) = v73 + *(v58 - 2);
                v75 = v69 * v72[1];
                v76 = v69 * v72[2];
                v77 = v75 + *(v58 - 1);
                v127[1] = v74;
                v78 = v76 + *v58;
                (*(float *)&sr_joint_collision[7]) = v77;
                v79 = v70 * *v72;
                v80 = v70 * v72[2];
                v81 = v79 + *(v58 - 2);
                (*(float *)&sr_joint_collision[8]) = v78;
                v82 = v80 + *v58;
                v127[0] = v81;
                v127[2] = v82;
                if ( sub_1400D6890(&sr_joint_contact_point[0], &(*(float *)&sr_joint_contact_b[0]), &v109, &(*(float *)&sr_joint_collision[0]), &(*(float *)&sr_joint_collision[3]), &(*(float *)&sr_joint_collision[6]), v127, v68) )
                {
                  v83 = (*(float *)&sr_joint_contact_b[0]) - sr_joint_contact_point[0];
                  v84 = *(float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1)) - sr_joint_contact_point[1];
                  v85 = *((float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1)) + 1) - sr_joint_contact_point[2];
                  v86 = fsqrt((float)((float)(v84 * v84) + (float)(v83 * v83)) + (float)(v85 * v85));
                  if ( v86 == 0.0 )
                  {
                    v88 = 0.0;
                    v89 = 0.0;
                    v90 = 0.0;
                  }
                  else
                  {
                    v87 = 1.0 / v86;
                    v88 = (float)(1.0 / v86) * v83;
                    v89 = v87 * v84;
                    v90 = v87 * v85;
                  }
                  v91 = *((int *)v58 - 3);
                  v92 = *((int *)v105 - 3);
                  *(float *)&dword_140404A6C[73006986] = v90;
                  *(float *)&v93 = (float)(*(float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1)) + sr_joint_contact_point[1]) * 0.5;
                  *(float *)&dword_140404A6C[73006984] = v88;
                  *(float *)&dword_140404A6C[73006981] = (float)((*(float *)&sr_joint_contact_b[0]) + sr_joint_contact_point[0]) * 0.5;
                  *(float *)&v94 = *(float *)&dword_140404A6C[73006981]
                                 - *(float *)&dword_140404A6C[47 * v91 + 18215715];
                  dword_140404A6C[73006982] = v93;
                  v95 = *(float *)&v93 - *(float *)&dword_140404A6C[47 * v91 + 18215716];
                  *(float *)&dword_140404A6C[73006983] = (float)(*((float *)&(*(uint64_t *)(void *)(sr_joint_contact_b+1)) + 1) + sr_joint_contact_point[2]) * 0.5;
                  *(float *)&dword_140404A6C[73006985] = v89;
                  sr_joint_contact_offset[0] = *(float *)&v94;
                  sr_joint_contact_offset[2] = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v91 + 18215717];
                  LODWORD(v104) = 1031798784;
                  LODWORD(v103) = 1023410176;
                  LODWORD(v102) = 1053609165;
                  *(float *)&v101 = v68 - v109;
                  sr_joint_contact_offset[1] = v95;
                  *(float *)&v96 = *(float *)&v93 - *(float *)&dword_140404A6C[47 * v92 + 18215716];
                  *(float *)&v97 = *(float *)&dword_140404A6C[73006983]
                                 - *(float *)&dword_140404A6C[47 * v92 + 18215717];
                  (*(float *)&sr_joint_contact_a[0]) = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v92 + 18215715];
                  (*(uint64_t *)(void *)(sr_joint_contact_a+1)) = __PAIR64__(v97, v96);
                  sub_1400052C0(
                    v91,
                    v92,
                    (unsigned int *)&sr_joint_contact_offset[0],
                    (unsigned int *)&(*(float *)&sr_joint_contact_a[0]),
                    &dword_140404A6C[73006984],
                    v68 - v109,
                    0x3ECCCCCDu,
                    0.03125,
                    0x3D800000u);
                }
              }
              ++v57;
              v53 += 26;
              v54 += 25;
              v58 += 78;
            }
            while ( v57 < 16 );
            v48 = v108;
            v50 = v105;
            v49 = (*(uint64_t *)(void *)sr_joint_triangle_b);
            v1 = v118;
          }
          ++v48;
          v49 += 26LL;
          v50 += 78;
          LODWORD(v108) = v48;
          v51 += 25;
          (*(uint64_t *)(void *)sr_joint_triangle_b) = v49;
          v105 = v50;
        }
        while ( v48 < 16 );
      }
      v47 += 7166;
    }
    while ( v47 < 1834496 );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v108
#undef v109
#undef v118
#undef v127
#undef v130
#undef v138

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012B220) ----------------------------------------------------
void sub_14012B220()
{
  float *v0; // rdi
  float *v1; // rbx
  __int64 v2; // rsi
  float v3; // xmm1_4

  v0 = (float *)&dword_140404A6C[18215736];
  v1 = (float *)&dword_140404A6C[18215716];
  v2 = 0x2000;
  do
  {
    if ( *((_DWORD *)v1 - 7) )
    {
      if ( !*((_DWORD *)v1 - 5) )
      {
        v3 = v1[3] - 0.0027222224;
        v1[3] = v3;
        *(v1 - 1) = v1[2] + *(v1 - 1);
        *v1 = v3 + *v1;
        v1[1] = v1[4] + v1[1];
        sub_14012B2D0((unsigned int *)v0 - 12, v0 - 3, v0, v0 + 9);
      }
    }
    v0 += 47;
    v1 += 47;
    --v2;
  }
  while ( v2 );
  return;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012B2D0) ----------------------------------------------------
void sub_14012B2D0(unsigned int *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm9_4
  float v6; // xmm6_4
  float v8; // xmm2_4
  __int64 v10; // xmm15_8
  float v12; // xmm5_4
  float v13; // xmm13_4
  float v14; // xmm8_4
  float v15; // xmm14_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // xmm9_8
  float v26; // xmm1_4
  __int64 v27; // xmm8_8
  float v28; // xmm1_4
  float v29; // xmm10_4
  float v30; // xmm9_4
  double v31; // xmm2_8
  float v32; // xmm3_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm7_4
  float v38; // xmm2_4
  float v39; // xmm11_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm12_4
  float v43; // xmm11_4
  float v44; // xmm7_4
  float v45; // xmm1_4
  float v46; // xmm11_4
  double v47; // xmm2_8
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm9_4
  float v54; // xmm0_4
  float v55; // xmm4_4
  float v56; // xmm10_4
  double v57; // xmm2_8
  float v58; // xmm0_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm5_4
  float v62; // xmm11_4
  float v63; // xmm7_4
  float v64; // xmm12_4
  double v65; // xmm2_8
  float sr_rotation_axis[3];
  float sr_rotation_matrix[9];
  unsigned char sr_rotation_skip;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012B2D0[112];
#define v67 (*(__int64 (*))(void *)(sr_frame_14012B2D0 + 0)) /* [rsp+8h] */
#define v68 (*(float (*))(void *)(sr_frame_14012B2D0 + 32)) /* [rsp+28h] */
#define v69 (*(float (*))(void *)(sr_frame_14012B2D0 + 36)) /* [rsp+2Ch] */
#define v70 (*(unsigned __int64 (*))(void *)(sr_frame_14012B2D0 + 40)) /* [rsp+30h] */
#define v71 (*(float (*))(void *)(sr_frame_14012B2D0 + 48)) /* [rsp+38h] */
#define v72 (*(float (*))(void *)(sr_frame_14012B2D0 + 52)) /* [rsp+3Ch] */
#define v73 (*(float (*))(void *)(sr_frame_14012B2D0 + 56)) /* [rsp+40h] */
#define v74 (*(float (*))(void *)(sr_frame_14012B2D0 + 60)) /* [rsp+44h] */
#define v75 (*(float (*))(void *)(sr_frame_14012B2D0 + 64)) /* [rsp+48h] */
#define v79 (*(float (*))(void *)(sr_frame_14012B2D0 + 88)) /* [rsp+60h] */
#define v80 (*(float (*))(void *)(sr_frame_14012B2D0 + 92)) /* [rsp+64h] */
#define v81 (*(float (*))(void *)(sr_frame_14012B2D0 + 96)) /* [rsp+68h] */
#define v82 (*(float (*))(void *)(sr_frame_14012B2D0 + 100)) /* [rsp+6Ch] */
#define v83 (*(float (*))(void *)(sr_frame_14012B2D0 + 104)) /* [rsp+70h] */
#define v84 (*(float (*))(void *)(sr_frame_14012B2D0 + 108)) /* [rsp+74h] */

  v4 = *((float *)a1 + 7);
  LODWORD(v6) = a1[1];
  v8 = *((float *)a1 + 3);
  v10 = *a1;
  v12 = a2[1];
  v13 = *a2;
  LODWORD(v14) = a1[2];
  v15 = a2[2];
  v16 = *((float *)a1 + 4);
  v17 = *((float *)a1 + 8);
  v18 = *((float *)a1 + 5);
  v19 = *a4;
  HIDWORD(v70) = a1[6];
  sr_rotation_matrix[6] = *((float *)&v70 + 1);
  v71 = v8;
  sr_rotation_matrix[3] = v8;
  v75 = v4;
  sr_rotation_matrix[7] = v4;
  sr_rotation_matrix[0] = *(float *)&v10;
  *(float *)&v70 = v6;
  (*(uint64_t *)(void *)&sr_rotation_matrix[1]) = __PAIR64__(LODWORD(v14), LODWORD(v6));
  v69 = v14;
  v20 = v13 * *((float *)a1 + 6);
  v21 = (float)((float)((float)(v6 * v12) + (float)(*(float *)&v10 * v13)) + (float)(v14 * v15)) * v19;
  sr_rotation_matrix[4] = v16;
  v22 = (float)((float)((float)(v12 * v16) + (float)(v13 * v8)) + (float)(v15 * v18)) * a4[1];
  sr_rotation_matrix[5] = v18;
  v68 = v17;
  sr_rotation_matrix[8] = v17;
  v23 = (float)((float)((float)(v12 * v4) + v20) + (float)(v15 * v17)) * a4[2];
  v80 = (float)((float)(*(float *)&v10 * v21) + (float)(v22 * *((float *)a1 + 3))) + (float)(*((float *)a1 + 6) * v23);
  v81 = (float)(v6 * v21) + (float)(v16 * v22);
  v24 = v4;
  v25 = LODWORD(v81);
  v81 = v81 + (float)(v24 * v23);
  v79 = v6;
  v26 = v14 * v21;
  v74 = v14;
  v27 = v10;
  v82 = v26 + (float)(v18 * v22);
  v28 = v17;
  v29 = v18;
  HIDWORD(v31) = HIDWORD(v25);
  v30 = v16;
  v72 = *((float *)a1 + 7);
  v82 = v82 + (float)(v28 * v23);
  v73 = *((float *)a1 + 8);
  *(float *)&v31 = fsqrt((float)((float)(v81 * v81) + (float)(v80 * v80)) + (float)(v82 * v82));
  __asm__ volatile("comiss %2, %1; setbe %0" : "=qm"(sr_rotation_skip)
                   : "x"(_mm_set_ss(*(float *)&v31)), "x"(_mm_set_ss(0x1p-16f)) : "cc");
  if ( sr_rotation_skip )
  {
    v34 = *(float *)&v70;
    v33 = v69;
  }
  else
  {
    v32 = 1.0f / *(float *)&v31;
    *(float *)&v31 = *(float *)&v31 * 0.5f;
    sr_rotation_axis[1] = v32 * v81;
    sr_rotation_axis[2] = v32 * v82;
    sr_rotation_axis[0] = v32 * v80;
    sub_14007B2A0((__int64)&sr_rotation_matrix[0], &sr_rotation_axis[0], v31);
    v33 = *((float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]) + 1);
    v34 = *(float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]);
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v19 = *a4;
    v27 = *a1;
    v30 = *((float *)a1 + 4);
    v29 = *((float *)a1 + 5);
    v18 = sr_rotation_matrix[5];
    v16 = sr_rotation_matrix[4];
    v10 = LODWORD(sr_rotation_matrix[0]);
    LODWORD(v79) = a1[1];
    LODWORD(v74) = a1[2];
    v72 = *((float *)a1 + 7);
    v73 = *((float *)a1 + 8);
    v68 = sr_rotation_matrix[8];
    v75 = sr_rotation_matrix[7];
    v71 = sr_rotation_matrix[3];
    v69 = *((float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]) + 1);
    v70 = __PAIR64__(LODWORD(sr_rotation_matrix[6]), (*(uint64_t *)(void *)&sr_rotation_matrix[1]));
  }
  sr_rotation_matrix[0] = *(float *)&v27;
  sr_rotation_matrix[4] = v30;
  sr_rotation_matrix[5] = v29;
  v35 = (float)((float)((float)(v34 * v12) + (float)(*(float *)&v10 * v13)) + (float)(v33 * v15)) * v19;
  v36 = (float)((float)((float)(v16 * v12) + (float)(v71 * v13)) + (float)(v18 * v15)) * a4[1];
  sr_rotation_matrix[8] = v73;
  v37 = v16 * v36;
  v38 = (float)((float)((float)(v75 * v12) + (float)(*((float *)&v70 + 1) * v13)) + (float)(v68 * v15)) * a4[2];
  *(float *)&v10 = (float)(*(float *)&v10 * v35) + (float)(v71 * v36);
  v39 = v18 * v36;
  v40 = v79;
  *(float *)&v10 = *(float *)&v10 + (float)(*((float *)&v70 + 1) * v38);
  (*(uint64_t *)(void *)&sr_rotation_matrix[1]) = __PAIR64__(LODWORD(v74), LODWORD(v79));
  v41 = *(float *)&v70 * v35;
  v70 = __PAIR64__(LODWORD(v74), LODWORD(v79));
  v42 = v29;
  HIDWORD(v47) = HIDWORD(v10);
  v43 = (float)(v39 + (float)(v69 * v35)) + (float)(v68 * v38);
  v83 = (float)(v37 + v41) + (float)(v75 * v38);
  v68 = *((float *)a1 + 3);
  sr_rotation_matrix[3] = v68;
  v69 = *((float *)a1 + 6);
  sr_rotation_matrix[6] = v69;
  sr_rotation_matrix[7] = v72;
  v44 = v30;
  v45 = v43 * v43;
  v84 = v43;
  v46 = *(float *)&v27;
  v75 = v72;
  *(float *)&v47 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v83 * v83)) + v45);
  v71 = v73;
  __asm__ volatile("comiss %2, %1; setbe %0" : "=qm"(sr_rotation_skip)
                   : "x"(_mm_set_ss(*(float *)&v47)), "x"(_mm_set_ss(0x1p-16f)) : "cc");
  if ( sr_rotation_skip )
  {
    v49 = v68;
  }
  else
  {
    v48 = 1.0f / *(float *)&v47;
    *(float *)&v47 = *(float *)&v47 * 0.5f;
    sr_rotation_axis[1] = v48 * v83;
    sr_rotation_axis[2] = v48 * v84;
    sr_rotation_axis[0] = v48 * *(float *)&v10;
    sub_14007B2A0((__int64)&sr_rotation_matrix[0], &sr_rotation_axis[0], v47);
    v49 = sr_rotation_matrix[3];
    v40 = *(float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]);
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v46 = *(float *)a1;
    v44 = *((float *)a1 + 4);
    v42 = *((float *)a1 + 5);
    v29 = sr_rotation_matrix[5];
    v30 = sr_rotation_matrix[4];
    v27 = LODWORD(sr_rotation_matrix[0]);
    v70 = *(_QWORD *)(a1 + 1);
    v75 = *((float *)a1 + 7);
    v71 = *((float *)a1 + 8);
    v73 = sr_rotation_matrix[8];
    v72 = sr_rotation_matrix[7];
    v69 = sr_rotation_matrix[6];
    v74 = *((float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]) + 1);
    v68 = sr_rotation_matrix[3];
    LODWORD(v79) = (*(uint64_t *)(void *)&sr_rotation_matrix[1]);
  }
  sr_rotation_matrix[0] = v46;
  sr_rotation_matrix[4] = v44;
  sr_rotation_matrix[5] = v42;
  v50 = (float)((float)((float)(v12 * v40) + (float)(v13 * *(float *)&v27)) + (float)(v15 * v74)) * *a4;
  v51 = (float)((float)((float)(v12 * v30) + (float)(v13 * v49)) + (float)(v15 * v29)) * a4[1];
  v52 = (float)((float)((float)(v12 * v72) + (float)(v13 * v69)) + (float)(v15 * v73)) * a4[2];
  *(float *)&v27 = (float)((float)(*(float *)&v27 * v50) + (float)(v68 * v51)) + (float)(v69 * v52);
  v53 = (float)((float)(v30 * v51) + (float)(v79 * v50)) + (float)(v72 * v52);
  v54 = v74 * v50;
  v55 = v75;
  sr_rotation_matrix[7] = v75;
  HIDWORD(v57) = HIDWORD(v27);
  v56 = (float)((float)(v29 * v51) + v54) + (float)(v73 * v52);
  (*(uint64_t *)(void *)&sr_rotation_matrix[1]) = v70;
  v68 = *((float *)a1 + 3);
  sr_rotation_matrix[3] = v68;
  v69 = *((float *)a1 + 6);
  sr_rotation_matrix[6] = v69;
  sr_rotation_matrix[8] = v71;
  *(float *)&v57 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(v53 * v53)) + (float)(v56 * v56));
  __asm__ volatile("comiss %2, %1; setbe %0" : "=qm"(sr_rotation_skip)
                   : "x"(_mm_set_ss(*(float *)&v57)), "x"(_mm_set_ss(0x1p-16f)) : "cc");
  if ( sr_rotation_skip )
  {
    v58 = *(float *)&v70;
  }
  else
  {
    sr_rotation_axis[1] = (float)(1.0f / *(float *)&v57) * v53;
    sr_rotation_axis[0] = *(float *)&v27 * (float)(1.0f / *(float *)&v57);
    sr_rotation_axis[2] = (float)(1.0f / *(float *)&v57) * v56;
    sub_14007B2A0((__int64)&sr_rotation_matrix[0], &sr_rotation_axis[0], v57);
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v55 = sr_rotation_matrix[7];
    v42 = sr_rotation_matrix[5];
    v44 = sr_rotation_matrix[4];
    v46 = sr_rotation_matrix[0];
    v71 = sr_rotation_matrix[8];
    v69 = sr_rotation_matrix[6];
    v68 = sr_rotation_matrix[3];
    v58 = *(float *)&(*(uint64_t *)(void *)&sr_rotation_matrix[1]);
    v70 = (*(uint64_t *)(void *)&sr_rotation_matrix[1]);
  }
  v59 = (float)((float)((float)(v12 * v58) + (float)(v13 * v46)) + (float)(v15 * *((float *)&v70 + 1))) * *a4;
  v60 = (float)((float)((float)(v12 * v44) + (float)(v13 * v68)) + (float)(v15 * v42)) * a4[1];
  v61 = (float)((float)((float)(v12 * v55) + (float)(v13 * v69)) + (float)(v15 * v71)) * a4[2];
  HIDWORD(v65) = 0;
  v62 = (float)((float)((float)(v46 * v59) + (float)(v68 * v60)) + (float)((float)(v69 * v61) + v80))
      + (float)((float)(*(float *)&v27 + *(float *)&v27) + (float)(*(float *)&v10 + *(float *)&v10));
  v63 = (float)((float)((float)(v44 * v60) + (float)(*(float *)&v70 * v59)) + (float)((float)(v55 * v61) + v81))
      + (float)((float)(v53 + v53) + (float)(v83 + v83));
  v64 = (float)((float)((float)(v42 * v60) + (float)(*((float *)&v70 + 1) * v59)) + (float)((float)(v71 * v61) + v82))
      + (float)((float)(v56 + v56) + (float)(v84 + v84));
  *a3 = v62 * 0x1.555556p-3f;
  a3[1] = v63 * 0x1.555556p-3f;
  a3[2] = v64 * 0x1.555556p-3f;
  *(float *)&v65 = fsqrt((float)((float)((float)(v63 * v63) + (float)(v62 * v62)) + (float)(v64 * v64)) * 0x1.c71c74p-6f);
  __asm__ volatile("comiss %2, %1; setbe %0" : "=qm"(sr_rotation_skip)
                   : "x"(_mm_set_ss(*(float *)&v65)), "x"(_mm_set_ss(0x1p-16f)) : "cc");
  if ( !sr_rotation_skip )
  {
    sr_rotation_axis[1] = (float)(1.0f / *(float *)&v65) * (float)(v63 * 0x1.555556p-3f);
    sr_rotation_axis[0] = (float)(1.0f / *(float *)&v65) * (float)(v62 * 0x1.555556p-3f);
    sr_rotation_axis[2] = (float)(1.0f / *(float *)&v65) * (float)(v64 * 0x1.555556p-3f);
    sub_14007B2A0((__int64)a1, &sr_rotation_axis[0], v65);
  }
  return; /* native cookie check has no game result */
}
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83
#undef v84
