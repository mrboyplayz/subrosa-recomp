#include "shared_client.h"
#include "../engine/physics.h"

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
  physics_integrate_bodies();
}

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
  int v2;
  int *v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  float *v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
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
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
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
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float *v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  int *v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  int v107;
  char *v108;
  int *v109;
  __int64 v110;
  int *v111;
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

//----- (0000000140050C80) ----------------------------------------------------
__int64            sub_140050C80(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  __int64 result;
  unsigned int *v6;
  int v7;
  int i;
  __int64 v9;
  unsigned int v10;
  unsigned int *v11;
  unsigned int *v12;

  result = 0;
  if ( (int)g_1602E12E0 <= 0 )
  {
LABEL_5:
    if ( (int)g_1602E12E0 < 0x7FFF )
    {
      v7 = dword_14030186C;
      dword_140404A6C[4 * g_1602E12E0 + 133919262] = a3;
      if ( v7 >= 624 )
      {
        if ( v7 == 625 )
        {
          g_144AF96E0 = 5489;
          for ( i = 1; i < 624; ++i )
          {
            v9 = i;
            v10 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
            dword_140404A6C[v9 + 18600733] = v10;
          }
        }
        v11 = &g_144AF96E0;
        v12 = &g_144AF9A6C;
        do
        {
          *v11 = v11[397] ^ ((*v11 ^ (*v11 ^ v11[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v11[1] & 1];
          ++v11;
        }
        while ( (__int64)v11 < (__int64)&g_144AF9A6C );
        do
        {
          *v12 = *(v12 - 227) ^ ((*v12 ^ (*v12 ^ v12[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v12[1] & 1];
          ++v12;
        }
        while ( (__int64)v12 < (__int64)&g_144AFA09C );
        g_144AFA09C = g_144AF9D10
                                  ^ ((g_144AFA09C
                                    ^ (g_144AF96E0
                                     ^ g_144AFA09C)
                                    & 0x7FFFFFFF) >> 1)
                                  ^ dword_140301E08[g_144AF96E0 & 1];
        v7 = 0;
      }
      dword_14030186C = v7 + 1;
      dword_140404A6C[4 * g_1602E12E0 + 133919263] = (((((((dword_140404A6C[v7 + 18600733] >> 11)
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
      dword_140404A6C[4 * g_1602E12E0 + 133919264] = sub_14009DE80();
      *a1 = dword_140404A6C[4 * g_1602E12E0 + 133919263];
      *a2 = dword_140404A6C[4 * g_1602E12E0 + 133919264];
      return g_1602E12E0++;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v6 = &g_1602E12E4;
    while ( a3 != *v6 )
    {
      result = (unsigned int)(result + 1);
      v6 += 4;
      if ( (int)result >= (int)g_1602E12E0 )
        goto LABEL_5;
    }
    *a1 = dword_140404A6C[4 * (int)result + 133919263];
    *a2 = dword_140404A6C[4 * (int)result + 133919264];
  }
  return result;
}

//----- (000000014005CF80) ----------------------------------------------------
__int64            sub_14005CF80(
        unsigned int a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  return physics_create_body(a1, (const float *)a2, (const float *)a3, (const float *)a4, COERCE_FLOAT(a5), (const float *)a6);
}

//----- (000000014006A5F0) ----------------------------------------------------
__int64            sub_14006A5F0(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __m128 v10;
  float v11;
  float v12;
  float v13;
  unsigned int v14;
  unsigned int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  signed int v24;
  int v25;
  int v26;
  float v27;
  unsigned int v28;
  float v29;
  signed int v30;
  signed int v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  unsigned int *v38;
  unsigned int *v39;
  __int64 v40;
  __int16 v41;
  float v42;
  float v43;
  int v44;
  int v45;
  __int64 result;
  float v47;
  int v48;
  float v49;
  int v50;
  __int64 v51;
  float v52;
  float v53;
  float v54;
  __int64 v55;
  float *v56;
  unsigned int v57;
  float v58;
  unsigned int v59;
  float v60;
  __m128i v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  __int64 v66;
  float v67;
  __int64 v68;
  float v69;
  float v70;
  __m128i v71;
  float v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i si128;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  int v102;
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

  v2 = 30LL * (int)g_144970AB0;
  v3 = a1;
  v4 = 278720LL * a1;
  v5 = a2;
  v6 = *(float *)&dword_140404A6C[v4 + 606302] - *(float *)&dword_140404A6C[v2 + 18198546];
  v10 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)dword_140404A6C[v4 + 606303]))  /* lane 0 = that word (was the array address, indexed as a vector) */;
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
  *(float *)&v15 = g_140404A80 * (float)(v108 + 8.0);
  if ( (unsigned int)(a1 - 56) <= 7 )
    *(float *)&v15 = g_140404A80 * 16.0;
  v16 = (float)a2;
  v17 = 1.0 / (float)a2;
  v18 = (float)(*(float *)&dword_140404A6C[v4 + 606302]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606305]
                                      - *(float *)&dword_140404A6C[v2 + 18198558])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198546];
  v19 = (float)(*(float *)&dword_140404A6C[v4 + 606303]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606306]
                                      - *(float *)&dword_140404A6C[v2 + 18198559])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198547];
  v20 = (float)(*(float *)&dword_140404A6C[v4 + 606304]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606307]
                                      - *(float *)&dword_140404A6C[v2 + 18198560])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198548];
  v21 = (float)(*(float *)&v15
              - (float)((float)(fsqrt((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) + 8.0)
                      * g_140404A80))
      * v17;
  if ( v14 <= 7 )
    v21 = 0.0;
  v22 = sub_14023F704(v12, -SR_VEC_LANES(128, v10, f32)[0]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v12 * v12);
  v23 = sub_14023EDE4(v13, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v10)), f64)[0]);
  v24 = (int)((v23 + 1.570796326794897) * (double)(int)g_16A1BB988 * 0.3183098861837907);
  if ( v24 < 0 )
    v24 = 0;
  if ( (signed int)(g_16A1BB988 - 1) < v24 )
    v24 = g_16A1BB988 - 1;
  v25 = dword_140404A6C[v24 + 175561672];
  if ( v25 )
    v26 = (int)((v22 + 6.283185307179586) * (double)v25 * 0.1591549430918953) % v25;
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
  v38 = &g_144981690;
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
  while ( (__int64)v38 < (__int64)&g_1449816D0 );
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
      LOWORD(g_1449816D0) = (int)(float)((float)(v67 * v54) * 32767.0);
      HIWORD(g_1449816D0) = g_1449816D0;
      v71 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606313] + 2));
      v72 = v70 + (float)(v69 * *(float *)&dword_140404A6C[v55 + 606346 + (((_BYTE)v68 - 1) & 0x3F)]);
      LOWORD(g_1449816D4) = (int)(float)((float)((float)(1.0 - v54) * v67) * 32767.0);
      HIWORD(g_1449816D4) = g_1449816D4;
      LOWORD(g_1449816DC) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      v73 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606329] + 2));
      *(__m128i_u *)&dword_140404A6C[v4 + 606313] = v71;
      *(__m128i_u *)&dword_140404A6C[v4 + 606329] = v73;
      v74 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606333] + 2));
      *(__m128i_u *)&dword_140404A6C[v4 + 606317] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606317]
                                                                                  + 2));
      *(__m128i_u *)&dword_140404A6C[v4 + 606333] = v74;
      v75 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606337] + 2));
      *(__m128i_u *)&dword_140404A6C[v4 + 606321] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606321]
                                                                                  + 2));
      *(__m128i_u *)&dword_140404A6C[v4 + 606337] = v75;
      v76 = _mm_srli_si128(_mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606341]), 2);
      *(__m128i_u *)&dword_140404A6C[v4 + 606325] = _mm_srli_si128(
                                                    _mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606325]),
                                                    2);
      *(__m128i_u *)&dword_140404A6C[v4 + 606341] = v76;
      LOWORD(g_1449816D8) = (int)(float)((float)(v72 * v54) * 32767.0);
      HIWORD(g_1449816D8) = g_1449816D8;
      HIWORD(g_1449816DC) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      *(float *)&v15 = *(float *)&v15 + v111;
      si128 = _mm_loadu_si128((     __m128i *)&g_1449816D0);
      v78 = _mm_shuffle_epi32(si128, 0);
      v79 = _mm_shuffle_epi32(si128, 170);
      v80 = _mm_mulhi_epi16(v79, *(__m128i_u *)&g_144981650);
      v81 = _mm_shuffle_epi32(si128, 255);
      v82 = _mm_shuffle_epi32(si128, 85);
      v83 = _mm_mulhi_epi16(v81, *(__m128i_u *)&g_144981690);
      *(__m128i_u *)&dword_140404A6C[v4 + 606313] = _mm_add_epi16(
                                                    _mm_add_epi16(
                                                      _mm_mulhi_epi16(v78, *(__m128i_u *)&g_1449815D0),
                                                      _mm_mulhi_epi16(v82, *(__m128i_u *)&g_144981610)),
                                                    *(__m128i_u *)&dword_140404A6C[v4 + 606313]);
      v84 = _mm_mulhi_epi16(v78, *(__m128i_u *)&g_1449815E0);
      v85 = _mm_add_epi16(_mm_add_epi16(v80, v83), *(__m128i_u *)&dword_140404A6C[v4 + 606329]);
      v86 = _mm_mulhi_epi16(v82, *(__m128i_u *)&g_144981620);
      *(__m128i_u *)&dword_140404A6C[v4 + 606329] = v85;
      v87 = _mm_mulhi_epi16(v79, *(__m128i_u *)&g_144981660);
      v88 = _mm_add_epi16(_mm_add_epi16(v84, v86), *(__m128i_u *)&dword_140404A6C[v4 + 606317]);
      v89 = _mm_mulhi_epi16(v81, *(__m128i_u *)&g_1449816A0);
      *(__m128i_u *)&dword_140404A6C[v4 + 606317] = v88;
      v90 = _mm_mulhi_epi16(v78, *(__m128i_u *)&g_1449815F0);
      v91 = _mm_add_epi16(_mm_add_epi16(v87, v89), *(__m128i_u *)&dword_140404A6C[v4 + 606333]);
      v92 = _mm_mulhi_epi16(v82, *(__m128i_u *)&g_144981630);
      v93 = _mm_mulhi_epi16(v82, *(__m128i_u *)&g_144981640);
      *(__m128i_u *)&dword_140404A6C[v4 + 606333] = v91;
      v94 = _mm_mulhi_epi16(v79, *(__m128i_u *)&g_144981670);
      v95 = _mm_add_epi16(_mm_add_epi16(v90, v92), *(__m128i_u *)&dword_140404A6C[v4 + 606321]);
      v96 = _mm_mulhi_epi16(v81, *(__m128i_u *)&g_1449816B0);
      *(__m128i_u *)&dword_140404A6C[v4 + 606321] = v95;
      v97 = _mm_mulhi_epi16(_mm_loadu_si128((     __m128i *)&g_1449816C0), v81);
      v32 = v109 + v34;
      v98 = _mm_add_epi16(_mm_add_epi16(v94, v96), *(__m128i_u *)&dword_140404A6C[v4 + 606337]);
      v99 = _mm_loadu_si128((     __m128i *)&g_144981600);
      *(__m128i_u *)&dword_140404A6C[v4 + 606337] = v98;
      v100 = _mm_add_epi16(v93, _mm_mulhi_epi16(v99, v78));
      v101 = _mm_loadu_si128((     __m128i *)&g_144981680);
      *(__m128i_u *)&dword_140404A6C[v4 + 606325] = _mm_add_epi16(v100, *(__m128i_u *)&dword_140404A6C[v4 + 606325]);
      *(__m128i_u *)&dword_140404A6C[v4 + 606341] = _mm_add_epi16(
                                                    _mm_add_epi16(v97, _mm_mulhi_epi16(v101, v79)),
                                                    *(__m128i_u *)&dword_140404A6C[v4 + 606341]);
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)SLOWORD(dword_140404A6C[v4 + 606313]);
      *v56 = (float)((float)SLOWORD(dword_140404A6C[v4 + 606329]) * 0.000061035156) * *(float *)&v28;
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)(*(float *)SR_VEC_LANES(128, v101, i32) * 0.000061035156) * *(float *)&v28;
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

