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
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limb_inverse_kinematics(int, int, int, const float *, const float *, const float *, float, float,
                                            float *, const float *, const uint32_t *, const uint32_t *, float, int);
  float twist;
  memcpy(&twist, &a8, sizeof twist);
  human_limb_inverse_kinematics(a1, a2, a3, a4, a5, a6, a7, twist, (float *)a9, a10, a11, a12, a13, (unsigned char)a14);
  return 0;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B2E70) ----------------------------------------------------
__int64            sub_1400B2E70(int a1)
{
  /* Clean implementation: src/engine/human_collide.c, checked against the original executable
     (tools/native-compare suite bonehits). */
  extern void human_collide(int human);
  human_collide(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

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
        v3 = v1[3] - 0.0027222223579883575;
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
  extern void physics_integrate_rotation(float rotation[9], const float angular_momentum[3],
                                         float angular_velocity[3], const float inverse_inertia[3]);
  /* src/engine/physics_rotation.c */
  physics_integrate_rotation((float *)a1, a2, a3, a4);
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

//----- (000000014005CF80) ----------------------------------------------------
__int64            sub_14005CF80(
        unsigned int a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  extern int physics_create_body(int type, const float position[3], const float rotation[9],
                                 const float velocity[3], float mass, const float inertia[3]);
  /* a5 is the mass as float bits. */
  return (unsigned int)physics_create_body((int)a1, (const float *)(void *)a2, (const float *)(void *)a3,
                                           (const float *)(void *)a4, *(float *)&a5, (const float *)(void *)a6);
}

//----- (000000014006A5F0) ----------------------------------------------------
__int64            sub_14006A5F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm10_4
  __m128 v10; // xmm6
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm10_4
  unsigned int v14; // edi
  unsigned int v15; // xmm9_4
  float v16; // xmm15_4
  float v17; // xmm14_4
  float v18; // xmm11_4
  float v19; // xmm5_4
  float v20; // xmm13_4
  float v21; // xmm11_4
  float v22; // xmm13_4
  float v23; // xmm1_4
  signed int v24; // r10d
  int v25; // ecx
  int v26; // r11d
  float v27; // xmm0_4
  unsigned int v28; // xmm10_4
  float v29; // xmm6_4
  signed int v30; // eax
  signed int v31; // ecx
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm11_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  unsigned int *v38; // r8
  unsigned int *v39; // rdx
  __int64 v40; // r9
  __int16 v41; // ax
  float v42; // xmm7_4
  float v43; // xmm3_4
  int v44; // edx
  int v45; // ecx
  __int64 result; // rax
  float v47; // xmm0_4
  int v48; // ecx
  float v49; // xmm1_4
  int v50; // ecx
  __int64 v51; // r9
  float v52; // xmm7_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  __int64 v55; // rdi
  float *v56; // rsi
  unsigned int v57; // eax
  float v58; // xmm2_4
  unsigned int v59; // eax
  float v60; // xmm2_4
  __m128i v61; // xmm0
  __int64 v62; // rax
  float v63; // xmm1_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  __int64 v66; // rcx
  float v67; // xmm4_4
  __int64 v68; // rcx
  float v69; // xmm1_4
  float v70; // xmm3_4
  __m128i v71; // xmm0
  float v72; // xmm3_4
  __m128i v73; // xmm1
  __m128i v74; // xmm2
  __m128i v75; // xmm1
  __m128i v76; // xmm2
  __m128i si128; // xmm0
  __m128i v78; // xmm3
  __m128i v79; // xmm6
  __m128i v80; // xmm2
  __m128i v81; // xmm4
  __m128i v82; // xmm5
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm2
  __m128i v86; // xmm0
  __m128i v87; // xmm2
  __m128i v88; // xmm1
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __m128i v92; // xmm0
  __m128i v93; // xmm5
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __m128i v98; // xmm2
  __m128i v99; // xmm0
  __m128i v100; // xmm5
  __m128i v101; // xmm0
  int v102; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006A5F0[288];
#define v103 (*(float (*))(void *)(sr_frame_14006A5F0 + 0)) /* [rsp+20h] */
#define v104 (*(float (*))(void *)(sr_frame_14006A5F0 + 4)) /* [rsp+24h] */
#define v105 (*(float (*))(void *)(sr_frame_14006A5F0 + 8)) /* [rsp+28h] */
#define v106 (*(float (*))(void *)(sr_frame_14006A5F0 + 12)) /* [rsp+2Ch] */
#define v107 (*(float (*))(void *)(sr_frame_14006A5F0 + 256)) /* [rsp+120h] */
#define v108 (*(float (*))(void *)(sr_frame_14006A5F0 + 264)) /* [rsp+128h] */
#define v109 (*(float (*))(void *)(sr_frame_14006A5F0 + 264)) /* [rsp+128h] */
#define v110 (*(float (*))(void *)(sr_frame_14006A5F0 + 272)) /* [rsp+130h] */
#define v111 (*(float (*))(void *)(sr_frame_14006A5F0 + 280)) /* [rsp+138h] */

  v2 = 30LL * (int)dword_140404A6C[18198545];
  v3 = a1;
  v4 = 278720LL * a1;
  v5 = a2;
  v6 = *(float *)&dword_140404A6C[v4 + 606302] - *(float *)&dword_140404A6C[v2 + 18198546];
  v10 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[v4 + 606303])));
  SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] - *(float *)&dword_140404A6C[v2 + 18198547];
  v7 = *(float *)&dword_140404A6C[v4 + 606304] - *(float *)&dword_140404A6C[v2 + 18198548];
  v108 = fsqrt((float)((float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v6 * v6)) + (float)(v7 * v7));
  v8 = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198550])
             + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198549]))
     + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198551]);
  v9 = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198553])
             + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198552]))
     + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198554]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198556])
                          + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198555]))
                  + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198557]);
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v10 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] * (float)(1.0 / v11);
  }
  v14 = a1 - 56;
  *(float *)&v15 = *(float *)&dword_140404A6C[5] * (float)(v108 + 8.0);
  if ( (unsigned int)(a1 - 56) <= 7 )
    *(float *)&v15 = *(float *)&dword_140404A6C[5] * 16.0;
  v16 = (float)a2;
  v17 = 1.0 / (float)a2;
  v18 = (float)(*(float *)&dword_140404A6C[v4 + 606302]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606305]
                                      - *(float *)&dword_140404A6C[v2 + 18198558])
                              * (float)a2)
                      * 0.0012499999720603228))
      - *(float *)&dword_140404A6C[v2 + 18198546];
  v19 = (float)(*(float *)&dword_140404A6C[v4 + 606303]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606306]
                                      - *(float *)&dword_140404A6C[v2 + 18198559])
                              * (float)a2)
                      * 0.0012499999720603228))
      - *(float *)&dword_140404A6C[v2 + 18198547];
  v20 = (float)(*(float *)&dword_140404A6C[v4 + 606304]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606307]
                                      - *(float *)&dword_140404A6C[v2 + 18198560])
                              * (float)a2)
                      * 0.0012499999720603228))
      - *(float *)&dword_140404A6C[v2 + 18198548];
  v21 = (float)(*(float *)&v15
              - (float)((float)(fsqrt((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) + 8.0)
                      * *(float *)&dword_140404A6C[5]))
      * v17;
  if ( v14 <= 7 )
    v21 = 0.0;
  v22 = sub_14023F704(v12, -SR_VEC_LANES(128, v10, f32)[0]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v12 * v12);
  v23 = sub_14023EDE4(v13, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v10)), f64)[0]);
  v24 = (int)((v23 + 1.5707963267948966) * (double)(int)dword_140404A6C[175561671] * 0.3183098861837907);
  if ( v24 < 0 )
    v24 = 0;
  if ( (signed int)(dword_140404A6C[175561671] - 1) < v24 )
    v24 = dword_140404A6C[175561671] - 1;
  v25 = dword_140404A6C[v24 + 175561672];
  if ( v25 )
    v26 = (int)((v22 + 6.283185307179586) * (double)v25 * 0.15915494309189535) % v25;
  else
    v26 = 0;
  v27 = *(float *)&dword_140404A6C[v4 + 606414];
  *(float *)&v28 = fminf(*(float *)&dword_140404A6C[v4 + 606308] / (float)(v108 + 0.0625), 1.0)
                 * *(float *)&dword_140404A6C[v4 + 327699];
  v29 = (float)(int)dword_140404A6C[256 * (__int64)v24 + 176086216 + 2 * v26];
  v110 = v29;
  v107 = (float)(int)dword_140404A6C[256 * (__int64)v24 + 176086217 + 2 * v26];
  if ( v27 == 0.0 )
  {
    v104 = 0.0;
    v30 = v24;
    v105 = 0.0;
    v31 = v26;
    v103 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
  }
  else
  {
    v32 = *(float *)&dword_140404A6C[v4 + 606415];
    v30 = dword_140404A6C[v4 + 606412];
    v31 = dword_140404A6C[v4 + 606413];
    v35 = *(float *)&v15 - v27;
    v15 = dword_140404A6C[v4 + 606414];
    v36 = *(float *)&v28 - *(float *)&dword_140404A6C[v4 + 606416];
    v28 = dword_140404A6C[v4 + 606416];
    v37 = v29 - *(float *)&dword_140404A6C[v4 + 606410];
    v110 = *(float *)&dword_140404A6C[v4 + 606410];
    v29 = v110;
    v33 = v35 * v17;
    v103 = v36 * v17;
    v107 = *(float *)&dword_140404A6C[v4 + 606411];
    v104 = v37 * v17;
    v34 = (float)(v21 - v32) * v17;
    v105 = (float)((float)(int)dword_140404A6C[256 * (__int64)v24 + 176086217 + 2 * v26] - v107) * v17;
  }
  v38 = &dword_140404A6C[18215689];
  v109 = v32;
  v111 = v33;
  v39 = &dword_140404A6C[32 * (v31 + ((__int64)v30 << 7)) + 175561959];
  v40 = (v26 + ((v24 - (__int64)v30) << 7) - v31) << 7;
  do
  {
    *((_WORD *)v38 - 96) = *(_WORD *)((char *)v39 + v40);
    *((_WORD *)v38 - 64) = *(_WORD *)v39;
    *((_WORD *)v38 - 32) = *(_WORD *)((char *)v39 + v40 + 2);
    *(_WORD *)v38 = *((_WORD *)v39 + 1);
    *((_WORD *)v38 - 95) = *(_WORD *)((char *)v39 + v40 - 4);
    *((_WORD *)v38 - 63) = *((_WORD *)v39 - 2);
    *((_WORD *)v38 - 31) = *(_WORD *)((char *)v39 + v40 - 2);
    *((_WORD *)v38 + 1) = *((_WORD *)v39 - 1);
    *((_WORD *)v38 - 94) = *(_WORD *)((char *)v39 + v40 - 8);
    *((_WORD *)v38 - 62) = *((_WORD *)v39 - 4);
    *((_WORD *)v38 - 30) = *(_WORD *)((char *)v39 + v40 - 6);
    *((_WORD *)v38 + 2) = *((_WORD *)v39 - 3);
    *((_WORD *)v38 - 93) = *(_WORD *)((char *)v39 + v40 - 12);
    *((_WORD *)v38 - 61) = *((_WORD *)v39 - 6);
    *((_WORD *)v38 - 29) = *(_WORD *)((char *)v39 + v40 - 10);
    *((_WORD *)v38 + 3) = *((_WORD *)v39 - 5);
    *((_WORD *)v38 - 92) = *(_WORD *)((char *)v39 + v40 - 16);
    *((_WORD *)v38 - 60) = *((_WORD *)v39 - 8);
    *((_WORD *)v38 - 28) = *(_WORD *)((char *)v39 + v40 - 14);
    *((_WORD *)v38 + 4) = *((_WORD *)v39 - 7);
    *((_WORD *)v38 - 91) = *(_WORD *)((char *)v39 + v40 - 20);
    *((_WORD *)v38 - 59) = *((_WORD *)v39 - 10);
    *((_WORD *)v38 - 27) = *(_WORD *)((char *)v39 + v40 - 18);
    *((_WORD *)v38 + 5) = *((_WORD *)v39 - 9);
    *((_WORD *)v38 - 90) = *(_WORD *)((char *)v39 + v40 - 24);
    *((_WORD *)v38 - 58) = *((_WORD *)v39 - 12);
    *((_WORD *)v38 - 26) = *(_WORD *)((char *)v39 + v40 - 22);
    *((_WORD *)v38 + 6) = *((_WORD *)v39 - 11);
    *((_WORD *)v38 - 89) = *(_WORD *)((char *)v39 + v40 - 28);
    *((_WORD *)v38 - 57) = *((_WORD *)v39 - 14);
    *((_WORD *)v38 - 25) = *(_WORD *)((char *)v39 + v40 - 26);
    *((_WORD *)v38 + 7) = *((_WORD *)v39 - 13);
    *((_WORD *)v38 - 88) = *(_WORD *)((char *)v39 + v40 - 32);
    *((_WORD *)v38 - 56) = *((_WORD *)v39 - 16);
    *((_WORD *)v38 - 24) = *(_WORD *)((char *)v39 + v40 - 30);
    *((_WORD *)v38 + 8) = *((_WORD *)v39 - 15);
    *((_WORD *)v38 - 87) = *(_WORD *)((char *)v39 + v40 - 36);
    *((_WORD *)v38 - 55) = *((_WORD *)v39 - 18);
    *((_WORD *)v38 - 23) = *(_WORD *)((char *)v39 + v40 - 34);
    *((_WORD *)v38 + 9) = *((_WORD *)v39 - 17);
    *((_WORD *)v38 - 86) = *(_WORD *)((char *)v39 + v40 - 40);
    v41 = *((_WORD *)v39 - 20);
    v39 -= 16;
    *((_WORD *)v38 - 54) = v41;
    *((_WORD *)v38 - 22) = *(_WORD *)((char *)v39 + v40 + 26);
    *((_WORD *)v38 + 10) = *((_WORD *)v39 + 13);
    *((_WORD *)v38 - 85) = *(_WORD *)((char *)v39 + v40 + 20);
    *((_WORD *)v38 - 53) = *((_WORD *)v39 + 10);
    *((_WORD *)v38 - 21) = *(_WORD *)((char *)v39 + v40 + 22);
    *((_WORD *)v38 + 11) = *((_WORD *)v39 + 11);
    *((_WORD *)v38 - 84) = *(_WORD *)((char *)v39 + v40 + 16);
    *((_WORD *)v38 - 52) = *((_WORD *)v39 + 8);
    *((_WORD *)v38 - 20) = *(_WORD *)((char *)v39 + v40 + 18);
    *((_WORD *)v38 + 12) = *((_WORD *)v39 + 9);
    *((_WORD *)v38 - 83) = *(_WORD *)((char *)v39 + v40 + 12);
    *((_WORD *)v38 - 51) = *((_WORD *)v39 + 6);
    *((_WORD *)v38 - 19) = *(_WORD *)((char *)v39 + v40 + 14);
    *((_WORD *)v38 + 13) = *((_WORD *)v39 + 7);
    *((_WORD *)v38 - 82) = *(_WORD *)((char *)v39 + v40 + 8);
    *((_WORD *)v38 - 50) = *((_WORD *)v39 + 4);
    *((_WORD *)v38 - 18) = *(_WORD *)((char *)v39 + v40 + 10);
    *((_WORD *)v38 + 14) = *((_WORD *)v39 + 5);
    *((_WORD *)v38 - 81) = *(_WORD *)((char *)v39 + v40 + 4);
    *((_WORD *)v38 - 49) = *((_WORD *)v39 + 2);
    *((_WORD *)v38 - 17) = *(_WORD *)((char *)v39 + v40 + 6);
    *((_WORD *)v38 + 15) = *((_WORD *)v39 + 3);
    v38 += 8;
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[18215705] );
  v106 = 0.0;
  v42 = 1.0 - (float)((float)((float)(v34 * 0.5) * v16) + v32);
  if ( v14 <= 7 )
    v42 = 1.0;
  v43 = *(float *)&dword_140404A6C[v4 + 606309];
  v44 = dword_140404A6C[v4 + 327772];
  v45 = v44 - ((int)(float)((float)(v16 * v42) + v43) & 0x3FFFF);
  result = (unsigned int)(v45 + 0x40000);
  if ( v45 >= -131072 )
    result = (unsigned int)v45;
  v47 = (float)(int)result;
  if ( v14 > 7 )
  {
    if ( v47 < 16.0 )
    {
      v48 = ((v44 - 16) & 0x3FFFF) - (int)v43;
      result = (unsigned int)(v48 + 0x40000);
      if ( v48 >= -131072 )
        result = (unsigned int)v48;
      v42 = (float)(int)result * v17;
    }
  }
  else
  {
    v47 = 16.0;
  }
  v49 = (float)((float)((float)(v33 * 0.5) * v16) + *(float *)&v15) + 8192.0;
  if ( v47 > v49 )
  {
    v50 = ((int)(float)((float)v44 - v49) & 0x3FFFF) - (int)v43;
    result = (unsigned int)(v50 + 0x40000);
    if ( v50 >= -131072 )
      result = (unsigned int)v50;
    v42 = (float)(int)result * v17;
  }
  if ( v14 <= 7 )
    v42 = 1.0;
  v51 = v5;
  v52 = fminf(fmaxf(v42, 0.0625), 16.0);
  v53 = v107;
  if ( (int)v5 > 0 )
  {
    v54 = 0.0;
    v55 = 278720 * v3;
    v56 = (float *)&dword_140404A6C[v4 + 589919];
    do
    {
      v57 = dword_140404A6C[v4 + 606310];
      if ( v57 )
      {
        v102 = v57 + 1;
        v65 = 0.0;
        if ( (float)v102 >= *(float *)&v15 )
          v102 = 0;
        dword_140404A6C[v4 + 606310] = v102;
      }
      else
      {
        v58 = *(float *)&dword_140404A6C[v4 + 606309];
        v59 = (int)v58;
        v60 = v58 + v52;
        v61 = _mm_cvtsi32_si128(v59);
        v62 = v59 & 0x3FFFF;
        v63 = *(float *)&dword_140404A6C[v4 + 606309] - SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v61), f32)[0];
        *(float *)SR_VEC_LANES(128, v61, i32) = (float)(1.0 - v63) * *(float *)&dword_140404A6C[v4 + 327773 + v62];
        v64 = v63 * *(float *)&dword_140404A6C[v4 + 327773 + (((_DWORD)v62 + 1) & 0x3FFFF)];
        *(float *)&dword_140404A6C[v4 + 606309] = v60;
        v65 = *(float *)SR_VEC_LANES(128, v61, i32) + v64;
        if ( v60 >= 262144.0 )
          *(float *)&dword_140404A6C[v4 + 606309] = v60 - 262144.0;
        v53 = v107;
      }
      *(float *)&dword_140404A6C[v55 + 606346 + (int)dword_140404A6C[v4 + 606345]] = v65;
      v66 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v29) & 0x3F;
      v67 = (float)((float)(1.0 - (float)(v29 - (float)(int)v29)) * *(float *)&dword_140404A6C[v66 + 606346 + v55])
          + (float)((float)(v29 - (float)(int)v29) * *(float *)&dword_140404A6C[v55 + 606346 + (((_BYTE)v66 - 1) & 0x3F)]);
      v68 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v53) & 0x3F;
      v69 = v53 - (float)(int)v53;
      v70 = (float)(1.0 - v69) * *(float *)&dword_140404A6C[v68 + 606346 + v55];
      LOWORD(dword_140404A6C[18215705]) = (int)(float)((float)(v67 * v54) * 32767.0);
      HIWORD(dword_140404A6C[18215705]) = dword_140404A6C[18215705];
      v71 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606313] + 2));
      v72 = v70 + (float)(v69 * *(float *)&dword_140404A6C[v55 + 606346 + (((_BYTE)v68 - 1) & 0x3F)]);
      LOWORD(dword_140404A6C[18215706]) = (int)(float)((float)((float)(1.0 - v54) * v67) * 32767.0);
      HIWORD(dword_140404A6C[18215706]) = dword_140404A6C[18215706];
      LOWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      v73 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606329] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606313] = v71;
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v73;
      v74 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606333] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606317] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606317]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v74;
      v75 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606337] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606321] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606321]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v75;
      v76 = _mm_srli_si128(_mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606341]), 2);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_srli_si128(
                                                    _mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606325]),
                                                    2);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = v76;
      LOWORD(dword_140404A6C[18215707]) = (int)(float)((float)(v72 * v54) * 32767.0);
      HIWORD(dword_140404A6C[18215707]) = dword_140404A6C[18215707];
      HIWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      *(float *)&v15 = *(float *)&v15 + v111;
      si128 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215705]);
      v78 = _mm_shuffle_epi32(si128, 0);
      v79 = _mm_shuffle_epi32(si128, 170);
      v80 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215673]);
      v81 = _mm_shuffle_epi32(si128, 255);
      v82 = _mm_shuffle_epi32(si128, 85);
      v83 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215689]);
      *(__m128i *)&dword_140404A6C[v4 + 606313] = _mm_add_epi16(
                                                    _mm_add_epi16(
                                                      _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215641]),
                                                      _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215657])),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606313]);
      v84 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215645]);
      v85 = _mm_add_epi16(_mm_add_epi16(v80, v83), *(__m128i *)&dword_140404A6C[v4 + 606329]);
      v86 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215661]);
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v85;
      v87 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215677]);
      v88 = _mm_add_epi16(_mm_add_epi16(v84, v86), *(__m128i *)&dword_140404A6C[v4 + 606317]);
      v89 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215693]);
      *(__m128i *)&dword_140404A6C[v4 + 606317] = v88;
      v90 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215649]);
      v91 = _mm_add_epi16(_mm_add_epi16(v87, v89), *(__m128i *)&dword_140404A6C[v4 + 606333]);
      v92 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215665]);
      v93 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215669]);
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v91;
      v94 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215681]);
      v95 = _mm_add_epi16(_mm_add_epi16(v90, v92), *(__m128i *)&dword_140404A6C[v4 + 606321]);
      v96 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215697]);
      *(__m128i *)&dword_140404A6C[v4 + 606321] = v95;
      v97 = _mm_mulhi_epi16(_mm_load_si128((     __m128i *)&dword_140404A6C[18215701]), v81);
      v32 = v109 + v34;
      v98 = _mm_add_epi16(_mm_add_epi16(v94, v96), *(__m128i *)&dword_140404A6C[v4 + 606337]);
      v99 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215653]);
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v98;
      v100 = _mm_add_epi16(v93, _mm_mulhi_epi16(v99, v78));
      v101 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215685]);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_add_epi16(v100, *(__m128i *)&dword_140404A6C[v4 + 606325]);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = _mm_add_epi16(
                                                    _mm_add_epi16(v97, _mm_mulhi_epi16(v101, v79)),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606341]);
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)SLOWORD(dword_140404A6C[v4 + 606313]);
      *v56 = (float)((float)SLOWORD(dword_140404A6C[v4 + 606329]) * 6.103515625e-05) * *(float *)&v28;
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)(*(float *)SR_VEC_LANES(128, v101, i32) * 6.103515625e-05) * *(float *)&v28;
      *(float *)&v28 = *(float *)&v28 + v103;
      *(v56 - 1) = *(float *)SR_VEC_LANES(128, v101, i32);
      result = ((unsigned __int8)dword_140404A6C[v4 + 606345] + 1) & 0x3F;
      dword_140404A6C[v4 + 606345] = result;
      v56 += 2;
      v109 = v109 + v34;
      v54 = v106 + v17;
      v29 = v110 + v104;
      v53 = v107 + v105;
      v106 = v106 + v17;
      v110 = v110 + v104;
      v107 = v107 + v105;
      --v51;
    }
    while ( v51 );
  }
  dword_140404A6C[v4 + 606413] = v26;
  dword_140404A6C[v4 + 606414] = v15;
  *(float *)&dword_140404A6C[v4 + 606410] = v29;
  dword_140404A6C[v4 + 606416] = v28;
  *(float *)&dword_140404A6C[v4 + 606415] = v32;
  *(float *)&dword_140404A6C[v4 + 606411] = v53;
  dword_140404A6C[v4 + 606412] = v24;
  return result;
}
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
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1449816D0: using guessed type unsigned int;
// 1449816D4: using guessed type unsigned int;
// 1449816D8: using guessed type unsigned int;
// 16A1BB988: using guessed type unsigned int;

