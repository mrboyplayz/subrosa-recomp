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
  extern void physics_integrate_rotation(float rotation[9], const float angular_momentum[3],
                                         float angular_velocity[3], const float inverse_inertia[3]);
  /* src/engine/physics_rotation.c */
  physics_integrate_rotation((float *)a1, a2, a3, a4);
}
