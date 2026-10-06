#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (000000014005BCA0) ----------------------------------------------------
__int64            sr_CreateVehicle(int a1, float *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v5; // rdi
  signed int v6; // r12d
  unsigned int *v7; // rax
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  float v14; // xmm10_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm11_4
  float v25; // xmm1_4
  float v26; // xmm12_4
  float v27; // xmm2_4
  unsigned int v28; // xmm0_4
  float v29; // xmm12_4
  float v30; // xmm10_4
  __int64 v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // r8
  char *v34; // rdx
  __int64 v35; // rax
  char *v36; // r10
  char *v37; // r11
  char *v38; // rdi
  char *v39; // rsi
  char *v40; // r12
  char *v41; // r15
  char *v42; // rbx
  char *v43; // r13
  char *v44; // r14
  __int64 v45; // rcx
  char *v46; // rax
  __int64 v47; // r9
  char *v48; // rcx
  char *v49; // rax
  signed int v50; // edx
  __int64 v51; // rax
  _DWORD *v52; // rcx
  int v53; // eax
  float *v54; // rdi
  float *v55; // rsi
  signed int v56; // r12d
  float v57; // xmm2_4
  float v58; // xmm7_4
  float v59; // xmm5_4
  float v60; // xmm6_4
  int v61; // eax
  unsigned int v62; // xmm4_4
  int v63; // eax
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm7_4
  float v69; // xmm0_4
  float v70; // xmm3_4
  float v71; // xmm0_4
  float v72; // xmm5_4
  float v73; // xmm3_4
  float v74; // xmm1_4
  float v75; // xmm6_4
  float v76; // xmm1_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  signed int v80; // eax
  __int64 v81; // rcx
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm2_4
  unsigned int v88; // eax
  unsigned int v89; // ecx
  float v90; // xmm1_4
  float v91; // xmm12_4
  float v92; // xmm0_4
  unsigned int v93; // eax
  unsigned int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // r11
  __int64 v97; // rax
  _DWORD *v98; // rcx
  unsigned __int64 v99; // r8
  __int64 v100; // r15
  _DWORD *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rax
  bool v104; // zf
  unsigned int v105; // eax
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 v108; // rdx
  _DWORD *v109; // rcx
  _Alignas(8) unsigned sr_vehicle_spawn_inertia[3];
  _Alignas(8) unsigned sr_vehicle_joint_offset[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14005BCA0[112];
#define v110 (*(_BYTE (*)[12])(void *)(sr_frame_14005BCA0 + 0)) /* [rsp+30h] */
#define v113 (*(signed int (*))(void *)(sr_frame_14005BCA0 + 32)) /* [rsp+50h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_14005BCA0 + 56)) /* [rsp+68h] */
#define v117 (*(__int64 (*))(void *)(sr_frame_14005BCA0 + 64)) /* [rsp+70h] */
#define v118 (*(char * (*))(void *)(sr_frame_14005BCA0 + 72)) /* [rsp+78h] */
#define v119 (*(char * (*))(void *)(sr_frame_14005BCA0 + 80)) /* [rsp+80h] */
#define v120 (*(char * (*))(void *)(sr_frame_14005BCA0 + 88)) /* [rsp+88h] */
#define v121 (*(char * (*))(void *)(sr_frame_14005BCA0 + 96)) /* [rsp+90h] */
#define v122 (*(__int64 (*))(void *)(sr_frame_14005BCA0 + 104)) /* [rsp+98h] */

  v5 = a1;
  v113 = 0;
  v6 = 0;
  v7 = &dword_140404A6C[129716709];
  v8 = a4;
  v9 = a3;
  while ( *v7 )
  {
    ++v6;
    v7 += 5210;
    v113 = v6;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[132384229] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v12 = 20840LL * v6;
  v117 = v12;
  sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[129716710] + v12)), 0, 0x5164u);
  *(unsigned int *)((char *)&dword_140404A6C[129716710] + v12) = v5;
  *(unsigned int *)((char *)&dword_140404A6C[129716709] + v12) = 1;
  v13 = 99776 * v5;
  *(unsigned int *)((char *)&dword_140404A6C[129716712] + v12) = 100;
  *(unsigned int *)((char *)&dword_140404A6C[129721918] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716716] + v12) = 0xFFFF;
  *(unsigned int *)((char *)&dword_140404A6C[129720183] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716714] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129716718] + v12) = -1;
  *(unsigned int *)((char *)&dword_140404A6C[129720173] + v12) = 4;
  *(unsigned int *)((char *)&dword_140404A6C[129716711] + v12) = dword_140404A6C[24944 * v5 + 346707719];
  *(unsigned int *)((char *)&dword_140404A6C[129716715] + v12) = a5;
  *(unsigned int *)((char *)&dword_140404A6C[129716720] + v12) = *(_DWORD *)a2;
  *(unsigned int *)((char *)&dword_140404A6C[129716721] + v12) = *((_DWORD *)a2 + 1);
  *(unsigned int *)((char *)&dword_140404A6C[129716722] + v12) = *((_DWORD *)a2 + 2);
  *(unsigned int *)((char *)&dword_140404A6C[129716723] + v12) = *(_DWORD *)a2;
  *(unsigned int *)((char *)&dword_140404A6C[129716724] + v12) = *((_DWORD *)a2 + 1);
  *(unsigned int *)((char *)&dword_140404A6C[129716725] + v12) = *((_DWORD *)a2 + 2);
  *(unsigned int *)((char *)&dword_140404A6C[129716726] + v12) = *v8;
  *(unsigned int *)((char *)&dword_140404A6C[129716727] + v12) = v8[1];
  *(unsigned int *)((char *)&dword_140404A6C[129716728] + v12) = v8[2];
  *(unsigned int *)((char *)&dword_140404A6C[129716729] + v12) = v8[3];
  *(unsigned int *)((char *)&dword_140404A6C[129716730] + v12) = v8[4];
  *(unsigned int *)((char *)&dword_140404A6C[129716731] + v12) = v8[5];
  *(unsigned int *)((char *)&dword_140404A6C[129716732] + v12) = v8[6];
  *(unsigned int *)((char *)&dword_140404A6C[129716733] + v12) = v8[7];
  *(unsigned int *)((char *)&dword_140404A6C[129716734] + v12) = v8[8];
  *(unsigned int *)((char *)&dword_140404A6C[129716735] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716726]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716736] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716727]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716737] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716728]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716738] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716729]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716739] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716730]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716740] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716731]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716741] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716732]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716742] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716733]
                                                                                 + v12);
  *(unsigned int *)((char *)&dword_140404A6C[129716743] + v12) = *(unsigned int *)((char *)&dword_140404A6C[129716734]
                                                                                 + v12);
  v122 = 99776 * v5;
  if ( v9 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[129716744] + v12) = *v9;
    *(unsigned int *)((char *)&dword_140404A6C[129716745] + v12) = v9[1];
    *(unsigned int *)((char *)&dword_140404A6C[129716746] + v12) = v9[2];
    *(unsigned int *)((char *)&dword_140404A6C[129716747] + v12) = *v9;
    *(unsigned int *)((char *)&dword_140404A6C[129716748] + v12) = v9[1];
    *(unsigned int *)((char *)&dword_140404A6C[129716749] + v12) = v9[2];
  }
  v14 = *(float *)((char *)&dword_140404A6C[346732623] + v13);
  v15 = *(float *)((char *)&dword_140404A6C[346732624] + v13);
  v16 = *(float *)((char *)&dword_140404A6C[346732625] + v13);
  v17 = v14;
  v18 = *(float *)((char *)&dword_140404A6C[346731810] + v13) * 213.0;
  *(unsigned int *)((char *)&dword_140404A6C[129720337] + v12) = 1094713344;
  *(unsigned int *)((char *)&dword_140404A6C[129720338] + v12) = 1128792064;
  *(unsigned int *)((char *)&dword_140404A6C[129720339] + v12) = 1000593162;
  *(float *)((char *)&dword_140404A6C[129720333] + v12) = v18;
  v19 = (float)(v14 * *(float *)v8) + *a2;
  v20 = (float)(v14 * *((float *)v8 + 2)) + a2[2];
  v21 = v19 + (float)(v15 * *((float *)v8 + 3));
  v22 = v15 * *((float *)v8 + 4);
  v23 = v15 * *((float *)v8 + 5);
  v24 = v21 + (float)(v16 * *((float *)v8 + 6));
  v25 = v16 * *((float *)v8 + 7);
  v26 = (float)((float)(v17 * *((float *)v8 + 1)) + a2[1]) + v22;
  v27 = v16 * *((float *)v8 + 8);
  v28 = *(unsigned int *)((char *)&dword_140404A6C[346707731] + v13);
  v29 = v26 + v25;
  *(float *)v110 = v24;
  v30 = (float)(v20 + v23) + v27;
  *(float *)&v110[4] = v29;
  *(float *)&v110[8] = v30;
  *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12) = sub_14005CF80(
                                                                   1u,
                                                                   (unsigned int *)v110,
                                                                   v8,
                                                                   v9,
                                                                   v28,
                                                                   (unsigned int *)((char *)&dword_140404A6C[346732629]
                                                                                  + v13));
  v31 = *(int *)((char *)&dword_140404A6C[346709019] + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129717219] + v12) = v31;
  v116 = v31;
  if ( (int)v31 > 0 )
  {
    v32 = v13 - v12;
    v33 = (unsigned int *)((char *)&dword_140404A6C[129717220] + v12);
    v34 = (char *)&dword_140404A6C[129717221] + v12;
    v35 = v13 - v12 - (_QWORD)&dword_140404A6C[129717221];
    v36 = (char *)&dword_140404A6C[346709021] + v35;
    v37 = (char *)&dword_140404A6C[346709022] + v35;
    v38 = (char *)&dword_140404A6C[346709023] + v35;
    v39 = (char *)&dword_140404A6C[346709024] + v35;
    v40 = (char *)&dword_140404A6C[346709025] + v35;
    v41 = (char *)&dword_140404A6C[346709026] + v35;
    v42 = (char *)&dword_140404A6C[346709027] + v35;
    v43 = (char *)&dword_140404A6C[346709028] + v35;
    v119 = (char *)&dword_140404A6C[346709030] + v35;
    v44 = (char *)&dword_140404A6C[346709029] + v35;
    v118 = (char *)&dword_140404A6C[346709031] + v35;
    v45 = v32 - (_QWORD)&dword_140404A6C[129717220];
    v120 = (char *)((intptr_t)&dword_140404A6C[346709032] + v35);
    v46 = (char *)&dword_140404A6C[346709020] + v45;
    (*(int64_t *)(void *)sr_vehicle_spawn_inertia) = (__int64)&dword_140404A6C[346709020] + v45;
    v121 = (char *)&dword_140404A6C[346709034] + v45;
    v47 = v116;
    (*(char **)(void *)sr_vehicle_joint_offset) = (char *)((intptr_t)&dword_140404A6C[346709035] + v45);
    v48 = v118;
    do
    {
      v34 += 64;
      *v33 = *(_DWORD *)((char *)v33 + (_QWORD)v46);
      v33 += 16;
      *((_DWORD *)v34 - 16) = *(_DWORD *)&v34[(_QWORD)v36 - 64];
      *((_DWORD *)v34 - 15) = *(_DWORD *)&v34[(_QWORD)v37 - 64];
      *((_DWORD *)v34 - 14) = *(_DWORD *)&v34[(_QWORD)v38 - 64];
      *((_DWORD *)v34 - 13) = *(_DWORD *)&v34[(_QWORD)v39 - 64];
      *((_DWORD *)v34 - 12) = *(_DWORD *)&v34[(_QWORD)v40 - 64];
      *((_DWORD *)v34 - 11) = *(_DWORD *)&v34[(_QWORD)v41 - 64];
      *((_DWORD *)v34 - 10) = *(_DWORD *)&v34[(_QWORD)v42 - 64];
      *((_DWORD *)v34 - 9) = *(_DWORD *)&v43[(_QWORD)v34 - 64];
      *((_DWORD *)v34 - 8) = *(_DWORD *)&v34[(_QWORD)v44 - 64];
      *((_DWORD *)v34 - 7) = *(_DWORD *)&v34[(_QWORD)v119 - 64];
      *((_DWORD *)v34 - 6) = *(_DWORD *)&v34[(_QWORD)v48 - 64];
      *((_DWORD *)v34 - 5) = *(_DWORD *)&v34[(_QWORD)v120 - 64];
      v49 = v121;
      *(v33 - 1) = 8;
      *(v33 - 3) = *(_DWORD *)((char *)v33 + (_QWORD)v49 - 64);
      *(v33 - 2) = *(_DWORD *)((char *)v33 + (_QWORD)(*(char **)(void *)sr_vehicle_joint_offset) - 64);
      v46 = (char *)(*(int64_t *)(void *)sr_vehicle_spawn_inertia);
      --v47;
    }
    while ( v47 );
    v12 = v117;
    v8 = a4;
    v13 = v122;
    v6 = v113;
    v9 = a3;
  }
  v50 = 0;
  if ( *(int *)((char *)&dword_140404A6C[129716768] + v12) > 0 )
  {
    v51 = v13 - v12 - (_QWORD)&dword_140404A6C[129716834];
    v52 = (unsigned int *)((char *)&dword_140404A6C[129716834] + v12);
    do
    {
      ++v50;
      *v52 = *(_DWORD *)((char *)v52 + v51 + 0x192E9ACC8LL);
      v52[64] = *(_DWORD *)((char *)v52 + v51 + 0x192E9ADC8LL);
      ++v52;
    }
    while ( v50 < *(int *)((char *)&dword_140404A6C[129716768] + v12) );
  }
  *(unsigned int *)((char *)&dword_140404A6C[129721882] + v12) = *(unsigned int *)((char *)&dword_140404A6C[346732452]
                                                                                 + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129721883] + v12) = *(unsigned int *)((char *)&dword_140404A6C[346732453]
                                                                                 + v13);
  v53 = *(unsigned int *)((char *)&dword_140404A6C[346731811] + v13);
  *(unsigned int *)((char *)&dword_140404A6C[129720373] + v12) = v53;
  if ( v53 > 0 )
  {
    v54 = (float *)((char *)&dword_140404A6C[129720385] + v12);
    v55 = (float *)((char *)&dword_140404A6C[346731831] + v13);
    v56 = 0;
    do
    {
      v57 = *(v55 - 13);
      v58 = *(v55 - 2);
      v59 = *(v55 - 1);
      v60 = *v55;
      v61 = *((_DWORD *)v55 - 19);
      v62 = *((_DWORD *)v55 - 14);
      *(v54 - 2) = v58;
      *(v54 - 1) = v59;
      *v54 = v60;
      *((_DWORD *)v54 - 9) = v61;
      *(v54 - 8) = *(v55 - 3);
      *(v54 - 6) = *(v55 - 18);
      *(v54 - 5) = *(v55 - 17);
      *(v54 - 4) = *(v55 - 16);
      *(v54 - 3) = *(v55 - 15);
      v54[3] = *(v55 - 12);
      v54[18] = *(v55 - 8);
      v63 = *((_DWORD *)v55 - 7);
      v54[2] = v57;
      *((_DWORD *)v54 + 19) = v63;
      v54[20] = *(v55 - 6);
      v54[21] = *(v55 - 5);
      *((_DWORD *)v54 + 1) = v62;
      *((_DWORD *)v54 - 7) = 8;
      *(v54 - 10) = 0.125;
      v64 = v58 * *(float *)v8;
      v65 = (float)(v57 * v57) * 0.5;
      v66 = (float)(v57 * 0.25) * v57;
      v67 = v58 * *((float *)v8 + 1);
      v68 = v58 * *((float *)v8 + 2);
      *(float *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia) = v65;
      v69 = v59 * *((float *)v8 + 3);
      *((float *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia) + 1) = v66 + 0.0052083335;
      (*(float *)(void *)(sr_vehicle_spawn_inertia+2)) = v66 + 0.0052083335;
      v70 = (float)(v64 + v24) + v69;
      v71 = v59 * *((float *)v8 + 4);
      v72 = v59 * *((float *)v8 + 5);
      v73 = v70 + (float)(v60 * *((float *)v8 + 6));
      v74 = v60;
      v75 = v60 * *((float *)v8 + 8);
      v76 = v74 * *((float *)v8 + 7);
      *(float *)v110 = v73;
      v54[8] = v73;
      *(float *)&v110[4] = (float)((float)(v67 + v29) + v71) + v76;
      v54[9] = *(float *)&v110[4];
      *(float *)&v110[8] = (float)((float)(v68 + v30) + v72) + v75;
      v54[10] = *(float *)&v110[8];
      *((_DWORD *)v54 - 11) = sub_14005CF80(2u, (unsigned int *)v110, v8, v9, v62, (unsigned int *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia));
      ++v56;
      v54 += 43;
      v55 += 20;
    }
    while ( v56 < *(int *)((char *)&dword_140404A6C[346731811] + v13) );
    v12 = v117;
    v6 = v113;
  }
  if ( a1 == 12 )
  {
    v77 = *((float *)v8 + 3) * 1.5;
    v78 = *((float *)v8 + 5);
    (*(int64_t *)(void *)sr_vehicle_spawn_inertia) = 0x4100000040802AABLL;
    (*(float *)(void *)(sr_vehicle_spawn_inertia+2)) = 4.0052085;
    *(float *)v110 = v77 + v24;
    v79 = *((float *)v8 + 4) * 1.5;
    *(float *)&v110[8] = (float)(v78 * 1.5) + v30;
    *(float *)&v110[4] = v79 + v29;
    v80 = sub_14005CF80(1u, (unsigned int *)v110, v8, v9, 0x43200000u, (unsigned int *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia));
    v81 = 188LL * v80;
    *(unsigned int *)((char *)&dword_140404A6C[129721807] + v12) = v80;
    *(_DWORD *)v110 = 0;
    *(_QWORD *)&v110[4] = 1069547520;
    (*(char **)(void *)sr_vehicle_joint_offset) = nullptr;
    *(unsigned int *)((char *)&dword_140404A6C[18215752] + v81) = 1082130432;
    *(unsigned int *)((char *)&dword_140404A6C[18215753] + v81) = 1040187392;
    *(unsigned int *)((char *)&dword_140404A6C[18215754] + v81) = 1082130432;
    LODWORD(v81) = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    sr_vehicle_joint_offset[2] = 0;
    sub_14004E430(v81, v80, (unsigned int *)v110, (unsigned int *)&(*(char **)(void *)sr_vehicle_joint_offset));
    *(unsigned int *)((char *)&dword_140404A6C[129721808] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721807]
                                                                                     + v12));
  }
  else
  {
    if ( a1 != 13 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[129720349] + v12) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 3;
      if ( a1 == 15 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 1;
      }
      goto LABEL_27;
    }
    v82 = *((float *)v8 + 6);
    v83 = v30 - *((float *)v8 + 5);
    v84 = v24 - *((float *)v8 + 3);
    (*(int64_t *)(void *)sr_vehicle_spawn_inertia) = 0x3FC000003F700000LL;
    (*(float *)(void *)(sr_vehicle_spawn_inertia+2)) = 0.9375;
    v85 = v84 - (float)(v82 * 6.0);
    v86 = *((float *)v8 + 7) * 6.0;
    *(float *)v110 = v85;
    v87 = v83 - (float)(*((float *)v8 + 8) * 6.0);
    *(float *)&v110[4] = (float)(v29 - *((float *)v8 + 4)) - v86;
    *(float *)&v110[8] = v87;
    v88 = sub_14005CF80(1u, (unsigned int *)v110, v8, v9, 0x479C4000u, (unsigned int *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia));
    *(unsigned int *)((char *)&dword_140404A6C[129721812] + v12) = v88;
    v89 = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    *(_DWORD *)&v110[8] = -1061158912;
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    (*(char **)(void *)sr_vehicle_joint_offset) = nullptr;
    sr_vehicle_joint_offset[2] = 0;
    sub_14004E430(v89, v88, (unsigned int *)v110, (unsigned int *)&(*(char **)(void *)sr_vehicle_joint_offset));
    *(unsigned int *)((char *)&dword_140404A6C[129721814] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721812]
                                                                                     + v12));
    v90 = *((float *)v8 + 5) * 1.25;
    v91 = (float)(v29 - (float)(*((float *)v8 + 4) * 1.25)) + (float)(*((float *)v8 + 7) * 6.0);
    *(float *)v110 = (float)(v24 - (float)(*((float *)v8 + 3) * 1.25)) + (float)(*((float *)v8 + 6) * 6.0);
    v92 = *((float *)v8 + 8) * 6.0;
    *(float *)&v110[4] = v91;
    *(float *)&v110[8] = (float)(v30 - v90) + v92;
    v93 = sub_14005CF80(1u, (unsigned int *)v110, v8, v9, 0x479C4000u, (unsigned int *)&(*(int64_t *)(void *)sr_vehicle_spawn_inertia));
    *(unsigned int *)((char *)&dword_140404A6C[129721815] + v12) = v93;
    v94 = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v12);
    *(_QWORD *)v110 = 0xBF80000000000000uLL;
    *(_DWORD *)&v110[8] = 1086324736;
    sub_14004E430(v94, v93, (unsigned int *)v110, (unsigned int *)&(*(char **)(void *)sr_vehicle_joint_offset));
    *(unsigned int *)((char *)&dword_140404A6C[129721817] + v12) = sub_14004E5B0(
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129716719]
                                                                                     + v12),
                                                                     *(unsigned int *)((char *)&dword_140404A6C[129721815]
                                                                                     + v12));
  }
  *(unsigned int *)((char *)&dword_140404A6C[129720349] + v12) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[129720350] + v12) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[129720351] + v12) = 3;