//----- (000000014009DE80) ----------------------------------------------------
__int64 sub_14009DE80()
{
  int v0; // edx
  unsigned int *v1; // r8
  unsigned int *v2; // rdx

  v0 = dword_14030186C;
  if ( dword_14030186C >= 624 )
  {
    if ( dword_14030186C == 625 )
      sub_1400C2D50(0x1571u);
    v1 = &dword_140404A6C[18600733];
    v2 = &dword_140404A6C[18600960];
    do
    {
      *v1 = v1[397] ^ ((*v1 ^ (*v1 ^ v1[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v1[1] & 1];
      ++v1;
    }
    while ( (__int64)v1 < (__int64)&dword_140404A6C[18600960] );
    do
    {
      *v2 = *(v2 - 227) ^ ((*v2 ^ (*v2 ^ v2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v2[1] & 1];
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&dword_140404A6C[18601356] );
    dword_140404A6C[18601356] = dword_140404A6C[18601129]
                              ^ ((dword_140404A6C[18601356]
                                ^ (dword_140404A6C[18601356]
                                 ^ dword_140404A6C[18600733])
                                & 0x7FFFFFFF) >> 1)
                              ^ dword_140301E08[dword_140404A6C[18600733] & 1];
    v0 = 0;
  }
  dword_14030186C = v0 + 1;
  return (((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
          ^ (dword_140404A6C[v0 + 18600733] >> 11)
          ^ dword_140404A6C[v0 + 18600733])
         & 0xFFFFDF8C) << 15)
       ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
       ^ (dword_140404A6C[v0 + 18600733] >> 11)
       ^ dword_140404A6C[v0 + 18600733]
       ^ (((((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
            ^ (dword_140404A6C[v0 + 18600733] >> 11)
            ^ dword_140404A6C[v0 + 18600733])
           & 0xFFFFDF8C) << 15)
         ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
         ^ (dword_140404A6C[v0 + 18600733] >> 11)
         ^ dword_140404A6C[v0 + 18600733]) >> 18);
}

// 14030186C: using guessed type int dword_14030186C;
// 140301E08: using guessed type int dword_140301E08[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A70B0) ----------------------------------------------------
_UNKNOWN **           sub_1400A70B0(int a1)
{
  /* src/engine/items/grenade.c */
  extern void grenade_explode(int item);
  grenade_explode(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400C2BB0) ----------------------------------------------------
__int64            sub_1400C2BB0(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  int v6; // edi
  int v7; // r11d
  int v8; // r10d
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rcx

  v2 = 1;
  dword_140404A6C[18600733] = 19650218;
  do
  {
    v4 = v2;
    v5 = v2 + 1812433253 * (dword_140404A6C[v2 + 18600732] ^ (dword_140404A6C[v2 + 18600732] >> 30));
    ++v2;
    dword_140404A6C[v4 + 18600733] = v5;
  }
  while ( v2 < 624 );
  v6 = 0;
  dword_14030186C = v2;
  v7 = a2;
  if ( a2 < 624 )
    v7 = 624;
  v8 = 1;
  if ( v7 )
  {
    v9 = a2;
    v10 = 1;
    v11 = 0;
    do
    {
      v12 = v11 + 1;
      v13 = v8 + 1;
      v14 = v6 + 1;
      v8 = 1;
      dword_140404A6C[v10 + 18600733] = v6
                                      + *(_DWORD *)(a1 + 4 * v11)
                                      + (dword_140404A6C[v10 + 18600733]
                                       ^ (1664525
                                        * (dword_140404A6C[v10 + 18600732] ^ (dword_140404A6C[v10 + 18600732] >> 30))));
      v15 = dword_140404A6C[18600733];
      v16 = v10 + 1;
      if ( v13 < 624 )
        v8 = v13;
      else
        v15 = dword_140404A6C[18601356];
      v10 = 1;
      dword_140404A6C[18600733] = v15;
      if ( v13 < 624 )
        v10 = v16;
      v6 = 0;
      if ( v12 < v9 )
        v6 = v14;
      v11 = 0;
      if ( v12 < v9 )
        v11 = v12;
      --v7;
    }
    while ( v7 );
  }
  v17 = 623;
  v18 = v8;
  do
  {
    v19 = v8 + 1;
    v20 = (dword_140404A6C[v18 + 18600733]
         ^ (1566083941 * (dword_140404A6C[v18 + 18600732] ^ (dword_140404A6C[v18 + 18600732] >> 30))))
        - v8;
    v8 = 1;
    dword_140404A6C[v18 + 18600733] = v20;
    result = dword_140404A6C[18600733];
    v22 = v18 + 1;
    if ( v19 >= 624 )
      result = dword_140404A6C[18601356];
    v18 = 1;
    if ( v19 < 624 )
      v18 = v22;
    dword_140404A6C[18600733] = result;
    if ( v19 < 624 )
      v8 = v19;
    --v17;
  }
  while ( v17 );
  dword_140404A6C[18600733] = 0x80000000;
  return result;
}

// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144AF96E0: using guessed type unsigned int;
// 144AFA09C: using guessed type unsigned int;

//----- (00000001400CF670) ----------------------------------------------------
__int64            sub_1400CF670(signed int a1)
{
  /* src/engine/items/gun.c */
  extern void gun_update(int item);
  gun_update(a1);
  return 0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400D3340) ----------------------------------------------------
void            sub_1400D3340(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  signed int v12; // r10d
  float v13; // xmm11_4
  signed int v14; // esi
  int v15; // r15d
  int v16; // edi
  unsigned int v17; // eax
  int v18; // ebp
  float v19; // xmm14_4
  signed int v20; // r14d
  float v21; // xmm15_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm12_4
  int v25; // ebx
  float v26; // xmm7_4
  int v27; // edi
  unsigned int *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned int *v31; // rdx
  __int64 v32; // r8
  unsigned int *v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // ecx
  int v37; // r12d
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r15d
  __int64 v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm14_4
  float v45; // xmm13_4
  float v46; // xmm15_4
  int v47; // ebp
  float v48; // xmm12_4
  __int64 v49; // r14
  int v50; // edi
  __int64 v51; // rbx
  float v52; // xmm7_4
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r12d
  __int64 v62; // r8
  __int64 v63; // r15
  __int64 i; // r11
  __int64 v65; // rbp
  signed int v66; // esi
  unsigned int *v67; // r9
  unsigned int v68; // edi
  float v69; // xmm5_4
  float v70; // xmm7_4
  float v71; // xmm4_4
  unsigned int v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm2_4
  float v75; // xmm4_4
  __int64 v76; // r10
  unsigned int *v77; // r14
  __int64 v78; // r15
  int v79; // r13d
  int v80; // esi
  signed int v81; // r11d
  __int64 v82; // rbp
  unsigned int *v83; // rbx
  int v84; // edi
  int v85; // r10d
  unsigned int v86; // r8d
  float v87; // xmm5_4
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r14
  char *v91; // rdx
  float v92; // xmm5_4
  float v93; // xmm7_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  __int64 v98; // rcx
  unsigned int v99; // eax
  float *v100; // rax
  __int64 v101; // rcx
  float v102; // xmm0_4
  int v103; // eax
  int v104; // edx
  unsigned int v105; // ecx
  unsigned int v106; // r8d
  float v107; // xmm2_4
  float v108; // xmm4_4
  int v109; // edx
  int v110; // r9d
  unsigned int v111; // ecx
  float v112; // xmm7_4
  float v113; // xmm2_4
  float v114; // xmm3_4
  float *v115; // rax
  __int64 v116; // rcx
  float v117; // xmm2_4
  float v118; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D3340[336];
#define v119 (*(int (*))(void *)(sr_frame_1400D3340 + 0)) /* [rsp+20h] */
#define v120 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define v121 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 8)) /* [rsp+28h] */
#define v122 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define v123 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 16)) /* [rsp+30h] */
#define v124 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define v125 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 24)) /* [rsp+38h] */
#define v126 (*(float (*))(void *)(sr_frame_1400D3340 + 32)) /* [rsp+40h] */
#define v127 (*(int (*))(void *)(sr_frame_1400D3340 + 36)) /* [rsp+44h] */
#define v128 (*(int (*))(void *)(sr_frame_1400D3340 + 40)) /* [rsp+48h] */
#define v129 (*(signed int (*))(void *)(sr_frame_1400D3340 + 44)) /* [rsp+4Ch] */
#define v130 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 48)) /* [rsp+50h] */
#define v131 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 56)) /* [rsp+58h] */
#define v132 (*(signed int (*))(void *)(sr_frame_1400D3340 + 304)) /* [rsp+150h] */
#define v133 (*(int (*))(void *)(sr_frame_1400D3340 + 312)) /* [rsp+158h] */
#define v134 (*(float (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v135 (*(int (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v136 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 320)) /* [rsp+160h] */
#define v137 (*(float (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define v138 (*(int (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400D3340 + 328)) /* [rsp+168h] */

  v1 = 136LL * a1;
  v124 = v1;
  v2 = *(int *)((char *)&dword_140404A6C[225391236] + v1);
  if ( (_DWORD)v2 == -1 )
    return;
  v3 = (int)dword_140404A6C[396 * v2 + 225426057];
  if ( dword_140404A6C[34 * v3 + 225391237] == -1 )
  {
    v4 = (int)dword_140404A6C[34 * v3 + 225391236];
    if ( (_DWORD)v4 == -1 )
      return;
    v3 = (int)dword_140404A6C[396 * v4 + 225426057];
    if ( dword_140404A6C[34 * v3 + 225391237] == -1 )
      return;
  }
  v5 = *(int *)((char *)&dword_140404A6C[225391237] + v1);
  if ( (_DWORD)v5 == -1 )
    return;
  v6 = (int)dword_140404A6C[396 * v5 + 225426057];
  if ( dword_140404A6C[34 * v6 + 225391236] == -1 )
  {
    v7 = (int)dword_140404A6C[34 * v6 + 225391237];
    if ( (_DWORD)v7 == -1 )
      return;
    v6 = (int)dword_140404A6C[396 * v7 + 225426057];
    if ( dword_140404A6C[34 * v6 + 225391236] == -1 )
      return;
  }
  v8 = 34 * v6;
  v9 = (int)dword_140404A6C[34 * v6 + 225391236];
  if ( (_DWORD)v9 == -1 )
    return;
  v10 = (int)dword_140404A6C[396 * v9 + 225426057];
  if ( dword_140404A6C[34 * v10 + 225391239] == -1 )
  {
    v11 = (int)dword_140404A6C[34 * v10 + 225391236];
    if ( (_DWORD)v11 == -1 )
      return;
    v10 = (int)dword_140404A6C[396 * v11 + 225426057];
    if ( dword_140404A6C[34 * v10 + 225391239] == -1 )
      return;
  }
  v12 = 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391240] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391230] + v1))
      + 4096;
  v13 = 0.0;
  v132 = v12;
  v14 = 4 * (dword_140404A6C[34 * v3 + 225391230] - dword_140404A6C[34 * v3 + 225391240]) + 4096;
  v15 = v14 - v12;
  v133 = v14 - v12;
  v16 = 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1))
      + 4096;
  v17 = dword_140404A6C[v8 + 225391232] - dword_140404A6C[v8 + 225391241];
  v119 = v16;
  v18 = 4 * v17 + 4096;
  v19 = (float)((float)*(int *)((char *)&dword_140404A6C[225391231] + v1) * 4.0) + 4.25;
  v20 = 4 * v17
      - 4
      * (*(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
       + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1));
  v21 = (float)((float)(int)dword_140404A6C[34 * v3 + 225391231] * 4.0) + 4.25;
  v129 = v20;
  v22 = (float)((float)(int)dword_140404A6C[v8 + 225391231] * 4.0) + 4.25;
  v134 = v22;
  v23 = (float)((float)(int)dword_140404A6C[34 * v10 + 225391231] * 4.0) + 4.25;
  v137 = v23;
  v24 = 1.0 / (float)(v14 - v12);
  if ( v16 <= v18 )
  {
    do
    {
      v25 = v12;
      v26 = 0.0;
      if ( v12 <= v14 )
      {
        do
        {
          sub_1400D2DB0(
            v25++,
            v16,
            (float)((float)(1.0 - v26) * (float)((float)(v22 * v13) + (float)(v19 * (float)(1.0 - v13))))
          + (float)((float)((float)(v23 * v13) + (float)(v21 * (float)(1.0 - v13))) * v26));
          v26 = v26 + v24;
        }
        while ( v25 <= v14 );
        v22 = v134;
        v23 = v137;
        v12 = v132;
      }
      ++v16;
      v13 = v13 + (float)(1.0 / (float)v20);
    }
    while ( v16 <= v18 );
    v1 = v124;
  }
  v27 = v20 >> 2;
  v128 = v20 >> 2;
  if ( v20 >> 2 >= 0 )
  {
    v28 = &dword_140404A6C[18601940];
    v29 = (__int64)v15 >> 2;
    v30 = v27 + 1LL;
    do
    {
      if ( v29 >= 0 )
      {
        v31 = v28;
        v32 = v29 + 1;
        do
        {
          v33 = v31;
          v34 = 5;
          do
          {
            *(v33 - 7) = 0;
            *v33 = 0;
            v33[7] = 0;
            v33[14] = 0;
            v33[21] = 0;
            v33 += 1792;
            --v34;
          }
          while ( v34 );
          v31 += 28;
          --v32;
        }
        while ( v32 );
      }
      v28 += 7168;
      --v30;
    }
    while ( v30 );
  }
  v35 = 0;
  v138 = 0;
  if ( v27 > 0 )
  {
    v36 = v15 >> 2;
    v37 = 0;
    v38 = 0;
    v127 = v15 >> 2;
    v122 = 0;
    do
    {
      v39 = 0;
      v40 = 0;
      v135 = 0;
      v120 = 0;
      if ( v36 > 0 )
      {
        v41 = 0;
        do
        {
          v42 = (int)(*(unsigned int *)((char *)&dword_140404A6C[225391240] + v1)
                    + v39
                    + *(unsigned int *)((char *)&dword_140404A6C[225391230] + v1)
                    + ((v35
                      + *(unsigned int *)((char *)&dword_140404A6C[225391232] + v1)
                      + *(unsigned int *)((char *)&dword_140404A6C[225391241] + v1)) << 12));
          v43 = *(float *)&dword_140404A6C[v42 + 254388963];
          v44 = *(float *)&dword_140404A6C[v42 + 254388964];
          v45 = *(float *)&dword_140404A6C[v42 + 254393059];
          v46 = *(float *)&dword_140404A6C[v42 + 254393060];
          v126 = v43;
          if ( v43 > 0.0 && v44 > 0.0 && v45 > 0.0 && v46 > 0.0 )
          {
            v47 = 0;
            v131 = 5;
            v48 = 0.0;
            v49 = 112 * (v38 + v40);
            v130 = v49;
            do
            {
              v50 = 0;
              v51 = v49;
              v52 = 0.0;
              v53 = 5;
              do
              {
                v54 = *(int *)((char *)&dword_140404A6C[18601933] + v51);
                if ( !(_DWORD)v54 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[18601934] + v51) = v41 + v50;
                  *(unsigned int *)((char *)&dword_140404A6C[3 * v54 + 18601935] + v51) = v37 + v47;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&dword_140404A6C[18601933] + v51))++
                                                           + 18601936]
                                  + v51) = 1065353216;
                  sub_1400D2DB0(
                    v41 + v50 + v132,
                    v119 + v37 + v47,
                    (float)((float)(1.0 - v52) * (float)((float)(v43 * (float)(1.0 - v48)) + (float)(v45 * v48)))
                  + (float)((float)((float)(v44 * (float)(1.0 - v48)) + (float)(v46 * v48)) * v52));
                }
                ++v50;
                v52 = v52 + 0.25;
                v51 += 28;
                --v53;
              }
              while ( v53 );
              v48 = v48 + 0.25;
              v43 = v126;
              v49 = v130 + 7168;
              ++v47;
              v130 += 7168;
              --v131;
            }
            while ( v131 );
            v40 = v120;
            v1 = v124;
            v35 = v138;
            v38 = v122;
          }
          ++v40;
          v36 = v127;
          v39 = v135 + 1;
          v41 += 4;
          v135 = v39;
          v120 = v40;
        }
        while ( v39 < v127 );
        v27 = v128;
      }
      ++v35;
      v38 += 256;
      v37 += 4;
      v138 = v35;
      v122 = v38;
    }
    while ( v35 < v27 );
    v20 = v129;
    v15 = v133;
  }
  v55 = 16;
  v56 = v20;
  v125 = v20;
  v121 = 16;
  do
  {
    v57 = 1;
    v136 = 1;
    v58 = 1;
    if ( v56 <= 1 )
      goto LABEL_76;
    v59 = 7196;
    v123 = 7196;
    do
    {
      v60 = 1;
      v139 = 1;
      v61 = 1;
      if ( v15 <= 1 )
        goto LABEL_74;
      v62 = v59;
      do
      {
        if ( !*(unsigned int *)((char *)&dword_140404A6C[18601933] + v62)
          || *(float *)((char *)&dword_140404A6C[18601936] + v62) < 1.0 )
        {
          v63 = -1;
          while ( 1 )
          {
            for ( i = -1; i <= 1; ++i )
            {
              if ( !v63 && !i )
                continue;
              v65 = 7 * (v60 + i + ((v63 + v57) << 8));
              if ( (int)dword_140404A6C[v65 + 18601933] <= 0 )
                goto LABEL_68;
              v66 = 0;
              v67 = &dword_140404A6C[18601935 + v65];
              do
              {
                v68 = *(v67 - 1);
                v69 = (float)(int)(v68 - v61);
                v70 = (float)(int)(*v67 - v58);
                v71 = fsqrt((float)(v69 * v69) + (float)(v70 * v70));
                *(float *)&v72 = 1.0 - (float)(v71 * 0.0625);
                if ( *(float *)&v72 <= 0.0 )
                  goto LABEL_66;
                if ( v71 == 0.0 )
                {
                  v75 = 0.0;
                  v74 = 0.0;
                }
                else
                {
                  v73 = 1.0 / v71;
                  v74 = v73 * v69;
                  v75 = v73 * v70;
                }
                v76 = *(int *)((char *)&dword_140404A6C[18601933] + v62);
                if ( !(_DWORD)v76 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[18601934] + v62) = v68;
LABEL_65:
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * *(unsigned int *)((char *)&dword_140404A6C[18601933] + v62)
                                                           + 18601935]
                                  + v62) = *v67;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&dword_140404A6C[18601933] + v62))++
                                                           + 18601936]
                                  + v62) = v72;
                  goto LABEL_66;
                }
                v88 = 0;
                v89 = -1;
                if ( (int)v76 > 0 )
                {
                  v90 = (unsigned int)v76;
                  v91 = (char *)&dword_140404A6C[18601935] + v62;
                  do
                  {
                    v92 = (float)(*((_DWORD *)v91 - 1) - v61);
                    v93 = (float)(*(_DWORD *)v91 - v58);
                    v94 = fsqrt((float)(v92 * v92) + (float)(v93 * v93));
                    if ( v94 == 0.0 )
                    {
                      v97 = 0.0;
                      v96 = 0.0;
                    }
                    else
                    {
                      v95 = 1.0 / v94;
                      v96 = v95 * v93;
                      v97 = v95 * v92;
                    }
                    if ( (float)((float)(v97 * v74) + (float)(v96 * v75)) > 0.0 )
                    {
                      v89 = -2;
                      if ( *(float *)&v72 > *((float *)v91 + 1) )
                        v89 = v88;
                    }
                    ++v88;
                    v91 += 12;
                    --v90;
                  }
                  while ( v90 );
                  if ( v89 == -2 )
                    goto LABEL_66;
                  if ( v89 != -1 )
                  {
                    v98 = v62 + 12 * v89;
                    *(unsigned int *)((char *)&dword_140404A6C[18601934] + v98) = v68;
                    v99 = *v67;
                    *(unsigned int *)((char *)&dword_140404A6C[18601936] + v98) = v72;
                    *(unsigned int *)((char *)&dword_140404A6C[18601935] + v98) = v99;
                    goto LABEL_66;
                  }
                }
                if ( (int)v76 < 2 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[3 * v76 + 18601934] + v62) = v68;
                  goto LABEL_65;
                }
