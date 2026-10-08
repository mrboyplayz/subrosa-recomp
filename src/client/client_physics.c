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
                      * *(float *)&dword_140404A6C[5]))
      * v17;
  if ( v14 <= 7 )
    v21 = 0.0;
  v22 = sub_14023F704(v12, -SR_VEC_LANES(128, v10, f32)[0]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v12 * v12);
  v23 = sub_14023EDE4(v13, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v10)), f64)[0]);
  v24 = (int)((v23 + 1.570796326794897) * (double)(int)dword_140404A6C[175561671] * 0.3183098861837907);
  if ( v24 < 0 )
    v24 = 0;
  if ( (signed int)(dword_140404A6C[175561671] - 1) < v24 )
    v24 = dword_140404A6C[175561671] - 1;
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
  _UNKNOWN **result; // rax
  float *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // edx
  float v13; // xmm11_4
  float *v14; // rdx
  float v15; // xmm12_4
  __int64 v16; // r8
  float v17; // xmm13_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __int64 v27; // rcx
  float v28; // xmm5_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (float *)&dword_140404A6C[280651442];
  v3 = 256;
  v4 = a1;
  do
  {
    if ( !*((_DWORD *)v2 - 139) )
      goto LABEL_21;
    v5 = 1760 * v4;
    v6 = *(v2 - 1) - *(float *)&dword_140404A6C[1760 * v4 + 278845917];
    v7 = *(v2 - 2) - *(float *)&dword_140404A6C[1760 * v4 + 278845916];
    v8 = (float)((float)(v6 * v6) + (float)(v7 * v7))
       + (float)((float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918])
               * (float)(*v2 - *(float *)&dword_140404A6C[1760 * v4 + 278845918]));
    if ( v8 >= 16.0 )
    {
      if ( v8 >= 64.0 )
        goto LABEL_21;
    }
    else
    {
      v9 = (int)dword_140404A6C[v5 + 278845901];
      *(v2 - 124) = 0.0;
      v10 = v9;
      if ( (_DWORD)v9 != -1 )
      {
        v11 = *((int *)v2 - 137);
        if ( (_DWORD)v11 != -1
          && (_DWORD)v9 != (_DWORD)v11
          && dword_140404A6C[3597 * v9 + 71856286] == dword_140404A6C[3597 * v11 + 71856286] )
        {
          sub_14011B7F0(v9, 100);
          v10 = dword_140404A6C[v5 + 278845901];
        }
      }
      if ( v10 != -1 )
      {
        v12 = *((_DWORD *)v2 - 137);
        if ( v12 != -1 )
          sub_140116D80(v10, v12, 100);
      }
    }
    v13 = *(float *)&dword_140404A6C[v5 + 278845916];
    v14 = v2 + 30;
    v15 = *(float *)&dword_140404A6C[v5 + 278845917];
    v16 = 8;
    v17 = *(float *)&dword_140404A6C[v5 + 278845918];
    do
    {
      v18 = 47LL * *((int *)v14 - 33);
      v19 = *(float *)&dword_140404A6C[v18 + 18215715] - v13;
      v20 = *(float *)&dword_140404A6C[v18 + 18215716] - v15;
      v21 = *(float *)&dword_140404A6C[v18 + 18215717] - v17;
      v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v22 == 0.0 )
      {
        v23 = 0.0;
        v24 = 0.0;
        v25 = 0.0;
      }
      else
      {
        v23 = (float)(1.0 / v22) * v19;
        v24 = (float)(1.0 / v22) * v20;
        v25 = (float)(1.0 / v22) * v21;
      }
      result = (_UNKNOWN **)*((int *)v14 + 45);
      v26 = (float)(fmaxf(8.0 / (float)(*v14 + 8.0), 0.125) * (float)(8.0 - v22))
          * (float)((float)(8.0 - v22) * 0.013183594);
      *(float *)&dword_140404A6C[v18 + 18215718] = (float)(v23 * v26) + *(float *)&dword_140404A6C[v18 + 18215718];
      *(float *)&dword_140404A6C[v18 + 18215719] = (float)(v24 * v26) + *(float *)&dword_140404A6C[v18 + 18215719];
      *(float *)&dword_140404A6C[v18 + 18215720] = (float)(v25 * v26) + *(float *)&dword_140404A6C[v18 + 18215720];
      v27 = 47LL * (_QWORD)result;
      v28 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215715] - v13;
      v29 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215716] - v15;
      v30 = *(float *)&dword_140404A6C[47 * (_QWORD)result + 18215717] - v17;
      v31 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30));
      if ( v31 == 0.0 )
      {
        v32 = 0.0;
        v33 = 0.0;
        v34 = 0.0;
      }
      else
      {
        v32 = (float)(1.0 / v31) * v28;
        v33 = (float)(1.0 / v31) * v29;
        v34 = (float)(1.0 / v31) * v30;
      }
      v35 = 8.0 - v31;
      v36 = v14[78] + 8.0;
      v14 += 156;
      v37 = (float)(fmaxf(8.0 / v36, 0.125) * v35) * (float)(v35 * 0.013183594);
      *(float *)&dword_140404A6C[v27 + 18215718] = (float)(v32 * v37) + *(float *)&dword_140404A6C[v27 + 18215718];
      *(float *)&dword_140404A6C[v27 + 18215719] = (float)(v33 * v37) + *(float *)&dword_140404A6C[v27 + 18215719];
      *(float *)&dword_140404A6C[v27 + 18215720] = (float)(v34 * v37) + *(float *)&dword_140404A6C[v27 + 18215720];
      --v16;
    }
    while ( v16 );