LABEL_27:
  v95 = *(int *)((char *)&dword_140404A6C[346732491] + v13);
  v96 = 0;
  *(unsigned int *)((char *)&dword_140404A6C[129721884] + v12) = v95;
  v116 = v95;
  if ( v95 >= 4 )
  {
    v97 = v13 - v12 - (_QWORD)&dword_140404A6C[129721886];
    (*(int64_t *)(void *)sr_vehicle_spawn_inertia) = (__int64)&dword_140404A6C[346732502] + v97;
    (*(char **)(void *)sr_vehicle_joint_offset) = (char *)&dword_140404A6C[346732503] + v97;
    v121 = (char *)&dword_140404A6C[346732492] + v97;
    v120 = (char *)&dword_140404A6C[346732495] + v97;
    v98 = (unsigned int *)((char *)&dword_140404A6C[129721886] + v12);
    v119 = (char *)&dword_140404A6C[346732498] + v97;
    v99 = ((unsigned __int64)(v95 - 4) >> 2) + 1;
    v118 = (char *)((intptr_t)&dword_140404A6C[346732501] + v97);
    *(_QWORD *)v110 = 4 * v99;
    do
    {
      *(v98 - 1) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732492] + v97);
      *v98 = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732493] + v97);
      v98[1] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732494] + v97);
      v98[2] = *(unsigned int *)((char *)&dword_140404A6C[346732495] + v97 + (_QWORD)v98);
      v98[3] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732496] + v97);
      v98[4] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732497] + v97);
      v98[5] = *(unsigned int *)((char *)&dword_140404A6C[346732498] + v97 + (_QWORD)v98);
      v98[6] = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732499] + v97);
      v98[7] = *(unsigned int *)((char *)&dword_140404A6C[346732500] + v97 + (_QWORD)v98);
      v98 += 12;
      *(v98 - 4) = *(_DWORD *)&v118[(_QWORD)v98 - 48];
      *(v98 - 3) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732502] + v97 - 48);
      *(v98 - 2) = *(_DWORD *)((char *)v98 + (_QWORD)&dword_140404A6C[346732503] + v97 - 48);
      --v99;
    }
    while ( v99 );
    v12 = v117;
    v95 = v116;
    v13 = v122;
    v6 = v113;
    v96 = *(_QWORD *)v110;
  }
  if ( v96 < v95 )
  {
    v100 = v13 - v12 - (_QWORD)&dword_140404A6C[129721886];
    v101 = (unsigned int *)((char *)&dword_140404A6C[3 * v96 + 129721886] + v12);
    v102 = v95 - v96;
    do
    {
      *(v101 - 1) = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732492] + v100);
      *v101 = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732493] + v100);
      v101[1] = *(_DWORD *)((char *)v101 + (_QWORD)&dword_140404A6C[346732494] + v100);
      v101 += 3;
      --v102;
    }
    while ( v102 );
  }
  v103 = 5210LL * v6;
  v104 = dword_140404A6C[456202453] == 0;
  *(_QWORD *)&dword_140404A6C[v103 + 129720175] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720177] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720179] = -1;
  *(_QWORD *)&dword_140404A6C[v103 + 129720181] = -1;
  if ( !v104 )
  {
    v105 = dword_140404A6C[283831474];
    v106 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v106) = 3;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v106) = v105;
    v107 = *(unsigned int *)((char *)&dword_140404A6C[129716710] + v12);
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v106) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v106) = v107;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v106) = *(unsigned int *)((char *)&dword_140404A6C[129716715]
                                                                                    + v12);
  }
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v108 = dword_140404A6C[456202445];
    v109 = (_DWORD *)((intptr_t)&dword_140404A6C[438887509] + 8LL * v6);
    do
    {
      *v109 = 0x10000;
      v109 += 47224;
      --v108;
    }
    while ( v108 );
  }
  return (unsigned int)v6;
}
#undef v110
#undef v113
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122

// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4BF08E0: using guessed type unsigned int;

//----- (0000000140061950) ----------------------------------------------------
__int64 sub_140061950()
{
  int v0; // edi
  unsigned int *v1; // rbx
  float v2; // xmm1_4
  double v3; // xmm2_8
  float v4; // xmm0_4
  _Alignas(16) unsigned sr_train_spawn_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140061950[112];
#define v6 (*(__int64 (*))(void *)(sr_frame_140061950 + 0)) /* [rsp+0h] */
#define v7 (*(float (*)[4])(void *)(sr_frame_140061950 + 48)) /* [rsp+30h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_140061950 + 104)) /* [rsp+68h] */

  const float sr_train_spawn_axis[3] = {0.0f, 1.0f, 0.0f};
  v0 = 0;
  if ( (int)dword_140404A6C[112631653] > 0 )
  {
    v1 = &dword_140404A6C[112631657];
    do
    {
      v2 = *(float *)v1;
      *(_QWORD *)&v3 = v1[1];
      LODWORD(v7[0]) = *(v1 - 2);
      v4 = *((float *)v1 - 1) + 2.0;
      v7[2] = v2;
      ((_OWORD *)(void *)sr_train_spawn_rotation)[0] = xmmword_140278D30;
      sr_train_spawn_rotation[8] = 1065353216;
      ((_OWORD *)(void *)sr_train_spawn_rotation)[1] = xmmword_140278D30;
      v7[1] = v4;
      sub_14007B2A0((__int64)((_OWORD *)(void *)sr_train_spawn_rotation), (float *)sr_train_spawn_axis, v3);
      v1 += 5;
      dword_140404A6C[5210 * (int)sr_CreateVehicle(13, v7, nullptr, (unsigned int *)((_OWORD *)(void *)sr_train_spawn_rotation), 1u) + 129721811] = v0++;
    }
    while ( v0 < (int)dword_140404A6C[112631653] );
  }
  return 0; /* both native callers ignore EAX */
}
#undef v6
#undef v7
#undef v10

// 140145AFF: variable 'v139' is possibly undefined
// 140145B3E: variable 'v140' is possibly undefined
// 140145B59: variable 'v141' is possibly undefined
// 140145B9D: variable 'v142' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A7DBDA4: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;
// 183EBB728: using guessed type unsigned int;
// 183EBC244: using guessed type unsigned int;
// 183EBC2C4: using guessed type unsigned int;
// 183EBC340: using guessed type unsigned int;

//----- (0000000140145BB0) ----------------------------------------------------
__int64 sr_SetupVehicleTypes()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rcx

  sub_140145E20();
  strcpy((char *)&dword_140404A6C[347007050], "Helicopter");
  dword_140404A6C[347007059] = 1148846080;
  dword_140404A6C[347007047] = 2;
  dword_140404A6C[347007058] = 1000000;
  dword_140404A6C[347007045] = 1;
  asset_load_vehicle_sbv_candidate(12, "park5");
  dword_140404A6C[347031139] = 0;
  dword_140404A6C[335742911] = 0;
  dword_140404A6C[335741246] = 0;
  sub_140103270(12, "data/helitest.tst");
  sub_14014D6D0(12, 0.375, 12.0, 0);
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031820] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = -1084227584;
  v0 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v0 + 347031823] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = -1084227584;
  v1 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v1 + 347031823] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031822] = 1061158912;
  v2 = (int)dword_140404A6C[347031819]++;
  dword_140404A6C[3 * v2 + 347031823] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[347031819] + 347031821] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[347031819]++ + 347031822] = 1061158912;
  sub_14014AAE0(12);
  strcpy((char *)&dword_140404A6C[347031994], "Train");
  dword_140404A6C[347031989] = 1;
  dword_140404A6C[347032002] = 1000;
  dword_140404A6C[347031991] = 0;
  dword_140404A6C[347032003] = 1218199552;
  asset_load_vehicle_sbv_candidate(13, "train04");
  return sub_14014E9C0(13, 0.375, 12.0, 0);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1904C4F64: using guessed type unsigned int;
// 1904C6968: using guessed type unsigned int;
// 192FBEB80: using guessed type unsigned int;
// 192FBEB88: using guessed type unsigned int;
// 192FBEBB4: using guessed type unsigned int;
// 192FBEBB8: using guessed type unsigned int;
// 192FD63F8: using guessed type unsigned int;
// 192FD6E98: using guessed type unsigned int;
// 192FD7140: using guessed type unsigned int;
// 192FD7148: using guessed type unsigned int;
// 192FD7174: using guessed type unsigned int;
// 192FD7178: using guessed type unsigned int;

//----- (0000000140145E20) ----------------------------------------------------
void sub_140145E20()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r9d
  unsigned int v8; // xmm1_4
  unsigned int v9; // xmm0_4
  unsigned int v10; // xmm2_4
  unsigned int v11; // ecx
  unsigned int v12; // xmm1_4
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm2_4
  unsigned int v15; // ecx
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm2_4
  int v19; // r9d
  unsigned int v20; // ecx
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm2_4
  int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r14
  __m128i *v29; // r15
  __int64 v30; // r12
  __int64 v31; // rbx
  unsigned int v32; // esi
  signed int v33; // eax
  unsigned int *v34; // r10
  __int64 v35; // rbx
  unsigned int v36; // r9d
  signed int v37; // edx
  unsigned int *v38; // rcx
  int v39; // r8d
  unsigned int v40; // r9d
  signed int v41; // r11d
  unsigned int *v42; // rcx
  signed int v43; // edx
  int v44; // r8d
  unsigned int v45; // r9d
  unsigned int *v46; // rcx
  signed int v47; // edx
  int v48; // r8d
  unsigned int v49; // r9d
  unsigned int *v50; // rcx
  signed int v51; // edx
  int v52; // r8d
  unsigned int v53; // ebx
  __int32 v54; // r15d
  unsigned int v55; // esi
  unsigned int v56; // r12d
  unsigned int v57; // r15d
  unsigned int v58; // r14d
  unsigned int v59; // ebx
  __m128i *v60; // r15
  __int64 v61; // r14
  __int64 v62; // r12
  __int64 v63; // rbx
  unsigned int v64; // esi
  __int64 v65; // r8
  int v66; // edx
  unsigned int v67; // ecx
  int v68; // r9d
  unsigned int v69; // xmm1_4
  unsigned int v70; // xmm0_4
  unsigned int v71; // xmm2_4
  unsigned int v72; // ecx
  unsigned int v73; // xmm1_4
  unsigned int v74; // xmm0_4
  unsigned int v75; // xmm2_4
  unsigned int v76; // ecx
  unsigned int v77; // xmm1_4
  unsigned int v78; // xmm0_4
  unsigned int v79; // xmm2_4
  int v80; // r9d
  unsigned int v81; // ecx
  unsigned int v82; // xmm1_4
  unsigned int v83; // xmm0_4
  unsigned int v84; // xmm2_4
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // r13d
  __int64 v89; // r14
  __m128i *p_si128; // r15
  __int64 v91; // r12
  __int64 v92; // rbx
  unsigned int v93; // esi
  unsigned int v94; // ebx
  __int32 v95; // r15d
  unsigned int v96; // esi
  unsigned int v97; // r12d
  unsigned int v98; // r15d
  unsigned int v99; // r14d
  unsigned int v100; // ebx
  __m128i *v101; // r15
  __int64 v102; // r14
  __int64 v103; // r12
  __int64 v104; // rbx
  unsigned int v105; // esi
  __int64 v106; // r8
  int v107; // edx
  unsigned int v108; // ecx
  int v109; // r9d
  unsigned int v110; // xmm1_4
  unsigned int v111; // xmm0_4
  unsigned int v112; // xmm2_4
  unsigned int v113; // ecx
  unsigned int v114; // xmm1_4
  unsigned int v115; // xmm0_4
  unsigned int v116; // xmm2_4
  unsigned int v117; // ecx
  unsigned int v118; // xmm1_4
  unsigned int v119; // xmm0_4
  unsigned int v120; // xmm2_4
  int v121; // r9d
  unsigned int v122; // ecx
  unsigned int v123; // xmm1_4
  unsigned int v124; // xmm0_4
  unsigned int v125; // xmm2_4
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rcx
  int v129; // r13d
  __int64 v130; // r14
  __m128i *v131; // r15
  __int64 v132; // r12
  __int64 v133; // rbx
  unsigned int v134; // esi
  unsigned int v135; // ebx
  __int32 v136; // r15d
  unsigned int v137; // esi
  unsigned int v138; // r12d
  unsigned int v139; // r15d
  unsigned int v140; // r14d
  unsigned int v141; // ebx
  __m128i *v142; // r15
  __int64 v143; // r14
  __int64 v144; // r12
  __int64 v145; // rbx
  unsigned int v146; // esi
  int v147; // r10d
  unsigned int v148; // r8d
  int v149; // r9d
  unsigned int v150; // xmm1_4
  unsigned int v151; // xmm0_4
  unsigned int v152; // xmm0_4
  unsigned int v153; // r8d
  unsigned int v154; // xmm1_4
  unsigned int v155; // xmm0_4
  unsigned int v156; // r9d
  unsigned int v157; // xmm1_4
  int v158; // r8d
  unsigned int v159; // xmm0_4
  unsigned int v160; // xmm0_4
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rcx
  int v166; // r13d
  __int64 v167; // rcx
  __int64 v168; // rcx
  __int64 v169; // r14
  __m128i *v170; // r15
  __int64 v171; // r12
  __int64 v172; // rbx
  unsigned int v173; // esi
  __int64 i; // rbx
  unsigned int v175; // ebx
  unsigned int v176; // r12d
  unsigned int v177; // r14d
  unsigned int v178; // r15d
  unsigned int v179; // esi
  unsigned int v180; // ebx
  unsigned int v181; // r14d
  __m128i *v182; // r15
  __int64 v183; // r12
  __int64 v184; // r14
  __int64 v185; // rbx
  unsigned int v186; // esi
  __m128i *v187; // r15
  __int64 v188; // r14
  __int64 v189; // r12
  __int64 v190; // rbx
  unsigned int v191; // esi
  __m128i *v192; // r15
  __int64 v193; // r14
  __int64 v194; // r12
  __int64 v195; // rbx
  unsigned int v196; // esi
  int v197; // r8d
  unsigned int v198; // r9d
  int v199; // r10d
  unsigned int v200; // xmm1_4
  unsigned int v201; // xmm0_4
  unsigned int v202; // xmm3_4
  unsigned int v203; // r9d
  unsigned int v204; // xmm1_4
  unsigned int v205; // xmm0_4
  unsigned int v206; // xmm3_4
  unsigned int v207; // r10d
  unsigned int v208; // xmm1_4
  int v209; // r9d
  unsigned int v210; // xmm0_4
  unsigned int v211; // xmm3_4
  int v212; // r9d
  unsigned int v213; // r10d
  unsigned int v214; // xmm1_4
  unsigned int v215; // xmm0_4
  unsigned int v216; // xmm3_4
  int v217; // r13d
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v220; // rcx
  __int64 v221; // r14
  __m128i *v222; // r15
  __int64 v223; // r12
  __int64 v224; // rbx
  unsigned int v225; // esi
  __int64 j; // rbx
  unsigned int v227; // ebx
  __int32 v228; // r15d
  unsigned int v229; // r14d
  unsigned int v230; // r12d
  unsigned int v231; // r15d
  unsigned int v232; // esi
  unsigned int v233; // ebx
  __m128i *v234; // r15
  __int64 v235; // r13
  __int64 v236; // r12
  __int64 v237; // r14
  __int64 v238; // rbx
  unsigned int v239; // esi
  __m128i *v240; // r14
  __int64 v241; // rbx
  unsigned int v242; // esi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140145E20[224];