LABEL_66:
                ++v66;
                v67 += 3;
              }
              while ( v66 < (int)dword_140404A6C[v65 + 18601933] );
              v60 = v139;
LABEL_68:
              v57 = v136;
            }
            if ( ++v63 > 1 )
            {
              v15 = v133;
              break;
            }
          }
        }
        ++v60;
        ++v61;
        v62 += 28;
        v139 = v60;
      }
      while ( v61 < v15 );
      v59 = v123;
LABEL_74:
      v56 = v125;
      ++v57;
      v59 += 7168;
      v136 = v57;
      ++v58;
      v123 = v59;
    }
    while ( v57 < v125 );
    v55 = v121;
LABEL_76:
    v121 = --v55;
  }
  while ( v55 );
  if ( v56 > 1 )
  {
    v77 = &dword_140404A6C[18603734];
    v78 = v56 - 1;
    v79 = v133;
    v80 = v119 + 1;
    do
    {
      if ( v79 > 1 )
      {
        v81 = v132;
        v82 = (unsigned int)(v79 - 1);
        v83 = v77;
        v84 = v132 + 1;
        do
        {
          v85 = *(v83 - 2);
          if ( v85 > 0 )
          {
            v86 = v80 >> 11;
            if ( (unsigned int)(v84 >> 11) > 7 || v86 > 7 )
              v87 = 0.0;
            else
              v87 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((v84 >> 11) + 8 * v86) + 272034683]
                             + 4LL * ((v84 & 0x7FF) + 2049 * (v80 & 0x7FFu)));
            v100 = (float *)(v83 + 1);
            v101 = *(v83 - 2);
            v102 = 0.0;
            do
            {
              v102 = v102 + *v100;
              v100 += 3;
              --v101;
            }
            while ( v101 );
            v103 = v119 + *v83;
            v104 = *(v83 - 1) + v81;
            v105 = v103 >> 11;
            v106 = v104 >> 11;
            if ( v85 <= 1 )
            {
              if ( v106 > 7 || v105 > 7 )
                v114 = 0.0;
              else
                v114 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v106 + 8 * v105) + 272034683]
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
            }
            else
            {
              v107 = *((float *)v83 + 1) / fminf(v102, 1.0);
              if ( v106 > 7 || v105 > 7 )
                v108 = 0.0;
              else
                v108 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v106 + 8 * v105) + 272034683]
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
              v109 = v119 + v83[3];
              v110 = v81 + v83[2];
              v111 = v109 >> 11;
              if ( (unsigned int)(v110 >> 11) > 7 || v111 > 7 )
                v112 = 0.0;
              else
                v112 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * ((v110 >> 11) + 8 * v111) + 272034683]
                                + 4LL * ((v110 & 0x7FF) + 2049 * (v109 & 0x7FFu)));
              v113 = fminf(fmaxf(v107, 0.0), 1.0);
              v114 = (float)((float)(1.0 - (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113))) * v112)
                   + (float)(v108 * (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113)));
            }
            v115 = (float *)(v83 + 1);
            v116 = *(v83 - 2);
            v117 = 0.0;
            do
            {
              v117 = fmaxf(v117, *v115);
              v115 += 3;
              --v116;
            }
            while ( v116 );
            v118 = fminf(fmaxf(v117, 0.0), 1.0);
            sub_1400D2DB0(
              v84,
              v80,
              (float)((float)(1.0 - (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))) * v87)
            + (float)(v114 * (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))));
            v81 = v132;
          }
          ++v84;
          v83 += 7;
          --v82;
        }
        while ( v82 );
        v79 = v133;
      }
      ++v80;
      v77 += 1792;
      --v78;
    }
    while ( v78 );
  }
}
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

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010AF90) ----------------------------------------------------
void            sub_14010AF90(int a1)
{
  extern void vehicle_update_helicopter(int vehicle);
  vehicle_update_helicopter(a1);
}