//----- (000000014009DE80) ----------------------------------------------------
__int64 sub_14009DE80()
{
  int v0;
  unsigned int *v1;
  unsigned int *v2;

  v0 = dword_14030186C;
  if ( dword_14030186C >= 624 )
  {
    if ( dword_14030186C == 625 )
      sub_1400C2D50(0x1571u);
    v1 = &g_144AF96E0;
    v2 = &g_144AF9A6C;
    do
    {
      *v1 = v1[397] ^ ((*v1 ^ (*v1 ^ v1[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v1[1] & 1];
      ++v1;
    }
    while ( (__int64)v1 < (__int64)&g_144AF9A6C );
    do
    {
      *v2 = *(v2 - 227) ^ ((*v2 ^ (*v2 ^ v2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v2[1] & 1];
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&g_144AFA09C );
    g_144AFA09C = g_144AF9D10
                              ^ ((g_144AFA09C
                                ^ (g_144AFA09C
                                 ^ g_144AF96E0)
                                & 0x7FFFFFFF) >> 1)
                              ^ dword_140301E08[g_144AF96E0 & 1];
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

//----- (00000001400A70B0) ----------------------------------------------------
_UNKNOWN **           sub_1400A70B0(int a1)
{
  /* Ported to src/engine/item_grenade.c and compared with the original
     (tools/native-compare, suite grenade). The caller discards the result. */
  extern void item_grenade_explode(int);
  item_grenade_explode(a1);
  return 0;
}

//----- (00000001400C2BB0) ----------------------------------------------------
__int64            sub_1400C2BB0(__int64 a1, int a2)
{
  int v2;
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64 result;
  __int64 v22;

  v2 = 1;
  g_144AF96E0 = 19650218;
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
      v15 = g_144AF96E0;
      v16 = v10 + 1;
      if ( v13 < 624 )
        v8 = v13;
      else
        v15 = g_144AFA09C;
      v10 = 1;
      g_144AF96E0 = v15;
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
    result = g_144AF96E0;
    v22 = v18 + 1;
    if ( v19 >= 624 )
      result = g_144AFA09C;
    v18 = 1;
    if ( v19 < 624 )
      v18 = v22;
    g_144AF96E0 = result;
    if ( v19 < 624 )
      v8 = v19;
    --v17;
  }
  while ( v17 );
  g_144AF96E0 = 0x80000000;
  return result;
}

//----- (00000001400CF670) ----------------------------------------------------
__int64            sub_1400CF670(signed int a1)
{
  /* Ported to src/engine/item_gun.c and compared with the original
     (tools/native-compare, suite gun). The caller discards the result. */
  extern void item_gun_tick(int);
  item_gun_tick(a1);
  return 0;
}
#undef v40
#undef v41
#undef v42
#undef v43

//----- (00000001400D3340) ----------------------------------------------------
void            sub_1400D3340(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  signed int v12;
  float v13;
  signed int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  float v19;
  signed int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  int v25;
  float v26;
  int v27;
  unsigned int *v28;
  __int64 v29;
  __int64 v30;
  unsigned int *v31;
  __int64 v32;
  unsigned int *v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int v47;
  float v48;
  __int64 v49;
  int v50;
  __int64 v51;
  float v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 i;
  __int64 v65;
  signed int v66;
  unsigned int *v67;
  unsigned int v68;
  float v69;
  float v70;
  float v71;
  unsigned int v72;
  float v73;
  float v74;
  float v75;
  __int64 v76;
  unsigned int *v77;
  __int64 v78;
  int v79;
  int v80;
  signed int v81;
  __int64 v82;
  unsigned int *v83;
  int v84;
  int v85;
  unsigned int v86;
  float v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  char *v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  unsigned int v99;
  float *v100;
  __int64 v101;
  float v102;
  int v103;
  int v104;
  unsigned int v105;
  unsigned int v106;
  float v107;
  float v108;
  int v109;
  int v110;
  unsigned int v111;
  float v112;
  float v113;
  float v114;
  float *v115;
  __int64 v116;
  float v117;
  float v118;
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
  v2 = *(int *)((char *)&g_175FD147C + v1);
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
  v5 = *(int *)((char *)&g_175FD1480 + v1);
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
      * (*(unsigned int *)((char *)&g_175FD148C + v1)
       + *(unsigned int *)((char *)&g_175FD1464 + v1))
      + 4096;
  v13 = 0.0;
  v132 = v12;
  v14 = 4 * (dword_140404A6C[34 * v3 + 225391230] - dword_140404A6C[34 * v3 + 225391240]) + 4096;
  v15 = v14 - v12;
  v133 = v14 - v12;
  v16 = 4
      * (*(unsigned int *)((char *)&g_175FD146C + v1)
       + *(unsigned int *)((char *)&g_175FD1490 + v1))
      + 4096;
  v17 = dword_140404A6C[v8 + 225391232] - dword_140404A6C[v8 + 225391241];
  v119 = v16;
  v18 = 4 * v17 + 4096;
  v19 = (float)((float)*(int *)((char *)&g_175FD1468 + v1) * 4.0) + 4.25;
  v20 = 4 * v17
      - 4
      * (*(unsigned int *)((char *)&g_175FD146C + v1)
       + *(unsigned int *)((char *)&g_175FD1490 + v1));
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
    v28 = &g_144AFA9BC;
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
          v42 = (int)(*(unsigned int *)((char *)&g_175FD148C + v1)
                    + v39
                    + *(unsigned int *)((char *)&g_175FD1464 + v1)
                    + ((v35
                      + *(unsigned int *)((char *)&g_175FD146C + v1)
                      + *(unsigned int *)((char *)&g_175FD1490 + v1)) << 12));
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
                v54 = *(int *)((char *)&g_144AFA9A0 + v51);
                if ( !(_DWORD)v54 )
                {
                  *(unsigned int *)((char *)&g_144AFA9A4 + v51) = v41 + v50;
                  *(unsigned int *)((char *)&dword_140404A6C[3 * v54 + 18601935] + v51) = v37 + v47;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&g_144AFA9A0 + v51))++
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
        if ( !*(unsigned int *)((char *)&g_144AFA9A0 + v62)
          || *(float *)((char *)&g_144AFA9AC + v62) < 1.0 )
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
                v76 = *(int *)((char *)&g_144AFA9A0 + v62);
                if ( !(_DWORD)v76 )
                {
                  *(unsigned int *)((char *)&g_144AFA9A4 + v62) = v68;
LABEL_65:
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * *(unsigned int *)((char *)&g_144AFA9A0 + v62)
                                                           + 18601935]
                                  + v62) = *v67;
                  *(unsigned int *)((char *)&dword_140404A6C[3
                                                           * (*(unsigned int *)((char *)&g_144AFA9A0 + v62))++
                                                           + 18601936]
                                  + v62) = v72;
                  goto LABEL_66;
                }
                v88 = 0;
                v89 = -1;
                if ( (int)v76 > 0 )
                {
                  v90 = (unsigned int)v76;
                  v91 = (char *)&g_144AFA9A8 + v62;
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
                    *(unsigned int *)((char *)&g_144AFA9A4 + v98) = v68;
                    v99 = *v67;
                    *(unsigned int *)((char *)&g_144AFA9AC + v98) = v72;
                    *(unsigned int *)((char *)&g_144AFA9A8 + v98) = v99;
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
    v77 = &g_144AFC5C4;
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

//----- (000000014010AF90) ----------------------------------------------------
void            sub_14010AF90(int a1)
{
  int v1;
  unsigned int *v2;
  __int64 v3;
  unsigned int *v4;
  unsigned int *v5;
  int v6;
  int v7;
  unsigned int v8;
  double v9;
  double v10;
  float v11;
  __m128d v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  double v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  unsigned int v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  unsigned int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  unsigned int v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  unsigned int v63;
  float v64;
  double v65;
  double v66;
  __m128 v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
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
  double v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
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
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010AF90[384];
#define v129 (*(float (*))(void *)(sr_frame_14010AF90 + 0)) /* [rsp+20h] */
#define v130 (*(float (*))(void *)(sr_frame_14010AF90 + 4)) /* [rsp+24h] */
#define v131 (*(float (*))(void *)(sr_frame_14010AF90 + 8)) /* [rsp+28h] */
#define v132 (*(float (*))(void *)(sr_frame_14010AF90 + 12)) /* [rsp+2Ch] */
#define v133 (*(float (*))(void *)(sr_frame_14010AF90 + 16)) /* [rsp+30h] */
#define v134 (*(float (*))(void *)(sr_frame_14010AF90 + 20)) /* [rsp+34h] */
#define v135 (*(__m128d (*))(void *)(sr_frame_14010AF90 + 32)) /* [rsp+40h] */
#define v136 (*(double (*))(void *)(sr_frame_14010AF90 + 64)) /* [rsp+60h] */
#define v137 (*(double (*))(void *)(sr_frame_14010AF90 + 72)) /* [rsp+68h] */
#define v138 (*(__m128d (*))(void *)(sr_frame_14010AF90 + 80)) /* [rsp+70h] */
#define v139 (*(float (*)[12])(void *)(sr_frame_14010AF90 + 96)) /* [rsp+80h] */
#define v140 (*(float (*))(void *)(sr_frame_14010AF90 + 352)) /* [rsp+180h] */
#define v141 (*(float (*))(void *)(sr_frame_14010AF90 + 360)) /* [rsp+188h] */
#define v142 (*(float (*))(void *)(sr_frame_14010AF90 + 368)) /* [rsp+190h] */
#define v143 (*(float (*))(void *)(sr_frame_14010AF90 + 376)) /* [rsp+198h] */

  v1 = 0;
  v2 = &g_18329E330;
  do
  {
    if ( *(v2 - 10) && *v2 == a1 && !v2[1] )
      v1 = 1;
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&g_18399DB30 );
  v3 = 5210LL * a1;
  if ( (int)dword_140404A6C[v3 + 129716712] <= 0 || dword_140404A6C[v3 + 129716717] )
  {
    v1 = 0;
    v4 = &dword_140404A6C[v3 + 129720369];
    v5 = &dword_140404A6C[v3 + 129720369];
    v6 = dword_140404A6C[v3 + 129720369];
  }
  else
  {
    v4 = &dword_140404A6C[v3 + 129720369];
    v5 = &dword_140404A6C[v3 + 129720369];
    v6 = dword_140404A6C[v3 + 129720369];
    if ( v1 )
    {
      if ( v6 > 1990 )
      {
        v7 = 2000;
        *v4 = 2000;
      }
      else
      {
        v7 = v6 + 10;
        *v4 = v6 + 10;
      }
      goto LABEL_17;
    }
  }
  v7 = v6 - 10;
  if ( v6 < 10 )
    v7 = 0;
  *v5 = v7;
LABEL_17:
  *(float *)&v8 = (float)((float)v7 + (float)v7) * 0.0008726646259972221 + *(float *)&dword_140404A6C[v3 + 129720391];
  v9 = *(float *)&v8;
  dword_140404A6C[v3 + 129720391] = v8;
  *(float *)&dword_140404A6C[v3 + 129720434] = *(float *)&v8
                                             - (float)((float)((float)(int)*v4 * 0.125)
                                                     + (float)((float)(int)*v4 * 0.125))
                                             * 0.0008726646259972221;
  if ( *(float *)&v8 <= 3.14159265359 )
  {
    if ( v9 >= -3.14159265359 )
      goto LABEL_22;
    v10 = v9 + 6.28318530718;
  }
  else
  {
    v10 = v9 - 6.28318530718;
  }
  *(float *)&dword_140404A6C[v3 + 129720391] = v10;
LABEL_22:
  sub_14007AE70(
    v139,
    (float *)&dword_140404A6C[47 * dword_140404A6C[v3 + 129721807] + 18215724],
    (float *)&dword_140404A6C[47 * dword_140404A6C[v3 + 129716719] + 18215724]);
  sub_14010E370((float *)&v135, v139);
  v11 = *((float *)&SR_VEC_LANES(128, v135, f64)[1] + 1);
  if ( *((float *)&SR_VEC_LANES(128, v135, f64)[1] + 1) < 0.0 )
  {
    v12 = (__m128d)_mm_xor_ps((__m128)v135, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v11 = SR_VEC_READ_LANES(128, _mm_shuffle_ps((__m128)v12, (__m128)v12, 255), f32)[0];
    v135 = v12;
  }
  v13 = -*(float *)SR_VEC_LANES(128, v135, f64);
  v14 = -*((float *)SR_VEC_LANES(128, v135, f64) + 1);
  v15 = -*(float *)&SR_VEC_LANES(128, v135, f64)[1];
  v16 = fsqrt((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15));
  if ( v16 == 0.0 )
  {
    v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v17 = v13 * (float)(1.0 / v16);
    v18 = v14 * (float)(1.0 / v16);
    v19 = v15 * (float)(1.0 / v16);
  }
  v21 = acos(fminf(fmaxf(v11, -1.0), 1.0));
  v22 = 47LL * (int)dword_140404A6C[v3 + 129721807];
  v23 = v21 + v21;
  v24 = v18 * v23;
  v25 = v17 * v23;
  v26 = 18LL * (int)dword_140404A6C[v3 + 129721808];
  v27 = v19 * v23;
  v28 = v24 * *(float *)&dword_140404A6C[v22 + 18215728];
  *(float *)&v21 = v25 * *(float *)&dword_140404A6C[v22 + 18215725];
  *(float *)&v29 = (float)((float)(v24 * *(float *)&dword_140404A6C[v22 + 18215727])
                         + (float)(v25 * *(float *)&dword_140404A6C[v22 + 18215724]))
                 + (float)(v27 * *(float *)&dword_140404A6C[v22 + 18215730]);
  v30 = v27 * *(float *)&dword_140404A6C[v22 + 18215731];
  v31 = (float)(v24 * *(float *)&dword_140404A6C[v22 + 18215729])
      + (float)(v25 * *(float *)&dword_140404A6C[v22 + 18215726]);
  v32 = v27 * *(float *)&dword_140404A6C[v22 + 18215732];
  dword_140404A6C[2 * v26 + 485543033] = v29;
  *(float *)&dword_140404A6C[2 * v26 + 485543035] = v31 + v32;
  *(float *)&dword_140404A6C[2 * v26 + 485543034] = (float)(v28 + *(float *)&v21) + v30;
  if ( v1 && (int)dword_140404A6C[v3 + 129716712] > 0 )
  {
    v33 = 47LL * (int)dword_140404A6C[v3 + 129716719];
    v34 = *(float *)&dword_140404A6C[v33 + 18215718];
    v35 = *(float *)&dword_140404A6C[v33 + 18215719];
    v36 = *(float *)&dword_140404A6C[v33 + 18215720];
    v37 = (float)(v35 * v35) + (float)(v34 * v34);
    v38 = fsqrt((float)(v36 * v36) + v37);
    if ( v38 == 0.0 )
    {
      v39 = 0.0;
      v40 = 0.0;
      v41 = 0.0;
    }
    else
    {
      v39 = (float)(1.0 / v38) * v34;
      v40 = (float)(1.0 / v38) * v35;
      v41 = (float)(1.0 / v38) * v36;
    }
    v42 = (float)((float)((float)(v36 + v36) * v36) + v37) + v37;
    v43 = (float)((float)((float)((float)(v40 * *(float *)&dword_140404A6C[v33 + 18215725])
                                + (float)(v39 * *(float *)&dword_140404A6C[v33 + 18215724]))
                        + (float)(v41 * *(float *)&dword_140404A6C[v33 + 18215726]))
                * v42)
        * -0.00075000001;
    *(float *)&v44 = (float)(*(float *)&dword_140404A6C[v3 + 129716727] * v43) + v35;
    *(float *)&dword_140404A6C[v33 + 18215718] = (float)(*(float *)&dword_140404A6C[v3 + 129716726] * v43) + v34;
    v45 = *(float *)&dword_140404A6C[v3 + 129716728];
    dword_140404A6C[v33 + 18215719] = v44;
    *(float *)&dword_140404A6C[v33 + 18215720] = (float)(v45 * v43) + v36;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    if ( v38 == 0.0 )
    {
      v46 = 0.0;
      v47 = 0.0;
      v48 = 0.0;
    }
    else
    {
      v46 = v34 * (float)(1.0 / v38);
      v47 = v35 * (float)(1.0 / v38);
      v48 = v36 * (float)(1.0 / v38);
    }
    v49 = (float)((float)((float)((float)(v47 * *(float *)&dword_140404A6C[v33 + 18215728])
                                + (float)(v46 * *(float *)&dword_140404A6C[v33 + 18215727]))
                        + (float)(v48 * *(float *)&dword_140404A6C[v33 + 18215729]))
                * v42)
        * -0.0015;
    v50 = v49 * *(float *)&dword_140404A6C[v3 + 129716730];
    *(float *)&v51 = (float)(v49 * *(float *)&dword_140404A6C[v3 + 129716729])
                   + *(float *)&dword_140404A6C[v33 + 18215718];
    v52 = v49 * *(float *)&dword_140404A6C[v3 + 129716731];
    dword_140404A6C[v33 + 18215718] = v51;
    *(float *)&dword_140404A6C[v33 + 18215719] = v50 + *(float *)&dword_140404A6C[v33 + 18215719];
    v53 = v52 + *(float *)&dword_140404A6C[v33 + 18215720];
    *(float *)&dword_140404A6C[v33 + 18215720] = v53;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    if ( v38 == 0.0 )
    {
      v54 = 0.0;
      v55 = 0.0;
      v56 = 0.0;
    }
    else
    {
      v54 = v34 * (float)(1.0 / v38);
      v55 = v35 * (float)(1.0 / v38);
      v56 = v36 * (float)(1.0 / v38);
    }
    v57 = 16;
    v58 = *(float *)&dword_140404A6C[v3 + 129716733];
    v59 = (float)((float)(v55 * *(float *)&dword_140404A6C[v33 + 18215731])
                + (float)(v54 * *(float *)&dword_140404A6C[v33 + 18215730]))
        + (float)(v56 * *(float *)&dword_140404A6C[v33 + 18215732]);
    v60 = 0.0;
    v130 = 0.0;
    v61 = (float)(v59 * v42) * -0.0001875;
    *(float *)&dword_140404A6C[v33 + 18215718] = (float)(*(float *)&dword_140404A6C[v3 + 129716732] * v61)
                                               + *(float *)&dword_140404A6C[v33 + 18215718];
    v62 = *(float *)&dword_140404A6C[v3 + 129716734] * v61;
    *(float *)&dword_140404A6C[v33 + 18215719] = (float)(v58 * v61) + *(float *)&dword_140404A6C[v33 + 18215719];
    *(float *)&v63 = v62 + v53;
    v64 = *(float *)&dword_140404A6C[v3 + 129720166] * 0.0044444446;
    dword_140404A6C[v33 + 18215720] = v63;
    dword_140404A6C[v33 + 18215733] = dword_140404A6C[v33 + 18215733];
    dword_140404A6C[v33 + 18215734] = dword_140404A6C[v33 + 18215734];
    dword_140404A6C[v33 + 18215735] = dword_140404A6C[v33 + 18215735];
    v140 = *(float *)&dword_140404A6C[v22 + 18215718];
    v141 = *(float *)&dword_140404A6C[v22 + 18215719];
    v142 = *(float *)&dword_140404A6C[v22 + 18215720];
    *(float *)&dword_140404A6C[v22 + 18215733] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215727])
                                               + *(float *)&dword_140404A6C[v22 + 18215733];
    v65 = (float)(*(float *)&dword_140404A6C[v3 + 129720167] * 0.0078125);
    *(float *)&dword_140404A6C[v22 + 18215734] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215728])
                                               + *(float *)&dword_140404A6C[v22 + 18215734];
    *(float *)&dword_140404A6C[v22 + 18215735] = (float)(v64 * *(float *)&dword_140404A6C[v33 + 18215729])
                                               + *(float *)&dword_140404A6C[v22 + 18215735];
    v66 = 3.141592653589793;
    v136 = v65 * 3.141592653589793;
    *(float *)&v65 = (float)(*(float *)&dword_140404A6C[v3 + 129720168] * 0.03125) * 3.141592653589793
                   + 0.1472621556370313;
    v131 = *(float *)&v65;
    v137 = (float)(*(float *)&dword_140404A6C[v3 + 129720165] * 0.015625) * 3.141592653589793;
    do
    {
      v67 = _mm_castpd_ps(sub_1401F8A50(v60, v20, v66));
      v68 = *(float *)&dword_140404A6C[v22 + 18215732];
      v69 = *(float *)&dword_140404A6C[v22 + 18215724];
      v70 = *(float *)&dword_140404A6C[v22 + 18215730];
      v71 = *(float *)&dword_140404A6C[v22 + 18215725];
      v72 = *(float *)&dword_140404A6C[v22 + 18215731];
      v73 = *(float *)&dword_140404A6C[v22 + 18215726];
      v135 = (__m128d)v67;
      v138 = _mm_shuffle_pd((__m128d)v67, (__m128d)v67, 1);
      v74 = SR_VEC_LANES(128, v138, f64)[0] * -4.0;
      v75 = *(double *)SR_VEC_LANES(128, v67, u64) * -4.0;
      v76 = v75;
      v77 = (float)(v75 * v70) + (float)(v74 * v69);
      v78 = (float)(v75 * v68) + (float)(v74 * v73);
      v79 = (float)(v76 * v72) + (float)(v74 * v71);
      v80 = *(double *)SR_VEC_LANES(128, v67, u64) * -2.932153224945068;
      v81 = SR_VEC_LANES(128, v138, f64)[0] * -2.932153224945068;
      v82 = v80;
      v83 = (float)(v80 * v70) + (float)(v81 * v69);
      v84 = (float)(v80 * v68) + (float)(v81 * v73);
      v85 = (float)(v82 * v72) + (float)(v81 * v71);
      v86 = fsqrt((float)((float)(v85 * v85) + (float)(v83 * v83)) + (float)(v84 * v84));
      if ( v86 == 0.0 )
      {
        v87 = 0.0;
        v88 = 0.0;
        v89 = 0.0;
      }
      else
      {
        v87 = v83 * (float)(1.0 / v86);
        v88 = v85 * (float)(1.0 / v86);
        v89 = v84 * (float)(1.0 / v86);
      }
      v90 = *(float *)&dword_140404A6C[v22 + 18215738];
      v91 = *(float *)&dword_140404A6C[v22 + 18215737];
      v92 = *(float *)&dword_140404A6C[v22 + 18215736];
      v93 = (float)((float)(v79 * v90) - (float)(v78 * v91)) + v140;
      v94 = (float)((float)(v78 * v92) - (float)(v77 * v90)) + v141;
      v95 = (float)((float)(v77 * v91) - (float)(v79 * v92)) + v142;
      v96 = SR_VEC_LANES(128, v138, f64)[0] * v136 + v131;
      v97 = sin((float)(v96 - SR_VEC_LANES(128, v135, f64)[0] * v137));
      v98 = *(float *)&dword_140404A6C[v22 + 18215729];
      v99 = v97 * -4.0;
      v143 = *(float *)&dword_140404A6C[v22 + 18215727];
      v129 = *(float *)&dword_140404A6C[v22 + 18215728];
      v132 = (float)(v99 * v143) + v93;
      v133 = (float)(v99 * v129) + v94;
      v134 = (float)(v99 * v98) + v95;
      v100 = fsqrt((float)((float)(v133 * v133) + (float)(v132 * v132)) + (float)(v134 * v134));
      if ( v100 == 0.0 )
      {
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
      }
      else
      {
        v101 = (float)(1.0 / v100) * v132;
        v102 = (float)(1.0 / v100) * v133;
        v103 = (float)(1.0 / v100) * v134;
      }
      v104 = (float)((float)((float)((float)((float)(v101 * v143) + (float)(v129 * v102)) + (float)(v98 * v103))
                           - (float)((float)((float)((float)(v140 * v87) + (float)(v141 * v88)) + (float)(v142 * v89))
                                   * 0.03125))
                   * (float)((float)((float)(v133 * v133) + (float)(v132 * v132)) + (float)(v134 * v134)))
           * -0.0024414062;
      v105 = v98 * v104;
      *(float *)&dword_140404A6C[v22 + 18215718] = (float)(v143 * v104) + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = (float)(v129 * v104) + *(float *)&dword_140404A6C[v22 + 18215719];
      *(float *)&dword_140404A6C[v22 + 18215720] = v105 + *(float *)&dword_140404A6C[v22 + 18215720];
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)((float)((float)(v129 * v104) * v78) - (float)(v105 * v79))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&dword_140404A6C[v22 + 18215734] = (float)((float)(v105 * v77) - (float)((float)(v143 * v104) * v78))
                                                 + *(float *)&dword_140404A6C[v22 + 18215734];
      v106 = (float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95);
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)((float)((float)(v143 * v104) * v79)
                                                         - (float)((float)(v129 * v104) * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      v107 = fsqrt(v106);
      if ( v107 == 0.0 )
      {
        v109 = 0.0;
        v108 = 0.0;
        v110 = 0.0;
      }
      else
      {
        v108 = v94 * (float)(1.0 / v107);
        v109 = (float)(1.0 / v107) * v93;
        v110 = v95 * (float)(1.0 / v107);
      }
      v111 = *(float *)&dword_140404A6C[v3 + 129716726] * v109;
      v112 = *(float *)&dword_140404A6C[v3 + 129716727];
      v113 = (float)((float)((float)(v111 + (float)(v108 * v112))
                           + (float)(*(float *)&dword_140404A6C[v3 + 129716728] * v110))
                   * v106)
           * -0.00024414062;
      v114 = *(float *)&dword_140404A6C[v3 + 129716726] * v113;
      v115 = *(float *)&dword_140404A6C[v3 + 129716728] * v113;
      v116 = v112 * v113;
      *(float *)&dword_140404A6C[v22 + 18215718] = v114 + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = v116 + *(float *)&dword_140404A6C[v22 + 18215719];
      *(float *)&dword_140404A6C[v22 + 18215720] = v115 + *(float *)&dword_140404A6C[v22 + 18215720];
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)((float)(v116 * v78) - (float)(v115 * v79))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&dword_140404A6C[v22 + 18215734] = (float)((float)(v115 * v77) - (float)(v114 * v78))
                                                 + *(float *)&dword_140404A6C[v22 + 18215734];
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)((float)(v114 * v79) - (float)(v116 * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      if ( v107 == 0.0 )
      {
        v118 = 0.0;
        v117 = 0.0;
        v119 = 0.0;
      }
      else
      {
        v117 = v94 * (float)(1.0 / v107);
        v118 = (float)(1.0 / v107) * v93;
        v119 = v95 * (float)(1.0 / v107);
      }
      v120 = *(float *)&dword_140404A6C[v3 + 129716733];
      v121 = *(float *)&dword_140404A6C[v3 + 129716732];
      *(_QWORD *)&v66 = dword_140404A6C[v3 + 129716734];
      v122 = (float)((float)((float)((float)(v117 * v120) + (float)(v118 * v121))
                           + (float)(v119 * *(float *)&dword_140404A6C[v3 + 129716734]))
                   * v106)
           * -0.00018310547;
      v123 = v121 * v122;
      *(float *)&v66 = *(float *)&v66 * v122;
      v124 = v120 * v122;
      *(float *)&dword_140404A6C[v22 + 18215718] = v123 + *(float *)&dword_140404A6C[v22 + 18215718];
      *(float *)&dword_140404A6C[v22 + 18215719] = v124 + *(float *)&dword_140404A6C[v22 + 18215719];
      v125 = v78 * v124;
      v126 = v78 * v123;
      *(float *)&dword_140404A6C[v22 + 18215720] = *(float *)&v66 + *(float *)&dword_140404A6C[v22 + 18215720];
      v127 = v79;
      v128 = v79 * v123;
      v60 = v130 + 0.39269909;
      v130 = v130 + 0.39269909;
      *(float *)&dword_140404A6C[v22 + 18215733] = (float)(v125 - (float)(v127 * *(float *)&v66))
                                                 + *(float *)&dword_140404A6C[v22 + 18215733];
      *(float *)&v66 = (float)((float)(*(float *)&v66 * v77) - v126) + *(float *)&dword_140404A6C[v22 + 18215734];
      dword_140404A6C[v22 + 18215734] = LODWORD(v66);
      *(float *)&dword_140404A6C[v22 + 18215735] = (float)(v128 - (float)(v124 * v77))
                                                 + *(float *)&dword_140404A6C[v22 + 18215735];
      --v57;
    }
    while ( v57 );
  }
}
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
  return (unsigned int *)(void *)physics_apply_point_velocity(a1, a2, a3);
}

//----- (000000014012B170) ----------------------------------------------------
unsigned int *           sub_14012B170(float *a1, int a2, float *a3)
{
  return (unsigned int *)(void *)physics_point_velocity(a1, a2, a3);
}