#define v244 (*(__int64 (*))(void *)(sr_frame_140145E20 + 0)) /* [rsp+0h] */
#define v245 (*(__int64 (*))(void *)(sr_frame_140145E20 + 32)) /* [rsp+20h] */
#define v246 (*(unsigned int (*))(void *)(sr_frame_140145E20 + 40)) /* [rsp+28h] */
#define v247 (*(unsigned int (*))(void *)(sr_frame_140145E20 + 48)) /* [rsp+30h] */
#define v248 (*(unsigned int (*))(void *)(sr_frame_140145E20 + 56)) /* [rsp+38h] */
#define v249 (*(int (*))(void *)(sr_frame_140145E20 + 96)) /* [rsp+60h] */
#define v250 (*(int (*))(void *)(sr_frame_140145E20 + 100)) /* [rsp+64h] */
#define v251 (*(int (*))(void *)(sr_frame_140145E20 + 104)) /* [rsp+68h] */
#define v252 (*(int (*))(void *)(sr_frame_140145E20 + 108)) /* [rsp+6Ch] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140145E20 + 128)) /* [rsp+80h] */
#define v254 (*(__m128i (*))(void *)(sr_frame_140145E20 + 144)) /* [rsp+90h] */
#define v255 (*(__int128 (*))(void *)(sr_frame_140145E20 + 192)) /* [rsp+C0h] */
#define v256 (*(__int64 (*))(void *)(sr_frame_140145E20 + 208)) /* [rsp+D0h] */

  v0 = 1;
  strcpy((char *)&dword_140404A6C[346707722], "Town Car");
  dword_140404A6C[346707719] = 1;
  dword_140404A6C[346707717] = 1;
  dword_140404A6C[346707730] = 1000;
  dword_140404A6C[346707731] = 1148846080;
  dword_140404A6C[346731810] = 1063256064;
  asset_load_vehicle_sbv_candidate(0, "park5");
  sub_14014D6D0(0, 0.375, 12.0, 0);
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732492] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732493] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732494] = -1094713344;
  v1 = (int)dword_140404A6C[346732491]++;
  dword_140404A6C[3 * v1 + 346732495] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732493] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732494] = -1094713344;
  v2 = (int)dword_140404A6C[346732491]++;
  dword_140404A6C[3 * v2 + 346732495] = -1094713344;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732493] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732494] = 1061158912;
  v3 = (int)dword_140404A6C[346732491]++;
  dword_140404A6C[3 * v3 + 346732495] = 1052770304;
  dword_140404A6C[3 * dword_140404A6C[346732491] + 346732493] = -1089470464;
  dword_140404A6C[3 * dword_140404A6C[346732491]++ + 346732494] = 1061158912;
  sub_14014AAE0(0);
  v4 = 2;
  v5 = 1;
  strcpy((char *)&dword_140404A6C[346732666], "Town Car 2");
  v255 = xmmword_1402797B0;
  dword_140404A6C[346732674] = 1000;
  dword_140404A6C[346732663] = 1;
  dword_140404A6C[346732675] = 1148846080;
  dword_140404A6C[346756754] = 1065353216;
  v6 = dword_140404A6C[346732677];
  do
  {
    v7 = v5 - 1;
    if ( ((v5 - 1) & 1) != 0 )
      v8 = 1065353216;
    else
      v8 = -1082130432;
    if ( v7 >= 8 )
      v9 = 1054867456;
    else
      v9 = -1092616192;
    v10 = *((_DWORD *)&v255 + (((v4 - 2) >> 1) & 3));
    dword_140404A6C[5 * v6 + 346732679] = v8;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = v9;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = v10;
    if ( v7 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 0x40000000;
    v11 = ++dword_140404A6C[346732677];
    if ( (v5 & 1) != 0 )
      v12 = 1065353216;
    else
      v12 = -1082130432;
    if ( v5 >= 8 )
      v13 = 1054867456;
    else
      v13 = -1092616192;
    v14 = *((_DWORD *)&v255 + (((v4 - 1) >> 1) & 3));
    dword_140404A6C[5 * v11 + 346732679] = v12;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = v13;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = v14;
    if ( v5 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 0x40000000;
    v15 = ++dword_140404A6C[346732677];
    if ( ((v5 - 1) & 1) != 0 )
      v16 = 1065353216;
    else
      v16 = -1082130432;
    if ( v5 + 1 >= 8 )
      v17 = 1054867456;
    else
      v17 = -1092616192;
    v18 = *((_DWORD *)&v255 + ((v4 >> 1) & 3));
    dword_140404A6C[5 * v15 + 346732679] = v16;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = v17;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = v18;
    if ( v5 + 1 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 0x40000000;
    v19 = v5 + 2;
    v20 = ++dword_140404A6C[346732677];
    if ( (((_BYTE)v5 + 2) & 1) != 0 )
      v21 = 1065353216;
    else
      v21 = -1082130432;
    if ( v19 >= 8 )
      v22 = 1054867456;
    else
      v22 = -1092616192;
    v23 = *((_DWORD *)&v255 + (((v4 + 1) >> 1) & 3));
    dword_140404A6C[5 * v20 + 346732679] = v21;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = v22;
    dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = v23;
    if ( v19 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 0x40000000;
    v5 += 4;
    v6 = dword_140404A6C[346732677] + 1;
    v4 += 4;
    ++dword_140404A6C[346732677];
  }
  while ( v5 <= 16 );
  v24 = 0;
  dword_140404A6C[5 * v6 + 346732679] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = -1092616192;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1056964608;
  v25 = (int)dword_140404A6C[346732677]++;
  dword_140404A6C[5 * v25 + 346732684] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = -1092616192;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1056964608;
  v26 = (int)dword_140404A6C[346732677]++;
  dword_140404A6C[5 * v26 + 346732684] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = 1067974656;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1056964608;
  v27 = (int)dword_140404A6C[346732677]++;
  dword_140404A6C[5 * v27 + 346732684] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = 1067974656;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732682] = 1056964608;
  dword_140404A6C[346732998] = 16;
  ++dword_140404A6C[346732677];
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732679] = 0;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732680] = 0;
  dword_140404A6C[5 * dword_140404A6C[346732677] + 346732681] = -1072955392;
  dword_140404A6C[5 * dword_140404A6C[346732677]++ + 346732682] = 1065353216;
  do
  {
    v28 = 1;
    SR_VEC_LANES(128, si128, i32)[0] = 2 * v24;
    v29 = &si128;
    v30 = 8;
    SR_VEC_LANES(128, si128, i32)[1] = 2 * v24 + 1;
    SR_VEC_LANES(128, si128, i32)[2] = 2 * v24 + 3;
    SR_VEC_LANES(128, si128, i32)[3] = 2 * v24 + 2;
    SR_VEC_LANES(128, v254, i32)[0] = 2 * v24 + 8;
    SR_VEC_LANES(128, v254, i32)[1] = 2 * v24 + 9;
    SR_VEC_LANES(128, v254, i32)[2] = 2 * v24 + 11;
    SR_VEC_LANES(128, v254, i32)[3] = 2 * v24 + 10;
    do
    {
      v31 = v28;
      if ( v28 < 8 )
      {
        v32 = SR_VEC_PTR_LANES(128, v29, i32)[0];
        do
          sub_14010C850(1, 0, v32, SR_VEC_LANES(128, si128, u32)[v31++]);
        while ( v31 < 8 );
      }
      ++v28;
      v29 = (__m128i *)((char *)v29 + 4);
      --v30;
    }
    while ( v30 );
    if ( !v24 )
    {
      v33 = dword_140404A6C[346733194];
      v34 = &SR_VEC_LANES(128, si128, u32)[2];
      v35 = 2;
      while ( 1 )
      {
        v36 = *(v34 - 2);
        v37 = 0;
        if ( v33 > 0 )
          break;
LABEL_54:
        dword_140404A6C[3 * v33 + 346733195] = 0;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733196] = v36;
        v40 = *(v34 - 1);
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733197] = 20;
        v33 = dword_140404A6C[346733194] + 1;
        dword_140404A6C[346733194] = v33;
        v41 = v33;
        if ( v33 > 0 )
          goto LABEL_55;
LABEL_61:
        dword_140404A6C[3 * v41 + 346733195] = 0;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733196] = v40;
        v45 = *v34;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733197] = 20;
        v33 = dword_140404A6C[346733194] + 1;
        dword_140404A6C[346733194] = v33;
        v41 = v33;
        if ( v33 > 0 )
          goto LABEL_62;
LABEL_68:
        dword_140404A6C[3 * v41 + 346733195] = 0;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733196] = v45;
        v49 = v34[1];
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733197] = 20;
        v33 = dword_140404A6C[346733194] + 1;
        dword_140404A6C[346733194] = v33;
        v41 = v33;
        if ( v33 > 0 )
          goto LABEL_69;
LABEL_75:
        dword_140404A6C[3 * v41 + 346733195] = 0;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733196] = v49;
        dword_140404A6C[3 * dword_140404A6C[346733194] + 346733197] = 20;
        v33 = ++dword_140404A6C[346733194];
LABEL_76:
        v34 += 4;
        if ( !--v35 )
        {
          v0 = 1;
          goto LABEL_78;
        }
      }
      v38 = &dword_140404A6C[346733197];
      while ( 1 )
      {
        v39 = *(v38 - 1);
        if ( v36 == v39 && *v38 == 20 )
          break;
        if ( v36 == *v38 && v39 == 20 )
          break;
        ++v37;
        v38 += 3;
        if ( v37 >= v33 )
          goto LABEL_54;
      }
      v40 = *(v34 - 1);
      v41 = v33;
LABEL_55:
      v42 = &dword_140404A6C[346733197];
      v43 = 0;
      while ( 1 )
      {
        v44 = *(v42 - 1);
        if ( v40 == v44 && *v42 == 20 )
          break;
        if ( v40 == *v42 && v44 == 20 )
          break;
        ++v43;
        v42 += 3;
        if ( v43 >= v33 )
          goto LABEL_61;
      }
      v45 = *v34;
LABEL_62:
      v46 = &dword_140404A6C[346733197];
      v47 = 0;
      while ( 1 )
      {
        v48 = *(v46 - 1);
        if ( v45 == v48 && *v46 == 20 )
          break;
        if ( v45 == *v46 && v48 == 20 )
          break;
        ++v47;
        v46 += 3;
        if ( v47 >= v33 )
          goto LABEL_68;
      }
      v49 = v34[1];
LABEL_69:
      v50 = &dword_140404A6C[346733197];
      v51 = 0;
      while ( 1 )
      {
        v52 = *(v50 - 1);
        if ( v49 == v52 && *v50 == 20 )
          goto LABEL_76;
        if ( v49 == *v50 && v52 == 20 )
          goto LABEL_76;
        ++v51;
        v50 += 3;
        if ( v51 >= v33 )
          goto LABEL_75;
      }
    }
LABEL_78:
    v53 = SR_VEC_LANES(128, si128, u32)[1];
    v54 = SR_VEC_LANES(128, si128, i32)[3];
    v55 = SR_VEC_LANES(128, si128, u32)[2];
    sub_14010C900(1, 4u, 2 * v24, SR_VEC_LANES(128, si128, u32)[3], SR_VEC_LANES(128, si128, u32)[2], SR_VEC_LANES(128, si128, u32)[1], 0x3F800000u, 0x3F800000u);
    v56 = SR_VEC_LANES(128, v254, i32)[0];
    LODWORD(v245) = v54;
    v57 = SR_VEC_LANES(128, v254, u32)[3];
    sub_14010C900(1, 4u, SR_VEC_LANES(128, v254, u32)[0], SR_VEC_LANES(128, v254, u32)[3], v245, 2 * v24, 0x3F800000u, 0x3F800000u);
    v58 = SR_VEC_LANES(128, v254, u32)[1];
    if ( !v24 )
      sub_14010C900(1, 4u, SR_VEC_LANES(128, v254, u32)[1], v56, 0, v53, 0x3F800000u, 0x3F800000u);
    LODWORD(v245) = v53;
    v59 = SR_VEC_LANES(128, v254, u32)[2];
    sub_14010C900(1, 4u, SR_VEC_LANES(128, v254, u32)[2], v58, v245, v55, 0x3F800000u, 0x3F800000u);
    if ( v24 == 2 )
    {
      sub_14010C900(1, 4u, v57, v59, v55, SR_VEC_LANES(128, si128, u32)[3], 0x3F800000u, 0x3F800000u);
    }
    else if ( v24 == 1 )
    {
      goto LABEL_87;
    }
    sub_14010C900(1, 4u, v56, v58, v59, v57, 0x3F800000u, 0x3F800000u);