//----- (000000014010D610) ----------------------------------------------------
void sub_14010D610()
{
  extern void world_solve_vehicle_wheels(void);
  /* src/engine/world_vehicles.c */
  world_solve_vehicle_wheels();
}


//----- (000000014012B090) ----------------------------------------------------
unsigned int *           sub_14012B090(int a1, float *a2, float *a3)
{
  __int64 v3; // rcx
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm5_4

  v3 = 47LL * a1;
  *(float *)&dword_140404A6C[v3 + 18215718] = *(float *)&dword_140404A6C[v3 + 18215718] + *a3;
  *(float *)&dword_140404A6C[v3 + 18215719] = *(float *)&dword_140404A6C[v3 + 18215719] + a3[1];
  *(float *)&dword_140404A6C[v3 + 18215720] = *(float *)&dword_140404A6C[v3 + 18215720] + a3[2];
  v5 = a2[1];
  v6 = a3[1];
  v7 = a3[2];
  v8 = *a3;
  v9 = a2[2] * *a3;
  v10 = *a2;
  v11 = *a2 * v6;
  *(float *)&dword_140404A6C[v3 + 18215733] = (float)((float)(a2[2] * v6) - (float)(v5 * v7))
                                            + *(float *)&dword_140404A6C[v3 + 18215733];
  *(float *)&dword_140404A6C[v3 + 18215734] = (float)((float)(v10 * v7) - v9)
                                            + *(float *)&dword_140404A6C[v3 + 18215734];
  *(float *)&dword_140404A6C[v3 + 18215735] = (float)((float)(v5 * v8) - v11)
                                            + *(float *)&dword_140404A6C[v3 + 18215735];
  return &dword_140404A6C[18215709];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012B170) ----------------------------------------------------