LABEL_21:
    v2 += 7166;
    --v3;
  }
  while ( v3 );
  return result;
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
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm9_4
  float v17; // xmm12_4
  unsigned int v18; // xmm1_4
  signed int v19; // ecx
  unsigned int v20; // r9d
  float v21; // xmm12_4
  float v22; // xmm10_4
  unsigned int v23; // xmm0_4
  float v24; // xmm11_4
  unsigned int v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  float v31; // xmm10_4
  float v32; // xmm11_4
  unsigned int v33; // edx
  float v34; // xmm7_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400CF670[32];
#define v40 (*(float (*))(void *)(sr_frame_1400CF670 + 0)) /* [rsp+20h] */
#define v41 (*(float (*))(void *)(sr_frame_1400CF670 + 4)) /* [rsp+24h] */
#define v42 (*(float (*))(void *)(sr_frame_1400CF670 + 8)) /* [rsp+28h] */
#define v43 (*(float (*)[4])(void *)(sr_frame_1400CF670 + 16)) /* [rsp+30h] */

  v2 = 1760LL * a1;
  result = dword_140404A6C[v2 + 278845972];
  v4 = (int)dword_140404A6C[v2 + 278845898];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278845972] = result;
  }
  v5 = (int)dword_140404A6C[v2 + 278845902];
  if ( (_DWORD)v5 != -1 && dword_140404A6C[283831448] == 2 )
  {
    v6 = (int)dword_140404A6C[v2 + 278845915];
    result = dword_140404A6C[v2 + 278845977] & 1;
    if ( !(_DWORD)result )
      dword_140404A6C[v2 + 278845976] = 0;
    if ( ((_DWORD)v4 == 11 || (_DWORD)v4 == 5) && !(_DWORD)result )
    {
      dword_140404A6C[v2 + 278845972] = 0;
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
    }
    else
    {
      v7 = 6;
      if ( (_DWORD)v4 != 5 )
        v7 = 2;
      if ( (_DWORD)result )
      {
        result = dword_140404A6C[v2 + 278845976];
        if ( (int)result < v7 || (_DWORD)v4 == 11 || (_DWORD)v4 == 5 )
        {
          result = (unsigned int)(result + 1);
          dword_140404A6C[v2 + 278845976] = result;
        }
      }
    }
    if ( !dword_140404A6C[v2 + 278845974] && (int)dword_140404A6C[v2 + 278845906] > 0 )
    {
      result = (int)dword_140404A6C[v2 + 278845907];
      if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
      {
        dword_140404A6C[v2 + 278845974] = 1;
        result = (int)dword_140404A6C[v2 + 278845907];
        --dword_140404A6C[1760 * result + 278845974];
      }
    }
    if ( (int)dword_140404A6C[v2 + 278845972] <= 0
      && dword_140404A6C[v2 + 278845976] == v7
      && (int)dword_140404A6C[v2 + 278845974] > 0 )
    {
      v8 = v5;
      v9 = 47 * v6;
      v10 = 1268 * v4;
      v11 = *(float *)&dword_140404A6C[47 * v6 + 18215718];
      v12 = *(float *)&dword_140404A6C[47 * v6 + 18215719];
      v13 = *(float *)&dword_140404A6C[47 * v6 + 18215720];
      v14 = *(float *)&dword_140404A6C[47 * v6 + 18215731];
      v15 = *(float *)&dword_140404A6C[47 * v6 + 18215732];
      v16 = -*(float *)&dword_140404A6C[1268 * v4 + 278521295];
      v17 = *(float *)&dword_140404A6C[47 * v6 + 18215730];
      sub_1400A56B0(&v40, *(float *)&dword_140404A6C[1268 * v4 + 278521296], 0.0);
      v18 = dword_140404A6C[v9 + 18215716];
      v19 = dword_140404A6C[v10 + 278521292];
      v20 = dword_140404A6C[7166 * v8 + 280651305];
      v21 = (float)((float)(v17 * v16) + v11) + v40;
      v40 = *(float *)&dword_140404A6C[v9 + 18215715];
      v22 = (float)((float)(v14 * v16) + v12) + v41;
      v23 = dword_140404A6C[v9 + 18215717];
      v24 = (float)((float)(v15 * v16) + v13) + v42;
      v43[0] = v21;
      v41 = *(float *)&v18;
      v43[1] = v22;
      v42 = *(float *)&v23;
      v43[2] = v24;
      sub_14004E8A0(v19, (unsigned int *)&v40, v43, v20);
      *(float *)&v25 = *(float *)&dword_140404A6C[v9 + 18215715] - *(float *)&dword_140404A6C[v9 + 18215718];
      v26 = *(float *)&dword_140404A6C[v9 + 18215716] - *(float *)&dword_140404A6C[v9 + 18215719];
      v27 = *(float *)&dword_140404A6C[v9 + 18215717] - *(float *)&dword_140404A6C[v9 + 18215720];
      v40 = *(float *)&v25;
      v41 = v26;
      v42 = v27;
      if ( dword_140404A6C[456202453] )
      {
        v28 = dword_140404A6C[283831474];
        v29 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v29) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v29) = v28;
        v30 = dword_140404A6C[v10 + 278521292];
        *(unsigned int *)((char *)&dword_140404A6C[297756287] + v29) = v25;
        *(float *)((char *)&dword_140404A6C[297756288] + v29) = v26;
        *(float *)((char *)&dword_140404A6C[297756289] + v29) = v27;
        *(float *)((char *)&dword_140404A6C[297756290] + v29) = v21;
        *(float *)((char *)&dword_140404A6C[297756291] + v29) = v22;
        *(float *)((char *)&dword_140404A6C[297756292] + v29) = v24;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v29) = v30;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v29) = a1;
      }
      sub_1400A56B0(
        &v40,
        *(float *)&dword_140404A6C[v10 + 278521296] + *(float *)&dword_140404A6C[v10 + 278521296],
        0.0);
      v31 = v22 + v41;
      v32 = v24 + v42;
      v33 = dword_140404A6C[v2 + 278845974];
      v34 = v40 + v21;
      v35 = *(float *)&dword_140404A6C[6 * dword_140404A6C[v10 + 278521292] + 437914197];
      dword_140404A6C[v2 + 278845972] = dword_140404A6C[v10 + 278521291];
      result = v33 - 1;
      dword_140404A6C[v2 + 278845974] = result;
      v36 = (float)(v35 + v35) / *(float *)&dword_140404A6C[v2 + 278845899];
      *(float *)&dword_140404A6C[v9 + 18215718] = (float)((float)-v36 * v34) + *(float *)&dword_140404A6C[v9 + 18215718];
      *(float *)&dword_140404A6C[v9 + 18215719] = (float)((float)-v36 * v31) + *(float *)&dword_140404A6C[v9 + 18215719];
      *(float *)&dword_140404A6C[v9 + 18215720] = (float)((float)-v36 * v32) + *(float *)&dword_140404A6C[v9 + 18215720];
      v37 = (float)(*(float *)&dword_140404A6C[v9 + 18215727] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215730] * 0.625);
      v38 = (float)(*(float *)&dword_140404A6C[v9 + 18215728] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215731] * 0.625);
      v39 = (float)(*(float *)&dword_140404A6C[v9 + 18215729] * 0.03125)
          - (float)(*(float *)&dword_140404A6C[v9 + 18215732] * 0.625);
      *(float *)&dword_140404A6C[v9 + 18215733] = (float)((float)((float)(v38 * v32) - (float)(v39 * v31)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215733];
      *(float *)&dword_140404A6C[v9 + 18215734] = (float)((float)((float)(v34 * v39) - (float)(v37 * v32)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215734];
      *(float *)&dword_140404A6C[v9 + 18215735] = (float)((float)((float)(v37 * v31) - (float)(v34 * v38)) * v36)
                                                + *(float *)&dword_140404A6C[v9 + 18215735];
      if ( v33 == 1 && (int)dword_140404A6C[v2 + 278845906] > 0 )
      {
        result = (int)dword_140404A6C[v2 + 278845907];
        if ( (int)dword_140404A6C[1760 * result + 278845974] > 0 )
        {
          dword_140404A6C[v2 + 278845974] = 1;
          result = (int)dword_140404A6C[v2 + 278845907];
          --dword_140404A6C[1760 * result + 278845974];
        }
      }
    }
  }
  return result;
}
#undef v40
#undef v41
#undef v42
#undef v43

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
  int v1; // edi
  unsigned int *v2; // rax
  __int64 v3; // rsi
  unsigned int *v4; // rcx
  unsigned int *v5; // r8
  int v6; // edx
  int v7; // eax
  unsigned int v8; // xmm1_4
  double v9; // xmm3_8
  double v10; // xmm3_8
  float v11; // xmm3_4
  __m128d v12; // xmm1
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm4_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  __int64 v20; // rdx
  double v21; // xmm0_8
  __int64 v22; // rbx
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  __int64 v26; // rcx
  float v27; // xmm8_4
  float v28; // xmm3_4
  unsigned int v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm8_4
  __int64 v33; // rcx
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm2_4
  unsigned int v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  unsigned int v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  __int64 v57; // rdi
  float v58; // xmm1_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  unsigned int v63; // xmm0_4
  float v64; // xmm2_4
  double v65; // xmm0_8
  double v66; // xmm2_8
  __m128 v67; // xmm0
  float v68; // xmm3_4
  float v69; // xmm6_4
  float v70; // xmm5_4
  float v71; // xmm7_4
  float v72; // xmm4_4
  float v73; // xmm8_4
  float v74; // xmm2_4
  float v75; // xmm11_4
  float v76; // xmm10_4
  float v77; // xmm15_4
  float v78; // xmm11_4
  float v79; // xmm10_4
  float v80; // xmm12_4
  float v81; // xmm2_4
  float v82; // xmm14_4
  float v83; // xmm13_4
  float v84; // xmm12_4
  float v85; // xmm14_4
  float v86; // xmm3_4
  float v87; // xmm13_4
  float v88; // xmm14_4
  float v89; // xmm12_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm3_4
  float v93; // xmm8_4
  float v94; // xmm6_4
  float v95; // xmm7_4
  float v96; // xmm0_4
  double v97; // xmm0_8
  float v98; // xmm4_4
  float v99; // xmm2_4
  float v100; // xmm0_4
  float v101; // xmm3_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm3_4
  float v105; // xmm4_4
  float v106; // xmm12_4
  float v107; // xmm13_4
  float v108; // xmm2_4
  float v109; // xmm3_4
  float v110; // xmm4_4
  float v111; // xmm1_4
  float v112; // xmm3_4
  float v113; // xmm1_4
  float v114; // xmm4_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  float v117; // xmm6_4
  float v118; // xmm1_4
  float v119; // xmm7_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  float v122; // xmm6_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm1_4
  float v126; // xmm11_4
  float v127; // xmm0_4
  float v128; // xmm10_4
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
  v2 = &dword_140404A6C[280651313];
  do
  {
    if ( *(v2 - 10) && *v2 == a1 && !v2[1] )
      v1 = 1;
    v2 += 7166;
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[282485809] );
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