LABEL_87:
    ++v24;
  }
  while ( v24 < 3 );
  v60 = &si128;
  v61 = 1;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279020);
  v62 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140279060);
  do
  {
    v63 = v61;
    if ( v61 < 8 )
    {
      v64 = SR_VEC_PTR_LANES(128, v60, i32)[0];
      do
        sub_14010C850(1, 0, v64, SR_VEC_LANES(128, si128, u32)[v63++]);
      while ( v63 < 8 );
    }
    ++v61;
    v60 = (__m128i *)((char *)v60 + 4);
    --v62;
  }
  while ( v62 );
  sub_14010C900(1, 4u, 0x10u, 0x12u, 0xCu, 0xAu, 0x3F800000u, 0);
  v248 = 0;
  v247 = 1065353216;
  v246 = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  LODWORD(v245) = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733954] = 16;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733958] = 1056964608;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733955] = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733959] = 1054867456;
  sub_14010C900(1, 4u, 0x10u, 0x12u, v245, v246, v247, v248);
  v248 = 1086324736;
  v247 = 1065353216;
  v246 = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  LODWORD(v245) = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733953] = 18;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733957] = 1056964608;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733956] = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733960] = 1058013184;
  sub_14010C900(1, 4u, 0x11u, 0x10u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 13;
  LODWORD(v245) = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  sub_14010C900(1, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733953] = 17;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733957] = 1056964608;
  v248 = 0;
  v247 = 1065353216;
  v246 = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733956] = 11;
  LODWORD(v245) = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733960] = 1054867456;
  sub_14010C900(1, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  LODWORD(v245) = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733954] = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733958] = 1056964608;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733955] = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733959] = 1058013184;
  sub_14010C900(1, 4u, 0x12u, 0x13u, v245, v246, v247, v248);
  v248 = 1065353216;
  v247 = 1065353216;
  v246 = 18;
  LODWORD(v245) = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346733963] + 346733963] = 1;
  sub_14010C900(1, 4u, 0x10u, 0x11u, v245, v246, v247, v248);
  v249 = 1048576000;
  v250 = 1061158912;
  sub_14010CAC0(
    1,
    0,
    0,
    2u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    1,
    0,
    1,
    3u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  v249 = 1040187392;
  v250 = 1063256064;
  sub_14010CAC0(
    1,
    0,
    2,
    4u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    1,
    0,
    3,
    5u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  dword_140404A6C[346757397] = 1078427648;
  *(_OWORD *)&dword_140404A6C[346757436] = xmmword_140279390;
  dword_140404A6C[346757396] = 1065353216;
  *(_OWORD *)&dword_140404A6C[346757440] = xmmword_1402798D0;
  dword_140404A6C[346757435] = 4;
  *(_OWORD *)&dword_140404A6C[346757444] = xmmword_140279740;
  sub_14014AAE0(1);
  v65 = 2;
  v66 = 1;
  v67 = dword_140404A6C[346757621];
  strcpy((char *)&dword_140404A6C[346757610], "Metro");
  dword_140404A6C[346757619] = 1142292480;
  dword_140404A6C[346757618] = 100;
  dword_140404A6C[346757607] = 1;
  dword_140404A6C[346781698] = 1054867456;
  v255 = xmmword_1402797A0;
  do
  {
    v68 = v66 - 1;
    if ( (((_BYTE)v66 - 1) & 1) != 0 )
      v69 = 1065353216;
    else
      v69 = -1082130432;
    if ( v68 >= 8 )
      v70 = 1054867456;
    else
      v70 = -1092616192;
    v71 = *((_DWORD *)&v255 + (((v65 - 2) >> 1) & 3));
    dword_140404A6C[5 * v67 + 346757623] = v69;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = v70;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = v71;
    if ( v68 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 0x40000000;
    v72 = ++dword_140404A6C[346757621];
    if ( (v66 & 1) != 0 )
      v73 = 1065353216;
    else
      v73 = -1082130432;
    if ( v66 >= 8 )
      v74 = 1054867456;
    else
      v74 = -1092616192;
    v75 = *((_DWORD *)&v255 + (((v65 - 1) >> 1) & 3));
    dword_140404A6C[5 * v72 + 346757623] = v73;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = v74;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = v75;
    if ( v66 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 0x40000000;
    v76 = ++dword_140404A6C[346757621];
    if ( (((_BYTE)v66 - 1) & 1) != 0 )
      v77 = 1065353216;
    else
      v77 = -1082130432;
    if ( v66 + 1 >= 8 )
      v78 = 1054867456;
    else
      v78 = -1092616192;
    v79 = *((_DWORD *)&v255 + ((v65 >> 1) & 3));
    dword_140404A6C[5 * v76 + 346757623] = v77;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = v78;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = v79;
    if ( v66 + 1 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 0x40000000;
    v80 = v66 + 2;
    v81 = ++dword_140404A6C[346757621];
    if ( (((_BYTE)v66 + 2) & 1) != 0 )
      v82 = 1065353216;
    else
      v82 = -1082130432;
    if ( v80 >= 8 )
      v83 = 1054867456;
    else
      v83 = -1092616192;
    v84 = *((_DWORD *)&v255 + (((v65 + 1) >> 1) & 3));
    dword_140404A6C[5 * v81 + 346757623] = v82;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = v83;
    dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = v84;
    if ( v80 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 0x40000000;
    v66 += 4;
    v67 = dword_140404A6C[346757621] + 1;
    v65 += 4;
    ++dword_140404A6C[346757621];
  }
  while ( v66 <= 16 );
  dword_140404A6C[5 * v67 + 346757623] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = -1092616192;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1056964608;
  v85 = (int)dword_140404A6C[346757621]++;
  dword_140404A6C[5 * v85 + 346757628] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = -1092616192;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1056964608;
  v86 = (int)dword_140404A6C[346757621]++;
  dword_140404A6C[5 * v86 + 346757628] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757626] = 1056964608;
  v87 = (int)dword_140404A6C[346757621]++;
  dword_140404A6C[5 * v87 + 346757628] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757624] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346757621] + 346757625] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346757621]++ + 346757626] = 1056964608;
  v88 = 0;
  dword_140404A6C[346757942] = 16;
  while ( 2 )
  {
    v89 = 1;
    SR_VEC_LANES(128, si128, i32)[0] = 2 * v88;
    p_si128 = &si128;
    v91 = 8;
    SR_VEC_LANES(128, si128, i32)[1] = 2 * v88 + 1;
    SR_VEC_LANES(128, si128, i32)[2] = 2 * v88 + 3;
    SR_VEC_LANES(128, si128, i32)[3] = 2 * v88 + 2;
    SR_VEC_LANES(128, v254, i32)[0] = 2 * v88 + 8;
    SR_VEC_LANES(128, v254, i32)[1] = 2 * v88 + 9;
    SR_VEC_LANES(128, v254, i32)[2] = 2 * v88 + 11;
    SR_VEC_LANES(128, v254, i32)[3] = 2 * v88 + 10;
    do
    {
      v92 = v89;
      if ( v89 < 8 )
      {
        v93 = SR_VEC_PTR_LANES(128, p_si128, i32)[0];
        do
          sub_14010C850(2, 0, v93, SR_VEC_LANES(128, si128, u32)[v92++]);
        while ( v92 < 8 );
      }
      ++v89;
      p_si128 = (__m128i *)((char *)p_si128 + 4);
      --v91;
    }
    while ( v91 );
    v94 = SR_VEC_LANES(128, si128, u32)[1];
    v95 = SR_VEC_LANES(128, si128, i32)[3];
    v96 = SR_VEC_LANES(128, si128, u32)[2];
    sub_14010C900(2, 4u, 2 * v88, SR_VEC_LANES(128, si128, u32)[3], SR_VEC_LANES(128, si128, u32)[2], SR_VEC_LANES(128, si128, u32)[1], 0x3F800000u, 0x3F800000u);
    v97 = SR_VEC_LANES(128, v254, i32)[0];
    LODWORD(v245) = v95;
    v98 = SR_VEC_LANES(128, v254, u32)[3];
    sub_14010C900(2, 4u, SR_VEC_LANES(128, v254, u32)[0], SR_VEC_LANES(128, v254, u32)[3], v245, 2 * v88, 0x3F800000u, 0x3F800000u);
    v99 = SR_VEC_LANES(128, v254, u32)[1];
    if ( !v88 )
      sub_14010C900(2, 4u, SR_VEC_LANES(128, v254, u32)[1], v97, 2 * v88, v94, 0x3F800000u, 0x3F800000u);
    LODWORD(v245) = v94;
    v100 = SR_VEC_LANES(128, v254, u32)[2];
    sub_14010C900(2, 4u, SR_VEC_LANES(128, v254, u32)[2], v99, v245, v96, 0x3F800000u, 0x3F800000u);
    if ( v88 == 2 )
    {
      sub_14010C900(2, 4u, v98, v100, v96, SR_VEC_LANES(128, si128, u32)[3], 0x3F800000u, 0x3F800000u);
      goto LABEL_142;
    }
    if ( v88 != 1 )
LABEL_142:
      sub_14010C900(2, 4u, v97, v99, v100, v98, 0x3F800000u, 0x3F800000u);
    if ( ++v88 < 3 )
      continue;
    break;
  }
  v101 = &si128;
  v102 = 1;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279020);
  v103 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140279060);
  do
  {
    v104 = v102;
    if ( v102 < 8 )
    {
      v105 = SR_VEC_PTR_LANES(128, v101, i32)[0];
      do
        sub_14010C850(2, 0, v105, SR_VEC_LANES(128, si128, u32)[v104++]);
      while ( v104 < 8 );
    }
    ++v102;
    v101 = (__m128i *)((char *)v101 + 4);
    --v103;
  }
  while ( v103 );
  sub_14010C900(2, 4u, 0x10u, 0x12u, 0xCu, 0xAu, 0x3F800000u, 0);
  v248 = 1082130432;
  v247 = 1065353216;
  v246 = 11;
  LODWORD(v245) = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346758907] + 346758907] = 1;
  sub_14010C900(2, 4u, 0x11u, 0x10u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 13;
  LODWORD(v245) = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346758907] + 346758907] = 1;
  sub_14010C900(2, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 12;
  LODWORD(v245) = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346758907] + 346758907] = 1;
  sub_14010C900(2, 4u, 0x12u, 0x13u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 18;
  LODWORD(v245) = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346758907] + 346758907] = 1;
  sub_14010C900(2, 4u, 0x10u, 0x11u, v245, v246, v247, v248);
  v249 = 1048576000;
  v250 = 1061158912;
  sub_14010CAC0(
    2,
    0,
    0,
    2u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    2,
    0,
    1,
    3u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  v249 = 1040187392;
  v250 = 1063256064;
  sub_14010CAC0(
    2,
    0,
    2,
    4u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    2,
    0,
    3,
    5u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  dword_140404A6C[346782341] = 1076133888;
  dword_140404A6C[346782384] = -1094713344;
  dword_140404A6C[346782340] = 1065353216;
  *(_OWORD *)&dword_140404A6C[346782380] = xmmword_140279330;
  dword_140404A6C[346782385] = 0;
  dword_140404A6C[346782379] = 2;
  sub_14014AAE0(2);
  v106 = 2;
  v107 = 1;
  v108 = dword_140404A6C[346782565];
  strcpy((char *)&dword_140404A6C[346782554], "Limo");
  dword_140404A6C[346782563] = 1153138688;
  dword_140404A6C[346782562] = 100;
  dword_140404A6C[346782551] = 1;
  dword_140404A6C[346806642] = 1065353216;
  v255 = xmmword_1402797C0;
  do
  {
    v109 = v107 - 1;
    if ( (((_BYTE)v107 - 1) & 1) != 0 )
      v110 = 1065353216;
    else
      v110 = -1082130432;
    if ( v109 >= 8 )
      v111 = 1054867456;
    else
      v111 = -1092616192;
    v112 = *((_DWORD *)&v255 + (((v106 - 2) >> 1) & 3));
    dword_140404A6C[5 * v108 + 346782567] = v110;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = v111;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = v112;
    if ( v109 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 0x40000000;
    v113 = ++dword_140404A6C[346782565];
    if ( (v107 & 1) != 0 )
      v114 = 1065353216;
    else
      v114 = -1082130432;
    if ( v107 >= 8 )
      v115 = 1054867456;
    else
      v115 = -1092616192;
    v116 = *((_DWORD *)&v255 + (((v106 - 1) >> 1) & 3));
    dword_140404A6C[5 * v113 + 346782567] = v114;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = v115;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = v116;
    if ( v107 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 0x40000000;
    v117 = ++dword_140404A6C[346782565];
    if ( (((_BYTE)v107 - 1) & 1) != 0 )
      v118 = 1065353216;
    else
      v118 = -1082130432;
    if ( v107 + 1 >= 8 )
      v119 = 1054867456;
    else
      v119 = -1092616192;
    v120 = *((_DWORD *)&v255 + ((v106 >> 1) & 3));
    dword_140404A6C[5 * v117 + 346782567] = v118;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = v119;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = v120;
    if ( v107 + 1 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 0x40000000;
    v121 = v107 + 2;
    v122 = ++dword_140404A6C[346782565];
    if ( (((_BYTE)v107 + 2) & 1) != 0 )
      v123 = 1065353216;
    else
      v123 = -1082130432;
    if ( v121 >= 8 )
      v124 = 1054867456;
    else
      v124 = -1092616192;
    v125 = *((_DWORD *)&v255 + (((v106 + 1) >> 1) & 3));
    dword_140404A6C[5 * v122 + 346782567] = v123;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = v124;
    dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = v125;
    if ( v121 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 0x40000000;
    v107 += 4;
    v108 = dword_140404A6C[346782565] + 1;
    v106 += 4;
    ++dword_140404A6C[346782565];
  }
  while ( v107 <= 16 );
  dword_140404A6C[5 * v108 + 346782567] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = -1079508992;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1056964608;
  v126 = (int)dword_140404A6C[346782565]++;
  dword_140404A6C[5 * v126 + 346782572] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = -1079508992;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1056964608;
  v127 = (int)dword_140404A6C[346782565]++;
  dword_140404A6C[5 * v127 + 346782572] = -1084227584;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = 1074528256;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782570] = 1056964608;
  v128 = (int)dword_140404A6C[346782565]++;
  dword_140404A6C[5 * v128 + 346782572] = 1063256064;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782568] = 1066139648;
  dword_140404A6C[5 * dword_140404A6C[346782565] + 346782569] = 1074528256;
  dword_140404A6C[5 * dword_140404A6C[346782565]++ + 346782570] = 1056964608;
  v129 = 0;
  dword_140404A6C[346782886] = 16;
  while ( 2 )
  {
    v130 = 1;
    SR_VEC_LANES(128, si128, i32)[0] = 2 * v129;
    v131 = &si128;
    v132 = 8;
    SR_VEC_LANES(128, si128, i32)[1] = 2 * v129 + 1;
    SR_VEC_LANES(128, si128, i32)[2] = 2 * v129 + 3;
    SR_VEC_LANES(128, si128, i32)[3] = 2 * v129 + 2;
    SR_VEC_LANES(128, v254, i32)[0] = 2 * v129 + 8;
    SR_VEC_LANES(128, v254, i32)[1] = 2 * v129 + 9;
    SR_VEC_LANES(128, v254, i32)[2] = 2 * v129 + 11;
    SR_VEC_LANES(128, v254, i32)[3] = 2 * v129 + 10;
    do
    {
      v133 = v130;
      if ( v130 < 8 )
      {
        v134 = SR_VEC_PTR_LANES(128, v131, i32)[0];
        do
          sub_14010C850(3, 0, v134, SR_VEC_LANES(128, si128, u32)[v133++]);
        while ( v133 < 8 );
      }
      ++v130;
      v131 = (__m128i *)((char *)v131 + 4);
      --v132;
    }
    while ( v132 );
    v135 = SR_VEC_LANES(128, si128, u32)[1];
    v136 = SR_VEC_LANES(128, si128, i32)[3];
    v137 = SR_VEC_LANES(128, si128, u32)[2];
    sub_14010C900(3, 4u, 2 * v129, SR_VEC_LANES(128, si128, u32)[3], SR_VEC_LANES(128, si128, u32)[2], SR_VEC_LANES(128, si128, u32)[1], 0x3F800000u, 0x3F800000u);
    v138 = SR_VEC_LANES(128, v254, i32)[0];
    LODWORD(v245) = v136;
    v139 = SR_VEC_LANES(128, v254, u32)[3];
    sub_14010C900(3, 4u, SR_VEC_LANES(128, v254, u32)[0], SR_VEC_LANES(128, v254, u32)[3], v245, 2 * v129, 0x3F800000u, 0x3F800000u);
    v140 = SR_VEC_LANES(128, v254, u32)[1];
    if ( !v129 )
      sub_14010C900(3, 4u, SR_VEC_LANES(128, v254, u32)[1], v138, 2 * v129, v135, 0x3F800000u, 0x3F800000u);
    LODWORD(v245) = v135;
    v141 = SR_VEC_LANES(128, v254, u32)[2];
    sub_14010C900(3, 4u, SR_VEC_LANES(128, v254, u32)[2], v140, v245, v137, 0x3F800000u, 0x3F800000u);
    if ( v129 == 2 )
    {
      sub_14010C900(3, 4u, v139, v141, v137, SR_VEC_LANES(128, si128, u32)[3], 0x3F800000u, 0x3F800000u);
      goto LABEL_198;
    }
    if ( v129 != 1 )
LABEL_198:
      sub_14010C900(3, 4u, v138, v140, v141, v139, 0x3F800000u, 0x3F800000u);
    if ( ++v129 < 3 )
      continue;
    break;
  }
  v142 = &si128;
  v143 = 1;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279020);
  v144 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140279060);
  do
  {
    v145 = v143;
    if ( v143 < 8 )
    {
      v146 = SR_VEC_PTR_LANES(128, v142, i32)[0];
      do
        sub_14010C850(3, 0, v146, SR_VEC_LANES(128, si128, u32)[v145++]);
      while ( v145 < 8 );
    }
    ++v143;
    v142 = (__m128i *)((char *)v142 + 4);
    --v144;
  }
  while ( v144 );
  v251 = 1048576000;
  v252 = 1048576000;
  sub_14010C900(3, 4u, 0x10u, 0x12u, 0xCu, 0xAu, 0x3F800000u, 0);
  v248 = 1086324736;
  v247 = 1065353216;
  v246 = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  LODWORD(v245) = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783842] = 16;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783846] = 1061158912;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783843] = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783847] = 1059061760;
  sub_14010C900(3, 4u, 0x10u, 0x12u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  LODWORD(v245) = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783841] = 18;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783845] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783842] = 16;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783846] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783843] = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783847] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783844] = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783848] = 1052770304;
  sub_14010C900(3, 4u, 0x10u, 0x12u, v245, v246, v247, v248);
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783841] = 18;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783845] = 1061158912;
  v248 = 1086324736;
  v247 = 1065353216;
  v246 = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783844] = 12;
  LODWORD(v245) = 10;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783848] = 1061158912;
  sub_14010C900(3, 4u, 0x11u, 0x10u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 13;
  LODWORD(v245) = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  sub_14010C900(3, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 1086324736;
  v247 = 1065353216;
  v246 = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  LODWORD(v245) = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783841] = 17;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783845] = 1061158912;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783844] = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783848] = 1059061760;
  sub_14010C900(3, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783841] = 17;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783845] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783842] = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783846] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783843] = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783847] = 1052770304;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783844] = 11;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783848] = 1048576000;
  sub_14010C900(3, 4u, 0x13u, 0x11u, 0xBu, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  LODWORD(v245) = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783842] = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783846] = 1061158912;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783843] = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783847] = 1061158912;
  sub_14010C900(3, 4u, 0x12u, 0x13u, v245, v246, v247, v248);
  v248 = 1065353216;
  v247 = 1065353216;
  v246 = 18;
  LODWORD(v245) = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346783851] + 346783851] = 1;
  sub_14010C900(3, 4u, 0x10u, 0x11u, v245, v246, v247, v248);
  v249 = 1048576000;
  v250 = 1061158912;
  sub_14010CAC0(
    3,
    0,
    0,
    2u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    3,
    0,
    1,
    3u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  v249 = 1040187392;
  v250 = 1063256064;
  sub_14010CAC0(
    3,
    0,
    2,
    4u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  sub_14010CAC0(
    3,
    0,
    3,
    5u,
    (float *)&v249,
    0x3EC00000u,
    0x41400000u,
    0x41638E39u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3E800000u);
  dword_140404A6C[346807285] = 1083490304;
  *(_OWORD *)&dword_140404A6C[346807324] = xmmword_1402793E0;
  dword_140404A6C[346807284] = 1065353216;
  *(_OWORD *)&dword_140404A6C[346807328] = xmmword_1402798E0;
  dword_140404A6C[346807323] = 4;
  *(_OWORD *)&dword_140404A6C[346807332] = xmmword_140279790;
  sub_14014AAE0(3);
  strcpy((char *)&dword_140404A6C[347106826], "Test");
  dword_140404A6C[347106821] = 1;
  dword_140404A6C[347106834] = 20000;
  dword_140404A6C[347106823] = 1;
  dword_140404A6C[347106835] = 1145569280;
  dword_140404A6C[347130914] = 1065353216;
  asset_load_vehicle_sbv_candidate(16, "turbo5");
  sub_14014D6D0(16, 0.3125, 12.0, 2u);
  *(_OWORD *)&dword_140404A6C[347131596] = xmmword_140279370;
  dword_140404A6C[347131601] = 1040187392;
  dword_140404A6C[347131600] = -1089470464;
  dword_140404A6C[347131595] = 2;
  sub_14014AAE0(16);
  strcpy((char *)&dword_140404A6C[347081882], "Hatchback");
  dword_140404A6C[347081877] = 1;
  dword_140404A6C[347081890] = 2000;
  dword_140404A6C[347081879] = 1;
  dword_140404A6C[347081891] = 1145569280;
  dword_140404A6C[347105970] = 1063256064;
  asset_load_vehicle_sbv_candidate(15, "golf5");
  sub_14014D6D0(15, 0.3125, 10.0, 2u);
  *(_OWORD *)&dword_140404A6C[347106652] = xmmword_140279370;
  *(_OWORD *)&dword_140404A6C[347106660] = xmmword_140279750;
  dword_140404A6C[347106651] = 4;
  *(_OWORD *)&dword_140404A6C[347106656] = xmmword_140279920;
  sub_14014AAE0(15);
  strcpy((char *)&dword_140404A6C[346807498], "Turbo");
  dword_140404A6C[346807506] = 20000;
  dword_140404A6C[346807495] = 1;
  dword_140404A6C[346807507] = 1145569280;
  dword_140404A6C[346831586] = 1066401792;
  dword_140404A6C[346807493] = 1;
  asset_load_vehicle_sbv_candidate(4, "turbo5");
  sub_14014D6D0(4, 0.3125, 12.0, 2u);
  *(_OWORD *)&dword_140404A6C[346832268] = xmmword_140279380;
  dword_140404A6C[346832272] = -1088421888;
  dword_140404A6C[346832273] = 1040187392;
  dword_140404A6C[346832267] = 2;
  sub_14014AAE0(4);
  dword_140404A6C[346832451] = 1144750080;
  dword_140404A6C[346856530] = 1069547520;
  *(_QWORD *)&dword_140404A6C[346832442] = 0x53206F62727554LL;
  dword_140404A6C[346832450] = 40000;
  dword_140404A6C[346832439] = 1;
  dword_140404A6C[346832437] = 1;
  asset_load_vehicle_sbv_candidate(5, "turbo5");
  sub_14014D6D0(5, 0.3125, 12.0, 2u);
  *(_OWORD *)&dword_140404A6C[346857212] = xmmword_140279380;
  dword_140404A6C[346857216] = -1088421888;
  dword_140404A6C[346857217] = 1040187392;
  dword_140404A6C[346857211] = 2;
  sub_14014AAE0(5);
  dword_140404A6C[346882325] = 1;
  dword_140404A6C[346882330] = 7233878;
  dword_140404A6C[346882338] = 3000;
  dword_140404A6C[346882327] = 1;
  dword_140404A6C[346882339] = 1157840896;
  dword_140404A6C[346906418] = 1065353216;
  asset_load_vehicle_sbv_candidate(7, "van4");
  sub_14014D6D0(7, 0.375, 20.0, 0);
  *(_OWORD *)&dword_140404A6C[346907100] = xmmword_1402793D0;
  dword_140404A6C[346907116] = -1090519040;
  *(_OWORD *)&dword_140404A6C[346907104] = xmmword_140279910;
  dword_140404A6C[346907117] = 1072693248;
  *(_OWORD *)&dword_140404A6C[346907108] = xmmword_140279440;
  *(_OWORD *)&dword_140404A6C[346907112] = xmmword_140279360;
  dword_140404A6C[346907099] = 6;
  sub_14014AAE0(7);
  strcpy((char *)&dword_140404A6C[346907274], "Van2");
  dword_140404A6C[346907269] = 1;
  dword_140404A6C[346907282] = 3000;
  dword_140404A6C[346907271] = 1;
  dword_140404A6C[346907283] = 1157840896;
  dword_140404A6C[346931362] = 1065353216;
  asset_load_vehicle_sbv_candidate(8, "van4");
  sub_140103270(8, "data/van.tst");
  sub_14014D6D0(8, 0.375, 20.0, 0);
  *(_OWORD *)&dword_140404A6C[346932044] = xmmword_1402793D0;
  dword_140404A6C[346932060] = -1090519040;
  *(_OWORD *)&dword_140404A6C[346932048] = xmmword_140279910;
  dword_140404A6C[346932061] = 1072693248;
  *(_OWORD *)&dword_140404A6C[346932052] = xmmword_140279440;
  dword_140404A6C[346932043] = 6;
  *(_OWORD *)&dword_140404A6C[346932056] = xmmword_140279360;
  sub_14014AAE0(8);
  dword_140404A6C[346932227] = 1150681088;
  *(_QWORD *)&dword_140404A6C[346932218] = 0x6E6176696E694DLL;
  dword_140404A6C[346932226] = 100;
  dword_140404A6C[346932215] = 1;
  dword_140404A6C[346956306] = 1065353216;
  dword_140404A6C[346932213] = 1;
  asset_load_vehicle_sbv_candidate(9, "minivan2");
  sub_14014D6D0(9, 0.375, 12.0, 0);
  *(_OWORD *)&dword_140404A6C[346956988] = xmmword_1402793B0;
  dword_140404A6C[346957004] = -1090519040;
  *(_OWORD *)&dword_140404A6C[346956996] = xmmword_1402793F0;
  dword_140404A6C[346956987] = 6;
  *(_OWORD *)&dword_140404A6C[346956992] = xmmword_140279900;
  dword_140404A6C[346957005] = 1067974656;
  *(_OWORD *)&dword_140404A6C[346957000] = xmmword_140279350;
  sub_14014AAE0(9);
  strcpy((char *)&dword_140404A6C[346857386], "Beamer");
  dword_140404A6C[346857395] = 1147207680;
  dword_140404A6C[346881474] = 1067450368;
  dword_140404A6C[346857381] = 1;
  dword_140404A6C[346857394] = 10000;
  dword_140404A6C[346857383] = 1;
  asset_load_vehicle_sbv_candidate(6, "beamer2");
  sub_14014D6D0(6, 0.3125, 12.0, 2u);
  *(_OWORD *)&dword_140404A6C[346882156] = xmmword_1402793A0;
  dword_140404A6C[346882155] = 4;
  *(_OWORD *)&dword_140404A6C[346882164] = xmmword_140279450;
  *(_OWORD *)&dword_140404A6C[346882160] = xmmword_1402798F0;
  sub_14014AAE0(6);
  v147 = 1;
  v148 = dword_140404A6C[346957173];
  strcpy((char *)&dword_140404A6C[346957162], "Truck");
  LODWORD(v255) = -1073741824;
  dword_140404A6C[346957170] = 1000;
  dword_140404A6C[346957159] = 1;
  dword_140404A6C[346957171] = 1175232512;
  dword_140404A6C[346981250] = 1065353216;
  *(_QWORD *)((char *)&v255 + 4) = 0x4020000000000000LL;
  do
  {
    v149 = v147 - 1;
    if ( (((_BYTE)v147 - 1) & 1) != 0 )
      v150 = 1066401792;
    else
      v150 = -1081081856;
    if ( v149 >= 6 )
    {
      v152 = *((_DWORD *)&v255 + (v149 >> 1) % 3);
      dword_140404A6C[5 * v148 + 346957175] = v150;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1107296256;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v152;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1065353216;
    }
    else
    {
      v151 = *((_DWORD *)&v255 + (v149 >> 1) % 3);
      dword_140404A6C[5 * v148 + 346957175] = v150;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1090519040;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v151;
      if ( v149 >= 4 )
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 0x40000000;
      else
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1082130432;
    }
    v153 = ++dword_140404A6C[346957173];
    if ( (v147 & 1) != 0 )
      v154 = 1066401792;
    else
      v154 = -1081081856;
    v155 = *((_DWORD *)&v255 + (v147 >> 1) % 3);
    if ( v147 >= 6 )
    {
      dword_140404A6C[5 * v153 + 346957175] = v154;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1107296256;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v155;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1065353216;
    }
    else
    {
      dword_140404A6C[5 * v153 + 346957175] = v154;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1090519040;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v155;
      if ( v147 >= 4 )
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 0x40000000;
      else
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1082130432;
    }
    v156 = ++dword_140404A6C[346957173];
    if ( (((_BYTE)v147 - 1) & 1) != 0 )
      v157 = 1066401792;
    else
      v157 = -1081081856;
    v158 = v147 + 1;
    if ( v147 + 1 >= 6 )
    {
      v160 = *((_DWORD *)&v255 + (v158 >> 1) % 3);
      dword_140404A6C[5 * v156 + 346957175] = v157;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1107296256;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v160;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1065353216;
    }
    else
    {
      v159 = *((_DWORD *)&v255 + (v158 >> 1) % 3);
      dword_140404A6C[5 * v156 + 346957175] = v157;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = -1090519040;
      dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = v159;
      if ( v158 >= 4 )
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 0x40000000;
      else
        dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1082130432;
    }
    v147 += 3;
    v148 = ++dword_140404A6C[346957173];
  }
  while ( v147 <= 12 );
  dword_140404A6C[5 * v148 + 346957175] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1067450368;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = -1073741824;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v161 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v161 + 346957180] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1067450368;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = -1073741824;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v162 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v162 + 346957180] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1067450368;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v163 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v163 + 346957180] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1067450368;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v164 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v164 + 346957180] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1072693248;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = -1073741824;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v165 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v165 + 346957180] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1072693248;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = -1073741824;
  v166 = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v167 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v167 + 346957180] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1072693248;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957178] = 1056964608;
  v168 = (int)dword_140404A6C[346957173]++;
  dword_140404A6C[5 * v168 + 346957180] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1072693248;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173]++ + 346957178] = 1056964608;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957175] = 0;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957176] = 1040187392;
  dword_140404A6C[5 * dword_140404A6C[346957173] + 346957177] = 1069547520;
  dword_140404A6C[5 * dword_140404A6C[346957173]++ + 346957178] = 0x40000000;
  dword_140404A6C[346957494] = 20;
  while ( 1 )
  {
    v169 = 1;
    SR_VEC_LANES(128, si128, i32)[0] = 2 * v166;
    v170 = &si128;
    v171 = 8;
    SR_VEC_LANES(128, si128, i32)[1] = 2 * v166 + 1;
    SR_VEC_LANES(128, si128, i32)[2] = 2 * v166 + 3;
    SR_VEC_LANES(128, si128, i32)[3] = 2 * v166 + 2;
    SR_VEC_LANES(128, v254, i32)[0] = 2 * v166 + 6;
    SR_VEC_LANES(128, v254, i32)[1] = 2 * v166 + 7;
    SR_VEC_LANES(128, v254, i32)[2] = 2 * v166 + 9;
    SR_VEC_LANES(128, v254, i32)[3] = 2 * v166 + 8;
    do
    {
      v172 = v169;
      if ( v169 < 8 )
      {
        v173 = SR_VEC_PTR_LANES(128, v170, i32)[0];
        do
          sub_14010C850(10, 0, v173, SR_VEC_LANES(128, si128, u32)[v172++]);
        while ( v172 < 8 );
      }
      ++v169;
      v170 = (__m128i *)((char *)v170 + 4);
      --v171;
    }
    while ( v171 );
    if ( v166 == 1 )
    {
      for ( i = 0; i < 8; ++i )
        sub_14010C850(10, 0, SR_VEC_LANES(128, si128, u32)[i], 0x14u);
    }
    v175 = SR_VEC_LANES(128, si128, u32)[1];
    v176 = SR_VEC_LANES(128, si128, u32)[3];
    v177 = SR_VEC_LANES(128, si128, u32)[2];
    sub_14010C900(
      10,
      4u,
      2 * v166,
      SR_VEC_LANES(128, si128, u32)[3],
      SR_VEC_LANES(128, si128, u32)[2],
      SR_VEC_LANES(128, si128, u32)[1],
      0x3F800000u,
      0x3F800000u);
    v178 = SR_VEC_LANES(128, v254, i32)[0];
    sub_14010C900(10, 4u, SR_VEC_LANES(128, v254, u32)[0], SR_VEC_LANES(128, v254, u32)[3], v176, 2 * v166, 0x3F800000u, 0x3F800000u);
    v179 = SR_VEC_LANES(128, v254, u32)[1];
    if ( !v166 )
      sub_14010C900(10, 4u, SR_VEC_LANES(128, v254, u32)[1], v178, 0, v175, 0x3F800000u, 0x3F800000u);
    LODWORD(v245) = v175;
    v180 = SR_VEC_LANES(128, v254, u32)[2];
    sub_14010C900(10, 4u, SR_VEC_LANES(128, v254, u32)[2], v179, v245, v177, 0x3F800000u, 0x3F800000u);
    if ( v166 == 1 )
      break;
    if ( ++v166 >= 2 )
      goto LABEL_246;
  }
  LODWORD(v245) = v177;
  v181 = SR_VEC_LANES(128, v254, u32)[3];
  sub_14010C900(10, 4u, SR_VEC_LANES(128, v254, u32)[3], v180, v245, v176, 0x3F800000u, 0x3F800000u);
  sub_14010C900(10, 4u, v178, v179, v180, v181, 0x3F800000u, 0x3F800000u);