unsigned int *           sub_14012B170(float *a1, int a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm1_4
  __int64 v5; // rdx
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm8_4

  v3 = a3[2];
  v4 = a3[1];
  v5 = 47LL * a2;
  v7 = *(float *)&dword_140404A6C[v5 + 18215738];
  v8 = *(float *)&dword_140404A6C[v5 + 18215736];
  v9 = *(float *)&dword_140404A6C[v5 + 18215737];
  v10 = *a3 * v7;
  v11 = (float)(*a3 * v9) - (float)(v8 * v4);
  *a1 = (float)((float)(v4 * v7) - (float)(v3 * v9)) + *(float *)&dword_140404A6C[v5 + 18215718];
  a1[1] = (float)((float)(v8 * v3) - v10) + *(float *)&dword_140404A6C[v5 + 18215719];
  a1[2] = v11 + *(float *)&dword_140404A6C[v5 + 18215720];
  return &dword_140404A6C[18215709];
}



//----- (0000000140005160) ----------------------------------------------------
__int64 sub_140005160(__int16 body, unsigned int *offset, unsigned int *normal,
                      float depth, unsigned int friction_bits, float depth_scale,
                      unsigned int stiffness_bits)
{
  extern uintptr_t physics_add_world_contact(int16_t, const float *, const float *, float, float, float, float);
  float friction, stiffness;
  __builtin_memcpy(&friction, &friction_bits, 4);
  __builtin_memcpy(&stiffness, &stiffness_bits, 4);
  return (__int64)physics_add_world_contact(body, (const float *)offset, (const float *)normal,
                                           depth, friction, depth_scale, stiffness);
}