// 14010B72B: variable 'v20' is possibly undefined
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010D610) ----------------------------------------------------
void sub_14010D610()
{
  __int64 v0; // rsi
  __int64 v1; // r12
  unsigned int *v2; // rcx
  int v3; // edx
  int v4; // r8d
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r15
  float *v8; // r14
  float v9; // xmm15_4
  __int64 v10; // rcx
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 v13; // rbx
  float v14; // xmm10_4
  float v15; // xmm13_4
  float v16; // xmm9_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm1_4
  float v25; // xmm14_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  float v30; // xmm5_4
  float v31; // xmm9_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm15_4
  float v36; // xmm3_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm5_4
  float v46; // xmm10_4
  float v47; // xmm12_4
  float v48; // xmm11_4
  double v49; // xmm2_8
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  float v60; // xmm10_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010D610[336];
#define v61 (*(float (*))(void *)(sr_frame_14010D610 + 0)) /* [rsp+20h] */
#define v62 (*(float (*))(void *)(sr_frame_14010D610 + 8)) /* [rsp+28h] */
#define v63 (*(float (*))(void *)(sr_frame_14010D610 + 12)) /* [rsp+2Ch] */
#define v64 (*(float (*))(void *)(sr_frame_14010D610 + 16)) /* [rsp+30h] */
#define v65 (*(float (*))(void *)(sr_frame_14010D610 + 20)) /* [rsp+34h] */
#define v66 (*(float (*))(void *)(sr_frame_14010D610 + 24)) /* [rsp+38h] */
#define v67 (*(float (*))(void *)(sr_frame_14010D610 + 304)) /* [rsp+150h] */
#define v68 (*(float (*))(void *)(sr_frame_14010D610 + 304)) /* [rsp+150h] */
#define v69 (*(float (*))(void *)(sr_frame_14010D610 + 312)) /* [rsp+158h] */
#define v70 (*(float (*))(void *)(sr_frame_14010D610 + 312)) /* [rsp+158h] */
#define v71 (*(float (*))(void *)(sr_frame_14010D610 + 320)) /* [rsp+160h] */
#define v72 (*(float (*))(void *)(sr_frame_14010D610 + 320)) /* [rsp+160h] */
#define v73 (*(float (*))(void *)(sr_frame_14010D610 + 328)) /* [rsp+168h] */

  v0 = 0;
  v1 = 512;
  do
  {
    if ( dword_140404A6C[v0 + 129716709] )
    {
      if ( dword_140404A6C[v0 + 129716710] != 12 && (int)dword_140404A6C[v0 + 129720373] > 0 )
      {
        dword_140404A6C[v0 + 129720330] = 0;
        v2 = &dword_140404A6C[v0 + 129720397];
        v3 = 0;
        do
        {
          *(v2 - 8) = 0;
          ++v3;
          *(v2 - 1) = v2[2];
          *v2 = v2[3];
          v2[1] = v2[4];
          v2 += 43;
          v4 = dword_140404A6C[v0 + 129720373];
        }
        while ( v3 < v4 );
        v5 = 0;
        if ( v4 > 0 )
        {
          v6 = 47LL * (int)dword_140404A6C[v0 + 129716719];
          v7 = (unsigned int)v4;
          v8 = (float *)&dword_140404A6C[v6 + 18215727];
          while ( 1 )
          {
            v9 = v8[2];
            v69 = *(float *)&dword_140404A6C[v6 + 18215714];
            v71 = *(float *)&dword_140404A6C[v6 + 18215737];
            v61 = v8[1];
            v10 = v0 * 4 + 172 * v5;
            v11 = *(float *)((char *)&dword_140404A6C[129720385] + v10);
            v12 = *(float *)((char *)&dword_140404A6C[129720403] + v10)
                + *(float *)((char *)&dword_140404A6C[129720384] + v10);
            v13 = 47LL * *(int *)((char *)&dword_140404A6C[129720374] + v10);
            v14 = *(float *)&dword_140404A6C[v13 + 18215715];
            v15 = *(float *)&dword_140404A6C[v13 + 18215714];
            v16 = *(float *)&dword_140404A6C[v13 + 18215717];
            v67 = *(float *)&dword_140404A6C[v13 + 18215716];
            v17 = *(float *)((char *)&dword_140404A6C[129720383] + v10);
            v18 = *(float *)&dword_140404A6C[v6 + 18215738];
            v19 = (float)((float)(*v8 * v12) + (float)(v17 * *(float *)&dword_140404A6C[v6 + 18215724]))
                + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215730]);
            v20 = (float)((float)(v17 * *(float *)&dword_140404A6C[v6 + 18215725]) + (float)(v61 * v12))
                + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215731]);
            v21 = (float)(v17 * *(float *)&dword_140404A6C[v6 + 18215726]) + (float)(v9 * v12);
            v22 = *(float *)((char *)&dword_140404A6C[129720404] + v10);
            v23 = v21 + (float)(v11 * *(float *)&dword_140404A6C[v6 + 18215732]);
            v24 = *(float *)((char *)&dword_140404A6C[129720405] + v10);
            v25 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215715] + v19) - v14) * v22;
            v63 = v14 - *(float *)&dword_140404A6C[v6 + 18215715];
            v26 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215716] + v20) - v67) * v22;
            v27 = (float)((float)(*(float *)&dword_140404A6C[v6 + 18215717] + v23) - v16) * v22;
            v62 = v16 - *(float *)&dword_140404A6C[v6 + 18215717];
            v68 = v67 - *(float *)&dword_140404A6C[v6 + 18215716];
            v28 = *(float *)&dword_140404A6C[v6 + 18215736];
            v29 = (float)((float)((float)((float)(v18 * v20) - (float)(v71 * v23))
                                + *(float *)&dword_140404A6C[v6 + 18215718])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215718]);
            v30 = v27
                + (float)((float)((float)((float)((float)(v71 * v19) - (float)(v28 * v20))
                                        + *(float *)&dword_140404A6C[v6 + 18215720])
                                * v24)
                        + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215720]));
            v72 = (float)((float)((float)((float)(v71 * v19) - (float)(v28 * v20))
                                + *(float *)&dword_140404A6C[v6 + 18215720])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215720]);
            v31 = (float)((float)((float)((float)(v28 * v23) - (float)(v18 * v19))
                                + *(float *)&dword_140404A6C[v6 + 18215719])
                        * v24)
                + (float)((float)-v24 * *(float *)&dword_140404A6C[v13 + 18215719]);
            v32 = -(float)((float)((float)(v61 * (float)(v26 + v31)) + (float)(*v8 * (float)(v29 + v25)))
                         + (float)(v9 * v30));
            v33 = *v8 * v32;
            v34 = v61 * v32;
            v35 = (float)(v9 * v32) + v30;
            v36 = 1.0 / (float)(v69 + v15);
            v37 = v33 + (float)(v29 + v25);
            v38 = v34 + (float)(v26 + v31);
            v70 = v69 * v36;
            v73 = -(float)(v36 * v15);
            *(float *)&dword_140404A6C[v13 + 18215721] = (float)(v70 * v37) + *(float *)&dword_140404A6C[v13 + 18215721];
            *(float *)&dword_140404A6C[v13 + 18215722] = (float)(v70 * v38) + *(float *)&dword_140404A6C[v13 + 18215722];
            *(float *)&dword_140404A6C[v13 + 18215723] = (float)(v35 * v70) + *(float *)&dword_140404A6C[v13 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215721] = (float)(v37 * v73) + *(float *)&dword_140404A6C[v6 + 18215721];
            *(float *)&dword_140404A6C[v6 + 18215722] = (float)(v38 * v73) + *(float *)&dword_140404A6C[v6 + 18215722];
            *(float *)&dword_140404A6C[v6 + 18215723] = (float)(v35 * v73) + *(float *)&dword_140404A6C[v6 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)((float)((float)(v62 * v38) - (float)(v68 * v35)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215739];
            v39 = *(float *)((char *)&dword_140404A6C[129720406] + v10);
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)((float)((float)(v63 * v35) - (float)(v37 * v62)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)((float)((float)(v37 * v68) - (float)(v38 * v63)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215741];
            v40 = v8[2];
            v41 = v8[1];
            v42 = (float)((float)((float)((float)((float)(v39 * 0.375) * v31) + (float)(v26 * (float)(v39 * 0.09375)))
                                * v41)
                        + (float)((float)((float)(v29 * (float)(v39 * 0.375)) + (float)(v25 * (float)(v39 * 0.09375)))
                                * *v8))
                + (float)((float)((float)((float)(v39 * 0.375) * v72) + (float)(v27 * (float)(v39 * 0.09375))) * v40);
            v43 = v40 * v42;
            v44 = *v8 * v42;
            v45 = v41 * v42;
            *(float *)&dword_140404A6C[v13 + 18215721] = (float)(v70 * v44) + *(float *)&dword_140404A6C[v13 + 18215721];
            *(float *)&dword_140404A6C[v13 + 18215722] = (float)(v70 * v45) + *(float *)&dword_140404A6C[v13 + 18215722];
            *(float *)&dword_140404A6C[v13 + 18215723] = (float)(v70 * v43) + *(float *)&dword_140404A6C[v13 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215721] = (float)(v73 * v44) + *(float *)&dword_140404A6C[v6 + 18215721];
            *(float *)&dword_140404A6C[v6 + 18215722] = (float)(v73 * v45) + *(float *)&dword_140404A6C[v6 + 18215722];
            *(float *)&dword_140404A6C[v6 + 18215723] = (float)(v43 * v73) + *(float *)&dword_140404A6C[v6 + 18215723];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)((float)((float)(v62 * v45) - (float)(v43 * v68)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215739];
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)((float)((float)(v43 * v63) - (float)(v62 * v44)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)((float)((float)(v68 * v44) - (float)(v63 * v45)) * v73)
                                                      + *(float *)&dword_140404A6C[v6 + 18215741];
            v46 = *(float *)&dword_140404A6C[v6 + 18215724];
            v47 = *(float *)&dword_140404A6C[v6 + 18215725];
            v48 = *(float *)&dword_140404A6C[v6 + 18215726];
            v64 = v46;
            v65 = v47;
            v66 = v48;
            if ( !v5 )
              break;
            if ( v5 == 1 )
            {
              *(_QWORD *)&v49 = dword_140404A6C[v0 + 129720435];
              goto LABEL_13;
            }
LABEL_14:
            v50 = *(float *)&dword_140404A6C[v6 + 18215736] - *(float *)&dword_140404A6C[v13 + 18215736];
            v51 = *(float *)&dword_140404A6C[v6 + 18215737] - *(float *)&dword_140404A6C[v13 + 18215737];
            v52 = *(float *)&dword_140404A6C[v13 + 18215726];
            v53 = *(float *)&dword_140404A6C[v13 + 18215725];
            ++v5;
            v54 = *(float *)&dword_140404A6C[v13 + 18215724];
            v55 = *(float *)&dword_140404A6C[v6 + 18215738] - *(float *)&dword_140404A6C[v13 + 18215738];
            v56 = *(float *)&dword_140404A6C[v13 + 18215748];
            v57 = -(float)((float)((float)(v47 * v51) + (float)(v46 * v50)) + (float)(v48 * v55));
            v58 = (float)((float)((float)((float)(v47 * v52) - (float)(v48 * v53)) * 0.25)
                        + (float)((float)((float)(v46 * v57) + v50) * 0.5))
                * v56;
            v59 = (float)((float)((float)((float)(v48 * v54) - (float)(v46 * v52)) * 0.25)
                        + (float)((float)((float)(v47 * v57) + v51) * 0.5))
                * v56;
            v60 = (float)((float)((float)((float)(v46 * v53) - (float)(v47 * v54)) * 0.25)
                        + (float)((float)((float)(v48 * v57) + v55) * 0.5))
                * v56;
            *(float *)&dword_140404A6C[v13 + 18215739] = (float)(v58 * v70) + *(float *)&dword_140404A6C[v13 + 18215739];
            *(float *)&dword_140404A6C[v13 + 18215740] = (float)(v59 * v70) + *(float *)&dword_140404A6C[v13 + 18215740];
            *(float *)&dword_140404A6C[v13 + 18215741] = (float)(v60 * v70) + *(float *)&dword_140404A6C[v13 + 18215741];
            *(float *)&dword_140404A6C[v6 + 18215739] = (float)(v58 * v73) + *(float *)&dword_140404A6C[v6 + 18215739];
            *(float *)&dword_140404A6C[v6 + 18215740] = (float)(v59 * v73) + *(float *)&dword_140404A6C[v6 + 18215740];
            *(float *)&dword_140404A6C[v6 + 18215741] = (float)(v60 * v73) + *(float *)&dword_140404A6C[v6 + 18215741];
            if ( !--v7 )
              goto LABEL_15;
          }
          *(_QWORD *)&v49 = dword_140404A6C[v0 + 129720392];
LABEL_13:
          sub_14007B4D0(&v64, v8, v49);
          v46 = v64;
          v47 = v65;
          v48 = v66;
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    v0 += 5210;
    --v1;
  }
  while ( v1 );
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

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

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