LABEL_246:
  v182 = &si128;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278FE0);
  v183 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140279040);
  v184 = 1;
  do
  {
    v185 = v184;
    if ( v184 < 8 )
    {
      v186 = SR_VEC_PTR_LANES(128, v182, i32)[0];
      do
        sub_14010C850(10, 0, v186, SR_VEC_LANES(128, si128, u32)[v185++]);
      while ( v185 < 8 );
    }
    ++v184;
    v182 = (__m128i *)((char *)v182 + 4);
    --v183;
  }
  while ( v183 );
  sub_14010C900(10, 4u, 0xCu, 0xEu, 8u, 6u, 0x3F800000u, 0x3F800000u);
  sub_14010C900(10, 4u, 0xDu, 0xCu, 6u, 7u, 0x3F800000u, 0x3F800000u);
  sub_14010C900(10, 4u, 0xFu, 0xDu, 7u, 9u, 0x3F800000u, 0x3F800000u);
  sub_14010C900(10, 4u, 0xEu, 0xFu, 9u, 8u, 0x3F800000u, 0x3F800000u);
  v187 = &si128;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279070);
  v188 = 1;
  v189 = 4;
  do
  {
    v190 = v188;
    if ( v188 < 4 )
    {
      v191 = SR_VEC_PTR_LANES(128, v187, i32)[0];
      do
        sub_14010C850(10, 0, v191, SR_VEC_LANES(128, si128, u32)[v190++]);
      while ( v190 < 4 );
    }
    ++v188;
    v187 = (__m128i *)((char *)v187 + 4);
    --v189;
  }
  while ( v189 );
  v192 = &si128;
  v193 = 1;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279040);
  v194 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140279060);
  do
  {
    v195 = v193;
    if ( v193 < 8 )
    {
      v196 = SR_VEC_PTR_LANES(128, v192, i32)[0];
      do
        sub_14010C850(10, 0, v196, SR_VEC_LANES(128, si128, u32)[v195++]);
      while ( v195 < 8 );
    }
    ++v193;
    v192 = (__m128i *)((char *)v192 + 4);
    --v194;
  }
  while ( v194 );
  v252 = 1046898278;
  v251 = 1048576000;
  sub_14010C900(10, 4u, 0x10u, 0x12u, 0xEu, 0xCu, 0x3F800000u, 0);
  v248 = 0;
  v247 = 1065353216;
  v246 = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  LODWORD(v245) = 14;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958450] = 16;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958454] = 1060320051;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958451] = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958455] = 1059061760;
  sub_14010C900(10, 4u, 0x10u, 0x12u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  LODWORD(v245) = 14;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958449] = 18;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958453] = 1050253722;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958450] = 16;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958454] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958451] = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958455] = 1046898278;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958452] = 14;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958456] = 1052770304;
  sub_14010C900(10, 4u, 0x10u, 0x12u, v245, v246, v247, v248);
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958449] = 18;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958453] = 1061158912;
  v248 = 1086324736;
  v247 = 1065353216;
  v246 = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958452] = 14;
  LODWORD(v245) = 12;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958456] = 1061578342;
  sub_14010C900(10, 4u, 0x11u, 0x10u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 15;
  LODWORD(v245) = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  sub_14010C900(10, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 15;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  LODWORD(v245) = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958449] = 17;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958453] = 1060320051;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958452] = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958456] = 1059061760;
  sub_14010C900(10, 4u, 0x13u, 0x11u, v245, v246, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958449] = 17;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958453] = 1048576000;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958450] = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958454] = 1050253722;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958451] = 15;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958455] = 1052770304;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958452] = 13;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958456] = 1046898278;
  sub_14010C900(10, 4u, 0x13u, 0x11u, 0xDu, 0xFu, v247, v248);
  v248 = 0;
  v247 = 1065353216;
  v246 = 14;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  LODWORD(v245) = 15;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958450] = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958454] = 1061158912;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958451] = 15;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958455] = 1061578342;
  sub_14010C900(10, 4u, 0x12u, 0x13u, v245, v246, v247, v248);
  v248 = 1065353216;
  v247 = 1065353216;
  v246 = 18;
  LODWORD(v245) = 19;
  dword_140404A6C[16 * (__int64)(int)dword_140404A6C[346958459] + 346958459] = 1;
  sub_14010C900(10, 4u, 0x10u, 0x11u, v245, v246, v247, v248);
  v249 = 1061158912;
  v250 = 1048576000;
  sub_14010CAC0(
    10,
    0,
    0,
    2u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  sub_14010CAC0(
    10,
    0,
    1,
    3u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  v249 = 1048576000;
  v250 = 1061158912;
  sub_14010CAC0(
    10,
    0,
    2,
    4u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  sub_14010CAC0(
    10,
    0,
    3,
    5u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  dword_140404A6C[346981893] = 1079508992;
  dword_140404A6C[346981892] = 1066401792;
  v249 = 1056964608;
  v250 = 1056964608;
  sub_14010CAC0(
    10,
    0,
    2,
    4u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  sub_14010CAC0(
    10,
    0,
    3,
    5u,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  *(_OWORD *)&dword_140404A6C[346981932] = xmmword_1402793C0;
  dword_140404A6C[346981936] = 1040187392;
  dword_140404A6C[346981937] = -1084227584;
  dword_140404A6C[346981931] = 2;
  sub_14014AAE0(10);
  v197 = 1;
  v198 = dword_140404A6C[346982117];
  LODWORD(v255) = -1058537472;
  *(_QWORD *)&dword_140404A6C[346982106] = 0x72656C69617254LL;
  dword_140404A6C[346982103] = 0;
  *(_QWORD *)((char *)&v255 + 4) = 0x4100000000000000LL;
  dword_140404A6C[346982114] = 1000;
  dword_140404A6C[346982115] = 1175232512;
  do
  {
    v199 = v197 - 1;
    if ( (((_BYTE)v197 - 1) & 1) != 0 )
      v200 = 1066401792;
    else
      v200 = -1081081856;
    if ( v199 >= 2 )
    {
      if ( v199 >= 6 )
        v201 = 1077936128;
      else
        v201 = -1107296256;
    }
    else
    {
      v201 = 0;
    }
    v202 = *((_DWORD *)&v255 + (v199 >> 1) % 3);
    dword_140404A6C[5 * v198 + 346982119] = v200;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = v201;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = v202;
    if ( v199 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 0x40000000;
    v203 = ++dword_140404A6C[346982117];
    if ( (v197 & 1) != 0 )
      v204 = 1066401792;
    else
      v204 = -1081081856;
    if ( v197 >= 2 )
    {
      if ( v197 >= 6 )
        v205 = 1077936128;
      else
        v205 = -1107296256;
    }
    else
    {
      v205 = 0;
    }
    v206 = *((_DWORD *)&v255 + (v197 >> 1) % 3);
    dword_140404A6C[5 * v203 + 346982119] = v204;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = v205;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = v206;
    if ( v197 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 0x40000000;
    v207 = ++dword_140404A6C[346982117];
    if ( (((_BYTE)v197 - 1) & 1) != 0 )
      v208 = 1066401792;
    else
      v208 = -1081081856;
    v209 = v197 + 1;
    if ( v197 + 1 >= 2 )
    {
      if ( v209 >= 6 )
        v210 = 1077936128;
      else
        v210 = -1107296256;
    }
    else
    {
      v210 = 0;
    }
    v211 = *((_DWORD *)&v255 + (v209 >> 1) % 3);
    dword_140404A6C[5 * v207 + 346982119] = v208;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = v210;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = v211;
    if ( v209 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 0x40000000;
    v212 = v197 + 2;
    v213 = ++dword_140404A6C[346982117];
    if ( (((_BYTE)v197 + 2) & 1) != 0 )
      v214 = 1066401792;
    else
      v214 = -1081081856;
    if ( v212 >= 2 )
    {
      if ( v212 >= 6 )
        v215 = 1077936128;
      else
        v215 = -1107296256;
    }
    else
    {
      v215 = 0;
    }
    v216 = *((_DWORD *)&v255 + (v212 >> 1) % 3);
    dword_140404A6C[5 * v213 + 346982119] = v214;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = v215;
    dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = v216;
    if ( v212 >= 4 )
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
    else
      dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 0x40000000;
    v197 += 4;
    v198 = ++dword_140404A6C[346982117];
  }
  while ( v197 <= 12 );
  v217 = 0;
  dword_140404A6C[5 * v198 + 346982119] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = -1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = 1086324736;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
  v218 = (int)dword_140404A6C[346982117]++;
  dword_140404A6C[5 * v218 + 346982124] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = -1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = 1086324736;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
  v219 = (int)dword_140404A6C[346982117]++;
  dword_140404A6C[5 * v219 + 346982124] = -1081081856;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = -1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = 1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982122] = 1065353216;
  v220 = (int)dword_140404A6C[346982117]++;
  dword_140404A6C[5 * v220 + 346982124] = 1066401792;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = -1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = 1090519040;
  dword_140404A6C[5 * dword_140404A6C[346982117]++ + 346982122] = 1065353216;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982119] = 0;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982120] = 1040187392;
  dword_140404A6C[5 * dword_140404A6C[346982117] + 346982121] = -1059061760;
  dword_140404A6C[5 * dword_140404A6C[346982117]++ + 346982122] = 0x40000000;
  dword_140404A6C[346982438] = 16;
  do
  {
    v221 = 1;
    SR_VEC_LANES(128, si128, i32)[0] = 2 * v217;
    v222 = &si128;
    v223 = 8;
    SR_VEC_LANES(128, si128, i32)[1] = 2 * v217 + 1;
    SR_VEC_LANES(128, si128, i32)[2] = 2 * v217 + 3;
    SR_VEC_LANES(128, si128, i32)[3] = 2 * v217 + 2;
    SR_VEC_LANES(128, v254, i32)[0] = 2 * v217 + 6;
    SR_VEC_LANES(128, v254, i32)[1] = 2 * v217 + 7;
    SR_VEC_LANES(128, v254, i32)[2] = 2 * v217 + 9;
    SR_VEC_LANES(128, v254, i32)[3] = 2 * v217 + 8;
    do
    {
      v224 = v221;
      if ( v221 < 8 )
      {
        v225 = SR_VEC_PTR_LANES(128, v222, i32)[0];
        do
          sub_14010C850(11, 0, v225, SR_VEC_LANES(128, si128, u32)[v224++]);
        while ( v224 < 8 );
      }
      ++v221;
      v222 = (__m128i *)((char *)v222 + 4);
      --v223;
    }
    while ( v223 );
    if ( !v217 )
    {
      for ( j = 0; j < 8; ++j )
        sub_14010C850(11, 0, SR_VEC_LANES(128, si128, u32)[j], 0x10u);
    }
    v227 = SR_VEC_LANES(128, si128, u32)[1];
    v228 = SR_VEC_LANES(128, si128, i32)[3];
    v229 = SR_VEC_LANES(128, si128, u32)[2];
    sub_14010C900(
      11,
      4u,
      2 * v217,
      SR_VEC_LANES(128, si128, u32)[3],
      SR_VEC_LANES(128, si128, u32)[2],
      SR_VEC_LANES(128, si128, u32)[1],
      0x3F800000u,
      0x3F800000u);
    v230 = SR_VEC_LANES(128, v254, i32)[0];
    LODWORD(v245) = v228;
    v231 = SR_VEC_LANES(128, v254, u32)[3];
    sub_14010C900(11, 4u, SR_VEC_LANES(128, v254, u32)[0], SR_VEC_LANES(128, v254, u32)[3], v245, 2 * v217, 0x3F800000u, 0x3F800000u);
    v232 = SR_VEC_LANES(128, v254, u32)[1];
    if ( !v217 )
      sub_14010C900(11, 4u, SR_VEC_LANES(128, v254, u32)[1], v230, 0, v227, 0x3F800000u, 0x3F800000u);
    LODWORD(v245) = v227;
    v233 = SR_VEC_LANES(128, v254, u32)[2];
    sub_14010C900(11, 4u, SR_VEC_LANES(128, v254, u32)[2], v232, v245, v229, 0x3F800000u, 0x3F800000u);
    if ( v217 == 1 )
      sub_14010C900(11, 4u, v231, v233, v229, SR_VEC_LANES(128, si128, u32)[3], 0x3F800000u, 0x3F800000u);
    sub_14010C900(11, 4u, v230, v232, v233, v231, 0x3F800000u, 0x3F800000u);
    ++v217;
  }
  while ( v217 < 2 );
  v234 = &si128;
  v235 = 8;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140279040);
  v236 = 8;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140278F80);
  v237 = 1;
  do
  {
    v238 = v237;
    if ( v237 < 8 )
    {
      v239 = SR_VEC_PTR_LANES(128, v234, i32)[0];
      do
        sub_14010C850(11, 0, v239, SR_VEC_LANES(128, si128, u32)[v238++]);
      while ( v238 < 8 );
    }
    ++v237;
    v234 = (__m128i *)((char *)v234 + 4);
    --v236;
  }
  while ( v236 );
  v240 = &si128;
  v254 = _mm_load_si128((     __m128i *)&xmmword_140278FF0);
  do
  {
    v241 = v0;
    if ( v0 < 8 )
    {
      v242 = SR_VEC_PTR_LANES(128, v240, i32)[0];
      do
        sub_14010C850(11, 0, v242, SR_VEC_LANES(128, si128, u32)[v241++]);
      while ( v241 < 8 );
    }
    ++v0;
    v240 = (__m128i *)((char *)v240 + 4);
    --v235;
  }
  while ( v235 );
  v249 = 1061158912;
  v250 = 1048576000;
  sub_14010CAC0(
    11,
    0,
    12,
    0xEu,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  sub_14010CAC0(
    11,
    0,
    13,
    0xFu,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  v249 = 1048576000;
  v250 = 1061158912;
  sub_14010CAC0(
    11,
    0,
    12,
    0xEu,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  sub_14010CAC0(
    11,
    0,
    13,
    0xFu,
    (float *)&v249,
    0x3EC00000u,
    0x42A00000u,
    0x41360B61u,
    -0.125,
    0x3E800000u,
    0x3F000000u,
    0x3F000000u);
  dword_140404A6C[347006837] = 1094123520;
  dword_140404A6C[347006836] = 1066401792;
  dword_140404A6C[347006875] = 0;
  sub_14014AAE0(11);
  return;
}
#undef v244
#undef v245
#undef v246
#undef v247
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef si128
#undef v254
#undef v255
#undef v256

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014E9C0) ----------------------------------------------------
__int64            sub_14014E9C0(int a1, float a2, float a3, unsigned int a4)
{
  int v4; // edi
  float v5; // xmm11_4
  int v6; // r14d
  __int64 v7; // r13
  float v8; // xmm14_4
  __int64 v9; // rbx
  int v10; // r10d
  __int64 v11; // r8
  char *v12; // r9
  unsigned int v13; // eax
  __int64 v14; // r11
  __int64 v15; // rsi
  unsigned int v16; // eax
  float v17; // xmm2_4
  unsigned int v18; // xmm1_4
  float v19; // xmm2_4
  unsigned int v20; // xmm1_4
  __int64 v21; // rcx
  float v22; // xmm2_4
  unsigned int v23; // xmm1_4
  __int64 v24; // rcx
  float v25; // xmm2_4
  unsigned int v26; // xmm1_4
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int *v30; // r9
  __int64 v31; // r10
  float v32; // xmm2_4
  unsigned int v33; // xmm1_4
  unsigned int v34; // eax
  __int64 result; // rax
  __int64 v36; // rsi
  bool v37; // cc
  __int64 v38; // r12
  float v39; // xmm10_4
  float *v40; // rbp
  int v41; // r14d
  float v42; // xmm3_4
  float v43; // xmm12_4
  signed int v44; // r10d
  unsigned int v45; // edi
  signed int v46; // edx
  __int64 v47; // rbx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float *v51; // rcx
  int v52; // r8d
  float v53; // xmm7_4
  float v54; // xmm1_4
  signed int v55; // eax
  float v56; // xmm9_4
  float v57; // xmm1_4
  int v58; // r9d
  float v59; // xmm8_4
  float v60; // xmm1_4
  signed int v61; // eax
  float v62; // xmm7_4
  float v63; // xmm1_4
  float *v64; // rax
  signed int v65; // ecx
  float v66; // xmm4_4
  float v67; // xmm1_4
  signed int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // r9
  int v71; // r11d
  float v72; // xmm11_4
  float v73; // xmm5_4
  float v74; // xmm8_4
  float v75; // xmm3_4
  float v76; // xmm10_4
  float v77; // xmm6_4
  float v78; // xmm0_4
  float *v79; // rax
  float v80; // xmm2_4
  float v81; // xmm8_4
  float v82; // xmm5_4
  float v83; // xmm3_4
  float v84; // xmm10_4
  float v85; // xmm6_4
  float v86; // xmm0_4
  float *v87; // rax
  float v88; // xmm4_4
  float v89; // xmm9_4
  float v90; // xmm5_4
  float v91; // xmm11_4
  float v92; // xmm6_4
  float v93; // xmm0_4
  float v94; // xmm8_4
  float v95; // xmm9_4
  float v96; // xmm4_4
  float v97; // xmm5_4
  float v98; // xmm11_4
  float v99; // xmm6_4
  float v100; // xmm0_4
  float v101; // xmm11_4
  float v102; // xmm5_4
  float v103; // xmm10_4
  float v104; // xmm0_4
  float v105; // xmm2_4
  float v106; // xmm0_4
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm1_4
  float v110; // xmm2_4
  float v111; // xmm0_4
  float v112; // xmm6_4
  float v113; // xmm2_4
  float v114; // xmm2_4
  float v115; // xmm0_4
  float v116; // xmm1_4
  unsigned int v117; // xmm2_4
  float v118; // xmm0_4
  float *v119; // rcx
  signed int v120; // edx
  signed int v121; // edx
  float v122; // xmm2_4
  float v123; // xmm3_4
  float v124; // xmm5_4
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm3_4
  float v128; // xmm1_4
  float v129; // xmm2_4
  signed int v130; // edx
  int v131; // xmm1_4
  float v132; // xmm2_4
  float v133; // xmm0_4
  float v134; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014E9C0[80];
#define v135 (*(float (*))(void *)(sr_frame_14014E9C0 + 0)) /* [rsp+60h] */
#define v136 (*(int (*))(void *)(sr_frame_14014E9C0 + 4)) /* [rsp+64h] */
#define v137 (*(__int64 (*))(void *)(sr_frame_14014E9C0 + 16)) /* [rsp+70h] */
#define v138 (*(__int64 (*))(void *)(sr_frame_14014E9C0 + 40)) /* [rsp+88h] */
#define v139 (*(float (*)[8])(void *)(sr_frame_14014E9C0 + 48)) /* [rsp+90h] */

  v4 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 180288LL * a1;
  v8 = 0.0;
  v9 = a1;
  v138 = v7;
  v10 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v7);
  if ( v10 < 4 )
  {
    if ( v10 <= 0 )
      goto LABEL_20;
    v15 = 0;
    goto LABEL_16;
  }
  v11 = 24944LL * a1;
  v12 = (char *)&dword_140404A6C[335157369] + v7;
  v13 = ((unsigned int)(v10 - 4) >> 2) + 1;
  v14 = v13;
  v4 = 4 * v13;
  v15 = 4LL * v13;
  v16 = dword_140404A6C[v11 + 346707733];
  do
  {
    v17 = *((float *)v12 + 1);
    v18 = 1065353216;
    if ( v17 < 0.0 )
      v18 = 0x40000000;
    dword_140404A6C[5 * (int)v16 + 346707735 + v11] = *(_DWORD *)v12;
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v17;
    v19 = *((float *)v12 + 5);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 2);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v18;
    v20 = 1065353216;
    v21 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v21 + 1;
    if ( v19 < 0.0 )
      v20 = 0x40000000;
    dword_140404A6C[5 * v21 + 346707740 + v11] = *((_DWORD *)v12 + 4);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v19;
    v22 = *((float *)v12 + 9);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 6);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v20;
    v23 = 1065353216;
    v24 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v24 + 1;
    if ( v22 < 0.0 )
      v23 = 0x40000000;
    dword_140404A6C[5 * v24 + 346707740 + v11] = *((_DWORD *)v12 + 8);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v22;
    v25 = *((float *)v12 + 13);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = *((_DWORD *)v12 + 10);
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707738 + v11] = v23;
    v26 = 1065353216;
    v27 = (int)dword_140404A6C[v11 + 346707733];
    dword_140404A6C[v11 + 346707733] = v27 + 1;
    if ( v25 < 0.0 )
      v26 = 0x40000000;
    dword_140404A6C[5 * v27 + 346707740 + v11] = *((_DWORD *)v12 + 12);
    *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707736 + v11] = v25;
    v28 = *((_DWORD *)v12 + 14);
    v12 += 64;
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733] + 346707737 + v11] = v28;
    dword_140404A6C[5 * (int)dword_140404A6C[v11 + 346707733]++ + 346707738 + v11] = v26;
    v16 = dword_140404A6C[v11 + 346707733];
    --v14;
  }
  while ( v14 );
  if ( v4 < v10 )
  {
LABEL_16:
    v29 = 24944 * v9;
    v30 = &dword_140404A6C[45072 * v9 + 335157369 + 4 * v15];
    v31 = (unsigned int)(v10 - v4);
    do
    {
      v32 = *((float *)v30 + 1);
      v33 = 1065353216;
      if ( v32 < 0.0 )
        v33 = 0x40000000;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707735 + v29] = *v30;
      *(float *)&dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707736 + v29] = v32;
      v34 = v30[2];
      v30 += 4;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733] + 346707737 + v29] = v34;
      dword_140404A6C[5 * (int)dword_140404A6C[v29 + 346707733]++ + 346707738 + v29] = v33;
      --v31;
    }
    while ( v31 );
  }