//----- (00000001400052C0) ----------------------------------------------------
__int64            sub_1400052C0(
        int a1,
        int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        float a6,
        unsigned int a7,
        float a8,
        unsigned int a9)
{
  extern int physics_add_contact(int body_a, int body_b, const float *offset_a, const float *offset_b,
                                 const float *normal, float depth, float friction, float depth_scale, float stiffness);
  /* src/engine/physics_bonds.c. The original leaves in RAX the normal's z bits when it added the contact, else the
     end of the bond array; 0x1400CA430 returns it, so it is kept. */
  if (physics_add_contact(a1, a2, (const float *)a3, (const float *)a4, (const float *)a5, a6, *(float *)&a7, a8,
                          *(float *)&a9) < 0)
    return (__int64)&dword_140404A6C[487148677];
  return a5[2];
}


//----- (000000014001BF70) ----------------------------------------------------
__int64            sub_14001BF70(int a1)
{
  extern void physics_solve_joint(int bond);
  physics_solve_joint(a1);
  return 0;
}
#undef v57
#undef v58

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001C780) ----------------------------------------------------
__int64            sub_14001C780(int a1)
{
  extern void physics_prepare_joint(int bond);
  physics_prepare_joint(a1);
  return a1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001CBB0) ----------------------------------------------------