LABEL_20:
  result = 99776 * v9;
  v36 = 99776 * v9;
  v37 = *(int *)((char *)&dword_140404A6C[335202047] + v7) <= 0;
  v136 = 0;
  v137 = 99776 * v9;
  dword_140404A6C[24944 * v9 + 346708054] = 8;
  *(unsigned int *)((char *)&dword_140404A6C[346708055] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346708056] + result) = 1;
  *(unsigned int *)((char *)&dword_140404A6C[346708057] + result) = 2;
  *(unsigned int *)((char *)&dword_140404A6C[346708058] + result) = 3;
  *(unsigned int *)((char *)&dword_140404A6C[346708059] + result) = 4;
  *(unsigned int *)((char *)&dword_140404A6C[346708060] + result) = 5;
  *(unsigned int *)((char *)&dword_140404A6C[346708061] + result) = 6;
  *(unsigned int *)((char *)&dword_140404A6C[346708062] + result) = 7;
  if ( !v37 )
  {
    v38 = 11268 * v9;
    v39 = 1.6 / (float)(v5 * v5);
    v40 = (float *)((char *)&dword_140404A6C[335202050] + v7);
    v135 = v39;
    do
    {
      v41 = *(unsigned int *)((char *)&dword_140404A6C[335157368] + v7);
      v42 = 65536.0;
      v43 = 65536.0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      if ( v41 >= 4 )
      {
        v48 = *(v40 - 1);
        v49 = *v40;
        v50 = v40[1];
        v51 = (float *)(void *)((unsigned char *)&dword_140404A6C[335157371] + v7);
        v52 = 2;
        v47 = 4LL * (((unsigned int)(v41 - 4) >> 2) + 1);
        do
        {
          v53 = v42;
          v54 = fsqrt(
                  (float)((float)((float)((float)(v49 - *(v51 - 1)) * (float)(v49 - *(v51 - 1))) * 16.0)
                        + (float)((float)(v48 - *(v51 - 2)) * (float)(v48 - *(v51 - 2))))
                + (float)((float)(v50 - *v51) * (float)(v50 - *v51)));
          if ( v54 < v42 )
            v42 = v54;
          v55 = v46;
          if ( v53 <= v54 )
            v55 = v44;
          v56 = v42;
          v57 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[3]) * (float)(v49 - v51[3])) * 16.0)
                        + (float)((float)(v48 - v51[2]) * (float)(v48 - v51[2])))
                + (float)((float)(v50 - v51[4]) * (float)(v50 - v51[4])));
          if ( v57 < v42 )
            v42 = v57;
          v58 = v52 - 1;
          if ( v56 <= v57 )
            v58 = v55;
          v59 = v42;
          v60 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[7]) * (float)(v49 - v51[7])) * 16.0)
                        + (float)((float)(v48 - v51[6]) * (float)(v48 - v51[6])))
                + (float)((float)(v50 - v51[8]) * (float)(v50 - v51[8])));
          if ( v60 < v42 )
            v42 = v60;
          v61 = v52;
          if ( v59 <= v60 )
            v61 = v58;
          v62 = v42;
          v63 = fsqrt(
                  (float)((float)((float)((float)(v49 - v51[11]) * (float)(v49 - v51[11])) * 16.0)
                        + (float)((float)(v48 - v51[10]) * (float)(v48 - v51[10])))
                + (float)((float)(v50 - v51[12]) * (float)(v50 - v51[12])));
          if ( v63 < v42 )
            v42 = v63;
          v44 = v52 + 1;
          if ( v62 <= v63 )
            v44 = v61;
          v51 += 16;
          v46 += 4;
          v52 += 4;
        }
        while ( v46 < v41 - 3 );
      }
      if ( v46 < v41 )
      {
        v64 = (float *)&dword_140404A6C[4 * v47 + 335157371 + 4 * v38];
        do
        {
          v65 = v44;
          v66 = v42;
          v67 = fsqrt(
                  (float)((float)((float)((float)(*v40 - *(v64 - 1)) * (float)(*v40 - *(v64 - 1))) * 16.0)
                        + (float)((float)(*(v40 - 1) - *(v64 - 2)) * (float)(*(v40 - 1) - *(v64 - 2))))
                + (float)((float)(v40[1] - *v64) * (float)(v40[1] - *v64)));
          if ( v67 < v42 )
            v42 = v67;
          v44 = v46;
          if ( v66 <= v67 )
            v44 = v65;
          v64 += 4;
          ++v46;
        }
        while ( v46 < v41 );
      }
      v68 = 0;
      v69 = 0;
      if ( v41 < 4 )
      {
        if ( v41 <= 0 )
          goto LABEL_75;
        v70 = v44;
      }
      else
      {
        v70 = v44;
        v71 = 2;
        do
        {
          if ( v69 != v44 )
          {
            v72 = *(float *)&dword_140404A6C[4 * v69 + 335157369 + 4 * v38];
            v73 = *(float *)&dword_140404A6C[4 * v69 + 335157370 + 4 * v38];
            v74 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v75 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v76 = *(float *)&dword_140404A6C[4 * v69 + 335157371 + 4 * v38];
            v77 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v78 = fsqrt(
                    (float)((float)((float)((float)(*(v40 - 1) - v72) * (float)(*(v40 - 1) - v72))
                                  + (float)((float)(*v40 - v73) * (float)(*v40 - v73)))
                          * 16.0)
                  + (float)((float)(v40[1] - v76) * (float)(v40[1] - v76)));
            if ( (float)((float)((float)((float)(*v40 - v75) * (float)(v73 - v75))
                               + (float)((float)(v72 - v74) * (float)(*(v40 - 1) - v74)))
                       + (float)((float)(v40[1] - v77) * (float)(v76 - v77))) >= 0.0
              && v78 < v43 )
            {
              v45 = v68;
              v43 = v78;
            }
          }
          if ( v69 + 1 != v44 )
          {
            v79 = (float *)&dword_140404A6C[4 * v69 + 335157373 + 4 * v38];
            v80 = *(v40 - 1);
            v81 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v82 = v79[1];
            v83 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v84 = v79[2];
            v85 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v86 = fsqrt(
                    (float)((float)((float)((float)(v80 - *v79) * (float)(v80 - *v79))
                                  + (float)((float)(*v40 - v82) * (float)(*v40 - v82)))
                          * 16.0)
                  + (float)((float)(v40[1] - v84) * (float)(v40[1] - v84)));
            if ( (float)((float)((float)((float)(*v40 - v83) * (float)(v82 - v83))
                               + (float)((float)(*v79 - v81) * (float)(v80 - v81)))
                       + (float)((float)(v40[1] - v85) * (float)(v84 - v85))) >= 0.0
              && v86 < v43 )
            {
              v45 = v71 - 1;
              v43 = v86;
            }
          }
          if ( v69 + 2 != v44 )
          {
            v87 = (float *)&dword_140404A6C[4 * v38 + 335157377 + 4 * v69];
            v88 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v89 = v87[1];
            v90 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v91 = v87[2];
            v92 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v93 = fsqrt(
                    (float)((float)((float)((float)(*(v40 - 1) - *v87) * (float)(*(v40 - 1) - *v87))
                                  + (float)((float)(*v40 - v89) * (float)(*v40 - v89)))
                          * 16.0)
                  + (float)((float)(v40[1] - v91) * (float)(v40[1] - v91)));
            if ( (float)((float)((float)((float)(*(v40 - 1) - v88) * (float)(*v87 - v88))
                               + (float)((float)(*v40 - v90) * (float)(v89 - v90)))
                       + (float)((float)(v40[1] - v92) * (float)(v91 - v92))) >= 0.0
              && v93 < v43 )
            {
              v45 = v71;
              v43 = v93;
            }
          }
          if ( v69 + 3 != v44 )
          {
            v94 = *(float *)&dword_140404A6C[4 * v38 + 335157381 + 4 * v69];
            v95 = *(float *)&dword_140404A6C[4 * v38 + 335157382 + 4 * v69];
            v96 = *(float *)&dword_140404A6C[4 * v44 + 335157369 + 4 * v38];
            v97 = *(float *)&dword_140404A6C[4 * v44 + 335157370 + 4 * v38];
            v98 = *(float *)&dword_140404A6C[4 * v38 + 335157383 + 4 * v69];
            v99 = *(float *)&dword_140404A6C[4 * v44 + 335157371 + 4 * v38];
            v100 = fsqrt(
                     (float)((float)((float)((float)(*(v40 - 1) - v94) * (float)(*(v40 - 1) - v94))
                                   + (float)((float)(*v40 - v95) * (float)(*v40 - v95)))
                           * 16.0)
                   + (float)((float)(v40[1] - v98) * (float)(v40[1] - v98)));
            if ( (float)((float)((float)((float)(*(v40 - 1) - v96) * (float)(v94 - v96))
                               + (float)((float)(*v40 - v97) * (float)(v95 - v97)))
                       + (float)((float)(v40[1] - v99) * (float)(v98 - v99))) >= 0.0
              && v100 < v43 )
            {
              v45 = v71 + 1;
              v43 = v100;
            }
          }
          v69 += 4;
          v68 += 4;
          v71 += 4;
        }
        while ( v68 < v41 - 3 );
        v36 = v137;
        v7 = v138;
        if ( v68 >= v41 )
          goto LABEL_74;
      }
      do
      {
        if ( v69 != v70 )
        {
          v101 = *(float *)&dword_140404A6C[4 * v69 + 335157369 + 4 * v38];
          v102 = *(float *)&dword_140404A6C[4 * v69 + 335157370 + 4 * v38];
          v103 = *(float *)&dword_140404A6C[4 * v69 + 335157371 + 4 * v38];
          v104 = fsqrt(
                   (float)((float)((float)((float)(*(v40 - 1) - v101) * (float)(*(v40 - 1) - v101))
                                 + (float)((float)(*v40 - v102) * (float)(*v40 - v102)))
                         * 16.0)
                 + (float)((float)(v40[1] - v103) * (float)(v40[1] - v103)));
          if ( (float)((float)((float)((float)(*v40 - *(float *)&dword_140404A6C[4 * v70 + 335157370 + 4 * v38])
                                     * (float)(v102 - *(float *)&dword_140404A6C[4 * v70 + 335157370 + 4 * v38]))
                             + (float)((float)(v101 - *(float *)&dword_140404A6C[4 * v70 + 335157369 + 4 * v38])
                                     * (float)(*(v40 - 1) - *(float *)&dword_140404A6C[4 * v70 + 335157369 + 4 * v38])))
                     + (float)((float)(v40[1] - *(float *)&dword_140404A6C[4 * v70 + 335157371 + 4 * v38])
                             * (float)(v103 - *(float *)&dword_140404A6C[4 * v70 + 335157371 + 4 * v38]))) >= 0.0
            && v104 < v43 )
          {
            v45 = v68;
            v43 = v104;
          }
        }
        ++v69;
        ++v68;
      }
      while ( v68 < v41 );
      v36 = v137;
LABEL_74:
      v5 = a2;
      v39 = v135;
LABEL_75:
      v6 = a1;
      v105 = *(float *)&dword_140404A6C[4 * v38 + 335157370 + 4 * (int)v45] - *v40;
      v106 = *(float *)&dword_140404A6C[4 * v38 + 335157371 + 4 * (int)v45] - v40[1];
      v107 = *(float *)&dword_140404A6C[4 * v38 + 335157369 + 4 * (int)v45] - *(v40 - 1);
      v108 = (float)(v105 * v105) + (float)(v107 * v107);
      v109 = *(float *)&dword_140404A6C[4 * v38 + 335157369 + 4 * v44] - *(v40 - 1);
      v110 = v108 + (float)(v106 * v106);
      v111 = *(float *)&dword_140404A6C[4 * v38 + 335157371 + 4 * v44] - v40[1];
      v112 = fsqrt(v110);
      v113 = *(float *)&dword_140404A6C[4 * v38 + 335157370 + 4 * v44] - *v40;
      v114 = fsqrt((float)((float)(v113 * v113) + (float)(v109 * v109)) + (float)(v111 * v111));
      v115 = 1.0 / (float)(v114 + v112);
      v116 = v115 * v114;
      v117 = 1059061760;
      v139[1] = v116;
      v139[0] = v115 * v112;
      v118 = -0.03125;
      if ( a1 )
      {
        if ( (unsigned int)(a1 - 4) <= 1 )
        {
          v117 = 1061158912;
          v118 = 0.0;
        }
      }
      else
      {
        v118 = -0.0625;
        v117 = 1056964608;
      }
      sub_14010CAC0(a1, 0, v44, v45, v139, LODWORD(v5), LODWORD(a3), LODWORD(v39), v118, 0x3E800000u, 0x3F000000u, v117);
      v40 += 5;
      *(unsigned int *)((char *)&dword_140404A6C[20 * *(unsigned int *)((char *)&dword_140404A6C[346731811] + v36)
                                               + 346731808]
                      + v36) = a4;
      result = (unsigned int)(v136 + 1);
      v136 = result;
    }
    while ( (int)result < *(int *)((char *)&dword_140404A6C[335202047] + v7) );
  }
  v119 = (float *)(void *)((unsigned char *)&dword_140404A6C[335202051] + v7);
  v120 = 0;
  *(float *)((char *)&dword_140404A6C[346732453] + v36) = fabs(*v119 - *(float *)((char *)&dword_140404A6C[335202061]
                                                                                + v7));
  *(float *)((char *)&dword_140404A6C[346732452] + v36) = fabs(
                                                            *(float *)((char *)&dword_140404A6C[335202049] + v7)
                                                          - *(float *)((char *)&dword_140404A6C[335202054] + v7));
  *(_QWORD *)((char *)&dword_140404A6C[346732623] + v36) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[346732625] + v36) = 0;
  if ( *(int *)((char *)&dword_140404A6C[346707733] + v36) > 0 )
  {
    result = (__int64)&dword_140404A6C[346707738] + v36;
    do
    {
      if ( *(float *)(result - 8) < 0.0 )
        *(_DWORD *)result = 1082130432;
      ++v120;
      result += 20;
    }
    while ( v120 < *(int *)((char *)&dword_140404A6C[346707733] + v36) );
  }
  if ( v6 != 17 )
  {
    *(_QWORD *)((char *)&dword_140404A6C[346732629] + v36) = 0;
    v121 = 0;
    *(unsigned int *)((char *)&dword_140404A6C[346732631] + v36) = 0;
    v122 = 0.0;
    v123 = 0.0;
    if ( *(int *)((char *)&dword_140404A6C[346707733] + v36) > 0 )
    {
      v124 = *(float *)((char *)&dword_140404A6C[346732630] + v36);
      v125 = *(float *)((char *)&dword_140404A6C[346732631] + v36);
      result = (__int64)&dword_140404A6C[346707738] + v36;
      v126 = 0.0;
      do
      {
        ++v121;
        v127 = (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v36))
             * (float)(*(float *)(result - 8) - *(float *)((char *)&dword_140404A6C[346732624] + v36));
        v128 = (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v36))
             * (float)(*(float *)(result - 4) - *(float *)((char *)&dword_140404A6C[346732625] + v36));
        v129 = (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v36))
             * (float)(*(float *)(result - 12) - *(float *)((char *)&dword_140404A6C[346732623] + v36));
        v126 = v126 + (float)((float)(v127 + v128) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732629] + v36) = v126;
        v124 = v124 + (float)((float)(v128 + v129) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732630] + v36) = v124;
        v125 = v125 + (float)((float)(v127 + v129) * *(float *)result);
        *(float *)((char *)&dword_140404A6C[346732631] + v36) = v125;
        v8 = v8 + *(float *)result;
        result += 20;
      }
      while ( v121 < *(int *)((char *)&dword_140404A6C[346707733] + v36) );
      v122 = v124;
      v123 = v125;
    }
    *(float *)((char *)&dword_140404A6C[346732629] + v36) = (float)(1.0 / v8)
                                                          * *(float *)((char *)&dword_140404A6C[346732629] + v36);
    *(float *)((char *)&dword_140404A6C[346732630] + v36) = (float)(1.0 / v8) * v122;
    *(float *)((char *)&dword_140404A6C[346732631] + v36) = (float)(1.0 / v8) * v123;
  }
  v130 = 0;
  if ( *(int *)((char *)&dword_140404A6C[346731811] + v36) > 0 )
  {
    result = (__int64)&dword_140404A6C[346731830] + v36;
    do
    {
      v131 = *((_DWORD *)v119 - 2);
      ++v130;
      v132 = *v119;
      v133 = *(v119 - 1);
      v119 += 5;
      *(_DWORD *)(result - 4) = v131;
      v134 = v133 - 0.125;
      *(float *)(result + 4) = v132;
      *(float *)result = v134;
      *(_DWORD *)(result - 40) = v131;
      *(float *)(result - 36) = v134;
      *(float *)(result - 32) = v132;
      result += 80;
    }
    while ( v130 < *(int *)((char *)&dword_140404A6C[346731811] + v36) );
  }
  *(_QWORD *)((char *)&dword_140404A6C[346732623] + v36) = 0;
  *(_QWORD *)((char *)&dword_140404A6C[346732625] + v36) = 0;
  *(_QWORD *)((char *)&dword_140404A6C[346732627] + v36) = 0;
  return result;
}
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139