__int64            sub_14001CBB0(int a1)
{
  extern void physics_solve_point_velocity(int constraint);
  physics_solve_point_velocity(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014001D080) ----------------------------------------------------
unsigned int *sub_14001D080()
{
  extern void physics_solve(void);
  physics_solve();
  /* The original returns its last bond-scan pointer; no caller uses it. */
  return &dword_140404A6C[487148677];
}
#undef v397
#undef v398

// 140384000: using guessed type float flt_140384000[131092];
// 140404000: using guessed type float;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E44920: using guessed type unsigned int;
// 182A7D558: using guessed type unsigned int;

//----- (000000014001FB90) ----------------------------------------------------
void sub_14001FB90()
{
  extern void physics_expire_bonds(void);
  physics_expire_bonds();
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
  extern int physics_create_point_bond(int body, int other_body, const float local_point[3],
                                       const float other_local_point[3]);
  return (unsigned int)physics_create_point_bond((int)a1, (int)a2, (const float *)(void *)a3, (const float *)(void *)a4);
}

//----- (000000014004E5B0) ----------------------------------------------------
__int64            sub_14004E5B0(unsigned int a1, unsigned int a2)
{
  extern int physics_create_rotation_bond(int body, int other_body);
  return (unsigned int)physics_create_rotation_bond((int)a1, (int)a2);
}

//----- (000000014007F370) ----------------------------------------------------
void            sub_14007F370(unsigned int a1)
{
  extern void physics_remove_bond(int bond);
  /* src/engine/physics_bonds.c */
  physics_remove_bond((int)a1);
}


//----- (00000001400A4440) ----------------------------------------------------
__int64 sub_1400A4440()
{
  /* Clean implementation: src/engine/physics_free.c, checked against the original executable
     (tools/native-compare suite smalls). */
  extern int physics_free_bond(void);
  return (unsigned int)physics_free_bond();
}

//----- (00000001400C2D50) ----------------------------------------------------
__int64            sub_1400C2D50(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // r8d

  dword_140404A6C[18600733] = a1;
  LODWORD(result) = 1;
  do
  {
    v2 = (int)result;
    v3 = result
       + 1812433253 * (dword_140404A6C[(int)result + 18600732] ^ (dword_140404A6C[(int)result + 18600732] >> 30));
    result = (unsigned int)(result + 1);
    dword_140404A6C[v2 + 18600733] = v3;
  }
  while ( (int)result < 624 );
  dword_14030186C = result;
  return result;
}

// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144AF96E0: using guessed type unsigned int;

//----- (00000001401154D0) ----------------------------------------------------
__int64 sub_1401154D0()
{
  extern void physics_integrate_points(void);
  /* src/engine/physics_points.c; the original returns a leftover value, its one caller (the physics tick) does not
     read it. */
  physics_integrate_points();
  return 0;
}


//----- (0000000140115830) ----------------------------------------------------
void sub_140115830()
{
  extern void physics_expire_points(void);
  /* src/engine/physics_points.c */
  physics_expire_points();
}


//----- (0000000140116210) ----------------------------------------------------
void sub_140116210()
{
  extern void physics_tick(void);
  /* src/engine/physics_tick.c; the debug console's tick markers stay here. */
  SR_DEBUG_TICK_BEGIN();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "before physics tick");
  physics_tick();
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after physics tick");
  SR_DEBUG_TICK_END();
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA9278: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 1A4BF0900: using guessed type unsigned int;
// 1A4BF0920: using guessed type unsigned int;
// 1A4CF0924: using guessed type unsigned int;