// 140279850: using guessed type __int128 xmmword_140279850;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140192EC0) ----------------------------------------------------
// Candidate .sbv vehicle loader: formats data/%s.sbv, opens rb, large parser with allocation and geometry/physics setup.
void               asset_load_vehicle_sbv_candidate(int a1,      char *a2)
{
  __int64 v2; // rsi
  signed int v3; // r15d
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  signed int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // r12
  signed int v11; // esi
  signed int v12; // r13d
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  __int64 v15; // r12
  int i; // ebx
  signed int v17; // ebx
  __int64 v18; // rsi
  signed int v19; // r13d
  int *v20; // rbp
  __int64 v21; // r12
  int v22; // esi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rsi
  char *v28; // rbx
  signed int v29; // ebp
  __int64 v30; // r13
  int *v31; // rsi
  __int64 v32; // r12
  int v33; // ebx
  signed int v34; // esi
  __int64 v35; // rbp
  __int64 v36; // rbx
  int v37; // r10d
  float v38; // xmm6_4
  __int64 v39; // r8
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  int v43; // edx
  __int64 v44; // rcx
  float *v45; // rax
  signed int v46; // ecx
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float *v50; // rax
  signed int v51; // r9d
  unsigned int *v52; // rdx
  signed int v53; // ecx
  float *v54; // rax
  int v55; // ebx
  __int64 v56; // rbx
  int v57; // ecx
  int v58; // r9d
  unsigned int *v59; // rdx
  unsigned int *v60; // r8
  unsigned int v61; // eax
  signed int v62; // edx
  float *v63; // rax
  signed int v64; // ecx
  float *v65; // rax
  signed int v66; // r8d
  unsigned int *v67; // rdx
  signed int v68; // ecx
  float *v69; // rax
  signed int v70; // ecx
  float *v71; // rax
  signed int v72; // ecx
  float *v73; // rax
  float v74; // xmm2_4
  float v75; // xmm3_4
  __int64 v76; // rdx
  float *v77; // rax
  signed int v78; // r8d
  float v79; // xmm7_4
  float v80; // xmm6_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  unsigned int *v83; // rcx
  unsigned int *v84; // rdx
  unsigned int v85; // eax
  int v86; // edx
  float *v87; // rax
  __int64 v88; // rax
  bool v89; // cc
  signed int v90; // r8d
  __int64 v91; // r9
  unsigned int *v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // ecx
  unsigned int *v96; // rdi
  int v97; // eax
  __int64 v98; // rbp
  unsigned int *v99; // rsi
  unsigned int v100; // edx
  unsigned int v101; // r9d
  int v102; // r8d
  unsigned int *v103; // rcx
  int v104; // r10d
  unsigned int v105; // r8d
  int v106; // r10d
  unsigned int *v107; // rcx
  int v108; // r11d
  unsigned int v109; // edx
  int v110; // r10d
  unsigned int *v111; // rcx
  int v112; // r11d
  int v113; // r8d
  unsigned int *v114; // rcx
  int v115; // r10d
  __int64 v116; // rax
  signed int v117; // ecx
  __int64 v118; // r8
  __int64 v119; // rdx
  signed int v120; // r9d
  __int64 v121; // rdx
  unsigned int *v122; // r8
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // r8d
  __int64 v127; // r9
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rbx
  __int64 v131; // rdi
  __int64 v132; // r9
  __int64 v133; // r8
  __int64 v134; // rax
  float v135; // xmm0_4
  float v136; // xmm1_4
  float v137; // xmm2_4
  __int64 v138; // rdx
  float v139; // xmm8_4
  float v140; // xmm7_4
  float v141; // xmm4_4
  __int64 v142; // rax
  float *v143; // rdx
  float v144; // xmm5_4
  float v145; // xmm3_4
  float v146; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192EC0[624];
#define v148 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_140192EC0 + 32)) /* [rsp+20h] */
#define v150 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 40)) /* [rsp+28h] */
#define v151 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 48)) /* [rsp+30h] */
#define v152 (*(int (*))(void *)(sr_frame_140192EC0 + 56)) /* [rsp+38h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 64)) /* [rsp+40h] */
#define v154 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 72)) /* [rsp+48h] */
#define v155 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 80)) /* [rsp+50h] */
#define v156 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 88)) /* [rsp+58h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_140192EC0 + 96)) /* [rsp+60h] */
#define v158 (*(__int64 (*))(void *)(sr_frame_140192EC0 + 608)) /* [rsp+260h] */

  v2 = a1;
  v3 = 0;
  v152 = a1;
  Buffer = 0;
  sub_140158AB0(FileName, "data/%s.sbv", a2);
  v4 = sub_14020B8D8(FileName, "rb");
  v150 = v2;
  v5 = v4;
  v6 = v2;
  if ( v4 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v4));
    v7 = 180288 * v2;
    v154 = 180288 * v2;
    if ( Buffer >= 5 )
      fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335157365] + v7), 4, 3, (FILE *)(uintptr_t)(v5));
    fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335157368] + v7), 4, 1, (FILE *)(uintptr_t)(v5));
    v8 = 0;
    if ( *(int *)((char *)&dword_140404A6C[335157368] + v7) > 0 )
    {
      do
      {
        v9 = 4 * (11268 * v6 + v8);
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 335157369]), 4, 3, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 335157372]), 4, 1, (FILE *)(uintptr_t)(v5));
        ++v8;
      }
      while ( v8 < (int)dword_140404A6C[45072 * v6 + 335157368] );
      v6 = v150;
    }
    fread_sr((void *)(uintptr_t)(((__int64)(uintptr_t)&dword_140404A6C[335158393] + v7)), 4, 1, (FILE *)(uintptr_t)(v5));
    v10 = 15024 * v6;
    v11 = 0;
    v153 = 15024 * v6;
    if ( *(int *)((char *)&dword_140404A6C[335158393] + v7) > 0 )
    {
      do
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * v10 + 335158394 + 3 * v11]), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * v10 + 335158395 + 3 * v11++]), 4, 2, (FILE *)(uintptr_t)(v5));
      }
      while ( v11 < (int)dword_140404A6C[45072 * v6 + 335158393] );
    }
    fread_sr((void *)(uintptr_t)(((__int64)(uintptr_t)&dword_140404A6C[335164539] + v7)), 4, 1, (FILE *)(uintptr_t)(v5));
    v12 = 0;
    if ( *(int *)((char *)&dword_140404A6C[335164539] + v7) > 0 )
    {
      v13 = 7512 * v150;
      v151 = 7512 * v150;
      v14 = (_DWORD *)(((__int64)(uintptr_t)&dword_140404A6C[335164541] + v7));
      do
      {
        v15 = v13 + v12;
        fread_sr((void *)(uintptr_t)((__int64)(uintptr_t)&dword_140404A6C[335164541 + 6 * v15]), 4, 1, (FILE *)(uintptr_t)(v5));
        for ( i = 0; i < *v14; ++i )
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[6 * v15 + 335164542 + i]), 4, 1, (FILE *)(uintptr_t)(v5));
        v13 = v151;
        ++v12;
        v14 += 6;
      }
      while ( v12 < *(int *)((char *)&dword_140404A6C[335164539] + v7) );
      v10 = v153;
    }
    fread_sr((void *)(uintptr_t)(((__int64)(uintptr_t)&dword_140404A6C[335170684] + v7)), 4, 1, (FILE *)(uintptr_t)(v5));
    v17 = 0;
    if ( *(int *)((char *)&dword_140404A6C[335170684] + v7) > 0 )
    {
      v18 = 45072 * v150;
      do
        fread_sr((void *)(uintptr_t)((__int64)(uintptr_t)&dword_140404A6C[335170685 + 3 * (v10 + v17++)]), 4, 3, (FILE *)(uintptr_t)(v5));
      while ( v17 < (int)dword_140404A6C[v18 + 335170684] );
    }
    fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173757] + v7), 4, 1, (FILE *)(uintptr_t)(v5));
    v19 = 0;
    LODWORD(v151) = 0;
    if ( *(int *)((char *)&dword_140404A6C[335173757] + v7) > 0 )
    {
      v20 = (int *)((char *)&dword_140404A6C[335173759] + v7);
      do
      {
        if ( Buffer >= 3 )
          fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[26 * v19 + 335173758] + v7), 4, 1, (FILE *)(uintptr_t)(v5));
        v155 = 104LL * v19;
        v21 = v7 + v155;
        v156 = v7 + v155;
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173759] + v7 + v155), 4, 1, (FILE *)(uintptr_t)(v5));
        v22 = 0;
        if ( *v20 > 0 )
        {
          v23 = v150;
          v24 = v155;
          v25 = 45072 * v150 + 26LL * v19;
          do
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v25 + 335173760 + v22]), 4, 1, (FILE *)(uintptr_t)(v5));
            if ( Buffer >= 2 )
            {
              v26 = v24 + 16 * (11268 * v23 + v22);
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173768] + v26), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173769] + v26), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173770] + v26), 4, 1, (FILE *)(uintptr_t)(v5));
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335173771] + v26), 4, 1, (FILE *)(uintptr_t)(v5));
            }
            ++v22;
          }
          while ( v22 < *v20 );
          v7 = v154;
          v3 = 0;
          v19 = v151;
          v21 = v156;
        }
        if ( Buffer >= 2 )
        {
          v27 = 4;
          v28 = (char *)&dword_140404A6C[335173764] + v21;
          do
          {
            fread_sr((void *)(uintptr_t)(v28), 4, 1, (FILE *)(uintptr_t)(v5));
            v28 += 4;
            --v27;
          }
          while ( v27 );
        }
        ++v19;
        v20 += 26;
        LODWORD(v151) = v19;
      }
      while ( v19 < *(int *)((char *)&dword_140404A6C[335173757] + v7) );
    }
    fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335200382] + v7), 4, 1, (FILE *)(uintptr_t)(v5));
    v29 = 0;
    if ( *(int *)((char *)&dword_140404A6C[335200382] + v7) > 0 )
    {
      v30 = v153;
      v31 = (int *)((char *)&dword_140404A6C[335200383] + v7);
      do
      {
        v32 = 13LL * v29;
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335200383] + v7 + v32 * 4), 4, 1, (FILE *)(uintptr_t)(v5));
        v33 = 0;
        if ( *v31 > 0 )
        {
          do
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[3 * v30 + 335200384 + 3 * v33++ + v32]), 4, 3, (FILE *)(uintptr_t)(v5));
          while ( v33 < *v31 );
          v7 = v154;
        }
        ++v29;
        v31 += 13;
      }
      while ( v29 < *(int *)((char *)&dword_140404A6C[335200382] + v7) );
    }
    fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335202047] + v7), 4, 1, (FILE *)(uintptr_t)(v5));
    v34 = 0;
    v6 = v150;
    if ( *(int *)((char *)&dword_140404A6C[335202047] + v7) > 0 )
    {
      v35 = 45072 * v150;
      do
      {
        v36 = v7 + 20LL * v34;
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335202048] + v36), 4, 1, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335202049] + v36), 4, 3, (FILE *)(uintptr_t)(v5));
        fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[335202052] + v36), 4, 1, (FILE *)(uintptr_t)(v5));
        ++v34;
      }
      while ( v34 < (int)dword_140404A6C[v35 + 335202047] );
    }
    sub_14020B9E8(v5);
    LODWORD(v2) = v152;
  }
  v37 = Buffer;
  v38 = 0.0;
  if ( Buffer < 2 )
  {
    v39 = 45072 * v6;
    v40 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v43 = dword_140404A6C[45072 * v6 + 335157368];
    if ( v43 > 0 )
    {
      v44 = (unsigned int)v43;
      v45 = (float *)&dword_140404A6C[v39 + 335157371];
      do
      {
        v40 = v40 + *(v45 - 2);
        v41 = v41 + *(v45 - 1);
        v42 = v42 + *v45;
        v45 += 4;
        --v44;
      }
      while ( v44 );
    }
    v46 = 0;
    v47 = v40 * (float)(1.0 / (float)v43);
    v48 = v41 * (float)(1.0 / (float)v43);
    v49 = v42 * (float)(1.0 / (float)v43);
    if ( (int)dword_140404A6C[v39 + 335170684] > 0 )
    {
      v50 = (float *)&dword_140404A6C[v39 + 335170687];
      do
      {
        ++v46;
        *(v50 - 2) = *(v50 - 2) - v47;
        *(v50 - 1) = *(v50 - 1) - v48;
        *v50 = *v50 - v49;
        v50 += 3;
      }
      while ( v46 < (int)dword_140404A6C[v39 + 335170684] );
    }
    v51 = 0;
    if ( (int)dword_140404A6C[v39 + 335200382] > 0 )
    {
      v52 = &dword_140404A6C[v39 + 335200383];
      do
      {
        v53 = 0;
        if ( (int)*v52 > 0 )
        {
          v54 = (float *)(v52 + 3);
          do
          {
            ++v53;
            *(v54 - 2) = *(v54 - 2) - v47;
            *(v54 - 1) = *(v54 - 1) - v48;
            *v54 = *v54 - v49;
            v54 += 3;
          }
          while ( v53 < (int)*v52 );
        }
        ++v51;
        v52 += 13;
      }
      while ( v51 < (int)dword_140404A6C[v39 + 335200382] );
    }
    v55 = 0;
    if ( (int)dword_140404A6C[v39 + 335173757] > 0 )
    {
      do
        sub_140192790(v2, v55++);
      while ( v55 < (int)dword_140404A6C[45072 * v6 + 335173757] );
      v37 = Buffer;
    }
  }
  v56 = 45072 * v6;
  v57 = dword_140404A6C[45072 * v6 + 335157368];
  if ( v37 < 5 )
  {
    v74 = 0.0;
    v75 = 0.0;
    if ( v57 > 0 )
    {
      v76 = dword_140404A6C[45072 * v6 + 335157368];
      v77 = (float *)&dword_140404A6C[v56 + 335157371];
      do
      {
        v38 = v38 + *(v77 - 2);
        v74 = v74 + *(v77 - 1);
        v75 = v75 + *v77;
        v77 += 4;
        --v76;
      }
      while ( v76 );
    }
    v78 = 0;
    dword_140404A6C[v56 + 335161466] = v57;
    v79 = 1.0 / (float)v57;
    v80 = v38 * v79;
    v81 = v74 * v79;
    v82 = v75 * v79;
    if ( v57 > 0 )
    {
      v83 = &dword_140404A6C[v56 + 335161469];
      v84 = &dword_140404A6C[v56 + 335157371];
      do
      {
        v85 = *(v84 - 2);
        v84 += 4;
        *(v83 - 2) = v85;
        v83 += 3;
        ++v78;
        *(v83 - 4) = *(v84 - 5);
        *(v83 - 3) = *(v84 - 4);
      }
      while ( v78 < (int)dword_140404A6C[v56 + 335157368] );
      v57 = dword_140404A6C[v56 + 335161466];
    }
    v86 = 0;
    if ( v57 > 0 )
    {
      v87 = (float *)&dword_140404A6C[v56 + 335161469];
      do
      {
        ++v86;
        *(v87 - 2) = *(v87 - 2) - v80;
        *(v87 - 1) = *(v87 - 1) - v81;
        *v87 = *v87 - v82;
        v87 += 3;
        v57 = dword_140404A6C[v56 + 335161466];
      }
      while ( v86 < v57 );
    }
  }
  else
  {
    dword_140404A6C[v56 + 335161466] = v57;
    v58 = 0;
    if ( v57 > 0 )
    {
      v59 = &dword_140404A6C[v56 + 335161469];
      v60 = &dword_140404A6C[v56 + 335157371];
      do
      {
        v61 = *(v60 - 2);
        v60 += 4;
        *(v59 - 2) = v61;
        v59 += 3;
        ++v58;
        *(v59 - 4) = *(v60 - 5);
        *(v59 - 3) = *(v60 - 4);
        v57 = dword_140404A6C[v56 + 335157368];
      }
      while ( v58 < v57 );
    }
    v62 = 0;
    if ( v57 > 0 )
    {
      v63 = (float *)&dword_140404A6C[v56 + 335157371];
      do
      {
        ++v62;
        *(v63 - 2) = *(v63 - 2) - *(float *)&dword_140404A6C[v56 + 335157365];
        *(v63 - 1) = *(v63 - 1) - *(float *)&dword_140404A6C[v56 + 335157366];
        *v63 = *v63 - *(float *)&dword_140404A6C[v56 + 335157367];
        v63 += 4;
      }
      while ( v62 < (int)dword_140404A6C[v56 + 335157368] );
    }
    v64 = 0;
    if ( (int)dword_140404A6C[v56 + 335170684] > 0 )
    {
      v65 = (float *)&dword_140404A6C[v56 + 335170687];
      do
      {
        ++v64;
        *(v65 - 2) = *(v65 - 2) - *(float *)&dword_140404A6C[v56 + 335157365];
        *(v65 - 1) = *(v65 - 1) - *(float *)&dword_140404A6C[v56 + 335157366];
        *v65 = *v65 - *(float *)&dword_140404A6C[v56 + 335157367];
        v65 += 3;
      }
      while ( v64 < (int)dword_140404A6C[v56 + 335170684] );
    }
    v66 = 0;
    if ( (int)dword_140404A6C[v56 + 335200382] > 0 )
    {
      v67 = &dword_140404A6C[v56 + 335200383];
      do
      {
        v68 = 0;
        if ( (int)*v67 > 0 )
        {
          v69 = (float *)(v67 + 3);
          do
          {
            ++v68;
            *(v69 - 2) = *(v69 - 2) - *(float *)&dword_140404A6C[v56 + 335157365];
            *(v69 - 1) = *(v69 - 1) - *(float *)&dword_140404A6C[v56 + 335157366];
            *v69 = *v69 - *(float *)&dword_140404A6C[v56 + 335157367];
            v69 += 3;
          }
          while ( v68 < (int)*v67 );
        }
        ++v66;
        v67 += 13;
      }
      while ( v66 < (int)dword_140404A6C[v56 + 335200382] );
    }
    v70 = 0;
    if ( (int)dword_140404A6C[v56 + 335161466] > 0 )
    {
      v71 = (float *)&dword_140404A6C[v56 + 335161469];
      do
      {
        ++v70;
        *(v71 - 2) = *(v71 - 2) - *(float *)&dword_140404A6C[v56 + 335157365];
        *(v71 - 1) = *(v71 - 1) - *(float *)&dword_140404A6C[v56 + 335157366];
        *v71 = *v71 - *(float *)&dword_140404A6C[v56 + 335157367];
        v71 += 3;
      }
      while ( v70 < (int)dword_140404A6C[v56 + 335161466] );
    }
    v72 = 0;
    if ( (int)dword_140404A6C[v56 + 335202047] > 0 )
    {
      v73 = (float *)&dword_140404A6C[v56 + 335202051];
      do
      {
        ++v72;
        *(v73 - 2) = *(v73 - 2) - *(float *)&dword_140404A6C[v56 + 335157365];
        *(v73 - 1) = *(v73 - 1) - *(float *)&dword_140404A6C[v56 + 335157366];
        *v73 = *v73 - *(float *)&dword_140404A6C[v56 + 335157367];
        v73 += 5;
      }
      while ( v72 < (int)dword_140404A6C[v56 + 335202047] );
    }
    v57 = dword_140404A6C[v56 + 335161466];
  }
  dword_140404A6C[v56 + 335202129] = v57;
  v88 = sr_path_malloc(12 * v57);
  v89 = (int)dword_140404A6C[v56 + 335161466] <= 0;
  v90 = 0;
  *(_QWORD *)&dword_140404A6C[v56 + 335202131] = v88;
  if ( !v89 )
  {
    v91 = 45072 * v6;
    v92 = &dword_140404A6C[45072 * v6 + 335161469];
    do
    {
      v93 = *(v92 - 2);
      v92 += 3;
      ++v90;
      v94 = *(_QWORD *)&dword_140404A6C[v91 + 335202131] - (_QWORD)&dword_140404A6C[45072 * v6 + 335161469];
      *(unsigned int *)((char *)v92 + v94 - 12) = v93;
      *(unsigned int *)((char *)v92 + v94 - 8) = *(v92 - 4);
      *(unsigned int *)((char *)v92 + v94 - 4) = *(v92 - 3);
    }
    while ( v90 < (int)dword_140404A6C[v91 + 335161466] );
  }
  v95 = dword_140404A6C[v56 + 335164539];
  v96 = &dword_140404A6C[335156849];
  v97 = 0;
  dword_140404A6C[335156847] = 0;
  if ( v95 > 0 )
  {
    v98 = (unsigned int)v95;
    v99 = &dword_140404A6C[v56 + 335164543];
    do
    {
      if ( *(v99 - 2) == 4 )
      {
        v100 = *v99;
        v101 = *(v99 - 1);
        if ( v97 < 256 )
        {
          v102 = 0;
          if ( v97 <= 0 )
          {
LABEL_105:
            dword_140404A6C[2 * v97 + 335156848] = v101;
            dword_140404A6C[2 * dword_140404A6C[335156847] + 335156849] = v100;
            v97 = ++dword_140404A6C[335156847];
          }
          else
          {
            v103 = &dword_140404A6C[335156849];
            while ( 1 )
            {
              v104 = *(v103 - 1);
              if ( v104 == v101 && *v103 == v100 )
                break;
              if ( v104 == v100 && *v103 == v101 )
                break;
              ++v102;
              v103 += 2;
              if ( v102 >= v97 )
                goto LABEL_105;
            }
          }
        }
        v105 = v99[1];
        if ( v97 < 256 )
        {
          v106 = 0;
          if ( v97 <= 0 )
          {
LABEL_114:
            dword_140404A6C[2 * v97 + 335156848] = v100;
            dword_140404A6C[2 * dword_140404A6C[335156847] + 335156849] = v105;
            v97 = ++dword_140404A6C[335156847];
          }
          else
          {
            v107 = &dword_140404A6C[335156849];
            while ( 1 )
            {
              v108 = *(v107 - 1);
              if ( v108 == v100 && *v107 == v105 )
                break;
              if ( v108 == v105 && *v107 == v100 )
                break;
              ++v106;
              v107 += 2;
              if ( v106 >= v97 )
                goto LABEL_114;
            }
          }
        }
        v109 = v99[2];
        if ( v97 < 256 )
        {
          v110 = 0;
          if ( v97 <= 0 )
          {
LABEL_123:
            dword_140404A6C[2 * v97 + 335156848] = v105;
            dword_140404A6C[2 * dword_140404A6C[335156847] + 335156849] = v109;
            v97 = ++dword_140404A6C[335156847];
          }
          else
          {
            v111 = &dword_140404A6C[335156849];
            while ( 1 )
            {
              v112 = *(v111 - 1);
              if ( v112 == v105 && *v111 == v109 )
                break;
              if ( v112 == v109 && *v111 == v105 )
                break;
              ++v110;
              v111 += 2;
              if ( v110 >= v97 )
                goto LABEL_123;
            }
          }
          if ( v97 < 256 )
          {
            v113 = 0;
            if ( v97 <= 0 )
            {
LABEL_132:
              dword_140404A6C[2 * v97 + 335156848] = v109;
              dword_140404A6C[2 * dword_140404A6C[335156847] + 335156849] = v101;
              v97 = ++dword_140404A6C[335156847];
            }
            else
            {
              v114 = &dword_140404A6C[335156849];
              while ( 1 )
              {
                v115 = *(v114 - 1);
                if ( v115 == v109 && *v114 == v101 )
                  break;
                if ( v115 == v101 && *v114 == v109 )
                  break;
                ++v113;
                v114 += 2;
                if ( v113 >= v97 )
                  goto LABEL_132;
              }
            }
          }
        }
      }
      v99 += 6;
      --v98;
    }
    while ( v98 );
  }
  dword_140404A6C[v56 + 335202133] = 1;
  *(_QWORD *)&dword_140404A6C[v56 + 335202135] = 0;
  dword_140404A6C[v56 + 335202137] = 0;
  dword_140404A6C[v56 + 335202138] = dword_140404A6C[v56 + 335161466];
  v116 = sr_path_malloc((int)(4 * dword_140404A6C[v56 + 335161466]));
  v117 = 0;
  *(_QWORD *)&dword_140404A6C[v56 + 335202139] = v116;
  if ( (int)dword_140404A6C[v56 + 335161466] > 0 )
  {
    v118 = 45072 * v6;
    v119 = 0;
    do
    {
      v119 += 4;
      *(_DWORD *)(v119 + *(_QWORD *)&dword_140404A6C[v118 + 335202139] - 4) = v117++;
    }
    while ( v117 < (int)dword_140404A6C[v118 + 335161466] );
  }
  dword_140404A6C[v56 + 335202141] = dword_140404A6C[v56 + 335164539];
  *(_QWORD *)&dword_140404A6C[v56 + 335202143] = sr_path_malloc(36LL * (int)dword_140404A6C[v56 + 335164539]);
  v120 = 0;
  if ( (int)dword_140404A6C[v56 + 335164539] > 0 )
  {
    v121 = 0;
    v122 = &dword_140404A6C[v56 + 335164542];
    do
    {
      v123 = *(v122 - 1);
      v122 += 6;
      v121 += 36;
      ++v120;
      *(_DWORD *)(v121 + *(_QWORD *)&dword_140404A6C[v56 + 335202143] - 32) = v123;
      *(_DWORD *)(v121 + *(_QWORD *)&dword_140404A6C[v56 + 335202143] - 28) = *(v122 - 6);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_140404A6C[v56 + 335202143] - 24) = *(v122 - 5);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_140404A6C[v56 + 335202143] - 20) = *(v122 - 4);
      *(_DWORD *)(v121 + *(_QWORD *)&dword_140404A6C[v56 + 335202143] - 16) = *(v122 - 3);
    }
    while ( v120 < (int)dword_140404A6C[v56 + 335164539] );
  }
  v124 = (int)dword_140404A6C[335156847];
  dword_140404A6C[v56 + 335202145] = dword_140404A6C[335156847];
  v125 = sr_path_malloc(12 * v124);
  v89 = (signed int)dword_140404A6C[335156847] <= 0;
  v126 = 0;
  *(_QWORD *)&dword_140404A6C[v56 + 335202147] = v125;
  if ( !v89 )
  {
    v127 = 45072 * v6;
    v128 = 0;
    do
    {
      v129 = *(v96 - 1);
      v96 += 2;
      v128 += 12;
      ++v126;
      *(_DWORD *)(v128 + *(_QWORD *)&dword_140404A6C[v127 + 335202147] - 12) = v129;
      *(_DWORD *)(v128 + *(_QWORD *)&dword_140404A6C[v127 + 335202147] - 8) = *(v96 - 2);
    }
    while ( v126 < (int)dword_140404A6C[335156847] );
  }
  if ( (int)dword_140404A6C[v56 + 335202141] > 0 )
  {
    v130 = 0;
    v131 = 45072 * v6;
    do
    {
      v132 = *(_QWORD *)&dword_140404A6C[v131 + 335202131];
      v133 = *(_QWORD *)&dword_140404A6C[v131 + 335202143];
      v134 = 3 * *(_DWORD *)(v133 + v130 + 8);
      v135 = *(float *)(v132 + 4 * v134);
      v136 = *(float *)(v132 + 4 * v134 + 4);
      v137 = *(float *)(v132 + 4 * v134 + 8);
      v138 = 3 * *(_DWORD *)(v133 + v130 + 12);
      v139 = *(float *)(v132 + 4 * v138) - v135;
      v140 = *(float *)(v132 + 4 * v138 + 4) - v136;
      v141 = *(float *)(v132 + 4 * v138 + 8) - v137;
      v142 = 3 * *(_DWORD *)(v133 + v130 + 16);
      v143 = (float *)(v130 + v133 + 24);
      v144 = *(float *)(v132 + 4 * v142 + 4) - v136;
      v145 = *(float *)(v132 + 4 * v142 + 8) - v137;
      v146 = *(float *)(v132 + 4 * v142) - v135;
      *v143 = (float)(v144 * v141) - (float)(v145 * v140);
      v143[1] = (float)(v139 * v145) - (float)(v146 * v141);
      v143[2] = (float)(v146 * v140) - (float)(v139 * v144);
      sub_14007A240((__int64)v143, v143);
      ++v3;
      v130 += 36;
    }
    while ( v3 < (int)dword_140404A6C[v131 + 335202141] );
  }
  return;
}
#undef v148
#undef Buffer
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef FileName
#undef v158
