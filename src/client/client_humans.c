#include "shared_client.h"

// 1400522F9: variable 'v11' is possibly undefined
// 1400523E3: variable 'v20' is possibly undefined
// 1400524C5: variable 'v26' is possibly undefined
// 1400525A7: variable 'v32' is possibly undefined
// 140052792: variable 'v41' is possibly undefined
// 140052876: variable 'v47' is possibly undefined
// 14005295A: variable 'v53' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140053840) ----------------------------------------------------
__int64            sub_140053840(float *a1, float *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  unsigned int *v6; // rax
  int v7; // ebp
  __int64 v10; // rsi
  unsigned int v11; // xmm0_4
  char v12; // al
  unsigned int *v13; // rdi
  unsigned int *v14; // r13
  unsigned int *v15; // rbx
  signed int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm5_4
  float i; // xmm4_4
  __int64 v20; // rcx
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  signed int v32; // eax
  float v33; // xmm1_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  char v37; // al
  float v38; // xmm2_4
  char v39; // al
  unsigned int v40; // xmm0_4
  unsigned int v41; // eax
  _Alignas(8) unsigned sr_human_spawn_velocity[3];

  v3 = 0;
  v4 = a3;
  v6 = &dword_140404A6C[280651303];
  v7 = 0;
  while ( *v6 )
  {
    ++v7;
    v6 += 7166;
    if ( (__int64)v6 >= (__int64)&dword_140404A6C[282485799] )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v10 = 7166LL * v7;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v10 + 280651293]), 0, 0x6FF8u);
  dword_140404A6C[v10 + 280651303] = 1;
  dword_140404A6C[v10 + 280651325] = 1;
  (*(int64_t *)(void *)sr_human_spawn_velocity) = 0;
  sr_human_spawn_velocity[2] = 0;
  dword_140404A6C[v10 + 280651305] = v4;
  dword_140404A6C[v10 + 280651306] = -1;
  dword_140404A6C[v10 + 280651317] = 3600;
  if ( (_DWORD)v4 == -1 )
    v11 = 1065353216;
  else
    v11 = dword_140404A6C[3597 * v4 + 71856333];
  dword_140404A6C[v10 + 280651376] = v11;
  dword_140404A6C[v10 + 280651373] = 1065353216;
  dword_140404A6C[v10 + 280651318] = 100;
  dword_140404A6C[v10 + 280658299] = 100;
  dword_140404A6C[v10 + 280658300] = 100;
  dword_140404A6C[v10 + 280658302] = 100;
  dword_140404A6C[v10 + 280658304] = 100;
  dword_140404A6C[v10 + 280658306] = 100;
  dword_140404A6C[v10 + 280658308] = 100;
  dword_140404A6C[v10 + 280658310] = 100;
  dword_140404A6C[v10 + 280658312] = 100;
  dword_140404A6C[v10 + 280651311] = 255;
  dword_140404A6C[v10 + 280651310] = 127;
  v12 = rand();
  dword_140404A6C[v10 + 280651308] = 105;
  dword_140404A6C[v10 + 280651313] = -1;
  dword_140404A6C[v10 + 280651437] = 960;
  v13 = &dword_140404A6C[282486048];
  v14 = &dword_140404A6C[v10 + 280651452];
  v15 = &dword_140404A6C[v10 + 280651442];
  dword_140404A6C[v10 + 280651323] = 3600 * ((v12 & 3) + 3);
  dword_140404A6C[v10 + 280658139] = 0;
  dword_140404A6C[v10 + 280658149] = 0;
  dword_140404A6C[v10 + 280658159] = 0;
  dword_140404A6C[v10 + 280658169] = 0;
  dword_140404A6C[v10 + 280658179] = 0;
  dword_140404A6C[v10 + 280658189] = 0;
  dword_140404A6C[v10 + 280658199] = 0;
  dword_140404A6C[v10 + 280658209] = 0;
  do
  {
    v16 = *(v13 - 3);
    v17 = *((float *)v13 - 2);
    v18 = *((float *)v13 - 1);
    for ( i = *(float *)v13; v16; i = i + *(float *)&dword_140404A6C[v20 + 282486048] )
    {
      v20 = 25LL * v16;
      v16 = dword_140404A6C[v20 + 282486045];
      v17 = v17 + *(float *)&dword_140404A6C[v20 + 282486046];
      v18 = v18 + *(float *)&dword_140404A6C[v20 + 282486047];
    }
    v21 = i * a2[7];
    v22 = (float)((float)(i * a2[6]) + (float)(v17 * *a2)) + (float)((float)(v18 * a2[3]) + *a1);
    v23 = (float)(i * a2[8]) + (float)(v17 * a2[2]);
    v24 = v21 + (float)(v17 * a2[1]);
    v25 = (float)(v18 * a2[4]) + a1[1];
    v26 = (float)(v18 * a2[5]) + a1[2];
    *((float *)v15 - 2) = v22;
    v27 = v24 + v25;
    v28 = *((float *)v13 + 9);
    *((float *)v15 - 1) = v27;
    v29 = v23 + v26;
    *(float *)v15 = v29;
    *((float *)v15 + 1) = v22;
    v30 = *((float *)v13 + 11);
    *((float *)v15 + 2) = v27;
    v31 = *((float *)v13 + 10);
    *((float *)v15 + 3) = v29;
    v15[10] = *(_DWORD *)a2;
    v15[11] = *((_DWORD *)a2 + 1);
    v15[12] = *((_DWORD *)a2 + 2);
    v15[13] = *((_DWORD *)a2 + 3);
    v15[14] = *((_DWORD *)a2 + 4);
    v15[15] = *((_DWORD *)a2 + 5);
    v15[16] = *((_DWORD *)a2 + 6);
    v15[17] = *((_DWORD *)a2 + 7);
    v15[18] = *((_DWORD *)a2 + 8);
    v15[25] = v13[4];
    v15[27] = v13[5];
    v15[28] = v13[6];
    v15[29] = v13[7];
    v15[30] = v13[8];
    v15[26] = 1050673152;
    *((float *)v15 + 34) = v28;
    *((float *)v15 + 35) = v31;
    *((float *)v15 + 36) = v30;
    *((float *)v15 + 31) = 1.0 / v28;
    *((float *)v15 + 33) = 1.0 / v30;
    *((float *)v15 + 32) = 1.0 / v31;
    v32 = sub_14005CF80(0, v14 - 12, v14, (unsigned int *)&(*(int64_t *)(void *)sr_human_spawn_velocity), v15[30], v14 + 21);
    *(v15 - 3) = v32;
    v33 = *((float *)v15 + 31);
    v34 = 47LL * v32;
    *((float *)v15 + 37) = v33;
    v35 = *((float *)v15 + 32);
    dword_140404A6C[v34 + 18215712] = v7;
    dword_140404A6C[v34 + 18215713] = v3;
    if ( v33 > v35 )
    {
      *((float *)v15 + 37) = v35;
      v33 = v35;
    }
    v36 = *((float *)v15 + 33);
    if ( v33 > v36 )
      *((float *)v15 + 37) = v36;
    *((_QWORD *)v15 + 19) = 1065353216;
    *((_QWORD *)v15 + 20) = 0;
    ++v3;
    *((_QWORD *)v15 + 22) = 0;
    v14 += 78;
    *((_QWORD *)v15 + 21) = 1065353216;
    v13 += 25;
    v15[46] = 1065353216;
    v15 += 78;
  }
  while ( v3 < 16 );
  sub_1400AB7B0(v7);
  sub_1400AAAA0(v7);
  sub_140048110((int *)&dword_140404A6C[v10 + 280654321]);
  sub_140048110((int *)&dword_140404A6C[v10 + 280654321]);
  dword_140404A6C[v10 + 280658006] = *(_DWORD *)a1;
  dword_140404A6C[v10 + 280658007] = *((_DWORD *)a1 + 1);
  dword_140404A6C[v10 + 280658008] = *((_DWORD *)a1 + 2);
  dword_140404A6C[v10 + 280658061] = *(_DWORD *)a1;
  dword_140404A6C[v10 + 280658062] = *((_DWORD *)a1 + 1);
  dword_140404A6C[v10 + 280658063] = *((_DWORD *)a1 + 2);
  if ( a3 == -1 )
  {
    v37 = rand();
    dword_140404A6C[v10 + 280658248] = 1023410176;
    dword_140404A6C[v10 + 280658249] = -1105618534;
    dword_140404A6C[v10 + 280658254] = 1023410176;
    dword_140404A6C[v10 + 280658255] = -1105618534;
    v38 = (float)(v37 & 0xF) * 0.001953125;
    *(float *)&dword_140404A6C[v10 + 280658247] = 0.0625 - v38;
    *(float *)&dword_140404A6C[v10 + 280658253] = v38 - 0.0625;
    v39 = rand();
    dword_140404A6C[v10 + 280658252] = 1065353216;
    dword_140404A6C[v10 + 280658258] = 1065353216;
    *(float *)&v40 = (float)((float)(v39 & 0xF) * 0.0078125) + 1.0;
    dword_140404A6C[v10 + 280658250] = v40;
    dword_140404A6C[v10 + 280658251] = v40;
    dword_140404A6C[v10 + 280658256] = v40;
    dword_140404A6C[v10 + 280658257] = v40;
    dword_140404A6C[v10 + 280658444] = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 280658441] = 0;
  }
  else
  {
    dword_140404A6C[v10 + 280658247] = dword_140404A6C[3597 * a3 + 71859768];
    dword_140404A6C[v10 + 280658248] = dword_140404A6C[3597 * a3 + 71859769];
    dword_140404A6C[v10 + 280658249] = dword_140404A6C[3597 * a3 + 71859770];
    dword_140404A6C[v10 + 280658250] = dword_140404A6C[3597 * a3 + 71859771];
    dword_140404A6C[v10 + 280658251] = dword_140404A6C[3597 * a3 + 71859772];
    dword_140404A6C[v10 + 280658252] = dword_140404A6C[3597 * a3 + 71859773];
    dword_140404A6C[v10 + 280658253] = dword_140404A6C[3597 * a3 + 71859774];
    dword_140404A6C[v10 + 280658254] = dword_140404A6C[3597 * a3 + 71859775];
    dword_140404A6C[v10 + 280658255] = dword_140404A6C[3597 * a3 + 71859776];
    dword_140404A6C[v10 + 280658256] = dword_140404A6C[3597 * a3 + 71859777];
    dword_140404A6C[v10 + 280658257] = dword_140404A6C[3597 * a3 + 71859778];
    dword_140404A6C[v10 + 280658258] = dword_140404A6C[3597 * a3 + 71859779];
    dword_140404A6C[v10 + 280658438] = dword_140404A6C[3597 * a3 + 71856286];
    dword_140404A6C[v10 + 280658439] = dword_140404A6C[3597 * a3 + 71859816];
    dword_140404A6C[v10 + 280658440] = dword_140404A6C[3597 * a3 + 71859825];
    dword_140404A6C[v10 + 280658441] = dword_140404A6C[3597 * a3 + 71859817];
    dword_140404A6C[v10 + 280658442] = dword_140404A6C[3597 * a3 + 71859818];
    dword_140404A6C[v10 + 280658443] = dword_140404A6C[3597 * a3 + 71859819];
    dword_140404A6C[v10 + 280658444] = dword_140404A6C[3597 * a3 + 71859820];
    dword_140404A6C[v10 + 280658445] = dword_140404A6C[3597 * a3 + 71859821];
    dword_140404A6C[v10 + 280658446] = dword_140404A6C[3597 * a3 + 71859822];
    v41 = dword_140404A6C[3597 * a3 + 71859823];
    dword_140404A6C[v10 + 280658449] = dword_140404A6C[3597 * a3 + 71859826];
    dword_140404A6C[v10 + 280658447] = v41;
  }
  if ( dword_140404A6C[456202453] )
    ++dword_140404A6C[v7 + 282485789];
  return (unsigned int)v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AB7B0) ----------------------------------------------------
__int64            sub_1400AB7B0(int a1)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite body). */
  extern void human_create_joints(int human);
  human_create_joints(a1);
  return 0; /* result discarded by its caller */
}

//----- (00000001400ABB10) ----------------------------------------------------
_UNKNOWN **           sub_1400ABB10(int a1)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite body). */
  extern void human_update_centre(int human);
  human_update_centre(a1);
  return 0; /* result discarded by all callers */
}

//----- (00000001400AD030) ----------------------------------------------------
void sub_1400AD030(int a1, float sr_pose_angle)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_build_look_pose(int human, float twist);
  human_build_look_pose(a1, sr_pose_angle);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AD2B0) ----------------------------------------------------
__int64            sub_1400AD2B0(int a1, __int64 a2, double a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c (the active ragdoll), checked against the original
     executable (tools/native-compare suite ragdoll). Only a1 is an argument. */
  extern void human_drive_ragdoll(int human);
  (void)a2;
  (void)a3;
  human_drive_ragdoll(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E2D8: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;

//----- (00000001400BE010) ----------------------------------------------------
__int64 sub_1400BE010()
{
  BOOL v0; // r15d
  __int64 v1; // xmm12_8
  int v2; // xmm11_4
  int v3; // r12d
  float v4; // xmm15_4
  __int64 v5; // rbx
  float v6; // xmm8_4
  double v7; // xmm6_8
  double v8; // xmm10_8
  float v9; // xmm9_4
  __int64 v10; // r14
  signed int v11; // eax
  int v12; // r8d
  float *v13; // rdx
  __int16 v14; // r8
  int v15; // ecx
  int v16; // eax
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  int v23; // eax
  bool v24; // zf
  float v25; // xmm2_4
  __int64 v26; // rsi
  __int64 v27; // rdi
  float v28; // xmm1_4
  int v29; // eax
  int v30; // eax
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  double v45; // xmm0_8
  double v46; // xmm1_8
  double v47; // xmm0_8
  double v48; // xmm0_8
  double v49; // xmm0_8
  unsigned int v50; // xmm0_4
  unsigned int v51; // xmm1_4
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // edx
  int v55; // ebx
  float v56; // xmm6_4
  double v57; // xmm0_8
  float v58; // xmm2_4
  bool v59; // cc
  __int64 v60; // r13
  __int64 v61; // r8
  float *v62; // r9
  _DWORD *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  double v69; // xmm2_8
  float v70; // xmm4_4
  float v71; // xmm5_4
  float v72; // xmm6_4
  float v73; // xmm10_4
  double v74; // xmm9_8
  float v75; // xmm2_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  __int64 v78; // xmm2_8
  unsigned int v79; // xmm3_4
  float v80; // xmm0_4
  float v81; // xmm3_4
  float v82; // xmm3_4
  int v83; // eax
  __int64 v84; // rbx
  _DWORD *v85; // rdi
  _BOOL8 v86; // rax
  float v87; // xmm11_4
  float v88; // xmm12_4
  float v89; // xmm5_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm3_4
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  unsigned int v96; // xmm4_4
  float v97; // xmm3_4
  float v98; // xmm5_4
  float v99; // xmm13_4
  int v100; // edi
  __int64 v101; // r15
  float *v102; // rbx
  unsigned int *v103; // rsi
  float v104; // xmm10_4
  float v105; // xmm3_4
  float v106; // xmm5_4
  float v107; // xmm7_4
  float v108; // xmm9_4
  __int64 v109; // rcx
  float v110; // xmm4_4
  float v111; // xmm6_4
  float v112; // xmm8_4
  float v113; // xmm3_4
  float v114; // xmm1_4
  float v115; // xmm6_4
  float v116; // xmm3_4
  float v117; // xmm4_4
  float v118; // xmm5_4
  __int64 v119; // r10
  __int64 v120; // rcx
  float v121; // xmm1_4
  float v122; // xmm0_4
  int v123; // eax
  signed int v124; // edi
  int *v125; // rbx
  __int64 v126; // rax
  float v127; // xmm0_4
  unsigned int v128; // eax
  unsigned int v129; // eax
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // rdi
  __int64 v133; // r12
  int *v134; // rbx
  float v135; // xmm0_4
  float v136; // xmm15_4
  float v137; // xmm1_4
  float v138; // xmm14_4
  float v139; // xmm2_4
  float v140; // xmm4_4
  float v141; // xmm3_4
  float v142; // xmm14_4
  float v143; // xmm4_4
  unsigned int v144; // xmm10_4
  float v145; // xmm5_4
  float v146; // xmm6_4
  __int64 v147; // r10
  __int64 v148; // rcx
  float v149; // xmm7_4
  float v150; // xmm8_4
  float v151; // xmm9_4
  float v152; // xmm12_4
  float v153; // xmm11_4
  float v154; // xmm13_4
  float v155; // xmm4_4
  float v156; // xmm2_4
  int v157; // edx
  float v158; // xmm4_4
  float v159; // xmm2_4
  unsigned int v160; // xmm7_4
  float v161; // xmm3_4
  float v162; // xmm8_4
  float v163; // xmm4_4
  float v164; // xmm9_4
  __int64 v165; // rcx
  float v166; // xmm1_4
  float v167; // xmm0_4
  __int64 v168; // r15
  int v169; // esi
  float v170; // xmm2_4
  __int64 v171; // xmm4_8
  float v172; // xmm15_4
  __int64 v173; // rbx
  float v174; // xmm14_4
  float *v175; // rdi
  float v176; // xmm5_4
  float v177; // xmm6_4
  float v178; // xmm7_4
  float v179; // xmm8_4
  __int64 v180; // xmm9_8
  float v181; // xmm10_4
  float v182; // xmm11_4
  float v183; // xmm12_4
  float v184; // xmm13_4
  int v185; // edx
  __int64 v186; // rcx
  float v187; // xmm3_4
  float v188; // xmm6_4
  float v189; // xmm4_4
  unsigned int v190; // xmm0_4
  float v191; // xmm7_4
  float v192; // xmm1_4
  int v193; // eax
  __int64 v194; // rbx
  __int64 v195; // rsi
  __int64 v196; // rbx
  unsigned int v197; // eax
  unsigned int v198; // eax
  unsigned int v199; // eax
  __int64 v200; // xmm0_8
  unsigned int v201; // ecx
  float v202; // xmm3_4
  __int64 v203; // xmm2_8
  int v204; // eax
  float v205; // xmm1_4
  float v206; // xmm0_4
  unsigned int v207; // xmm0_4
  unsigned int v208; // xmm8_4
  unsigned int v209; // xmm0_4
  float v210; // xmm10_4
  float v211; // xmm11_4
  float v212; // xmm9_4
  __int64 v213; // rdx
  int v214; // ecx
  __int64 v215; // r8
  float v216; // xmm0_4
  float v217; // xmm1_4
  float v218; // xmm2_4
  float v219; // xmm7_4
  float v220; // xmm2_4
  float v221; // xmm6_4
  float v222; // xmm3_4
  float v223; // xmm4_4
  float v224; // xmm5_4
  float v225; // xmm8_4
  unsigned int v226; // eax
  unsigned int v227; // xmm1_4
  float v228; // xmm2_4
  float *v229; // r8
  float v230; // xmm1_4
  float v231; // xmm3_4
  float v232; // xmm1_4
  float v233; // xmm7_4
  float v234; // xmm4_4
  float v235; // xmm3_4
  float v236; // xmm7_4
  float v237; // xmm2_4
  float v238; // xmm8_4
  float v239; // xmm1_4
  float v240; // xmm3_4
  unsigned int v241; // xmm2_4
  unsigned int v242; // xmm1_4
  float v243; // xmm2_4
  float v244; // xmm4_4
  float v245; // xmm0_4
  float v246; // xmm4_4
  unsigned int v247; // xmm2_4
  unsigned int v248; // xmm1_4
  float v249; // xmm0_4
  __int64 v250; // rax
  __int64 v251; // rdi
  float v252; // xmm12_4
  unsigned int *v253; // r13
  float v254; // xmm7_4
  unsigned int v255; // xmm6_4
  float v256; // xmm5_4
  float v257; // xmm3_4
  float v258; // xmm1_4
  float v259; // xmm2_4
  float v260; // xmm3_4
  float v261; // xmm4_4
  float v262; // xmm3_4
  unsigned int v263; // xmm1_4
  float v264; // xmm7_4
  int v265; // r8d
  __int64 v266; // r15
  __int64 v267; // rsi
  _DWORD *v268; // rbx
  _DWORD *v269; // r12
  __int64 v270; // xmm2_8
  double v271; // xmm0_8
  double v272; // xmm2_8
  double v273; // xmm2_8
  double v274; // xmm2_8
  double v275; // xmm2_8
  __int64 v276; // rcx
  float v277; // xmm4_4
  float v278; // xmm5_4
  float v279; // xmm6_4
  unsigned int v280; // xmm2_4
  unsigned int v281; // xmm1_4
  unsigned int v282; // xmm2_4
  __int64 v283; // xmm4_8
  float v284; // xmm0_4
  float v285; // xmm5_4
  unsigned int v286; // xmm0_4
  unsigned int v287; // xmm3_4
  unsigned int v288; // xmm1_4
  int v289; // ecx
  int v290; // ecx
  _DWORD *v291; // r8
  _DWORD *v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // rdi
  int v295; // ebx
  __int64 v296; // r14
  float *v297; // rdi
  __int64 v298; // rsi
  float v299; // xmm1_4
  float v300; // xmm0_4
  __int64 v301; // r15
  int *v302; // rsi
  __int64 v303; // rdi
  __int64 v304; // rcx
  float v305; // xmm0_4
  float v306; // xmm1_4
  __int64 v307; // rcx
  float v308; // xmm0_4
  __int64 v309; // rcx
  __int64 v310; // rax
  __int64 v311; // rbx
  unsigned int v312; // edx
  int v313; // edx
  __int64 v314; // r9
  char *v315; // r8
  __int64 v316; // rdx
  unsigned int *v317; // rcx
  int v318; // r12d
  __int64 v319; // r14
  __int64 v320; // r13
  int v321; // ecx
  int v322; // eax
  int v323; // r13d
  int *v324; // r12
  int *v325; // r15
  int v326; // edi
  __int64 v327; // rsi
  int v328; // edx
  __int64 v329; // rbx
  unsigned int *v330; // r9
  unsigned int v331; // eax
  unsigned int v332; // edi
  int v333; // eax
  int v334; // edx
  int v335; // ecx
  __int64 v336; // rbx
  signed int v337; // r11d
  __int64 v338; // r8
  unsigned int v339; // ecx
  __int64 v340; // rax
  int v341; // r9d
  int v342; // ecx
  int v343; // r12d
  __int64 v344; // r15
  unsigned int v345; // esi
  unsigned int v346; // eax
  __int64 v347; // rdi
  signed int v348; // ecx
  __int64 v349; // rcx
  int v350; // ecx
  __int64 v351; // rax
  unsigned int v352; // ecx
  signed int v353; // ecx
  float *v354; // rdi
  unsigned int *v355; // rsi
  float v356; // xmm3_4
  float v357; // xmm7_4
  float v358; // xmm5_4
  float v359; // xmm0_4
  __int64 v360; // rax
  __int64 v361; // rbx
  float v362; // xmm10_4
  float v363; // xmm8_4
  float v364; // xmm9_4
  float v365; // xmm13_4
  float v366; // xmm12_4
  float v367; // xmm15_4
  float v368; // xmm14_4
  float v369; // xmm2_4
  float v370; // xmm7_4
  float v371; // xmm6_4
  float v372; // xmm0_4
  double v373; // xmm2_8
  float v374; // xmm11_4
  float v375; // xmm7_4
  __int64 v376; // rdx
  __m128 v377; // xmm0
  float v378; // xmm9_4
  float v379; // xmm8_4
  float v380; // xmm5_4
  float v381; // xmm5_4
  float v382; // xmm3_4
  float v383; // xmm4_4
  float v384; // xmm13_4
  float v385; // xmm14_4
  float v386; // xmm10_4
  float v387; // xmm15_4
  float v388; // xmm11_4
  float v389; // xmm8_4
  float v390; // xmm12_4
  float v391; // xmm9_4
  float v392; // xmm7_4
  float v393; // xmm5_4
  float v394; // xmm6_4
  float v395; // xmm4_4
  float v396; // xmm1_4
  float v397; // xmm5_4
  float v398; // xmm3_4
  float v399; // xmm4_4
  float v400; // xmm5_4
  float v401; // xmm4_4
  float v402; // xmm1_4
  float v403; // xmm3_4
  float v404; // xmm4_4
  float v405; // xmm3_4
  float v406; // xmm15_4
  float sr_human_tick_endpoint[3];
  float sr_human_tick_offset[3];
  float sr_human_tick_normal[3];
  float sr_human_tick_point[3];
  _Alignas(16) unsigned sr_human_tick_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400BE010[720];
#define v408 (*(_DWORD (*)[20])(void *)(sr_frame_1400BE010 + 0)) /* [rsp+8h] */
#define v409 (*(float (*))(void *)(sr_frame_1400BE010 + 80)) /* [rsp+58h] */
#define v410 (*(unsigned int (*))(void *)(sr_frame_1400BE010 + 84)) /* [rsp+5Ch] */
#define v411 (*(float (*))(void *)(sr_frame_1400BE010 + 88)) /* [rsp+60h] */
#define v412 (*(float (*))(void *)(sr_frame_1400BE010 + 92)) /* [rsp+64h] */
#define v413 (*(float (*))(void *)(sr_frame_1400BE010 + 96)) /* [rsp+68h] */
#define v414 (*(float (*))(void *)(sr_frame_1400BE010 + 100)) /* [rsp+6Ch] */
#define v415 (*(int (*))(void *)(sr_frame_1400BE010 + 104)) /* [rsp+70h] */
#define v416 (*(float (*))(void *)(sr_frame_1400BE010 + 108)) /* [rsp+74h] */
#define v417 (*(unsigned int * (*))(void *)(sr_frame_1400BE010 + 112)) /* [rsp+78h] */
#define v421 (*(char * (*))(void *)(sr_frame_1400BE010 + 136)) /* [rsp+90h] */
#define v422 (*(float (*))(void *)(sr_frame_1400BE010 + 144)) /* [rsp+98h] */
#define v423 (*(float (*))(void *)(sr_frame_1400BE010 + 148)) /* [rsp+9Ch] */
#define v424 (*(__int128 (*))(void *)(sr_frame_1400BE010 + 160)) /* [rsp+A8h] */
#define v425 (*(int (*))(void *)(sr_frame_1400BE010 + 176)) /* [rsp+B8h] */
#define v426 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 184)) /* [rsp+C0h] */
#define v427 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 192)) /* [rsp+C8h] */
#define v428 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 200)) /* [rsp+D0h] */
#define v432 (*(float (*))(void *)(sr_frame_1400BE010 + 224)) /* [rsp+E8h] */
#define v433 (*(int (*))(void *)(sr_frame_1400BE010 + 240)) /* [rsp+F8h] */
#define v434 (*(int (*))(void *)(sr_frame_1400BE010 + 256)) /* [rsp+108h] */
#define v435 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 264)) /* [rsp+110h] */
#define v439 (*(float (*))(void *)(sr_frame_1400BE010 + 288)) /* [rsp+128h] */
#define v440 (*(float (*))(void *)(sr_frame_1400BE010 + 292)) /* [rsp+12Ch] */
#define v441 (*(float (*))(void *)(sr_frame_1400BE010 + 296)) /* [rsp+130h] */
#define v442 (*(float (*))(void *)(sr_frame_1400BE010 + 300)) /* [rsp+134h] */
#define v443 (*(float (*))(void *)(sr_frame_1400BE010 + 304)) /* [rsp+138h] */
#define v444 (*(float (*))(void *)(sr_frame_1400BE010 + 308)) /* [rsp+13Ch] */
#define v445 (*(double (*))(void *)(sr_frame_1400BE010 + 312)) /* [rsp+140h] */
#define v446 (*(int (*))(void *)(sr_frame_1400BE010 + 320)) /* [rsp+148h] */
#define v447 (*(float (*))(void *)(sr_frame_1400BE010 + 324)) /* [rsp+14Ch] */
#define v448 (*(int (*))(void *)(sr_frame_1400BE010 + 328)) /* [rsp+150h] */
#define v449 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 336)) /* [rsp+158h] */
#define v450 (*(double (*))(void *)(sr_frame_1400BE010 + 344)) /* [rsp+160h] */
#define v451 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 352)) /* [rsp+168h] */
#define v452 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 360)) /* [rsp+170h] */
#define v453 (*(double (*))(void *)(sr_frame_1400BE010 + 368)) /* [rsp+178h] */
#define v454 (*(double (*))(void *)(sr_frame_1400BE010 + 376)) /* [rsp+180h] */
#define v461 (*(__m128i (*)[16])(void *)(sr_frame_1400BE010 + 448)) /* [rsp+1C8h] */
#define v462 (*(__int64 (*))(void *)(sr_frame_1400BE010 + 704)) /* [rsp+2C8h] */

  v0 = (int)v417;
  v1 = 0;
  v2 = 0x7FFFFFFF;
  v3 = 0;
  v4 = 1.0;
  v5 = 0;
  v6 = 0.015625;
  v7 = 3.14159265359;
  v8 = 6.28318530718;
  v9 = 0.5;
  LODWORD(v424) = 0x80000000;
  v443 = 0.0009765625;
  v444 = 0.984375;
  *(float *)&v446 = 0.625;
  v447 = -0.046875;
  *(float *)&v448 = 0.046875;
  v445 = -1.570796326795;
  v453 = 1.570796326795;
  v440 = 0.03999999910593033;
  v441 = 0.001953125;
  v450 = 0.25;
  v439 = 1.52587890625e-05;
  v442 = 0.375;
  v454 = -3.14159265359;
  v423 = 0.05000000074505806;
  v433 = 0x7FFFFFFF;
  v409 = 0.0;
  *(float *)&v425 = 1.0;
  *(float *)&v415 = 0.015625;
  *(double *)&v452 = 3.14159265359;
  *(double *)&v451 = 6.28318530718;
  v422 = 0.5;
  v432 = 0.1875;
  v410 = 0;
  v434 = (int)v417;
  v435 = (int)v417;
  v449 = 0;
  do
  {
    v10 = 28664 * v5;
    v428 = 28664 * v5;
    if ( !dword_140404A6C[7166 * v5 + 280651303] )
      goto LABEL_477;
    v11 = 0;
    *(unsigned int *)((char *)&dword_140404A6C[280651427] + v10) = 0;
    v12 = 0;
    v13 = (float *)&dword_140404A6C[129716758];
    do
    {
      if ( *((_DWORD *)v13 - 49)
        && v11 < 8
        && *(v13 - 5) <= *(float *)((char *)&dword_140404A6C[280651418] + v10)
        && *(v13 - 2) >= *(float *)((char *)&dword_140404A6C[280651415] + v10)
        && *(v13 - 3) <= *(float *)((char *)&dword_140404A6C[280651420] + v10)
        && *v13 >= *(float *)((char *)&dword_140404A6C[280651417] + v10)
        && *(v13 - 4) <= *(float *)((char *)&dword_140404A6C[280651419] + v10)
        && *(v13 - 1) >= *(float *)((char *)&dword_140404A6C[280651416] + v10) )
      {
        dword_140404A6C[7166 * v5 + 280651428 + v11] = v12;
        v11 = *(unsigned int *)((char *)&dword_140404A6C[280651427] + v10) + 1;
        *(unsigned int *)((char *)&dword_140404A6C[280651427] + v10) = v11;
      }
      ++v12;
      v13 += 5210;
    }
    while ( v12 < 512 );
    sub_1400B5E70(v3);
    v14 = dword_140404A6C[283831474];
    if ( (dword_140404A6C[283831474] & 0x1F) == 0 )
    {
      v15 = *(unsigned int *)((char *)&dword_140404A6C[280651310] + v10);
      v16 = *(unsigned int *)((char *)&dword_140404A6C[280651311] + v10);
      if ( v15 > v16 )
      {
        v15 = *(unsigned int *)((char *)&dword_140404A6C[280651311] + v10);
        *(unsigned int *)((char *)&dword_140404A6C[280651310] + v10) = v16;
      }
      if ( v16 > 127 )
        v16 = 127;
      if ( v15 < v16 )
        *(unsigned int *)((char *)&dword_140404A6C[280651310] + v10) = v15 + 1;
    }
    v17 = *(float *)((char *)&dword_140404A6C[280658133] + v10);
    v18 = *(float *)((char *)&dword_140404A6C[280658132] + v10);
    v19 = *(float *)((char *)&dword_140404A6C[280658134] + v10);
    if ( fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19)) <= v443 )
    {
      v20 = *(float *)&v1;
      v21 = *(float *)&v1;
      v22 = *(float *)&v1;
    }
    else
    {
      v20 = v19 * v444;
      v21 = v17 * v444;
      v22 = v18 * v444;
    }
    *(float *)((char *)&dword_140404A6C[280658132] + v10) = v22;
    *(float *)((char *)&dword_140404A6C[280658133] + v10) = v21;
    *(float *)((char *)&dword_140404A6C[280658134] + v10) = v20;
    v23 = *(unsigned int *)((char *)&dword_140404A6C[280651323] + v10);
    if ( v23 > 0 )
      *(unsigned int *)((char *)&dword_140404A6C[280651323] + v10) = v23 - 1;
    v24 = (*((_BYTE *)&dword_140404A6C[280651436] + v10) & 8) == 0;
    v25 = v4;
    v26 = *(int *)((char *)&dword_140404A6C[280651313] + v10);
    v27 = *(int *)((char *)&dword_140404A6C[280651314] + v10);
    v416 = *(float *)((char *)&dword_140404A6C[280651313] + v10);
    LODWORD(v426) = v27;
    if ( !v24 )
      v25 = *(float *)&v446;
    if ( !dword_140404A6C[179955862] )
    {
      v28 = *(float *)((char *)&dword_140404A6C[280651373] + v10);
      if ( v28 >= (float)(v25 - v6) )
      {
        if ( v28 <= (float)(v25 + v6) )
          *(float *)((char *)&dword_140404A6C[280651373] + v10) = v25;
        else
          *(float *)((char *)&dword_140404A6C[280651373] + v10) = v28 - v6;
      }
      else
      {
        *(float *)((char *)&dword_140404A6C[280651373] + v10) = v28 + v6;
      }
    }
    if ( (v14 & 7) == 0 )
    {
      v29 = *(unsigned int *)((char *)&dword_140404A6C[280651333] + v10);
      if ( v29 > 0 )
        *(unsigned int *)((char *)&dword_140404A6C[280651333] + v10) = v29 - 1;
    }
    v30 = *(unsigned int *)((char *)&dword_140404A6C[280651309] + v10);
    if ( v30 > 0 )
      *(unsigned int *)((char *)&dword_140404A6C[280651309] + v10) = v30 - 1;
    if ( (_DWORD)v26 == -1 )
    {
      v31 = *(float *)((char *)&dword_140404A6C[280651357] + v10);
      v32 = *(float *)((char *)&dword_140404A6C[280651385] + v10);
      v33 = v31;
      if ( (float)(v32 - v31) >= v7 )
        v33 = v31 + v8;
      if ( (float)(v33 - v32) >= v7 )
        v32 = v32 + v8;
      v34 = v33 - v32;
      v421 = (char *)&dword_140404A6C[280651381] + v10;
      v35 = *(float *)((char *)&dword_140404A6C[280651381] + v10);
      if ( (float)(v34 - v35) >= v7 )
        v35 = v35 + v8;
      if ( (float)(v35 - v34) >= v7 )
        v34 = v34 + v8;
      v36 = *(float *)&v448;
      v37 = v35 - v34;
      *(float *)((char *)&dword_140404A6C[280651349] + v10) = v37;
      v38 = fmaxf(v37, v447);
      if ( v38 > v36 )
        v38 = v36;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280651334] + v10) )
        v38 = *(float *)&v1;
      v39 = v37 - v38;
      if ( v39 >= v445 )
      {
        *(float *)((char *)&dword_140404A6C[280651365] + v10) = v39;
        if ( v39 > v453 )
          *(unsigned int *)((char *)&dword_140404A6C[280651365] + v10) = 1070141403;
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[280651365] + v10) = -1077342245;
      }
      if ( !LOBYTE(dword_140404A6C[284024765]) )
      {
        v40 = v38;
        v41 = v38 + v31;
        v42 = v40 + *(float *)((char *)&dword_140404A6C[280651341] + v10);
        *(float *)((char *)&dword_140404A6C[280651357] + v10) = v41;
        v31 = v41;
        *(float *)((char *)&dword_140404A6C[280651341] + v10) = v42;
      }
      v43 = *(float *)((char *)&dword_140404A6C[280657990] + v10)
          + *(float *)((char *)&dword_140404A6C[280651341] + v10);
      v44 = v439;
      if ( COERCE_FLOAT(LODWORD(v43) & v2) < v439 )
        v43 = *(float *)&v1;
      *(float *)((char *)&dword_140404A6C[280651341] + v10) = v43;
      if ( COERCE_FLOAT(LODWORD(v31) & v2) < v44 )
      {
        v31 = *(float *)&v1;
        *(unsigned int *)((char *)&dword_140404A6C[280651357] + v10) = 0;
      }
      v45 = v43;
      v46 = v454;
      if ( v45 >= v454 )
      {
        if ( v45 <= v7 )
          goto LABEL_67;
        v47 = v45 - v8;
      }
      else
      {
        v47 = v45 + v8;
      }
      *(float *)((char *)&dword_140404A6C[280651341] + v10) = v47;
LABEL_67:
      v48 = v31;
      if ( v31 >= v46 )
      {
        if ( v48 <= v7 )
        {
LABEL_72:
          v50 = v1;
          v51 = v1;
          v417 = (unsigned int *)((char *)&dword_140404A6C[280651382] + v10);
          *(unsigned int *)((char *)&dword_140404A6C[280651342] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651382]
                                                                                         + v10);
          goto LABEL_74;
        }
        v49 = v48 - v8;
      }
      else
      {
        v49 = *(float *)((char *)&dword_140404A6C[280651357] + v10) + v8;
      }
      *(float *)((char *)&dword_140404A6C[280651357] + v10) = v49;
      goto LABEL_72;
    }
    v421 = (char *)&dword_140404A6C[280651381] + v10;
    v51 = *(unsigned int *)((char *)&dword_140404A6C[280651381] + v10);
    *(unsigned int *)((char *)&dword_140404A6C[280651365] + v10) = v51;
    v417 = (unsigned int *)((char *)&dword_140404A6C[280651382] + v10);
    v50 = *(unsigned int *)((char *)&dword_140404A6C[280651382] + v10);
    *(unsigned int *)((char *)&dword_140404A6C[280651366] + v10) = v50;
LABEL_74:
    *(unsigned int *)((char *)&dword_140404A6C[280651367] + v10) = v51;
    v52 = 0;
    *(unsigned int *)((char *)&dword_140404A6C[280651368] + v10) = v50;
    v53 = *(int *)((char *)&dword_140404A6C[280651305] + v10);
    if ( (_DWORD)v53 != -1 )
    {
      v54 = dword_140404A6C[3597 * v53 + 71856276];
      if ( v54 > 0 )
      {
        LOBYTE(v52) = v54 >= 100;
        ++v52;
      }
    }
    if ( *(unsigned int *)((char *)&dword_140404A6C[280658450] + v10) != v52 )
    {
      ++dword_140404A6C[v5 + 282485789];
      *(unsigned int *)((char *)&dword_140404A6C[280658450] + v10) = v52;
    }
    v55 = *(unsigned int *)((char *)&dword_140404A6C[280651318] + v10);
    *(unsigned int *)((char *)&dword_140404A6C[280658295] + v10) = 1065353216;
    if ( v55 < 25 )
    {
      v56 = (float)v55 * v440;
      v57 = sin((float)((float)((float)((v14 + (_WORD)v3 * (_WORD)v3 * (_WORD)v3) & 0x1FF) * v441) * v8));
      v58 = v57 * v450 * (float)(v4 - v56) + (float)((float)(v56 * v9) + v442);
      if ( v55 < 10 )
        v58 = v58 * (float)((float)((float)v55 * v423) + v9);
      *(float *)((char *)&dword_140404A6C[280658295] + v10) = v58;
    }
    v59 = *(int *)((char *)&dword_140404A6C[280658139] + v10) <= 0;
    v414 = 0.0;
    if ( !v59 || *(int *)((char *)&dword_140404A6C[280658149] + v10) > 0 )
      LODWORD(v414) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[280651324] + v10) = 0;
    v60 = 20840 * v26;
    v61 = 0;
    v62 = (float *)((char *)&dword_140404A6C[280651489] + v10);
    v427 = 20840 * v26;
    v63 = (unsigned int *)((char *)&dword_140404A6C[280651489] + v10);
    do
    {
      v63[26] = 0;
      if ( v61 == 6 || v61 == 9 )
        dword_140404A6C[47 * *(v63 - 50) + 18215714] = 1069547520;
      *v63 = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (!v61 || v61 >= 10) )
      {
        *v63 = 0;
      }
      v63[104] = 0;
      if ( v61 == 5 || v61 == 8 )
        dword_140404A6C[47 * v63[28] + 18215714] = 1069547520;
      v63[78] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -1 || v61 + 1 >= 10) )
      {
        v63[78] = 0;
      }
      v63[182] = 0;
      if ( v61 == 4 || v61 == 7 )
        dword_140404A6C[47 * v63[106] + 18215714] = 1069547520;
      v63[156] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -2 || v61 + 2 >= 10) )
      {
        v63[156] = 0;
      }
      v63[260] = 0;
      if ( v61 == 3 || v61 == 6 )
        dword_140404A6C[47 * v63[184] + 18215714] = 1069547520;
      v63[234] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -3 || v61 + 3 >= 10) )
      {
        v63[234] = 0;
      }
      v63[338] = 0;
      if ( v61 == 2 || v61 == 5 )
        dword_140404A6C[47 * v63[262] + 18215714] = 1069547520;
      v63[312] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -4 || v61 + 4 >= 10) )
      {
        v63[312] = 0;
      }
      v63[416] = 0;
      if ( v61 == 1 || v61 == 4 )
        dword_140404A6C[47 * v63[340] + 18215714] = 1069547520;
      v63[390] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -5 || v61 + 5 >= 10) )
      {
        v63[390] = 0;
      }
      v63[494] = 0;
      if ( !v61 || v61 == 3 )
        dword_140404A6C[47 * v63[418] + 18215714] = 1069547520;
      v63[468] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -6 || v61 + 6 >= 10) )
      {
        v63[468] = 0;
      }
      v63[572] = 0;
      if ( v61 == -1 || v61 == 2 )
        dword_140404A6C[47 * v63[496] + 18215714] = 1069547520;
      v63[546] = 1065353216;
      if ( (_DWORD)v26 != -1
        && !dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718]
        && (v61 == -7 || v61 + 7 >= 10) )
      {
        v63[546] = 0;
      }
      v61 += 8;
      v63 += 624;
    }
    while ( v61 < 16 );
    v64 = 4;
    do
    {
      v65 = *((int *)v62 - 50);
      v24 = *(float *)&v1 == *v62;
      dword_140404A6C[47 * v65 + 18215711] = 0;
      if ( v24 )
        dword_140404A6C[47 * v65 + 18215711] = 1;
      v66 = *((int *)v62 + 28);
      v24 = *(float *)&v1 == v62[78];
      dword_140404A6C[47 * v66 + 18215711] = 0;
      if ( v24 )
        dword_140404A6C[47 * v66 + 18215711] = 1;
      v67 = *((int *)v62 + 106);
      v24 = *(float *)&v1 == v62[156];
      dword_140404A6C[47 * v67 + 18215711] = 0;
      if ( v24 )
        dword_140404A6C[47 * v67 + 18215711] = 1;
      v68 = *((int *)v62 + 184);
      v24 = *(float *)&v1 == v62[234];
      dword_140404A6C[47 * v68 + 18215711] = 0;
      if ( v24 )
        dword_140404A6C[47 * v68 + 18215711] = 1;
      v62 += 312;
      --v64;
    }
    while ( v64 );
    sub_1400ABB10(v3);
    *(_QWORD *)&v69 = *(unsigned int *)((char *)&dword_140404A6C[280651341] + v10);
    *(float *)&(*(float *)&sr_human_tick_rotation[8]) = 1.0;
    (*(__int128 *)(void *)sr_human_tick_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_human_tick_rotation+4)) = xmmword_140278D30;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_human_tick_rotation), (float *)&(*(__int128 *)(void *)sr_human_tick_rotation) + 3, v69);
    v70 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 3);
    v71 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 2);
    v72 = *(float *)&(*(float *)&sr_human_tick_rotation[8]);
    v73 = v432;
    v74 = v445;
    *(unsigned int *)((char *)&dword_140404A6C[280658056] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280658055]
                                                                                   + v10);
    *(unsigned int *)((char *)&dword_140404A6C[280658055] + v10) = 0;
    v75 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[280651441] + v10)
                                - *(float *)((char *)&dword_140404A6C[280652377] + v10))
                        * v70)
                + (float)((float)(*(float *)((char *)&dword_140404A6C[280651440] + v10)
                                - *(float *)((char *)&dword_140404A6C[280652376] + v10))
                        * v71))
        + (float)((float)((float)(*(float *)((char *)&dword_140404A6C[280651442] + v10)
                                - *(float *)((char *)&dword_140404A6C[280652378] + v10))
                        * v72)
                + v73);
    if ( v75 >= *(float *)&v1 )
    {
      v76 = *(float *)&v1;
    }
    else
    {
      v76 = v75 * 3.0;
      if ( v76 < v74 )
        v76 = -1.5707963705062866;
    }
    *(unsigned int *)((char *)&dword_140404A6C[280658111] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280658110]
                                                                                   + v10);
    *(unsigned int *)((char *)&dword_140404A6C[280658110] + v10) = 0;
    *(float *)((char *)&dword_140404A6C[280658055] + v10) = v76;
    v77 = *(float *)((char *)&dword_140404A6C[280652611] + v10);
    v78 = *(unsigned int *)((char *)&dword_140404A6C[280652612] + v10);
    *(float *)&v79 = *(float *)((char *)&dword_140404A6C[280651440] + v10)
                   - *(float *)((char *)&dword_140404A6C[280652610] + v10);
    sr_human_tick_endpoint[0] = *(float *)((char *)&dword_140404A6C[280652610] + v10);
    v80 = *(float *)((char *)&dword_140404A6C[280651441] + v10) - v77;
    sr_human_tick_endpoint[1] = v77;
    sr_human_tick_endpoint[2] = *(float *)&v78;
    sr_human_tick_point[0] = *(float *)&v79;
    sr_human_tick_point[1] = v80;
    v81 = (float)((float)(*(float *)&v79 * v71) + (float)(v80 * v70))
        + (float)((float)((float)(*(float *)((char *)&dword_140404A6C[280651442] + v10) - *(float *)&v78) * v72) + v73);
    if ( v81 >= *(float *)&v1 )
    {
      v82 = *(float *)&v1;
      sr_human_tick_point[2] = *(float *)&v1;
    }
    else
    {
      v82 = v81 * 3.0;
      sr_human_tick_point[2] = v82;
      if ( v82 < v74 )
      {
        sr_human_tick_point[2] = -1.5707963705062866;
        v82 = -1.5707963705062866;
      }
    }
    *(float *)((char *)&dword_140404A6C[280658110] + v10) = v82;
    if ( (_DWORD)v26 == -1 )
    {
      if ( *(int *)((char *)&dword_140404A6C[280651318] + v10) > 0
        && !*(unsigned int *)((char *)&dword_140404A6C[280651325] + v10)
        && (*((_BYTE *)&dword_140404A6C[280651436] + v10) & 4) != 0 )
      {
        v83 = *(unsigned int *)((char *)&dword_140404A6C[280657908] + v10);
        if ( v83 < 32 )
          *(unsigned int *)((char *)&dword_140404A6C[280657908] + v10) = v83 + 1;
      }
      v84 = 0;
      v85 = (unsigned int *)((char *)&dword_140404A6C[280651515] + v10);
      do
      {
        *v85 = 0;
        if ( *(int *)((char *)&dword_140404A6C[280651318] + v10) > 0
          && *(int *)((char *)&dword_140404A6C[280658299] + v10) >= 50
          && *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) != 2
          && (v84 == 12 || v84 == 15) )
        {
          v0 = v84 == 15;
          sub_1400B5460(v3, v0);
          v86 = v84 == 15;
          v435 = v86;
        }
        else
        {
          v86 = v435;
        }
        ++v84;
        v85 += 78;
      }
      while ( v84 < 16 );
      v24 = *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) == 3;
      v434 = v0;
      if ( !v24
        && *(int *)((char *)&dword_140404A6C[280657908] + v10) > 0
        && (*((_BYTE *)&dword_140404A6C[280651436] + v10) & 4) == 0
        && *(unsigned int *)((char *)&dword_140404A6C[280658026] + v10) == 1
        && *(unsigned int *)((char *)&dword_140404A6C[280658081] + v10) == 1
        && *(unsigned int *)((char *)&dword_140404A6C[280652451] + v10)
        && *(unsigned int *)((char *)&dword_140404A6C[280652685] + v10) )
      {
        *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) = 3;
        v87 = *(float *)&dword_140404A6C[282486350];
        v88 = *(float *)&dword_140404A6C[282486299];
        v89 = *(float *)&dword_140404A6C[282486374];
        v90 = *(float *)&dword_140404A6C[282486350];
        v6 = *(float *)&v415;
        v91 = *(float *)&dword_140404A6C[282486299];
        v92 = *(float *)&dword_140404A6C[282486374];
        *(unsigned int *)((char *)&dword_140404A6C[55 * v86 + 280658026] + v10) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[280658004] + v10) = !v0;
        *(unsigned int *)((char *)&dword_140404A6C[280657911] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651394]
                                                                                       + v10);
        *(unsigned int *)((char *)&dword_140404A6C[280657912] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651393]
                                                                                       + v10);
        *(unsigned int *)((char *)&dword_140404A6C[280657979] + v10) = 1075235812;
        *(unsigned int *)((char *)&dword_140404A6C[280658028] + v10) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[280658083] + v10) = 0;
        *(float *)((char *)&dword_140404A6C[280658029] + v10) = (float)((float)(v90
                                                                              * *(float *)((char *)&dword_140404A6C[280652313]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280652298]
                                                                                 + v10))
                                                              - (float)((float)(v91
                                                                              * *(float *)((char *)&dword_140404A6C[280651452]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280651440]
                                                                                 + v10));
        *(float *)((char *)&dword_140404A6C[280658030] + v10) = (float)((float)(v90
                                                                              * *(float *)((char *)&dword_140404A6C[280652314]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280652299]
                                                                                 + v10))
                                                              - (float)((float)(v88
                                                                              * *(float *)((char *)&dword_140404A6C[280651453]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280651441]
                                                                                 + v10));
        v78 = dword_140404A6C[282486425];
        v93 = *(float *)&dword_140404A6C[282486425];
        *(float *)((char *)&dword_140404A6C[280658031] + v10) = (float)((float)(v87
                                                                              * *(float *)((char *)&dword_140404A6C[280652315]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280652300]
                                                                                 + v10))
                                                              - (float)((float)(v88
                                                                              * *(float *)((char *)&dword_140404A6C[280651454]
                                                                                         + v10))
                                                                      + *(float *)((char *)&dword_140404A6C[280651442]
                                                                                 + v10));
        v94 = *(float *)&v78 * *(float *)((char *)&dword_140404A6C[280652547] + v10);
        v95 = (float)(v93 * *(float *)((char *)&dword_140404A6C[280652548] + v10))
            + *(float *)((char *)&dword_140404A6C[280652533] + v10);
        *(float *)&v78 = (float)(*(float *)&v78 * *(float *)((char *)&dword_140404A6C[280652549] + v10))
                       + *(float *)((char *)&dword_140404A6C[280652534] + v10);
        *(float *)&v96 = (float)(v89 * *(float *)((char *)&dword_140404A6C[280651452] + v10))
                       + *(float *)((char *)&dword_140404A6C[280651440] + v10);
        v97 = (float)(v92 * *(float *)((char *)&dword_140404A6C[280651453] + v10))
            + *(float *)((char *)&dword_140404A6C[280651441] + v10);
        v2 = v433;
        v98 = (float)(v89 * *(float *)((char *)&dword_140404A6C[280651454] + v10))
            + *(float *)((char *)&dword_140404A6C[280651442] + v10);
        sr_human_tick_endpoint[0] = v94 + *(float *)((char *)&dword_140404A6C[280652532] + v10);
        sr_human_tick_endpoint[1] = v95;
        sr_human_tick_endpoint[2] = *(float *)&v78;
        sr_human_tick_point[0] = *(float *)&v96;
        *(float *)&v78 = *(float *)&v78 - v98;
        sr_human_tick_point[1] = v97;
        *(float *)((char *)&dword_140404A6C[280658084] + v10) = sr_human_tick_endpoint[0] - *(float *)&v96;
        sr_human_tick_point[2] = v98;
        *(float *)((char *)&dword_140404A6C[280658085] + v10) = v95 - v97;
        *(unsigned int *)((char *)&dword_140404A6C[280658086] + v10) = v78;
      }
      v99 = v422;
      v100 = 0;
      v101 = 0;
      v102 = (float *)((char *)&dword_140404A6C[280651447] + v10);
      v103 = &dword_140404A6C[282486067];
      do
      {
        if ( v100 != 12
          && v100 != 15
          && (v100 != 11 && v100 != 14
           || *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) == 2
           || *(int *)((char *)&dword_140404A6C[280651318] + v10) <= 0
           || *(int *)((char *)&dword_140404A6C[280658299] + v10) < 50) )
        {
          v104 = v6;
          if ( v100 == 3 )
          {
            v104 = 0.0625;
          }
          else if ( (unsigned int)v100 <= 2 )
          {
            v104 = 0.03125;
          }
          v105 = *((float *)v103 + 1);
          v24 = *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) == 0;
          v106 = *(v102 - 7);
          v107 = *(v102 - 6);
          v108 = *(v102 - 5);
          v109 = v10 + 12 * (v101 + (int)*v103);
          v110 = *(float *)((char *)&dword_140404A6C[280651452] + v109);
          v111 = *(float *)((char *)&dword_140404A6C[280651453] + v109);
          v112 = *(float *)((char *)&dword_140404A6C[280651454] + v109);
          sr_human_tick_point[0] = (float)((float)(v105 * -0.5) * v110) + v106;
          sr_human_tick_point[1] = (float)((float)(v105 * -0.5) * v111) + v107;
          sr_human_tick_point[2] = (float)((float)(v105 * -0.5) * v112) + v108;
          if ( v24
            && *(int *)((char *)&dword_140404A6C[280651318] + v10) > 0
            && *(int *)((char *)&dword_140404A6C[280658299] + v10) >= 50
            && (v100 == 10 || v100 == 13) )
          {
            sr_human_tick_point[0] = (float)((float)(v105 * -0.125) * v110) + v106;
            sr_human_tick_point[1] = (float)((float)(v105 * -0.125) * v111) + v107;
            sr_human_tick_point[2] = (float)((float)(v105 * -0.125) * v112) + v108;
          }
          v113 = v105 * v99;
          v114 = v113 * v111;
          v115 = *((float *)v103 + 2);
          v78 = LODWORD(v115);
          sr_human_tick_endpoint[1] = v114 + v107;
          sr_human_tick_endpoint[0] = (float)(v113 * v110) + v106;
          sr_human_tick_endpoint[2] = (float)(v113 * v112) + v108;
          if ( (unsigned int)sub_140033FE0(&sr_human_tick_point[0], &sr_human_tick_endpoint[0], v115) )
          {
            v116 = *(float *)&dword_140404A6C[73006984];
            v117 = *(float *)&dword_140404A6C[73006985];
            v118 = *(float *)&dword_140404A6C[73006986];
            if ( COERCE_FLOAT(
                   COERCE_UNSIGNED_INT(
                     (float)((float)(*(float *)&dword_140404A6C[73006984] * *(v102 - 1))
                           + (float)(*(float *)&dword_140404A6C[73006985] * *v102))
                   + (float)(*(float *)&dword_140404A6C[73006986] * v102[1]))
                 & v2) > 0.06666666666666667
              && dword_140404A6C[73007002] != -1
              && dword_140404A6C[73007003] != -1 )
            {
              v119 = 28664LL * (unsigned int)v3 + 312LL * (unsigned int)v100;
              sub_14000B7D0(
                dword_140404A6C[73007002],
                dword_140404A6C[73007003],
                dword_140404A6C[73007004],
                dword_140404A6C[73007005],
                dword_140404A6C[73007009],
                dword_140404A6C[73007010],
                (unsigned int *)((char *)&dword_140404A6C[280651440] + v119),
                (unsigned int *)((char *)&dword_140404A6C[280651446] + v119));
              v118 = *(float *)&dword_140404A6C[73006986];
              v117 = *(float *)&dword_140404A6C[73006985];
              v116 = *(float *)&dword_140404A6C[73006984];
            }
            if ( !*(unsigned int *)((char *)&dword_140404A6C[280651316] + v10) )
            {
              if ( v100 == 3 )
              {
                if ( !*(unsigned int *)((char *)&dword_140404A6C[280651319] + v10)
                  && COERCE_FLOAT(
                       COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                     & v2) > 0.26666666666666666 )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[280651318] + v10) -= 120;
                }
              }
              else if ( v100 )
              {
                if ( v100 == 2 )
                {
                  if ( !*(unsigned int *)((char *)&dword_140404A6C[280651319] + v10)
                    && COERCE_FLOAT(
                         COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                       & v2) > 0.2 )
                  {
                    *(unsigned int *)((char *)&dword_140404A6C[280651318] + v10) -= 120;
                  }
                }
                else if ( (v100 == 10 || v100 == 13)
                       && !*(unsigned int *)((char *)&dword_140404A6C[280651319] + v10)
                       && COERCE_FLOAT(
                            COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                          & v2) > 0.26666666666666666 )
                {
                  if ( v100 == 10 )
                    *(unsigned int *)((char *)&dword_140404A6C[280658310] + v10) = 0;
                  else
                    *(unsigned int *)((char *)&dword_140404A6C[280658312] + v10) = 0;
                }
              }
              else if ( !*(unsigned int *)((char *)&dword_140404A6C[280651319] + v10)
                     && COERCE_FLOAT(
                          COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                        & v2) > 0.2 )
              {
                *(unsigned int *)((char *)&dword_140404A6C[280651318] + v10) -= 120;
              }
            }
            v78 = 1061997773;
            if ( *(unsigned int *)((char *)&dword_140404A6C[280651325] + v10) == 2 )
              v78 = 1036831949;
            v120 = *((int *)v102 - 8);
            v121 = *(float *)&dword_140404A6C[73006982] - *(float *)&dword_140404A6C[47 * v120 + 18215716];
            sr_human_tick_point[0] = *(float *)&dword_140404A6C[73006981] - *(float *)&dword_140404A6C[47 * v120 + 18215715];
            v122 = *(float *)&dword_140404A6C[73006983] - *(float *)&dword_140404A6C[47 * v120 + 18215717];
            sr_human_tick_point[1] = v121;
            sr_human_tick_point[2] = v122;
            if ( dword_140404A6C[73007015] == -1 )
              sub_140005160(
                v120,
                (unsigned int *)&sr_human_tick_point[0],
                &dword_140404A6C[73006984],
                v115 - *(float *)&dword_140404A6C[73006988],
                v78,
                v104,
                0x3D800000u);
            *(unsigned int *)((char *)&dword_140404A6C[280651324] + v10) = 1;
          }
        }
        v6 = *(float *)&v415;
        ++v100;
        v101 += 26;
        v103 += 25;
        v102 += 78;
      }
      while ( v100 < 16 );
      v123 = *(unsigned int *)((char *)&dword_140404A6C[280651316] + v10);
      if ( v123 <= 0 )
        *(unsigned int *)((char *)&dword_140404A6C[280651315] + v10) = -1;
      else
        *(unsigned int *)((char *)&dword_140404A6C[280651316] + v10) = v123 - 1;
      v1 = LODWORD(v409);
      v124 = 0;
      if ( *(int *)((char *)&dword_140404A6C[280651427] + v10) > 0 )
      {
        v125 = (int *)((char *)&dword_140404A6C[280651428] + v10);
        do
        {
          sub_1400B3A80(v3, *v125);
          ++v124;
          ++v125;
        }
        while ( v124 < *(int *)((char *)&dword_140404A6C[280651427] + v10) );
      }
      *(unsigned int *)((char *)&dword_140404A6C[280651335] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651440]
                                                                                     + v10);
      *(unsigned int *)((char *)&dword_140404A6C[280651336] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651441]
                                                                                     + v10);
      *(unsigned int *)((char *)&dword_140404A6C[280651337] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651442]
                                                                                     + v10);
      goto LABEL_368;
    }
    *(float *)((char *)&dword_140404A6C[280651341] + v10) = sub_14023F704(
                                                              COERCE_FLOAT(dword_140404A6C[5210 * v26 + 129716732] ^ v424),
                                                              *(float *)&dword_140404A6C[5210 * v26 + 129716734]);
    *(unsigned int *)((char *)&dword_140404A6C[280651342] + v10) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[280658026] + v10) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[280658081] + v10) = 0;
    if ( *(int *)((char *)&dword_140404A6C[280651323] + v10) > 900 )
      *(unsigned int *)((char *)&dword_140404A6C[280651323] + v10) = 900;
    if ( !*(unsigned int *)((char *)&dword_140404A6C[280651314] + v10) )
    {
      v126 = (int)dword_140404A6C[5210 * v26 + 129720183];
      if ( (_DWORD)v126 == -1 || dword_140404A6C[383 * v126 + 132400638] != v3 )
      {
        if ( *(unsigned int *)((char *)&dword_140404A6C[280651317] + v10) )
        {
          v127 = *(float *)((char *)&dword_140404A6C[280651380] + v10);
          if ( v127 > *(float *)&v1 )
            v127 = *(float *)&v1;
          *(float *)&dword_140404A6C[5210 * v26 + 129720168] = v127;
          if ( !*(unsigned int *)((char *)&dword_140404A6C[280658139] + v10)
            || (v128 = dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v10) + 278845898],
                v128 == 15)
            || v128 == 25 )
          {
            if ( !*(unsigned int *)((char *)&dword_140404A6C[280658149] + v10)
              || (v129 = dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658150] + v10) + 278845898],
                  v129 == 15)
              || v129 == 25 )
            {
              dword_140404A6C[5210 * v26 + 129720165] = *(unsigned int *)((char *)&dword_140404A6C[280651377] + v10);
              dword_140404A6C[5210 * v26 + 129720166] = *(unsigned int *)((char *)&dword_140404A6C[280651378] + v10);
              dword_140404A6C[5210 * v26 + 129720167] = *(unsigned int *)((char *)&dword_140404A6C[280651379] + v10);
              dword_140404A6C[5210 * v26 + 129720168] = *(unsigned int *)((char *)&dword_140404A6C[280651380] + v10);
              dword_140404A6C[5210 * v26 + 129720173] = *(unsigned int *)((char *)&dword_140404A6C[280651436] + v10);
              dword_140404A6C[5210 * v26 + 129716714] = *(unsigned int *)((char *)&dword_140404A6C[280651305] + v10);
            }
          }
          v130 = (int)dword_140404A6C[5210 * v26 + 129720183];
          if ( (_DWORD)v130 != -1 )
            dword_140404A6C[383 * v130 + 132400668] = 2;
        }
      }
    }
    if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v26 + 129716710] + 346707718] )
    {
      v131 = 12 * v27;
      v132 = 2;
      v133 = v60 + v131;
      v134 = (int *)((char *)&dword_140404A6C[280652297] + v10);
      v135 = *(float *)((char *)&dword_140404A6C[129721886] + v133);
      v136 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[129721885] + v133)
                                   * *(float *)&dword_140404A6C[5210 * v26 + 129716726])
                           + *(float *)&dword_140404A6C[5210 * v26 + 129716720])
                   + (float)(v135 * *(float *)&dword_140404A6C[5210 * v26 + 129716729]))
           + (float)(*(float *)((char *)&dword_140404A6C[129721887] + v133)
                   * *(float *)&dword_140404A6C[5210 * v26 + 129716732]);
      v137 = *(float *)((char *)&dword_140404A6C[129721887] + v133) * *(float *)&dword_140404A6C[5210 * v26 + 129716733];
      v138 = (float)((float)(*(float *)((char *)&dword_140404A6C[129721885] + v133)
                           * *(float *)&dword_140404A6C[5210 * v26 + 129716728])
                   + *(float *)&dword_140404A6C[5210 * v26 + 129716722])
           + (float)(v135 * *(float *)&dword_140404A6C[5210 * v26 + 129716731]);
      v139 = *(float *)((char *)&dword_140404A6C[129721887] + v133) * *(float *)&dword_140404A6C[5210 * v26 + 129716734];
      v140 = (float)((float)(*(float *)((char *)&dword_140404A6C[129721885] + v133)
                           * *(float *)&dword_140404A6C[5210 * v26 + 129716727])
                   + *(float *)&dword_140404A6C[5210 * v26 + 129716721])
           + (float)(v135 * *(float *)&dword_140404A6C[5210 * v26 + 129716730]);
      v141 = v409;
      v412 = v136;
      v142 = v138 + v139;
      v143 = v140 + v137;
      v413 = v142;
      v411 = v143;
      while ( 1 )
      {
        v144 = dword_140404A6C[5210 * v26 + 129716729];
        v145 = *(float *)&dword_140404A6C[5210 * v26 + 129716730];
        v146 = *(float *)&dword_140404A6C[5210 * v26 + 129716731];
        v147 = *v134;
        v148 = 47 * v147;
        sr_human_tick_normal[0] = *(float *)&v144;
        sr_human_tick_normal[1] = v145;
        sr_human_tick_normal[2] = v146;
        v149 = *(float *)&dword_140404A6C[47 * v147 + 18215715]
             - (float)(*(float *)&dword_140404A6C[47 * v147 + 18215727] * 0.25);
        v150 = *(float *)&dword_140404A6C[47 * v147 + 18215716]
             - (float)(*(float *)&dword_140404A6C[47 * v147 + 18215728] * 0.25);
        v151 = *(float *)&dword_140404A6C[47 * v147 + 18215717]
             - (float)(*(float *)&dword_140404A6C[47 * v147 + 18215729] * 0.25);
        v152 = v150 - (float)(v145 * 0.125);
        v153 = v149 - (float)(*(float *)&v144 * 0.125);
        v154 = v151 - (float)(v146 * 0.125);
        if ( (float)((float)((float)((float)(v143 - v152) * v145) + (float)((float)(v136 - v153) * *(float *)&v144))
                   + (float)((float)(v142 - v154) * v146)) >= v141 )
        {
          v155 = (float)((float)((float)(v143 - v150) * v145) + (float)((float)(v136 - v149) * *(float *)&v144))
               + (float)((float)(v142 - v151) * v146);
          if ( v155 > v141 )
            goto LABEL_273;
          v156 = (float)((float)(v145 * (float)(v152 - v150)) + (float)(*(float *)&v144 * (float)(v153 - v149)))
               + (float)(v146 * (float)(v154 - v151));
          if ( v156 == v409 )
          {
            v142 = v413;
            v136 = v412;
            v141 = v409;
LABEL_273:
            v143 = v411;
            goto LABEL_274;
          }
          v157 = dword_140404A6C[5210 * v26 + 129716719];
          v158 = v155 / v156;
          v159 = (float)(v158 * (float)(v153 - v149)) + v149;
          *(float *)&v160 = v149 - *(float *)&dword_140404A6C[v148 + 18215715];
          v161 = (float)(v158 * (float)(v152 - v150)) + v150;
          v162 = v150 - *(float *)&dword_140404A6C[v148 + 18215716];
          v163 = (float)(v158 * (float)(v154 - v151)) + v151;
          v164 = v151 - *(float *)&dword_140404A6C[v148 + 18215717];
          v165 = 47LL * v157;
          sr_human_tick_endpoint[0] = *(float *)&v160;
          sr_human_tick_endpoint[1] = v162;
          v408[16] = 1040187392;
          sr_human_tick_endpoint[2] = v164;
          v166 = v161 - *(float *)&dword_140404A6C[v165 + 18215716];
          sr_human_tick_offset[0] = v159 - *(float *)&dword_140404A6C[v165 + 18215715];
          v167 = v163 - *(float *)&dword_140404A6C[v165 + 18215717];
          sr_human_tick_offset[1] = v166;
          sr_human_tick_offset[2] = v167;
          sub_1400052C0(
            v147,
            v157,
            (unsigned int *)&sr_human_tick_endpoint[0],
            (unsigned int *)&sr_human_tick_offset[0],
            (unsigned int *)&sr_human_tick_normal[0],
            (float)((float)((float)(v161 - v152) * v145) + (float)((float)(v159 - v153) * *(float *)&v144))
          + (float)((float)(v163 - v154) * v146),
            0x3F4CCCCDu,
            0.0625,
            0x3E000000u);
          v142 = v413;
          v145 = *(float *)&dword_140404A6C[5210 * v26 + 129716730];
          v146 = *(float *)&dword_140404A6C[5210 * v26 + 129716731];
          v136 = v412;
          v143 = v411;
          v141 = v409;
        }
LABEL_274:
        v134 += 234;
        if ( !--v132 )
        {
          v171 = *(unsigned int *)((char *)&dword_140404A6C[129721885] + v133);
          v168 = *(int *)((char *)&dword_140404A6C[280651439] + v10);
          v169 = 0;
          v170 = *(float *)((char *)&dword_140404A6C[129721886] + v133) + v432;
          *(float *)&v171 = (float)((float)((float)(*(float *)&v171
                                                  * *(float *)((char *)&dword_140404A6C[129716727] + v60))
                                          + *(float *)((char *)&dword_140404A6C[129716721] + v60))
                                  + (float)(v145 * v170))
                          + (float)(*(float *)((char *)&dword_140404A6C[129721887] + v133)
                                  * *(float *)((char *)&dword_140404A6C[129716733] + v60));
          v172 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[129721885] + v133)
                                       * *(float *)((char *)&dword_140404A6C[129716726] + v60))
                               + *(float *)((char *)&dword_140404A6C[129716720] + v60))
                       + (float)(v170 * *(float *)((char *)&dword_140404A6C[129716729] + v60)))
               + (float)(*(float *)((char *)&dword_140404A6C[129721887] + v133)
                       * *(float *)((char *)&dword_140404A6C[129716732] + v60));
          v173 = 47 * v168;
          v174 = (float)((float)((float)(*(float *)((char *)&dword_140404A6C[129721885] + v133)
                                       * *(float *)((char *)&dword_140404A6C[129716728] + v60))
                               + *(float *)((char *)&dword_140404A6C[129716722] + v60))
                       + (float)(v170 * v146))
               + (float)(*(float *)((char *)&dword_140404A6C[129721887] + v133)
                       * *(float *)((char *)&dword_140404A6C[129716734] + v60));
          v411 = *(float *)&v171;
          sr_human_tick_point[1] = *(float *)&v171;
          v412 = v172;
          sr_human_tick_point[0] = v172;
          v413 = v174;
          v175 = (float *)&dword_140404A6C[47 * v168 + 18215724];
          sr_human_tick_point[2] = v174;
          while ( 1 )
          {
            if ( v169 )
            {
              v176 = (float)(*v175 * 0.25) + *(float *)&dword_140404A6C[v173 + 18215715];
              v177 = (float)(v175[1] * 0.25) + *(float *)&dword_140404A6C[v173 + 18215716];
              v178 = (float)(v175[2] * 0.25) + *(float *)&dword_140404A6C[v173 + 18215717];
            }
            else
            {
              v176 = *(float *)&dword_140404A6C[v173 + 18215715] - (float)(*v175 * 0.25);
              v177 = *(float *)&dword_140404A6C[v173 + 18215716] - (float)(v175[1] * 0.25);
              v178 = *(float *)&dword_140404A6C[v173 + 18215717] - (float)(v175[2] * 0.25);
            }
            v179 = *(float *)((char *)&dword_140404A6C[129716729] + v60);
            v180 = *(unsigned int *)((char *)&dword_140404A6C[129716730] + v60);
            v181 = *(float *)((char *)&dword_140404A6C[129716731] + v60);
            HIDWORD(v78) = HIDWORD(v171);
            sr_human_tick_normal[0] = v179;
            sr_human_tick_normal[1] = *(float *)&v180;
            v182 = v176 - (float)(v179 * 0.125);
            sr_human_tick_normal[2] = v181;
            sr_human_tick_offset[0] = v182;
            v183 = v177 - (float)(*(float *)&v180 * 0.125);
            v184 = v178 - (float)(v181 * 0.125);
            sr_human_tick_offset[1] = v183;
            sr_human_tick_offset[2] = v184;
            *(float *)&v78 = (float)((float)((float)(*(float *)&v171 - v183) * *(float *)&v180)
                                   + (float)((float)(v172 - v182) * v179))
                           + (float)((float)(v174 - v184) * v181);
            if ( *(float *)&v78 < v409 )
              goto LABEL_285;
            *(float *)&v171 = (float)((float)((float)(*(float *)&v171 - v177) * *(float *)&v180)
                                    + (float)((float)(v172 - v176) * v179))
                            + (float)((float)(v174 - v178) * v181);
            if ( *(float *)&v171 > v409 )
              goto LABEL_284;
            HIDWORD(v78) = HIDWORD(v180);
            *(float *)&v78 = (float)((float)(*(float *)&v180 * (float)(v183 - v177))
                                   + (float)(v179 * (float)(v182 - v176)))
                           + (float)(v181 * (float)(v184 - v178));
            if ( *(float *)&v78 == v409 )
              break;
            v185 = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v60);
            *(float *)&v171 = *(float *)&v171 / *(float *)&v78;
            v186 = 47LL * v185;
            HIDWORD(v78) = HIDWORD(v171);
            *(float *)&v78 = (float)(*(float *)&v171 * (float)(v182 - v176)) + v176;
            v187 = (float)(*(float *)&v171 * (float)(v183 - v177)) + v177;
            v188 = v177 - *(float *)&dword_140404A6C[v173 + 18215716];
            v189 = (float)(*(float *)&v171 * (float)(v184 - v178)) + v178;
            *(float *)&v190 = *(float *)&v78 - *(float *)&dword_140404A6C[v186 + 18215715];
            v191 = v178 - *(float *)&dword_140404A6C[v173 + 18215717];
            sr_human_tick_endpoint[0] = v176 - *(float *)&dword_140404A6C[v173 + 18215715];
            v192 = v187 - *(float *)&dword_140404A6C[v186 + 18215716];
            sr_human_tick_endpoint[1] = v188;
            sr_human_tick_offset[0] = *(float *)&v190;
            *(float *)&v78 = (float)(*(float *)&v78 - v182) * v179;
            sr_human_tick_offset[2] = v189 - *(float *)&dword_140404A6C[v186 + 18215717];
            sr_human_tick_endpoint[2] = v191;
            sr_human_tick_offset[1] = v192;
            sub_1400052C0(
              v168,
              v185,
              (unsigned int *)&sr_human_tick_endpoint[0],
              (unsigned int *)&sr_human_tick_offset[0],
              (unsigned int *)&sr_human_tick_normal[0],
              (float)((float)((float)(v187 - v183) * *(float *)&v180) + *(float *)&v78)
            + (float)((float)(v189 - v184) * v181),
              0x3F4CCCCDu,
              0.0625,
              0x3E000000u);
            v171 = LODWORD(v411);
            v174 = v413;
            v172 = v412;
LABEL_285:
            if ( ++v169 >= 2 )
            {
              v193 = sub_1400A4440();
              v10 = v428;
              if ( v193 == -1 )
              {
                v1 = LODWORD(v409);
              }
              else
              {
                v194 = v193;
                v195 = 61LL * v193;
                sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v195 + 486149254]), 0, 0xF0u);
                dword_140404A6C[v195 + 486149253] = 1;
                dword_140404A6C[v195 + 486149254] = 10;
                v196 = 18 * v194;
                *(_QWORD *)&dword_140404A6C[v195 + 486149256] = 0;
                dword_140404A6C[v195 + 486149291] = *(unsigned int *)((char *)&dword_140404A6C[129716719] + v60);
                v197 = v410;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543029] = 0;
                dword_140404A6C[v195 + 486149293] = v197;
                v198 = *(unsigned int *)((char *)&dword_140404A6C[129721885] + v133);
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543033] = 0;
                dword_140404A6C[v195 + 486149292] = v168;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543037] = 0;
                dword_140404A6C[v195 + 486149281] = 1048576000;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543041] = 0;
                dword_140404A6C[v195 + 486149282] = 1052770304;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543045] = 0;
                dword_140404A6C[v195 + 486149267] = v198;
                v199 = *(unsigned int *)((char *)&dword_140404A6C[129721887] + v133);
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543049] = 0;
                dword_140404A6C[v195 + 486149269] = v199;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543053] = 0;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543057] = 0;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543061] = 0;
                v200 = *(unsigned int *)((char *)&dword_140404A6C[129721886] + v133);
                *(float *)&dword_140404A6C[v195 + 486149268] = *(float *)&v200 + v422;
                *(_QWORD *)&dword_140404A6C[v195 + 486149270] = 0;
                dword_140404A6C[v195 + 486149272] = 0;
                *(float *)&v200 = sub_14002D050(
                                    &sr_human_tick_point[0],
                                    (float *)((char *)&dword_140404A6C[129716726] + v60),
                                    (float *)&dword_140404A6C[47 * v168 + 18215724]);
                v201 = dword_140404A6C[179955876];
                v202 = *(float *)&v200;
                if ( dword_140404A6C[179955876] )
                  v203 = 1044975579;
                else
                  v203 = 1053364187;
                if ( *(float *)&v200 < COERCE_FLOAT(v203 ^ v424) )
                  v200 = v203 ^ v424;
                v204 = 0;
                LOBYTE(v204) = COERCE_FLOAT(v203 ^ v424) > v202;
                if ( *(float *)&v200 > *(float *)&v203 )
                {
                  v200 = v203;
                  v204 = 1;
                }
                v205 = *(float *)&v200 * sr_human_tick_point[0];
                HIDWORD(v78) = HIDWORD(v200);
                dword_140404A6C[v195 + 486149294] = 1111;
                *(float *)&v78 = *(float *)&v200 * sr_human_tick_point[1];
                v206 = *(float *)&v200 * sr_human_tick_point[2];
                sr_human_tick_point[0] = v205;
                sr_human_tick_point[1] = *(float *)&v78;
                sr_human_tick_point[2] = v206;
                if ( v201 )
                {
                  v208 = v415;
                  *(float *)&v78 = *(float *)&v78 * -0.125;
                  *(float *)&dword_140404A6C[2 * v196 + 485543033] = v205 * -0.125;
                  dword_140404A6C[2 * v196 + 485543034] = v78;
                  *(float *)&dword_140404A6C[2 * v196 + 485543035] = v206 * -0.125;
                  if ( v204 )
                    v209 = v208;
                  else
                    v209 = 1029701632;
                  v1 = LODWORD(v409);
                  dword_140404A6C[v195 + 486149287] = v209;
                  v207 = v208;
                }
                else
                {
                  v1 = LODWORD(v409);
                  dword_140404A6C[v195 + 486149287] = 1015021568;
                  *(float *)&v78 = *(float *)&v78 * -0.5;
                  *(float *)&dword_140404A6C[2 * v196 + 485543035] = v206 * -0.5;
                  v207 = v1;
                  *(float *)&dword_140404A6C[2 * v196 + 485543033] = v205 * -0.5;
                  dword_140404A6C[2 * v196 + 485543034] = v78;
                }
                dword_140404A6C[2 * v196 + 485543064] = v207;
                dword_140404A6C[2 * v196 + 485543048] = 0;
              }
              LODWORD(v27) = v426;
              v4 = *(float *)&v425;
              goto LABEL_303;
            }
          }
          v174 = v413;
          v172 = v412;
LABEL_284:
          v171 = LODWORD(v411);
          goto LABEL_285;
        }
      }
    }
LABEL_303:
    if ( dword_140404A6C[24944 * *(unsigned int *)((char *)&dword_140404A6C[129716710] + v60) + 346707718] )
      goto LABEL_349;
    v210 = *(float *)((char *)&dword_140404A6C[129716727] + v60);
    v211 = *(float *)((char *)&dword_140404A6C[129716728] + v60);
    v212 = *(float *)((char *)&dword_140404A6C[129716726] + v60);
    v213 = 47LL * *(int *)((char *)&dword_140404A6C[280651439] + v10);
    v214 = *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10);
    v215 = v60 + 12LL * (int)v27;
    v216 = *(float *)((char *)&dword_140404A6C[129721885] + v215);
    v217 = (float)(v216 * v210) + *(float *)((char *)&dword_140404A6C[129716721] + v60);
    v218 = (float)(v216 * v211) + *(float *)((char *)&dword_140404A6C[129716722] + v60);
    v219 = (float)(v216 * v212) + *(float *)((char *)&dword_140404A6C[129716720] + v60);
    *(float *)&dword_140404A6C[v213 + 18215716] = v217;
    *(float *)&dword_140404A6C[v213 + 18215717] = v218;
    if ( v214 > 0 )
    {
      v220 = (float)((float)v214 * v216) * 0.06666667014360428;
      *(float *)&dword_140404A6C[v213 + 18215715] = (float)(v220 * v212) + v219;
      v219 = (float)(v220 * v212) + v219;
      v217 = (float)(v220 * v210) + *(float *)&dword_140404A6C[v213 + 18215716];
      *(float *)&dword_140404A6C[v213 + 18215716] = v217;
      v218 = (float)(v220 * v211) + *(float *)&dword_140404A6C[v213 + 18215717];
    }
    v221 = *(float *)((char *)&dword_140404A6C[129716730] + v60);
    v222 = *(float *)((char *)&dword_140404A6C[129721886] + v215) + 0.25;
    v223 = *(float *)((char *)&dword_140404A6C[129716731] + v60);
    v224 = *(float *)((char *)&dword_140404A6C[129716729] + v60);
    v225 = *(float *)((char *)&dword_140404A6C[129716732] + v60);
    v226 = *(unsigned int *)((char *)&dword_140404A6C[129716744] + v60);
    *(float *)&dword_140404A6C[v213 + 18215716] = (float)(v221 * v222) + v217;
    *(float *)&v227 = (float)(v223 * v222) + v218;
    v228 = *(float *)((char *)&dword_140404A6C[129721887] + v215);
    v229 = (float *)&dword_140404A6C[v213 + 18215730];
    dword_140404A6C[v213 + 18215717] = v227;
    v230 = v224 * v222;
    v231 = *(float *)((char *)&dword_140404A6C[129716733] + v60);
    v232 = v230 + v219;
    v233 = *(float *)((char *)&dword_140404A6C[129716734] + v60);
    *(float *)&dword_140404A6C[v213 + 18215715] = v232 + (float)(v225 * v228);
    *(float *)&dword_140404A6C[v213 + 18215716] = (float)(v231 * v228) + *(float *)&dword_140404A6C[v213 + 18215716];
    *(float *)&dword_140404A6C[v213 + 18215717] = (float)(v233 * v228) + *(float *)&dword_140404A6C[v213 + 18215717];
    dword_140404A6C[v213 + 18215718] = v226;
    dword_140404A6C[v213 + 18215719] = *(unsigned int *)((char *)&dword_140404A6C[129716745] + v60);
    dword_140404A6C[v213 + 18215720] = *(unsigned int *)((char *)&dword_140404A6C[129716746] + v60);
    *(float *)&dword_140404A6C[v213 + 18215724] = v212;
    *(float *)&dword_140404A6C[v213 + 18215725] = v210;
    *(float *)&dword_140404A6C[v213 + 18215726] = v211;
    *(float *)&dword_140404A6C[v213 + 18215727] = v224;
    *(float *)&dword_140404A6C[v213 + 18215728] = v221;
    *(float *)&dword_140404A6C[v213 + 18215729] = v223;
    *v229 = v225;
    v229[1] = v231;
    v229[2] = v233;
    if ( v214 > 0 )
    {
      v234 = fsqrt((float)((float)(v231 * v231) + (float)(v225 * v225)) + (float)(v233 * v233));
      if ( v234 == *(float *)&v1 )
      {
        v235 = *(float *)&v1;
        v236 = *(float *)&v1;
        v239 = *(float *)&v1;
        v237 = *(float *)&v1;
        v238 = *(float *)&v1;
      }
      else
      {
        v235 = v231 * (float)(v4 / v234);
        v236 = v233 * (float)(v4 / v234);
        v237 = v235;
        v238 = v225 * (float)(v4 / v234);
        v239 = v236;
      }
      *v229 = v238;
      v229[1] = v237;
      v229[2] = v239;
      v240 = (float)(v235 * *(float *)&dword_140404A6C[v213 + 18215726])
           - (float)(v236 * *(float *)&dword_140404A6C[v213 + 18215725]);
      *(float *)&dword_140404A6C[v213 + 18215727] = v240;
      *(float *)&v241 = (float)(v229[2] * *(float *)&dword_140404A6C[v213 + 18215724])
                      - (float)(*(float *)&dword_140404A6C[v213 + 18215726] * *v229);
      dword_140404A6C[v213 + 18215728] = v241;
      *(float *)&v242 = (float)(*(float *)&dword_140404A6C[v213 + 18215725] * *v229)
                      - (float)(v229[1] * *(float *)&dword_140404A6C[v213 + 18215724]);
      dword_140404A6C[v213 + 18215729] = v242;
      v243 = fsqrt(
               (float)((float)(v240 * v240) + (float)(*(float *)&v241 * *(float *)&v241))
             + (float)(*(float *)&v242 * *(float *)&v242));
      if ( v243 == *(float *)&v1 )
      {
        *(_QWORD *)&dword_140404A6C[v213 + 18215727] = 0;
        v244 = *(float *)&v1;
        dword_140404A6C[v213 + 18215729] = 0;
        v245 = *(float *)&v1;
      }
      else
      {
        *(float *)&dword_140404A6C[v213 + 18215727] = v240 * (float)(v4 / v243);
        v244 = (float)(v4 / v243) * *(float *)&dword_140404A6C[v213 + 18215728];
        *(float *)&dword_140404A6C[v213 + 18215728] = v244;
        v245 = (float)(v4 / v243) * *(float *)&dword_140404A6C[v213 + 18215729];
        *(float *)&dword_140404A6C[v213 + 18215729] = v245;
      }
      v246 = (float)(v244 * v229[2]) - (float)(v245 * v229[1]);
      *(float *)&dword_140404A6C[v213 + 18215724] = v246;
      *(float *)&v247 = (float)(*(float *)&dword_140404A6C[v213 + 18215729] * *v229)
                      - (float)(v229[2] * *(float *)&dword_140404A6C[v213 + 18215727]);
      dword_140404A6C[v213 + 18215725] = v247;
      *(float *)&v248 = (float)(v229[1] * *(float *)&dword_140404A6C[v213 + 18215727])
                      - (float)(*(float *)&dword_140404A6C[v213 + 18215728] * *v229);
      dword_140404A6C[v213 + 18215726] = v248;
      v249 = fsqrt(
               (float)((float)(*(float *)&v247 * *(float *)&v247) + (float)(v246 * v246))
             + (float)(*(float *)&v248 * *(float *)&v248));
      if ( v249 == *(float *)&v1 )
      {
        *(_QWORD *)&dword_140404A6C[v213 + 18215724] = 0;
        dword_140404A6C[v213 + 18215726] = 0;
      }
      else
      {
        *(float *)&dword_140404A6C[v213 + 18215724] = v246 * (float)(v4 / v249);
        *(float *)&dword_140404A6C[v213 + 18215725] = (float)(v4 / v249) * *(float *)&dword_140404A6C[v213 + 18215725];
        *(float *)&dword_140404A6C[v213 + 18215726] = (float)(v4 / v249) * *(float *)&dword_140404A6C[v213 + 18215726];
      }
    }
    v250 = *(int *)((char *)&dword_140404A6C[129716719] + v60);
    v251 = 1;
    v252 = v422;
    v253 = (unsigned int *)v421;
    dword_140404A6C[v213 + 18215736] = dword_140404A6C[47 * v250 + 18215736];
    dword_140404A6C[v213 + 18215737] = dword_140404A6C[47 * v250 + 18215737];
    dword_140404A6C[v213 + 18215738] = dword_140404A6C[47 * v250 + 18215738];
    v254 = *(float *)&dword_140404A6C[47 * v250 + 18215737];
    v255 = dword_140404A6C[47 * v250 + 18215736];
    v256 = *(float *)&dword_140404A6C[47 * v250 + 18215738];
    *(_QWORD *)&dword_140404A6C[v213 + 18215733] = 0;
    dword_140404A6C[v213 + 18215735] = 0;
    v257 = v254 * *(float *)&dword_140404A6C[v213 + 18215725];
    v258 = v256 * *(float *)&dword_140404A6C[v213 + 18215726];
    v259 = *(float *)&dword_140404A6C[v213 + 18215724];
    sr_human_tick_point[1] = v254;
    sr_human_tick_point[0] = *(float *)&v255;
    sr_human_tick_point[2] = v256;
    v260 = (float)((float)(v257 + (float)(v259 * *(float *)&v255)) + v258) * *(float *)&dword_140404A6C[v213 + 18215742];
    v261 = v260 * v259;
    *(float *)&dword_140404A6C[v213 + 18215733] = v260 * v259;
    *(float *)&dword_140404A6C[v213 + 18215734] = (float)(v260 * *(float *)&dword_140404A6C[v213 + 18215725])
                                                + *(float *)&dword_140404A6C[v213 + 18215734];
    *(float *)&dword_140404A6C[v213 + 18215735] = (float)(v260 * *(float *)&dword_140404A6C[v213 + 18215726])
                                                + *(float *)&dword_140404A6C[v213 + 18215735];
    v78 = dword_140404A6C[v213 + 18215727];
    v262 = (float)((float)((float)(v254 * *(float *)&dword_140404A6C[v213 + 18215728])
                         + (float)(*(float *)&v255 * *(float *)&v78))
                 + (float)(v256 * *(float *)&dword_140404A6C[v213 + 18215729]))
         * *(float *)&dword_140404A6C[v213 + 18215743];
    *(float *)&v263 = (float)(v262 * *(float *)&v78) + v261;
    dword_140404A6C[v213 + 18215733] = v263;
    *(float *)&dword_140404A6C[v213 + 18215734] = (float)(v262 * *(float *)&dword_140404A6C[v213 + 18215728])
                                                + *(float *)&dword_140404A6C[v213 + 18215734];
    *(float *)&dword_140404A6C[v213 + 18215735] = (float)(v262 * *(float *)&dword_140404A6C[v213 + 18215729])
                                                + *(float *)&dword_140404A6C[v213 + 18215735];
    v264 = (float)((float)((float)(v254 * v229[1]) + (float)(*(float *)&v255 * *v229)) + (float)(v256 * v229[2]))
         * *(float *)&dword_140404A6C[v213 + 18215744];
    *(float *)&dword_140404A6C[v213 + 18215733] = (float)(*v229 * v264) + *(float *)&v263;
    *(float *)&dword_140404A6C[v213 + 18215734] = (float)(v264 * *(float *)&dword_140404A6C[v213 + 18215731])
                                                + *(float *)&dword_140404A6C[v213 + 18215734];
    *(float *)&dword_140404A6C[v213 + 18215735] = (float)(v264 * *(float *)&dword_140404A6C[v213 + 18215732])
                                                + *(float *)&dword_140404A6C[v213 + 18215735];
    do
    {
      v265 = *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10);
      if ( (v265 || v414 != 0.0) && (unsigned __int64)v251 < 0xA )
        goto LABEL_347;
      v426 = 100 * v251;
      v266 = 47LL * *(int *)((char *)&dword_140404A6C[78 * dword_140404A6C[25 * v251 + 282486045] + 280651439] + v10);
      v267 = 47LL * *(int *)((char *)&dword_140404A6C[78 * v251 + 280651439] + v10);
      v268 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252);
      v269 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076264);
      *v268 = dword_140404A6C[v266 + 18215724];
      v268[1] = dword_140404A6C[v266 + 18215725];
      v268[2] = dword_140404A6C[v266 + 18215726];
      *v269 = dword_140404A6C[v266 + 18215727];
      v269[1] = dword_140404A6C[v266 + 18215728];
      v269[2] = dword_140404A6C[v266 + 18215729];
      dword_140404A6C[v267 + 18215730] = dword_140404A6C[v266 + 18215730];
      dword_140404A6C[v267 + 18215731] = dword_140404A6C[v266 + 18215731];
      dword_140404A6C[v267 + 18215732] = dword_140404A6C[v266 + 18215732];
      if ( v265 )
      {
        sr_human_tick_point[0] = *(float *)((char *)&dword_140404A6C[280651440] + v10) - (float)(*(float *)&dword_1402F6188 * v4);
        sr_human_tick_point[1] = *(float *)((char *)&dword_140404A6C[280651441] + v10) - (float)(*(float *)&dword_1402F618C * v4);
        sr_human_tick_point[2] = *(float *)((char *)&dword_140404A6C[280651442] + v10) - (float)(*(float *)&dword_1402F6190 * v4);
        if ( (unsigned int)sub_1400DC050((float *)&dword_140404A6C[7166 * v410 + 280651440], &sr_human_tick_point[0], 0) )
        {
          v271 = acos(
                   fminf(
                     *(float *)((char *)&dword_140404A6C[280651441] + v10) - *(float *)&dword_140404A6C[73006982],
                     v4));
          HIDWORD(v270) = 0;
          *(float *)&v270 = v271 + v271;
        }
        else
        {
          v270 = 1061752795;
        }
        switch ( v251 )
        {
          case 10LL:
            /* 0x1400C0C89..0x1400C0C99: computed in double, then cvtpd2ps: the callee takes float bits. */
            v272 = sr_export_float_lane_container(sr_text_float_bits((float)((double)(float)(*(float *)&v270 * -0.5) - 0.5890486225481251)));
            break;
          case 13LL:
            v272 = sr_export_float_lane_container(sr_text_float_bits((float)(0.196349540849375 - (double)(float)(*(float *)&v270 * v252)))); /* 0x1400C0CBC: cvtpd2ps */
            break;
          case 11LL:
          case 14LL:
            goto LABEL_333;
          default:
            goto LABEL_334;
        }
LABEL_338:
        sub_14007B2A0(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252), v272);
        goto LABEL_339;
      }
      if ( v251 == 10 || v251 == 13 )
      {
        v270 = 3217625051LL;
LABEL_333:
        sub_14007B2A0(
          ((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252,
          (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252),
          *(double *)&v270);
      }
LABEL_334:
      if ( v251 == 2 )
      {
        *(_QWORD *)&v273 = *v253;
        *(float *)&v273 = *(float *)&v273 * 0.25;
        sub_14007B2A0(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076264), v273);
        *(_QWORD *)&v272 = *v417;
        *(float *)&v272 = *(float *)&v272 * 0.25;
        goto LABEL_338;
      }
      if ( v251 == 3 )
      {
        *(_QWORD *)&v274 = *v253;
        *(float *)&v274 = *(float *)&v274 * 0.75;
        sub_14007B2A0(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076264), v274);
        *(_QWORD *)&v272 = *v417;
        *(float *)&v272 = *(float *)&v272 * 0.75;
        goto LABEL_338;
      }
LABEL_339:
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280651314] + v10) )
      {
        if ( v251 == 4 || v251 == 7 )
        {
          *(_QWORD *)&v275 = *v253;
          *(float *)&v275 = *(float *)&v275 * -0.25;
          sub_14007B2A0(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076264), v275);
          sub_14007B2A0(
            ((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252,
            (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252),
            sr_export_float_lane_container(3214330852LL));
        }
        if ( v251 == 5 || v251 == 8 )
          sub_14007B2A0(
            ((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252,
            (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v267 * 4 + 77076252),
            sr_export_float_lane_container(3200847835LL));
      }
      v276 = v426;
      v277 = *(float *)((char *)&dword_140404A6C[282486049] + v426);
      v278 = *(float *)((char *)&dword_140404A6C[282486050] + v426);
      v279 = *(float *)((char *)&dword_140404A6C[282486051] + v426);
      *(float *)&v280 = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215724])
                      + *(float *)&dword_140404A6C[v266 + 18215715];
      dword_140404A6C[v267 + 18215715] = v280;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215725])
                                                  + *(float *)&dword_140404A6C[v266 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215726])
                                                  + *(float *)&dword_140404A6C[v266 + 18215717];
      *(float *)&v281 = (float)(v278 * *(float *)&dword_140404A6C[v266 + 18215727]) + *(float *)&v280;
      *(float *)&v282 = *(float *)((char *)&dword_140404A6C[282486046] + v276) - v277;
      v283 = *(unsigned int *)((char *)&dword_140404A6C[282486047] + v276);
      *(float *)&v283 = *(float *)&v283 - v278;
      dword_140404A6C[v267 + 18215715] = v281;
      v284 = v278 * *(float *)&dword_140404A6C[v266 + 18215728];
      sr_human_tick_point[0] = *(float *)&v282;
      sr_human_tick_point[1] = *(float *)&v283;
      *(float *)&dword_140404A6C[v267 + 18215716] = v284 + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&v286 = (float)(v278 * *(float *)&dword_140404A6C[v266 + 18215729])
                      + *(float *)&dword_140404A6C[v267 + 18215717];
      sr_human_tick_point[2] = *(float *)((char *)&dword_140404A6C[282486048] + v276) - v279;
      v285 = sr_human_tick_point[2];
      dword_140404A6C[v267 + 18215717] = v286;
      *(float *)&v287 = (float)(v279 * *(float *)&dword_140404A6C[v266 + 18215730]) + *(float *)&v281;
      dword_140404A6C[v267 + 18215715] = v287;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(v279 * *(float *)&dword_140404A6C[v266 + 18215731])
                                                  + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(v279 * *(float *)&dword_140404A6C[v266 + 18215732])
                                                  + *(float *)&dword_140404A6C[v267 + 18215717];
      *(float *)&v288 = (float)(*(float *)&v282 * *(float *)&dword_140404A6C[v267 + 18215724]) + *(float *)&v287;
      dword_140404A6C[v267 + 18215715] = v288;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(*(float *)&v282 * *(float *)&dword_140404A6C[v267 + 18215725])
                                                  + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(*(float *)&v282 * *(float *)&dword_140404A6C[v267 + 18215726])
                                                  + *(float *)&dword_140404A6C[v267 + 18215717];
      HIDWORD(v78) = HIDWORD(v283);
      *(float *)&v78 = (float)(*(float *)&v283 * *(float *)&dword_140404A6C[v267 + 18215727]) + *(float *)&v288;
      dword_140404A6C[v267 + 18215715] = v78;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(*(float *)&v283 * *(float *)&dword_140404A6C[v267 + 18215728])
                                                  + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(*(float *)&v283 * *(float *)&dword_140404A6C[v267 + 18215729])
                                                  + *(float *)&dword_140404A6C[v267 + 18215717];
      *(float *)&dword_140404A6C[v267 + 18215715] = (float)(v285 * *(float *)&dword_140404A6C[v267 + 18215730])
                                                  + *(float *)&v78;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(v285 * *(float *)&dword_140404A6C[v267 + 18215731])
                                                  + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(v285 * *(float *)&dword_140404A6C[v267 + 18215732])
                                                  + *(float *)&dword_140404A6C[v267 + 18215717];
      dword_140404A6C[v267 + 18215718] = dword_140404A6C[v266 + 18215718];
      dword_140404A6C[v267 + 18215719] = dword_140404A6C[v266 + 18215719];
      dword_140404A6C[v267 + 18215720] = dword_140404A6C[v266 + 18215720];
LABEL_347:
      ++v251;
    }
    while ( v251 <= 15 );
    v1 = LODWORD(v409);
    v60 = v427;
LABEL_349:
    v24 = (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v10) & 0x800) == 0;
    *(float *)((char *)&dword_140404A6C[280651315] + v10) = v416;
    *(unsigned int *)((char *)&dword_140404A6C[280651316] + v10) = 100;
    if ( v24 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10) = 0;
      goto LABEL_361;
    }
    v289 = *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10);
    if ( v289 <= 0
      || (v290 = v289 + 1,
          *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10) = v290,
          v78 = *(unsigned int *)((char *)&dword_140404A6C[280651338] + v10),
          *(float *)&v78 = (float)((float)(*(float *)&v78 * *(float *)&v78)
                                 + (float)(*(float *)((char *)&dword_140404A6C[280651339] + v10)
                                         * *(float *)((char *)&dword_140404A6C[280651339] + v10)))
                         + (float)(*(float *)((char *)&dword_140404A6C[280651340] + v10)
                                 * *(float *)((char *)&dword_140404A6C[280651340] + v10)),
          v290 < (int)(float)((float)(fsqrt(*(float *)&v78) * 60.0) + v4) + 30) )
    {
LABEL_361:
      v291 = v417;
      v292 = v421;
    }
    else
    {
      v291 = v417;
      v292 = v421;
      *(unsigned int *)((char *)&dword_140404A6C[280651313] + v10) = -1;
      *v291 = *(unsigned int *)((char *)&dword_140404A6C[280651342] + v10);
      *(unsigned int *)((char *)&dword_140404A6C[280651385] + v10) = *(unsigned int *)((char *)&dword_140404A6C[280651357]
                                                                                     + v10);
      v293 = 24944LL * *(int *)((char *)&dword_140404A6C[129716710] + v60);
      *v292 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[129720173] + v60) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10) = 0;
      if ( !dword_140404A6C[v293 + 346707718] )
      {
        v294 = v10 + 1126819124;
        v295 = 0;
        v296 = v410;
        v297 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v294);
        v298 = 0;
        do
        {
          if ( v295 != 12
            && v295 != 15
            && (unsigned int)sub_1400DC050(
                               (float *)((char *)&dword_140404A6C[129716720] + v60),
                               (float *)&dword_140404A6C[7166 * v296 + 280651440 + v298],
                               0) )
          {
            v299 = (float)(*(float *)&dword_140404A6C[73006985] * 0.0625) + *(float *)&dword_140404A6C[73006982];
            *(v297 - 2) = (float)(*(float *)&dword_140404A6C[73006984] * 0.0625) + *(float *)&dword_140404A6C[73006981];
            v300 = *(float *)&dword_140404A6C[73006986] * 0.0625;
            *(v297 - 1) = v299;
            *v297 = v300 + *(float *)&dword_140404A6C[73006983];
          }
          ++v295;
          v298 += 78;
          v297 += 78;
        }
        while ( v295 < 16 );
        v10 = v428;
        goto LABEL_361;
      }
    }
    if ( *(int *)((char *)&dword_140404A6C[280651318] + v10) <= 0
      || *(int *)((char *)&dword_140404A6C[280658299] + v10) < 50 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280651313] + v10) = -1;
      *v292 = *(unsigned int *)((char *)&dword_140404A6C[280651341] + v10);
      *v291 = *(unsigned int *)((char *)&dword_140404A6C[280651342] + v10);
      *(unsigned int *)((char *)&dword_140404A6C[129720173] + v60) = 4;
    }
    v3 = v410;
    if ( (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v10) & 0x800) != 0
      && (*(unsigned int *)((char *)&dword_140404A6C[280651437] + v10) & 0x800) == 0 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280651322] + v10) = 1;
    }
LABEL_368:
    if ( *(int *)((char *)&dword_140404A6C[280651318] + v10) <= 0 )
    {
      v301 = 7;
      v302 = (int *)((char *)&dword_140404A6C[280658140] + v10);
      while ( 1 )
      {
        if ( *(v302 - 1) > 0 )
        {
          v78 = v1;
          v303 = 1760LL * *v302;
          v304 = 47LL * (int)dword_140404A6C[v303 + 278845915];
          dword_140404A6C[v304 + 18215718] = *(unsigned int *)((char *)&dword_140404A6C[280651446] + v10);
          dword_140404A6C[v304 + 18215719] = *(unsigned int *)((char *)&dword_140404A6C[280651447] + v10);
          dword_140404A6C[v304 + 18215720] = *(unsigned int *)((char *)&dword_140404A6C[280651448] + v10);
          sub_1400A56B0(&sr_human_tick_point[0], 0.01666666753590107, *(float *)&v1);
          v305 = sr_human_tick_point[0];
          v306 = sr_human_tick_point[1];
          *(_QWORD *)&dword_140404A6C[v303 + 278845895] = 0;
          v307 = 47LL * (int)dword_140404A6C[v303 + 278845915];
          *(float *)&dword_140404A6C[v307 + 18215718] = v305 + *(float *)&dword_140404A6C[v307 + 18215718];
          v308 = sr_human_tick_point[2];
          *(float *)&dword_140404A6C[v307 + 18215719] = v306 + *(float *)&dword_140404A6C[v307 + 18215719];
          *(float *)&dword_140404A6C[v307 + 18215720] = v308 + *(float *)&dword_140404A6C[v307 + 18215720];
          v309 = *v302;
          if ( (unsigned int)v309 <= 0x3FF )
          {
            v310 = 1760 * v309;
            v311 = *v302;
            v312 = dword_140404A6C[1760 * v309 + 278845903];
            if ( v312 != -1 )
            {
              sub_1400CA9B0(v309, v312);
              goto LABEL_377;
            }
            v313 = dword_140404A6C[v310 + 278845902];
            if ( v313 != -1 )
            {
              sub_1400CA7C0(v309, v313, dword_140404A6C[v310 + 278845904]);
LABEL_377:
              if ( dword_140404A6C[456202453] )
                ++dword_140404A6C[v311 + 280648157];
            }
          }
        }
        v302 += 10;
        if ( !--v301 )
          goto LABEL_380;
      }
    }
    sub_1400B62E0(v3);
    sub_1400A87A0(v3);
LABEL_380:
    v314 = 16;
    v315 = (char *)&dword_140404A6C[280651457] + v10;
    do
    {
      v316 = *((int *)v315 - 18);
      v315 += 312;
      *((_DWORD *)v315 - 95) = dword_140404A6C[47 * v316 + 18215715];
      *((_DWORD *)v315 - 94) = dword_140404A6C[47 * v316 + 18215716];
      *((_DWORD *)v315 - 93) = dword_140404A6C[47 * v316 + 18215717];
      *((_DWORD *)v315 - 89) = dword_140404A6C[47 * v316 + 18215718];
      *((_DWORD *)v315 - 88) = dword_140404A6C[47 * v316 + 18215719];
      *((_DWORD *)v315 - 87) = dword_140404A6C[47 * v316 + 18215720];
      v317 = &dword_140404A6C[47 * v316 + 18215724];
      *((_DWORD *)v315 - 83) = *v317;
      *((_DWORD *)v315 - 82) = v317[1];
      *((_DWORD *)v315 - 81) = v317[2];
      *((_DWORD *)v315 - 80) = v317[3];
      *((_DWORD *)v315 - 79) = v317[4];
      *((_DWORD *)v315 - 78) = v317[5];
      *((_DWORD *)v315 - 77) = v317[6];
      *((_DWORD *)v315 - 76) = v317[7];
      *((_DWORD *)v315 - 75) = v317[8];
      *((_DWORD *)v315 - 74) = dword_140404A6C[47 * v316 + 18215736];
      *((_DWORD *)v315 - 73) = dword_140404A6C[47 * v316 + 18215737];
      *((_DWORD *)v315 - 72) = dword_140404A6C[47 * v316 + 18215738];
      --v314;
    }
    while ( v314 );
    v318 = v410;
    sub_1400AD2B0(v410, v316, *(double *)&v78);
    v319 = v428;
    v320 = v427;
    if ( *(float *)((char *)&dword_140404A6C[280651456] + v428) < 0.7070000171661377 )
      *(unsigned int *)((char *)&dword_140404A6C[280657908] + v428) = 0;
    if ( *(unsigned int *)((char *)&dword_140404A6C[280651313] + v319) != -1 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[280658026] + v319) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[280658081] + v319) = 0;
      v321 = *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319);
      goto LABEL_386;
    }
    v321 = *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319);
    if ( v321 == 4 )
    {
      *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319) = 1;
      v322 = 1;
      *(unsigned int *)((char *)&dword_140404A6C[280658004] + v319) = 0;
      goto LABEL_392;
    }
LABEL_386:
    v322 = v321;
    if ( v321 == 2 )
    {
      if ( (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v319) & 0x80000) == 0 )
      {
        v322 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319) = 0;
        goto LABEL_392;
      }
LABEL_393:
      *(unsigned int *)((char *)&dword_140404A6C[280651325] + v319) = 2;
      sub_1400BA210(v318);
    }
    else
    {
      if ( v321 != 3 )
      {
LABEL_392:
        if ( (*(unsigned int *)((char *)&dword_140404A6C[280651436] + v319) & 0x80000) != 0 )
          goto LABEL_393;
      }
      if ( (v322 & 0xFFFFFFFA) != 0 || v322 == 4 )
      {
        switch ( v322 )
        {
          case 2:
            sub_1400BA210(v318);
            break;
          case 4:
            sub_1400B9D90(v318);
            break;
          case 3:
            sub_1400B78F0(v318);
            break;
        }
      }
      else
      {
        sub_1400BCA30(v318);
      }
    }
    if ( *(int *)((char *)&dword_140404A6C[280651318] + v319) <= 0
      || *(int *)((char *)&dword_140404A6C[280658299] + v319) < 50 )
    {
      v323 = v410;
      v324 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v319 + 1126819712);
      v325 = (int *)&dword_140404A6C[282486070];
      v326 = 1;
      do
      {
        v327 = *v324;
        v328 = *v325;
        v329 = 36 * v327;
        v330 = &dword_140404A6C[36 * v327 + 485543049];
        *(_QWORD *)&dword_140404A6C[v329 + 485543033] = 0;
        dword_140404A6C[v329 + 485543035] = 0;
        dword_140404A6C[v329 + 485543048] = 0;
        *(_QWORD *)v330 = 0;
        v330[2] = 0;
        sub_1400A9EF0(v323, v328, v326, (float *)v330);
        if ( fsqrt(
               (float)((float)(*(float *)&dword_140404A6C[v329 + 485543049]
                             * *(float *)&dword_140404A6C[v329 + 485543049])
                     + (float)(*(float *)&dword_140404A6C[v329 + 485543050]
                             * *(float *)&dword_140404A6C[v329 + 485543050]))
             + (float)(*(float *)&dword_140404A6C[v329 + 485543051] * *(float *)&dword_140404A6C[v329 + 485543051])) > *(float *)&v1 )
          dword_140404A6C[v329 + 485543048] = 1;
        ++v326;
        v324 += 78;
        v325 += 25;
        dword_140404A6C[61 * v327 + 486149287] = 964689920;
      }
      while ( v326 < 16 );
      v319 = v428;
      v320 = v427;
      v318 = v410;
    }
    v24 = LODWORD(v416) == -1;
    *(unsigned int *)((char *)&dword_140404A6C[280651335] + v319) = *(unsigned int *)((char *)&dword_140404A6C[280651440]
                                                                                    + v319);
    *(unsigned int *)((char *)&dword_140404A6C[280651336] + v319) = *(unsigned int *)((char *)&dword_140404A6C[280651441]
                                                                                    + v319);
    *(unsigned int *)((char *)&dword_140404A6C[280651337] + v319) = *(unsigned int *)((char *)&dword_140404A6C[280651442]
                                                                                    + v319);
    *(unsigned int *)((char *)&dword_140404A6C[280651304] + v319) = 1;
    if ( !v24
      && !dword_140404A6C[24944 * *(unsigned int *)((char *)&dword_140404A6C[129716710] + v320) + 346707718]
      && !*(unsigned int *)((char *)&dword_140404A6C[280651322] + v319) )
    {
      v331 = *(unsigned int *)((char *)&dword_140404A6C[280651304] + v319);
      if ( v414 == 0.0 )
        v331 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[280651304] + v319) = v331;
    }
    if ( *(float *)((char *)&dword_140404A6C[280651441] + v319) < -32.0 )
      *(unsigned int *)((char *)&dword_140404A6C[280651318] + v319) = -100;
    if ( *(unsigned int *)((char *)&dword_140404A6C[280651313] + v319) == -1 )
      sub_1400B2E70(v318);
    if ( *(int *)((char *)&dword_140404A6C[280651318] + v319) > 0 )
    {
      if ( *(unsigned int *)((char *)&dword_140404A6C[280651305] + v319) == -1 )
      {
        v353 = *(unsigned int *)((char *)&dword_140404A6C[280651317] + v319) - 1;
        goto LABEL_472;
      }
      *(unsigned int *)((char *)&dword_140404A6C[280651317] + v319) = 3600;
    }
    else
    {
      v332 = dword_140404A6C[283831312];
      v333 = 3480;
      if ( dword_140404A6C[283831312] == 7 && dword_140404A6C[284022499] )
        v333 = 3300;
      v334 = *(unsigned int *)((char *)&dword_140404A6C[280651317] + v319);
      v335 = v334;
      if ( v334 < v333 )
      {
        v336 = *(int *)((char *)&dword_140404A6C[280651305] + v319);
        if ( (_DWORD)v336 == -1 )
        {
          v351 = *(int *)((char *)&dword_140404A6C[280651306] + v319);
          if ( (_DWORD)v351 != -1 )
          {
            if ( (int)v351 >= 0 && (int)v351 < (int)dword_140404A6C[134050358] )
            {
              v352 = dword_140404A6C[28 * v351 + 134050374];
              if ( (int)(v352 - 10000) > 0 )
                dword_140404A6C[28 * v351 + 134050374] = v352 - (int)(float)((float)(int)(v352 - 10000) * v423);
            }
            *(unsigned int *)((char *)&dword_140404A6C[280651306] + v319) = -1;
            v335 = v334;
          }
        }
        else
        {
          if ( dword_140404A6C[283831312] == 4 && (unsigned int)v336 <= 0xFF )
          {
            sub_14011AF80(v336, dword_140404A6C[3597 * v336 + 71856288]);
            v337 = v336;
            goto LABEL_430;
          }
          v337 = *(unsigned int *)((char *)&dword_140404A6C[280651305] + v319);
          if ( (unsigned int)v336 <= 0xFF )
          {
LABEL_430:
            v338 = 3597LL * v337;
            v339 = dword_140404A6C[v338 + 71856272];
            if ( (int)(v339 - 10000) > 0 )
              dword_140404A6C[v338 + 71856272] = v339 - (int)(float)((float)(int)(v339 - 10000) * v423);
            v340 = (int)dword_140404A6C[v338 + 71856286];
            if ( (_DWORD)v340 != -1 && (int)v340 < 6 )
            {
              v341 = dword_140404A6C[v338 + 71856288];
              v342 = (int)(float)((float)((float)((float)v341 * *(float *)&dword_140404A6C[6 * v340 + 335047062])
                                        - 10000.0)
                                / *(float *)&dword_140404A6C[6 * v340 + 335047062]);
              if ( v342 > 0 )
              {
                dword_140404A6C[6 * v340 + 335047061] -= v342 / 20;
                dword_140404A6C[v338 + 71856288] = v341 - v342 / 20;
              }
            }
            sub_140051F50(v337);
          }
          if ( v332 == 4 )
          {
            if ( !dword_140404A6C[284022498] )
            {
              sub_140138430(v336, 17);
              v332 = dword_140404A6C[283831312];
            }
            v336 = *(int *)((char *)&dword_140404A6C[280651305] + v319);
            dword_140404A6C[3597 * v336 + 71856291] = 30 * (dword_140404A6C[3597 * v336 + 71856276] + 40);
          }
          if ( v332 == 5 )
          {
            if ( (unsigned int)v336 <= 0xFF )
            {
              v343 = (signed int)dword_140404A6C[284022316] / 3;
              sub_140158AB0(v461, "%s has died", (     char *)&dword_140404A6C[3597 * (int)v336 + 71856254]);
              if ( dword_140404A6C[456202453] )
              {
                v344 = -1;
                do
                  ++v344;
                while ( SR_VEC_LANES(128, v461[0], i8)[v344] );
                v345 = dword_140404A6C[308307070];
                if ( (int)v344 > 63 )
                  LODWORD(v344) = 63;
                v346 = dword_140404A6C[283831474];
                v347 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v347) = 2;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v347) = v346;
                sub_1401FC920((__m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v347 + 1195238560), v461, (int)v344);
                *(_BYTE *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v347 + 1195238560 + (int)v344) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v347) = v344;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v347) = 3;
                dword_140404A6C[308307070] = v345 + 1;
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v347) = -1;
                HIWORD(dword_140404A6C[308307070]) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756296] + v347) = 0;
              }
              v348 = dword_140404A6C[283831450];
              if ( (int)dword_140404A6C[283831450] <= 50400 )
              {
                if ( v343 > 0 )
                  v348 = 18000 / v343 + dword_140404A6C[283831450];
                if ( v348 > 50400 )
                  v348 = 50400;
                dword_140404A6C[283831450] = v348;
              }
              v332 = dword_140404A6C[283831312];
              goto LABEL_456;
            }
          }
          else
          {
LABEL_456:
            if ( v332 == 7 )
            {
              v349 = 3597LL * *(int *)((char *)&dword_140404A6C[280651305] + v319);
              dword_140404A6C[v349 + 71857786] = 0;
              dword_140404A6C[v349 + 71857811] = 0;
              dword_140404A6C[v349 + 71857836] = 0;
              dword_140404A6C[v349 + 71857861] = 0;
              dword_140404A6C[v349 + 71857886] = 0;
              dword_140404A6C[v349 + 71857911] = 0;
              dword_140404A6C[v349 + 71857936] = 0;
            }
          }
          v350 = *(unsigned int *)((char *)&dword_140404A6C[280651305] + v319);
          dword_140404A6C[3597 * v350 + 71856292] = -1;
          sub_140051DC0(v350);
          v335 = *(unsigned int *)((char *)&dword_140404A6C[280651317] + v319);
          *(_QWORD *)((char *)&dword_140404A6C[280651305] + v319) = -1;
        }
      }
      v353 = v335 - 1;
      if ( ((v332 - 3) & 0xFFFFFFFD) == 0 && v353 < 4 )
        v353 = 4;
LABEL_472:
      *(unsigned int *)((char *)&dword_140404A6C[280651317] + v319) = v353;
      if ( v353 <= 0 )
        sub_14007F590(v410);
    }
    v354 = (float *)((char *)&dword_140404A6C[280651576] + v319);
    *(unsigned int *)((char *)&dword_140404A6C[280651437] + v319) = *(unsigned int *)((char *)&dword_140404A6C[280651436]
                                                                                    + v319);
    v355 = &dword_140404A6C[282486070];
    do
    {
      v356 = *(v354 - 39);
      v357 = *(v354 - 46);
      v358 = *(v354 - 38);
      v359 = *(v354 - 45);
      v360 = (int)*v355;
      *(float *)&v426 = *(v354 - 44);
      v416 = v359;
      v412 = v357;
      v414 = *(v354 - 42);
      *(float *)&v428 = v356;
      *(float *)&v421 = v358;
      v361 = v319 + 312 * v360;
      v362 = *(float *)((char *)&dword_140404A6C[280651453] + v361);
      v363 = *(float *)((char *)&dword_140404A6C[280651452] + v361);
      v364 = *(float *)((char *)&dword_140404A6C[280651454] + v361);
      v365 = *(float *)((char *)&dword_140404A6C[280651456] + v361);
      v366 = *(float *)((char *)&dword_140404A6C[280651455] + v361);
      v367 = *(float *)((char *)&dword_140404A6C[280651457] + v361);
      v368 = *(float *)((char *)&dword_140404A6C[280651458] + v361);
      v413 = *(v354 - 43);
      v369 = *(v354 - 40);
      v370 = (float)((float)(v357 * v363) + (float)(v359 * v362)) + (float)(*(float *)&v426 * v364);
      v411 = *(v354 - 41);
      v371 = (float)((float)(v413 * v363) + (float)(v414 * v362)) + (float)(v411 * v364);
      *(float *)&v427 = v369;
      v372 = sub_14023F704(
               (float)((float)(v369 * v366) + (float)(v356 * v365)) + (float)(v358 * v367),
               (float)((float)(v369 * v368) + (float)(*(float *)((char *)&dword_140404A6C[280651459] + v361) * v356))
             + (float)(*(float *)((char *)&dword_140404A6C[280651460] + v361) * v358));
      *(_QWORD *)&v373 = (unsigned int)v428;
      v374 = v372;
      *(float *)&v373 = *(float *)&v428 * v362;
      sr_human_tick_point[0] = fsqrt((float)(v371 * v371) + (float)(v370 * v370));
      v375 = sub_14023F704(
               COERCE_FLOAT(
                 COERCE_UNSIGNED_INT(
                   (float)((float)(*(float *)&v427 * v363) + (float)(*(float *)&v428 * v362))
                 + (float)(*(float *)&v421 * v364))
               ^ v424),
               sr_human_tick_point[0]);
      v377 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v374)), v376, v373);
      v378 = *(float *)((char *)&dword_140404A6C[280651460] + v361);
      v379 = *(float *)((char *)&dword_140404A6C[280651459] + v361) * v414;
      v380 = (float)(v412 * v368) + (float)(*(float *)((char *)&dword_140404A6C[280651459] + v361) * v416);
      sr_human_tick_point[1] = SR_VEC_LANES(128, v377, f32)[0];
      sr_human_tick_point[2] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v377, v377, 1), f32)[0];
      SR_VEC_LANES(128, v377, f32)[0] = sub_14023F704(
                           (float)((float)(v380 + (float)(v378 * *(float *)&v426)) * sr_human_tick_point[1])
                         - (float)((float)((float)((float)(v412 * v366) + (float)(v365 * v416))
                                         + (float)(v367 * *(float *)&v426))
                                 * sr_human_tick_point[2]),
                           (float)((float)((float)((float)(v413 * v366) + (float)(v414 * v365)) + (float)(v411 * v367))
                                 * sr_human_tick_point[2])
                         - (float)((float)((float)((float)(v413 * v368) + v379) + (float)(v378 * v411)) * sr_human_tick_point[1]));
      v381 = v412;
      *(float *)&v373 = v416;
      v382 = *(float *)&v426;
      *(v354 - 6) = SR_VEC_LANES(128, v377, f32)[0];
      *(v354 - 7) = v375;
      *(v354 - 8) = v374;
      v383 = *(float *)((char *)&dword_140404A6C[280651452] + v361);
      v384 = *(float *)((char *)&dword_140404A6C[280651453] + v361);
      v385 = *(float *)((char *)&dword_140404A6C[280651454] + v361);
      v386 = *(float *)((char *)&dword_140404A6C[280651456] + v361);
      v387 = *(float *)((char *)&dword_140404A6C[280651455] + v361);
      v388 = *(float *)((char *)&dword_140404A6C[280651457] + v361);
      v389 = *(float *)((char *)&dword_140404A6C[280651459] + v361);
      v390 = *(float *)((char *)&dword_140404A6C[280651458] + v361);
      v391 = *(float *)((char *)&dword_140404A6C[280651460] + v361);
      v392 = (float)(v384 * *(float *)&v373) + (float)(v381 * v383);
      *(float *)&v417 = v383;
      SR_VEC_LANES(128, v377, f32)[0] = v381;
      v393 = v389 * *(float *)&v373;
      v394 = (float)((float)(v386 * *(float *)&v373) + (float)(SR_VEC_LANES(128, v377, f32)[0] * v387)) + (float)(v388 * v382);
      v395 = v383 * v413;
      v355 += 25;
      *(float *)&v373 = v390 * v413;
      v396 = v385 * v411;
      SR_VEC_LANES(128, v377, f32)[0] = v412 * v390;
      *(v354 - 5) = v392 + (float)(v385 * v382);
      *(v354 - 4) = v394;
      v397 = v393 + SR_VEC_LANES(128, v377, f32)[0];
      SR_VEC_LANES(128, v377, f32)[0] = v391 * v382;
      v398 = v387 * v413;
      v399 = v395 + (float)(v414 * v384);
      *(v354 - 3) = v397 + SR_VEC_LANES(128, v377, f32)[0];
      v400 = *(float *)&v421;
      v401 = v399 + v396;
      v402 = v388 * v411;
      v403 = v398 + (float)(v414 * v386);
      SR_VEC_LANES(128, v377, f32)[0] = v414 * v389;
      *(v354 - 2) = v401;
      v404 = *(float *)&v428;
      *(float *)&v373 = (float)(*(float *)&v373 + SR_VEC_LANES(128, v377, f32)[0]) + (float)(v391 * v411);
      *(v354 - 1) = v403 + v402;
      v405 = *(float *)&v427;
      v406 = v387 * *(float *)&v427;
      *v354 = *(float *)&v373;
      v354[1] = (float)((float)(*(float *)&v417 * v405) + (float)(v404 * v384)) + (float)(v400 * v385);
      v354[2] = (float)(v406 + (float)(v404 * v386)) + (float)(v400 * v388);
      v354[3] = (float)((float)(v390 * v405) + (float)(v404 * v389)) + (float)(v400 * v391);
      v354 += 78;
    }
    while ( (__int64)v355 < (__int64)&dword_140404A6C[282486445] );
    v1 = LODWORD(v409);
    v2 = v433;
    v4 = *(float *)&v425;
    v6 = *(float *)&v415;
    v9 = v422;
    v8 = *(double *)&v451;
    v7 = *(double *)&v452;
    v3 = v410;
    v0 = v434;
    v5 = v449;
LABEL_477:
    ++v3;
    ++v5;
    v410 = v3;
    v449 = v5;
  }
  while ( v3 < 256 );
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v408
#undef v409
#undef v410
#undef v411
#undef v412
#undef v413
#undef v414
#undef v415
#undef v416
#undef v417
#undef v421
#undef v422
#undef v423
#undef v424
#undef v425
#undef v426
#undef v427
#undef v428
#undef v432
#undef v433
#undef v434
#undef v435
#undef v439
#undef v440
#undef v441
#undef v442
#undef v443
#undef v444
#undef v445
#undef v446
#undef v447
#undef v448
#undef v449
#undef v450
#undef v451
#undef v452
#undef v453
#undef v454
#undef v461
#undef v462

//----- (0000000140008020) ----------------------------------------------------
void sub_140008020()
{
  unsigned int *v0; // r12
  int i; // r13d
  int v2; // ecx
  int v3; // edx
  __int64 v4; // r10
  float v5; // xmm2_4
  float v6; // xmm3_4
  unsigned int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm1_4
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int *v19; // rbp
  __int64 v20; // rsi
  unsigned int *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // ecx

  v0 = &dword_140404A6C[133450256];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v0 - 3) )
    {
      v2 = v0[1];
      if ( v2 > 0 )
        v0[1] = --v2;
      if ( (((unsigned __int8)i ^ LOBYTE(dword_140404A6C[283831474])) & 0x1F) == 0 )
      {
        v3 = 0;
        if ( !v2 )
        {
          v4 = (int)*v0;
          if ( (_DWORD)v4 == -1 )
          {
            v5 = *((float *)v0 + 2);
            v6 = *((float *)v0 + 4);
          }
          else
          {
            v5 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
            v6 = *(float *)&dword_140404A6C[7166 * v4 + 280651337];
          }
          v7 = &dword_140404A6C[280658608];
          v8 = 64;
          do
          {
            if ( *(v7 - 7305) )
            {
              v9 = (int)*(v7 - 7303);
              if ( (_DWORD)v9 != -1 && !dword_140404A6C[3597 * v9 + 71859139] && (int)*(v7 - 7290) > 0 && v3 < 2 )
              {
                v10 = (float)((float)(v6 - *((float *)v7 - 7166)) * (float)(v6 - *((float *)v7 - 7166)))
                    + (float)((float)(v5 - *((float *)v7 - 7168)) * (float)(v5 - *((float *)v7 - 7168)));
                if ( v10 >= 9216.0 )
                {
                  if ( v10 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( *(v7 - 139) )
            {
              v11 = (int)*(v7 - 137);
              if ( (_DWORD)v11 != -1 && !dword_140404A6C[3597 * v11 + 71859139] && (int)*(v7 - 124) > 0 && v3 < 2 )
              {
                v12 = (float)((float)(v6 - *(float *)v7) * (float)(v6 - *(float *)v7))
                    + (float)((float)(v5 - *((float *)v7 - 2)) * (float)(v5 - *((float *)v7 - 2)));
                if ( v12 >= 9216.0 )
                {
                  if ( v12 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( v7[7027] )
            {
              v13 = (int)v7[7029];
              if ( (_DWORD)v13 != -1 && !dword_140404A6C[3597 * v13 + 71859139] && (int)v7[7042] > 0 && v3 < 2 )
              {
                v14 = (float)((float)(v6 - *((float *)v7 + 7166)) * (float)(v6 - *((float *)v7 + 7166)))
                    + (float)((float)(v5 - *((float *)v7 + 7164)) * (float)(v5 - *((float *)v7 + 7164)));
                if ( v14 >= 9216.0 )
                {
                  if ( v14 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            if ( v7[14193] )
            {
              v15 = (int)v7[14195];
              if ( (_DWORD)v15 != -1 && !dword_140404A6C[3597 * v15 + 71859139] && (int)v7[14208] > 0 && v3 < 2 )
              {
                v16 = (float)((float)(v6 - *((float *)v7 + 14332)) * (float)(v6 - *((float *)v7 + 14332)))
                    + (float)((float)(v5 - *((float *)v7 + 14330)) * (float)(v5 - *((float *)v7 + 14330)));
                if ( v16 >= 9216.0 )
                {
                  if ( v16 < 10816.0 )
                    v3 = 1;
                }
                else
                {
                  v3 = 2;
                }
              }
            }
            v7 += 28664;
            --v8;
          }
          while ( v8 );
          if ( v3 == 2 )
          {
            if ( (_DWORD)v4 != -1 )
            {
LABEL_64:
              if ( (int)dword_140404A6C[7166 * (int)v4 + 280651318] <= 0 )
              {
                v25 = *(v0 - 1);
                *v0 = -1;
                if ( v25 != -1 )
                {
                  sub_1400802F0(v25);
                  *(v0 - 1) = -1;
                }
                v0[1] = 18000;
              }
              goto LABEL_68;
            }
            sub_140007C90(i);
LABEL_63:
            LODWORD(v4) = *v0;
            if ( *v0 == -1 )
              goto LABEL_68;
            goto LABEL_64;
          }
          if ( v3 )
            goto LABEL_63;
        }
        v17 = (int)*v0;
        if ( (_DWORD)v17 != -1 )
        {
          v18 = 8;
          v19 = &dword_140404A6C[7166 * v17 + 280658140];
          do
          {
            v20 = (int)*(v19 - 1);
            if ( v20 > 0 )
            {
              v21 = v19;
              do
              {
                v22 = (int)*v21;
                v23 = 1760 * v22;
                if ( (int)dword_140404A6C[1760 * v22 + 278845906] > 0 )
                {
                  dword_140404A6C[1760 * dword_140404A6C[v23 + 278845907] + 278845900] = 0;
                  sub_1400CA9B0(dword_140404A6C[v23 + 278845907], v22);
                }
                ++v21;
                dword_140404A6C[v23 + 278845900] = 0;
                --v20;
              }
              while ( v20 );
            }
            v19 += 10;
            --v18;
          }
          while ( v18 );
          sub_14007F590(*v0);
          *v0 = -1;
        }
        v24 = *(v0 - 1);
        if ( v24 != -1 )
        {
          sub_1400802F0(v24);
          *(v0 - 1) = -1;
        }
        goto LABEL_63;
      }
    }
LABEL_68:
    v0 += 202;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140008440) ----------------------------------------------------
void            sub_140008440(int a1, int a2)
{
  __int64 v2; // r13
  int v3; // r10d
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // r12
  signed int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r10
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rbx
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  __int64 v24; // rax
  unsigned int *v25; // rdx
  __int64 v26; // rbx
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  signed int v33; // r9d
  __int64 v34; // r8
  float *v35; // rdx
  float v36; // xmm0_4
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r10d
  __int64 v41; // r9
  __int64 v42; // rax
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm6_4
  float *v48; // rdx
  __int64 v49; // rax
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  __int64 v53; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140008440[16];
#define v54 (*(float (*))(void *)(sr_frame_140008440 + 0)) /* [rsp+20h] */
#define v55 (*(float (*))(void *)(sr_frame_140008440 + 4)) /* [rsp+24h] */
#define v56 (*(float (*))(void *)(sr_frame_140008440 + 8)) /* [rsp+28h] */

  v2 = a1;
  v3 = a2;
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ LOBYTE(dword_140404A6C[283831474])) & 1) == 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
    {
      if ( dword_140404A6C[v5 + 280651303] )
      {
        if ( (int)dword_140404A6C[v5 + 280651318] > 0 )
        {
          v8 = (int)dword_140404A6C[v5 + 280651305];
          if ( (_DWORD)v8 != -1 )
          {
            v9 = 3597 * v2;
            if ( dword_140404A6C[3597 * v8 + 71856286] != dword_140404A6C[3597 * v2 + 71856286] )
            {
              v10 = 7166LL * v3;
              if ( (float)((float)((float)((float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651675]
                                                 - *(float *)&dword_140404A6C[v5 + 280651675]))
                                 + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])
                                         * (float)(*(float *)&dword_140404A6C[v10 + 280651674]
                                                 - *(float *)&dword_140404A6C[v5 + 280651674])))
                         + (float)((float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676])
                                 * (float)(*(float *)&dword_140404A6C[v10 + 280651676]
                                         - *(float *)&dword_140404A6C[v5 + 280651676]))) < 16384.0 )
              {
                v11 = dword_140404A6C[v9 + 71859668];
                v12 = 0;
                LODWORD(v13) = -1;
                if ( v11 > 0 )
                {
                  v14 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v9 * 4 + 291652036);
                  do
                  {
                    v15 = *v14 == v4;
                    v14 += 6;
                    v16 = v12;
                    if ( !v15 )
                      v16 = v13;
                    ++v12;
                    LODWORD(v13) = v16;
                  }
                  while ( v12 < v11 );
                }
                v17 = dword_140404A6C[283831474] & 0xF;
                if ( dword_140404A6C[v5 + 280651313] != -1 )
                  v17 = 3;
                v18 = 312 * v17 + v5 * 4;
                v19 = *(float *)((char *)&dword_140404A6C[280651441] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651675];
                v20 = *(float *)((char *)&dword_140404A6C[280651442] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651676];
                v54 = *(float *)((char *)&dword_140404A6C[280651440] + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651674];
                v55 = v19;
                v21 = v19 * v19;
                v22 = (float)(v19 * *(float *)&dword_140404A6C[v10 + 280651693])
                    + (float)(v54 * *(float *)&dword_140404A6C[v10 + 280651692]);
                v56 = v20;
                v23 = fsqrt((float)(v21 + (float)(v54 * v54)) + (float)(v20 * v20));
                if ( (float)(v22 + (float)(v20 * *(float *)&dword_140404A6C[v10 + 280651694])) < 0.0
                  && (dword_140404A6C[v9 + 71859140] == 1
                   || !(unsigned int)sub_1400DC050(
                                       (float *)&dword_140404A6C[v10 + 280651674],
                                       (float *)&dword_140404A6C[78 * v17 + 280651440 + v6],
                                       1)) )
                {
                  if ( (_DWORD)v13 != -1 )
                    goto LABEL_23;
                  v24 = (int)dword_140404A6C[v9 + 71859668];
                  if ( (int)v24 < 16 )
                  {
                    dword_140404A6C[6 * v24 + 71859670 + v9] = v4;
                    v13 = (int)dword_140404A6C[v9 + 71859668];
                    dword_140404A6C[6 * v13 + 71859674 + v9] = 0;
                    v25 = &dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668] + 71859671 + v9];
                    *v25 = *(unsigned int *)((char *)&dword_140404A6C[280651440] + v18);
                    v25[1] = *(unsigned int *)((char *)&dword_140404A6C[280651441] + v18);
                    v25[2] = *(unsigned int *)((char *)&dword_140404A6C[280651442] + v18);
                    dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668]++ + 71859675 + v9] = 600;
                    if ( (_DWORD)v13 != -1 )
                    {
LABEL_23:
                      v26 = v9 * 4 + 24LL * (int)v13;
                      v27 = *(float *)((char *)&dword_140404A6C[71859674] + v26) + 1.0;
                      *(float *)((char *)&dword_140404A6C[71859674] + v26) = v27;
                      if ( v27 > 16.0 )
                        *(unsigned int *)((char *)&dword_140404A6C[71859674] + v26) = 1098907648;
                      *(float *)((char *)&dword_140404A6C[71859671] + v26) = *(float *)((char *)&dword_140404A6C[71859671]
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859672] + v26) = *(float *)((char *)&dword_140404A6C[71859672]
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&dword_140404A6C[71859673] + v26) = *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v26)
                                                                           * 0.875;
                      sub_1400A56B0(
                        &v54,
                        (float)((float)(16.0 - *(float *)((char *)&dword_140404A6C[71859674] + v26)) + v23) * 0.03125,
                        0.0);
                      v28 = v56 + *(float *)((char *)&dword_140404A6C[280651442] + v18);
                      v29 = (float)(v55 + *(float *)((char *)&dword_140404A6C[280651441] + v18))
                          + (float)(*(float *)&dword_140404A6C[v5 + 280651447] * 4.0);
                      v54 = (float)(*(float *)&dword_140404A6C[v5 + 280651446] * 4.0)
                          + (float)(v54 + *(float *)((char *)&dword_140404A6C[280651440] + v18));
                      v30 = *(float *)&dword_140404A6C[v5 + 280651448] * 4.0;
                      v31 = (float)(v54 * 0.125) + *(float *)((char *)&dword_140404A6C[71859671] + v26);
                      v55 = v29;
                      *(float *)((char *)&dword_140404A6C[71859671] + v26) = v31;
                      v32 = (float)(v29 * 0.125) + *(float *)((char *)&dword_140404A6C[71859672] + v26);
                      v56 = v28 + v30;
                      *(float *)((char *)&dword_140404A6C[71859672] + v26) = v32;
                      *(float *)((char *)&dword_140404A6C[71859673] + v26) = (float)((float)(v28 + v30) * 0.125)
                                                                           + *(float *)((char *)&dword_140404A6C[71859673]
                                                                                      + v26);
                    }
                  }
                }
              }
              v3 = a2;
            }
          }
        }
      }
      ++v4;
      v6 += 7166;
      v5 += 7166;
    }
    while ( v4 < 256 );
    v33 = 0;
    v34 = 3597 * v2;
    if ( (int)dword_140404A6C[3597 * v2 + 71859668] > 0 )
    {
      v35 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v34 * 4 + 291652052);
      do
      {
        v36 = *v35 * 0.96875;
        *v35 = v36;
        if ( v36 >= 0.875 )
        {
          ++v33;
          v35 += 6;
        }
        else
        {
          v37 = (int)dword_140404A6C[v34 + 71859668];
          dword_140404A6C[v34 + 71859668] = v37 - 1;
          v38 = v34 * 4 + 24 * v37;
          *((_OWORD *)v35 - 1) = *(_OWORD *)((char *)&dword_140404A6C[71859664] + v38);
          *(_QWORD *)v35 = *(_QWORD *)((char *)&dword_140404A6C[71859668] + v38);
        }
      }
      while ( v33 < (int)dword_140404A6C[v34 + 71859668] );
    }
    v39 = v3;
    v40 = dword_140404A6C[v34 + 71859668];
    v41 = 7166 * v39;
    dword_140404A6C[v34 + 71859669] = 0;
    v42 = (int)dword_140404A6C[v34 + 71859670];
    v43 = *(float *)&dword_140404A6C[v41 + 280651336];
    v44 = *(float *)&dword_140404A6C[v41 + 280651337];
    v45 = v43 - *(float *)&dword_140404A6C[7166 * v42 + 280651336];
    v46 = v44 - *(float *)&dword_140404A6C[7166 * v42 + 280651337];
    v47 = fsqrt(
            (float)((float)((float)(*(float *)&dword_140404A6C[v41 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v42 + 280651335])
                          * (float)(*(float *)&dword_140404A6C[v41 + 280651335]
                                  - *(float *)&dword_140404A6C[7166 * v42 + 280651335]))
                  + (float)(v45 * v45))
          + (float)(v46 * v46));
    if ( v40 > 1 )
    {
      v48 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v34 * 4 + 291652060);
      do
      {
        if ( v48[4] > 8.0 )
        {
          v49 = *(int *)v48;
          v50 = *(float *)&dword_140404A6C[v41 + 280651335];
          v51 = v43 - *(float *)&dword_140404A6C[7166 * v49 + 280651336];
          v52 = v44 - *(float *)&dword_140404A6C[7166 * v49 + 280651337];
          if ( v47 > fsqrt(
                       (float)((float)(v51 * v51)
                             + (float)((float)(v50 - *(float *)&dword_140404A6C[7166 * v49 + 280651335])
                                     * (float)(v50 - *(float *)&dword_140404A6C[7166 * v49 + 280651335])))
                     + (float)(v52 * v52)) )
          {
            dword_140404A6C[v34 + 71859669] = v7;
            v53 = 7166LL * *(int *)v48;
            v47 = fsqrt(
                    (float)((float)((float)(v43 - *(float *)&dword_140404A6C[v53 + 280651336])
                                  * (float)(v43 - *(float *)&dword_140404A6C[v53 + 280651336]))
                          + (float)((float)(v50 - *(float *)&dword_140404A6C[v53 + 280651335])
                                  * (float)(v50 - *(float *)&dword_140404A6C[v53 + 280651335])))
                  + (float)((float)(v44 - *(float *)&dword_140404A6C[v53 + 280651337])
                          * (float)(v44 - *(float *)&dword_140404A6C[v53 + 280651337])));
          }
        }
        ++v7;
        v48 += 6;
      }
      while ( v7 < v40 );
    }
  }
}
#undef v54
#undef v55
#undef v56

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014002DB60) ----------------------------------------------------
__int64            sub_14002DB60(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // xmm11_4
  unsigned int v7; // xmm12_4
  unsigned int v8; // xmm13_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  float v13; // xmm7_4
  unsigned int *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  float *v21; // rcx
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  float *v31; // rcx
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  unsigned int *v38; // rdi
  signed int v39; // esi
  unsigned int *v40; // r15
  __int64 v41; // rdx
  unsigned int *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  float *v45; // rcx
  float v46; // xmm8_4
  float v47; // xmm6_4
  unsigned int v48; // eax
  unsigned int *v49; // rdi
  signed int i; // r13d
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // r15
  float *v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm6_4
  __int64 v60; // rax
  __int64 v61; // rax
  signed int v62; // r12d
  __int64 v63; // r9
  int *v64; // r15
  __int64 v65; // rsi
  __int64 v66; // r8
  unsigned int *v67; // rdx
  float *v68; // rcx
  float v69; // xmm7_4
  float v70; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002DB60[112];
#define v72 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 0)) /* [rsp+0h] */
#define v73 (*(float (*))(void *)(sr_frame_14002DB60 + 64)) /* [rsp+40h] */
#define v74 (*(unsigned __int64 (*))(void *)(sr_frame_14002DB60 + 72)) /* [rsp+48h] */
#define v75 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 80)) /* [rsp+50h] */
#define v76 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 88)) /* [rsp+58h] */
#define v77 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 92)) /* [rsp+5Ch] */
#define v78 (*(unsigned int (*))(void *)(sr_frame_14002DB60 + 96)) /* [rsp+60h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_14002DB60 + 104)) /* [rsp+68h] */

  v73 = *(float *)&a1;
  v2 = a1;
  v3 = a2;
  if ( !dword_140404A6C[73991637] )
  {
    v4 = 47224LL * a1;
    dword_140404A6C[v4 + 438887428] = 0;
    dword_140404A6C[v4 + 438887438] = 0;
    dword_140404A6C[v4 + 438887448] = 0;
    dword_140404A6C[v4 + 438887458] = 0;
    dword_140404A6C[v4 + 438887468] = 0;
    dword_140404A6C[v4 + 438887478] = 0;
    dword_140404A6C[v4 + 438887488] = 0;
    dword_140404A6C[v4 + 438887498] = 0;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v5 = (int)dword_140404A6C[3597 * a2 + 71856292];
  if ( (_DWORD)v5 == -1 )
  {
    v9 = (int)dword_140404A6C[47224 * a1 + 438887508];
    if ( (_DWORD)v9 == -1 )
    {
      v6 = dword_140404A6C[280651674];
      v7 = dword_140404A6C[280651675];
      v8 = dword_140404A6C[280651676];
    }
    else
    {
      v10 = 7166 * v9;
      v6 = dword_140404A6C[v10 + 280651674];
      v7 = dword_140404A6C[v10 + 280651675];
      v8 = dword_140404A6C[v10 + 280651676];
    }
  }
  else
  {
    v6 = dword_140404A6C[7166 * v5 + 280651674];
    v7 = dword_140404A6C[7166 * v5 + 280651675];
    v8 = dword_140404A6C[7166 * v5 + 280651676];
  }
  v11 = (int)dword_140404A6C[3597 * v3 + 71856292];
  v12 = 8;
  v13 = v73;
  v76 = v6;
  v77 = v7;
  v78 = v8;
  v14 = &dword_140404A6C[47224 * v2 + 438887428];
  v74 = 188896 * v2;
  do
  {
    if ( !*v14 )
      goto LABEL_64;
    v15 = (int)v14[1];
    v13 = 128.0;
    v16 = 3597 * v15;
    if ( !dword_140404A6C[3597 * v15 + 71856253] )
      *v14 = 0;
    v17 = (int)v14[3];
    v18 = 32901 * v15;
    if ( (_DWORD)v17 != -1 )
    {
      v13 = 1.0;
      if ( dword_140404A6C[v18 + 299853693] )
        *v14 = 0;
      v26 = 1760 * v17;
      v27 = dword_140404A6C[v26 + 278845898];
      if ( v27 == 25 )
      {
        v28 = (int)dword_140404A6C[v26 + 278845980];
        if ( (_DWORD)v28 == -1 )
          goto LABEL_56;
        v29 = 1760 * v28;
        if ( dword_140404A6C[1760 * v28 + 278845902] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845904] )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845980] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278846052] != 3 )
LABEL_56:
          *v14 = 0;
      }
      else if ( v27 == 26 )
      {
        v30 = 1760LL * (int)v14[4];
        if ( !dword_140404A6C[v30 + 278845893] )
          *v14 = 0;
        if ( dword_140404A6C[v30 + 278845902] == -1 )
          *v14 = 0;
        if ( (int)dword_140404A6C[v30 + 278845904] >= 2 )
          *v14 = 0;
        if ( !dword_140404A6C[v30 + 278846112] )
          goto LABEL_56;
      }
      v31 = (float *)&dword_140404A6C[v26 + 278845916];
      v32 = *(float *)&dword_140404A6C[v26 + 278845917];
      v33 = (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916])
          * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916]);
      v34 = fsqrt(
              (float)((float)((float)(v31[1] - *(float *)&v7) * (float)(v31[1] - *(float *)&v7))
                    + (float)((float)(*v31 - *(float *)&v6) * (float)(*v31 - *(float *)&v6)))
            + (float)((float)(v31[2] - *(float *)&v8) * (float)(v31[2] - *(float *)&v8)));
      v35 = (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918])
          * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918]);
      *((float *)v14 + 8) = v34;
      if ( (float)((float)((float)((float)(*(float *)&v7 - v32) * (float)(*(float *)&v7 - v32)) + v33) + v35) <= 16384.0 )
      {
        v36 = 1.0;
        if ( (unsigned int)sub_1400DC050(v31, (float *)&v76, 0) )
          v36 = 0.5;
        v34 = *((float *)v14 + 8);
        v8 = v78;
        v7 = v77;
        v6 = v76;
      }
      else
      {
        v36 = 0.5;
      }
      v37 = (float)((float)(v36 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      *((float *)v14 + 9) = v37;
      if ( v34 > v37 )
        goto LABEL_63;
      goto LABEL_64;
    }
    v19 = dword_140404A6C[v18 + 299853695];
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v13 = 64.0;
      }
      else if ( v19 == 2 )
      {
        v13 = 128.0;
      }
    }
    else
    {
      v13 = 8.0;
    }
    v20 = (int)dword_140404A6C[v16 + 71856292];
    v14[2] = v20;
    if ( dword_140404A6C[v18 + 299853693] )
      *v14 = 0;
    if ( dword_140404A6C[283831448] != 3 )
    {
      if ( v11 == -1 )
      {
        if ( (_DWORD)v20 != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( (_DWORD)v20 == -1 )
        {
          *v14 = 0;
          goto LABEL_34;
        }
LABEL_26:
        if ( (int)dword_140404A6C[280651318] <= 0 )
          *v14 = 0;
        v21 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v20 + 1126820052);
        v22 = *v21;
        v23 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v20 + 1126820052);
        v24 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v20 + 1126820052);
        *((float *)v14 + 8) = fsqrt(
                                (float)((float)((float)(v23 - *(float *)&v7) * (float)(v23 - *(float *)&v7))
                                      + (float)((float)(*v21 - *(float *)&v6) * (float)(*v21 - *(float *)&v6)))
                              + (float)((float)(v24 - *(float *)&v8) * (float)(v24 - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v6 - v22) * (float)(*(float *)&v6 - v22))
                           + (float)((float)(*(float *)&v7 - v23) * (float)(*(float *)&v7 - v23)))
                   + (float)((float)(*(float *)&v8 - v24) * (float)(*(float *)&v8 - v24))) <= 16384.0 )
        {
          v25 = 1.0;
          if ( (unsigned int)sub_1400DC050(v21, (float *)&v76, 0) )
            v25 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v25 = 0.5;
        }
        *((float *)v14 + 9) = (float)((float)(v25 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      }
LABEL_34:
      if ( (float)(v13 * *((float *)v14 + 9)) >= *((float *)v14 + 8) )
        goto LABEL_64;
LABEL_63:
      *v14 = 0;
    }
LABEL_64:
    v14 += 10;
    --v12;
  }
  while ( v12 );
  v38 = &dword_140404A6C[71856292];
  v39 = 0;
  v40 = &dword_140404A6C[299853695];
  while ( 2 )
  {
    if ( v39 != (_DWORD)v3 && *(v38 - 39) && !*(v40 - 2) )
    {
      v41 = 0;
      v42 = &dword_140404A6C[v74 / 4 + 438887429];
      do
      {
        if ( *(v42 - 1) && *v42 == v39 && v42[1] == *v38 )
          goto LABEL_96;
        ++v41;
        v42 += 10;
      }
      while ( v41 < 8 );
      if ( dword_140404A6C[283831448] == 3 )
      {
LABEL_80:
        v44 = (int)*v38;
        if ( (_DWORD)v44 == -1 || dword_140404A6C[283831448] == 3 )
          goto LABEL_87;
        v45 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v44 + 1126820052);
        v46 = fsqrt(
                (float)((float)((float)(v45[1] - *(float *)&v7) * (float)(v45[1] - *(float *)&v7))
                      + (float)((float)(*v45 - *(float *)&v6) * (float)(*v45 - *(float *)&v6)))
              + (float)((float)(v45[2] - *(float *)&v8) * (float)(v45[2] - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v44 + 1126820052))
                                   * (float)(*(float *)&v7 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v44 + 1126820052)))
                           + (float)((float)(*(float *)&v6 - *v45) * (float)(*(float *)&v6 - *v45)))
                   + (float)((float)(*(float *)&v8 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v44 + 1126820052))
                           * (float)(*(float *)&v8 - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v44 + 1126820052)))) <= 16384.0 )
        {
          v47 = 1.0;
          if ( (unsigned int)sub_1400DC050(v45, (float *)&v76, 0) )
            v47 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v47 = 0.5;
        }
      }
      else
      {
        v43 = (int)*v38;
        if ( v11 != -1 )
        {
          if ( (_DWORD)v43 == -1 )
            goto LABEL_96;
          goto LABEL_79;
        }
        if ( (_DWORD)v43 != -1 )
        {
LABEL_79:
          if ( (int)dword_140404A6C[7166 * v43 + 280651318] <= 0 )
            goto LABEL_96;
          goto LABEL_80;
        }
LABEL_87:
        v46 = 4.0;
        v47 = 1.0;
      }
      v48 = *v40;
      if ( *v40 )
      {
        if ( v48 == 1 )
        {
          v13 = 64.0;
        }
        else if ( v48 == 2 )
        {
          v13 = 128.0;
        }
      }
      else
      {
        v13 = 8.0;
      }
      if ( v46 < (float)(v47 * v13) )
        sub_140007490(SLODWORD(v73), v39, *v38, 0xFFFFFFFF, 0xFFFFFFFF, v46, v47);
    }
LABEL_96:
    ++v39;
    v40 += 32901;
    v38 += 3597;
    if ( v39 < 256 )
      continue;
    break;
  }
  v49 = &dword_140404A6C[278845980];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v49 - 87) )
    {
      if ( *(v49 - 82) != 25
        || (v51 = (int)*v49, (_DWORD)v51 == -1)
        || (v52 = (int)*(v49 - 78), (_DWORD)v52 == -1)
        || *(v49 - 76)
        || v49[72] != 3
        || (v53 = (int)dword_140404A6C[7166 * v52 + 280651305], (_DWORD)v53 == -1)
        || dword_140404A6C[32901 * v53 + 299853693] )
      {
LABEL_119:
        if ( *(v49 - 82) == 26 )
        {
          if ( v49[132] )
          {
            v60 = (int)*(v49 - 78);
            if ( (_DWORD)v60 != -1 && (int)*(v49 - 76) < 2 )
            {
              v61 = (int)dword_140404A6C[7166 * v60 + 280651305];
              if ( (_DWORD)v61 != -1 && !dword_140404A6C[32901 * v61 + 299853693] )
              {
                v62 = 0;
                v63 = 1028LL * (int)v49[131];
                v75 = v63;
                if ( *(int *)((char *)&dword_140404A6C[273270157] + v63) > 0 )
                {
                  v64 = (int *)((char *)&dword_140404A6C[273270158] + v63);
                  do
                  {
                    v65 = *v64;
                    if ( i != (_DWORD)v65 )
                    {
                      v66 = 0;
                      v67 = &dword_140404A6C[v74 / 4 + 438887429];
                      while ( !*(v67 - 1)
                           || *v67 != dword_140404A6C[7166 * *(v49 - 78) + 280651305]
                           || v67[2] != (_DWORD)v65 )
                      {
                        ++v66;
                        v67 += 10;
                        if ( v66 >= 8 )
                        {
                          v68 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 7040 * v65 + 1119597020);
                          v69 = fsqrt(
                                  (float)((float)((float)(v68[1] - *(float *)&v7) * (float)(v68[1] - *(float *)&v7))
                                        + (float)((float)(*v68 - *(float *)&v6) * (float)(*v68 - *(float *)&v6)))
                                + (float)((float)(v68[2] - *(float *)&v8) * (float)(v68[2] - *(float *)&v8)));
                          if ( (float)((float)((float)((float)(*(float *)&v7
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * v65 + 1119597020))
                                                     * (float)(*(float *)&v7
                                                             - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 7040 * v65 + 1119597020)))
                                             + (float)((float)(*(float *)&v6 - *v68) * (float)(*(float *)&v6 - *v68)))
                                     + (float)((float)(*(float *)&v8
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * v65 + 1119597020))
                                             * (float)(*(float *)&v8
                                                     - *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 7040 * v65 + 1119597020)))) <= 16384.0 )
                          {
                            v70 = 1.0;
                            if ( (unsigned int)sub_1400DC050(v68, (float *)&v76, 0) )
                              v70 = 0.5;
                            v8 = v78;
                            v7 = v77;
                            v6 = v76;
                            v63 = v75;
                          }
                          else
                          {
                            v70 = 0.5;
                          }
                          if ( v69 < v70 )
                          {
                            sub_140007490(
                              SLODWORD(v73),
                              dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                              0xFFFFFFFF,
                              v65,
                              i,
                              v69,
                              v70);
                            v63 = v75;
                          }
                          break;
                        }
                      }
                    }
                    ++v62;
                    ++v64;
                  }
                  while ( v62 < *(int *)((char *)&dword_140404A6C[273270157] + v63) );
                }
              }
            }
          }
        }
      }
      else
      {
        v54 = 0;
        v55 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v74 + 1759763072);
        while ( !*(v55 - 1) || *v55 != (_DWORD)v53 || v55[2] != (_DWORD)v51 )
        {
          ++v54;
          v55 += 10;
          if ( v54 >= 8 )
          {
            v56 = 1760 * v51;
            if ( dword_140404A6C[1760 * v51 + 278845980] == i )
            {
              v57 = (float *)&dword_140404A6C[v56 + 278845916];
              v58 = fsqrt(
                      (float)((float)((float)(v57[1] - *(float *)&v7) * (float)(v57[1] - *(float *)&v7))
                            + (float)((float)(*v57 - *(float *)&v6) * (float)(*v57 - *(float *)&v6)))
                    + (float)((float)(v57[2] - *(float *)&v8) * (float)(v57[2] - *(float *)&v8)));
              if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917])
                                         * (float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917]))
                                 + (float)((float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])
                                         * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])))
                         + (float)((float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918])
                                 * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918]))) <= 16384.0 )
              {
                v59 = 1.0;
                if ( (unsigned int)sub_1400DC050(v57, (float *)&v76, 0) )
                  v59 = 0.5;
                v8 = v78;
                v7 = v77;
                v6 = v76;
              }
              else
              {
                v59 = 0.5;
              }
              if ( v58 < v59 )
                sub_140007490(
                  SLODWORD(v73),
                  dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                  0xFFFFFFFF,
                  v51,
                  dword_140404A6C[v56 + 278845980],
                  v58,
                  v59);
            }
            goto LABEL_119;
          }
        }
      }
    }
    v49 += 1760;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18329E8D4: using guessed type unsigned int;
// 18329E8D8: using guessed type unsigned int;
// 18329E8DC: using guessed type unsigned int;

//----- (000000014002EFF0) ----------------------------------------------------
__int64            sub_14002EFF0(int a1)
{
  signed int v1; // r8d
  signed int v2; // edi
  unsigned int v3; // eax
  double v4; // xmm7_8
  __int64 v5; // rsi
  unsigned int v6; // xmm1_4
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rbx
  unsigned int v10; // edx
  float v11; // xmm1_4
  __int64 v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int128 v15; // xmm1
  double v16; // xmm2_8
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm10_4
  __int64 v24; // xmm6_8
  float v25; // xmm8_4
  double v26; // xmm0_8
  float v27; // xmm4_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  double v31; // xmm2_8
  float v32; // xmm8_4
  float v33; // xmm7_4
  double v34; // xmm2_8
  double v35; // xmm2_8
  double v36; // xmm2_8
  double v37; // xmm2_8
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm10_4
  float v44; // xmm6_4
  double v45; // xmm0_8
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14002EFF0[176];
#define v52 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 0)) /* [rsp+0h] */
#define v53 (*(float (*))(void *)(sr_frame_14002EFF0 + 32)) /* [rsp+20h] */
#define v54 (*(float (*))(void *)(sr_frame_14002EFF0 + 36)) /* [rsp+24h] */
#define v55 (*(float (*))(void *)(sr_frame_14002EFF0 + 40)) /* [rsp+28h] */
#define v56 (*(float (*))(void *)(sr_frame_14002EFF0 + 44)) /* [rsp+2Ch] */
#define v57 (*(float (*))(void *)(sr_frame_14002EFF0 + 48)) /* [rsp+30h] */
#define v58 (*(float (*))(void *)(sr_frame_14002EFF0 + 52)) /* [rsp+34h] */
#define v59 (*(float (*))(void *)(sr_frame_14002EFF0 + 56)) /* [rsp+38h] */
#define v60 (*(float (*))(void *)(sr_frame_14002EFF0 + 64)) /* [rsp+40h] */
#define v61 (*(float (*))(void *)(sr_frame_14002EFF0 + 68)) /* [rsp+44h] */
#define v62 (*(float (*))(void *)(sr_frame_14002EFF0 + 72)) /* [rsp+48h] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 80)) /* [rsp+50h] */
#define v64 (*(float (*)[10])(void *)(sr_frame_14002EFF0 + 88)) /* [rsp+58h] */
#define v65 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 128)) /* [rsp+80h] */
#define v66 (*(__int128 (*))(void *)(sr_frame_14002EFF0 + 144)) /* [rsp+90h] */
#define v67 (*(unsigned int (*))(void *)(sr_frame_14002EFF0 + 160)) /* [rsp+A0h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_14002EFF0 + 168)) /* [rsp+A8h] */

  v1 = dword_140404A6C[284024501];
  v2 = -1;
  if ( dword_140404A6C[284024501] != -1 )
    v2 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
  if ( a1 > 0 )
  {
    v3 = dword_140404A6C[284024519];
    *(_QWORD *)&v4 = v63;
    v5 = (unsigned int)a1;
    do
    {
      if ( v2 != -1 )
      {
        if ( v2 != v3 )
        {
          *(_QWORD *)&dword_140404A6C[284024535] = 0;
          dword_140404A6C[284024537] = 0;
          *(_QWORD *)&dword_140404A6C[284024523] = 0;
          dword_140404A6C[284024525] = 0;
          v6 = dword_140404A6C[7166 * v2 + 280651675];
          dword_140404A6C[284024520] = dword_140404A6C[7166 * v2 + 280651674];
          dword_140404A6C[284024522] = dword_140404A6C[7166 * v2 + 280651676];
          v7 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651686];
          dword_140404A6C[284024521] = v6;
          v8 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651690];
          *(_OWORD *)&dword_140404A6C[284024526] = v7;
          dword_140404A6C[284024534] = dword_140404A6C[7166 * v2 + 280651694];
          *(_OWORD *)&dword_140404A6C[284024530] = v8;
        }
        v9 = 7166LL * v2;
        v10 = dword_140404A6C[v9 + 280651313];
        if ( v10 == -1 )
        {
          v11 = *(float *)&dword_140404A6C[v9 + 280651357];
          v12 = 3597LL * v1;
          v13 = *(float *)&dword_140404A6C[v12 + 71856301];
          if ( (float)(v13 - v11) >= 3.14159265359 )
            v11 = v11 + 6.2831854820251465;
          if ( (float)(v11 - v13) >= 3.14159265359 )
            v13 = v13 + 6.2831854820251465;
          *(_QWORD *)&v4 = dword_140404A6C[v12 + 71856297];
          v14 = v11 - v13;
          if ( (float)(v14 - *(float *)&v4) >= 3.14159265359 )
            *(float *)&v4 = *(float *)&v4 + 6.2831854820251465;
          if ( (float)(*(float *)&v4 - v14) >= 3.14159265359 )
            v14 = v14 + 6.2831854820251465;
          *(float *)&v4 = *(float *)&v4 - v14;
        }
        v15 = *(_OWORD *)&dword_140404A6C[v9 + 280651690];
        v65 = *(_OWORD *)&dword_140404A6C[v9 + 280651686];
        v67 = dword_140404A6C[v9 + 280651694];
        v66 = v15;
        if ( fsqrt(
               (float)((float)(*(float *)&dword_140404A6C[284024527] * *(float *)&dword_140404A6C[284024527])
                     + (float)(*(float *)&dword_140404A6C[284024526] * *(float *)&dword_140404A6C[284024526]))
             + (float)(*(float *)&dword_140404A6C[284024528] * *(float *)&dword_140404A6C[284024528])) < 0.5 )
        {
          v65 = xmmword_140278D30;
          v67 = 1065353216;
          dword_140404A6C[284024534] = 1065353216;
          v66 = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024526] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024530] = xmmword_140278D30;
        }
        if ( v10 == -1 )
        {
          HIDWORD(v16) = HIDWORD(v4);
          *(float *)&v16 = *(float *)&v4 - *(float *)&dword_140404A6C[v9 + 280651365];
        }
        else
        {
          *(_QWORD *)&v16 = dword_140404A6C[3597 * v1 + 71856299];
        }
        sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v16);
        v17 = *(float *)&dword_140404A6C[v9 + 280651675];
        v18 = *(float *)&dword_140404A6C[v9 + 280651676];
        *(float *)&dword_140404A6C[284024520] = *(float *)&dword_140404A6C[284024520]
                                              + (float)((float)(*(float *)&dword_140404A6C[v9 + 280651674]
                                                              - *(float *)&dword_140404A6C[284024520])
                                                      * 0.5);
        *(float *)&dword_140404A6C[284024521] = *(float *)&dword_140404A6C[284024521]
                                              + (float)((float)(v17 - *(float *)&dword_140404A6C[284024521]) * 0.5);
        *(float *)&dword_140404A6C[284024522] = *(float *)&dword_140404A6C[284024522]
                                              + (float)((float)(v18 - *(float *)&dword_140404A6C[284024522]) * 0.5);
        sub_14011C080(v64, (float *)&v65, (float *)&dword_140404A6C[284024526]);
        sub_14010E370(&v53, v64);
        v19 = -v53;
        v20 = -v54;
        v21 = -v55;
        v53 = v19;
        v54 = v20;
        v55 = v21;
        v22 = fsqrt((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
        if ( v22 == 0.0 )
        {
          v23 = 0.0;
          v24 = 0;
          v25 = 0.0;
        }
        else
        {
          HIDWORD(v24) = 0;
          v23 = (float)(1.0 / v22) * v19;
          *(float *)&v24 = (float)(1.0 / v22) * v20;
          v25 = (float)(1.0 / v22) * v21;
        }
        v26 = acos(fminf(fmaxf(v56, -1.0), 1.0));
        v27 = *(float *)&dword_140404A6C[284024530];
        v28 = v26 + v26;
        v58 = *(float *)&v24 * v28;
        v57 = v23 * v28;
        v59 = v25 * v28;
        v60 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024529])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024526]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024532]);
        v61 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024530])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024527]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024533]);
        v29 = (float)(v60 * 0.125) + *(float *)&dword_140404A6C[284024535];
        v62 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&dword_140404A6C[284024531])
                    + (float)((float)(v23 * v28) * *(float *)&dword_140404A6C[284024528]))
            + (float)((float)(v25 * v28) * *(float *)&dword_140404A6C[284024534]);
        v30 = (float)(v61 * 0.125) + *(float *)&dword_140404A6C[284024536];
        *(float *)&v24 = (float)(v62 * 0.125) + *(float *)&dword_140404A6C[284024537];
        HIDWORD(v31) = HIDWORD(v24);
        *(float *)&dword_140404A6C[284024535] = v29 * 0.5;
        *(float *)&dword_140404A6C[284024536] = v30 * 0.5;
        *(float *)&dword_140404A6C[284024537] = *(float *)&v24 * 0.5;
        *(float *)&v31 = fsqrt(
                           (float)((float)((float)(v30 * v30) + (float)(v29 * v29))
                                 + (float)(*(float *)&v24 * *(float *)&v24))
                         * 0.25);
        if ( *(float *)&v31 > 1.52587890625e-05 )
        {
          v58 = (float)((float)(1.0 / *(float *)&v31) * v30) * 0.5;
          v57 = (float)(v29 * (float)(1.0 / *(float *)&v31)) * 0.5;
          v59 = (float)(*(float *)&v24 * (float)(1.0 / *(float *)&v31)) * 0.5;
          sub_14007B2A0((__int64)&dword_140404A6C[284024526], &v57, v31);
          v27 = *(float *)&dword_140404A6C[284024530];
        }
        if ( dword_140404A6C[v9 + 280651313] == -1 && dword_140404A6C[v9 + 280651334] )
        {
          if ( v27 <= 0.0 )
            v32 = 0.0;
          else
            v32 = fabs((float)(v27 * v27) * v27);
          v33 = *(float *)&v4 + *(float *)&dword_140404A6C[v9 + 280651341];
          v65 = xmmword_140278D30;
          v66 = xmmword_140278D30;
          v67 = 1065353216;
          *(_QWORD *)&v34 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
          *(float *)&v34 = (float)(*(float *)&v34 * 0.5) + v33;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v34);
          *(_QWORD *)&v35 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856300];
          *(float *)&v35 = (float)(*(float *)&v35 * 0.75) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v35);
          *(_QWORD *)&v36 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
          *(float *)&v36 = *(float *)&v36 * 0.5;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v36);
          *(_QWORD *)&v37 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856300];
          *(float *)&v37 = (float)(*(float *)&v37 * 0.25) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v37);
          sub_14011C080(v64, (float *)&v65, (float *)&dword_140404A6C[284024526]);
          sub_14010E370(&v53, v64);
          v38 = -v53;
          v39 = -v54;
          v40 = -v55;
          v53 = v38;
          v54 = v39;
          v55 = v40;
          v41 = fsqrt((float)((float)(v38 * v38) + (float)(v39 * v39)) + (float)(v40 * v40));
          if ( v41 == 0.0 )
          {
            v42 = 0.0;
            v43 = 0.0;
            v44 = 0.0;
          }
          else
          {
            v42 = (float)(1.0 / v41) * v38;
            v43 = (float)(1.0 / v41) * v39;
            v44 = (float)(1.0 / v41) * v40;
          }
          v45 = acos(fminf(fmaxf(v56, -1.0), 1.0));
          v46 = v45 + v45;
          v47 = v42 * v46;
          v59 = v44 * v46;
          v58 = v43 * v46;
          v48 = (float)((float)(*(float *)&dword_140404A6C[284024529] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024526] * v47))
              + (float)(*(float *)&dword_140404A6C[284024532] * (float)(v44 * v46));
          v57 = v47;
          v49 = (float)((float)(*(float *)&dword_140404A6C[284024530] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024527] * v47))
              + (float)(*(float *)&dword_140404A6C[284024533] * (float)(v44 * v46));
          HIDWORD(v4) = 0;
          v50 = (float)((float)(*(float *)&dword_140404A6C[284024531] * (float)(v43 * v46))
                      + (float)(*(float *)&dword_140404A6C[284024528] * v47))
              + (float)(*(float *)&dword_140404A6C[284024534] * (float)(v44 * v46));
          v60 = v48 * 0.5;
          v61 = v49 * 0.5;
          v62 = v50 * 0.5;
          *(float *)&v4 = fsqrt((float)((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50)) * 0.25);
          if ( *(float *)&v4 > 1.52587890625e-05 )
          {
            v62 = (float)(1.0 / *(float *)&v4) * (float)(v50 * 0.5);
            v61 = (float)(1.0 / *(float *)&v4) * (float)(v49 * 0.5);
            v60 = (float)(1.0 / *(float *)&v4) * (float)(v48 * 0.5);
            v4 = fmin(fmax(v32 * -0.39269908169875, *(float *)&v4), v32 * 0.39269908169875);
            sub_14007B2A0((__int64)&dword_140404A6C[284024526], &v60, sr_export_float_lane_container(sr_text_float_bits((float)(v4))) /* the original converts to float (cvtsd2ss) before this call */);
          }
        }
        v1 = dword_140404A6C[284024501];
      }
      ++dword_140404A6C[283831476];
      v3 = v2;
      dword_140404A6C[284024519] = v2;
      --v5;
    }
    while ( v5 );
  }
  return 0; /* the function has no caller */
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
#undef v66
#undef v67
#undef v68

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD3C: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 183F7C588: using guessed type unsigned int;
// 183F7C58C: using guessed type unsigned int;
// 183F7C590: using guessed type unsigned int;
// 183F7C594: using guessed type unsigned int;
// 183F7C598: using guessed type unsigned int;
// 183F7C5A0: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5C4: using guessed type unsigned int;
// 183F7C5C8: using guessed type unsigned int;
// 183F7C5D0: using guessed type unsigned int;

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

//----- (0000000140085AA0) ----------------------------------------------------
__int64 sub_140085AA0()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __m128i v2; // xmm7
  __int64 v3; // rbx
  __int64 v4; // rsi
  bool v5; // cc
  __m128i v6; // xmm10
  unsigned int *v7; // r8
  int v8; // eax
  unsigned int v9; // eax
  char *v10; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140085AA0[608];
#define v12 (*(__int64 (*))(void *)(sr_frame_140085AA0 + 0)) /* [rsp+0h] */
#define v13 (*(int (*))(void *)(sr_frame_140085AA0 + 32)) /* [rsp+20h] */
#define v14 (*(int (*))(void *)(sr_frame_140085AA0 + 40)) /* [rsp+28h] */
#define v15 (*(int (*))(void *)(sr_frame_140085AA0 + 48)) /* [rsp+30h] */
#define v16 (*(int (*))(void *)(sr_frame_140085AA0 + 56)) /* [rsp+38h] */
#define v17 (*(int (*))(void *)(sr_frame_140085AA0 + 64)) /* [rsp+40h] */
#define v18 (*(char (*)[512])(void *)(sr_frame_140085AA0 + 80)) /* [rsp+50h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140085AA0 + 592)) /* [rsp+250h] */

  if ( dword_140404A6C[284024501] == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v0 = 3597LL * (int)dword_140404A6C[284024501];
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( dword_140404A6C[280649838] )
    return 0; /* compatibility result discarded by all reviewed callers */
  v17 = 1065353216;
  v16 = 1065353216;
  v15 = 1065353216;
  v14 = 1065353216;
  v13 = 32;
  sr_text_draw_recovered("Press F1 to toggle help", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42C00000u))))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  v2 = _mm_cvtsi32_si128((int)(0x43080000u));
  if ( (_DWORD)v1 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v3 = 7166 * v1;
  if ( (int)dword_140404A6C[v3 + 280658149] > 0
    && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] + 278521289] )
  {
    v17 = 1065353216;
    v16 = 1065353216;
    v15 = 1065353216;
    v14 = 1065353216;
    v13 = 32;
    sr_text_draw_recovered("Press F to swap your weapon to your right hand", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43080000u))))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
    v2 = _mm_cvtsi32_si128((int)(0x431C0000u));
  }
  if ( (int)dword_140404A6C[v3 + 280658139] > 0 )
  {
    v4 = 1760LL * (int)dword_140404A6C[v3 + 280658140];
    if ( dword_140404A6C[v4 + 278845898] == 13 )
    {
      sr_text_draw_recovered("Press R to arm grenade", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      v17 = 1065353216;
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_text_draw_recovered("Hold Q, move mouse up and release Q to throw", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
    if ( dword_140404A6C[1268 * dword_140404A6C[v4 + 278845898] + 278521289] )
    {
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        v8 = (int)dword_140404A6C[v0 + 71857715] >> 8;
        if ( !v8 || v8 == 3 )
        {
          v17 = 1065353216;
          v16 = 1065353216;
          v15 = 1065353216;
          v14 = 1065353216;
          v13 = 32;
          sr_text_draw_recovered("Press 2-5 to put a magazine in your left hand", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
        }
      }
      else if ( dword_140404A6C[1760 * dword_140404A6C[v3 + 280658150] + 278845898] - 1 == dword_140404A6C[v4 + 278845898] )
      {
        v5 = (dword_140404A6C[v0 + 71857724] & 0x80000000) != 0 || (dword_140404A6C[v0 + 71857724] & 0xFFFFFF00) == 0;
        v6 = v2;
        v17 = 1065353216;
        v16 = 1065353216;
        v15 = 1065353216;
        v14 = 1065353216;
        v13 = 32;
        v7 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2);
        if ( v5 )
          sr_text_draw_recovered("Press Q to drop empty magazine", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v7)), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        else
          sr_text_draw_recovered("Press R to load magazine", 4.0, sr_text_bits_float((unsigned)(uintptr_t)(v7)), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        *(float *)SR_VEC_LANES(128, v6, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
        v2 = v6;
      }
    }
    v9 = dword_140404A6C[v4 + 278845898];
    if ( v9 == 15 )
    {
      sub_140158AB0(v18, "%s to open briefcase", off_1402B29C0[0]);
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_text_draw_recovered(v18, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      v9 = dword_140404A6C[v4 + 278845898];
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
    if ( v9 == 16 )
    {
      sub_140158AB0(v18, "%s to close briefcase", off_1402B29C0[0]);
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_text_draw_recovered(v18, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
      if ( (int)dword_140404A6C[v3 + 280658149] <= 0 )
      {
        if ( (dword_140404A6C[v0 + 71857715] & 0xFFFFFF00) != 0x100 )
          goto LABEL_28;
        v10 = "Press R to unload item from briefcase";
      }
      else
      {
        v10 = "Press R to load item into briefcase";
      }
      v17 = 1065353216;
      v16 = 1065353216;
      v15 = 1065353216;
      v14 = 1065353216;
      v13 = 32;
      sr_text_draw_recovered(v10, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      *(float *)SR_VEC_LANES(128, v2, i32) = *(float *)SR_VEC_LANES(128, v2, i32) + 20.0;
    }
  }
LABEL_28:
  if ( *(float *)&dword_140404A6C[v3 + 280651456] < 0.699999988079071 )
  {
    v17 = 1065353216;
    v16 = 1065353216;
    v15 = 1065353216;
    v14 = 1065353216;
    v13 = 32;
    sr_text_draw_recovered("Hold CTRL to stand up", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v2))), 20.0, 32, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19

// 140086228: variable 'v10' is possibly undefined
// 140086266: variable 'v11' is possibly undefined
// 1400862F4: variable 'v13' is possibly undefined
// 1400862F4: variable 'v12' is possibly undefined
// 1400862F4: variable 'v14' is possibly undefined
// 14008630F: variable 'v16' is possibly undefined
// 14008630F: variable 'v15' is possibly undefined
// 14008630F: variable 'v17' is possibly undefined
// 14008631F: variable 'v19' is possibly undefined
// 14008631F: variable 'v18' is possibly undefined
// 14008631F: variable 'v20' is possibly undefined
// 140086332: variable 'v22' is possibly undefined
// 140086332: variable 'v21' is possibly undefined
// 140086332: variable 'v23' is possibly undefined
// 14008635A: variable 'v24' is possibly undefined
// 14008636D: variable 'v26' is possibly undefined
// 14008636D: variable 'v25' is possibly undefined
// 14008636D: variable 'v27' is possibly undefined
// 1400863B1: variable 'v29' is possibly undefined
// 1400863B1: variable 'v28' is possibly undefined
// 1400863B1: variable 'v30' is possibly undefined
// 1400863CD: variable 'v32' is possibly undefined
// 1400863CD: variable 'v31' is possibly undefined
// 1400863CD: variable 'v33' is possibly undefined
// 1400863E7: variable 'v34' is possibly undefined
// 140086425: variable 'v36' is possibly undefined
// 140086425: variable 'v35' is possibly undefined
// 140086425: variable 'v37' is possibly undefined
// 140086433: variable 'v39' is possibly undefined
// 140086433: variable 'v38' is possibly undefined
// 140086433: variable 'v40' is possibly undefined
// 14008644D: variable 'v41' is possibly undefined
// 140086489: variable 'v43' is possibly undefined
// 140086489: variable 'v42' is possibly undefined
// 140086489: variable 'v44' is possibly undefined
// 14008648E: variable 'v46' is possibly undefined
// 14008648E: variable 'v45' is possibly undefined
// 14008648E: variable 'v47' is possibly undefined
// 140086A21: variable 'v59' is possibly undefined
// 140086A7A: variable 'v60' is possibly undefined
// 140086AEB: variable 'v63' is possibly undefined
// 140086EFD: variable 'v71' is possibly undefined
// 140086F4B: variable 'v72' is possibly undefined
// 140086FF0: variable 'v65' is possibly undefined
// 140086FF0: variable 'v64' is possibly undefined
// 140087036: variable 'v74' is possibly undefined
// 140087036: variable 'v73' is possibly undefined
// 1400870A6: variable 'v75' is possibly undefined
// 1400870E7: variable 'v76' is possibly undefined
// 140087128: variable 'v77' is possibly undefined
// 140087165: variable 'v78' is possibly undefined
// 1400873C8: variable 'v82' is possibly undefined
// 140087453: variable 'v83' is possibly undefined
// 140087453: variable 'v84' is possibly undefined
// 14008746A: variable 'v89' is possibly undefined
// 14008746A: variable 'v90' is possibly undefined
// 14008747E: variable 'v91' is possibly undefined
// 1400874C7: variable 'v93' is possibly undefined
// 1400874C7: variable 'v94' is possibly undefined
// 1400874D6: variable 'v95' is possibly undefined
// 1400875AA: variable 'v97' is possibly undefined
// 1400875AA: variable 'v96' is possibly undefined
// 1400875AA: variable 'v98' is possibly undefined
// 1400875E2: variable 'v100' is possibly undefined
// 1400875E2: variable 'v99' is possibly undefined
// 1400875E2: variable 'v101' is possibly undefined
// 1400875E7: variable 'v103' is possibly undefined
// 1400875E7: variable 'v102' is possibly undefined
// 1400875E7: variable 'v104' is possibly undefined
// 140087683: variable 'v106' is possibly undefined
// 140087683: variable 'v105' is possibly undefined
// 140087683: variable 'v107' is possibly undefined
// 140087699: variable 'v109' is possibly undefined
// 140087699: variable 'v108' is possibly undefined
// 140087699: variable 'v110' is possibly undefined
// 1400876AF: variable 'v112' is possibly undefined
// 1400876AF: variable 'v111' is possibly undefined
// 1400876AF: variable 'v113' is possibly undefined
// 1400876C4: variable 'v115' is possibly undefined
// 1400876C4: variable 'v114' is possibly undefined
// 1400876C4: variable 'v116' is possibly undefined
// 1400876D9: variable 'v118' is possibly undefined
// 1400876D9: variable 'v117' is possibly undefined
// 1400876D9: variable 'v119' is possibly undefined
// 1400876EF: variable 'v121' is possibly undefined
// 1400876EF: variable 'v120' is possibly undefined
// 1400876EF: variable 'v122' is possibly undefined
// 140087705: variable 'v124' is possibly undefined
// 140087705: variable 'v123' is possibly undefined
// 140087705: variable 'v125' is possibly undefined
// 14008771A: variable 'v127' is possibly undefined
// 14008771A: variable 'v126' is possibly undefined
// 14008771A: variable 'v128' is possibly undefined
// 14008771F: variable 'v130' is possibly undefined
// 14008771F: variable 'v129' is possibly undefined
// 14008771F: variable 'v131' is possibly undefined
// 14008778C: variable 'v132' is possibly undefined
// 140279410: using guessed type __int128 xmmword_140279410;
// 140279430: using guessed type __int128 xmmword_140279430;
// 140279460: using guessed type __int128 xmmword_140279460;
// 140279470: using guessed type __int128 xmmword_140279470;
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399EF70: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (0000000140087810) ----------------------------------------------------
__int64            sub_140087810(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  signed int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  float v9; // xmm0_4
  int v10; // xmm1_4
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // dl
  __int64 v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int *v20; // r14
  __int64 v21; // r15
  unsigned int *v22; // rbp
  __int64 v23; // xmm9_8
  __m128i v24; // xmm7
  double v25; // xmm8_8
  __int64 v26; // r8
  signed int v27; // esi
  int *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r8
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // edx
  char *v34; // rcx
  unsigned int *v35; // r8
  unsigned __int64 v36; // rbp
  __int64 v37; // r12
  _BYTE *v38; // r14
  __int64 v39; // r13
  float *v40; // r15
  int v41; // edi
  unsigned int *v42; // rsi
  float v43; // xmm9_4
  __int64 v44; // rbx
  double v45; // xmm7_8
  double v46; // xmm10_8
  __m128i v47; // xmm8
  __int64 v48; // r8
  __m128i v49; // xmm2
  float v50; // xmm3_4
  signed int v51; // edi
  __int64 v52; // rbx
  __int64 v53; // rdx
  int v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float sr_hud_slot_positions[14];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140087810[224];
#define v58 (*(__int64 (*))(void *)(sr_frame_140087810 + 0)) /* [rsp+0h] */
#define v59 (*(int (*))(void *)(sr_frame_140087810 + 32)) /* [rsp+20h] */
#define v60 (*(int (*))(void *)(sr_frame_140087810 + 40)) /* [rsp+28h] */
#define v61 (*(int (*))(void *)(sr_frame_140087810 + 48)) /* [rsp+30h] */
#define v62 (*(int (*))(void *)(sr_frame_140087810 + 56)) /* [rsp+38h] */
#define v63 (*(int (*))(void *)(sr_frame_140087810 + 64)) /* [rsp+40h] */
#define v64 (*(int (*))(void *)(sr_frame_140087810 + 72)) /* [rsp+48h] */
#define v65 (*(int (*))(void *)(sr_frame_140087810 + 80)) /* [rsp+50h] */
#define v66 (*(_BOOL8 (*))(void *)(sr_frame_140087810 + 96)) /* [rsp+60h] */
#define v67 (*(unsigned __int64 (*))(void *)(sr_frame_140087810 + 104)) /* [rsp+68h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_140087810 + 112)) /* [rsp+70h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_140087810 + 120)) /* [rsp+78h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_140087810 + 128)) /* [rsp+80h] */
#define v74 (*(__int64 (*))(void *)(sr_frame_140087810 + 208)) /* [rsp+D0h] */

  v2 = 7166LL * a2;
  v3 = a1;
  v4 = -1;
  if ( (int)dword_140404A6C[v2 + 280658139] > 0 )
    v4 = dword_140404A6C[v2 + 280658140];
  v66 = 0;
  v68 = 1;
  if ( v4 != -1 )
  {
    v5 = 1760LL * v4;
    v6 = dword_140404A6C[v5 + 278845898];
    if ( v6 == 25 || (v66 = 0, v6 == 33) )
      v66 = dword_140404A6C[v5 + 278846052] == 1;
  }
  v7 = 0;
  v8 = -2;
  do
  {
    if ( (unsigned __int64)v7 >= 2 )
    {
      v10 = 1141374976;
      v9 = (float)((float)v8 * 140.0) + 212.0;
    }
    else
    {
      v9 = 608.0;
      if ( v7 == 1 )
        v9 = 416.0;
      v10 = 1140195328;
    }
    *((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * v7) = v9;
    ++v8;
    LODWORD(((uint64_t *)(void *)(sr_hud_slot_positions+1))[v7++]) = v10;
  }
  while ( v7 < 7 );
  v11 = dword_140404A6C[v2 + 280658335];
  dword_140404A6C[438291413] = 1;
  if ( v11 - 1 <= 1 )
  {
    v12 = (int)dword_140404A6C[v2 + 280658338];
    if ( v11 == 2 )
    {
      v13 = dword_140404A6C[v2 + 280658339] + 2;
      v14 = v13;
      if ( dword_140404A6C[3597 * v3 + 71857714 + 9 * v12] )
      {
        v14 = dword_140404A6C[v2 + 280658338];
        LOBYTE(v12) = v13;
      }
    }
    else
    {
      v14 = dword_140404A6C[v2 + 280658338];
      LOBYTE(v12) = v12 ^ 1;
    }
    v15 = v14 & 7;
    v16 = *((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * v15);
    v17 = *(float *)&((uint64_t *)(void *)(sr_hud_slot_positions+1))[v15];
    v18 = 14388 * v3 + 36 * v15;
    if ( *(int *)((char *)&dword_140404A6C[71857714] + v18) > 0 )
    {
      v19 = (int)dword_140404A6C[*((unsigned __int8 *)&dword_140404A6C[71857715] + v18) + 282486849];
      if ( (_DWORD)v19 != -1 )
        sr_CSDrawAtlasEntry(
          0,
          v19,
          (float)((float)(*((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * (v12 & 7)) - v16)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.009999999776482582))
        + v16,
          (float)((float)(*(float *)&((uint64_t *)(void *)(sr_hud_slot_positions+1))[v12 & 7] - v17)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.009999999776482582))
        + v17,
          (float)(int)dword_140404A6C[12 * v19 + 433435868] * 0.5,
          (float)(int)dword_140404A6C[12 * v19 + 433435869] * 0.5,
          9,
          1065353216,
          1065353216,
          1065353216,
          1065353216);
    }
  }
  v20 = (unsigned int *)((uint64_t *)(void *)(sr_hud_slot_positions+1));
  v21 = 2;
  v70 = v3;
  v67 = 14388 * v3;
  v22 = &dword_140404A6C[3597 * v3 + 71857714];
  do
  {
    v23 = *(v20 - 1);
    v24 = _mm_cvtsi32_si128((int)(*v20));
    qword_140404050(3553, dword_140404A6C[451221642]);
    HIDWORD(v25) = HIDWORD(v23);
    *(float *)&v25 = *(float *)&v23 + 8.0;
    sub_14006CFF0(v25, *(double *)SR_VEC_LANES(128, v24, i64), 1124073472, 32.0, 9, 0, 0, 0, 1048576000);
    v27 = 0;
    if ( (int)*v22 > 0 )
    {
      v28 = (int *)(v22 + 1);
      do
      {
        v29 = (unsigned __int8)*v28;
        v30 = (int)dword_140404A6C[v29 + 282486849];
        if ( (_DWORD)v30 != -1 )
        {
          v31 = (float)(int)dword_140404A6C[12 * v30 + 433435868] * 0.5;
          v32 = (float)(int)dword_140404A6C[12 * v30 + 433435869] * 0.5;
          if ( (_DWORD)v29 == 13 && (*v28 < 0 || (*v28 & 0xFFFFFF00) == 0) )
          {
            v65 = 1065353216;
            v64 = 0;
            v63 = 0;
          }
          else
          {
            v65 = 1065353216;
            v64 = 1065353216;
            v63 = 1065353216;
          }
          sr_CSDrawAtlasEntry(0, v30, *(float *)&v25, *(float *)SR_VEC_LANES(128, v24, i32), v31, v32, 9, 1065353216, v63, v64, v65);
        }
        v33 = *v28 >> 8;
        if ( (int)dword_140404A6C[1268 * v29 + 278521294] <= 0 )
        {
          if ( v33 > 0 && (_DWORD)v29 != 16 )
          {
            v63 = 1065353216;
            v34 = "+magazine";
            v62 = 1065353216;
            v61 = 1065353216;
            v60 = 1065353216;
            v59 = 8;
            v35 = (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v24);
            if ( v33 != 1 )
              v34 = "+empty magazine";
            sr_text_draw_recovered(v34, *(float *)&v25, sr_text_bits_float((unsigned)(uintptr_t)(v35)), 8.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          }
        }
        else
        {
          v64 = *v28 >> 8;
          v63 = 1065353216;
          v62 = 1065353216;
          v61 = 1065353216;
          v60 = 1065353216;
          v59 = 8;
          sr_text_draw_recovered("/i", *(float *)&v23 + 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v24))), 8.0, 8, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v64});
        }
        ++v27;
        ++v28;
      }
      while ( v27 < (int)*v22 );
    }
    v20 += 2;
    v22 += 9;
    --v21;
  }
  while ( v21 );
  v36 = v67;
  v37 = 18;
  v38 = (char *)&dword_140404A6C[284024772] + 2;
  v39 = 5;
  v40 = (float *)&(*(char *)(void *)(sr_hud_slot_positions+5));
  v69 = 5;
  v41 = 1;
  v42 = &dword_140404A6C[v67 / 4 + 71857732];
  do
  {
    v43 = *(v40 - 1);
    v44 = 2;
    *(_QWORD *)&v45 = *(unsigned int *)v40;
    *(_QWORD *)&v46 = LODWORD(v43);
    *(float *)&v46 = v43 + 8.0;
    v47 = _mm_cvtsi32_si128((int)(*(unsigned int *)v40));
    do
    {
      qword_140404050(3553, dword_140404A6C[451221642]);
      sub_14006CFF0(v46, v45, 1124073472, 32.0, 9, 0, 0, 0, 1048576000);
      *(float *)&v45 = *(float *)&v45 + 32.0;
      --v44;
    }
    while ( v44 );
    v49 = v47;
    if ( *(unsigned int *)((char *)&dword_140404A6C[71856337] + v36) == v41 + 2 )
      v50 = 24.0;
    else
      v50 = 12.0;
    v64 = v41;
    v63 = 1065353216;
    v62 = 1065353216;
    v61 = 1065353216;
    v60 = 1065353216;
    v59 = 8;
    *(float *)SR_VEC_LANES(128, v49, i32) = *(float *)SR_VEC_LANES(128, v47, i32) - 32.0;
    sr_text_draw_recovered("/i", v43, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v49))), v50, 8, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v41});
    v51 = 0;
    v52 = 0;
    if ( (int)*v42 > 0 )
    {
      do
      {
        v53 = (int)dword_140404A6C[LOBYTE(dword_140404A6C[3597 * v70 + 71857715 + v52 + v37]) + 282486849];
        if ( (_DWORD)v53 != -1 )
        {
          v54 = 1065353216;
          v55 = (float)(int)dword_140404A6C[12 * v53 + 433435868] * 0.5;
          v56 = (float)(int)dword_140404A6C[12 * v53 + 433435869] * 0.5;
          if ( !v52 && *v38 && !v66 )
          {
            v54 = 0;
            v55 = v55 * 1.125;
            v56 = v56 * 1.125;
          }
          sr_CSDrawAtlasEntry(0, v53, *(float *)&v46, *(float *)SR_VEC_LANES(128, v47, i32), v55, v56, 9, v54, 1065353216, v54, 1065353216);
        }
        ++v51;
        *(float *)SR_VEC_LANES(128, v47, i32) = *(float *)SR_VEC_LANES(128, v47, i32) + 32.0;
        ++v52;
      }
      while ( v51 < (int)*v42 );
      v39 = v69;
      v36 = v67;
    }
    v40 += 2;
    v41 = v68 + 1;
    v37 += 9;
    v42 += 9;
    v68 = (unsigned int)(v68 + 1);
    ++v38;
    v69 = --v39;
  }
  while ( v39 );
  dword_140404A6C[438291413] = 2;
  return 0; /* compatibility result discarded by all reviewed callers */
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
#undef v74

// 140087B8C: variable 'v26' is possibly undefined
// 140087DE8: variable 'v48' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140088130) ----------------------------------------------------
double            sub_140088130(int a1)
{
  int v1; // r12d
  int v2; // r14d
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // r8d
  unsigned int *v6; // rdx
  __int64 v7; // rax
  float v8; // xmm12_4
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *v14; // rsi
  float *v15; // rbp
  unsigned int *v16; // rbx
  int v17; // r15d
  unsigned int *v18; // rdi
  float v19; // xmm6_4
  float v20; // xmm7_4
  int v21; // ebx
  float v22; // xmm6_4
  float v23; // xmm7_4
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int *v26; // rbx
  __int64 v27; // rax
  float v28; // xmm7_4
  float v29; // xmm6_4
  int v30; // edi
  float *v31; // rbx
  float v32; // xmm7_4
  float v33; // xmm6_4
  signed int v34; // edx
  signed int v35; // edi
  unsigned int *v36; // rbx
  unsigned int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rcx
  float v40; // xmm1_4
  float v41; // xmm1_4
  __m128i v42; // xmm2
  __m128i v43; // xmm0
  unsigned int *v44; // rbx
  int v45; // eax
  float v46; // xmm6_4
  __m128i v47; // xmm7
  double result; // xmm0_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140088130[64];
#define v49 (*(int (*))(void *)(sr_frame_140088130 + 0)) /* [rsp+50h] */
#define v50 (*(__int64 (*))(void *)(sr_frame_140088130 + 4)) /* [rsp+54h] */
#define v51 (*(__int64 (*))(void *)(sr_frame_140088130 + 16)) /* [rsp+60h] */
#define v52 (*(int (*))(void *)(sr_frame_140088130 + 24)) /* [rsp+68h] */
#define v53 (*(unsigned int (*))(void *)(sr_frame_140088130 + 28)) /* [rsp+6Ch] */
#define v54 (*(int (*))(void *)(sr_frame_140088130 + 32)) /* [rsp+70h] */
#define v55 (*(unsigned int (*))(void *)(sr_frame_140088130 + 36)) /* [rsp+74h] */
#define v56 (*(__int64 (*))(void *)(sr_frame_140088130 + 40)) /* [rsp+78h] */
#define v57 (*(int (*))(void *)(sr_frame_140088130 + 48)) /* [rsp+80h] */

  v1 = a1;
  v51 = 1065353216;
  v52 = 0;
  v56 = 0;
  v57 = 1065353216;
  v54 = -1082130432;
  v50 = 1124073472;
  v53 = 0x80000000;
  v55 = 0x80000000;
  v49 = 1124073472;
  if ( !dword_140404A6C[284024893] )
  {
    v49 = 1123024896;
    LODWORD(v50) = 1123024896;
  }
  v2 = 0;
  v3 = 256;
  if ( dword_140404A6C[284021985] )
  {
    v4 = 0;
    v5 = 512;
  }
  else
  {
    v4 = 768;
    v5 = 256;
  }
  sub_14007A2C0(v4, 0, v5, v5, 128.0, 128.0, 512.0);
  sub_14007BE20((float *)&v49, (unsigned int *)&v51);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  v6 = &dword_140404A6C[71856286];
  dword_140404A6C[283831506] = 0;
  dword_140404A6C[283837379] = 0;
  dword_140404A6C[283843252] = 0;
  dword_140404A6C[283849125] = 0;
  dword_140404A6C[283854998] = 0;
  dword_140404A6C[283860871] = 0;
  dword_140404A6C[283866744] = 0;
  dword_140404A6C[283872617] = 0;
  do
  {
    if ( *(v6 - 33) )
    {
      v7 = (int)*v6;
      if ( (unsigned int)v7 <= 5 )
        ++dword_140404A6C[5873 * v7 + 283831506];
    }
    v6 += 3597;
    --v3;
  }
  while ( v3 );
  v8 = 0.25;
  if ( !dword_140404A6C[284024893] )
    v8 = 0.125;
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830700] + 284024944]);
  sub_14006CFF0(0.0, 0.0, 1132462080, 256.0, 0, 1065353216, 1065353216, 1065353216, 1061158912);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2848);
  (*(void (**)(float))&dword_140404A6C[18215065])(2.0f /* native XMM0 */);
  v13 = dword_140404A6C[283831312];
  v14 = (unsigned int *)dword_1402B2834;
  v15 = (float *)&dword_140404A6C[283831485];
  if ( dword_140404A6C[283831312] == 4 )
  {
    v16 = (unsigned int *)dword_1402B2834;
    v17 = 0;
    v18 = &dword_140404A6C[283831485];
    do
    {
      v19 = (float)((float)((float)(*((float *)v18 + 3) + *(float *)v18) * 0.5) - *(float *)&dword_140404A6C[282486846])
          * v8;
      v20 = (float)((float)((float)(*((float *)v18 + 5) + *((float *)v18 + 2)) * 0.5)
                  - *(float *)&dword_140404A6C[282486848])
          * v8;
      qword_140404050(3553, dword_140404A6C[451221642]);
      if ( dword_140404A6C[283831312] == 4 )
      {
        sub_140081DA0(v19, v20, sr_export_float_lane_container(1098907648), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
        if ( dword_140404A6C[284024501] != -1 && v17 == dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] )
          sub_140081DA0(v19, v20, sr_export_float_lane_container(1090519040), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
        if ( (int)v18[21] > 0 )
          sub_140081DA0(v19, v20, sr_export_float_lane_container(1094713344), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(v19, v20, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++v17;
      v18 += 5873;
      v16 += 3;
    }
    while ( (__int64)v18 < (__int64)&dword_140404A6C[283866723] );
    v13 = dword_140404A6C[283831312];
    v1 = a1;
  }
  if ( (((_DWORD)v13 - 3) & 0xFFFFFFFD) == 0 )
  {
    v21 = 0;
    do
    {
      v22 = (float)((float)((float)(v15[3] + *v15) * 0.5) - *(float *)&dword_140404A6C[282486846]) * 0.25;
      v23 = (float)((float)((float)(v15[5] + v15[2]) * 0.5) - *(float *)&dword_140404A6C[282486848]) * 0.25;
      qword_140404050(3553, dword_140404A6C[451221642]);
      if ( dword_140404A6C[283831312] == 3 )
      {
        sub_140081DA0(v22, v23, sr_export_float_lane_container(1098907648), *((float *)v14 - 1), *v14, v14[1], 0x3F800000u);
        if ( dword_140404A6C[284024501] != -1 && v21 == dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] )
          sub_140081DA0(v22, v23, sr_export_float_lane_container(1096810496), *((float *)v14 - 1), *v14, v14[1], 0x3F800000u);
      }
      else
      {
        sub_140081DA0(v22, v23, sr_export_float_lane_container(1098907648), 1.0, 0x3F800000u, 0x3F800000u, 0x3F800000u);
      }
      ++v21;
      v15 += 5873;
      v14 += 3;
    }
    while ( (__int64)v15 < (__int64)&dword_140404A6C[283849104] );
    v13 = dword_140404A6C[283831312];
  }
  if ( (_DWORD)v13 != 3 )
    goto LABEL_43;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v13 = 14388LL * (int)dword_140404A6C[284024501];
    v24 = *(int *)((char *)&dword_140404A6C[71856286] + v13);
    if ( (_DWORD)v24 != -1 )
    {
      v25 = 16;
      v26 = &dword_140404A6C[5873 * v24 + 283831591];
      do
      {
        if ( *(v26 - 3) )
        {
          if ( *v26 == 2 )
          {
            v27 = (int)v26[15];
            if ( (_DWORD)v27 != -1 )
            {
              v28 = *(float *)&dword_140404A6C[19 * v27 + 487148756] - *(float *)&dword_140404A6C[282486846];
              v29 = *(float *)&dword_140404A6C[19 * v27 + 487148758] - *(float *)&dword_140404A6C[282486848];
              qword_140404050(3553, dword_140404A6C[451221642]);
              sub_140081DA0(v28 * 0.25, v29 * 0.25, sr_export_float_lane_container(1090519040), 0.0, 0x3F800000u, 0, 0x3F800000u);
            }
          }
        }
        v26 += 279;
        --v25;
      }
      while ( v25 );
      v13 = dword_140404A6C[283831312];
LABEL_43:
      if ( (_DWORD)v13 == 5 )
      {
        v30 = 0;
        if ( (int)dword_140404A6C[487148755] > 0 )
        {
          v31 = (float *)&dword_140404A6C[487148758];
          do
          {
            v32 = *(v31 - 2) - *(float *)&dword_140404A6C[282486846];
            v33 = *v31 - *(float *)&dword_140404A6C[282486848];
            qword_140404050(3553, dword_140404A6C[451221642]);
            sub_140081DA0(
              v32 * 0.25,
              v33 * 0.25,
              sr_export_float_lane_container(1090519040),
              0.75,
              0x3F400000u,
              0x3F400000u,
              0x3F800000u);
            ++v30;
            v31 += 19;
          }
          while ( v30 < (int)dword_140404A6C[487148755] );
        }
      }
    }
  }
  (*(void (**)(float))&dword_140404A6C[18215065])(1.0f /* native XMM0 */);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2848);
  if ( dword_140404A6C[284024893] )
    goto LABEL_67;
  v34 = dword_140404A6C[225426046];
  v35 = 0;
  if ( (int)dword_140404A6C[225426046] <= 0 )
  {
LABEL_60:
    if ( (int)dword_140404A6C[225641186] > 0 )
    {
      v44 = &dword_140404A6C[225641222];
      do
      {
        v47 = _mm_cvtsi32_si128((int)(v44[2]));
        v45 = *(v44 - 19);
        v46 = (float)((float)((float)(*((float *)v44 - 3) + *(float *)v44) * 0.5) - *(float *)&dword_140404A6C[282486846])
            * v8;
        *(float *)SR_VEC_LANES(128, v47, i32) = (float)((float)((float)(*(float *)SR_VEC_LANES(128, v47, i32) + *((float *)v44 - 1)) * 0.5)
                                        - *(float *)&dword_140404A6C[282486848])
                                * v8;
        if ( v45 == 1 )
        {
          sr_text_draw_recovered(off_1402B2890[v44[103]], v46, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47))), 6.0, 5, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          v45 = *(v44 - 19);
        }
        if ( v45 == 6 )
          sr_text_draw_recovered("$", v46, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v47))), 9.0, 5, 0.875f, 0.875f, 0.875f, 1.0f, NULL);
        ++v2;
        v44 += 14019;
      }
      while ( v2 < (int)dword_140404A6C[225641186] );
    }
    goto LABEL_67;
  }
  v36 = &dword_140404A6C[225426056];
  do
  {
    v37 = v36[2];
    if ( v37 )
    {
      if ( v37 == 1 && dword_140404A6C[34 * *v36 + 225391232] - 320 > 3 )
        goto LABEL_58;
    }
    else if ( dword_140404A6C[34 * *v36 + 225391238] != -1 )
    {
      goto LABEL_58;
    }
    v38 = 34LL * (int)v36[1];
    v39 = 34LL * (int)*v36;
    v40 = (float)(int)(dword_140404A6C[v39 + 225391230] + dword_140404A6C[v38 + 225391230]);
    v42 = _mm_castps_si128(_mm_set_ss((float)(int)(dword_140404A6C[v39 + 225391232] + dword_140404A6C[v38 + 225391232])));
    v41 = (float)((float)(v40 + v40) - *(float *)&dword_140404A6C[282486846]) * v8;
    *(float *)SR_VEC_LANES(128, v42, i32) = (float)((float)(*(float *)SR_VEC_LANES(128, v42, i32) + *(float *)SR_VEC_LANES(128, v42, i32))
                                    - *(float *)&dword_140404A6C[282486848])
                            * v8;
    if ( v37 == 1 )
    {
      v43 = _mm_castps_si128(_mm_set_ss((float)(((int)(dword_140404A6C[v39 + 225391230] - 256) / 56) & 1)));
      *(float *)SR_VEC_LANES(128, v43, i32) = (float)(*(float *)SR_VEC_LANES(128, v43, i32) * 16.0) + *(float *)SR_VEC_LANES(128, v42, i32);
      v42 = v43;
    }
    sr_text_draw_recovered((char *)&dword_140404A6C[396 * v35 + 225426047], v41, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v42))), 6.0, 5, 0.25f, 0.75f, 0.25f, 1.0f, NULL);
    v34 = dword_140404A6C[225426046];
LABEL_58:
    ++v35;
    v36 += 396;
  }
  while ( v35 < v34 );
  if ( !dword_140404A6C[284024893] )
    goto LABEL_60;
LABEL_67:
  if ( v1 != -1 )
    sub_1400891B0(
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651335] - *(float *)&dword_140404A6C[282486846]) * v8,
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651337] - *(float *)&dword_140404A6C[282486848]) * v8,
      sr_export_float_lane_container(1082130432),
      1.0,
      0x3F800000u,
      0x3F800000u,
      0x3F400000u,
      *(float *)&dword_140404A6C[7166 * v1 + 280651341]);
  result = sub_14007BB00();
  if ( dword_140404A6C[284021985] )
    sr_text_draw_recovered("Press C to toggle map", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
  return result;
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

// 140088379: variable 'v9' is possibly undefined
// 140088391: variable 'v11' is possibly undefined
// 140088391: variable 'v10' is possibly undefined
// 1400887DE: variable 'v13' is possibly undefined
// 1400887DE: variable 'v12' is possibly undefined
// 1402B2834: using guessed type int dword_1402B2834[];
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CD0: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 175FF3464: using guessed type unsigned int;
// 183EBFDB4: using guessed type unsigned int;
// 183EC5978: using guessed type unsigned int;
// 183ECB53C: using guessed type unsigned int;
// 183ED1100: using guessed type unsigned int;
// 183ED6CC4: using guessed type unsigned int;
// 183EDC888: using guessed type unsigned int;
// 183EE244C: using guessed type unsigned int;
// 183EE8010: using guessed type unsigned int;

//----- (00000001400A83B0) ----------------------------------------------------
void sub_1400A83B0()
{
  unsigned int v0; // esi
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  float v5; // xmm6_4
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  float v9; // xmm2_4
  unsigned int *v10; // rbx
  float *v11; // rbp
  float *v12; // r14
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16[4]; // [rsp+20h] [rbp-38h] BYREF

  v0 = -1;
  dword_140404A6C[282486845] = -1;
  if ( dword_140404A6C[284024501] != -1 )
  {
    v1 = 3597LL * (int)dword_140404A6C[284024501];
    v2 = (int)dword_140404A6C[v1 + 71856292];
    if ( (_DWORD)v2 != -1 )
    {
      v3 = 7166 * v2;
      if ( dword_140404A6C[7166 * v2 + 280651313] == -1 )
      {
        v4 = dword_140404A6C[v1 + 71856325] & 0x10;
        v5 = 0.5;
        v6 = 0;
        v7 = (v4 != 0 ? 0x28 : 0) + v3 * 4;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v7) <= 0 )
          goto LABEL_8;
        v8 = 10;
        if ( v4 )
          v8 = 0;
        if ( (int)dword_140404A6C[v3 + 280658139 + v8] <= 0 )
        {
LABEL_8:
          v9 = *(float *)&dword_140404A6C[v3 + 280651694];
          v10 = &dword_140404A6C[278845902];
          v11 = (float *)&dword_140404A6C[278845916];
          v12 = (float *)&dword_140404A6C[v3 + 280651674];
          v13 = *(float *)&dword_140404A6C[v3 + 280651693] * 1.5;
          v16[0] = *(float *)&dword_140404A6C[v3 + 280651674]
                 - (float)(*(float *)&dword_140404A6C[v3 + 280651692] * 1.5);
          v16[1] = *(float *)&dword_140404A6C[v3 + 280651675] - v13;
          v16[2] = *(float *)&dword_140404A6C[v3 + 280651676] - (float)(v9 * 1.5);
          do
          {
            if ( *(v10 - 9) )
            {
              if ( *v10 == -1 )
              {
                v14 = (int)v10[1];
                if ( (_DWORD)v14 == -1 || dword_140404A6C[1760 * v14 + 278845902] == -1 )
                {
                  v15 = sub_14007ABA0(v12, v16, v11);
                  if ( v15 < v5 )
                  {
                    v0 = v6;
                    v5 = v15;
                  }
                }
              }
            }
            ++v6;
            v11 += 1760;
            v10 += 1760;
          }
          while ( v6 < 1024 );
          dword_140404A6C[282486845] = v0;
          if ( v0 != -1 && *(int *)((char *)&dword_140404A6C[280658139] + v7) > 0 )
          {
            if ( !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v7)
                                                + 278845898]
                                + 278521356
                                + dword_140404A6C[1760 * v0 + 278845898]] )
              v0 = -1;
            dword_140404A6C[282486845] = v0;
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399EB60: using guessed type unsigned int;

//----- (00000001400A85E0) ----------------------------------------------------
_BOOL8            sub_1400A85E0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // r9d
  bool v8; // zf
  __int64 v9; // r10
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // eax

  if ( a2 == 1 )
  {
    v4 = 28664LL * a1;
    v5 = a3 ^ 1LL;
    v6 = v4 + 40LL * a3;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v6);
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v9 = v4 + 40 * v5;
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v9) > 0 )
        return dword_140404A6C[1268
                             * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v6)
                                             + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v9)
                                             + 278845898]] != 0;
      v8 = v7 == 0;
    }
    if ( !v8 )
      return 0;
    v11 = v4 + 40 * v5;
    if ( *(int *)((char *)&dword_140404A6C[280658139] + v11) <= 0 )
      return 0;
    v12 = 1760LL * *(int *)((char *)&dword_140404A6C[280658140] + v11);
    return (int)dword_140404A6C[v12 + 278845906] > 0
        && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v12 + 278845907] + 278845898]
                         + 278521356
                         + dword_140404A6C[v12 + 278845898]];
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v13 = 7166LL * a1;
    v14 = v13 * 4 + 40LL * a3;
    v15 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v14);
    if ( v15 <= 0 )
      return !v15 && !dword_140404A6C[14 * a3 + 280658223 + v13] && (int)dword_140404A6C[10 * a4 + 280658159 + v13] > 0;
    return dword_140404A6C[1268
                         * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v14)
                                         + 278845898]
                         + 278521660
                         + a4]
        && (int)dword_140404A6C[10 * a4 + 280658159 + v13] < 2;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A87A0) ----------------------------------------------------
__int64            sub_1400A87A0(int a1)
{
  int v1; // r12d
  __int64 v2; // rbx
  signed int v3; // r13d
  __int64 result; // rax
  unsigned int *v5; // rdi
  float *v6; // r15
  __int64 v7; // rbp
  float v8; // xmm7_4
  float v9; // xmm6_4
  int v10; // r14d
  unsigned int *v11; // rsi
  float v12; // xmm2_4
  float *v13; // r12
  float v14; // xmm1_4
  float v15; // xmm0_4
  __int64 v16; // rdi
  __int64 v17; // r14
  BOOL v18; // esi
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  float v26; // xmm0_4
  __int64 v27; // r10
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // r9d
  int v32; // edi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm6_4
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned int v48; // edx
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rbp
  int v52; // edx
  bool v53; // zf
  __int64 v54; // r14
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned int v61; // edx
  int v62; // edx
  float v63; // xmm3_4
  __int64 v64; // rsi
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // edx
  BOOL v68; // edx
  _BOOL8 v69; // rax
  float v70; // xmm0_4
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdi
  unsigned int v75; // edx
  int v76; // edx
  double v77; // xmm0_8
  signed int v78; // r14d
  float *v79; // r13
  int v80; // esi
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  unsigned __int64 v84; // rdx
  int v85; // r9d
  __int64 v86; // r8
  _BOOL8 v87; // r8
  unsigned int *v88; // r8
  float v89; // xmm10_4
  int i; // edx
  int v91; // r10d
  signed int v92; // ecx
  float v93; // xmm11_4
  float *v94; // r9
  float v95; // xmm12_4
  float v96; // xmm13_4
  float v97; // xmm14_4
  float v98; // xmm15_4
  float v99; // xmm2_4
  float v100; // xmm5_4
  float v101; // xmm1_4
  float v102; // xmm4_4
  float v103; // xmm8_4
  float v104; // xmm6_4
  float v105; // xmm9_4
  float v106; // xmm1_4
  float v107; // xmm7_4
  unsigned int *v108; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A87A0[16];
#define v109 (*(float (*))(void *)(sr_frame_1400A87A0 + 0)) /* [rsp+20h] */
#define v110 (*(float (*))(void *)(sr_frame_1400A87A0 + 4)) /* [rsp+24h] */
#define v111 (*(float (*))(void *)(sr_frame_1400A87A0 + 8)) /* [rsp+28h] */

  v1 = a1;
  v2 = 7166LL * a1;
  v3 = -1;
  result = (int)dword_140404A6C[v2 + 280658340];
  dword_140404A6C[v2 + 280658335] = -1;
  if ( (_DWORD)result != dword_140404A6C[v2 + 280658341] )
  {
    v5 = &dword_140404A6C[278845902];
    v6 = (float *)&dword_140404A6C[278845916];
    v7 = v2 * 4 + 48 * result;
    v8 = 0.5;
    dword_140404A6C[v2 + 280658335] = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    dword_140404A6C[v2 + 280658336] = *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7);
    dword_140404A6C[v2 + 280658337] = (int)(float)(*(float *)((char *)&dword_140404A6C[280658343] + v7) * 100.0);
    result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_140404A6C[v2 + 280651313] == -1 )
      {
        v9 = 0.5;
        v10 = 0;
        v11 = &dword_140404A6C[278845902];
        v12 = *(float *)&dword_140404A6C[v2 + 280651693] * 1.5;
        v13 = (float *)&dword_140404A6C[278845916];
        v14 = *(float *)&dword_140404A6C[v2 + 280651694] * 1.5;
        v109 = *(float *)&dword_140404A6C[v2 + 280651674] - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 1.5);
        v110 = *(float *)&dword_140404A6C[v2 + 280651675] - v12;
        v111 = *(float *)&dword_140404A6C[v2 + 280651676] - v14;
        do
        {
          if ( *(v11 - 9) )
          {
            if ( *v11 == -1 && v11[1] == -1 )
            {
              v15 = sub_14007ABA0((float *)&dword_140404A6C[v2 + 280651674], &v109, v13);
              if ( v15 < v9 )
              {
                v3 = v10;
                v9 = v15;
              }
            }
          }
          ++v10;
          v13 += 1760;
          v11 += 1760;
        }
        while ( v10 < 1024 );
        v1 = a1;
        if ( v3 != -1 && dword_140404A6C[1760 * v3 + 278845898] == 39 && !dword_140404A6C[v2 + 280658139] )
          sub_1400E35D0(v3, -1, a1, 0);
      }
      dword_140404A6C[v2 + 280658340] = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
      result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v7);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(v16) = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      v17 = *(int *)((char *)&dword_140404A6C[280658353] + v7);
      if ( (int)v16 < 2 )
        goto LABEL_35;
      v18 = 1;
      v19 = v2 * 4 + 40 * (v17 + 2);
      v20 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v19);
      if ( v20 > 0 )
      {
        v21 = (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v19) + 278845898];
        if ( (int)dword_140404A6C[1268 * v21 + 278521294] > 0 )
          v18 = (unsigned int)(v21 - 13) <= 1;
      }
      v22 = !v18;
      if ( dword_140404A6C[10 * v18 + 280658139 + v2] )
        v22 = v18;
      v23 = v22 ^ 1;
      if ( (_DWORD)v16 != 2 )
        v23 = v22;
      v16 = (unsigned int)v23;
      v24 = v2 * 4 + 40 * v23;
      v25 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v24);
      if ( v25 <= 0 )
      {
        if ( !v25 && !dword_140404A6C[14 * v16 + 280658223 + v2] && v20 > 0 )
          goto LABEL_34;
      }
      else if ( dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v24)
                                                   + 278845898]
                              + 278521660
                              + v17]
             && v20 < 2 )
      {
LABEL_34:
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v16;
LABEL_35:
        if ( (_DWORD)v16 == -1 )
          goto LABEL_53;
        v26 = *(float *)((char *)&dword_140404A6C[280658343] + v7) + 0.06666667014360428;
        *(float *)((char *)&dword_140404A6C[280658343] + v7) = v26;
        v27 = v2 * 4 + 40LL * (int)v16;
        v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v27);
        if ( v28 <= 0 )
        {
          if ( v28 )
            goto LABEL_39;
          if ( dword_140404A6C[14 * (int)v16 + 280658223 + v2] )
            goto LABEL_39;
          result = 5 * v17;
          v29 = v17;
          if ( (int)dword_140404A6C[10 * v17 + 280658159 + v2] <= 0 )
            goto LABEL_39;
        }
        else
        {
          v29 = v17;
          if ( !dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v27)
                                                   + 278845898]
                              + 278521660
                              + v17]
            || (result = 5 * v17, (int)dword_140404A6C[10 * v17 + 280658159 + v2] >= 2) )
          {
LABEL_39:
            *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 1065353216;
            v29 = v17;
            v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v27);
LABEL_40:
            if ( v28 <= 0 )
            {
              if ( v28 )
                goto LABEL_53;
              if ( dword_140404A6C[14 * (int)v16 + 280658223 + v2] )
                goto LABEL_53;
              v30 = v2 * 4 + 40 * (v29 + 2);
              if ( *(int *)((char *)&dword_140404A6C[280658139] + v30) <= 0 )
                goto LABEL_53;
              LODWORD(v30) = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v30);
              v31 = v16;
              goto LABEL_52;
            }
            v30 = *(int *)((char *)&dword_140404A6C[280658140] + v27);
            if ( dword_140404A6C[1268 * (int)dword_140404A6C[1760 * v30 + 278845898] + 278521660 + v29] )
            {
              v31 = v17 + 2;
LABEL_52:
              sub_1400E35D0(v30, -1, v1, v31);
            }
LABEL_53:
            result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
            dword_140404A6C[v2 + 280658340] = result;
            goto LABEL_54;
          }
        }
        if ( v26 < 1.0 )
        {
LABEL_54:
          dword_140404A6C[v2 + 280658338] = v16;
          dword_140404A6C[v2 + 280658339] = v17;
          return result;
        }
        goto LABEL_40;
      }
      LODWORD(v16) = v16 ^ 1;
      if ( !sub_1400A85E0(v1, 2, v16, v17) )
        LODWORD(v16) = -1;
      goto LABEL_34;
    }
    if ( (_DWORD)result == 1 )
    {
      v32 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      if ( v32 == 3 )
      {
        v32 = 1;
        v33 = dword_140404A6C[v2 + 280658149];
        if ( v33 <= 0 || (int)dword_140404A6C[v2 + 280658139] <= 0 )
        {
          v36 = dword_140404A6C[v2 + 280658139];
          if ( v36 || v33 )
          {
            v32 = v36 != 0;
            v37 = v2 * 4 + 40LL * (v36 == 0);
            if ( *(int *)((char *)&dword_140404A6C[280658139] + v37) > 0
              && !dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v37) + 278845906] )
            {
              v32 = -1;
            }
          }
          else
          {
            v32 = -1;
          }
        }
        else
        {
          v34 = (int)dword_140404A6C[1760 * dword_140404A6C[v2 + 280658140] + 278845898];
          v35 = (int)dword_140404A6C[1760 * dword_140404A6C[v2 + 280658150] + 278845898];
          if ( !dword_140404A6C[1268 * v35 + 278521356 + v34] )
          {
            v32 = 0;
            if ( !dword_140404A6C[1268 * v34 + 278521356 + v35] )
              v32 = -1;
          }
        }
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v32;
      }
      if ( v32 == -1 )
        goto LABEL_111;
      v38 = *(float *)((char *)&dword_140404A6C[280658343] + v7) + 0.03333333507180214;
      *(float *)((char *)&dword_140404A6C[280658343] + v7) = v38;
      v39 = v38;
      if ( v38 < 0.875
        || (v40 = v2 * 4 + 40LL * v32, *(int *)((char *)&dword_140404A6C[280658139] + v40) <= 0)
        || (v41 = v2 * 4 + 40 * (v32 ^ 1LL), *(int *)((char *)&dword_140404A6C[280658139] + v41) <= 0)
        || (v42 = *(int *)((char *)&dword_140404A6C[280658140] + v41),
            v43 = (int)dword_140404A6C[1760 * v42 + 278845898],
            !dword_140404A6C[1268
                           * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v40)
                                                + 278845898]
                           + 278521356
                           + v43])
        || !dword_140404A6C[1268 * v43 + 278521289]
        || (v44 = (int)dword_140404A6C[1760 * v42 + 278845906], (int)v44 <= 0) )
      {
LABEL_84:
        result = sub_1400A85E0(v1, 1, v32, 0);
        if ( (_DWORD)result )
        {
          if ( v39 < 1.0 )
          {
LABEL_112:
            dword_140404A6C[v2 + 280658338] = v32;
            return result;
          }
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 1065353216;
        }
        v50 = v32 ^ 1LL;
        v51 = v2 * 4 + 40LL * v32;
        v52 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v51);
        v53 = v52 == 0;
        if ( v52 > 0 )
        {
          v54 = v2 * 4 + 40 * v50;
          if ( *(int *)((char *)&dword_140404A6C[280658139] + v54) > 0 )
          {
            v55 = *(int *)((char *)&dword_140404A6C[280658140] + v54);
            v56 = (int)dword_140404A6C[1760 * v55 + 278845898];
            if ( !dword_140404A6C[1268
                                * (int)dword_140404A6C[1760
                                                     * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51)
                                                     + 278845898]
                                + 278521356
                                + v56] )
            {
LABEL_111:
              result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
              dword_140404A6C[v2 + 280658340] = result;
              goto LABEL_112;
            }
            if ( !dword_140404A6C[1268 * v56 + 278521289] )
              goto LABEL_99;
            v57 = (int)dword_140404A6C[1760 * v55 + 278845906];
            if ( (int)v57 <= 0 )
              goto LABEL_99;
            v58 = (int)dword_140404A6C[1760 * v55 + 278845906 + v57];
            if ( (unsigned int)v58 > 0x3FF )
              goto LABEL_99;
            v59 = 1760 * v58;
            v60 = v58;
            v61 = dword_140404A6C[1760 * v58 + 278845903];
            if ( v61 == -1 )
            {
              v62 = dword_140404A6C[v59 + 278845902];
              if ( v62 == -1 )
              {
LABEL_99:
                if ( !(unsigned int)sub_1400E35D0(
                                      *(unsigned int *)((char *)&dword_140404A6C[280658140] + v54),
                                      *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51),
                                      -1,
                                      0)
                  || !dword_140404A6C[1268
                                    * dword_140404A6C[1760
                                                    * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v54)
                                                    + 278845898]
                                    + 278521289] )
                {
                  goto LABEL_111;
                }
                v63 = 1.0;
                goto LABEL_110;
              }
              sub_1400CA7C0(v58, v62, dword_140404A6C[v59 + 278845904]);
            }
            else
            {
              sub_1400CA9B0(v58, v61);
            }
            if ( dword_140404A6C[456202453] )
              ++dword_140404A6C[v60 + 280648157];
            goto LABEL_99;
          }
          v53 = v52 == 0;
        }
        if ( !v53 )
          goto LABEL_111;
        v64 = v2 * 4 + 40 * v50;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v64) <= 0 )
          goto LABEL_111;
        v65 = *(int *)((char *)&dword_140404A6C[280658140] + v64);
        v66 = (int)dword_140404A6C[1760 * v65 + 278845906];
        if ( (int)v66 <= 0
          || !dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[1760 * v65 + 278845907] + 278845898]
                            + 278521356
                            + dword_140404A6C[1760 * v65 + 278845898]]
          || !(unsigned int)sub_1400E35D0(dword_140404A6C[1760 * v65 + 278845906 + v66], -1, v1, v32)
          || !dword_140404A6C[1268
                            * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v64)
                                            + 278845898]
                            + 278521289] )
        {
          goto LABEL_111;
        }
        v63 = 0.875;
LABEL_110:
        sub_1400515E0(
          dword_140404A6C[283786000],
          &dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v51) + 278845916],
          1.0,
          v63);
        goto LABEL_111;
      }
      v45 = (int)dword_140404A6C[1760 * v42 + 278845906 + v44];
      if ( (unsigned int)v45 <= 0x3FF )
      {
        v46 = 1760 * v45;
        v47 = v45;
        v48 = dword_140404A6C[1760 * v45 + 278845903];
        if ( v48 != -1 )
        {
          sub_1400CA9B0(v45, v48);
          goto LABEL_81;
        }
        v49 = dword_140404A6C[v46 + 278845902];
        if ( v49 != -1 )
        {
          sub_1400CA7C0(v45, v49, dword_140404A6C[v46 + 278845904]);
LABEL_81:
          if ( dword_140404A6C[456202453] )
            ++dword_140404A6C[v47 + 280648157];
        }
      }
      *(unsigned int *)((char *)&dword_140404A6C[280658343] + v7) = 0;
      v39 = 0.0;
      goto LABEL_84;
    }
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 )
        return result;
      if ( dword_140404A6C[v2 + 280651313] == -1 )
      {
        v78 = -1;
        v79 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v2 * 4 + 1126820052);
        v80 = 0;
        v81 = *(float *)&dword_140404A6C[v2 + 280651693] * 1.5;
        v82 = *(float *)&dword_140404A6C[v2 + 280651694] * 1.5;
        v109 = *v79 - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 1.5);
        v110 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v2 * 4 + 1126820052) - v81;
        v111 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v2 * 4 + 1126820052) - v82;
        do
        {
          if ( *(v5 - 9) )
          {
            if ( *v5 == -1 && v5[1] == -1 )
            {
              v83 = sub_14007ABA0(v79, &v109, v6);
              if ( v83 < v8 )
              {
                v78 = v80;
                v8 = v83;
              }
            }
          }
          ++v80;
          v6 += 1760;
          v5 += 1760;
        }
        while ( v80 < 1024 );
        if ( v78 == -1 )
        {
          v88 = &dword_140404A6C[129716721];
          v89 = 1.375;
          for ( i = 0; i < 512; ++i )
          {
            if ( *(v88 - 12) )
            {
              v91 = v88[5163];
              v92 = 0;
              if ( v91 > 0 )
              {
                v93 = *((float *)v88 + 5);
                v94 = (float *)(v88 + 5165);
                v95 = *((float *)v88 - 1);
                v96 = *((float *)v88 + 6);
                v97 = *(float *)v88;
                v98 = *((float *)v88 + 7);
                do
                {
                  v99 = *(v94 - 1);
                  v100 = (float)((float)((float)(v96 * v99) + v97) + (float)(*v94 * *((float *)v88 + 9)))
                       + (float)(v94[1] * *((float *)v88 + 12));
                  v101 = v94[1];
                  v102 = v101 * *((float *)v88 + 11);
                  v103 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v2 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v2 + 280651693] * 0.75);
                  v104 = (float)((float)((float)(v98 * v99) + *((float *)v88 + 1)) + (float)(*v94 * *((float *)v88 + 10)))
                       + (float)(v101 * *((float *)v88 + 13));
                  v105 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v2 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v2 + 280651694] * 0.75);
                  v106 = *v79 - (float)(*(float *)&dword_140404A6C[v2 + 280651692] * 0.75);
                  v107 = (float)((float)((float)((float)((float)(v93 * v99) + v95) + (float)(*v94 * *((float *)v88 + 8)))
                                       + v102)
                               - v106)
                       * (float)((float)((float)((float)((float)(v93 * v99) + v95) + (float)(*v94 * *((float *)v88 + 8)))
                                       + v102)
                               - v106);
                  if ( fsqrt(
                         (float)((float)((float)(v100 - v103) * (float)(v100 - v103)) + v107)
                       + (float)((float)(v104 - v105) * (float)(v104 - v105))) < v89 )
                  {
                    v108 = &dword_140404A6C[280651313];
                    while ( !*(v108 - 10) || *v108 != i || v108[1] != v92 )
                    {
                      v108 += 7166;
                      if ( (__int64)v108 >= (__int64)&dword_140404A6C[282485809] )
                      {
                        dword_140404A6C[v2 + 280651313] = i;
                        dword_140404A6C[v2 + 280651314] = v92;
                        v89 = fsqrt(
                                (float)((float)((float)(v100 - v103) * (float)(v100 - v103)) + v107)
                              + (float)((float)(v104 - v105) * (float)(v104 - v105)));
                        break;
                      }
                    }
                  }
                  ++v92;
                  v94 += 3;
                }
                while ( v92 < v91 );
              }
            }
            v88 += 5210;
          }
        }
        else
        {
          v84 = (int)dword_140404A6C[1760 * v78 + 278845898];
          if ( (((_DWORD)v84 - 39) & 0xFFFFFFFC) != 0 || (_DWORD)v84 == 40 )
          {
            v85 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
            if ( v85 == 3 )
            {
              if ( (unsigned int)v84 <= 0x24 )
              {
                v86 = 0x100200E000LL;
                if ( _bittest64(&v86, v84) )
                  goto LABEL_155;
              }
              v87 = 0;
              if ( !dword_140404A6C[1268 * v84 + 278521289] )
                v87 = (int)dword_140404A6C[1268 * v84 + 278521294] > 0;
              if ( (_DWORD)v84 == 16 )
LABEL_155:
                v87 = 0;
              v85 = !v87;
              if ( (int)dword_140404A6C[10 * v87 + 280658139 + v2] <= 0 )
                v85 = v87;
              *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v85;
            }
            if ( !dword_140404A6C[10 * v85 + 280658139 + v2] )
              sub_1400E35D0(v78, -1, v1, v85);
          }
        }
      }
    }
    else
    {
      v67 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7);
      if ( v67 >= 2 )
      {
        v68 = v67 != 2;
        v69 = !v68;
        if ( dword_140404A6C[10 * v68 + 280658139 + v2] )
          v69 = v68;
        v67 = v69;
        result = 5 * v69;
        if ( !dword_140404A6C[2 * result + 280658139 + v2] )
          v67 = -1;
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v7) = v67;
      }
      if ( v67 != -1 )
      {
        v70 = *(float *)&dword_140404A6C[v2 + 280651331];
        if ( v70 <= -0.196349540849375 || v70 >= 0.0981747704246875 )
          goto LABEL_132;
        v71 = v2 * 4 + 40LL * v67;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v71) > 0 )
        {
          v72 = *(int *)((char *)&dword_140404A6C[280658140] + v71);
          if ( (unsigned int)v72 <= 0x3FF )
          {
            v73 = 1760 * v72;
            v74 = v72;
            v75 = dword_140404A6C[1760 * v72 + 278845903];
            if ( v75 != -1 )
            {
              sub_1400CA9B0(v72, v75);
              goto LABEL_129;
            }
            v76 = dword_140404A6C[v73 + 278845902];
            if ( v76 != -1 )
            {
              sub_1400CA7C0(v72, v76, dword_140404A6C[v73 + 278845904]);
LABEL_129:
              if ( dword_140404A6C[456202453] )
                ++dword_140404A6C[v74 + 280648157];
            }
          }
        }
        result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
        dword_140404A6C[v2 + 280658340] = result;
        v70 = *(float *)&dword_140404A6C[v2 + 280651331];
LABEL_132:
        v77 = v70;
        if ( v77 >= -0.1595340019401172 )
        {
          if ( v77 <= 0.14726215563703127 )
            dword_140404A6C[v2 + 280651331] = 0;
          else
            *(float *)&dword_140404A6C[v2 + 280651331] = v77 - 0.14726215563703127;
        }
        else
        {
          *(float *)&dword_140404A6C[v2 + 280651331] = v77 + 0.1595340019401172;
        }
        return result;
      }
    }
    result = ((unsigned __int8)dword_140404A6C[v2 + 280658340] + 1) & 7;
    dword_140404A6C[v2 + 280658340] = result;
  }
  return result;
}
#undef v109
#undef v110
#undef v111

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9760) ----------------------------------------------------
__int64            sub_1400A9760(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  result = a1;
  v5 = 7166LL * a1;
  if ( !dword_140404A6C[v5 + 280651319] )
  {
    result = (unsigned int)(a4 / -2);
    dword_140404A6C[v5 + 280658300] += result;
  }
  if ( a2 <= 2 )
  {
    dword_140404A6C[v5 + 280658302] -= a4;
    dword_140404A6C[v5 + 280651333] += a4;
    v7 = dword_140404A6C[v5 + 280658300];
    if ( v7 < 100 )
    {
      result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                        - (float)(fminf((float)(100 - v7) * 0.03999999910593033, 1.0) * (float)a4));
      dword_140404A6C[v5 + 280658299] = result;
    }
  }
  if ( a2 == 3 )
  {
    dword_140404A6C[v5 + 280658304] -= a4;
    dword_140404A6C[v5 + 280658299] -= a4;
  }
  else
  {
    v8 = 3 * a4;
    if ( a2 - 4 <= 2 )
      dword_140404A6C[v5 + 280658306] -= v8;
    if ( a2 - 7 <= 2 )
      dword_140404A6C[v5 + 280658308] -= v8;
    if ( a2 - 10 <= 2 )
    {
      dword_140404A6C[v5 + 280658310] += -2 * a4;
      v9 = dword_140404A6C[v5 + 280658300];
      if ( v9 < 100 )
        dword_140404A6C[v5 + 280658299] = (int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                                     - (float)((float)(a4 * (100 - v9)) * 0.009999999776482582));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      dword_140404A6C[v5 + 280658312] += -2 * a4;
      result = dword_140404A6C[v5 + 280658300];
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                          - (float)((float)(a4 * (100 - result)) * 0.009999999776482582));
        dword_140404A6C[v5 + 280658299] = result;
      }
    }
  }
  if ( a4 > 0 )
  {
    result = rand() & 0x1F;
    if ( (int)result < a4 )
      dword_140404A6C[v5 + 280658301] = 1;
  }
  if ( (int)dword_140404A6C[v5 + 280651333] > 90 )
    dword_140404A6C[v5 + 280651333] = 90;
  if ( (dword_140404A6C[v5 + 280658299] & 0x80000000) != 0 )
    dword_140404A6C[v5 + 280658299] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AAAA0) ----------------------------------------------------
__int64            sub_1400AAAA0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // r15
  int v4; // r10d
  float *v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int *v15; // r8
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  __int64 v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  __int64 v27; // rcx
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int *v35; // r8
  float *v36; // rdx
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  __int64 v44; // rcx
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  __int64 v48; // rcx
  __int64 v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  __int64 v53; // rcx
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  __int64 v57; // rcx
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  signed int v72; // ebp
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 result; // rax
  unsigned int *v78; // r10
  signed int v79; // ebx
  __int64 v80; // r11
  __int64 v81; // rsi
  __int64 v82; // rdi
  signed int v83; // ecx
  __int64 v84; // r8
  unsigned int v85; // edx
  int v86; // edx
  unsigned int v87; // ecx
  unsigned int *v88; // r12
  __int64 v89; // rsi
  __int64 v90; // r13
  unsigned int *v91; // r14
  unsigned int *v92; // rdx
  unsigned int *v93; // rdi
  __int64 v94; // rbx
  unsigned int *v95; // r11
  __int64 v96; // rbp
  unsigned int v97; // eax
  __int64 v98; // r10
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400AAAA0[128];
#define v99 (*(unsigned int * (*))(void *)(sr_frame_1400AAAA0 + 0)) /* [rsp+0h] */
#define v100 (*(int (*))(void *)(sr_frame_1400AAAA0 + 96)) /* [rsp+60h] */
#define v101 (*(int (*))(void *)(sr_frame_1400AAAA0 + 104)) /* [rsp+68h] */
#define v102 (*(int (*))(void *)(sr_frame_1400AAAA0 + 112)) /* [rsp+70h] */
#define v103 (*(__int64 (*))(void *)(sr_frame_1400AAAA0 + 120)) /* [rsp+78h] */

  v1 = a1;
  v2 = 7166LL * a1;
  v3 = 0;
  v103 = a1;
  v4 = 1;
  v101 = 1;
  v5 = (float *)&dword_140404A6C[282486301];
  dword_140404A6C[v2 + 280654321] = 0;
  v6 = 2;
  dword_140404A6C[v2 + 280655794] = 0;
  dword_140404A6C[v2 + 280656115] = 0;
  dword_140404A6C[v2 + 280654323] = dword_140404A6C[v2 + 280651439];
  v7 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v7) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v7) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v8 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v8 + 1;
  dword_140404A6C[23 * v8 + 280654346 + v2] = dword_140404A6C[v2 + 280651517];
  v9 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v9) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v9) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v10 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v10 + 1;
  dword_140404A6C[23 * v10 + 280654346 + v2] = dword_140404A6C[v2 + 280651595];
  v11 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v11) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v11) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v12 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v12 + 1;
  dword_140404A6C[23 * v12 + 280654346 + v2] = dword_140404A6C[v2 + 280651673];
  v13 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&dword_140404A6C[280654324] + v13) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280654326] + v13) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v14 = dword_140404A6C[v2 + 280654321] + 1;
  dword_140404A6C[v2 + 280654321] = v14;
  v15 = &dword_140404A6C[v2 + 280652297];
  do
  {
    v16 = *(v5 - 2);
    v17 = *(v5 - 1);
    v18 = *v5;
    dword_140404A6C[23 * (int)v14 + 280654323 + v2] = dword_140404A6C[v2 + 280651439];
    v19 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v19) = v16;
    *(float *)((char *)&dword_140404A6C[280654325] + v19) = v17;
    *(float *)((char *)&dword_140404A6C[280654326] + v19) = v18;
    v20 = v16 - *(v5 - 5);
    v21 = v17 - *(v5 - 4);
    v22 = v18 - *(v5 - 3);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *(v15 - 78);
    v23 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v23) = v20;
    *(float *)((char *)&dword_140404A6C[280654329] + v23) = v21;
    *(float *)((char *)&dword_140404A6C[280654330] + v23) = v22;
    v24 = v5[23];
    v25 = v5[24];
    v26 = v5[25];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v27 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v27 + 1;
    dword_140404A6C[23 * v27 + 280654346 + v2] = *(v15 - 78);
    v28 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v28) = v24;
    v29 = v24 - v5[20];
    *(float *)((char *)&dword_140404A6C[280654325] + v28) = v25;
    v30 = v25 - v5[21];
    *(float *)((char *)&dword_140404A6C[280654326] + v28) = v26;
    v31 = v26 - v5[22];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v15;
    v32 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v32) = v29;
    *(float *)((char *)&dword_140404A6C[280654329] + v32) = v30;
    *(float *)((char *)&dword_140404A6C[280654330] + v32) = v31;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v33 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v33 + 1;
    dword_140404A6C[23 * v33 + 280654346 + v2] = *v15;
    v34 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(unsigned int *)((char *)&dword_140404A6C[280654324] + v34) = 0;
    *(_QWORD *)((char *)&dword_140404A6C[280654325] + v34) = 1048576000;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
    v5 += 75;
    v15 += 234;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
    --v6;
  }
  while ( v6 );
  v35 = &dword_140404A6C[v2 + 280651751];
  v36 = (float *)&dword_140404A6C[282486201];
  do
  {
    v37 = *(v36 - 52);
    v38 = *(v36 - 51);
    v39 = *(v36 - 50);
    dword_140404A6C[23 * (int)v14 + 280654323 + v2] = dword_140404A6C[v2 + 280651595];
    v40 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v40) = v37;
    *(float *)((char *)&dword_140404A6C[280654325] + v40) = v38;
    *(float *)((char *)&dword_140404A6C[280654326] + v40) = v39;
    v41 = v37 - *(v36 - 55);
    v42 = v38 - *(v36 - 54);
    v43 = v39 - *(v36 - 53);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v35;
    v44 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v44) = v41;
    *(float *)((char *)&dword_140404A6C[280654329] + v44) = v42;
    *(float *)((char *)&dword_140404A6C[280654330] + v44) = v43;
    v45 = *(v36 - 27);
    v46 = *(v36 - 26);
    v47 = *(v36 - 25);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v48 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v48 + 1;
    dword_140404A6C[23 * v48 + 280654346 + v2] = *v35;
    v49 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v49) = v45;
    v50 = v45 - *(v36 - 30);
    *(float *)((char *)&dword_140404A6C[280654325] + v49) = v46;
    v51 = v46 - *(v36 - 29);
    *(float *)((char *)&dword_140404A6C[280654326] + v49) = v47;
    v52 = v47 - *(v36 - 28);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v35[78];
    v53 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v53) = v50;
    v54 = *(v36 - 2);
    *(float *)((char *)&dword_140404A6C[280654329] + v53) = v51;
    v55 = *(v36 - 1);
    *(float *)((char *)&dword_140404A6C[280654330] + v53) = v52;
    v56 = *v36;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v57 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v57 + 1;
    dword_140404A6C[23 * v57 + 280654346 + v2] = v35[78];
    v58 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654324] + v58) = v54;
    *(float *)((char *)&dword_140404A6C[280654325] + v58) = v55;
    v59 = v54 - *(v36 - 5);
    v60 = v55 - *(v36 - 4);
    *(float *)((char *)&dword_140404A6C[280654326] + v58) = v56;
    v61 = v56 - *(v36 - 3);
    v62 = v35[156];
    v36 += 75;
    v35 += 234;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v62;
    v63 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&dword_140404A6C[280654328] + v63) = v59;
    *(float *)((char *)&dword_140404A6C[280654329] + v63) = v60;
    *(float *)((char *)&dword_140404A6C[280654330] + v63) = v61;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
  }
  while ( (__int64)v36 < (__int64)&dword_140404A6C[282486351] );
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655795 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 1;
  v64 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v64 + 1;
  dword_140404A6C[5 * v64 + 280655800 + v2] = 1;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 2;
  v65 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v65 + 1;
  dword_140404A6C[5 * v65 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 3;
  v66 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v66 + 1;
  dword_140404A6C[5 * v66 + 280655800 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 4;
  v67 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v67 + 1;
  dword_140404A6C[5 * v67 + 280655800 + v2] = 4;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 5;
  v68 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v68 + 1;
  dword_140404A6C[5 * v68 + 280655800 + v2] = 0;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 7;
  v69 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v69 + 1;
  dword_140404A6C[5 * v69 + 280655800 + v2] = 7;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 8;
  v70 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v70 + 1;
  dword_140404A6C[5 * v70 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 10;
  v71 = (int)dword_140404A6C[v2 + 280655794];
  v72 = 0;
  dword_140404A6C[v2 + 280655794] = v71 + 1;
  dword_140404A6C[5 * v71 + 280655800 + v2] = 10;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 11;
  v73 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v73 + 1;
  dword_140404A6C[5 * v73 + 280655800 + v2] = 11;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 12;
  v74 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v74 + 1;
  dword_140404A6C[5 * v74 + 280655800 + v2] = 2;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 13;
  v75 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v75 + 1;
  dword_140404A6C[5 * v75 + 280655800 + v2] = 13;
  dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280655794] + 280655796 + v2] = 14;
  v76 = (int)dword_140404A6C[v2 + 280655794];
  dword_140404A6C[v2 + 280655794] = v76 + 1;
  dword_140404A6C[5 * v76 + 280655800 + v2] = 14;
  result = v2 * 4 + 20LL * (int)dword_140404A6C[v2 + 280655794];
  *(unsigned int *)((char *)&dword_140404A6C[280655796] + result) = 15;
  if ( (int)++dword_140404A6C[v2 + 280655794] > 0 )
  {
    v78 = &dword_140404A6C[v2 + 280655795];
    do
    {
      v79 = 0;
      v80 = v2 * 4 + 92LL * (int)v78[1];
      v78[3] = *(unsigned int *)((char *)&dword_140404A6C[280654323] + v80);
      result = (int)*v78;
      v81 = v2 * 4 + 92 * result;
      if ( *(int *)((char *)&dword_140404A6C[280654322] + v81) > 0 )
      {
        v82 = 0;
        do
        {
          v83 = 0;
          if ( *(int *)((char *)&dword_140404A6C[280654322] + v80) > 0 )
          {
            result = (__int64)&dword_140404A6C[280654323] + v80;
            v84 = v82 + v2 * 4 + 92LL * (int)*v78;
            do
            {
              v85 = *(unsigned int *)((char *)&dword_140404A6C[280654323] + v84);
              if ( v85 == *(_DWORD *)result )
                v78[3] = v85;
              ++v83;
              result += 16;
            }
            while ( v83 < *(int *)((char *)&dword_140404A6C[280654322] + v80) );
            v3 = 0;
          }
          ++v79;
          v82 += 16;
        }
        while ( v79 < *(int *)((char *)&dword_140404A6C[280654322] + v81) );
      }
      ++v72;
      v78 += 5;
    }
    while ( v72 < (int)dword_140404A6C[v2 + 280655794] );
    v1 = v103;
    v4 = 1;
  }
  v86 = dword_140404A6C[v2 + 280655794];
  v87 = 0;
  dword_140404A6C[v2 + 280656115] = 0;
  if ( v86 > 0 )
  {
    v88 = &dword_140404A6C[v2 + 280655798];
    do
    {
      v102 = v4;
      result = (unsigned int)v86;
      v100 = v4;
      if ( v4 < v86 )
      {
        v89 = 7166 * v1;
        v90 = v3 + 5;
        v91 = v88 + 5;
        v92 = &dword_140404A6C[7166 * v1 + 280655795 + v3];
        v99 = v92;
        v93 = &dword_140404A6C[7166 * v1 + 280655800 + v3];
        do
        {
          v94 = 0;
          v95 = v92;
          v96 = 2;
          do
          {
            v97 = *v95;
            v98 = v94 ^ 1;
            if ( *v95 == *v93 )
            {
              dword_140404A6C[5 * (int)v87 + 280656116 + v2] = dword_140404A6C[v98 + 280655795 + v89 + v3];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656117 + v2] = *v95;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656118 + v2] = dword_140404A6C[v89 + 280655796 + v90];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656119 + v2] = *v88;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656120 + v2] = *v91;
              v87 = dword_140404A6C[v2 + 280656115] + 1;
              dword_140404A6C[v2 + 280656115] = v87;
              v97 = *v95;
            }
            if ( v97 == v93[1] )
            {
              dword_140404A6C[5 * (int)v87 + 280656116 + v2] = dword_140404A6C[v3 + 280655795 + v98 + v89];
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656117 + v2] = *v95;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656118 + v2] = *v93;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656119 + v2] = *v88;
              dword_140404A6C[5 * (int)dword_140404A6C[v2 + 280656115] + 280656120 + v2] = *v91;
              v87 = dword_140404A6C[v2 + 280656115] + 1;
              dword_140404A6C[v2 + 280656115] = v87;
            }
            ++v94;
            ++v95;
            --v96;
          }
          while ( v96 );
          v90 += 5;
          result = dword_140404A6C[v2 + 280655794];
          v93 += 5;
          ++v100;
          v91 += 5;
          v92 = v99;
        }
        while ( v100 < (int)result );
        v4 = v101;
      }
      v1 = v103;
      ++v4;
      v3 += 5;
      v101 = v4;
      v88 += 5;
      v86 = result;
    }
    while ( v102 < (int)result );
  }
  return result;
}
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103

// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AC890) ----------------------------------------------------
__int64            sub_1400AC890(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_feel_ground_ahead(int human);
  human_feel_ground_ahead(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B2440) ----------------------------------------------------
__int64            sub_1400B2440(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_update_walk_height(int human);
  human_update_walk_height(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B2D20) ----------------------------------------------------
__int64            sub_1400B2D20(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4

  v6 = 28664LL * a1;
  result = a2;
  v8 = v6 + 312LL * a3;
  v9 = v6 + 312LL * a2;
  v10 = (float)(*(float *)((char *)&dword_140404A6C[280651461] + v9)
              - *(float *)((char *)&dword_140404A6C[280651461] + v8))
      * a6;
  v11 = (float)(*(float *)((char *)&dword_140404A6C[280651462] + v9)
              - *(float *)((char *)&dword_140404A6C[280651462] + v8))
      * a6;
  v12 = (float)(*(float *)((char *)&dword_140404A6C[280651463] + v9)
              - *(float *)((char *)&dword_140404A6C[280651463] + v8))
      * a6;
  v13 = *a4 - v10;
  v14 = a4[1] - v11;
  v15 = a4[2] - v12;
  v16 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  if ( v16 > a5 )
  {
    v17 = (float)(fminf(v16 - a5, a5) * 0.5) + a5;
    if ( v16 == 0.0 )
    {
      v18 = 0.0;
      v19 = 0.0;
      v20 = 0.0;
    }
    else
    {
      v18 = v13 * (float)(1.0 / v16);
      v19 = v14 * (float)(1.0 / v16);
      v20 = v15 * (float)(1.0 / v16);
    }
    *a4 = (float)(v18 * v17) + v10;
    a4[1] = (float)(v19 * v17) + v11;
    a4[2] = (float)(v20 * v17) + v12;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84884: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;

//----- (00000001400B40B0) ----------------------------------------------------
__int64            sub_1400B40B0(int a1)
{
  /* Clean implementation: src/engine/human_walk.c, checked against the original executable
     (tools/native-compare suite walk). */
  extern void human_update_walk_point(int human);
  human_update_walk_point(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B5460) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1400B5460(int a1, int a2)
{
  /* Clean implementation: src/engine/human_feet.c, checked against the original executable
     (tools/native-compare suite feet). */
  extern void human_foot_ground_contact(int human, int leg);
  human_foot_ground_contact(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B5E70) ----------------------------------------------------
int            sub_1400B5E70(int a1)
{
  /* Clean implementation: src/engine/human_health.c, checked against the original executable
     (tools/native-compare suite health). */
  extern void human_update_health(int human);
  human_update_health(a1);
  return 0; /* result discarded by its caller */
}

//----- (00000001400B62E0) ----------------------------------------------------
__int64            sub_1400B62E0(int a1)
{
  /* Clean implementation: src/engine/human_arms.c, checked against the original executable
     (tools/native-compare suite arms). */
  extern void human_use_hands(int human);
  human_use_hands(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B78F0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1400B78F0(int a1)
{
  /* Clean implementation: src/engine/human_jump.c, checked against the original executable
     (tools/native-compare suite jump). */
  extern void human_launch_jump(int human);
  human_launch_jump(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400B9D90) ----------------------------------------------------
__int64            sub_1400B9D90(int a1)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite legs). */
  extern void human_sit_legs(int human);
  human_sit_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BA210) ----------------------------------------------------
__int64            sub_1400BA210(int a1)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite legs). */
  extern void human_lie_legs(int human);
  human_lie_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BAA40) ----------------------------------------------------
__int64            sub_1400BAA40(int a1, __int64 a2, __int64 a3)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite steps). a2 and a3 are two points each, one per leg. */
  extern void human_plan_steps(int human, const float (*from)[3], const float (*to)[3]);
  human_plan_steps(a1, (const float (*)[3])a2, (const float (*)[3])a3);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BB6B0) ----------------------------------------------------
__int64            sub_1400BB6B0(int a1, int a2, __int64 a3, float *a4, intptr_t a5, float *a6)
{
  /* Clean implementation: src/engine/human_legs.c, checked against the original executable
     (tools/native-compare suite swing). The original does not read a3 or a5. */
  extern void human_swing_step(int human, int leg, const float *hip_target, const float *axes);
  (void)a3;
  (void)a5;
  human_swing_step(a1, a2, a4, a6);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400BBF30) ----------------------------------------------------
__int64            sub_1400BBF30(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float a9)
{
  /* Clean implementation: src/engine/human_balance.c, checked against the original executable
     (tools/native-compare suite balance). */
  extern void human_balance_on_leg(int human, int leg, float *target, float *turn, const float *hip,
                                   const float *foot, const float *wanted_centre, const float *wanted_rotation,
                                   float share);
  human_balance_on_leg(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return 0; /* result discarded by its caller */
}

//----- (00000001400BCA30) ----------------------------------------------------
__int64            sub_1400BCA30(int a1)
{
  /* Clean implementation: src/engine/human_stand.c, checked against the original executable
     (tools/native-compare suite stand). */
  extern void human_stand_legs(int human);
  human_stand_legs(a1);
  return 0; /* compatibility result discarded by all reviewed callers */
}

//----- (00000001400C2210) ----------------------------------------------------
unsigned __int64 sub_1400C2210()
{
  unsigned __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  float v12; // xmm14_4
  float v13; // xmm8_4
  float v14; // xmm11_4
  float v15; // xmm15_4
  float v16; // xmm9_4
  __int64 v17; // r8
  float v18; // xmm12_4
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  unsigned int v24; // xmm4_4
  float v25; // xmm0_4
  unsigned int v26; // xmm5_4
  float v27; // xmm1_4
  unsigned int v28; // xmm6_4
  int v29; // ecx
  unsigned int v30; // xmm3_4
  float v31; // xmm2_4
  unsigned int v32; // xmm1_4
  float v33; // xmm0_4
  unsigned int v34; // xmm0_4
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  int v40; // ebp
  unsigned int *v41; // rsi
  __int64 v42; // r14
  float *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rax
  float v46; // xmm7_4
  float v47; // xmm8_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm6_4
  float v51; // xmm9_4
  float v52; // xmm10_4
  float v53; // xmm11_4
  float v54; // xmm12_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  __int64 v58; // rcx
  float v59; // xmm7_4
  float v60; // xmm8_4
  float v61; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400C2210[352];
#define v62 (*(float (*))(void *)(sr_frame_1400C2210 + 0)) /* [rsp+20h] */
#define v63 (*(float (*))(void *)(sr_frame_1400C2210 + 4)) /* [rsp+24h] */
#define v64 (*(float (*))(void *)(sr_frame_1400C2210 + 8)) /* [rsp+28h] */
#define v65 (*(float (*))(void *)(sr_frame_1400C2210 + 12)) /* [rsp+2Ch] */
#define v66 (*(float (*))(void *)(sr_frame_1400C2210 + 16)) /* [rsp+30h] */
#define v67 (*(float (*))(void *)(sr_frame_1400C2210 + 20)) /* [rsp+34h] */
#define v68 (*(float (*))(void *)(sr_frame_1400C2210 + 24)) /* [rsp+38h] */
#define v69 (*(float (*))(void *)(sr_frame_1400C2210 + 28)) /* [rsp+3Ch] */
#define v70 (*(float (*))(void *)(sr_frame_1400C2210 + 32)) /* [rsp+40h] */
#define v71 (*(float (*))(void *)(sr_frame_1400C2210 + 36)) /* [rsp+44h] */
#define v72 (*(float (*))(void *)(sr_frame_1400C2210 + 40)) /* [rsp+48h] */
#define v73 (*(float (*))(void *)(sr_frame_1400C2210 + 44)) /* [rsp+4Ch] */
#define v74 (*(float (*))(void *)(sr_frame_1400C2210 + 48)) /* [rsp+50h] */
#define v75 (*(float (*))(void *)(sr_frame_1400C2210 + 52)) /* [rsp+54h] */
#define v76 (*(float (*))(void *)(sr_frame_1400C2210 + 56)) /* [rsp+58h] */
#define v77 (*(float (*))(void *)(sr_frame_1400C2210 + 60)) /* [rsp+5Ch] */
#define v78 (*(__int64 (*))(void *)(sr_frame_1400C2210 + 64)) /* [rsp+60h] */
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_1400C2210 + 312)) /* [rsp+158h] */
#define v80 (*(float (*))(void *)(sr_frame_1400C2210 + 320)) /* [rsp+160h] */
#define v81 (*(float (*))(void *)(sr_frame_1400C2210 + 328)) /* [rsp+168h] */
#define v82 (*(float (*))(void *)(sr_frame_1400C2210 + 336)) /* [rsp+170h] */
#define v83 (*(float (*))(void *)(sr_frame_1400C2210 + 344)) /* [rsp+178h] */

  result = (unsigned __int64)&retaddr;
  v1 = 0;
  v2 = 256;
  v3 = 0;
  v78 = 256;
  do
  {
    if ( dword_140404A6C[v1 + 280651303] )
    {
      v4 = (int)dword_140404A6C[v1 + 280651313];
      if ( (_DWORD)v4 == -1 )
      {
        dword_140404A6C[v1 + 280651335] = dword_140404A6C[v1 + 280651440];
        dword_140404A6C[v1 + 280651336] = dword_140404A6C[v1 + 280651441];
        result = dword_140404A6C[v1 + 280651442];
        dword_140404A6C[v1 + 280651337] = result;
      }
      else
      {
        v5 = (int)dword_140404A6C[v1 + 280651305];
        if ( (_DWORD)v5 != -1 )
        {
          if ( (dword_140404A6C[3597 * v5 + 71856325] & 0x800) != 0 )
          {
            v6 = dword_140404A6C[v1 + 280651322];
            if ( v6 < 30 )
              dword_140404A6C[v1 + 280651322] = v6 + 1;
          }
          else
          {
            dword_140404A6C[v1 + 280651322] = 0;
          }
        }
        v7 = *(float *)&dword_140404A6C[v1 + 280651440];
        v8 = *(float *)&dword_140404A6C[v1 + 280651441];
        v9 = *(float *)&dword_140404A6C[v1 + 280651442];
        v10 = *(float *)&dword_140404A6C[v1 + 280651518] - v7;
        v11 = *(float *)&dword_140404A6C[v1 + 280651752] - v7;
        v12 = *(float *)&dword_140404A6C[v1 + 280651830] - v7;
        v13 = *(float *)&dword_140404A6C[v1 + 280651519] - v8;
        v81 = *(float *)&dword_140404A6C[v1 + 280651596] - v7;
        v14 = *(float *)&dword_140404A6C[v1 + 280651753] - v8;
        v15 = *(float *)&dword_140404A6C[v1 + 280651831] - v8;
        v16 = *(float *)&dword_140404A6C[v1 + 280651520] - v9;
        v17 = 5210 * v4;
        v82 = *(float *)&dword_140404A6C[v1 + 280651597] - v8;
        v18 = *(float *)&dword_140404A6C[v1 + 280651754] - v9;
        v83 = *(float *)&dword_140404A6C[v1 + 280651598] - v9;
        v62 = *(float *)&dword_140404A6C[v1 + 280651674] - v7;
        v63 = *(float *)&dword_140404A6C[v1 + 280651675] - v8;
        v64 = *(float *)&dword_140404A6C[v1 + 280651676] - v9;
        v65 = *(float *)&dword_140404A6C[v1 + 280651832] - v9;
        v66 = *(float *)&dword_140404A6C[v1 + 280651908] - v7;
        v67 = *(float *)&dword_140404A6C[v1 + 280651909] - v8;
        v68 = *(float *)&dword_140404A6C[v1 + 280651910] - v9;
        v69 = *(float *)&dword_140404A6C[v1 + 280651986] - v7;
        v70 = *(float *)&dword_140404A6C[v1 + 280651987] - v8;
        v71 = *(float *)&dword_140404A6C[v1 + 280651988] - v9;
        v72 = *(float *)&dword_140404A6C[v1 + 280652064] - v7;
        v73 = *(float *)&dword_140404A6C[v1 + 280652065] - v8;
        v74 = *(float *)&dword_140404A6C[v1 + 280652066] - v9;
        v75 = *(float *)&dword_140404A6C[v1 + 280652142] - v7;
        v76 = *(float *)&dword_140404A6C[v1 + 280652143] - v8;
        v77 = *(float *)&dword_140404A6C[v1 + 280652144] - v9;
        v19 = 99776LL * (int)dword_140404A6C[5210 * v4 + 129716710] + 12LL * (int)dword_140404A6C[v1 + 280651314];
        v20 = *(float *)((char *)&dword_140404A6C[346732494] + v19);
        v21 = *(float *)((char *)&dword_140404A6C[346732492] + v19);
        v22 = *(float *)((char *)&dword_140404A6C[346732493] + v19) + 0.25;
        v23 = (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716728] * v21)
            + *(float *)&dword_140404A6C[5210 * v4 + 129716722];
        v80 = *(float *)&dword_140404A6C[5210 * v4 + 129716726];
        *(float *)&v24 = (float)((float)((float)(v80 * v21) + *(float *)&dword_140404A6C[5210 * v4 + 129716720])
                               + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716729] * v22))
                       + (float)(*(float *)&dword_140404A6C[5210 * v4 + 129716732] * v20);
        v25 = *(float *)&dword_140404A6C[5210 * v4 + 129716731] * v22;
        *(float *)&v26 = (float)((float)((float)(v21 * *(float *)&dword_140404A6C[v17 + 129716727])
                                       + *(float *)&dword_140404A6C[v17 + 129716721])
                               + (float)(*(float *)&dword_140404A6C[v17 + 129716730] * v22))
                       + (float)(*(float *)&dword_140404A6C[v17 + 129716733] * v20);
        dword_140404A6C[v1 + 280651335] = v24;
        v27 = *(float *)&dword_140404A6C[5210 * v4 + 129716734] * v20;
        dword_140404A6C[v1 + 280651336] = v26;
        *(float *)&v28 = (float)(v23 + v25) + v27;
        dword_140404A6C[v1 + 280651337] = v28;
        v29 = dword_140404A6C[v1 + 280651322];
        if ( v29 <= 0 )
        {
          *(float *)&v30 = v80;
        }
        else
        {
          v30 = dword_140404A6C[v17 + 129716726];
          v31 = (float)((float)v29 * *(float *)((char *)&dword_140404A6C[346732492] + v19)) * 0.03333333507180214;
          *(float *)&v32 = (float)(v31 * *(float *)&dword_140404A6C[v17 + 129716727]) + *(float *)&v26;
          *(float *)&dword_140404A6C[v1 + 280651335] = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          *(float *)&v24 = (float)(*(float *)&v30 * v31) + *(float *)&v24;
          v33 = *(float *)&dword_140404A6C[v17 + 129716728];
          v26 = v32;
          dword_140404A6C[v1 + 280651336] = v32;
          *(float *)&v34 = (float)(v33 * v31) + *(float *)&v28;
          dword_140404A6C[v1 + 280651337] = v34;
          v28 = v34;
        }
        v35 = *(_OWORD *)&dword_140404A6C[v17 + 129716727];
        dword_140404A6C[v1 + 280651440] = v24;
        dword_140404A6C[v1 + 280651441] = v26;
        dword_140404A6C[v1 + 280651442] = v28;
        *(_OWORD *)&dword_140404A6C[v1 + 280651453] = v35;
        v36 = *(_OWORD *)&dword_140404A6C[v17 + 129716731];
        dword_140404A6C[v1 + 280651452] = v30;
        *(_OWORD *)&dword_140404A6C[v1 + 280651457] = v36;
        *(float *)&dword_140404A6C[v1 + 280651518] = v10 + *(float *)&v24;
        *(float *)&dword_140404A6C[v1 + 280651519] = v13 + *(float *)&v26;
        *(float *)&dword_140404A6C[v1 + 280651520] = v16 + *(float *)&v28;
        v37 = *(float *)&dword_140404A6C[v1 + 280651440];
        *(float *)&dword_140404A6C[v1 + 280651596] = v37 + v81;
        v38 = *(float *)&dword_140404A6C[v1 + 280651441];
        *(float *)&dword_140404A6C[v1 + 280651597] = v38 + v82;
        v39 = *(float *)&dword_140404A6C[v1 + 280651442];
        *(float *)&dword_140404A6C[v1 + 280651598] = v39 + v83;
        *(float *)&dword_140404A6C[v1 + 280651674] = v37 + v62;
        *(float *)&dword_140404A6C[v1 + 280651675] = v38 + v63;
        *(float *)&dword_140404A6C[v1 + 280651676] = v39 + v64;
        *(float *)&dword_140404A6C[v1 + 280651752] = v11 + v37;
        *(float *)&dword_140404A6C[v1 + 280651753] = v14 + v38;
        *(float *)&dword_140404A6C[v1 + 280651754] = v18 + v39;
        *(float *)&dword_140404A6C[v1 + 280651830] = v12 + v37;
        *(float *)&dword_140404A6C[v1 + 280651831] = v15 + v38;
        *(float *)&dword_140404A6C[v1 + 280651832] = v65 + v39;
        *(float *)&dword_140404A6C[v1 + 280651908] = v66 + v37;
        *(float *)&dword_140404A6C[v1 + 280651909] = v67 + v38;
        *(float *)&dword_140404A6C[v1 + 280651910] = v68 + v39;
        *(float *)&dword_140404A6C[v1 + 280651986] = v69 + v37;
        *(float *)&dword_140404A6C[v1 + 280651987] = v70 + v38;
        *(float *)&dword_140404A6C[v1 + 280651988] = v71 + v39;
        *(float *)&dword_140404A6C[v1 + 280652064] = v72 + v37;
        *(float *)&dword_140404A6C[v1 + 280652065] = v73 + v38;
        *(float *)&dword_140404A6C[v1 + 280652066] = v74 + v39;
        *(float *)&dword_140404A6C[v1 + 280652142] = v75 + v37;
        *(float *)&dword_140404A6C[v1 + 280652143] = v76 + v38;
        v40 = 10;
        v41 = &dword_140404A6C[282486295];
        v42 = 780;
        v43 = (float *)&dword_140404A6C[v1 + 280652234];
        *(float *)&dword_140404A6C[v1 + 280652144] = v77 + v39;
        do
        {
          v44 = (int)*v41;
          v45 = v1 * 4 + 312 * v44;
          v46 = *(float *)((char *)&dword_140404A6C[280651452] + v45);
          *(v43 - 2) = v46;
          v47 = *(float *)((char *)&dword_140404A6C[280651453] + v45);
          *(v43 - 1) = v47;
          v48 = *(float *)((char *)&dword_140404A6C[280651454] + v45);
          *v43 = v48;
          v49 = *(float *)((char *)&dword_140404A6C[280651455] + v45);
          v43[1] = v49;
          v50 = *(float *)((char *)&dword_140404A6C[280651456] + v45);
          v43[2] = v50;
          v51 = *(float *)((char *)&dword_140404A6C[280651457] + v45);
          v43[3] = v51;
          v52 = *(float *)((char *)&dword_140404A6C[280651458] + v45);
          v43[4] = v52;
          v53 = *(float *)((char *)&dword_140404A6C[280651459] + v45);
          v43[5] = v53;
          v54 = *(float *)((char *)&dword_140404A6C[280651460] + v45);
          v43[6] = v54;
          if ( v40 == 10 || v40 == 13 )
          {
            sub_14007B2A0(
              (__int64)&dword_140404A6C[v3 + 280651452 + v42],
              (float *)&dword_140404A6C[v3 + 280651452 + v42],
              sr_export_float_lane_container(3217625051LL));
            LODWORD(v44) = *v41;
            v48 = *v43;
            v49 = v43[1];
            v46 = *(v43 - 2);
            v47 = *(v43 - 1);
            v50 = v43[2];
            v51 = v43[3];
            v52 = v43[4];
            v53 = v43[5];
            v54 = v43[6];
          }
          v55 = *((float *)v41 + 1);
          ++v40;
          v56 = *((float *)v41 + 2);
          v42 += 78;
          v57 = *((float *)v41 + 3);
          v41 += 25;
          result = (int)v44;
          v58 = v1 * 4 + 312LL * (int)v44;
          v59 = (float)(v46 * v55) + *(float *)((char *)&dword_140404A6C[280651440] + v58);
          *(v43 - 14) = v59;
          v60 = (float)(v47 * v55) + *(float *)((char *)&dword_140404A6C[280651441] + v58);
          *(v43 - 13) = v60;
          v61 = *(float *)((char *)&dword_140404A6C[280651442] + v58);
          *(v43 - 14) = (float)((float)(v49 * v56) + v59) + (float)(v52 * v57);
          *(v43 - 13) = (float)((float)(v50 * v56) + v60) + (float)(v53 * v57);
          *(v43 - 12) = (float)((float)((float)(v48 * v55) + v61) + (float)(v51 * v56)) + (float)(v54 * v57);
          v43 += 78;
        }
        while ( v40 < 16 );
        v2 = v78;
      }
    }
    v3 += 7166;
    v1 += 7166;
    v78 = --v2;
  }
  while ( v2 );
  return result;
}
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
#undef v75
#undef v76
#undef v77
#undef v78
#undef retaddr
#undef v80
#undef v81
#undef v82
#undef v83

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400CA7C0) ----------------------------------------------------
void            sub_1400CA7C0(int a1, int a2, int a3)
{
  extern void world_take_item(int item, int human, int slot);
  /* src/engine/world_items.c */
  world_take_item(a1, a2, a3);
}


//----- (00000001400CF160) ----------------------------------------------------
void sub_1400CF160()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  unsigned int v11; // eax
  float v12; // xmm0_4
  float *v13; // rdx
  __int64 v14; // rax
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm1_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm13_4
  unsigned int v27; // r8d
  float v28; // xmm1_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm2_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm0_4

  v0 = &dword_140404A6C[278845936];
  v1 = 1024;
  v2 = 1024;
  do
  {
    if ( *(v0 - 43) )
    {
      v3 = v0[43];
      if ( v3 > 0 )
        v0[43] = v3 - 1;
      v4 = (int)*(v0 - 34);
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 7166 * v4;
        if ( dword_140404A6C[7166 * v4 + 280651303] )
        {
          if ( (int)*(v0 - 32) >= 2 )
          {
            v6 = *(float *)&dword_140404A6C[v5 + 280651596];
            v7 = -*(float *)&dword_140404A6C[v5 + 280651614];
            v8 = *(float *)&dword_140404A6C[v5 + 280651616];
            v9 = -*(float *)&dword_140404A6C[v5 + 280651615];
            *(v0 - 2) = dword_140404A6C[v5 + 280651608];
            v10 = -v8;
            *(v0 - 1) = dword_140404A6C[v5 + 280651609];
            *v0 = dword_140404A6C[v5 + 280651610];
            v11 = dword_140404A6C[v5 + 280651611];
            *((float *)v0 + 1) = v7;
            *((float *)v0 + 2) = v9;
            *((float *)v0 + 3) = v10;
            v0[4] = v11;
            v0[5] = dword_140404A6C[v5 + 280651612];
            v0[6] = dword_140404A6C[v5 + 280651613];
            *((float *)v0 - 20) = v6 - (float)(v7 * 0.25);
            *((float *)v0 - 19) = *(float *)&dword_140404A6C[v5 + 280651597] - (float)(v9 * 0.25);
            *((float *)v0 - 18) = *(float *)&dword_140404A6C[v5 + 280651598] - (float)(v10 * 0.25);
          }
        }
      }
    }
    v0 += 1760;
    --v2;
  }
  while ( v2 );
  v12 = *(float *)&dword_140404A6C[278571065];
  v13 = (float *)&dword_140404A6C[278845939];
  do
  {
    if ( *((_DWORD *)v13 - 46) )
    {
      v14 = *((int *)v13 - 36);
      if ( (_DWORD)v14 != -1 )
      {
        v15 = *(float *)&dword_140404A6C[1760 * v14 + 278845916];
        *(v13 - 23) = v15;
        v16 = *(float *)&dword_140404A6C[1760 * v14 + 278845917];
        *(v13 - 22) = v16;
        v17 = *(float *)&dword_140404A6C[1760 * v14 + 278845918];
        *(v13 - 21) = v17;
        v18 = *(float *)&dword_140404A6C[1760 * v14 + 278845934];
        *(v13 - 5) = v18;
        v19 = *(float *)&dword_140404A6C[1760 * v14 + 278845935];
        *(v13 - 4) = v19;
        v20 = *(float *)&dword_140404A6C[1760 * v14 + 278845936];
        *(v13 - 3) = v20;
        v21 = *(float *)&dword_140404A6C[1760 * v14 + 278845937];
        *(v13 - 2) = v21;
        v22 = *(float *)&dword_140404A6C[1760 * v14 + 278845938];
        *(v13 - 1) = v22;
        v23 = *(float *)&dword_140404A6C[1760 * v14 + 278845939];
        *v13 = v23;
        v24 = *(float *)&dword_140404A6C[1760 * v14 + 278845940];
        v13[1] = v24;
        v25 = *(float *)&dword_140404A6C[1760 * v14 + 278845941];
        v13[2] = v25;
        v26 = *(float *)&dword_140404A6C[1760 * v14 + 278845942];
        v13[3] = v26;
        v27 = dword_140404A6C[1760 * v14 + 278845898];
        if ( v27 - 15 <= 1 )
        {
          v35 = *((_DWORD *)v13 - 41);
          if ( v35 == 17 )
          {
            v36 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            v37 = (float)(v18 * v36) + v15;
            v38 = (float)(v19 * v36) + v16;
            *(v13 - 23) = v37;
            *(v13 - 22) = v38;
            v39 = (float)(v20 * v36) + v17;
            *(v13 - 21) = v39;
          }
          else
          {
            v37 = v15;
            v38 = v16;
            v39 = v17;
          }
          if ( v35 == 18 )
          {
            v40 = (float)((float)*((int *)v13 - 35) * 0.10546875) - 0.2109375;
            *(v13 - 23) = (float)(v18 * v40) + v37;
            *(v13 - 22) = (float)(v19 * v40) + v38;
            *(v13 - 21) = (float)(v20 * v40) + v39;
          }
        }
        else if ( v27 == 39 )
        {
          v28 = (float)(v21 * v12) + v15;
          v29 = (float)(v22 * v12) + v16;
          v30 = (float)(v23 * v12) + v17;
          *(v13 - 23) = v28;
          *(v13 - 22) = v29;
          *(v13 - 21) = v30;
          v31 = *(float *)&dword_140404A6C[1268 * dword_140404A6C[1760 * v14 + 278845898] + 278521614];
          *(v13 - 23) = (float)(v31 * v24) + v28;
          *(v13 - 22) = (float)(v31 * v25) + v29;
          *(v13 - 21) = (float)(v31 * v26) + v30;
        }
        else
        {
          v32 = v15 - (float)(v21 * 0.0625);
          v33 = v16 - (float)(v22 * 0.0625);
          v34 = v17 - (float)(v23 * 0.0625);
          *(v13 - 23) = v32 - (float)(v24 * 0.0625);
          *(v13 - 22) = v33 - (float)(v25 * 0.0625);
          *(v13 - 21) = v34 - (float)(v26 * 0.0625);
          *(v13 - 23) = v32;
          *(v13 - 22) = v33;
          *(v13 - 21) = v34;
        }
      }
    }
    v12 = *(float *)&dword_140404A6C[278571065];
    v13 += 1760;
    --v1;
  }
  while ( v1 );
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 182AAEB50: using guessed type unsigned int;

//----- (00000001400EE780) ----------------------------------------------------
__int64            sub_1400EE780(signed int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r15
  int v6; // r13d
  unsigned int v7; // eax
  int v8; // edi
  int v9; // edx
  signed int v10; // r8d
  unsigned int v11; // r14d
  int v12; // edx
  signed int v13; // r8d
  unsigned int v14; // r14d
  __int64 v15; // r12
  signed int v16; // eax
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm0_4
  signed int v19; // r14d
  int j; // edi
  int i; // edi
  int v22; // ecx
  unsigned int v23; // r13d
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm0_4
  signed int v26; // r12d
  int v27; // edi
  unsigned int v28; // eax
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // r14d
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 k; // rsi
  int v37; // ecx
  __int64 v38; // rdi
  unsigned int *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rbp
  unsigned int v44; // esi
  unsigned int v45; // eax
  __int64 v46; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EE780[640];
#define v48 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 0)) /* [rsp+0h] */
#define v49 (*(int (*))(void *)(sr_frame_1400EE780 + 32)) /* [rsp+20h] */
#define v50 (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 40)) /* [rsp+28h] */
#define v51 (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 44)) /* [rsp+2Ch] */
#define v52 (*(unsigned int (*))(void *)(sr_frame_1400EE780 + 48)) /* [rsp+30h] */
#define v53 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 56)) /* [rsp+38h] */
#define v54 (*(__int128 (*))(void *)(sr_frame_1400EE780 + 64)) /* [rsp+40h] */
#define v55 (*(__int128 (*))(void *)(sr_frame_1400EE780 + 80)) /* [rsp+50h] */
#define v56 (*(int (*))(void *)(sr_frame_1400EE780 + 96)) /* [rsp+60h] */
#define Src (*(__m128i (*)[32])(void *)(sr_frame_1400EE780 + 112)) /* [rsp+70h] */
#define v58 (*(__int64 (*))(void *)(sr_frame_1400EE780 + 624)) /* [rsp+270h] */

  v3 = 3597LL * a1;
  v4 = (unsigned __int8)a2;
  v49 = a2 >> 16;
  v5 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v5 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v6 = dword_140404A6C[v3 + 71856286];
  LODWORD(v53) = v6;
  switch ( (unsigned __int8)a2 )
  {
    case 0x80u:
      dword_140404A6C[v3 + 71856342] = 14;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x81u:
      dword_140404A6C[v3 + 71856342] = 15;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x82u:
      dword_140404A6C[v3 + 71856342] = 16;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x83u:
      dword_140404A6C[v3 + 71856342] = 17;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x84u:
      dword_140404A6C[v3 + 71856342] = 18;
      return 0; /* compatibility result discarded by all reviewed callers */
    case 0x85u:
      dword_140404A6C[v3 + 71856342] = 19;
      return 0; /* compatibility result discarded by all reviewed callers */
  }
  v7 = dword_140404A6C[v3 + 71856342];
  if ( v7 == 14 )
  {
    v8 = 11;
    if ( (_BYTE)a2 )
      v8 = -1;
    switch ( (unsigned __int8)a2 )
    {
      case 1u:
        v8 = 7;
        break;
      case 2u:
        v8 = 1;
        break;
      case 3u:
        v8 = 3;
        break;
      case 4u:
        v8 = 9;
        break;
      default:
        if ( v8 == -1 )
          goto LABEL_84;
        break;
    }
    goto LABEL_70;
  }
  if ( v7 == 15 )
  {
    if ( (_BYTE)a2 )
    {
      switch ( (unsigned __int8)a2 )
      {
        case 1u:
          v8 = 8;
          break;
        case 2u:
          v8 = 2;
          break;
        case 3u:
          v8 = 4;
          break;
        case 4u:
          v8 = 10;
          break;
        default:
          goto LABEL_84;
      }
    }
    else
    {
      v8 = 12;
    }
    goto LABEL_70;
  }
  if ( v7 != 16 )
    goto LABEL_84;
  v49 = 0;
  if ( !(_BYTE)a2 )
  {
    v8 = 14;
LABEL_70:
    if ( (int)dword_140404A6C[v3 + 71856279] < 10 )
    {
      v15 = 1268LL * v8;
      v16 = dword_140404A6C[v15 + 278521286];
      if ( (int)dword_140404A6C[v3 + 71856272] >= v16 || !v16 )
      {
        v56 = 1065353216;
        v17 = dword_140404A6C[7166 * v5 + 280651336];
        v50 = dword_140404A6C[7166 * v5 + 280651335];
        v18 = dword_140404A6C[7166 * v5 + 280651337];
        v51 = v17;
        v52 = v18;
        v54 = xmmword_140278D30;
        v55 = xmmword_140278D30;
        v19 = sr_CreateItem(v8, (float *)&v50, nullptr, (float *)&v54);
        if ( v8 == 15 )
        {
          for ( i = 0; i < 2; ++i )
          {
            if ( (unsigned int)sub_1400E35D0(v19, -1, v5, i) )
              break;
          }
        }
        else
        {
          for ( j = 2; j < 7; ++j )
          {
            if ( (unsigned int)sub_1400E35D0(v19, -1, v5, j) )
              break;
          }
        }
        dword_140404A6C[v3 + 71856272] -= dword_140404A6C[v15 + 278521286];
        if ( dword_140404A6C[283831312] == 3 )
          sub_140051F50(a1);
        ++dword_140404A6C[v3 + 71856279];
      }
    }
    goto LABEL_84;
  }
  if ( (unsigned __int8)a2 == 6 )
  {
    v8 = 13;
    goto LABEL_70;
  }
  if ( (unsigned __int8)a2 == 7 )
  {
    v8 = 15;
    goto LABEL_70;
  }
  if ( (unsigned int)(unsigned __int8)a2 - 1 <= 2 )
  {
    v9 = 5000;
    if ( (_DWORD)v4 != 1 )
      v9 = 1000;
    if ( (_DWORD)v4 == 2 )
    {
      v9 = 20000;
    }
    else if ( (_DWORD)v4 == 3 )
    {
      v9 = 100000;
    }
    v10 = dword_140404A6C[v3 + 71856272];
    if ( v10 >= v9 )
    {
      v11 = 3;
      if ( (_DWORD)v4 != 1 )
        v11 = 0;
      if ( (_DWORD)v4 == 2 )
      {
        v11 = 8;
      }
      else if ( (_DWORD)v4 == 3 )
      {
        v11 = 7;
      }
      ++dword_140404A6C[v5 + 282485789];
      v49 = v11;
      dword_140404A6C[v3 + 71859822] = v11;
      dword_140404A6C[v3 + 71856272] = v10 - v9;
      dword_140404A6C[7166 * v5 + 280658446] = v11;
      sub_140051DC0(a1);
    }
  }
  if ( (unsigned int)(v4 - 4) <= 1 )
  {
    v12 = 10000;
    if ( (_DWORD)v4 != 4 )
      v12 = 1000;
    v13 = dword_140404A6C[v3 + 71856272];
    if ( (_DWORD)v4 == 5 )
      v12 = 1000000;
    if ( v13 >= v12 )
    {
      if ( (_DWORD)v4 == 4 )
        v14 = 1;
      else
        v14 = 2;
      ++dword_140404A6C[v5 + 282485789];
      v49 = v14;
      dword_140404A6C[v3 + 71859826] = v14;
      dword_140404A6C[v3 + 71856272] = v13 - v12;
      dword_140404A6C[7166 * v5 + 280658449] = v14;
      sub_140051DC0(a1);
    }
  }
LABEL_84:
  if ( dword_140404A6C[v3 + 71856342] == 17 && (unsigned int)v4 < 8 )
  {
    if ( dword_140404A6C[4 * v4 + 335047158] )
    {
      if ( (int)dword_140404A6C[v3 + 71856272] >= (int)dword_140404A6C[4 * v4 + 335047161]
        && (unsigned int)v6 <= 5
        && sub_14011B8F0((float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v5 + 1126818696), v6, 0.0) )
      {
        v22 = dword_140404A6C[4 * v4 + 335047159];
        if ( v22 != -1 )
        {
          v23 = sub_1400F00D0(v22, v6, dword_140404A6C[4 * v4 + 335047160]);
          if ( v23 != -1 )
          {
            v24 = *(_DWORD *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + 28664 * v5 + 1126818696);
            v50 = *(_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 28664 * v5 + 1126818696);
            v25 = *(_DWORD *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + 28664 * v5 + 1126818696);
            v51 = v24;
            v52 = v25;
            v56 = 1065353216;
            v54 = xmmword_140278D30;
            v55 = xmmword_140278D30;
            v26 = sr_CreateItem(27, (float *)&v50, nullptr, (float *)&v54);
            v27 = 2;
            dword_140404A6C[1760 * v26 + 278846053] = v23;
            do
            {
              if ( (unsigned int)sub_1400E35D0(v26, -1, v5, v27) )
                break;
              ++v27;
            }
            while ( v27 < 7 );
            dword_140404A6C[v3 + 71856272] -= dword_140404A6C[4 * v4 + 335047161];
            sub_140051F50(a1);
            dword_140404A6C[4 * v4 + 335047158] = 0;
          }
          v6 = v53;
        }
      }
    }
  }
  v28 = dword_140404A6C[v3 + 71856342];
  if ( v28 != 18 )
    goto LABEL_116;
  if ( (_DWORD)v4 )
  {
    switch ( (_DWORD)v4 )
    {
      case 1:
        sub_1401189F0(a1, 10);
        break;
      case 2:
        sub_1401189F0(a1, 100);
        break;
      case 3:
        sub_1401189F0(a1, 1000);
        break;
      default:
        switch ( (_DWORD)v4 )
        {
          case 4:
            v29 = 1;
            break;
          case 5:
            v29 = 10;
            break;
          case 6:
            v29 = 100;
            break;
          case 7:
            v29 = 1000;
            break;
          default:
            goto LABEL_115;
        }
        sub_14011AF80(a1, v29);
        break;
    }
  }
  else
  {
    sub_1401189F0(a1, 1);
  }
LABEL_115:
  sub_140051F50(a1);
  v28 = dword_140404A6C[v3 + 71856342];
LABEL_116:
  if ( v28 == 19 && (unsigned int)v6 <= 5 )
  {
    v30 = v6;
    v31 = 5873LL * v6;
    v53 = v6;
    if ( dword_140404A6C[v31 + 283831510] == a1
      && sub_14011B8F0((float *)&dword_140404A6C[7166 * v5 + 280651335], v6, 0.0)
      && (_DWORD)v4 == 6 )
    {
      v32 = (int)dword_140404A6C[v31 + 283837164];
      if ( (int)v32 < 128 )
      {
        v33 = v49;
        if ( v49 != a1 )
        {
          v34 = 3597LL * v49;
          if ( dword_140404A6C[v34 + 71856286] == v6 )
          {
            v35 = (int)dword_140404A6C[v34 + 71856292];
            dword_140404A6C[5873 * v6 + 283837165 + v32] = dword_140404A6C[v34 + 71856268];
            ++dword_140404A6C[v31 + 283837164];
            if ( (_DWORD)v35 != -1 )
            {
              for ( k = 0; k < 80; k += 10 )
              {
                v37 = dword_140404A6C[7166 * v35 + 280658139 + k];
                if ( v37 > 0 )
                {
                  v38 = (unsigned int)v37;
                  v39 = &dword_140404A6C[7166 * (int)dword_140404A6C[v34 + 71856292] + 280658140 + k];
                  do
                  {
                    v40 = (int)*v39;
                    if ( (unsigned int)v40 <= 0x3FF )
                    {
                      v41 = 1760 * v40;
                      v42 = (int)dword_140404A6C[1760 * v40 + 278845898];
                      if ( dword_140404A6C[1268 * v42 + 278521289]
                        || (int)dword_140404A6C[1268 * v42 + 278521294] > 0
                        || (unsigned int)(v42 - 13) <= 1
                        || (_DWORD)v42 == 27 )
                      {
                        dword_140404A6C[v41 + 278845900] = 0;
                        if ( (int)dword_140404A6C[v41 + 278845906] > 0 )
                        {
                          dword_140404A6C[1760 * dword_140404A6C[v41 + 278845907] + 278845900] = 0;
                          sub_1400CA9B0(dword_140404A6C[v41 + 278845907], v40);
                        }
                      }
                    }
                    ++v39;
                    --v38;
                  }
                  while ( v38 );
                }
              }
              sub_14007F590(dword_140404A6C[v34 + 71856292]);
              v30 = v53;
            }
            sub_14011AF80(v33, dword_140404A6C[v34 + 71856288]);
            dword_140404A6C[v34 + 71856286] = 17;
            dword_140404A6C[v34 + 71856289] = 0;
            sub_140051DC0(v33);
            sub_140051F50(v33);
            sub_140158AB0(
              Src,
              "%s has been fired from %s",
              (     char *)&dword_140404A6C[v34 + 71856254],
              off_1402B2890[v30]);
            if ( dword_140404A6C[456202453] )
            {
              v43 = -1;
              do
                ++v43;
              while ( SR_VEC_LANES(128, Src[0], i8)[v43] );
              v44 = dword_140404A6C[308307070];
              if ( (int)v43 > 63 )
                LODWORD(v43) = 63;
              v45 = dword_140404A6C[283831474];
              v46 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v46) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v46) = v45;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v46), Src, (int)v43);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v43 + v46) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v46) = v43;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v46) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v46) = -1;
              dword_140404A6C[308307070] = v44 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v46) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
          }
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef Src
#undef v58

// 1400EE8C9: conditional instruction was optimized away because eax.4==10
// 1400EE912: conditional instruction was optimized away because eax.4==10
// 1400EEA2B: conditional instruction was optimized away because ebx.4==5
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2890: using guessed type char *off_1402B2890[17];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400EF0D0) ----------------------------------------------------
void            sub_1400EF0D0(int a1, int a2, int a3)
{
  int v3; // r14d
  __int64 v4; // r15
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // r13
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  int v13; // ecx
  float v14; // xmm1_4
  int v15; // edx
  int v16; // eax
  float v17; // xmm1_4
  int v18; // edx
  int v19; // ecx
  float v20; // xmm1_4
  int v21; // edx
  int v22; // eax
  float v23; // xmm1_4
  int v24; // ecx
  int v25; // ebp
  float v26; // xmm0_4
  unsigned int v27; // ecx
  __int64 v28; // r12
  int v29; // ebx
  unsigned int *v30; // rbx
  int v31; // esi
  int v32; // ebx
  unsigned int v33; // xmm1_4
  unsigned int v34; // xmm0_4
  signed int v35; // eax
  signed int v36; // r13d
  __int64 v37; // rdx
  int i; // ebp
  unsigned int v39; // edx
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rbp
  int v43; // r15d
  signed int v44; // esi
  __int64 v45; // rdx
  BOOL v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // xmm1_4
  unsigned int v50; // xmm0_4
  signed int v51; // eax
  __int64 v52; // r10
  __int64 v53; // r12
  int v54; // ebx
  unsigned int *v55; // rsi
  __int64 v56; // r8
  __int64 v57; // rdx
  unsigned int *v58; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EF0D0[176];
#define v59 (*(__int64 (*))(void *)(sr_frame_1400EF0D0 + 0)) /* [rsp+20h] */
#define v60 (*(__int64 (*))(void *)(sr_frame_1400EF0D0 + 8)) /* [rsp+28h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 16)) /* [rsp+30h] */
#define v62 (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 20)) /* [rsp+34h] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_1400EF0D0 + 24)) /* [rsp+38h] */
#define v64 (*(__int128 (*))(void *)(sr_frame_1400EF0D0 + 32)) /* [rsp+40h] */
#define v65 (*(__int128 (*))(void *)(sr_frame_1400EF0D0 + 48)) /* [rsp+50h] */
#define v66 (*(int (*))(void *)(sr_frame_1400EF0D0 + 64)) /* [rsp+60h] */
#define v68 (*(int (*))(void *)(sr_frame_1400EF0D0 + 168)) /* [rsp+C8h] */

  v3 = a1;
  v4 = 3597LL * a1;
  v7 = (int)dword_140404A6C[v4 + 71856292];
  v68 = v7;
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 0;
    v9 = 7166 * v7;
    v59 = (int)dword_140404A6C[v4 + 71856292];
    v10 = *(float *)&dword_140404A6C[7166 * v7 + 280651335];
    if ( v10 < *(float *)&dword_140404A6C[283831485]
      || v10 >= *(float *)&dword_140404A6C[283831488]
      || (v11 = *(float *)&dword_140404A6C[7166 * v7 + 280651337], v11 < *(float *)&dword_140404A6C[283831487])
      || (v12 = 1, v11 >= *(float *)&dword_140404A6C[283831490]) )
    {
      v12 = 0;
    }
    v13 = 0;
    if ( !v12 )
      v13 = -1;
    if ( v10 < *(float *)&dword_140404A6C[283837358]
      || v10 >= *(float *)&dword_140404A6C[283837361]
      || (v14 = *(float *)&dword_140404A6C[v9 + 280651337], v14 < *(float *)&dword_140404A6C[283837360])
      || (v15 = 1, v14 >= *(float *)&dword_140404A6C[283837363]) )
    {
      v15 = 0;
    }
    v16 = 1;
    if ( !v15 )
      v16 = v13;
    if ( v10 < *(float *)&dword_140404A6C[283843231]
      || v10 >= *(float *)&dword_140404A6C[283843234]
      || (v17 = *(float *)&dword_140404A6C[v9 + 280651337], v17 < *(float *)&dword_140404A6C[283843233])
      || (v18 = 1, v17 >= *(float *)&dword_140404A6C[283843236]) )
    {
      v18 = 0;
    }
    v19 = 2;
    if ( !v18 )
      v19 = v16;
    if ( v10 < *(float *)&dword_140404A6C[283849104]
      || v10 >= *(float *)&dword_140404A6C[283849107]
      || (v20 = *(float *)&dword_140404A6C[v9 + 280651337], v20 < *(float *)&dword_140404A6C[283849106])
      || (v21 = 1, v20 >= *(float *)&dword_140404A6C[283849109]) )
    {
      v21 = 0;
    }
    v22 = 3;
    if ( !v21 )
      v22 = v19;
    if ( v10 < *(float *)&dword_140404A6C[283854977]
      || v10 >= *(float *)&dword_140404A6C[283854980]
      || (v23 = *(float *)&dword_140404A6C[v9 + 280651337], v23 < *(float *)&dword_140404A6C[283854979])
      || (v24 = 1, v23 >= *(float *)&dword_140404A6C[283854982]) )
    {
      v24 = 0;
    }
    v25 = 4;
    if ( !v24 )
      v25 = v22;
    if ( v10 >= *(float *)&dword_140404A6C[283860850] && v10 < *(float *)&dword_140404A6C[283860853] )
    {
      v26 = *(float *)&dword_140404A6C[v9 + 280651337];
      if ( v26 >= *(float *)&dword_140404A6C[283860852] && v26 < *(float *)&dword_140404A6C[283860855] )
        v25 = 5;
    }
    if ( v25 != -1 )
    {
      if ( (unsigned int)(a2 - 21) <= 5 && (a3 & 0x1000000) != 0 )
      {
        if ( (_BYTE)a3 )
        {
          switch ( (unsigned __int8)a3 )
          {
            case 1u:
              dword_140404A6C[v4 + 71856342] = 22;
              break;
            case 2u:
              dword_140404A6C[v4 + 71856342] = 23;
              break;
            case 3u:
              dword_140404A6C[v4 + 71856342] = 24;
              break;
            case 4u:
              dword_140404A6C[v4 + 71856342] = 25;
              break;
          }
        }
        else
        {
          dword_140404A6C[v4 + 71856342] = 21;
        }
        return;
      }
      if ( a2 == 24 && dword_140404A6C[v4 + 71856286] == v25 && !a3 )
      {
        sub_140138430(v3, 17);
        sub_140051DC0(v3);
      }
      v27 = dword_140404A6C[v4 + 71856286];
      v28 = v25;
      if ( v27 == v25 && dword_140404A6C[5873 * v25 + 283831510] == v3 )
      {
        if ( a2 == 22 )
        {
          v29 = a3 >> 16;
          if ( (_BYTE)a3 == 3 )
          {
            sub_140138430(v29, v25);
            sub_140051DC0(v29);
            sub_1400F3B30(v29);
            v30 = &dword_140404A6C[5873 * v25 + 283831588];
            do
            {
              if ( *v30 )
                sub_140051BD0(v25, v8);
              ++v8;
              v30 += 279;
            }
            while ( v8 < 16 );
          }
          return;
        }
        if ( a2 == 23 )
        {
          v31 = a3 >> 16;
          if ( v31 != v3 && dword_140404A6C[3597 * v31 + 71856286] == v25 )
          {
            sub_140138430(v31, 17);
            sub_140051DC0(v31);
          }
          return;
        }
      }
      if ( a2 == 25 )
      {
        if ( v27 != v25 )
          return;
        v60 = 5873LL * v25;
        if ( dword_140404A6C[v60 + 283831510] == -1 )
          return;
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v32 = 15;
          }
          else if ( a3 == 6 )
          {
            v32 = 26;
          }
          else
          {
            if ( (unsigned int)(a3 - 7) > 5 )
            {
LABEL_111:
              if ( a3 == 2 && (int)dword_140404A6C[7166 * v59 + 280658139] > 0 )
              {
                v41 = (int)dword_140404A6C[7166 * v59 + 280658140];
                v42 = 1760 * v41;
                if ( dword_140404A6C[1760 * v41 + 278845898] == 18 )
                {
                  dword_140404A6C[5 * v28 + 188872237] += sub_1400C3D10(v41);
                  dword_140404A6C[v42 + 278845900] = 0;
                }
              }
              if ( dword_140404A6C[v60 + 283831510] == v3 && (unsigned int)(a3 - 3) <= 2 )
              {
                if ( a3 == 4 )
                {
                  v43 = 5;
                }
                else
                {
                  v43 = 3;
                  if ( a3 == 5 )
                    v43 = 6;
                }
                v44 = dword_140404A6C[5 * v28 + 188872237] - dword_1402B2960[v43];
                if ( v44 >= (signed int)-dword_140404A6C[5 * v28 + 188872238] )
                {
                  v45 = 7166 * v59;
                  v46 = 0;
                  if ( (int)dword_140404A6C[7166 * v59 + 280658139] > 0 )
                    v46 = dword_140404A6C[1760 * dword_140404A6C[v45 + 280658140] + 278845898] != 18;
                  v47 = v45 * 4 + 40LL * v46;
                  if ( *(int *)((char *)&dword_140404A6C[280658139] + v47) <= 0 )
                  {
                    v49 = dword_140404A6C[v45 + 280651336];
                    v61 = dword_140404A6C[v45 + 280651335];
                    v50 = dword_140404A6C[v45 + 280651337];
                    v62 = v49;
                    v63 = v50;
                    v64 = xmmword_140278D30;
                    v66 = 1065353216;
                    v65 = xmmword_140278D30;
                    v51 = sr_CreateItem(18, (float *)&v61, nullptr, (float *)&v64);
                    v52 = 1760LL * v51;
                    dword_140404A6C[v52 + 278846062] = 0;
                    dword_140404A6C[v52 + 278846063] = v43;
                    sub_1400E35D0(v51, -1, v68, v46);
                    dword_140404A6C[5 * v28 + 188872237] -= dword_1402B2960[v43];
                  }
                  else
                  {
                    v48 = *(int *)((char *)&dword_140404A6C[280658140] + v47);
                    if ( dword_140404A6C[1760 * v48 + 278845898] == 18 && (unsigned int)sub_1400C3AB0(v48, 0, v43) )
                      dword_140404A6C[5 * v28 + 188872237] = v44;
                  }
                }
              }
              return;
            }
            switch ( a3 )
            {
              case 7:
                v32 = 11;
                break;
              case 8:
                v32 = 12;
                break;
              case 9:
                v32 = 7;
                break;
              case 10:
                v32 = 8;
                break;
              case 11:
                v32 = 14;
                break;
              default:
                v32 = 25;
                break;
            }
          }
        }
        else
        {
          v32 = 19;
        }
        if ( (int)dword_140404A6C[v4 + 71856279] < 10 )
        {
          if ( v32 == 25 )
            sub_1400F3D10(v25);
          v33 = dword_140404A6C[v9 + 280651336];
          v61 = dword_140404A6C[v9 + 280651335];
          v34 = dword_140404A6C[v9 + 280651337];
          v62 = v33;
          v63 = v34;
          v64 = xmmword_140278D30;
          v66 = 1065353216;
          v65 = xmmword_140278D30;
          v35 = sr_CreateItem(v32, (float *)&v61, nullptr, (float *)&v64);
          v36 = v35;
          if ( v35 != -1 )
          {
            switch ( v32 )
            {
              case 19:
                dword_140404A6C[1760 * v35 + 278846098] = sub_140050EF0(0x168u);
                break;
              case 26:
                dword_140404A6C[1760 * v35 + 278846111] = v25;
                break;
              case 25:
                v37 = 1760LL * v35;
                dword_140404A6C[v37 + 278846051] = 0;
                dword_140404A6C[v37 + 278845981] = 1111 * (v25 + 1);
                sub_140051940(v35);
                break;
            }
            for ( i = 0; i < 7; ++i )
            {
              if ( (unsigned int)sub_1400E35D0(v36, -1, v68, i) )
                break;
            }
            v39 = dword_140404A6C[5 * v28 + 188872237];
            if ( v32 == 25 )
              v40 = v39 - 100;
            else
              v40 = v39 - dword_140404A6C[1268 * v32 + 278521286];
            ++dword_140404A6C[v4 + 71856279];
            v3 = a1;
            dword_140404A6C[5 * v28 + 188872237] = v40;
          }
        }
        goto LABEL_111;
      }
      if ( a2 == 20 )
      {
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            v56 = 5873LL * v25;
            if ( dword_140404A6C[v56 + 283831510] != -1 )
            {
              v57 = (int)dword_140404A6C[v56 + 283837293];
              if ( (int)v57 <= 0 )
              {
LABEL_143:
                if ( (int)v57 < 32 )
                {
                  dword_140404A6C[5873 * v25 + 283837294 + v57] = v3;
                  ++dword_140404A6C[v56 + 283837293];
                }
              }
              else
              {
                v58 = &dword_140404A6C[v56 + 283837294];
                while ( *v58 != v3 )
                {
                  ++v8;
                  ++v58;
                  if ( v8 >= (int)v57 )
                    goto LABEL_143;
                }
              }
            }
          }
        }
        else
        {
          v53 = 5873LL * v25;
          if ( dword_140404A6C[v53 + 283831510] == -1 )
          {
            sub_1400F3B30(v3);
            sub_140138430(v3, v25);
            sub_1400F45A0(v25, v3);
            dword_140404A6C[v4 + 71856342] = 25;
            sub_140051DC0(v3);
            v54 = 0;
            v55 = &dword_140404A6C[v53 + 283831588];
            do
            {
              if ( *v55 )
                sub_140051BD0(v25, v54);
              ++v54;
              v55 += 279;
            }
            while ( v54 < 16 );
            dword_140404A6C[v53 + 283837293] = 0;
          }
        }
      }
    }
  }
}
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v68

// 1400EF48A: conditional instruction was optimized away because esi.4 is in (7..C)
// 1400EF496: conditional instruction was optimized away because esi.4 is in (7..C)
// 1400EF4D4: conditional instruction was optimized away because esi.4==C
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2960: using guessed type int dword_1402B2960[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F0640) ----------------------------------------------------
__int64            sub_1400F0640(int a1)
{
  int v1; // esi
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r12
  int v5; // r12d
  int v6; // r13d
  int v7; // ecx
  unsigned int *v8; // r15
  int v9; // esi
  unsigned int *v10; // r14
  unsigned int v11; // eax
  int v12; // esi
  int v13; // esi
  __int64 v14; // rdx
  float *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // r14
  unsigned int *v19; // r13
  char *v20; // r8
  __int64 v21; // rax
  unsigned int *v22; // rdx
  char v23; // al
  __int64 v24; // r13
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  char *v27; // r8
  unsigned int *v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  char *v31; // r8
  unsigned int *v32; // rdx
  char v33; // al
  char *v34; // r8
  unsigned int *v35; // rdx
  char v36; // al
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // eax
  signed int v40; // esi
  int *v41; // r15
       char *v42; // r8
  unsigned int *v43; // rdx
  char v44; // al
  int v45; // r13d
  unsigned int *v46; // rsi
  int v47; // r15d
  int v48; // r14d
       char *v49; // r12
  unsigned int *v50; // rdx
  char v51; // al
  char *v52; // r8
  unsigned int *v53; // rdx
  char v54; // al
  char *v55; // r8
  unsigned int *v56; // rdx
  char v57; // al
  char *v58; // r8
  unsigned int *v59; // rdx
  char v60; // al
  char *v61; // r8
  unsigned int *v62; // rdx
  char v63; // al
  char *v64; // r8
  unsigned int *v65; // rdx
  char v66; // al
  char *v67; // r8
  unsigned int *v68; // rdx
  char v69; // al
  char *v70; // r8
  unsigned int *v71; // rdx
  char v72; // al
  char *v73; // r8
  unsigned int *v74; // rdx
  char v75; // al
  char *v76; // r8
  unsigned int *v77; // rdx
  char v78; // al
  int v79; // r15d
  char *v80; // r8
  unsigned int *v81; // rdx
  char v82; // al
  char *v83; // r8
  unsigned int *v84; // rdx
  char v85; // al
  char *v86; // r8
  unsigned int *v87; // rdx
  char v88; // al
  char *v89; // r8
  unsigned int *v90; // rdx
  char v91; // al
  unsigned int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  unsigned int *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  float *v99; // rdx
  __int64 v100; // rcx
  float v101; // xmm0_4
  __int64 v102; // rdx
  unsigned int v103; // eax
  unsigned int *v104; // r10
  int v105; // r11d
  __int64 v106; // rcx
  char *v107; // rdx
  char *v108; // r8
  char v109; // cl
  _WORD *v110; // rcx
  bool v111; // zf
  char *v112; // rdx
  char *v113; // r9
  unsigned int *v114; // r8
  char v115; // cl
  __int64 v116; // rcx
  int v117; // eax
       char *v118; // rcx
  char *v119; // r8
  unsigned int *v120; // rdx
  char v121; // al
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F0640[592];
#define v123 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 0)) /* [rsp+8h] */
#define v124 (*(int (*))(void *)(sr_frame_1400F0640 + 32)) /* [rsp+28h] */
#define v125 (*(unsigned int (*))(void *)(sr_frame_1400F0640 + 36)) /* [rsp+2Ch] */
#define v126 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 40)) /* [rsp+30h] */
#define v127 (*(unsigned int * (*))(void *)(sr_frame_1400F0640 + 48)) /* [rsp+38h] */
#define v128 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 56)) /* [rsp+40h] */
#define v129 (*(char (*)[512])(void *)(sr_frame_1400F0640 + 64)) /* [rsp+48h] */
#define v130 (*(__int64 (*))(void *)(sr_frame_1400F0640 + 576)) /* [rsp+248h] */

  v1 = a1;
  v2 = 3597LL * a1;
  v124 = a1;
  v3 = 0;
  v4 = (int)dword_140404A6C[v2 + 71856292];
  dword_140404A6C[v2 + 71857986] = 0;
  if ( (unsigned int)v4 > 0xFF )
    return 0; /* compatibility result discarded by all reviewed callers */
  if ( dword_140404A6C[283831448] == 3 )
  {
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 0;
    goto LABEL_34;
  }
  v6 = dword_140404A6C[225641186];
  v125 = dword_140404A6C[v2 + 71856342];
  if ( v125 - 9 <= 2 )
  {
    v7 = dword_140404A6C[v2 + 71856343];
    if ( v7 < 0 || v7 >= (int)dword_140404A6C[225641186] )
    {
      dword_140404A6C[v2 + 71856342] = 0;
    }
    else
    {
      if ( sub_14011B9F0(v7, (float *)&dword_140404A6C[7166 * v4 + 280651335], 0.0) )
        goto LABEL_11;
      dword_140404A6C[v2 + 71856342] = 0;
    }
    v125 = 0;
  }
LABEL_11:
  v8 = &dword_140404A6C[225641203];
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = &dword_140404A6C[225641203];
    do
    {
      v11 = *v10;
      if ( *v10 == 3 )
      {
        if ( sub_14011B9F0(v9, (float *)&dword_140404A6C[7166 * v4 + 280651335], 0.0) )
        {
          if ( v125 )
            goto LABEL_107;
          v5 = 0;
          dword_140404A6C[v2 + 71856342] = 9;
          dword_140404A6C[v2 + 71856343] = v9;
          goto LABEL_33;
        }
      }
      else if ( (v11 == 5 || v11 - 8 <= 1) && sub_14011B9F0(v9, (float *)&dword_140404A6C[7166 * v4 + 280651335], 0.0) )
      {
        if ( v125 )
          goto LABEL_107;
        v5 = 0;
        dword_140404A6C[v2 + 71856342] = 10;
        dword_140404A6C[v2 + 71856343] = v9;
        goto LABEL_33;
      }
      ++v9;
      v10 += 14019;
    }
    while ( v9 < v6 );
  }
  v12 = 0;
  if ( v6 <= 0 )
  {
LABEL_25:
    if ( dword_140404A6C[283831312] != 4 )
    {
      if ( ((dword_140404A6C[283831312] - 3) & 0xFFFFFFFB) != 0
        || (v98 = (int)dword_140404A6C[v2 + 71856286], (unsigned int)v98 > 5)
        || (v99 = (float *)&dword_140404A6C[7166 * v4 + 280651335],
            v100 = 5873 * v98,
            *v99 < *(float *)&dword_140404A6C[5873 * v98 + 283831485])
        || *v99 >= *(float *)&dword_140404A6C[v100 + 283831488]
        || (v101 = v99[2], v101 < *(float *)&dword_140404A6C[v100 + 283831487])
        || v101 >= *(float *)&dword_140404A6C[v100 + 283831490] )
      {
LABEL_32:
        v5 = 0;
        dword_140404A6C[v2 + 71856342] = 0;
        goto LABEL_33;
      }
      v1 = v124;
      v5 = 0;
      if ( !v125 )
        dword_140404A6C[v2 + 71856342] = 14;
      goto LABEL_34;
    }
    v13 = 0;
    v14 = 0;
    v15 = (float *)&dword_140404A6C[283831488];
    v16 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
    while ( 1 )
    {
      if ( v16 >= *(v15 - 3) && v16 < *v15 )
      {
        v17 = *(float *)&dword_140404A6C[7166 * v4 + 280651337];
        if ( v17 >= *(v15 - 1) && v17 < v15[2] )
          break;
      }
      ++v13;
      ++v14;
      v15 += 5873;
      if ( (__int64)v15 >= (__int64)&dword_140404A6C[283866726] )
        goto LABEL_32;
    }
    v92 = dword_140404A6C[v2 + 71856286];
    if ( v92 != 17 )
    {
      if ( dword_140404A6C[5873 * v13 + 283831510] != -1 )
      {
        if ( v92 == v13 && v125 == 20 )
          dword_140404A6C[v2 + 71856342] = 25;
        goto LABEL_111;
      }
      if ( v92 != v13 )
      {
LABEL_111:
        v5 = 0;
        goto LABEL_112;
      }
    }
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 20;
    if ( dword_140404A6C[5873 * v13 + 283831510] == -1 )
    {
      dword_140404A6C[v2 + 71857987] = 0;
      v93 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(_QWORD *)((char *)&dword_140404A6C[71857988] + v93) = 0x614D20796C707041LL;
      *(unsigned int *)((char *)&dword_140404A6C[71857990] + v93) = 1701273966;
      *(_WORD *)((char *)&dword_140404A6C[71857991] + v93) = 114;
    }
    else
    {
      v94 = (int)dword_140404A6C[5873 * v13 + 283837293];
      if ( v94 > 0 )
      {
        v95 = 0;
        v96 = &dword_140404A6C[5873 * v14 + 283837294];
        while ( *v96 != v124 )
        {
          ++v95;
          ++v96;
          if ( v95 >= v94 )
            goto LABEL_125;
        }
        goto LABEL_112;
      }
LABEL_125:
      sub_1400F3B30(v124);
      dword_140404A6C[v2 + 71857987] = 1;
      v97 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(unsigned int *)((char *)&dword_140404A6C[71857988] + v97) = 1819308097;
      *(_WORD *)((char *)&dword_140404A6C[71857989] + v97) = 121;
    }
    v3 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v3;
LABEL_112:
    if ( dword_140404A6C[v2 + 71856286] == v13 && !dword_140404A6C[v2 + 71856342] )
      dword_140404A6C[v2 + 71856342] = 25;
    goto LABEL_33;
  }
  while ( *v8 != 6 || !sub_14011B9F0(v12, (float *)&dword_140404A6C[7166 * v4 + 280651335], 0.0) )
  {
    ++v12;
    v8 += 14019;
    if ( v12 >= v6 )
      goto LABEL_25;
  }
  if ( v125 )
  {
LABEL_107:
    v5 = 0;
  }
  else
  {
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 13;
    dword_140404A6C[v2 + 71856343] = v12;
  }
LABEL_33:
  v1 = v124;
LABEL_34:
  v18 = (int)dword_140404A6C[v2 + 71856286];
  v19 = &dword_140404A6C[71859139];
  LODWORD(v126) = dword_140404A6C[v2 + 71856286];
  v127 = &dword_140404A6C[71856254];
  v125 = 6;
  if ( dword_140404A6C[283831312] != 4 )
  {
    v79 = v124;
LABEL_140:
    if ( (_DWORD)v18 != -1 )
    {
      v103 = dword_140404A6C[v2 + 71856342];
      if ( v103 == 17 )
      {
        v104 = &dword_140404A6C[335047160];
        v105 = 0;
        do
        {
          if ( *(v104 - 2) )
          {
            v106 = (int)*v104;
            if ( (int)v106 >= 6 )
            {
              v129[0] = 0;
            }
            else
            {
              v107 = off_1402B23E0[v106];
              v108 = (char *)(v129 - v107);
              do
              {
                v109 = *v107;
                v108[(_QWORD)v107] = *v107;
                ++v107;
              }
              while ( v109 );
            }
            v110 = (_WORD *)((char *)&v128 + 7);
            do
            {
              v111 = *((_BYTE *)v110 + 1) == 0;
              v110 = (_WORD *)((char *)v110 + 1);
            }
            while ( !v111 );
            *v110 = 32;
            v112 = (char *)&v128 + 7;
            do
              v111 = *++v112 == 0;
            while ( !v111 );
            strcpy(v112, (     char *)&dword_140404A6C[24944 * *(v104 - 1) + 346707722]);
            v113 = v129;
            dword_140404A6C[18 * (int)v3 + 71857987 + v2] = v105;
            v114 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v115 = *v113++;
              *(_BYTE *)v114 = v115;
              v114 = (unsigned int *)((char *)v114 + 1);
            }
            while ( v115 );
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71858004 + v2] = v104[1];
          }
          else
          {
            dword_140404A6C[18 * (int)v3 + 71857987 + v2] = 8;
            v116 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
            *(unsigned int *)((char *)&dword_140404A6C[71857988] + v116) = 1145851731;
            *((_BYTE *)&dword_140404A6C[71857989] + v116) = 0;
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71858004 + v2] = 0;
          }
          ++v105;
          v3 = dword_140404A6C[v2 + 71857986] + 1;
          v104 += 4;
          dword_140404A6C[v2 + 71857986] = v3;
        }
        while ( v105 < 8 );
        v103 = dword_140404A6C[v2 + 71856342];
        v79 = v124;
      }
      if ( v103 == 19 && dword_140404A6C[v2 + 71856289] )
      {
        v117 = 6;
        v118 = (     char *)&dword_140404A6C[71856254];
        do
        {
          if ( *(v19 - 2886) && !*v19 && v5 != v79 )
          {
            if ( *(v19 - 2853) == dword_140404A6C[v2 + 71856286] )
            {
              sub_140158AB0(v129, "Fire %s", v118);
              v119 = v129;
              dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = v125;
              v120 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
              do
              {
                v121 = *v119++;
                *(_BYTE *)v120 = v121;
                v120 = (unsigned int *)((char *)v120 + 1);
              }
              while ( v121 );
              ++dword_140404A6C[v2 + 71857986];
              v118 = (     char *)v127;
            }
            v117 = v125;
          }
          v118 += 14388;
          v117 += 0x10000;
          ++v5;
          v127 = (unsigned int *)v118;
          v19 += 3597;
          v125 = v117;
        }
        while ( v117 < 16777222 );
      }
    }
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  if ( (unsigned int)v18 <= 5 && dword_140404A6C[v2 + 71856342] - 21 <= 5 )
  {
    dword_140404A6C[v2 + 71857986] = 0;
    dword_140404A6C[v2 + 71857987] = 16777220;
    if ( dword_140404A6C[v2 + 71856342] == 25 )
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
    v20 = v129;
    v21 = (int)dword_140404A6C[v2 + 71857986];
    strcpy(v129, "Requisition");
    v22 = &dword_140404A6C[18 * v21 + 71857988 + v2];
    do
    {
      v23 = *v20++;
      *(_BYTE *)v22 = v23;
      v22 = (unsigned int *)((char *)v22 + 1);
    }
    while ( v23 );
    v24 = 23492 * v18;
    v25 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v25;
    v128 = 23492 * v18;
    v26 = dword_140404A6C[5873 * v18 + 283831510];
    if ( v26 == v1 )
    {
      dword_140404A6C[18 * (int)v25 + 71857987 + v2] = 16777217;
      if ( dword_140404A6C[v2 + 71856342] == 22 )
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
      v27 = v129;
      strcpy(v129, "Hiring");
      v28 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v29 = *v27++;
        *(_BYTE *)v28 = v29;
        v28 = (unsigned int *)((char *)v28 + 1);
      }
      while ( v29 );
      v30 = (int)dword_140404A6C[v2 + 71857986];
      dword_140404A6C[v2 + 71857986] = v30 + 1;
      dword_140404A6C[18 * v30 + 71858005 + v2] = 16777218;
      if ( dword_140404A6C[v2 + 71856342] == 23 )
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
      v31 = v129;
      strcpy(v129, "Firing");
      v32 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v33 = *v31++;
        *(_BYTE *)v32 = v33;
        v32 = (unsigned int *)((char *)v32 + 1);
      }
      while ( v33 );
      v25 = dword_140404A6C[v2 + 71857986] + 1;
      dword_140404A6C[v2 + 71857986] = v25;
    }
    dword_140404A6C[18 * (int)v25 + 71857987 + v2] = 16777219;
    if ( dword_140404A6C[v2 + 71856342] == 24 )
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = -1;
    v34 = v129;
    strcpy(v129, "Team");
    v35 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
    do
    {
      v36 = *v34++;
      *(_BYTE *)v35 = v36;
      v35 = (unsigned int *)((char *)v35 + 1);
    }
    while ( v36 );
    v3 = dword_140404A6C[v2 + 71857986] + 1;
    dword_140404A6C[v2 + 71857986] = v3;
    v37 = v3;
    v38 = v3;
    if ( v26 == v1 )
    {
      v39 = dword_140404A6C[v2 + 71856342];
      if ( v39 == 22 )
      {
        v40 = 0;
        if ( (int)dword_140404A6C[5873 * v18 + 283837293] > 0 )
        {
          v41 = (int *)((char *)&dword_140404A6C[283837294] + v24);
          do
          {
            v42 = (     char *)&dword_140404A6C[3597 * *v41 + 71856254];
            dword_140404A6C[18 * (int)v38 + 71857987 + v2] = (*v41 << 16) + 3;
            sub_140158AB0(v129, "Hire %s", v42);
            v34 = v129;
            v43 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v44 = *v34++;
              *(_BYTE *)v43 = v44;
              v43 = (unsigned int *)((char *)v43 + 1);
            }
            while ( v44 );
            ++v40;
            v3 = dword_140404A6C[v2 + 71857986] + 1;
            ++v41;
            v37 = v3;
            v38 = v3;
            dword_140404A6C[v2 + 71857986] = v3;
          }
          while ( v40 < (int)dword_140404A6C[5873 * v18 + 283837293] );
          v39 = dword_140404A6C[v2 + 71856342];
          LODWORD(v18) = v126;
          v5 = 0;
        }
      }
      if ( v39 == 23 )
      {
        v45 = v124;
        v46 = &dword_140404A6C[71859139];
        v47 = 0;
        v48 = 6;
        v49 = (     char *)&dword_140404A6C[71856254];
        do
        {
          if ( *(v46 - 2886) && !*v46 && v47 != v45 && *(v46 - 2853) == dword_140404A6C[v2 + 71856286] )
          {
            sub_140158AB0(v129, "Fire %s", v49);
            v34 = v129;
            dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = v48;
            v50 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
            do
            {
              v51 = *v34++;
              *(_BYTE *)v50 = v51;
              v50 = (unsigned int *)((char *)v50 + 1);
            }
            while ( v51 );
            v3 = dword_140404A6C[v2 + 71857986] + 1;
            v37 = v3;
            dword_140404A6C[v2 + 71857986] = v3;
          }
          ++v47;
          v49 += 14388;
          v48 += 0x10000;
          v46 += 3597;
        }
        while ( v48 < 16777222 );
        v24 = v128;
        v5 = 0;
        LODWORD(v18) = v126;
      }
    }
    if ( dword_140404A6C[v2 + 71856342] == 25 )
    {
      sub_140158AB0(v129, "Buy Disk", v34);
      v52 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 0;
      v53 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v54 = *v52++;
        *(_BYTE *)v53 = v54;
        v53 = (unsigned int *)((char *)v53 + 1);
      }
      while ( v54 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Briefcase", v52);
      v55 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 1;
      v56 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v57 = *v55++;
        *(_BYTE *)v56 = v57;
        v56 = (unsigned int *)((char *)v56 + 1);
      }
      while ( v57 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Walkie-Talkie", v55);
      v58 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 6;
      v59 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v60 = *v58++;
        *(_BYTE *)v59 = v60;
        v59 = (unsigned int *)((char *)v59 + 1);
      }
      while ( v60 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy 9mm", v58);
      v61 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 7;
      v62 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v63 = *v61++;
        *(_BYTE *)v62 = v63;
        v62 = (unsigned int *)((char *)v62 + 1);
      }
      while ( v63 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy 9mm Magazine", v61);
      v64 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 8;
      v65 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v66 = *v64++;
        *(_BYTE *)v65 = v66;
        v65 = (unsigned int *)((char *)v65 + 1);
      }
      while ( v66 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy MP5", v64);
      v67 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 9;
      v68 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v69 = *v67++;
        *(_BYTE *)v68 = v69;
        v68 = (unsigned int *)((char *)v68 + 1);
      }
      while ( v69 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy MP5 Magazine", v67);
      v70 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 10;
      v71 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v72 = *v70++;
        *(_BYTE *)v71 = v72;
        v71 = (unsigned int *)((char *)v71 + 1);
      }
      while ( v72 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Buy Bandage", v70);
      v73 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 11;
      v74 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v75 = *v73++;
        *(_BYTE *)v74 = v75;
        v74 = (unsigned int *)((char *)v74 + 1);
      }
      while ( v75 );
      ++dword_140404A6C[v2 + 71857986];
      sub_140158AB0(v129, "Deposit", v73);
      v76 = v129;
      dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 2;
      v77 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
      do
      {
        v78 = *v76++;
        *(_BYTE *)v77 = v78;
        v77 = (unsigned int *)((char *)v77 + 1);
      }
      while ( v78 );
      v79 = v124;
      v3 = dword_140404A6C[v2 + 71857986] + 1;
      v37 = v3;
      dword_140404A6C[v2 + 71857986] = v3;
      if ( *(unsigned int *)((char *)&dword_140404A6C[283831510] + v24) == v79 )
      {
        sub_140158AB0(v129, "Withdrawl $20", v76);
        v80 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 3;
        v81 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v82 = *v80++;
          *(_BYTE *)v81 = v82;
          v81 = (unsigned int *)((char *)v81 + 1);
        }
        while ( v82 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Withdrawl $100", v80);
        v83 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 4;
        v84 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v85 = *v83++;
          *(_BYTE *)v84 = v85;
          v84 = (unsigned int *)((char *)v84 + 1);
        }
        while ( v85 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Withdrawl $1000", v83);
        v86 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 5;
        v87 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v88 = *v86++;
          *(_BYTE *)v87 = v88;
          v87 = (unsigned int *)((char *)v87 + 1);
        }
        while ( v88 );
        ++dword_140404A6C[v2 + 71857986];
        sub_140158AB0(v129, "Replace Phone", v86);
        v89 = v129;
        dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857987 + v2] = 12;
        v90 = &dword_140404A6C[18 * (int)dword_140404A6C[v2 + 71857986] + 71857988 + v2];
        do
        {
          v91 = *v89++;
          *(_BYTE *)v90 = v91;
          v90 = (unsigned int *)((char *)v90 + 1);
        }
        while ( v91 );
        v3 = dword_140404A6C[v2 + 71857986] + 1;
        v37 = v3;
        dword_140404A6C[v2 + 71857986] = v3;
      }
    }
    else
    {
      v79 = v124;
    }
    if ( dword_140404A6C[v2 + 71856342] == 24 )
    {
      dword_140404A6C[18 * (int)v37 + 71857987 + v2] = 0;
      v102 = v2 * 4 + 72LL * (int)dword_140404A6C[v2 + 71857986];
      *(_QWORD *)((char *)&dword_140404A6C[71857988] + v102) = 0x6165542074697551LL;
      *(_WORD *)((char *)&dword_140404A6C[71857990] + v102) = 109;
      v3 = dword_140404A6C[v2 + 71857986] + 1;
      dword_140404A6C[v2 + 71857986] = v3;
    }
    if ( dword_140404A6C[283831312] != 4 )
    {
      v19 = &dword_140404A6C[71859139];
      goto LABEL_140;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130

// 1402B23E0: using guessed type char *off_1402B23E0[6];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;

//----- (00000001400F1950) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1400F1950(int a1)
{
  int v1; // r13d
  __int64 v2; // r14
  signed int v3; // r15d
  __int64 v4; // r12
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // xmm0_4
  unsigned __int64 v9; // rbx
  bool v10; // zf
  int v11; // edi
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // r9
  int v22; // eax
  signed int v23; // ecx
  __int64 v24; // r9
  unsigned int v25; // r10d
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // rbx
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // r9
  signed int v40; // edx
  signed int v41; // r8d
  int v42; // r10d
  int v43; // r10d
  int v44; // edx
  __int64 v45; // r8
  __int64 v46; // rdx
  signed int v47; // r12d
  int v48; // ecx
  __int64 v49; // rsi
  float v50; // xmm1_4
  float v51; // xmm0_4
  signed int v52; // r15d
  int i; // edi
  __int64 v54; // rcx
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rsi
  signed int v58; // ecx
  float v59; // xmm1_4
  float v60; // xmm0_4
  signed int v61; // r15d
  int j; // edi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // r9
  int v69; // edx
  unsigned int v70; // esi
  __int64 v71; // rdi
  int v72; // ecx
  int v73; // edx
  __int64 v74; // r15
  signed int v75; // eax
  unsigned int v76; // xmm1_4
  unsigned int v77; // xmm0_4
  signed int v78; // esi
  int k; // edi
  int v80; // r12d
  int v81; // r9d
  int v82; // ecx
  unsigned int v83; // ecx
  __int64 v84; // rdi
  __int64 v85; // r8
  float v86; // xmm0_4
  float v87; // xmm0_4
  unsigned int v88; // r15d
  unsigned int v89; // xmm1_4
  unsigned int v90; // xmm0_4
  int v91; // r14d
  int v92; // edi
  signed int v93; // esi
  __int64 v94; // rdi
  unsigned int v95; // eax
  __int64 v96; // rcx
  unsigned int v97; // r12d
  unsigned int v98; // edx
  unsigned int v99; // eax
  int v100; // edi
  __int64 v101; // rcx
  float v102; // xmm0_4
  float v103; // xmm0_4
  int v104; // eax
  int v105; // ecx
  __int64 v106; // rdx
  __int64 v107; // rcx
  float v108; // xmm0_4
  float v109; // xmm0_4
  int v110; // eax
  float v111; // xmm6_4
  float v112; // xmm7_4
  float v113; // xmm4_4
  float v114; // xmm8_4
  float v115; // xmm3_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm2_4
  signed int v119; // edi
  int m; // ebx
  int v121; // edx
  int v122; // edi
  int v123; // esi
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rbx
  unsigned int v128; // xmm1_4
  unsigned int v129; // xmm0_4
  signed int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // r12
  signed int v133; // edi
  int v134; // r15d
  int v135; // r8d
  __int64 v136; // rcx
  __int64 v137; // rcx
  unsigned int v138; // xmm1_4
  unsigned int v139; // xmm0_4
  signed int v140; // eax
  int v141; // r8d
  __int64 v142; // rdi
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rsi
  int v146; // r15d
  int v147; // esi
  int v148; // ecx
  unsigned int *v149; // rbx
  float v150; // xmm0_4
  unsigned int *v151; // rbx
  signed int v152; // edi
  int v153; // eax
  int n; // ebx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rdx
  int v158; // r8d
  unsigned int *v159; // rcx
  unsigned __int64 v160; // r8
  unsigned int v161; // esi
  __int64 v162; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F1950[2304];
#define v164 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 0)) /* [rsp+0h] */
#define v165 (*(int (*))(void *)(sr_frame_1400F1950 + 32)) /* [rsp+20h] */
#define v166 (*(int (*))(void *)(sr_frame_1400F1950 + 48)) /* [rsp+30h] */
#define v167 (*(int (*))(void *)(sr_frame_1400F1950 + 52)) /* [rsp+34h] */
#define v168 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 56)) /* [rsp+38h] */
#define v169 (*(int (*))(void *)(sr_frame_1400F1950 + 64)) /* [rsp+40h] */
#define v170 (*(unsigned int (*))(void *)(sr_frame_1400F1950 + 72)) /* [rsp+48h] */
#define v171 (*(float (*))(void *)(sr_frame_1400F1950 + 76)) /* [rsp+4Ch] */
#define v172 (*(float (*))(void *)(sr_frame_1400F1950 + 80)) /* [rsp+50h] */
#define v173 (*(int (*))(void *)(sr_frame_1400F1950 + 88)) /* [rsp+58h] */
#define v174 (*(int (*))(void *)(sr_frame_1400F1950 + 92)) /* [rsp+5Ch] */
#define v175 (*(unsigned int (*))(void *)(sr_frame_1400F1950 + 96)) /* [rsp+60h] */
#define v176 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 104)) /* [rsp+68h] */
#define v177 (*(__int128 (*))(void *)(sr_frame_1400F1950 + 112)) /* [rsp+70h] */
#define v178 (*(__int128 (*))(void *)(sr_frame_1400F1950 + 128)) /* [rsp+80h] */
#define v179 (*(int (*))(void *)(sr_frame_1400F1950 + 144)) /* [rsp+90h] */
#define v180 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 152)) /* [rsp+98h] */
#define v181 (*(float (*)[4])(void *)(sr_frame_1400F1950 + 160)) /* [rsp+A0h] */
#define v182 (*(float (*)[4])(void *)(sr_frame_1400F1950 + 176)) /* [rsp+B0h] */
#define v183 (*(unsigned __int64 (*))(void *)(sr_frame_1400F1950 + 192)) /* [rsp+C0h] */
#define v184 (*(sr_frame_i128 (*))(void *)(sr_frame_1400F1950 + 200)) /* [rsp+C8h] */
#define v185 (*(sr_frame_i128 (*))(void *)(sr_frame_1400F1950 + 216)) /* [rsp+D8h] */
#define v186 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 232)) /* [rsp+E8h] */
#define Src (*(__m128i (*)[128])(void *)(sr_frame_1400F1950 + 240)) /* [rsp+F0h] */
#define v188 (*(__int64 (*))(void *)(sr_frame_1400F1950 + 2288)) /* [rsp+8F0h] */

  v1 = a1;
  v2 = 14388LL * a1;
  v166 = a1;
  v180 = v2;
  v3 = *(unsigned int *)((char *)&dword_140404A6C[71856363] + v2);
  LODWORD(v4) = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2);
  v167 = v4;
  if ( v3 != *(unsigned int *)((char *)&dword_140404A6C[71856362] + v2) )
  {
    while ( 1 )
    {
      if ( (_DWORD)v4 != -1 )
      {
        v5 = v2 + 84LL * v3;
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v5) == 3 )
          break;
      }
LABEL_14:
      v183 = 84LL * v3;
      v9 = v183 + v2;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[v183 / 4 + 71856367] + v2) == 2;
      v168 = v183 + v2;
      if ( v10 )
      {
        LODWORD(v4) = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2);
        v167 = v4;
        if ( (_DWORD)v4 != -1 )
        {
          v11 = -1;
          v12 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          v13 = 7166LL * v167;
          if ( (int)dword_140404A6C[v13 + 280658139] > 0 && dword_140404A6C[v13 + 280658140] == (_DWORD)v12 )
            v11 = 0;
          if ( (int)dword_140404A6C[v13 + 280658149] > 0 && dword_140404A6C[v13 + 280658150] == (_DWORD)v12 )
          {
            v11 = 1;
            goto LABEL_23;
          }
          if ( v11 != -1 )
          {
LABEL_23:
            v14 = 1760 * v12;
            v15 = dword_140404A6C[1760 * v12 + 278845898];
            if ( v15 == 39 )
            {
              sub_1400C6D90(v12, *(unsigned int *)((char *)&dword_140404A6C[71856369] + v168));
              v15 = dword_140404A6C[v14 + 278845898];
            }
            if ( v15 == 18 )
            {
              v16 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v168);
              if ( !v16 )
              {
                ++dword_140404A6C[v14 + 278846061];
                goto LABEL_37;
              }
              if ( v16 == 1 )
              {
                --dword_140404A6C[v14 + 278846061];
                goto LABEL_37;
              }
              if ( v16 - 2 <= (int)dword_140404A6C[v14 + 278846062] )
              {
                v17 = v13 * 4 + 40 * (v11 ^ 1LL);
                if ( !*(unsigned int *)((char *)&dword_140404A6C[280658139] + v17) )
                {
                  v18 = sr_CreateItem(
                          18,
                          (float *)&dword_140404A6C[v14 + 278845916],
                          &dword_140404A6C[v14 + 278845925],
                          (float *)&dword_140404A6C[v14 + 278845934]);
                  v19 = 1760LL * v18;
                  dword_140404A6C[v19 + 278846063] = (dword_140404A6C[v14 + 278846063] >> (3
                                                                                         * dword_140404A6C[v14 + 278846061]))
                                                   & 7;
                  dword_140404A6C[v19 + 278846062] = 0;
                  sub_1400E35D0(v18, -1, v167, v11 ^ 1);
                  v20 = dword_140404A6C[v14 + 278846061];
                  goto LABEL_36;
                }
                v21 = *(int *)((char *)&dword_140404A6C[280658140] + v17);
                if ( dword_140404A6C[1760 * v21 + 278845898] == 18
                  && (unsigned int)sub_1400C3AB0(
                                     v21,
                                     0,
                                     (dword_140404A6C[v14 + 278846063] >> (3 * dword_140404A6C[v14 + 278846061])) & 7) )
                {
                  v20 = dword_140404A6C[v14 + 278846061];
LABEL_36:
                  sub_1400CA740(v12, v20);
                }
              }
LABEL_37:
              v22 = dword_140404A6C[v14 + 278846061];
              if ( v22 < 0 )
              {
                v22 = 0;
                dword_140404A6C[v14 + 278846061] = 0;
              }
              v23 = dword_140404A6C[v14 + 278846062];
              if ( v22 > v23 )
                dword_140404A6C[v14 + 278846061] = v23;
            }
            if ( ((dword_140404A6C[v14 + 278845898] - 25) & 0xFFFFFFF7) != 0
              || dword_140404A6C[v14 + 278846052] != 1
              || dword_140404A6C[v14 + 278845972] )
            {
              v9 = v168;
            }
            else
            {
              v24 = *(int *)((char *)&dword_140404A6C[71856369] + v168);
              if ( (unsigned int)v24 > 9 )
              {
                v9 = v168;
              }
              else
              {
                v10 = dword_140404A6C[456202453] == 0;
                v25 = v24 + 10 * dword_140404A6C[v14 + 278845984];
                dword_140404A6C[v14 + 278845984] = v25;
                if ( !v10 )
                {
                  v26 = dword_140404A6C[283831474];
                  v27 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v27) = 19;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v27) = v26;
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v27) = dword_140404A6C[v24 + 283785984];
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v27) = v12;
                  *(unsigned int *)((char *)&dword_140404A6C[297756297] + v27) = 1065353216;
                  *(unsigned int *)((char *)&dword_140404A6C[297756298] + v27) = 1065353216;
                }
                dword_140404A6C[v14 + 278845983] = v25;
                sub_140051940(v12);
                v9 = v168;
              }
            }
          }
          LODWORD(v4) = v167;
        }
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 1
        && !(unsigned int)sub_1401307D0(v1, (__int64)&dword_140404A6C[71856372] + v9) )
      {
        sub_1401164B0(v1, v3);
      }
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) )
        goto LABEL_166;
      v28 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v9);
      v174 = v28;
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) != v28 )
        goto LABEL_166;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2) == -1;
      v29 = *(int *)((char *)&dword_140404A6C[71856369] + v9);
      LODWORD(v176) = v29;
      if ( !v10 )
        goto LABEL_89;
      if ( v28 == 2 )
      {
        if ( dword_140404A6C[283831448] != 1 )
          goto LABEL_89;
        if ( ((int)dword_140404A6C[283831450] >= 600 || dword_140404A6C[283831312] == 7)
          && !*(unsigned int *)((char *)&dword_140404A6C[71856287] + v2) )
        {
          v30 = -((_DWORD)v29 != 1);
          v31 = -(__int64)((_DWORD)v29 != 1);
          switch ( (_DWORD)v29 )
          {
            case 2:
              v31 = 1;
              v30 = 1;
              goto LABEL_67;
            case 3:
              v30 = 2;
              v31 = 2;
              goto LABEL_67;
            case 1:
LABEL_67:
              v32 = 0;
              v33 = (int)dword_140404A6C[5873 * v31 + 283837164];
              if ( (int)v33 > 0 )
              {
                v34 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 23492 * v31 + 1139562016);
                while ( *v34 != *(unsigned int *)((char *)&dword_140404A6C[71856268] + v2) )
                {
                  ++v32;
                  ++v34;
                  if ( v32 >= v33 )
                    goto LABEL_71;
                }
                goto LABEL_89;
              }
LABEL_71:
              *(unsigned int *)((char *)&dword_140404A6C[71856286] + v2) = v30;
              *(unsigned int *)((char *)&dword_140404A6C[71856287] + v2) = 60;
              *(unsigned int *)((char *)&dword_140404A6C[71856271] + v2) = 0;
              break;
          }
          if ( (_DWORD)v29 == 4 )
          {
            v35 = *(int *)((char *)&dword_140404A6C[71856286] + v2);
            if ( (unsigned int)v35 <= 0x10 )
            {
              v36 = 5873 * v35;
              if ( dword_140404A6C[5873 * v35 + 283831510] == v1 )
              {
                dword_140404A6C[v36 + 283831510] = -1;
                dword_140404A6C[v36 + 283837164] = 0;
              }
            }
            sub_14011AF80(v1, *(unsigned int *)((char *)&dword_140404A6C[71856288] + v2));
            *(unsigned int *)((char *)&dword_140404A6C[71856286] + v2) = 17;
            *(unsigned int *)((char *)&dword_140404A6C[71856289] + v2) = 0;
            sub_140051F50(v1);
            *(unsigned int *)((char *)&dword_140404A6C[71856287] + v2) = 60;
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v2) = 0;
            sub_140051DC0(v1);
            goto LABEL_89;
          }
        }
        if ( (_DWORD)v29 == 5 )
        {
          if ( !*(unsigned int *)((char *)&dword_140404A6C[71856271] + v2) )
          {
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v2) = 1;
            sub_140051DC0(v1);
            goto LABEL_89;
          }
          if ( (int)dword_140404A6C[283831450] > 180 )
            *(unsigned int *)((char *)&dword_140404A6C[71856271] + v2) = 0;
        }
        sub_140051DC0(v1);
        goto LABEL_89;
      }
      if ( v28 == 1 && !*(unsigned int *)((char *)&dword_140404A6C[71856291] + v2) )
      {
        if ( (_DWORD)v29 == 1 )
        {
          sub_140138430(v1, 17);
        }
        else if ( (_DWORD)v29 != 2 )
        {
          goto LABEL_89;
        }
        sub_1401166B0(v1);
      }
LABEL_89:
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2) != -1 )
      {
        v167 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2);
        if ( dword_140404A6C[283831312] == 4 )
        {
          if ( (unsigned int)(v28 - 20) <= 6 )
            sub_1400EF0D0(v1, v28, v29);
        }
        else if ( (unsigned int)(v28 - 14) <= 5 )
        {
          sub_1400EE780(v1, v29);
        }
        switch ( v28 )
        {
          case 9:
            if ( (_DWORD)v29 == 1 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 10;
            }
            else if ( (_DWORD)v29 == 2 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 11;
            }
            break;
          case 10:
            if ( (int)v29 < 1
              || (v37 = *(int *)((char *)&dword_140404A6C[71856343] + v2),
                  (int)v29 >= (int)(dword_140404A6C[14019 * v37 + 225654128] + 1)) )
            {
              v44 = v169;
            }
            else
            {
              v38 = dword_140404A6C[14019 * v37 + 225641203];
              if ( v38 == 5 )
              {
                v39 = *(int *)((char *)&dword_140404A6C[71856292] + v2);
                if ( (_DWORD)v39 != -1 )
                {
                  v40 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2);
                  v41 = dword_140404A6C[14019 * v37 + 225654127 + 3 * v29];
                  if ( v40 >= v41 )
                  {
                    if ( (int)v29 <= 3 )
                    {
                      v42 = (_DWORD)v29 == 1 ? 3 : ((_DWORD)v29 == 2) + 7;
                      v173 = v42;
                      if ( *(unsigned int *)((char *)&dword_140404A6C[71859822] + v2) != v42 )
                      {
                        ++dword_140404A6C[v39 + 282485789];
                        v40 -= v41;
                        *(unsigned int *)((char *)&dword_140404A6C[71859822] + v2) = v42;
                        *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = v40;
                        dword_140404A6C[7166 * v39 + 280658446] = v42;
                      }
                    }
                    if ( (unsigned int)(v29 - 4) <= 1 )
                    {
                      v43 = (_DWORD)v29 == 4 ? 1 : 2;
                      v173 = v43;
                      if ( *(unsigned int *)((char *)&dword_140404A6C[71859826] + v2) != v43 )
                      {
                        ++dword_140404A6C[v39 + 282485789];
                        *(unsigned int *)((char *)&dword_140404A6C[71859826] + v2) = v43;
                        *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = v40 - v41;
                        dword_140404A6C[7166 * v39 + 280658449] = v43;
                      }
                    }
                    sub_140051DC0(v1);
                    if ( dword_140404A6C[283831312] == 3 )
                      sub_140051F50(v1);
                  }
                }
                v44 = 0;
                v169 = 0;
              }
              else if ( v38 == 3 )
              {
                sub_1400EFD20(v1, v29);
                v44 = 1;
                v169 = 1;
              }
              else
              {
                v44 = v169;
              }
              v45 = *(int *)((char *)&dword_140404A6C[71856343] + v2);
              if ( dword_140404A6C[14019 * v45 + 225641203] == 8 )
              {
                if ( *(int *)((char *)&dword_140404A6C[71856279] + v2) < 20 )
                {
                  v46 = v29 + 4673LL * *(int *)((char *)&dword_140404A6C[71856343] + v2);
                  v47 = dword_140404A6C[3 * v46 + 225654127];
                  v48 = dword_140404A6C[3 * v46 + 225654126];
                  if ( *(int *)((char *)&dword_140404A6C[71856272] + v2) >= v47 )
                  {
                    v49 = *(int *)((char *)&dword_140404A6C[71856292] + v2);
                    LODWORD(v186) = 1065353216;
                    v50 = *(float *)&dword_140404A6C[7166 * v49 + 280651336];
                    LODWORD(v181[0]) = dword_140404A6C[7166 * v49 + 280651335];
                    v51 = *(float *)&dword_140404A6C[7166 * v49 + 280651337];
                    v181[1] = v50;
                    v181[2] = v51;
                    v184 = xmmword_140278D30;
                    v185 = xmmword_140278D30;
                    v52 = sr_CreateItem(v48, v181, nullptr, (float *)&v184);
                    for ( i = 2; i < 7; ++i )
                    {
                      if ( (unsigned int)sub_1400E35D0(v52, -1, v49, i) )
                        break;
                    }
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) -= v47;
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v2);
                    sub_140051DC0(v1);
                    LODWORD(v45) = *(unsigned int *)((char *)&dword_140404A6C[71856343] + v2);
                    LODWORD(v29) = v176;
                  }
                }
                v44 = 0;
                v169 = 0;
              }
              v54 = (int)v45;
              if ( dword_140404A6C[14019 * (int)v45 + 225641203] == 9 )
              {
                v55 = *(unsigned int *)((char *)&dword_140404A6C[71856279] + v2);
                if ( v55 < 10 )
                {
                  v56 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2);
                  v57 = *(int *)((char *)&dword_140404A6C[71856292] + v2);
                  v58 = dword_140404A6C[14019 * v54 + 225654127 + 3 * (int)v29];
                  if ( v56 >= v58 )
                  {
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = v56 - v58;
                    *(unsigned int *)((char *)&dword_140404A6C[71856279] + v2) = v55 + 1;
                    if ( (_DWORD)v29 == 1 && (_DWORD)v57 != -1 )
                    {
                      LODWORD(v186) = 1065353216;
                      v59 = *(float *)&dword_140404A6C[7166 * v57 + 280651336];
                      LODWORD(v182[0]) = dword_140404A6C[7166 * v57 + 280651335];
                      v60 = *(float *)&dword_140404A6C[7166 * v57 + 280651337];
                      v182[1] = v59;
                      v182[2] = v60;
                      v184 = xmmword_140278D30;
                      v185 = xmmword_140278D30;
                      v61 = sr_CreateItem(30, v182, nullptr, (float *)&v184);
                      for ( j = 0; j < 7; ++j )
                      {
                        if ( (unsigned int)sub_1400E35D0(v61, -1, v57, j) )
                          break;
                      }
                      v2 = v180;
                    }
                  }
                }
                v44 = 0;
                v169 = 0;
              }
            }
            if ( (_DWORD)v29 == 16 )
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 9;
            v28 = v174;
            if ( v44 == 1 )
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 9;
            break;
          case 11:
            if ( (_DWORD)v29 == 1 )
            {
              v63 = *(int *)((char *)&dword_140404A6C[71856292] + v2);
              if ( (_DWORD)v63 != -1 && (int)dword_140404A6C[7166 * v63 + 280658139] > 0 )
              {
                v64 = (int)dword_140404A6C[7166 * v63 + 280658140];
                if ( dword_140404A6C[1760 * v64 + 278845898] == 27 )
                {
                  v65 = (int)dword_140404A6C[1760 * v64 + 278846053];
                  if ( (unsigned int)v65 <= 0x1FF
                    && dword_140404A6C[5210 * v65 + 129716709]
                    && (int)dword_140404A6C[5210 * v65 + 129716712] > 0 )
                  {
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = (int)(float)((float)((float)(int)dword_140404A6C[24944 * dword_140404A6C[5210 * v65 + 129716710] + 346707730] * 0.75)
                                                                                            + (float)*(int *)((char *)&dword_140404A6C[71856272] + v2));
                  }
                  dword_140404A6C[1760 * v64 + 278845900] = 0;
                  dword_140404A6C[5210 * v65 + 129716716] = 0;
                }
              }
            }
            else if ( (_DWORD)v29 == 16 )
            {
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 9;
            }
            break;
        }
      }
      v66 = *(int *)((char *)&dword_140404A6C[71856286] + v2);
      if ( (_DWORD)v66 == -1 || *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2) == -1 )
      {
LABEL_345:
        v1 = v166;
        LODWORD(v4) = v167;
        goto LABEL_165;
      }
      v4 = *(int *)((char *)&dword_140404A6C[71856292] + v2);
      v167 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v2);
      switch ( v28 )
      {
        case 3:
          switch ( (_DWORD)v29 )
          {
            case 1:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 4;
              break;
            case 2:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 5;
              break;
            case 3:
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 7;
              break;
            default:
              v1 = v166;
              if ( (_DWORD)v29 != 4 )
              {
                v10 = (_DWORD)v29 == 5;
                v67 = -1;
                v9 = v168;
                if ( v10 )
                  *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 8;
                goto LABEL_167;
              }
              *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 12;
              goto LABEL_165;
          }
          goto LABEL_164;
        case 4:
          v72 = 11;
          if ( (_DWORD)v29 != 1 )
            v72 = -1;
          switch ( (_DWORD)v29 )
          {
            case 2:
              v72 = 7;
              goto LABEL_204;
            case 3:
              v72 = 1;
              goto LABEL_204;
            case 4:
              v72 = 3;
              goto LABEL_204;
            case 1:
              goto LABEL_204;
          }
          break;
        case 5:
          switch ( (_DWORD)v29 )
          {
            case 1:
              v72 = 12;
LABEL_204:
              if ( *(int *)((char *)&dword_140404A6C[71856279] + v2) < 10 )
              {
                v73 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2);
                if ( v73 >= 0 )
                {
                  v74 = 1268LL * v72;
                  v75 = dword_140404A6C[v74 + 278521286];
                  if ( v73 >= v75 || !v75 )
                  {
                    v179 = 1065353216;
                    v76 = dword_140404A6C[7166 * v4 + 280651336];
                    v170 = dword_140404A6C[7166 * v4 + 280651335];
                    v77 = dword_140404A6C[7166 * v4 + 280651337];
                    v171 = *(float *)&v76;
                    v172 = *(float *)&v77;
                    v177 = xmmword_140278D30;
                    v178 = xmmword_140278D30;
                    v78 = sr_CreateItem(v72, (float *)&v170, nullptr, (float *)&v177);
                    for ( k = 2; k < 7; ++k )
                    {
                      if ( (unsigned int)sub_1400E35D0(v78, -1, v4, k) )
                        break;
                    }
                    LODWORD(v29) = v176;
                    *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) -= dword_140404A6C[v74 + 278521286];
                    if ( dword_140404A6C[283831312] == 3 )
                      sub_140051F50(v166);
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v2);
                    v28 = v174;
                  }
                }
              }
              goto LABEL_214;
            case 2:
              v72 = 8;
              goto LABEL_204;
            case 3:
              v72 = 2;
              goto LABEL_204;
            case 4:
              v72 = 4;
              goto LABEL_204;
          }
          break;
        default:
          goto LABEL_216;
      }
LABEL_214:
      if ( (_DWORD)v29 == 16 )
        *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 3;
LABEL_216:
      switch ( v28 )
      {
        case 6:
          v80 = v29 - 1;
          v81 = -1;
          if ( (int)v29 - 1 >= (int)dword_140404A6C[335047157]
            || (v82 = dword_140404A6C[4 * (int)v29 + 335047157], v82 <= 0)
            || *(int *)((char *)&dword_140404A6C[71856272] + v2) < v82 )
          {
            v83 = v175;
          }
          else
          {
            v83 = dword_140404A6C[4 * (int)v29 + 335047156];
            v81 = dword_140404A6C[4 * (int)v29 + 335047155];
            v175 = v83;
          }
          v84 = 7166LL * v167;
          v85 = 5873 * v66;
          v86 = *(float *)&dword_140404A6C[v84 + 280651335];
          if ( v86 >= *(float *)&dword_140404A6C[5873 * v66 + 283831485]
            && v86 < *(float *)&dword_140404A6C[v85 + 283831488] )
          {
            v87 = *(float *)&dword_140404A6C[v84 + 280651337];
            if ( v87 >= *(float *)&dword_140404A6C[v85 + 283831487]
              && v87 < *(float *)&dword_140404A6C[v85 + 283831490]
              && v81 != -1 )
            {
              v88 = sub_1400F00D0(v81, v66, v83);
              if ( v88 != -1 )
              {
                v179 = 1065353216;
                v89 = dword_140404A6C[v84 + 280651336];
                v170 = dword_140404A6C[v84 + 280651335];
                v90 = dword_140404A6C[v84 + 280651337];
                v171 = *(float *)&v89;
                v172 = *(float *)&v90;
                *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 3;
                v177 = xmmword_140278D30;
                v178 = xmmword_140278D30;
                v91 = v167;
                v92 = 2;
                v93 = sr_CreateItem(27, (float *)&v170, nullptr, (float *)&v177);
                dword_140404A6C[1760 * v93 + 278846053] = v88;
                do
                {
                  if ( (unsigned int)sub_1400E35D0(v93, -1, v91, v92) )
                    break;
                  ++v92;
                }
                while ( v92 < 7 );
                LODWORD(v29) = v176;
                v2 = v180;
                v94 = 2LL * (int)v176;
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v180) -= dword_140404A6C[4 * (int)v176
                                                                                              + 335047157];
                if ( dword_140404A6C[283831312] == 3 )
                  sub_140051F50(v166);
                v10 = dword_140404A6C[456202453] == 0;
                dword_140404A6C[2 * v94 + 335047157] = 0;
                if ( !v10 )
                {
                  v95 = dword_140404A6C[283831474];
                  v96 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  v97 = dword_140404A6C[335047157] + 16 * v80;
                  v98 = dword_140404A6C[308307070] + 1;
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v96) = 14;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v96) = v95;
                  v99 = dword_140404A6C[2 * v94 + 335047155];
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v96) = v97;
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v96) = v99;
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v96) = dword_140404A6C[2 * v94 + 335047156];
                  dword_140404A6C[308307070] = v98;
                  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v96) = 0;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                }
              }
            }
          }
          LODWORD(v4) = v167;
LABEL_236:
          v1 = v166;
          goto LABEL_237;
        case 7:
          v100 = 14;
          v67 = -1;
          if ( (_DWORD)v29 != 1 )
            v100 = -1;
          if ( (_DWORD)v29 == 2 )
          {
            v101 = 5873 * v66;
            v102 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
            if ( v102 >= *(float *)&dword_140404A6C[5873 * v66 + 283831485]
              && v102 < *(float *)&dword_140404A6C[v101 + 283831488] )
            {
              v103 = *(float *)&dword_140404A6C[7166 * v4 + 280651337];
              if ( v103 >= *(float *)&dword_140404A6C[v101 + 283831487]
                && v103 < *(float *)&dword_140404A6C[v101 + 283831490] )
              {
                v104 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2);
                if ( v104 >= 1000 )
                {
                  v105 = v166;
                  *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = v104 - 1000;
                  *(unsigned int *)((char *)&dword_140404A6C[71859822] + v2) = 7;
                  sub_140051DC0(v105);
                }
              }
            }
          }
          v106 = 7166 * v4;
          v107 = 5873 * v66;
          v108 = *(float *)&dword_140404A6C[7166 * v4 + 280651335];
          if ( v108 >= *(float *)&dword_140404A6C[5873 * v66 + 283831485]
            && v108 < *(float *)&dword_140404A6C[v107 + 283831488] )
          {
            v109 = *(float *)&dword_140404A6C[v106 + 280651337];
            if ( v109 >= *(float *)&dword_140404A6C[v107 + 283831487]
              && v109 < *(float *)&dword_140404A6C[v107 + 283831490]
              && (_DWORD)v29 == 1 )
            {
              if ( *(int *)((char *)&dword_140404A6C[71856279] + v2) >= 10
                || (v110 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2), v110 < 0)
                || v110 < (int)dword_140404A6C[278539038] )
              {
                v1 = v166;
                v9 = v168;
              }
              else
              {
                LODWORD(v111) = dword_140404A6C[v106 + 280651458];
                LODWORD(v112) = dword_140404A6C[v106 + 280651459];
                LODWORD(v113) = dword_140404A6C[v106 + 280651456];
                v114 = *(float *)&dword_140404A6C[v106 + 280651460];
                LODWORD(v115) = dword_140404A6C[v106 + 280651457];
                v116 = *(float *)&dword_140404A6C[v106 + 280651455] * 0.75;
                v117 = *(float *)&dword_140404A6C[v106 + 280651440] - (float)(v111 * 0.75);
                HIDWORD(v177) = dword_140404A6C[v106 + 280651455];
                *(_QWORD *)&v178 = __PAIR64__(LODWORD(v115), LODWORD(v113));
                *((_QWORD *)&v178 + 1) = __PAIR64__(LODWORD(v112), LODWORD(v111));
                v179 = LODWORD(v114);
                *(float *)&v170 = v117 + v116;
                v171 = (float)(*(float *)&dword_140404A6C[v106 + 280651441] - (float)(v112 * 0.75))
                     + (float)(v113 * 0.75);
                v118 = *(float *)&dword_140404A6C[v106 + 280651442];
                LODWORD(v177) = dword_140404A6C[v106 + 280651452];
                DWORD2(v177) = dword_140404A6C[v106 + 280651454];
                DWORD1(v177) = dword_140404A6C[v106 + 280651453];
                v172 = (float)(v118 - (float)(v114 * 0.75)) + (float)(v115 * 0.75);
                v119 = sr_CreateItem(v100, (float *)&v170, nullptr, (float *)&v177);
                for ( m = 2; m < 7; ++m )
                {
                  if ( (unsigned int)sub_1400E35D0(v119, -1, v4, m) )
                    break;
                }
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) -= dword_140404A6C[278539038];
                v1 = v166;
                if ( dword_140404A6C[283831312] == 3 )
                  sub_140051F50(v166);
                ++*(unsigned int *)((char *)&dword_140404A6C[71856279] + v2);
                v9 = v168;
              }
              goto LABEL_167;
            }
          }
          v1 = v166;
          goto LABEL_238;
        case 8:
          if ( (_DWORD)v29 == 1 )
          {
            v121 = 1;
            goto LABEL_268;
          }
          if ( (_DWORD)v29 == 2 )
          {
            v1 = v166;
            sub_14011AF80(v166, 1);
          }
          else
          {
            switch ( (_DWORD)v29 )
            {
              case 3:
                v121 = 10;
                break;
              case 4:
                v1 = v166;
                sub_14011AF80(v166, 10);
                goto LABEL_269;
              case 5:
                v121 = 100;
                break;
              case 6:
                v1 = v166;
                sub_14011AF80(v166, 100);
                goto LABEL_269;
              case 7:
                v121 = 5000;
                break;
              default:
                v1 = v166;
                if ( (_DWORD)v29 != 8 )
                {
                  sub_140051F50(v166);
LABEL_237:
                  v67 = -1;
                  goto LABEL_238;
                }
                sub_14011AF80(v166, 5000);
                goto LABEL_269;
            }
LABEL_268:
            v1 = v166;
            sub_1401189F0(v166, v121);
          }
LABEL_269:
          sub_140051F50(v1);
          goto LABEL_165;
        case 13:
          if ( (unsigned int)(v29 - 1) > 5 )
            goto LABEL_295;
          v122 = *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2);
          v123 = dword_1402B2960[(int)v29];
          if ( v122 < v123 )
            goto LABEL_295;
          if ( (int)v29 >= 3 || *(int *)((char *)&dword_140404A6C[71856281] + v2) < 40 )
          {
            v124 = 7166 * v4;
            if ( (int)dword_140404A6C[7166 * v4 + 280658139] <= 0 )
            {
              v128 = dword_140404A6C[v124 + 280651336];
              v170 = dword_140404A6C[v124 + 280651335];
              v129 = dword_140404A6C[v124 + 280651337];
              v171 = *(float *)&v128;
              v172 = *(float *)&v129;
              v179 = 1065353216;
              v177 = xmmword_140278D30;
              v178 = xmmword_140278D30;
              v130 = sr_CreateItem(18, (float *)&v170, nullptr, (float *)&v177);
              v131 = 1760LL * v130;
              dword_140404A6C[v131 + 278846062] = 0;
              dword_140404A6C[v131 + 278846063] = v29;
              sub_1400E35D0(v130, -1, v4, 0);
              *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) -= dword_1402B2960[(int)v29];
              if ( (int)v29 < 3 )
              {
                ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v2);
                v1 = v166;
                goto LABEL_165;
              }
            }
            else
            {
              v125 = (int)dword_140404A6C[v124 + 280658140];
              if ( dword_140404A6C[1760 * v125 + 278845898] == 18 )
              {
                if ( (unsigned int)sub_1400C3AB0(v125, 0, v29) )
                {
                  *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) = v122 - v123;
                  if ( (int)v29 < 3 )
                    ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v2);
                }
              }
            }
LABEL_295:
            if ( (_DWORD)v29 != 7 )
              goto LABEL_236;
            if ( (int)dword_140404A6C[7166 * v4 + 280658139] > 0 )
            {
              v126 = (int)dword_140404A6C[7166 * v4 + 280658140];
              v127 = 1760 * v126;
              if ( dword_140404A6C[1760 * v126 + 278845898] == 18 )
              {
                v1 = v166;
                *(unsigned int *)((char *)&dword_140404A6C[71856272] + v2) += sub_1400C3D10(v126);
                dword_140404A6C[v127 + 278845900] = 0;
                goto LABEL_165;
              }
            }
          }
          break;
        case 12:
          v132 = *(int *)((char *)&dword_140404A6C[71856286] + v2);
          if ( (unsigned int)v132 > 5 )
            goto LABEL_345;
          if ( (unsigned int)(v29 - 1) > 5 )
            goto LABEL_314;
          v133 = dword_140404A6C[6 * v132 + 335047066];
          v134 = dword_1402B2960[(int)v29];
          if ( v133 < v134 )
            goto LABEL_314;
          if ( (int)v29 < 3 && *(int *)((char *)&dword_140404A6C[71856281] + v2) >= 40 )
            goto LABEL_345;
          v135 = v167;
          v136 = 7166LL * v167;
          if ( (int)dword_140404A6C[v136 + 280658139] <= 0 )
          {
            v138 = dword_140404A6C[v136 + 280651336];
            v170 = dword_140404A6C[v136 + 280651335];
            v139 = dword_140404A6C[v136 + 280651337];
            v171 = *(float *)&v138;
            v172 = *(float *)&v139;
            v179 = 1065353216;
            v177 = xmmword_140278D30;
            v178 = xmmword_140278D30;
            v140 = sr_CreateItem(18, (float *)&v170, nullptr, (float *)&v177);
            v141 = v167;
            v142 = 0;
            v67 = -1;
            v143 = 1760LL * v140;
            dword_140404A6C[v143 + 278846062] = 0;
            dword_140404A6C[v143 + 278846063] = v29;
            sub_1400E35D0(v140, -1, v141, 0);
            dword_140404A6C[6 * v132 + 335047066] -= dword_1402B2960[(int)v29];
            if ( (int)v29 < 3 )
            {
              ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v2);
              v1 = v166;
              LODWORD(v4) = v167;
              v9 = v168;
              goto LABEL_167;
            }
            v135 = v167;
            goto LABEL_317;
          }
          v137 = (int)dword_140404A6C[v136 + 280658140];
          if ( dword_140404A6C[1760 * v137 + 278845898] == 18 )
          {
            if ( (unsigned int)sub_1400C3AB0(v137, 0, v29) )
            {
              v135 = v167;
              dword_140404A6C[6 * v132 + 335047066] = v133 - v134;
              v67 = -1;
              if ( (int)v29 < 3 )
                ++*(unsigned int *)((char *)&dword_140404A6C[71856281] + v2);
LABEL_316:
              v142 = 0;
LABEL_317:
              if ( (_DWORD)v29 != 7 )
              {
                v1 = v166;
                LODWORD(v4) = v167;
LABEL_238:
                v10 = (_DWORD)v29 == 16;
                v9 = v168;
                if ( v10 )
                  *(unsigned int *)((char *)&dword_140404A6C[71856342] + v2) = 3;
                goto LABEL_167;
              }
              v144 = 7166LL * v135;
              if ( (int)dword_140404A6C[v144 + 280658139] <= 0 )
                goto LABEL_343;
              v145 = (int)dword_140404A6C[v144 + 280658140];
              v176 = 7040 * v145;
              if ( dword_140404A6C[1760 * v145 + 278845898] != 18 )
              {
                for ( n = 0; n < 16; ++n )
                {
                  v155 = *(int *)((char *)&dword_140404A6C[71856286] + v2);
                  v156 = v142 + 23492 * v155;
                  if ( *(unsigned int *)((char *)&dword_140404A6C[283831588] + v156)
                    && (_DWORD)v145 == *(unsigned int *)((char *)&dword_140404A6C[283831592] + v156) )
                  {
                    sub_1400F4D00(v155, n);
                  }
                  v142 += 1116;
                }
LABEL_343:
                v1 = v166;
                LODWORD(v4) = v167;
                v9 = v168;
                goto LABEL_167;
              }
              v146 = sub_1400C3D10(v145);
              v147 = dword_140404A6C[6 * v132 + 335047061];
              if ( v147 > 0 )
                *(float *)&dword_140404A6C[6 * v132 + 335047062] = (float)((float)v146 / (float)v147)
                                                                 + *(float *)&dword_140404A6C[6 * v132 + 335047062];
              v148 = dword_140404A6C[5873 * v132 + 283831506];
              if ( v148 > 0 )
                v146 /= v148;
              v149 = &dword_140404A6C[71856286];
              do
              {
                if ( *(v149 - 33) && *v149 == (_DWORD)v132 )
                {
                  *(v149 - 14) += (int)(float)(fminf(fmaxf(1.0 - (float)((float)(int)v149[2] / (float)v147), 0.0), 1.0)
                                             * (float)v146);
                  sub_140051F50(v142);
                }
                LODWORD(v142) = v142 + 1;
                v149 += 3597;
              }
              while ( (int)v142 < 256 );
              v150 = *(float *)&dword_140404A6C[6 * v132 + 335047062];
              if ( v150 > 500.0 )
              {
                v151 = &dword_140404A6C[71856288];
                v152 = 0;
                *(float *)&dword_140404A6C[6 * v132 + 335047062] = v150 * 0.20000000298023224;
                do
                {
                  if ( *(v151 - 35) && *(v151 - 2) == (_DWORD)v132 )
                  {
                    v147 += 4 * *v151;
                    v153 = 5 * *v151;
                    dword_140404A6C[6 * v132 + 335047061] = v147;
                    *v151 = v153;
                    sub_140051F50(v152);
                  }
                  ++v152;
                  v151 += 3597;
                }
                while ( v152 < 256 );
                v2 = v180;
              }
              sub_140052090();
              LODWORD(v4) = v167;
              dword_140404A6C[v176 / 4 + 278845900] = 0;
              break;
            }
LABEL_314:
            v135 = v167;
          }
          v67 = -1;
          goto LABEL_316;
      }
LABEL_164:
      v1 = v166;
LABEL_165:
      v9 = v168;
LABEL_166:
      v67 = -1;
LABEL_167:
      if ( *(unsigned int *)((char *)&dword_140404A6C[71856266] + v2) )
      {
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 4 )
        {
          v68 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          if ( (int)v68 >= 0 && (int)v68 < (int)dword_140404A6C[134050358] )
          {
            v69 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
            if ( v69 >= 0 )
            {
              v165 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
              dword_140404A6C[28 * v68 + 134050385] = v69;
              sub_140158AB0(Src, "%s %d banned %d", (     char *)&dword_140404A6C[28 * v68 + 134050365], v68, v165);
              if ( dword_140404A6C[456202453] )
              {
                do
                  ++v67;
                while ( SR_VEC_LANES(128, Src[0], i8)[v67] );
                v70 = dword_140404A6C[308307070];
                if ( (int)v67 > 63 )
                  LODWORD(v67) = 63;
                v71 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v71) = 2;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v71) = dword_140404A6C[283831474];
                sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v71), Src, (int)v67);
                dword_140404A6C[308307070] = v70 + 1;
                v9 = v168;
                *((_BYTE *)&dword_140404A6C[297756301] + v71 + (int)v67) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v71) = v67;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v71) = 4;
                v67 = -1;
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v71) = -1;
                *(unsigned int *)((char *)&dword_140404A6C[297756296] + v71) = 0;
                HIWORD(dword_140404A6C[308307070]) = 0;
              }
            }
          }
        }
        if ( *(unsigned int *)((char *)&dword_140404A6C[71856367] + v9) == 5 )
        {
          v157 = *(int *)((char *)&dword_140404A6C[71856368] + v9);
          if ( (int)v157 >= 0 && (int)v157 < (int)dword_140404A6C[134050358] )
          {
            v158 = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v9);
            if ( v158 >= 0 )
            {
              dword_140404A6C[28 * v157 + 134050376] = v158;
              v159 = &dword_140404A6C[71856268];
              v160 = v183;
              do
              {
                if ( *(v159 - 15) && *v159 == (_DWORD)v157 )
                  v159[8] = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v160 + v2);
                v159 += 3597;
              }
              while ( (__int64)v159 < (__int64)&dword_140404A6C[72777100] );
              sub_140158AB0(
                Src,
                "%s %d rating %d",
                (     char *)&dword_140404A6C[28 * *(unsigned int *)((char *)&dword_140404A6C[71856368] + v160 + v2)
                                             + 134050365],
                *(unsigned int *)((char *)&dword_140404A6C[71856368] + v160 + v2),
                *(unsigned int *)((char *)&dword_140404A6C[71856369] + v160 + v2));
              if ( dword_140404A6C[456202453] )
              {
                do
                  ++v67;
                while ( SR_VEC_LANES(128, Src[0], i8)[v67] );
                v161 = dword_140404A6C[308307070];
                if ( (int)v67 > 63 )
                  LODWORD(v67) = 63;
                v162 = (__int64)(int)dword_140404A6C[308307070] << 7;
                *(unsigned int *)((char *)&dword_140404A6C[297756285] + v162) = 2;
                *(unsigned int *)((char *)&dword_140404A6C[297756286] + v162) = dword_140404A6C[283831474];
                sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v162), Src, (int)v67);
                dword_140404A6C[308307070] = v161 + 1;
                *((_BYTE *)&dword_140404A6C[297756301] + v162 + (int)v67) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756293] + v162) = v67;
                *(unsigned int *)((char *)&dword_140404A6C[297756294] + v162) = 4;
                *(unsigned int *)((char *)&dword_140404A6C[297756295] + v162) = -1;
                HIWORD(dword_140404A6C[308307070]) = 0;
                *(unsigned int *)((char *)&dword_140404A6C[297756296] + v162) = 0;
              }
            }
          }
        }
      }
      v3 = ((unsigned __int8)*(unsigned int *)((char *)&dword_140404A6C[71856363] + v2) + 1) & 0x3F;
      *(unsigned int *)((char *)&dword_140404A6C[71856363] + v2) = v3;
      if ( v3 == *(unsigned int *)((char *)&dword_140404A6C[71856362] + v2) )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v6 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v5);
    if ( (unsigned int)(v6 - 3) <= 4 )
    {
      dword_140404A6C[7166 * (int)v4 + 280658342 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = 2;
      dword_140404A6C[7166 * (int)v4 + 280658352 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v5);
      dword_140404A6C[7166 * (int)v4 + 280658353 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = v6 - 3;
      dword_140404A6C[7166 * (int)v4 + 280658343 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = 0;
      dword_140404A6C[7166 * (int)v4 + 280658341] = ((unsigned __int8)dword_140404A6C[7166 * (int)v4 + 280658341] + 1)
                                                  & 7;
    }
    switch ( v6 )
    {
      case 1:
        v7 = 7166LL * (int)v4;
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658342 + v7] = 1;
        break;
      case 2:
        v7 = 7166LL * (int)v4;
        *(float *)&v8 = *(float *)&dword_140404A6C[v7 + 280651384] * 8.0;
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658342 + v7] = 0;
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658352 + v7] = *(unsigned int *)((char *)&dword_140404A6C[71856369] + v5);
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658353 + v7] = v8;
        goto LABEL_9;
      case 8:
        v7 = 7166LL * (int)v4;
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658342 + v7] = 3;
        break;
      default:
        goto LABEL_14;
    }
    dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658352 + v7] = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                                  + v5);
    dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658353 + v7] = 0;
LABEL_9:
    dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658343 + v7] = 0;
    dword_140404A6C[v7 + 280658341] = ((unsigned __int8)dword_140404A6C[v7 + 280658341] + 1) & 7;
    goto LABEL_14;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v164
#undef v165
#undef v166
#undef v167
#undef v168
#undef v169
#undef v170
#undef v171
#undef v172
#undef v173
#undef v174
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
#undef Src
#undef v188

// 1400F23AD: conditional instruction was optimized away because ebx.4==5
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402B2960: using guessed type int dword_1402B2960[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400F5B60) ----------------------------------------------------
__int64            sub_1400F5B60(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // r8d
  unsigned int *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r8
  _BOOL8 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
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

  result = dword_140404A6C[283831448];
  v2 = 0;
  if ( dword_140404A6C[283831448] != 1 )
  {
    if ( dword_140404A6C[283831448] != 2 )
      return result;
    v9 = dword_140404A6C[283831450];
    goto LABEL_27;
  }
  v3 = 1;
  v4 = &dword_140404A6C[71859139];
  v5 = 0;
  v6 = 256;
  do
  {
    if ( *(v4 - 2886) && !*v4 )
    {
      if ( *(v4 - 2853) <= 2 )
        ++v5;
      if ( !*(v4 - 2868) )
        v3 = 0;
    }
    v4 += 3597;
    --v6;
  }
  while ( v6 );
  result = 0;
  v7 = --dword_140404A6C[283831450];
  if ( v5 )
    result = v3;
  if ( !(_DWORD)result )
  {
    if ( v7 < 1200 )
      dword_140404A6C[283831450] = 1200;
    return result;
  }
  if ( v7 > 60 )
  {
    dword_140404A6C[283831450] = 60;
    return result;
  }
  if ( v7 <= 0 )
  {
    v8 = &dword_140404A6C[71856286];
    do
    {
      if ( *(v8 - 33) )
        *v8 = 0;
      if ( v8[3564] )
        v8[3597] = 0;
      v8 += 7194;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72777118] );
    sub_14005D920();
    v9 = 108000;
    dword_140404A6C[283831448] = 2;
LABEL_27:
    v10 = v9 - 1;
    v11 = 1;
    dword_140404A6C[283831450] = v10;
    if ( dword_140404A6C[284024360] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024360];
      v12 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v12 != -1 )
      {
        a1 = 7166 * v12;
        v11 = (int)dword_140404A6C[7166 * v12 + 280651318] <= 0;
      }
    }
    if ( dword_140404A6C[284024361] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024361];
      v13 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v13 != -1 )
      {
        a1 = 7166 * v13;
        if ( (int)dword_140404A6C[7166 * v13 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024362] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024362];
      v14 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v14 != -1 )
      {
        a1 = 7166 * v14;
        if ( (int)dword_140404A6C[7166 * v14 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024363] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024363];
      v15 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v15 != -1 )
      {
        a1 = 7166 * v15;
        if ( (int)dword_140404A6C[7166 * v15 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024364] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024364];
      v16 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v16 != -1 )
      {
        a1 = 7166 * v16;
        if ( (int)dword_140404A6C[7166 * v16 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024365] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024365];
      v17 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v17 != -1 )
      {
        a1 = 7166 * v17;
        if ( (int)dword_140404A6C[7166 * v17 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024366] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024366];
      v18 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v18 != -1 )
      {
        a1 = 7166 * v18;
        if ( (int)dword_140404A6C[7166 * v18 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024367] == -1
      || (a1 = 3597LL * (int)dword_140404A6C[284024367], v19 = (int)dword_140404A6C[a1 + 71856292], (_DWORD)v19 == -1)
      || (a1 = 7166 * v19, (int)dword_140404A6C[7166 * v19 + 280651318] <= 0) )
    {
      if ( v11 && (int)v10 > 300 )
      {
        v10 = 300;
        dword_140404A6C[284024376] = 1;
        dword_140404A6C[283831450] = 300;
      }
    }
    if ( dword_140404A6C[284024368] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024368];
      v20 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v20 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v20;
        if ( (int)dword_140404A6C[7166 * v20 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024369] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024369];
      v21 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v21 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v21;
        if ( (int)dword_140404A6C[7166 * v21 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024370] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024370];
      v22 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v22 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v22;
        if ( (int)dword_140404A6C[7166 * v22 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024371] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024371];
      v23 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v23 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v23;
        if ( (int)dword_140404A6C[7166 * v23 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024372] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024372];
      v24 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v24 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v24;
        if ( (int)dword_140404A6C[7166 * v24 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024373] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024373];
      v25 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v25 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v25;
        if ( (int)dword_140404A6C[7166 * v25 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024374] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024374];
      v26 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v26 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v26;
        if ( (int)dword_140404A6C[7166 * v26 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    result = (int)dword_140404A6C[284024375];
    if ( (dword_140404A6C[284024375] != -1
       && ((a1 = 3597LL * (int)dword_140404A6C[284024375],
            result = (int)dword_140404A6C[a1 + 71856292],
            (_DWORD)result == -1)
        || (a1 = 7166 * result, (int)dword_140404A6C[7166 * result + 280651318] <= 0))
       || v2)
      && (int)v10 > 300 )
    {
      dword_140404A6C[283831450] = 300;
      dword_140404A6C[284024376] = 2;
    }
    else if ( (int)v10 <= 0 )
    {
      return sr_ResetGame(a1 * 4, v11, v10);
    }
  }
  return result;
}

// 1400F601F: variable 'a1' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183F7C34C: using guessed type unsigned int;

//----- (00000001400F80A0) ----------------------------------------------------
__int64            sub_1400F80A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r8
  int v4; // edi
  int v5; // edx
  __int64 v6; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned int *v10; // r13
  int v11; // r15d
  unsigned int *v12; // rax
  int *v13; // rdx
  int j; // ecx
  int v15; // r12d
  int v16; // eax
  int v17; // r12d
  int v18; // edx
  unsigned int *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rsi
  int v22; // edx
  unsigned int *v23; // rdi
  __int64 v24; // rcx
  unsigned int *v25; // rsi
  int v26; // edx
  unsigned int *v27; // rdi
  __int64 v28; // rcx
  unsigned int *v29; // rsi
  int v30; // esi
  int v31; // eax
  __int64 v32; // rdi
  bool v33; // cc
  int v34; // edx
  __int64 v35; // rdi
  float v36; // xmm6_4
  float v37; // xmm7_4
  unsigned int v38; // eax
  __m128i v39; // xmm0
  signed int v40; // eax
  signed int v41; // eax
  __int64 v42; // r12
  unsigned int *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rcx
  unsigned int v46; // r15d
  int v47; // r9d
  unsigned int v48; // r10d
  __int64 v49; // r11
  unsigned int *v50; // r8
  int v51; // r12d
  __int64 v52; // rax
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // r13d
  __int64 v57; // r12
  unsigned int v58; // eax
  int v59; // r15d
  int v60; // edi
  int v61; // esi
  int v62; // ecx
  __int64 v63; // rdx
  unsigned int *v64; // rax
  unsigned int v65; // edi
  signed int v66; // eax
  float v67; // xmm8_4
  float v68; // xmm9_4
  float v69; // xmm11_4
  double v70; // xmm2_8
  __int64 v71; // rdx
  __int64 v72; // rdi
  float v73; // xmm8_4
  float v74; // xmm9_4
  float v75; // xmm11_4
  float v76; // xmm6_4
  float v77; // xmm7_4
  float v78; // xmm8_4
  float v79; // xmm9_4
  float v80; // xmm6_4
  float v81; // xmm7_4
  unsigned int v82; // eax
  __int64 v83; // rdi
  signed int v84; // eax
  float v85; // xmm6_4
  float v86; // xmm7_4
  float v87; // xmm8_4
  __int64 v88; // rdx
  unsigned int v89; // edx
  unsigned int v90; // edi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // edi
  unsigned int *v95; // rdx
  __int64 v96; // rax
  unsigned int *v97; // r13
  signed int v98; // r11d
  signed int v99; // edi
  int v100; // r12d
  unsigned int *v101; // rax
  int v102; // r8d
  int v103; // esi
  unsigned int *v104; // rdx
  __int64 v105; // r10
  __int64 v106; // rax
  unsigned int v107; // xmm1_4
  unsigned int v108; // r10d
  int v109; // esi
  unsigned int *v110; // rdi
  unsigned int v111; // xmm0_4
  unsigned int v112; // xmm2_4
  unsigned int v113; // xmm1_4
  unsigned int v114; // eax
  __int64 v115; // rcx
  unsigned int v116; // edx
  __int64 v117; // rax
  unsigned int v118; // xmm0_4
  unsigned int v119; // eax
  unsigned int v120; // xmm1_4
  unsigned int v121; // xmm0_4
  __int64 v122; // rcx
  unsigned int v123; // edx
  unsigned int v124; // eax
  int v125; // edi
  __int64 v126; // rcx
  float v127; // xmm1_4
  float v128; // xmm0_4
  int v129; // esi
  int v130; // edi
  int v131; // r15d
  int v132; // edi
  float *v133; // rsi
  float v134; // xmm1_4
  int v135; // ecx
  int v136; // edi
  int v137; // edx
  char v138; // cl
  float *v139; // r12
  int i; // r13d
  double v141; // xmm2_8
  float v142; // xmm12_4
  float v143; // xmm9_4
  float v144; // xmm13_4
  __int64 v145; // rcx
  float v146; // xmm7_4
  float v147; // xmm6_4
  float v148; // xmm9_4
  float v149; // xmm8_4
  float v150; // xmm12_4
  float v151; // xmm13_4
  float v152; // xmm3_4
  float v153; // xmm4_4
  float v154; // xmm5_4
  unsigned int *v155; // rax
  __int64 v156; // r15
  int v157; // edi
  int v158; // esi
  float v159; // xmm12_4
  float v160; // xmm9_4
  float v161; // xmm13_4
  float v162; // xmm6_4
  float v163; // xmm7_4
  float v164; // xmm8_4
  float v165; // xmm9_4
  float v166; // xmm6_4
  float v167; // xmm7_4
  float v168; // xmm6_4
  float v169; // xmm7_4
  float v170; // xmm8_4
  unsigned int v171; // eax
  __int64 v172; // rdi
  int v173; // edi
  int v174; // ecx
  unsigned int *v175; // rdx
  __int64 v176; // rax
  int v177; // ecx
  unsigned int *v178; // r9
  __int64 v179; // rdx
  unsigned int v180; // r11d
  int v181; // r9d
  signed int v182; // esi
  unsigned int *v183; // rdi
  unsigned int v184; // edx
  __int64 v185; // rcx
  int v186; // eax
  __int64 v188; // [rsp-20h] [rbp-1610h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F80A0[10608];
#define v189 (*(unsigned int (*))(void *)(sr_frame_1400F80A0 + 8)) /* [rsp+0h] */
#define v190 (*(float (*))(void *)(sr_frame_1400F80A0 + 24)) /* [rsp+10h] */
#define v191 (*(float (*))(void *)(sr_frame_1400F80A0 + 28)) /* [rsp+14h] */
#define v192 (*(float (*))(void *)(sr_frame_1400F80A0 + 32)) /* [rsp+18h] */
#define v193 (*(int (*))(void *)(sr_frame_1400F80A0 + 40)) /* [rsp+20h] */
#define v194 (*(__int128 (*))(void *)(sr_frame_1400F80A0 + 48)) /* [rsp+28h] */
#define v195 (*(__int128 (*))(void *)(sr_frame_1400F80A0 + 64)) /* [rsp+38h] */
#define v196 (*(int (*))(void *)(sr_frame_1400F80A0 + 80)) /* [rsp+48h] */
#define v197 (*(_BYTE (*)[5136])(void *)(sr_frame_1400F80A0 + 88)) /* [rsp+50h] */
#define v198 (*(_DWORD (*)[1024])(void *)(sr_frame_1400F80A0 + 6504)) /* [rsp+1960h] */
#define v199 (*(__int64 (*))(void *)(sr_frame_1400F80A0 + 10600)) /* [rsp+2960h] */

  if ( dword_140404A6C[283831448] != 1 )
  {
    if ( dword_140404A6C[283831448] != 2 )
    {
      if ( dword_140404A6C[283831448] == 3 && (int)--dword_140404A6C[283831450] <= 0 )
        sr_ResetGame(a1, a2, a3);
      return 0; /* no result: rax is residue at the exit */
    }
    v97 = &dword_140404A6C[71859139];
    v98 = dword_140404A6C[283831450] - 1;
    v99 = dword_140404A6C[283831451] + 1;
    --dword_140404A6C[283831450];
    v100 = 0;
    ++dword_140404A6C[283831451];
    v101 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v101 - 2886) && !*v101 && *(v101 - 2868) )
        ++v100;
      v101 += 3597;
    }
    while ( (__int64)v101 < (__int64)&dword_140404A6C[72779971] );
    v102 = dword_140404A6C[284022317];
    v103 = 1800;
    if ( v99 < 18000 )
      v103 = 2700;
    if ( v99 >= 28800 )
      v103 = 900;
    if ( v99 >= 39600 )
      v103 = 300;
    if ( (int)dword_140404A6C[284022317] > 0 )
    {
      v104 = &dword_140404A6C[284022318];
      v105 = dword_140404A6C[284022317];
      do
      {
        v106 = (int)dword_140404A6C[3597 * *v104 + 71856292];
        if ( (_DWORD)v106 != -1 )
        {
          v107 = dword_140404A6C[7166 * v106 + 280651441];
          dword_140404A6C[284022477] = dword_140404A6C[7166 * v106 + 280651440];
          dword_140404A6C[284022479] = dword_140404A6C[7166 * v106 + 280651442];
          dword_140404A6C[284022478] = v107;
        }
        v104 += 9;
        --v105;
      }
      while ( v105 );
    }
    v108 = dword_140404A6C[456202453];
    if ( v99 >= 7200 && !(v98 % v103) )
    {
      v109 = 0;
      if ( (int)dword_140404A6C[284022317] > 0 )
      {
        v110 = &dword_140404A6C[284022325];
        do
        {
          v111 = *(v110 - 1);
          *(v110 - 4) = v111;
          v112 = *v110;
          *(v110 - 3) = *v110;
          v113 = v110[1];
          *(v110 - 2) = v113;
          if ( (int)dword_140404A6C[283831451] >= 10800 && v108 )
          {
            v114 = dword_140404A6C[283831474];
            v115 = (__int64)(int)dword_140404A6C[308307070] << 7;
            v116 = dword_140404A6C[308307070] + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v115) = 21;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v115) = v114;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v115) = *(v110 - 6);
            *(_QWORD *)((char *)&dword_140404A6C[297756294] + v115) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v115) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v115) = v111;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v115) = v112;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v115) = v113;
            dword_140404A6C[308307070] = v116;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v117 = (int)dword_140404A6C[3597 * *(v110 - 7) + 71856292];
          if ( (_DWORD)v117 == -1 )
          {
            *(v110 - 1) = dword_140404A6C[284022477];
            *v110 = dword_140404A6C[284022478];
            v118 = dword_140404A6C[284022479];
          }
          else
          {
            v118 = dword_140404A6C[7166 * v117 + 280651442];
            *(v110 - 1) = dword_140404A6C[7166 * v117 + 280651440];
            *v110 = dword_140404A6C[7166 * v117 + 280651441];
          }
          v110[1] = v118;
          if ( v108 )
          {
            v119 = dword_140404A6C[283831474];
            v120 = v110[1];
            v121 = *v110;
            v122 = (__int64)(int)dword_140404A6C[308307070] << 7;
            v123 = dword_140404A6C[308307070] + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v122) = 21;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v122) = v119;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v122) = *(v110 - 5);
            v124 = *(v110 - 1);
            *(_QWORD *)((char *)&dword_140404A6C[297756294] + v122) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v122) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v122) = v124;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v122) = v121;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v122) = v120;
            dword_140404A6C[308307070] = v123;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v102 = dword_140404A6C[284022317];
          ++v109;
          v110 += 9;
        }
        while ( v109 < (int)dword_140404A6C[284022317] );
        v99 = dword_140404A6C[283831451];
        v98 = dword_140404A6C[283831450];
      }
    }
    if ( v99 < 10800 || v99 != 3600 * (v99 / 3600) )
    {
LABEL_204:
      v173 = 0;
      v174 = 0;
      if ( v102 <= 0 )
      {
LABEL_209:
        dword_140404A6C[283831505] = 100;
        v173 = 1;
        dword_140404A6C[283837378] = 0;
        dword_140404A6C[283843251] = 100;
      }
      else
      {
        v175 = &dword_140404A6C[284022319];
        while ( 1 )
        {
          v176 = 3597LL * (int)*v175;
          if ( dword_140404A6C[v176 + 71856253] )
          {
            if ( dword_140404A6C[v176 + 71856292] != -1 )
              break;
          }
          ++v174;
          v175 += 9;
          if ( v174 >= v102 )
            goto LABEL_209;
        }
      }
      v177 = 0;
      if ( v102 <= 0 )
      {
LABEL_215:
        dword_140404A6C[283831505] = 0;
        dword_140404A6C[283837378] = 100;
        dword_140404A6C[283843251] = 0;
      }
      else
      {
        v178 = &dword_140404A6C[284022318];
        while ( 1 )
        {
          v179 = 3597LL * (int)*v178;
          if ( dword_140404A6C[v179 + 71856253] )
          {
            if ( dword_140404A6C[v179 + 71856292] != -1 )
              break;
          }
          ++v177;
          v178 += 9;
          if ( v177 >= v102 )
            goto LABEL_215;
        }
        if ( !v173 )
        {
          if ( v98 > 0 )
            return 0; /* no result: rax is residue at the exit */
          dword_140404A6C[283831505] = 100;
          dword_140404A6C[283837378] = 0;
          dword_140404A6C[283843251] = 100;
        }
      }
      v180 = dword_140404A6C[283831474];
      v181 = 0;
      dword_140404A6C[283831448] = 3;
      dword_140404A6C[283831450] = 1200;
      do
      {
        if ( *(v97 - 2886) )
        {
          if ( !*v97 )
          {
            v182 = 0;
            if ( v102 > 0 )
            {
              v183 = &dword_140404A6C[284022319];
              do
              {
                if ( v108 )
                {
                  v184 = dword_140404A6C[308307070];
                  v185 = (__int64)(int)dword_140404A6C[308307070] << 7;
                  v186 = *(v183 - 1) + ((*v183 + (v183[1] << 10)) << 10);
                  *(unsigned int *)((char *)&dword_140404A6C[297756285] + v185) = 21;
                  *(unsigned int *)((char *)&dword_140404A6C[297756286] + v185) = v180;
                  *(unsigned int *)((char *)&dword_140404A6C[297756293] + v185) = v181;
                  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v185) = 2;
                  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v185) = v182;
                  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v185) = v186;
                  dword_140404A6C[308307070] = v184 + 1;
                  *(_QWORD *)((char *)&dword_140404A6C[297756287] + v185) = 0;
                  *(unsigned int *)((char *)&dword_140404A6C[297756289] + v185) = 0;
                  HIWORD(dword_140404A6C[308307070]) = 0;
                }
                ++v182;
                v183 += 9;
              }
              while ( v182 < v102 );
            }
          }
        }
        ++v181;
        v97 += 3597;
      }
      while ( v181 < 256 );
      return 0; /* no result: rax is residue at the exit */
    }
    v125 = rand() % 8;
    sub_1400A56B0(&v190, 0.25, 0.0);
    v126 = 19LL * v125;
    v196 = 1065353216;
    v127 = v191 + *(float *)&dword_140404A6C[v126 + 487148757];
    v190 = v190 + *(float *)&dword_140404A6C[v126 + 487148756];
    v128 = v192 + *(float *)&dword_140404A6C[v126 + 487148758];
    v191 = v127;
    v192 = v128;
    v194 = xmmword_140278D30;
    v195 = xmmword_140278D30;
    sr_CreateItem(13, &v190, nullptr, (float *)&v194);
    v129 = rand() % 8;
    v130 = rand() % 5;
    if ( v130 )
    {
      if ( v130 == 1 )
      {
        v131 = 7;
      }
      else if ( v130 == 2 )
      {
        v131 = 1;
      }
      else
      {
        v131 = 9;
        if ( v130 == 3 )
          v131 = 3;
      }
    }
    else
    {
      v131 = 11;
    }
    v132 = 0;
    v133 = (float *)&dword_140404A6C[19 * v129 + 487148756];
    do
    {
      sub_1400A56B0(&v190, 1.0, 0.0);
      v134 = v192 + v133[2];
      v135 = v131;
      v190 = v190 + *v133;
      if ( v132 )
        v135 = v131 + 1;
      v191 = v133[1];
      v192 = v134;
      sr_CreateItem(v135, &v190, nullptr, (float *)&v194);
      ++v132;
    }
    while ( v132 < 4 );
    v136 = rand() % 3;
    v137 = 1 << v136;
    v193 = 1 << v136;
    if ( v100 <= 14 )
    {
      if ( v100 <= 7 )
        goto LABEL_166;
      v138 = 0;
      if ( v136 + 1 <= 2 )
        v138 = v136 + 1;
      v137 |= 1 << v138;
    }
    else
    {
      v137 = 7;
    }
    v193 = v137;
LABEL_166:
    v139 = (float *)&dword_140404A6C[283831500];
    for ( i = 0; i < 3; ++i )
    {
      if ( ((v137 >> i) & 1) != 0 )
      {
        *(_QWORD *)&v141 = *((unsigned int *)v139 - 3);
        v142 = *(v139 - 2);
        v143 = *(v139 - 1);
        v144 = *v139;
        v194 = xmmword_140278D30;
        v196 = 1065353216;
        v195 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v194, (float *)&v194 + 3, v141);
        sub_14007B2A0((__int64)&v194, (float *)&v194 + 3, sr_export_float_lane_container(1078530011));
        v145 = 16;
        v146 = *((float *)&v194 + 1) * 0.375;
        v147 = *(float *)&v194 * 0.375;
        v148 = v143 + (float)(*((float *)&v194 + 1) * 0.375);
        v149 = *((float *)&v194 + 2) * 0.375;
        v150 = v142 + (float)(*(float *)&v194 * 0.375);
        v151 = v144 + (float)(*((float *)&v194 + 2) * 0.375);
        v191 = v148;
        v152 = v148 - 0.5;
        v190 = v150;
        v153 = v150;
        v192 = v151;
        v154 = v151;
        do
        {
          v155 = &dword_140404A6C[278845918];
          do
          {
            if ( *(v155 - 25)
              && fsqrt(
                   (float)((float)((float)(v152 - *((float *)v155 - 1)) * (float)(v152 - *((float *)v155 - 1)))
                         + (float)((float)(v153 - *((float *)v155 - 2)) * (float)(v153 - *((float *)v155 - 2))))
                 + (float)((float)(v154 - *(float *)v155) * (float)(v154 - *(float *)v155))) < 0.5
              && *(v155 - 16) == -1 )
            {
              *(v155 - 18) = 0;
            }
            if ( v155[1735]
              && fsqrt(
                   (float)((float)((float)(v152 - *((float *)v155 + 1759)) * (float)(v152 - *((float *)v155 + 1759)))
                         + (float)((float)(v153 - *((float *)v155 + 1758)) * (float)(v153 - *((float *)v155 + 1758))))
                 + (float)((float)(v154 - *((float *)v155 + 1760)) * (float)(v154 - *((float *)v155 + 1760)))) < 0.5
              && v155[1744] == -1 )
            {
              v155[1742] = 0;
            }
            if ( v155[3495]
              && fsqrt(
                   (float)((float)((float)(v152 - *((float *)v155 + 3519)) * (float)(v152 - *((float *)v155 + 3519)))
                         + (float)((float)(v153 - *((float *)v155 + 3518)) * (float)(v153 - *((float *)v155 + 3518))))
                 + (float)((float)(v154 - *((float *)v155 + 3520)) * (float)(v154 - *((float *)v155 + 3520)))) < 0.5
              && v155[3504] == -1 )
            {
              v155[3502] = 0;
            }
            if ( v155[5255]
              && fsqrt(
                   (float)((float)((float)(v152 - *((float *)v155 + 5279)) * (float)(v152 - *((float *)v155 + 5279)))
                         + (float)((float)(v153 - *((float *)v155 + 5278)) * (float)(v153 - *((float *)v155 + 5278))))
                 + (float)((float)(v154 - *((float *)v155 + 5280)) * (float)(v154 - *((float *)v155 + 5280)))) < 0.5
              && v155[5264] == -1 )
            {
              v155[5262] = 0;
            }
            v155 += 7040;
          }
          while ( (__int64)v155 < (__int64)&dword_140404A6C[280648158] );
          v153 = v153 + v147;
          v152 = v152 + v146;
          v154 = v154 + v149;
          --v145;
        }
        while ( v145 );
        v156 = 3;
        do
        {
          v157 = rand() % 5;
          if ( v157 )
          {
            if ( v157 == 1 )
            {
              v158 = 7;
            }
            else if ( v157 == 2 )
            {
              v158 = 1;
            }
            else
            {
              v158 = 9;
              if ( v157 == 3 )
                v158 = 3;
            }
          }
          else
          {
            v158 = 11;
          }
          sr_CreateItem(v158, &v190, nullptr, (float *)&v194);
          v159 = v150 + (float)(*(float *)&v194 * 0.375);
          v160 = v148 + (float)(*((float *)&v194 + 1) * 0.375);
          v190 = v159;
          v191 = v160;
          v161 = v151 + (float)(*((float *)&v194 + 2) * 0.375);
          v192 = v161;
          sr_CreateItem(v158 + 1, &v190, nullptr, (float *)&v194);
          v162 = (float)(*(float *)&v194 * 0.375) + v159;
          v163 = (float)(*((float *)&v194 + 1) * 0.375) + v160;
          v164 = (float)(*((float *)&v194 + 2) * 0.375) + v161;
          v190 = v162;
          v191 = v163;
          v192 = v164;
          sr_CreateItem(v158 + 1, &v190, nullptr, (float *)&v194);
          v165 = (float)(*(float *)&v194 * 0.375) + v162;
          v166 = (float)(*((float *)&v194 + 1) * 0.375) + v163;
          v190 = v165;
          v191 = v166;
          v167 = (float)(*((float *)&v194 + 2) * 0.375) + v164;
          v192 = v167;
          sr_CreateItem(v158 + 1, &v190, nullptr, (float *)&v194);
          v150 = (float)(*(float *)&v194 * 0.375) + v165;
          v151 = (float)(*((float *)&v194 + 2) * 0.375) + v167;
          v190 = v150;
          v148 = (float)(*((float *)&v194 + 1) * 0.375) + v166;
          v192 = v151;
          v191 = v148;
          --v156;
        }
        while ( v156 );
        sr_CreateItem(13, &v190, nullptr, (float *)&v194);
        v168 = (float)(*(float *)&v194 * 0.375) + v150;
        v169 = (float)(*((float *)&v194 + 1) * 0.375) + v148;
        v170 = (float)(*((float *)&v194 + 2) * 0.375) + v151;
        v190 = v168;
        v191 = v169;
        v192 = v170;
        v171 = (rand() & 1) + 1;
        if ( v171 )
        {
          v172 = v171;
          do
          {
            sr_CreateItem(14, &v190, nullptr, (float *)&v194);
            v168 = v168 + (float)(*(float *)&v194 * 0.375);
            v169 = v169 + (float)(*((float *)&v194 + 1) * 0.375);
            v190 = v168;
            v170 = v170 + (float)(*((float *)&v194 + 2) * 0.375);
            v191 = v169;
            v192 = v170;
            --v172;
          }
          while ( v172 );
        }
        v137 = v193;
      }
      v139 += 5873;
    }
    v102 = dword_140404A6C[284022317];
    v98 = dword_140404A6C[283831450];
    v97 = &dword_140404A6C[71859139];
    v108 = dword_140404A6C[456202453];
    goto LABEL_204;
  }
  v3 = &dword_140404A6C[71859139];
  v4 = 0;
  v5 = 1;
  v6 = 256;
  do
  {
    if ( *(v3 - 2886) && !*v3 )
    {
      v7 = v4 + 1;
      if ( !*(v3 - 2868) )
      {
        v7 = v4;
        v5 = 0;
      }
      v4 = v7;
    }
    v3 += 3597;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  v9 = --dword_140404A6C[283831450];
  if ( v4 >= 3 )
    v8 = v5;
  if ( v8 )
  {
    if ( v9 > 180 )
      v9 = 180;
    dword_140404A6C[283831450] = v9;
  }
  if ( v4 < 3 && v9 < 1800 )
  {
    dword_140404A6C[283831450] = 1800;
    return 0; /* no result: rax is residue at the exit */
  }
  if ( v9 > 0 )
    return 0; /* no result: rax is residue at the exit */
  sub_14012E960(128);
  *(_OWORD *)&dword_140404A6C[284022317] = 0;
  if ( (int)dword_140404A6C[225391228] > 0 )
    sub_1401FCD30((void *)(uintptr_t)(v198), 0, 4LL * (int)dword_140404A6C[225391228]);
  v10 = &dword_140404A6C[71856271];
  v11 = 0;
  v12 = &dword_140404A6C[71856271];
  v13 = (int *)v197;
  for ( j = 0; j < 256; ++j )
  {
    if ( *(v12 - 18) && *v12 && !v12[2868] )
    {
      ++v11;
      *v13++ = j;
    }
    v12 += 3597;
  }
  dword_140404A6C[284022316] = v11;
  v15 = rand() % 3;
  v16 = dword_140404A6C[284022317];
  v17 = v15 + 3;
  while ( (!v16 || v11 >= v17) && v16 < 8 )
  {
    if ( v11 > 0 )
    {
      v18 = rand() % v11--;
      v19 = (unsigned int *)&v197[4 * v18];
      dword_140404A6C[9 * dword_140404A6C[284022317] + 284022319] = *v19;
      if ( v18 < (__int64)v11 )
      {
        v20 = v11 - (__int64)v18;
        v21 = (unsigned int *)&v197[4 * v18 + 4];
        while ( v20 )
        {
          *v19++ = *v21++;
          --v20;
        }
      }
      if ( v11 > 0 )
      {
        v22 = rand() % v11--;
        v23 = (unsigned int *)&v197[4 * v22];
        dword_140404A6C[9 * dword_140404A6C[284022317] + 284022318] = *v23;
        if ( v22 < (__int64)v11 )
        {
          v24 = v11 - (__int64)v22;
          v25 = (unsigned int *)&v197[4 * v22 + 4];
          while ( v24 )
          {
            *v23++ = *v25++;
            --v24;
          }
        }
        if ( v11 > 0 )
        {
          v26 = rand() % v11--;
          v27 = (unsigned int *)&v197[4 * v26];
          dword_140404A6C[9 * dword_140404A6C[284022317] + 284022320] = *v27;
          if ( v26 < (__int64)v11 )
          {
            v28 = v11 - (__int64)v26;
            v29 = (unsigned int *)&v197[4 * v26 + 4];
            while ( v28 )
            {
              *v27++ = *v29++;
              --v28;
            }
          }
        }
      }
      v16 = dword_140404A6C[284022317];
    }
    dword_140404A6C[284022317] = ++v16;
  }
  v30 = 0;
  v31 = 0;
  v193 = 0;
  v32 = 0xC000100040000LL;
  do
  {
    if ( !*(v10 - 18) || !*v10 || v10[2868] )
      goto LABEL_79;
    v33 = (signed int)dword_140404A6C[225391228] <= 0;
    v10[15] = 0;
    if ( v33 )
    {
      v34 = 0;
    }
    else
    {
      do
      {
        do
          v34 = rand() % (signed int)dword_140404A6C[225391228];
        while ( (unsigned int)v34 <= 0x33 && _bittest64(&v32, v34) );
      }
      while ( v198[v34] );
      v198[v34] = 1;
    }
    v35 = 34LL * v34;
    v194 = xmmword_140278D30;
    v195 = xmmword_140278D30;
    v196 = 1065353216;
    v36 = *(float *)&dword_140404A6C[v35 + 225391233];
    v37 = *(float *)&dword_140404A6C[v35 + 225391235];
    v191 = *(float *)&dword_140404A6C[v35 + 225391234] + 1.0;
    sub_14007B2A0((__int64)&v194, (float *)&v194 + 3, 0.0);
    v38 = dword_140404A6C[v35 + 225391242] - 1;
    *((_QWORD *)v10 + 1775) = 1;
    v39 = _mm_cvtsi32_si128(v38);
    v40 = dword_140404A6C[v35 + 225391243] - 1;
    v190 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v39), f32)[0] * 4.0) + v36;
    v192 = (float)((float)v40 * 4.0) + v37;
    v41 = sub_140053840(&v190, (float *)&v194, v30);
    v42 = dword_140404A6C[284022317];
    v10[21] = v41;
    if ( v41 != -1 )
    {
      if ( (int)v42 > 0 )
      {
        v43 = &dword_140404A6C[284022319];
        v44 = (unsigned int)v42;
        do
        {
          if ( v30 == *v43 )
          {
            v45 = 7166LL * v41;
            dword_140404A6C[v45 + 280651318] = 100;
            dword_140404A6C[v45 + 280651319] = 1;
          }
          v43 += 9;
          --v44;
        }
        while ( v44 );
      }
      dword_140404A6C[7166 * v41 + 280651341] = 0;
    }
    v10[71] = 0;
    sub_140051DC0(v30);
    v46 = dword_140404A6C[283831474];
    v47 = 0;
    v48 = dword_140404A6C[456202453];
    if ( (int)v42 <= 0 )
    {
LABEL_76:
      v32 = 0xC000100040000LL;
      if ( v48 )
      {
        v55 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v55) = 21;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v55) = v46;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v55) = v30;
        *(_QWORD *)((char *)&dword_140404A6C[297756294] + v55) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v55) = 0;
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v55) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v55) = 0;
      }
      v31 = v193;
      goto LABEL_79;
    }
    v49 = v42;
    v50 = &dword_140404A6C[284022320];
    v51 = v193;
    do
    {
      if ( v30 == *(v50 - 1) )
      {
        v47 = 1;
        if ( !v48 )
          goto LABEL_74;
        v52 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v52) = 21;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v52) = v46;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v52) = v30;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v52) = 0;
        *(_QWORD *)((char *)&dword_140404A6C[297756295] + v52) = 1;
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v52) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v52) = 0;
        goto LABEL_73;
      }
      if ( v30 == *v50 )
      {
        v47 = 1;
        if ( v48 )
        {
          v53 = *(v50 - 2);
          v54 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v54) = 21;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v54) = v46;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v54) = v30;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v54) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v54) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v54) = v51 + v53;
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v54) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v54) = 0;
LABEL_73:
          HIWORD(dword_140404A6C[308307070]) = 0;
        }
      }
LABEL_74:
      v50 += 9;
      --v49;
    }
    while ( v49 );
    if ( !v47 )
      goto LABEL_76;
    v31 = v51;
    v32 = 0xC000100040000LL;
LABEL_79:
    v31 += 1024;
    ++v30;
    v10 += 3597;
    v193 = v31;
  }
  while ( v31 < 0x40000 );
  v56 = 0;
  v57 = 0;
  do
  {
    v58 = rand() & 0xF;
    if ( v58 >= 6 )
    {
      v59 = 6;
      if ( v58 >= 0xB )
        v59 = 16;
      v60 = rand() % 6;
    }
    else
    {
      v59 = 15;
      v60 = rand() % 6;
    }
    v61 = dword_140404A6C[v57 + 283836331];
    v62 = 0;
    v63 = 0;
    if ( v61 <= 0 )
    {
LABEL_91:
      v65 = -1;
    }
    else
    {
      v64 = &dword_140404A6C[v57 + 283836332];
      while ( *v64 )
      {
        ++v62;
        ++v63;
        v64 += 13;
        if ( v62 >= v61 )
          goto LABEL_91;
      }
      v189 = v60;
      dword_140404A6C[13 * v63 + 283836332 + v57] = 1;
      v65 = sr_CreateVehicle(
              v59,
              (float *)&dword_140404A6C[5873 * v56 + 283836333 + 13 * v62],
              nullptr,
              &dword_140404A6C[5873 * v56 + 283836336 + 13 * v62],
              v189);
    }
    v66 = sub_14012CEB0(v59, 0, 0, 0, 0, 0.0);
    v67 = *(float *)&dword_140404A6C[v57 + 283831498];
    v68 = *(float *)&dword_140404A6C[v57 + 283831499];
    v69 = *(float *)&dword_140404A6C[v57 + 283831500];
    *(_QWORD *)&v70 = dword_140404A6C[v57 + 283831497];
    v71 = 383LL * v66;
    v190 = v67;
    v191 = v68;
    v192 = v69;
    v194 = xmmword_140278D30;
    v195 = xmmword_140278D30;
    v196 = 1065353216;
    dword_140404A6C[v71 + 132400668] = 0;
    dword_140404A6C[v71 + 132400639] = v65;
    dword_140404A6C[5210 * v65 + 129720183] = v66;
    sub_14007B2A0((__int64)&v194, (float *)&v194 + 3, v70);
    sub_14007B2A0((__int64)&v194, (float *)&v194 + 3, sr_export_float_lane_container(1078530011));
    v72 = 3;
    do
    {
      rand();
      sr_CreateItem(11, &v190, nullptr, (float *)&v194);
      v73 = v67 + (float)(*(float *)&v194 * 0.375);
      v74 = v68 + (float)(*((float *)&v194 + 1) * 0.375);
      v190 = v73;
      v191 = v74;
      v75 = v69 + (float)(*((float *)&v194 + 2) * 0.375);
      v192 = v75;
      sr_CreateItem(12, &v190, nullptr, (float *)&v194);
      v76 = (float)(*(float *)&v194 * 0.375) + v73;
      v77 = (float)(*((float *)&v194 + 1) * 0.375) + v74;
      v78 = (float)(*((float *)&v194 + 2) * 0.375) + v75;
      v190 = v76;
      v191 = v77;
      v192 = v78;
      sr_CreateItem(12, &v190, nullptr, (float *)&v194);
      v79 = (float)(*(float *)&v194 * 0.375) + v76;
      v80 = (float)(*((float *)&v194 + 1) * 0.375) + v77;
      v190 = v79;
      v191 = v80;
      v81 = (float)(*((float *)&v194 + 2) * 0.375) + v78;
      v192 = v81;
      sr_CreateItem(12, &v190, nullptr, (float *)&v194);
      v67 = (float)(*(float *)&v194 * 0.375) + v79;
      v69 = (float)(*((float *)&v194 + 2) * 0.375) + v81;
      v190 = v67;
      v68 = (float)(*((float *)&v194 + 1) * 0.375) + v80;
      v192 = v69;
      v191 = v68;
      --v72;
    }
    while ( v72 );
    v82 = (rand() & 1) + 1;
    if ( v82 )
    {
      v83 = v82;
      do
      {
        sr_CreateItem(14, &v190, nullptr, (float *)&v194);
        v67 = v67 + (float)(*(float *)&v194 * 0.375);
        v68 = v68 + (float)(*((float *)&v194 + 1) * 0.375);
        v190 = v67;
        v69 = v69 + (float)(*((float *)&v194 + 2) * 0.375);
        v191 = v68;
        v192 = v69;
        --v83;
      }
      while ( v83 );
    }
    v84 = sr_CreateItem(25, &v190, nullptr, (float *)&v194);
    v85 = (float)(*(float *)&v194 * 0.375) + v67;
    v86 = (float)(*((float *)&v194 + 1) * 0.375) + v68;
    v190 = v85;
    v87 = (float)(*((float *)&v194 + 2) * 0.375) + v69;
    v191 = v86;
    v192 = v87;
    if ( v84 != -1 )
    {
      v88 = 1760LL * v84;
      dword_140404A6C[v88 + 278846051] = 0;
      dword_140404A6C[v88 + 278845981] = 1111 * (v56 + 1);
      sub_140051940(v84);
    }
    sr_CreateItem(35, &v190, nullptr, (float *)&v194);
    ++v56;
    v57 += 5873;
    v190 = (float)(*(float *)&v194 * 0.375) + v85;
    v191 = (float)(*((float *)&v194 + 1) * 0.375) + v86;
    v192 = (float)(*((float *)&v194 + 2) * 0.375) + v87;
  }
  while ( v56 < 3 );
  v89 = dword_140404A6C[456202453];
  v90 = dword_140404A6C[283831474];
  if ( dword_140404A6C[456202453] )
  {
    v91 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v91) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v91) = v90;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v91) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v91) = 1;
  }
  dword_140404A6C[283831509] = 1;
  if ( v89 )
  {
    v92 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v92) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v92) = v90;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v92) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v92) = 1;
  }
  dword_140404A6C[283837382] = 1;
  if ( v89 )
  {
    v93 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    HIWORD(dword_140404A6C[308307070]) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v93) = 10;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v93) = v90;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v93) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v93) = 1;
  }
  v94 = 0;
  dword_140404A6C[283843255] = 1;
  if ( (int)dword_140404A6C[284022317] > 0 )
  {
    v95 = &dword_140404A6C[284022326];
    do
    {
      *((_QWORD *)v95 - 1) = 0;
      *v95 = 0;
      v96 = (int)dword_140404A6C[3597 * *(v95 - 8) + 71856292];
      if ( (_DWORD)v96 != -1 )
      {
        *(v95 - 2) = dword_140404A6C[7166 * v96 + 280651440];
        *(v95 - 1) = dword_140404A6C[7166 * v96 + 280651441];
        *v95 = dword_140404A6C[7166 * v96 + 280651442];
      }
      ++v94;
      v95 += 9;
    }
    while ( v94 < (int)dword_140404A6C[284022317] );
  }
  dword_140404A6C[283831448] = 2;
  *(_QWORD *)&dword_140404A6C[283831450] = 54000;
  return 0; /* no result: rax is residue at the exit */
}
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCCC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFCD8: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183EBFDB0: using guessed type unsigned int;
// 183EBFDC0: using guessed type unsigned int;
// 183EC5974: using guessed type unsigned int;
// 183EC5984: using guessed type unsigned int;
// 183ECB538: using guessed type unsigned int;
// 183ECB548: using guessed type unsigned int;
// 183F7A31C: using guessed type unsigned int;
// 183F7A320: using guessed type unsigned int;
// 183F7A5A0: using guessed type unsigned int;
// 183F7A5A4: using guessed type unsigned int;
// 183F7A5A8: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;

//----- (000000014010EE20) ----------------------------------------------------
__int64            sub_14010EE20(int a1)
{
  __int64 v1; // rbx

  v1 = 7166LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 280651305], 8);
  sub_140115D90(&dword_140404A6C[v1 + 280658439], 1);
  sub_140115D90(&dword_140404A6C[v1 + 280658440], 5);
  sub_140115D90(&dword_140404A6C[v1 + 280658441], 3);
  sub_140115D90(&dword_140404A6C[v1 + 280658443], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658444], 3);
  sub_140115D90(&dword_140404A6C[v1 + 280658442], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658445], 5);
  sub_140115D90(&dword_140404A6C[v1 + 280658446], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658447], 4);
  sub_140115D90(&dword_140404A6C[v1 + 280658449], 4);
  return sub_140115D90(&dword_140404A6C[v1 + 280658450], 2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140116D80) ----------------------------------------------------
void            sub_140116D80(int a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  float v8; // xmm6_4
  __int64 v9; // rax
  unsigned int v10; // eax
  __m128i v11; // xmm6
  __int64 v12; // rbp
  float *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  float v18; // xmm6_4
  int v19; // eax
  int v20; // eax

  if ( a1 == -1 )
    return;
  if ( a2 == -1 )
    return;
  if ( a1 == a2 )
    return;
  v4 = 3597LL * a1;
  if ( dword_140404A6C[v4 + 71856292] == -1 )
    return;
  v5 = 3597LL * a2;
  v6 = (int)dword_140404A6C[v5 + 71856292];
  if ( (_DWORD)v6 == -1
    || dword_140404A6C[v4 + 71859139]
    || dword_140404A6C[v5 + 71859139]
    || dword_140404A6C[283831312] != 4 )
  {
    return;
  }
  v7 = dword_140404A6C[v4 + 71856286];
  v8 = (float)(int)dword_140404A6C[284022486];
  if ( v7 == 17 )
  {
    v9 = (int)dword_140404A6C[7166 * v6 + 280651315];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = dword_140404A6C[5210 * v9 + 129716718];
      if ( v10 != -1 && v10 == a1 )
        return;
    }
    if ( dword_140404A6C[v5 + 71856286] == 17 )
      goto LABEL_27;
    v11 = _mm_cvtsi32_si128(dword_140404A6C[284022487]);
LABEL_26:
    v8 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v11), f32)[0];
    goto LABEL_27;
  }
  if ( v7 <= 5 )
  {
    v12 = 7166 * v6;
    v13 = (float *)&dword_140404A6C[7166 * v6 + 280651440];
    if ( sub_14011B8F0(v13, v7, 0.0) )
      return;
    v14 = (int)dword_140404A6C[v12 + 280651315];
    if ( (_DWORD)v14 != -1 )
    {
      v15 = (int)dword_140404A6C[5210 * v14 + 129716718];
      if ( (_DWORD)v15 != -1 && dword_140404A6C[3597 * v15 + 71856253] && dword_140404A6C[3597 * v15 + 71856286] == v7 )
        return;
    }
    v16 = dword_140404A6C[v5 + 71856286];
    if ( v16 == 17 )
    {
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022488]);
    }
    else
    {
      v8 = (float)(int)dword_140404A6C[284022489];
      if ( v16 > 5 || !sub_14011B8F0(v13, v16, 0.0) )
        goto LABEL_27;
      v11 = _mm_cvtsi32_si128(dword_140404A6C[284022490]);
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = dword_140404A6C[v5 + 71856276];
  v18 = v8 * 0.009999999776482582;
  if ( v17 > 0 )
    v18 = v18 * (float)(1.0 - fminf(fmaxf(fminf((float)v17 * 0.009999999776482582, 1.0), 0.0), 1.0));
  v19 = (int)(float)((float)a3 * v18);
  if ( v19 > 0 )
    dword_140404A6C[v4 + 71856276] += v19;
  v20 = dword_140404A6C[v4 + 71856276];
  if ( v20 > 1023 )
  {
    v20 = 1023;
    dword_140404A6C[v4 + 71856276] = 1023;
  }
  if ( v20 >= (int)dword_140404A6C[284022494] )
    dword_140404A6C[7166 * dword_140404A6C[v4 + 71856292] + 280651318] = 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401178F0) ----------------------------------------------------
__int64            sub_1401178F0(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned int *v11; // rbx
  char v12; // al
  __int64 v13; // r13
  double v14; // xmm2_8
  double v15; // xmm7_8
  unsigned int v16; // xmm6_4
  float v17; // xmm1_4
  double v18; // xmm13_8
  double v19; // xmm6_8
  signed int v20; // ebx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm8_4
  float v25; // xmm3_4
  float v26; // xmm7_4
  double v27; // xmm0_8
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rdx
  __int64 v32; // rax
  double v33; // xmm0_8
  __m128 v34; // xmm1
  float v35; // xmm7_4
  __m128 v36; // xmm6
  float v37; // xmm8_4
  float v38; // xmm10_4
  double v39; // xmm0_8
  float *v40; // rbx
  float v41; // xmm2_4
  float v42; // xmm1_4
  int v43; // ebp
  __int64 v44; // rax
  float v45; // xmm7_4
  float v46; // xmm1_4
  bool v47; // cc
  bool v48; // zf
  __int64 v49; // rbx
  __int64 v50; // rcx
  float v51; // xmm0_4
  __int64 v52; // rax
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm4_4
  unsigned int v56; // xmm3_4
  float v57; // xmm2_4
  int v58; // eax
  unsigned int v59; // ecx
  double v60; // xmm6_8
  double v61; // xmm11_8
  __int64 v62; // rax
  float v63; // xmm2_4
  float v64; // xmm3_4
  __m128 v65; // xmm9
  float v66; // xmm13_4
  float v67; // xmm0_4
  float v68; // xmm12_4
  float v69; // xmm10_4
  __m128 v70; // xmm7
  float v71; // xmm8_4
  double v72; // xmm0_8
  __int64 v73; // rcx
  float v74; // xmm3_4
  float v75; // xmm2_4
  float v76; // xmm4_4
  float *v77; // rbx
  float *v78; // r15
  int v79; // ebp
  __int64 v80; // rax
  float v81; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401178F0[112];
#define v83 (*(__int64 (*))(void *)(sr_frame_1401178F0 + 0)) /* [rsp+0h] */
#define v84 (*(int (*))(void *)(sr_frame_1401178F0 + 32)) /* [rsp+20h] */
#define v85 (*(float (*))(void *)(sr_frame_1401178F0 + 40)) /* [rsp+28h] */
#define v86 (*(float (*))(void *)(sr_frame_1401178F0 + 44)) /* [rsp+2Ch] */
#define v87 (*(float (*))(void *)(sr_frame_1401178F0 + 48)) /* [rsp+30h] */
#define v88 (*(_OWORD (*)[2])(void *)(sr_frame_1401178F0 + 64)) /* [rsp+40h] */
#define v89 (*(int (*))(void *)(sr_frame_1401178F0 + 96)) /* [rsp+60h] */
#define v90 (*(__int64 (*))(void *)(sr_frame_1401178F0 + 104)) /* [rsp+68h] */

  v1 = a1;
  v2 = 3597LL * a1;
  v3 = 3597LL * a1;
  v4 = 0;
  v84 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856293] = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 71856295] = 0;
  v5 = dword_140404A6C[v3 + 71859665];
  dword_140404A6C[v3 + 71856325] = 0;
  if ( v5 > 0 )
  {
    dword_140404A6C[v3 + 71859665] = v5 - 1;
    return 0; /* compatibility result discarded by all reviewed callers */
  }
  v6 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v6 == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v7 = 7166 * v6;
  if ( dword_140404A6C[7166 * v6 + 280658335] == -1 && (int)dword_140404A6C[v7 + 280658139] > 0 )
  {
    v8 = 1760LL * (int)dword_140404A6C[v7 + 280658140];
    if ( dword_140404A6C[v8 + 278845974] )
      goto LABEL_27;
    if ( !dword_140404A6C[v8 + 278845906] )
    {
      if ( (int)dword_140404A6C[v7 + 280658149] <= 0 )
      {
        v10 = 4;
        v4 = 4;
        v11 = &dword_140404A6C[v7 + 280658170];
        do
        {
          if ( (int)*(v11 - 1) > 0
            && dword_140404A6C[1268 * dword_140404A6C[1760 * *v11 + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845898]]
            && (rand() & 1) == 0 )
          {
            dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
            dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = v10;
            dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
            dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
            dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
          }
          ++v10;
          v11 += 10;
          --v4;
        }
        while ( v4 );
        goto LABEL_27;
      }
      if ( (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658150] + 278845974] <= 0 )
      {
        if ( (rand() & 0x1F) != 0 )
          goto LABEL_27;
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 2;
        goto LABEL_12;
      }
      if ( (rand() & 0x1F) == 0 )
      {
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
LABEL_12:
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856369 + v9] = 1;
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856370 + v9] = 0;
        dword_140404A6C[v9 + 71856362] = ((unsigned __int8)dword_140404A6C[v9 + 71856362] + 1) & 0x3F;
      }
LABEL_27:
      a1 = v84;
      goto LABEL_28;
    }
    if ( (int)dword_140404A6C[1760 * dword_140404A6C[v8 + 278845907] + 278845974] <= 0 )
    {
      if ( (rand() & 0x1F) == 0 )
      {
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
        dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
      }
      goto LABEL_27;
    }
    v12 = rand();
    a1 = v84;
    if ( (v12 & 0x1F) == 0 )
      dword_140404A6C[3597 * v1 + 71856325] |= 0x1000u;
  }
LABEL_28:
  v13 = (int)dword_140404A6C[v7 + 280651313];
  if ( (_DWORD)v13 == -1 )
  {
    sub_140008440(a1, v6);
    *(_QWORD *)&v14 = dword_140404A6C[v7 + 280651341];
    HIDWORD(v15) = 0;
    dword_140404A6C[v3 + 71856339] = 1;
    v88[0] = xmmword_140278D30;
    v89 = 1065353216;
    v88[1] = xmmword_140278D30;
    sub_14007B2A0((__int64)v88, (float *)&dword_1402F6188, v14);
    v16 = dword_140404A6C[v7 + 280651357];
    v17 = *(float *)&dword_140404A6C[v3 + 71856297]
        - SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v16), *(float *)&dword_140404A6C[v3 + 71856301]), f32)[0];
    dword_140404A6C[v3 + 71856301] = v16;
    *(float *)&dword_140404A6C[v3 + 71856297] = v17;
    if ( v17 >= -2.74889357189125 )
    {
      if ( v17 > 2.74889357189125 )
        dword_140404A6C[v3 + 71856297] = 1076882911;
    }
    else
    {
      dword_140404A6C[v3 + 71856297] = -1070600737;
    }
    *(_QWORD *)&v18 = dword_140404A6C[v3 + 71859143];
    if ( *(float *)&dword_140404A6C[v7 + 280651456] < 0.8999999761581421 )
    {
      if ( (dword_140404A6C[283831474] & 0x7F) > 0x40 )
        dword_140404A6C[v3 + 71856325] |= 8u;
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    LODWORD(v19) = 0;
    if ( (int)dword_140404A6C[v3 + 71859146] < (int)dword_140404A6C[v3 + 71859147] )
    {
      dword_140404A6C[v3 + 71856296] = 1065353216;
      v20 = dword_140404A6C[v3 + 71859146];
      v21 = v3 * 4 + 32LL * v20;
      v22 = *(float *)((char *)&dword_140404A6C[71859148] + v21) - *(float *)&dword_140404A6C[v7 + 280651335];
      v23 = *(float *)((char *)&dword_140404A6C[71859150] + v21) - *(float *)&dword_140404A6C[v7 + 280651337];
      v24 = (float)(v23 * v23) + (float)(v22 * v22);
      v25 = fsqrt(v24);
      if ( v25 == 0.0 )
      {
        v27 = 0.0;
        v26 = 0.0;
      }
      else
      {
        *(float *)&v15 = 1.0 / v25;
        v27 = v15;
        v26 = (float)(1.0 / v25) * v23;
        *(float *)&v27 = *(float *)&v27 * v22;
      }
      *(float *)&v27 = sub_14023F704(*(float *)&v27, -v26);
      v18 = v27;
      if ( v24 < 4.0 )
      {
        v28 = v20 + 1;
        if ( v20 + 1 >= (int)dword_140404A6C[v3 + 71859147] )
          v28 = 0;
        dword_140404A6C[v3 + 71859146] = v28;
      }
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_70;
    v29 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v29) < 2.0
      && fabs(*(float *)((char *)&dword_140404A6C[71859672] + v29) - *(float *)&dword_140404A6C[v7 + 280651336]) < 2.0
      && (rand() & 0x1F) == 0 )
    {
      v30 = (int)dword_140404A6C[v3 + 71859669];
      *(_QWORD *)&dword_140404A6C[v3 + 71859146] = 0;
      v31 = &dword_140404A6C[6 * v30 + 71859671 + v3];
      dword_140404A6C[v3 + 71859148] = *v31;
      dword_140404A6C[v3 + 71859149] = v31[1];
      dword_140404A6C[v3 + 71859150] = v31[2];
      ++dword_140404A6C[v3 + 71859147];
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_70;
    v32 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v32) <= 12.0 )
      goto LABEL_70;
    *(_QWORD *)&v33 = *(unsigned int *)((char *)&dword_140404A6C[71859671] + v32);
    *(float *)&v33 = *(float *)&v33 - *(float *)&dword_140404A6C[v7 + 280651986];
    v34 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&dword_140404A6C[71859673] + v32))));
    SR_VEC_LANES(128, v34, f32)[0] = SR_VEC_LANES(128, v34, f32)[0] - *(float *)&dword_140404A6C[v7 + 280651988];
    v35 = *(float *)&v33 * *(float *)&v33;
    v36 = v34;
    v37 = (float)(*(float *)((char *)&dword_140404A6C[71859672] + v32) - *(float *)&dword_140404A6C[v7 + 280651987])
        - 0.25;
    v38 = (float)((float)(v37 * v37) + (float)(*(float *)&v33 * *(float *)&v33))
        + (float)(SR_VEC_LANES(128, v34, f32)[0] * SR_VEC_LANES(128, v34, f32)[0]);
    *(float *)&v33 = sub_14023F704(*(float *)&v33, -SR_VEC_LANES(128, v34, f32)[0]);
    SR_VEC_LANES(128, v36, f32)[0] = (float)(SR_VEC_LANES(128, v34, f32)[0] * SR_VEC_LANES(128, v34, f32)[0]) + v35;
    v18 = v33;
    v39 = sub_14023EDE4((float)-v37, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v36)), f64)[0]);
    HIDWORD(v19) = 0;
    *(float *)&v19 = v39;
    if ( dword_140404A6C[v3 + 71859140] == 1
      && (dword_140404A6C[v3 + 71856296] = 1065353216, dword_140404A6C[v3 + 71859140] == 1)
      || v38 >= 1024.0 )
    {
      if ( v38 >= 4096.0 )
      {
LABEL_70:
        v45 = *(float *)&dword_140404A6C[v3 + 71856297];
        v46 = (float)(*(float *)&dword_140404A6C[v7 + 280651365] + *(float *)&dword_140404A6C[v7 + 280651341]) + v45;
        if ( v46 < -3.14159265359 )
          v46 = v46 + 6.28318530718;
        if ( v46 > 3.14159265359 )
          v46 = v46 - 6.28318530718;
        *(float *)&dword_140404A6C[v3 + 71856297] = (float)(SR_VEC_READ_LANES(128, sub_14000B5F0(v18, v46), f32)[0] * 0.5) + v45;
        *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(*(float *)&v19
                                                                  - *(float *)&dword_140404A6C[v3 + 71856298])
                                                          * 0.0625)
                                                  + *(float *)&dword_140404A6C[v3 + 71856298];
        v47 = (int)dword_140404A6C[v3 + 71859668] <= 0;
        dword_140404A6C[v3 + 71856330] = 1;
        if ( !v47 && *(float *)&dword_140404A6C[v3 + 71859674] > 8.0 )
          dword_140404A6C[v3 + 71856330] = 0;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
    }
    else
    {
      dword_140404A6C[v3 + 71856296] = 0;
    }
    if ( fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v18, *(float *)&dword_140404A6C[v7 + 280651341]), f32)[0]) < 0.125
      && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v19, *(float *)&dword_140404A6C[v3 + 71856298]), f32)[0]) < 0.125 )
    {
      v40 = (float *)&dword_140404A6C[280651676];
      v41 = *(float *)&dword_140404A6C[v7 + 280652159] * 64.0;
      v42 = *(float *)&dword_140404A6C[v7 + 280652158] * 64.0;
      v43 = 0;
      v85 = *(float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v7 * 4 + 1126821924) - (float)(*(float *)&dword_140404A6C[v7 + 280652157] * 64.0);
      v86 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v7 * 4 + 1126821924) - v42;
      v87 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v7 * 4 + 1126821924) - v41;
      while ( 1 )
      {
        if ( *((_DWORD *)v40 - 373) )
        {
          if ( v43 != (_DWORD)v6 )
          {
            v44 = *((int *)v40 - 371);
            if ( (_DWORD)v44 != -1
              && dword_140404A6C[3597 * v44 + 71856286] == dword_140404A6C[v3 + 71856286]
              && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v40 - 1))
                                       * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v40 - 1)))
                               + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v40 - 2))
                                       * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v40 - 2))))
                       + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v40)
                               * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v40))) < 16384.0
              && sub_1400DB060(v43, (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v7 * 4 + 1126821924), &v85, 0.25) )
            {
              break;
            }
          }
        }
        ++v43;
        v40 += 7166;
        if ( v43 >= 256 )
        {
          if ( (int)dword_140404A6C[v7 + 280658139] > 0
            && (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845974] > 0
            && (rand() & 3) == 0 )
          {
            dword_140404A6C[v3 + 71856325] |= 1u;
          }
          goto LABEL_70;
        }
      }
    }
    goto LABEL_70;
  }
  v48 = dword_140404A6C[v7 + 280651314] == 0;
  dword_140404A6C[v3 + 71856339] = 2;
  if ( v48 )
  {
    if ( dword_140404A6C[283831448] == 1 )
    {
      dword_140404A6C[v3 + 71856296] = -1082130432;
    }
    else
    {
      v49 = 5210 * v13;
      v50 = (int)dword_140404A6C[5210 * v13 + 129720183];
      if ( (_DWORD)v50 != -1 )
      {
        dword_140404A6C[383 * v50 + 132400669] = 1;
        sub_140009E30(v50);
        v51 = *(float *)&dword_140404A6C[v49 + 129716744] * *(float *)&dword_140404A6C[v49 + 129716732];
        v52 = (int)dword_140404A6C[v49 + 129720183];
        v53 = *(float *)&dword_140404A6C[v49 + 129716745] * *(float *)&dword_140404A6C[v49 + 129716733];
        dword_140404A6C[v3 + 71856293] = 0x40000000;
        v54 = *(float *)&dword_140404A6C[v49 + 129716746] * *(float *)&dword_140404A6C[v49 + 129716734];
        dword_140404A6C[v3 + 71856295] = -1082130432;
        v55 = *(float *)&dword_140404A6C[383 * v52 + 132400658];
        v56 = dword_140404A6C[383 * v52 + 132400657];
        dword_140404A6C[v3 + 71856294] = v56;
        v57 = (float)((float)(v53 + v51) + (float)(v54 + v55)) * 8.0;
        if ( v57 > 1.0 )
          v57 = 1.0;
        *(float *)&dword_140404A6C[v3 + 71856296] = v57 / (float)(fabs(*(float *)&v56) + 1.0);
        if ( v55 < 0.05000000074505806 )
          dword_140404A6C[v3 + 71856296] = -1082130432;
        v58 = dword_140404A6C[383 * v52 + 132401001];
        dword_140404A6C[v3 + 71856325] = 0;
        if ( v58 >= 180 )
        {
          dword_140404A6C[v3 + 71856296] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v3 + 71856293] = 0x40000000;
          dword_140404A6C[v3 + 71856295] = 1065353216;
          if ( v58 >= 280 )
            dword_140404A6C[v3 + 71856296] = -1082130432;
        }
      }
    }
  }
  else
  {
    sub_140008440(a1, v6);
    v59 = dword_140404A6C[v7 + 280651314];
    LODWORD(v60) = 0;
    LODWORD(v61) = 0;
    if ( v59 == 1 )
    {
      LODWORD(v61) = 1061752795;
    }
    else if ( ((v59 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v59 - 3) & 0xFFFFFFFD) == 0 )
        LODWORD(v61) = 1075235812;
    }
    else
    {
      LODWORD(v61) = -1072247836;
    }
    if ( (int)dword_140404A6C[v3 + 71859668] > 0 )
    {
      v62 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
      if ( *(float *)((char *)&dword_140404A6C[71859674] + v62) > 8.0 )
      {
        v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&dword_140404A6C[71859672] + v62))));
        v63 = *(float *)((char *)&dword_140404A6C[71859671] + v62) - *(float *)&dword_140404A6C[v7 + 280652142];
        v64 = *(float *)((char *)&dword_140404A6C[71859673] + v62) - *(float *)&dword_140404A6C[v7 + 280652144];
        SR_VEC_LANES(128, v65, f32)[0] = (float)(SR_VEC_LANES(128, v65, f32)[0] - *(float *)&dword_140404A6C[v7 + 280652143]) - 0.25;
        v66 = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * SR_VEC_LANES(128, v65, f32)[0]) + (float)(v63 * v63)) + (float)(v64 * v64);
        v67 = fsqrt(v66);
        if ( v67 == 0.0 )
        {
          v68 = 0.0;
          v65 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
          v69 = 0.0;
        }
        else
        {
          SR_VEC_LANES(128, v65, f32)[0] = SR_VEC_LANES(128, v65, f32)[0] * (float)(1.0 / v67);
          v68 = (float)(1.0 / v67) * v63;
          v69 = (float)(1.0 / v67) * v64;
        }
        v70 = v65;
        v71 = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * *(float *)&dword_140404A6C[5210 * v13 + 129716727])
                    + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716726]))
            + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716728]);
        HIDWORD(v72) = SR_VEC_LANES(128, v65, i32)[1];
        SR_VEC_LANES(128, v70, f32)[0] = (float)((float)(SR_VEC_LANES(128, v65, f32)[0] * *(float *)&dword_140404A6C[5210 * v13 + 129716733])
                                + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716732]))
                        + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716734]);
        *(float *)&v72 = sub_14023F704(v71, -SR_VEC_LANES(128, v70, f32)[0]);
        v61 = v72;
        SR_VEC_LANES(128, v70, f32)[0] = (float)(SR_VEC_LANES(128, v70, f32)[0] * SR_VEC_LANES(128, v70, f32)[0]) + (float)(v71 * v71);
        HIDWORD(v60) = 0;
        *(float *)&v60 = sub_14023EDE4(
                           (float)-(float)((float)((float)(SR_VEC_LANES(128, v65, f32)[0]
                                                         * *(float *)&dword_140404A6C[5210 * v13 + 129716730])
                                                 + (float)(v68 * *(float *)&dword_140404A6C[5210 * v13 + 129716729]))
                                         + (float)(v69 * *(float *)&dword_140404A6C[5210 * v13 + 129716731])),
                           SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v70)), f64)[0]);
        if ( v66 < 1024.0
          && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v61, *(float *)&dword_140404A6C[v3 + 71856297]), f32)[0]) < 0.125
          && fabs(SR_VEC_READ_LANES(128, sub_14000B5F0(v60, *(float *)&dword_140404A6C[v3 + 71856298]), f32)[0]) < 0.125 )
        {
          v73 = 1760LL * (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845907];
          v74 = *(float *)&dword_140404A6C[v73 + 278845941];
          v75 = *(float *)&dword_140404A6C[v73 + 278845940];
          v76 = *(float *)&dword_140404A6C[v73 + 278845942];
          if ( (float)((float)((float)(v68 * v75) + (float)(SR_VEC_LANES(128, v65, f32)[0] * v74)) + (float)(v69 * v76)) < -0.9975000023841858 )
          {
            v77 = (float *)&dword_140404A6C[280651676];
            v78 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v73 * 4 + 1119597020);
            v79 = 0;
            v85 = *v78 - (float)(v75 * 64.0);
            v86 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 4LL) + v73 * 4 + 1119597020) - (float)(v74 * 64.0);
            v87 = *(float *)((((intptr_t)dword_140404A6C - 0x404a6cLL) + 8LL) + v73 * 4 + 1119597020) - (float)(v76 * 64.0);
            while ( 1 )
            {
              if ( *((_DWORD *)v77 - 373) )
              {
                if ( v4 != v6 )
                {
                  v80 = *((int *)v77 - 371);
                  if ( (_DWORD)v80 != -1
                    && dword_140404A6C[3597 * v80 + 71856286] == dword_140404A6C[v3 + 71856286]
                    && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v77 - 1))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v77 - 1)))
                                     + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v77 - 2))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v77 - 2))))
                             + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v77)
                                     * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v77))) < 4096.0
                    && sub_1400DB060(v79, v78, &v85, 0.25) )
                  {
                    break;
                  }
                }
              }
              ++v79;
              ++v4;
              v77 += 7166;
              if ( v79 >= 256 )
              {
                if ( (!(unsigned int)sub_1400DC940(v13, v78, &v85, 0)
                   || dword_140404A6C[73006993] == -1
                   || dword_140404A6C[73006992] == 1)
                  && (int)dword_140404A6C[v7 + 280658139] > 0
                  && (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845974] > 0 )
                {
                  dword_140404A6C[v3 + 71856325] |= 1u;
                }
                break;
              }
            }
          }
        }
      }
    }
    v81 = *(float *)&dword_140404A6C[v3 + 71856298];
    *(float *)&dword_140404A6C[v3 + 71856297] = (float)((float)(*(float *)&v61
                                                              - *(float *)&dword_140404A6C[v3 + 71856297])
                                                      * 0.0625)
                                              + *(float *)&dword_140404A6C[v3 + 71856297];
    *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(*(float *)&v60 - v81) * 0.0625) + v81;
  }
  if ( (int)dword_140404A6C[5210 * v13 + 129716712] > 0 )
  {
    dword_140404A6C[v3 + 71859667] = 0;
  }
  else if ( (int)++dword_140404A6C[v3 + 71859667] >= 180 )
  {
    dword_140404A6C[v3 + 71856325] |= 0x800u;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v83
#undef v84
#undef v85
#undef v86
#undef v87
#undef v88
#undef v89
#undef v90

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011B2A0) ----------------------------------------------------
void sub_14011B2A0()
{
  unsigned int v0; // r9d
  unsigned int *v1; // r14
  int v2; // ebx
  unsigned int *v3; // r12
  unsigned int v4; // r11d
  unsigned int v5; // r13d
  __int64 v6; // r10
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int *v15; // r15
  int v16; // eax
  unsigned int *v17; // rbp
  int v18; // eax
  unsigned int *v19; // r8
  unsigned int *v20; // r11
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // r9
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B2A0[16];
#define v36 (*(__int64 (*))(void *)(sr_frame_14011B2A0 + 0)) /* [rsp+30h] */

  v0 = dword_140404A6C[284022502];
  v1 = &dword_140404A6C[71856339];
  v2 = dword_140404A6C[283831451];
  v3 = &dword_140404A6C[71856302];
  v4 = dword_140404A6C[283831441];
  v5 = dword_140404A6C[283831312];
  v6 = 256;
  v7 = 0;
  v36 = 256;
  do
  {
    if ( !*(v1 - 86) )
      goto LABEL_48;
    v8 = *(v1 - 48);
    if ( v8 > 0 )
      *(v1 - 48) = v8 - 1;
    v9 = (int)*(v1 - 47);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      v11 = (int)*(v1 - 47);
      v12 = dword_140404A6C[7166 * v9 + 280651313] == -1;
      dword_140404A6C[7166 * v9 + 280651307] = *(v1 - 51);
      if ( !v12 )
        goto LABEL_13;
      if ( *v1 == 1 )
      {
        v13 = 7166 * v11;
        dword_140404A6C[v13 + 280651377] = *(v3 - 9);
        dword_140404A6C[v13 + 280651378] = *(v3 - 8);
        dword_140404A6C[v13 + 280651379] = *(v3 - 7);
        dword_140404A6C[v13 + 280651380] = *(v3 - 6);
        dword_140404A6C[v13 + 280651381] = *(v3 - 5);
        dword_140404A6C[v13 + 280651382] = *(v3 - 4);
        dword_140404A6C[v13 + 280651383] = *(v3 - 3);
        dword_140404A6C[v13 + 280651384] = *(v3 - 2);
        dword_140404A6C[v13 + 280651385] = *(v3 - 1);
        dword_140404A6C[v13 + 280651386] = *v3;
        dword_140404A6C[v13 + 280651387] = v3[1];
        dword_140404A6C[v13 + 280651388] = v3[2];
        dword_140404A6C[v13 + 280651389] = v3[3];
        dword_140404A6C[v13 + 280651390] = v3[4];
        dword_140404A6C[v13 + 280651391] = v3[5];
        dword_140404A6C[v13 + 280651392] = v3[6];
        dword_140404A6C[v13 + 280651393] = v3[7];
        dword_140404A6C[v13 + 280651394] = v3[8];
        dword_140404A6C[v13 + 280651395] = v3[9];
        dword_140404A6C[v13 + 280651396] = v3[10];
        if ( v5 == 7 && v2 < (int)(60 * v0) )
        {
          dword_140404A6C[v10 + 280651378] = 0;
          dword_140404A6C[v10 + 280651380] = 0;
        }
      }
      else
      {
        dword_140404A6C[v10 + 280651381] = dword_140404A6C[v10 + 280651341];
        dword_140404A6C[v10 + 280651382] = dword_140404A6C[v10 + 280651342];
      }
      if ( dword_140404A6C[v10 + 280651313] != -1 )
      {
LABEL_13:
        if ( *v1 - 2 <= 1 )
        {
          v14 = 7166 * v11;
          dword_140404A6C[v14 + 280651377] = *(v3 - 9);
          dword_140404A6C[v14 + 280651378] = *(v3 - 8);
          dword_140404A6C[v14 + 280651379] = *(v3 - 7);
          dword_140404A6C[v14 + 280651380] = *(v3 - 6);
          dword_140404A6C[v14 + 280651381] = *(v3 - 5);
          dword_140404A6C[v14 + 280651382] = *(v3 - 4);
          dword_140404A6C[v14 + 280651383] = *(v3 - 3);
          dword_140404A6C[v14 + 280651384] = *(v3 - 2);
        }
      }
      dword_140404A6C[v10 + 280651436] = *(v1 - 14);
      v15 = v1 + 1376;
      dword_140404A6C[v10 + 280651327] = *(v1 - 9);
      v16 = dword_140404A6C[v10 + 280651318];
      if ( v16 < 0 )
        v16 = 0;
      v17 = &dword_140404A6C[v10 + 280658140];
      v1[1372] = v16;
      do
      {
        v18 = *(v17 - 1);
        *(v15 - 1) = v18;
        if ( v18 > 0 )
        {
          v19 = v15;
          v20 = v17;
          v21 = (unsigned int)v18;
          do
          {
            v22 = 1760LL * (int)*v20;
            v23 = (int)dword_140404A6C[v22 + 278845898];
            *v19 = v23;
            v24 = v23;
            if ( (unsigned int)v7 < 2 )
            {
              if ( dword_140404A6C[1268 * v23 + 278521289] )
              {
                if ( (int)dword_140404A6C[v22 + 278845906] > 0 )
                {
                  v24 = v23 | 0x100;
                  v25 = 1760LL * (int)dword_140404A6C[v22 + 278845907];
                  *v19 = v23 | 0x100;
                  if ( !dword_140404A6C[v25 + 278845974] )
                  {
                    v24 = v23 | 0x300;
                    *v19 = v23 | 0x300;
                  }
                }
              }
              if ( (_DWORD)v23 == 16 && (int)dword_140404A6C[v22 + 278845906] > 0 )
              {
                v24 |= 0x100u;
                *v19 = v24;
              }
              if ( (int)dword_140404A6C[1268 * v23 + 278521294] > 0 )
                *v19 = v24 | (dword_140404A6C[v22 + 278845974] << 8);
            }
            ++v20;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        ++v7;
        v15 += 9;
        v17 += 10;
      }
      while ( v7 < 7 );
      v5 = dword_140404A6C[283831312];
      v6 = v36;
      v7 = 0;
      v4 = dword_140404A6C[283831441];
      v2 = dword_140404A6C[283831451];
    }
    if ( v5 == 4 )
    {
      v26 = (int)*(v1 - 53);
      if ( (unsigned int)v26 > 5 )
      {
        v27 = 0;
        v28 = 0;
      }
      else
      {
        v27 = dword_140404A6C[5 * v26 + 188872238];
        v28 = dword_140404A6C[5 * v26 + 188872237];
      }
      *(v1 - 66) = v28;
      *(v1 - 65) = v27;
      v29 = (int)*(v1 - 71);
      if ( (_DWORD)v29 == -1 )
        goto LABEL_47;
      v30 = *(v1 - 67);
      if ( (unsigned int)v26 <= 5 )
        v30 = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v26 + 335047062] * 0.949999988079071)
                                 * (float)(int)*(v1 - 51))
                         + (float)v30);
      v31 = 28 * v29;
      dword_140404A6C[v31 + 134050374] = v30;
      dword_140404A6C[v31 + 134050375] = *(v1 - 64);
      dword_140404A6C[v31 + 134050376] = *(v1 - 63);
      dword_140404A6C[v31 + 134050377] = *(v1 - 48);
    }
    if ( v5 == 3 && v4 != 1 )
    {
      v32 = (int)*(v1 - 71);
      if ( (_DWORD)v32 != -1 )
      {
        v33 = (int)*(v1 - 53);
        v34 = *(v1 - 67);
        v35 = 28 * v32;
        if ( (_DWORD)v33 == -1 )
          dword_140404A6C[v35 + 134050374] = v34;
        else
          dword_140404A6C[v35 + 134050374] = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v33 + 335047062]
                                                                        * 0.9800000190734863)
                                                                * (float)(int)*(v1 - 51))
                                                        + (float)v34);
      }
    }
LABEL_47:
    v0 = dword_140404A6C[284022502];
    *(v1 - 13) = *(v1 - 14);
LABEL_48:
    v3 += 3597;
    v1 += 3597;
    v36 = --v6;
  }
  while ( v6 );
}
#undef v36

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCB0: using guessed type unsigned int;
// 183EBFCD8: using guessed type unsigned int;
// 183F7A604: using guessed type unsigned int;

//----- (00000001401307D0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401307D0(int a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // edx
  __int8 v8; // al
  int v9; // edx
  int v10; // edx
  __int64 v11; // r9
  int v12; // r9d
  int v13; // eax
  char *v14; // rcx
  char v15; // al
  unsigned __int8 *v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // esi
  __int64 v33; // rdi
  int v34; // edx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38; // eax
  unsigned int v39; // esi
  __int64 v40; // rdi
  int v41; // edx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r14
  unsigned int v45; // eax
  unsigned int v46; // esi
  __int64 v47; // rdi
  int v48; // edx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // eax
  unsigned int v53; // esi
  __int64 v54; // rdi
  int v55; // edx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r14
  unsigned int v59; // eax
  unsigned int v60; // esi
  __int64 v61; // rdi
  __int8 *v62; // rcx
  __int8 v63; // al
  unsigned int v64; // r8d
  __int64 v65; // r14
  unsigned int v66; // esi
  unsigned int v67; // eax
  __int64 v68; // rdi
  bool v69; // zf
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // rax
  float v75; // xmm2_4
  float v76; // xmm1_4
  float v77; // xmm0_4
  __int64 v78; // rax
  float v79; // xmm2_4
  float v80; // xmm1_4
  float v81; // xmm0_4
  __int64 v82; // rax
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm0_4
  __int64 v86; // rax
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  __int64 v90; // rax
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  __int64 v94; // rax
  float v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm0_4
  int i; // edi
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rax
  signed int v102; // eax
  int v103; // r8d
  __int64 v104; // rdi
  __int8 *v105; // rcx
  int v106; // ebx
  __int8 v107; // al
  __int64 v108; // rsi
  signed int v109; // eax
  signed int v110; // eax
  __int64 v111; // rcx
  __int8 *v112; // rcx
  __int8 v113; // al
  unsigned int v114; // r8d
  __int64 v115; // r14
  unsigned int v116; // eax
  unsigned int v117; // esi
  __int64 v118; // rdi
  char v119; // al
  unsigned int *v120; // r12
  __int8 *v121; // rcx
  __int8 v122; // al
  int v123; // r9d
  __int8 *v124; // r8
  __int64 j; // rcx
  __int8 v126; // dl
  int v127; // eax
  unsigned int *v128; // rcx
  __int8 *v129; // rcx
  __int8 v130; // al
  __int64 v131; // rcx
  __int8 v132; // al
  __int64 v133; // rax
  int v134; // eax
  int v135; // ebx
  unsigned int *v136; // rcx
  __int8 *v137; // rcx
  __int8 v138; // al
  __int64 v139; // rcx
  __int8 v140; // al
  __int64 v141; // rax
  int v142; // eax
  int v143; // ebx
  __int8 *v144; // rcx
  __int8 v145; // al
  __int64 v146; // rcx
  __int64 v147; // r14
  unsigned int v148; // eax
  unsigned int v149; // esi
  __int64 v150; // rdi
  unsigned int v151; // eax
  __int64 v152; // rcx
  int v153; // r10d
  int v154; // r9d
  __int64 v155; // rax
  __int64 v156; // r8
  unsigned __int8 *v157; // rax
  char *v158; // r8
  int v159; // ecx
  int v160; // edx
  unsigned int v161; // edx
  __int64 v162; // r9
  __m128i v163; // xmm1
  __m128i v164; // xmm0
  __m128i v165; // xmm1
  __int64 v166; // r14
  unsigned int v167; // eax
  unsigned int v168; // esi
  __int64 v169; // rdi
  int v170; // eax
  unsigned int v171; // ecx
  __int64 v173; // r14
  unsigned int v174; // eax
  unsigned int v175; // esi
  __int64 v176; // rdi
  int v177; // r10d
  int v178; // ecx
  __int64 v179; // r9
  __int64 v180; // rdx
  __int64 v181; // r14
  unsigned int v182; // esi
  unsigned int v183; // eax
  __int64 v184; // rdi
  unsigned int v185; // r10d
  int v186; // ecx
  __int64 v187; // r9
  __int64 v188; // r14
  unsigned int v189; // eax
  unsigned int v190; // esi
  __int64 v191; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401307D0[912];
#define v192 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 0)) /* [rsp+0h] */
#define v193 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 32)) /* [rsp+20h] */
#define v194 (*(int (*))(void *)(sr_frame_1401307D0 + 48)) /* [rsp+30h] */
#define v195 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 56)) /* [rsp+38h] */
#define v196 (*(float (*))(void *)(sr_frame_1401307D0 + 64)) /* [rsp+40h] */
#define v197 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 72)) /* [rsp+48h] */
#define v198 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 80)) /* [rsp+50h] */
#define v199 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 88)) /* [rsp+58h] */
#define v200 (*(sr_frame_i128 (*))(void *)(sr_frame_1401307D0 + 104)) /* [rsp+68h] */
#define v201 (*(int (*))(void *)(sr_frame_1401307D0 + 120)) /* [rsp+78h] */
#define v202 (*(__m128i (*)[16])(void *)(sr_frame_1401307D0 + 128)) /* [rsp+80h] */
#define v203 (*(_BYTE (*)[512])(void *)(sr_frame_1401307D0 + 384)) /* [rsp+180h] */
#define v204 (*(__int64 (*))(void *)(sr_frame_1401307D0 + 896)) /* [rsp+380h] */

  v3 = a2;
  v195 = a2;
  if ( a1 == -1 )
    return 0; /* 0x140130805: xor eax, eax */
  v4 = 14388LL * a1;
  v5 = a1;
  v198 = a1;
  v197 = v4;
  if ( *(int *)((char *)&dword_140404A6C[71856269] + v4) > 0 )
    return 1; /* 0x140130858: jg -> mov eax, 1 */
  *(_BYTE *)(a2 + 63) = 0;
  v6 = -1;
  do
    ++v6;
  while ( *(_BYTE *)(a2 + v6) );
  v7 = 0;
  v194 = 0;
  if ( (int)v6 <= 63 )
  {
    if ( (int)v6 <= 0 )
      goto LABEL_9;
  }
  else
  {
    LODWORD(v6) = 63;
  }
  do
  {
    v8 = tolower(*(char *)(v7 + v3));
    v9 = v194;
    SR_VEC_LANES(128, v202[0], i8)[v194] = v8;
    v7 = v9 + 1;
    v194 = v7;
  }
  while ( v7 < (int)v6 );
LABEL_9:
  if ( (unsigned __int64)(int)v6 >= 0x100 )
    sub_1401F8694();
  v10 = 0;
  SR_VEC_LANES(128, v202[0], i8)[(int)v6] = 0;
  v194 = 0;
  *((_BYTE *)&dword_140404A6C[71859827] + v4) = 0;
  v11 = -1;
  do
    ++v11;
  while ( SR_VEC_LANES(128, v202[0], i8)[v11] );
  v12 = v11 - 5;
  if ( v12 > 0 )
  {
    v13 = 0;
    do
    {
      if ( SR_VEC_LANES(128, v202[0], i8)[v13] == 110
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 1] == 105
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 2] == 103
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 3] == 103
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 4] == 101
        && SR_VEC_LANES(128, v202[0], i8)[v10 + 5] == 114 )
      {
        v14 = (char *)v3;
        do
        {
          v15 = *v14;
          v14[(_QWORD)&dword_140404A6C[71859827] + v4 - v3] = *v14;
          ++v14;
        }
        while ( v15 );
        strcpy((char *)v3, "i'm an idiot");
      }
      v13 = ++v10;
    }
    while ( v10 < v12 );
    v194 = v10;
  }
  if ( *(_BYTE *)v3 != 47 )
    return 0; /* 0x1401309A7: jne -> xor eax, eax */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/admin "), 7) && (int)++*(unsigned int *)((char *)&dword_140404A6C[71856267] + v4) < 5 )
  {
    if ( LOBYTE(dword_140404A6C[73991352]) )
    {
      v16 = (unsigned __int8 *)(v3 + 7);
      do
      {
        v17 = *((unsigned __int8 *)&dword_140404A6C[73991350] + (_QWORD)v16 - v3 + 1);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      if ( !v18 )
      {
        v19 = -1;
        v194 = 0;
        if ( (int)dword_140404A6C[456202445] > 0 )
        {
          v20 = 0;
          do
          {
            v21 = v20;
            if ( dword_140404A6C[47224 * v20 + 438887411] != a1 )
              v21 = v19;
            ++v20;
            v19 = v21;
          }
          while ( v20 < (int)dword_140404A6C[456202445] );
          v194 = v20;
        }
        *(unsigned int *)((char *)&dword_140404A6C[71856266] + v4) = 1;
        if ( v19 != -1 )
          dword_140404A6C[47224 * v19 + 438887410] = 1;
        sub_140158AB0(v202, "%s admin", (     char *)&dword_140404A6C[71856254] + v4);
        if ( dword_140404A6C[456202453] )
        {
          v22 = -1;
          do
            ++v22;
          while ( SR_VEC_LANES(128, v202[0], i8)[v22] );
          v23 = dword_140404A6C[308307070];
          if ( (int)v22 > 63 )
            LODWORD(v22) = 63;
          v24 = dword_140404A6C[283831474];
          v25 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v25) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v25) = v24;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v25), v202, (int)v22);
          dword_140404A6C[308307070] = v23 + 1;
          *((_BYTE *)&dword_140404A6C[297756301] + (int)v22 + v25) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v25) = v22;
          HIWORD(dword_140404A6C[308307070]) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v25) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v25) = -1;
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v25) = 0;
        }
      }
    }
  }
  if ( !*(unsigned int *)((char *)&dword_140404A6C[71856266] + v4) )
    return 1; /* 0x140130B6A: je -> mov eax, 1 */
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/hlist"), 6) )
  {
    v26 = 0;
    v194 = 0;
    v27 = 0;
    do
    {
      v28 = 7166LL * v27;
      if ( dword_140404A6C[v28 + 280651303] )
      {
        v29 = (int)dword_140404A6C[v28 + 280651305];
        if ( (_DWORD)v29 == -1 )
          sub_140158AB0(v202, "%d:%d", v26, -1);
        else
          sub_140158AB0(v202, "%d:%d %s", v26, v29, (     char *)&dword_140404A6C[3597 * v29 + 71856254]);
        if ( dword_140404A6C[456202453] )
        {
          v30 = -1;
          do
            ++v30;
          while ( SR_VEC_LANES(128, v202[0], i8)[v30] );
          v31 = dword_140404A6C[283831474];
          v32 = dword_140404A6C[308307070];
          if ( (int)v30 > 63 )
            LODWORD(v30) = 63;
          v33 = (__int64)(int)dword_140404A6C[308307070] << 7;
          *(unsigned int *)((char *)&dword_140404A6C[297756285] + v33) = 2;
          *(unsigned int *)((char *)&dword_140404A6C[297756286] + v33) = v31;
          sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v33), v202, (int)v30);
          *((_BYTE *)&dword_140404A6C[297756301] + (int)v30 + v33) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v33) = v30;
          dword_140404A6C[308307070] = v32 + 1;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v33) = 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v33) = -1;
          *(unsigned int *)((char *)&dword_140404A6C[297756296] + v33) = 0;
          HIWORD(dword_140404A6C[308307070]) = 0;
        }
        v26 = v194;
      }
      v194 = ++v26;
      v27 = v26;
    }
    while ( v26 < 10 );
    v3 = v195;
    v4 = v197;
    v5 = v198;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list1"), 6) )
  {
    v34 = 0;
    v194 = 0;
    if ( (int)dword_140404A6C[456202445] > 0 )
    {
      v35 = 0;
      do
      {
        if ( v35 < 10 )
        {
          v36 = (int)dword_140404A6C[47224 * v35 + 438887411];
          if ( (_DWORD)v36 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v36 + 71856254],
              dword_140404A6C[3597 * v36 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v37 = -1;
              do
                ++v37;
              while ( SR_VEC_LANES(128, v202[0], i8)[v37] );
              v38 = dword_140404A6C[283831474];
              v39 = dword_140404A6C[308307070];
              if ( (int)v37 > 63 )
                LODWORD(v37) = 63;
              v40 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v40) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v40) = v38;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v40), v202, (int)v37);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v37 + v40) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v40) = v37;
              dword_140404A6C[308307070] = v39 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v40) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v40) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v40) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v34 = v194;
          }
        }
        v35 = ++v34;
        v194 = v34;
      }
      while ( v34 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list2"), 6) )
  {
    v41 = 10;
    v194 = 10;
    if ( (int)dword_140404A6C[456202445] > 10 )
    {
      v42 = 10;
      do
      {
        if ( v42 < 20 )
        {
          v43 = (int)dword_140404A6C[47224 * v42 + 438887411];
          if ( (_DWORD)v43 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v43 + 71856254],
              dword_140404A6C[3597 * v43 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v44 = -1;
              do
                ++v44;
              while ( SR_VEC_LANES(128, v202[0], i8)[v44] );
              v45 = dword_140404A6C[283831474];
              v46 = dword_140404A6C[308307070];
              if ( (int)v44 > 63 )
                LODWORD(v44) = 63;
              v47 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v47) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v47) = v45;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v47), v202, (int)v44);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v44 + v47) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v47) = v44;
              dword_140404A6C[308307070] = v46 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v47) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v47) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v47) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v41 = v194;
          }
        }
        v42 = ++v41;
        v194 = v41;
      }
      while ( v41 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list3"), 6) )
  {
    v48 = 20;
    v194 = 20;
    if ( (int)dword_140404A6C[456202445] > 20 )
    {
      v49 = 20;
      do
      {
        if ( v49 < 30 )
        {
          v50 = (int)dword_140404A6C[47224 * v49 + 438887411];
          if ( (_DWORD)v50 != -1 )
          {
            sub_140158AB0(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v50 + 71856254],
              dword_140404A6C[3597 * v50 + 71856265]);
            if ( dword_140404A6C[456202453] )
            {
              v51 = -1;
              do
                ++v51;
              while ( SR_VEC_LANES(128, v202[0], i8)[v51] );
              v52 = dword_140404A6C[283831474];
              v53 = dword_140404A6C[308307070];
              if ( (int)v51 > 63 )
                LODWORD(v51) = 63;
              v54 = (__int64)(int)dword_140404A6C[308307070] << 7;
              *(unsigned int *)((char *)&dword_140404A6C[297756285] + v54) = 2;
              *(unsigned int *)((char *)&dword_140404A6C[297756286] + v54) = v52;
              sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v54), v202, (int)v51);
              *((_BYTE *)&dword_140404A6C[297756301] + (int)v51 + v54) = 0;
              *(unsigned int *)((char *)&dword_140404A6C[297756293] + v54) = v51;
              dword_140404A6C[308307070] = v53 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[297756294] + v54) = 4;
              *(unsigned int *)((char *)&dword_140404A6C[297756295] + v54) = -1;
              *(unsigned int *)((char *)&dword_140404A6C[297756296] + v54) = 0;
              HIWORD(dword_140404A6C[308307070]) = 0;
            }
            v48 = v194;
          }
        }
        v49 = ++v48;
        v194 = v48;
      }
      while ( v48 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list4"), 6) )
  {
    v55 = 30;
    v194 = 30;
    if ( (int)dword_140404A6C[456202445] > 30 )
    {
      v56 = 30;
      do
      {
        v57 = (int)dword_140404A6C[47224 * v56 + 438887411];
        if ( (_DWORD)v57 != -1 )
        {
          sub_140158AB0(
            v202,
            "%s  %d",
            (     char *)&dword_140404A6C[3597 * v57 + 71856254],
            dword_140404A6C[3597 * v57 + 71856265]);
          if ( dword_140404A6C[456202453] )
          {
            v58 = -1;
            do
              ++v58;
            while ( SR_VEC_LANES(128, v202[0], i8)[v58] );
            v59 = dword_140404A6C[283831474];
            v60 = dword_140404A6C[308307070];
            if ( (int)v58 > 63 )
              LODWORD(v58) = 63;
            v61 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v61) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v61) = v59;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v61), v202, (int)v58);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v58 + v61) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v61) = v58;
            dword_140404A6C[308307070] = v60 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v61) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v61) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v61) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
          v55 = v194;
        }
        v56 = ++v55;
        v194 = v55;
      }
      while ( v55 < (int)dword_140404A6C[456202445] );
      v4 = v197;
      v5 = v198;
    }
  }
  strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/traffic"), 8);
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/savereplay"), 11) )
  {
    if ( *(_BYTE *)(v3 + 11) == 32 )
    {
      v62 = (__int8 *)(v3 + 12);
      do
      {
        v63 = *v62;
        SR_VEC_LANES(128, v202[0], i8)[(_QWORD)v62 - 12 - v3] = *v62;
        ++v62;
      }
      while ( v63 );
      if ( !SR_VEC_LANES(128, v202[0], i8)[0]
        || (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) == -1
        || (v64 = v194, v194 < 0) )
      {
        v64 = dword_140404A6C[19065871];
        goto LABEL_128;
      }
    }
    else
    {
      v64 = dword_140404A6C[19065871] + 1;
    }
    dword_140404A6C[19065871] = v64;
LABEL_128:
    sub_140158AB0(v202, "savereplay: %d", v64);
    if ( dword_140404A6C[456202453] )
    {
      v65 = -1;
      do
        ++v65;
      while ( SR_VEC_LANES(128, v202[0], i8)[v65] );
      v66 = dword_140404A6C[308307070];
      if ( (int)v65 > 63 )
        LODWORD(v65) = 63;
      v67 = dword_140404A6C[283831474];
      v68 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v68) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v68) = v67;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v68), v202, (int)v65);
      dword_140404A6C[308307070] = v66 + 1;
      *((_BYTE *)&dword_140404A6C[297756301] + (int)v65 + v68) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v68) = v65;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v68) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v68) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v68) = 0;
    }
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/godmode"), 8) )
    goto LABEL_141;
  v69 = *(unsigned int *)((char *)&dword_140404A6C[71856277] + v4) == 1;
  *(unsigned int *)((char *)&dword_140404A6C[71856277] + v4) ^= 1u;
  if ( v69 )
  {
    if ( !dword_140404A6C[456202453] )
      goto LABEL_141;
    v73 = dword_140404A6C[283831474];
    v71 = dword_140404A6C[308307070];
    v72 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v72) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v72) = v73;
    *(_QWORD *)((char *)&dword_140404A6C[297756301] + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72) = 26223;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72 + 2) = 102;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v72) = 11;
  }
  else
  {
    if ( !dword_140404A6C[456202453] )
      goto LABEL_141;
    v70 = dword_140404A6C[283831474];
    v71 = dword_140404A6C[308307070];
    v72 = (__int64)(int)dword_140404A6C[308307070] << 7;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v72) = 2;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v72) = v70;
    *(_QWORD *)((char *)&dword_140404A6C[297756301] + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&dword_140404A6C[297756303] + v72) = 28271;
    *((_BYTE *)&dword_140404A6C[297756303] + v72 + 2) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v72) = 10;
  }
  *(unsigned int *)((char *)&dword_140404A6C[297756294] + v72) = 4;
  dword_140404A6C[308307070] = v71 + 1;
  *(unsigned int *)((char *)&dword_140404A6C[297756295] + v72) = -1;
  HIWORD(dword_140404A6C[308307070]) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[297756296] + v72) = 0;
LABEL_141:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/heli"), 5) )
  {
    v74 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v74 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v75 = *(float *)&dword_140404A6C[7166 * v74 + 280651459] * 4.0;
      v76 = *(float *)&dword_140404A6C[7166 * v74 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v74 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v74 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v74 + 280651441] - v75;
      v77 = *(float *)&dword_140404A6C[7166 * v74 + 280651442] - v76;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v77;
      sr_CreateVehicle(12, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/car"), 4) )
  {
    v78 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v78 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v79 = *(float *)&dword_140404A6C[7166 * v78 + 280651459] * 4.0;
      v80 = *(float *)&dword_140404A6C[7166 * v78 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v78 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v78 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v78 + 280651441] - v79;
      v81 = *(float *)&dword_140404A6C[7166 * v78 + 280651442] - v80;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v81;
      sr_CreateVehicle(0, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/beamer"), 7) )
  {
    v82 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v82 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v83 = *(float *)&dword_140404A6C[7166 * v82 + 280651459] * 4.0;
      v84 = *(float *)&dword_140404A6C[7166 * v82 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v82 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v82 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v82 + 280651441] - v83;
      v85 = *(float *)&dword_140404A6C[7166 * v82 + 280651442] - v84;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v85;
      sr_CreateVehicle(6, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/pickup"), 7) )
  {
    v86 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v86 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v87 = *(float *)&dword_140404A6C[7166 * v86 + 280651459] * 4.0;
      v88 = *(float *)&dword_140404A6C[7166 * v86 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v86 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v86 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v86 + 280651441] - v87;
      v89 = *(float *)&dword_140404A6C[7166 * v86 + 280651442] - v88;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v89;
      sr_CreateVehicle(17, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/turbo"), 6) )
  {
    v90 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v90 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v91 = *(float *)&dword_140404A6C[7166 * v90 + 280651459] * 4.0;
      v92 = *(float *)&dword_140404A6C[7166 * v90 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v90 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v90 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v90 + 280651441] - v91;
      v93 = *(float *)&dword_140404A6C[7166 * v90 + 280651442] - v92;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v93;
      sr_CreateVehicle(5, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/van"), 4) )
  {
    v94 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    if ( (_DWORD)v94 != -1 )
    {
      v201 = 1065353216;
      LODWORD(v193) = 1;
      v95 = *(float *)&dword_140404A6C[7166 * v94 + 280651459] * 4.0;
      v96 = *(float *)&dword_140404A6C[7166 * v94 + 280651460] * 4.0;
      *(float *)&v195 = *(float *)&dword_140404A6C[7166 * v94 + 280651440]
                      - (float)(*(float *)&dword_140404A6C[7166 * v94 + 280651458] * 4.0);
      *((float *)&v195 + 1) = *(float *)&dword_140404A6C[7166 * v94 + 280651441] - v95;
      v97 = *(float *)&dword_140404A6C[7166 * v94 + 280651442] - v96;
      v199 = xmmword_140278D30;
      v200 = xmmword_140278D30;
      v196 = v97;
      sr_CreateVehicle(7, (float *)&v195, nullptr, (unsigned int *)&v199, 1u);
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/phone"), 6) )
  {
    for ( i = 0; i < 1024; ++i )
    {
      v99 = 1760LL * i;
      if ( dword_140404A6C[v99 + 278845893]
        && dword_140404A6C[v99 + 278845898] == 25
        && dword_140404A6C[v99 + 278845981] == 9999 )
      {
        v100 = (int)dword_140404A6C[v99 + 278845980];
        if ( (_DWORD)v100 != -1 )
        {
          dword_140404A6C[1760 * v100 + 278846052] = 0;
          dword_140404A6C[1760 * dword_140404A6C[v99 + 278845980] + 278845980] = -1;
          dword_140404A6C[1760 * dword_140404A6C[v99 + 278845980] + 278845983] = 0;
          sub_140051940(dword_140404A6C[v99 + 278845980]);
        }
        dword_140404A6C[v99 + 278845900] = 0;
      }
    }
    v101 = *(int *)((char *)&dword_140404A6C[71856292] + v4);
    v194 = i;
    v102 = sr_CreateItem(
             25,
             (float *)&dword_140404A6C[7166 * v101 + 280651440],
             nullptr,
             (float *)&dword_140404A6C[7166 * v101 + 280651452]);
    v103 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + v4);
    dword_140404A6C[1760 * v102 + 278845981] = 9999;
    sub_1400E35D0(v102, -1, v103, 6);
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/arm"), 4) )
  {
    v104 = 3597 * v5;
    if ( dword_140404A6C[3597 * v5 + 71856292] != -1 )
    {
      v105 = (__int8 *)(v3 + 5);
      v106 = 3;
      do
      {
        v107 = *v105;
        v105[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 5)] = *v105;
        ++v105;
      }
      while ( v107 );
      if ( SR_VEC_LANES(128, v202[0], i8)[0] && (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) != -1 )
      {
        if ( v194 == 1 )
        {
          v106 = 1;
        }
        else if ( v194 != 2 )
        {
          switch ( v194 )
          {
            case 3:
              v106 = 7;
              break;
            case 4:
              v106 = 9;
              break;
            case 5:
              v106 = 11;
              break;
          }
        }
      }
      sub_14012CD60(dword_140404A6C[v104 + 71856292], v106, 4);
      v108 = (int)dword_140404A6C[v104 + 71856292];
      if ( (_DWORD)v108 != -1 )
      {
        v109 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * v108 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * v108 + 280651452]);
        sub_1400E35D0(v109, -1, v108, 6);
        v110 = sr_CreateItem(
                 14,
                 (float *)&dword_140404A6C[7166 * v108 + 280651440],
                 nullptr,
                 (float *)&dword_140404A6C[7166 * v108 + 280651452]);
        sub_1400E35D0(v110, -1, v108, 6);
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/cash"), 5) )
    dword_140404A6C[3597 * v5 + 71856272] += 100000;
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/kill"), 5) )
  {
    v111 = (int)dword_140404A6C[3597 * v5 + 71856292];
    if ( (_DWORD)v111 != -1 )
      dword_140404A6C[7166 * v111 + 280651318] = 0;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/setmap"), 7) && *(_BYTE *)(v3 + 7) == 32 )
  {
    v112 = (__int8 *)(v3 + 8);
    do
    {
      v113 = *v112;
      v112[(_QWORD)&SR_VEC_LANES(128, v202[0], i64)[-1] - v3] = *v112;
      ++v112;
    }
    while ( v113 );
    if ( !SR_VEC_LANES(128, v202[0], i8)[0] || (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) == -1 )
    {
      v114 = dword_140404A6C[284022505];
    }
    else
    {
      v114 = v194 - 1;
      if ( (unsigned int)(v194 - 1) > 0x1F )
        v114 = 0;
      dword_140404A6C[284022505] = v114;
    }
    sub_140158AB0(v202, "mapnum: %d", v114 + 1);
    if ( dword_140404A6C[456202453] )
    {
      v115 = -1;
      do
        ++v115;
      while ( SR_VEC_LANES(128, v202[0], i8)[v115] );
      v116 = dword_140404A6C[283831474];
      v117 = dword_140404A6C[308307070];
      if ( (int)v115 > 63 )
        LODWORD(v115) = 63;
      v118 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v118) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v118) = v116;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v118), v202, (int)v115);
      *((_BYTE *)&dword_140404A6C[297756301] + v118 + (int)v115) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v118) = v115;
      dword_140404A6C[308307070] = v117 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v118) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v118) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v118) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/resetgame"), 10) )
  {
    dword_140404A6C[456202731] = 1;
    if ( *(_BYTE *)(v3 + 10) == 32 )
    {
      v119 = *(_BYTE *)(v3 + 11);
      if ( v119 == 114 )
      {
        dword_140404A6C[456202732] = 3;
        dword_140404A6C[283831446] = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 101 )
      {
        dword_140404A6C[456202732] = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 118 )
      {
        dword_140404A6C[456202732] = 7;
        dword_140404A6C[283831446] = 5;
      }
    }
  }
  v120 = &dword_140404A6C[134050362];
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/ban "), 5) )
  {
    v121 = (__int8 *)(v3 + 5);
    do
    {
      v122 = *v121;
      v121[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 5)] = *v121;
      ++v121;
    }
    while ( v122 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v123 = 0;
      v124 = v203;
      for ( j = 0; j < 16; ++j )
      {
        v126 = SR_VEC_LANES(128, v202[0], i8)[j];
        if ( !v126 )
          break;
        if ( (unsigned __int8)(v126 - 48) <= 9u )
        {
          ++v123;
          *v124++ = v126;
        }
      }
      if ( (unsigned __int64)v123 >= 0x200 )
        sub_1401F8694();
      v203[v123] = 0;
      sub_14015B070((__int64)v203, "%u", &v197);
      v127 = 0;
      if ( (int)dword_140404A6C[134050358] > 0 )
      {
        v128 = &dword_140404A6C[134050362];
        while ( *v128 != (_DWORD)v197 )
        {
          ++v127;
          v128 += 28;
          if ( v127 >= (int)dword_140404A6C[134050358] )
            goto LABEL_229;
        }
        if ( v127 >= 0 && v127 < (int)dword_140404A6C[134050358] )
        {
          dword_140404A6C[456202730] = v127;
          sub_140158AB0(
            v202,
            "%s(%d) ban?",
            (     char *)&dword_140404A6C[28 * v127 + 134050365],
            dword_140404A6C[28 * v127 + 134050362]);
          if ( dword_140404A6C[456202453] )
          {
            v173 = -1;
            do
              ++v173;
            while ( SR_VEC_LANES(128, v202[0], i8)[v173] );
            v174 = dword_140404A6C[283831474];
            v175 = dword_140404A6C[308307070];
            if ( (int)v173 > 63 )
              LODWORD(v173) = 63;
            v176 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v176) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v176) = v174;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v176), v202, (int)v173);
            *((_BYTE *)&dword_140404A6C[297756301] + v176 + (int)v173) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v176) = v173;
            dword_140404A6C[308307070] = v175 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v176) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v176) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v176) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
LABEL_229:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/give "), 6) )
  {
    v129 = (__int8 *)(v3 + 6);
    do
    {
      v130 = *v129;
      v129[(_QWORD)((char *)SR_VEC_LANES(128, v202[0], i64) - v3 - 6)] = *v129;
      ++v129;
    }
    while ( v130 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v131 = 0;
      do
      {
        v132 = SR_VEC_LANES(128, v202[0], i8)[v131];
        *((_BYTE *)&dword_140404A6C[293250415] + v131++) = v132;
      }
      while ( v132 );
      dword_140404A6C[293250413] = 0;
      v133 = -1;
      do
        ++v133;
      while ( SR_VEC_LANES(128, v202[0], i8)[v133] );
      dword_140404A6C[293250414] = v133;
      v134 = sub_140115360();
      v135 = 0;
      if ( (int)dword_140404A6C[134050358] <= 0 )
      {
LABEL_241:
        sub_1400A3D70();
      }
      else
      {
        v136 = &dword_140404A6C[134050362];
        while ( *v136 != v134 )
        {
          ++v135;
          v136 += 28;
          if ( v135 >= (int)dword_140404A6C[134050358] )
            goto LABEL_241;
        }
        v177 = sub_1400A3D70();
        if ( v135 >= 0 && v135 < (int)dword_140404A6C[134050358] )
        {
          v178 = 0;
          v179 = 28LL * v135;
          dword_140404A6C[v179 + 134050374] += v177;
          do
          {
            v180 = 3597LL * v178;
            if ( dword_140404A6C[v180 + 71856253] && dword_140404A6C[v180 + 71856268] == v135 )
              dword_140404A6C[v180 + 71856272] += v177;
            ++v178;
          }
          while ( v178 < 256 );
          v194 = v178;
          sub_140158AB0(
            v202,
            "%s(%d) %d cash",
            (     char *)&dword_140404A6C[v179 + 134050365],
            dword_140404A6C[v179 + 134050362],
            v177);
          if ( dword_140404A6C[456202453] )
          {
            v181 = -1;
            do
              ++v181;
            while ( SR_VEC_LANES(128, v202[0], i8)[v181] );
            v182 = dword_140404A6C[308307070];
            if ( (int)v181 > 63 )
              LODWORD(v181) = 63;
            v183 = dword_140404A6C[283831474];
            v184 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v184) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v184) = v183;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v184), v202, (int)v181);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v181 + v184) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v184) = v181;
            dword_140404A6C[308307070] = v182 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v184) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v184) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v184) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/setrating "), 11) )
  {
    v137 = (__int8 *)(v3 + 11);
    do
    {
      v138 = *v137;
      v137[(_QWORD)((char *)&SR_VEC_LANES(128, v202[0], i64)[-1] - v3 - 3)] = *v137;
      ++v137;
    }
    while ( v138 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0] )
    {
      v139 = 0;
      do
      {
        v140 = SR_VEC_LANES(128, v202[0], i8)[v139];
        *((_BYTE *)&dword_140404A6C[293250415] + v139++) = v140;
      }
      while ( v140 );
      dword_140404A6C[293250413] = 0;
      v141 = -1;
      do
        ++v141;
      while ( SR_VEC_LANES(128, v202[0], i8)[v141] );
      dword_140404A6C[293250414] = v141;
      v142 = sub_140115360();
      v143 = 0;
      if ( (int)dword_140404A6C[134050358] <= 0 )
      {
LABEL_253:
        sub_1400A3D70();
      }
      else
      {
        while ( *v120 != v142 )
        {
          ++v143;
          v120 += 28;
          if ( v143 >= (int)dword_140404A6C[134050358] )
            goto LABEL_253;
        }
        v185 = sub_1400A3D70();
        if ( v143 >= 0 && v143 < (int)dword_140404A6C[134050358] )
        {
          v186 = 0;
          v187 = 28LL * v143;
          dword_140404A6C[v187 + 134050376] = v185;
          do
          {
            if ( dword_140404A6C[3597 * v186 + 71856253] && dword_140404A6C[3597 * v186 + 71856268] == v143 )
              dword_140404A6C[3597 * v186 + 71856276] = v185;
            ++v186;
          }
          while ( v186 < 256 );
          v194 = v186;
          sub_140158AB0(
            v202,
            "%s(%d) %d rating",
            (     char *)&dword_140404A6C[v187 + 134050365],
            dword_140404A6C[v187 + 134050362],
            v185);
          if ( dword_140404A6C[456202453] )
          {
            v188 = -1;
            do
              ++v188;
            while ( SR_VEC_LANES(128, v202[0], i8)[v188] );
            v189 = dword_140404A6C[283831474];
            v190 = dword_140404A6C[308307070];
            if ( (int)v188 > 63 )
              LODWORD(v188) = 63;
            v191 = (__int64)(int)dword_140404A6C[308307070] << 7;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v191) = 2;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v191) = v189;
            sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v191), v202, (int)v188);
            *((_BYTE *)&dword_140404A6C[297756301] + (int)v188 + v191) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v191) = v188;
            dword_140404A6C[308307070] = v190 + 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v191) = 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v191) = -1;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v191) = 0;
            HIWORD(dword_140404A6C[308307070]) = 0;
          }
        }
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/bany "), 6) )
  {
    v144 = (__int8 *)(v3 + 6);
    do
    {
      v145 = *v144;
      SR_VEC_LANES(128, v202[0], i8)[(_QWORD)v144 - 6 - v3] = *v144;
      ++v144;
    }
    while ( v145 );
    if ( SR_VEC_LANES(128, v202[0], i8)[0]
      && (unsigned int)sub_14015B070((__int64)v202, "%d", &v194) != -1
      && (dword_140404A6C[456202730] & 0x80000000) == 0
      && (int)dword_140404A6C[456202730] < (int)dword_140404A6C[134050358] )
    {
      v146 = 28LL * (int)dword_140404A6C[456202730];
      LODWORD(v193) = v194;
      dword_140404A6C[v146 + 134050385] = v194;
      sub_140158AB0(
        v202,
        "%s(%d) banned %d",
        (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v146 * 4 + 540414816),
        dword_140404A6C[v146 + 134050362],
        v193);
      if ( dword_140404A6C[456202453] )
      {
        v147 = -1;
        do
          ++v147;
        while ( SR_VEC_LANES(128, v202[0], i8)[v147] );
        v148 = dword_140404A6C[283831474];
        v149 = dword_140404A6C[308307070];
        if ( (int)v147 > 63 )
          LODWORD(v147) = 63;
        v150 = (__int64)(int)dword_140404A6C[308307070] << 7;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v150) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v150) = v148;
        sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v150), v202, (int)v147);
        *((_BYTE *)&dword_140404A6C[297756301] + (int)v147 + v150) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v150) = v147;
        dword_140404A6C[308307070] = v149 + 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v150) = 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v150) = -1;
        *(unsigned int *)((char *)&dword_140404A6C[297756296] + v150) = 0;
        HIWORD(dword_140404A6C[308307070]) = 0;
      }
      dword_140404A6C[456202730] = -1;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/bann"), 5) )
  {
    if ( dword_140404A6C[456202453] )
    {
      v151 = dword_140404A6C[283831474];
      v152 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v152) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v152) = v151;
      *(_QWORD *)((char *)&dword_140404A6C[297756301] + v152) = 0x636E6163206E6162LL;
      *(unsigned int *)((char *)&dword_140404A6C[297756303] + v152) = 1684368485;
      *((_BYTE *)&dword_140404A6C[297756304] + v152) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v152) = 12;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v152) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v152) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v152) = 0;
    }
    dword_140404A6C[456202730] = -1;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/kick "), 6) )
  {
    v153 = -1;
    v194 = 0;
    if ( (int)dword_140404A6C[456202445] > 0 )
    {
      v154 = 0;
      do
      {
        v155 = (int)dword_140404A6C[47224 * v154 + 438887411];
        if ( (_DWORD)v155 != -1 )
        {
          v156 = 3597 * v155;
          v157 = (unsigned __int8 *)(v3 + 6);
          v158 = (char *)&dword_140404A6C[v156 + 71856252] - v3 + 2;
          do
          {
            v159 = (unsigned __int8)v158[(_QWORD)v157];
            v160 = *v157 - v159;
            if ( v160 )
              break;
            ++v157;
          }
          while ( v159 );
          if ( !v160 )
            v153 = v154;
        }
        ++v154;
      }
      while ( v154 < (int)dword_140404A6C[456202445] );
      v194 = v154;
      if ( v153 != -1 )
      {
        v161 = dword_140404A6C[438887397];
        v162 = 47224LL * v153;
        dword_140404A6C[dword_140404A6C[438887397] + 438886373] = dword_140404A6C[v162 + 438887405];
        dword_140404A6C[438887397] = v161 + 1;
        dword_140404A6C[v162 + 438887414] = 1200;
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/message "), 9) )
  {
    v163 = *(__m128i *)(v3 + 25);
    v202[0] = *(__m128i *)(v3 + 9);
    v164 = *(__m128i *)(v3 + 41);
    v202[1] = v163;
    v165 = *(__m128i *)(v3 + 57);
    v202[2] = v164;
    v202[3] = v165;
    if ( dword_140404A6C[456202453] )
    {
      v166 = -1;
      do
        ++v166;
      while ( SR_VEC_LANES(128, v202[0], i8)[v166] );
      v167 = dword_140404A6C[283831474];
      v168 = dword_140404A6C[308307070];
      if ( (int)v166 > 63 )
        LODWORD(v166) = 63;
      v169 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v169) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v169) = v167;
      sub_1401FC920((__m128i *)((char *)&dword_140404A6C[297756301] + v169), v202, (int)v166);
      *((_BYTE *)&dword_140404A6C[297756301] + (int)v166 + v169) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v169) = v166;
      dword_140404A6C[308307070] = v168 + 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v169) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v169) = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v169) = 0;
      HIWORD(dword_140404A6C[308307070]) = 0;
    }
  }
  v170 = strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/clearkick"), 10);
  v171 = dword_140404A6C[438887397];
  if ( !v170 )
    v171 = 0;
  dword_140404A6C[438887397] = v171;
  return 1; /* 0x140132565: mov eax, 1 */
}
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204

// 140236FF0: using guessed type __int64 __fastcall strncmp(_QWORD, _QWORD, _QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAA8: using guessed type unsigned int;
// 183EBFCC4: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 183F7A610: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1A8E3DA00: using guessed type unsigned int;
// 1AD04B214: using guessed type unsigned int;
// 1AD04B218: using guessed type unsigned int;
// 1AD04B21C: using guessed type unsigned int;

//----- (0000000140136450) ----------------------------------------------------
void sub_140136450()
{
  __int64 v0; // r14
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  signed int v10; // ecx
  unsigned int *v11; // rax
  __int128 v12; // xmm1
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ebx
  unsigned int v20; // r8d
  signed int v21; // edx
  __int128 v22; // xmm1
  signed int v23; // r9d
  char v24; // r8
  int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // ecx
  signed int v28; // r9d
  int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned __int16 v35; // dx
  __int64 v36; // r13
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // xmm0_4
  unsigned int *v41; // rcx
  unsigned int *v42; // rbx
  __int64 v43; // rdi
  unsigned int *v44; // rbx
  unsigned int *v45; // rdi
  signed int v46; // eax
  signed int v47; // r9d
  char v48; // r8
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  signed int v51; // r9d
  unsigned int v52; // r10d
  unsigned int v53; // ecx
  signed int v54; // r9d
  unsigned int v55; // r10d
  unsigned int v56; // ecx
  signed int v57; // eax
  signed int v58; // r8d
  char v59; // r9
  unsigned int v60; // r10d
  unsigned int v61; // ecx
  __int64 v62; // r12
  unsigned int *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  signed int v68; // eax
  signed int v69; // eax
  signed int v70; // eax
  signed int v71; // eax
  signed int v72; // eax
  signed int v73; // eax
  signed int v74; // eax
  signed int v75; // eax
  int *v76; // rbx
  __int64 v77; // rdi
  unsigned int *v78; // rbx
  signed int v79; // eax
  signed int v80; // eax
  signed int v81; // eax
  signed int v82; // eax
  signed int v83; // eax
  __int64 v84; // rbp
  int *v85; // r14
  _DWORD *v86; // rbx
  __int64 v87; // rdi
  int v88; // eax
  int v89; // r8d
  signed int v90; // edx
  __int64 v91; // rdi
  __int64 v92; // rbp
  __int64 v93; // rsi
  __int64 v94; // rbx
  unsigned int v95; // ebx
  signed int v96; // r9d
  unsigned int v97; // r10d
  unsigned int v98; // ecx
  __int64 v99; // rsi
  unsigned int *v100; // rdi
  unsigned int *v101; // r13
  __int64 v102; // rax
  __int64 v103; // r15
  unsigned int v104; // r14d
  __int64 v105; // rbp
  signed int v106; // ebx
  __int64 v107; // r12
  signed int v108; // r8d
  char v109; // r9
  unsigned int v110; // r10d
  unsigned int v111; // ecx
  unsigned __int64 v112; // rdi
  signed int v113; // r10d
  signed int v114; // r8d
  unsigned int v115; // edi
  unsigned int v116; // r9d
  unsigned int v117; // ecx
  int v118; // ebp
  int v119; // r14d
  signed int v120; // r8d
  char v121; // r10
  unsigned int v122; // r9d
  signed int v123; // eax
  unsigned int v124; // ecx
  __int64 v125; // r15
  __int64 v126; // r15
  signed int v127; // r8d
  int v128; // r10d
  signed int v129; // r9d
  unsigned int v130; // ecx
  unsigned __int16 v131; // dx
  __int64 v132; // rcx
  int v133; // ebp
  unsigned int *v134; // r14
  unsigned int *v135; // rdi
  unsigned int *v136; // rbx
  __int64 v137; // rsi
  signed int v138; // eax
  signed int v139; // eax
  __int128 v140; // xmm1
  signed int v141; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140136450[208];
#define v142 (*(__int64 (*))(void *)(sr_frame_140136450 + 0)) /* [rsp+20h] */
#define v143 (*(__int64 (*))(void *)(sr_frame_140136450 + 8)) /* [rsp+28h] */
#define v144 (*(__int64 (*))(void *)(sr_frame_140136450 + 16)) /* [rsp+30h] */
#define v145 (*(__int64 (*))(void *)(sr_frame_140136450 + 24)) /* [rsp+38h] */
#define v146 (*(__int64 (*))(void *)(sr_frame_140136450 + 32)) /* [rsp+40h] */
#define v147 (*(unsigned int (*))(void *)(sr_frame_140136450 + 40)) /* [rsp+48h] */
#define v148 (*(unsigned int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define v149 (*(int (*))(void *)(sr_frame_140136450 + 176)) /* [rsp+D0h] */
#define v150 (*(unsigned int * (*))(void *)(sr_frame_140136450 + 184)) /* [rsp+D8h] */
#define v151 (*(__int64 (*))(void *)(sr_frame_140136450 + 192)) /* [rsp+E0h] */
#define v152 (*(unsigned int * (*))(void *)(sr_frame_140136450 + 200)) /* [rsp+E8h] */

  v0 = (int)dword_140404A6C[456202445];
  ++dword_140404A6C[456202728];
  sub_1400299C0();
  sub_140127630();
  v1 = 256;
  v2 = &dword_140404A6C[438881245];
  v3 = 0;
  do
  {
    if ( *v2 )
    {
      if ( (--v2[1] & 0x80000000) != 0 )
        *v2 = 0;
    }
    v2 += 20;
    --v1;
  }
  while ( v1 );
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v5 = &dword_140404A6C[438934628];
    v6 = dword_140404A6C[456202445];
    do
    {
      v7 = (int)*(v5 - 47217);
      if ( (_DWORD)v7 != -1 )
      {
        v8 = 3597 * v7;
        v9 = dword_140404A6C[3597 * v7 + 71856268];
        if ( v9 != -1 )
        {
          v10 = *v5;
          if ( *v5 != -1 )
            goto LABEL_17;
          v10 = 0;
          v11 = &dword_140404A6C[438881247];
          while ( !*(v11 - 2) || *v11 != v9 )
          {
            ++v10;
            v11 += 20;
            if ( (__int64)v11 >= (__int64)&dword_140404A6C[438886367] )
            {
              v10 = sub_140132E00();
              *v5 = v10;
              goto LABEL_16;
            }
          }
          *v5 = v10;
LABEL_16:
          if ( v10 != -1 )
          {
LABEL_17:
            v12 = *(_OWORD *)&dword_140404A6C[v8 + 71856258];
            v13 = dword_140404A6C[v8 + 71856265];
            v14 = 10LL * v10;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881248] = *(_OWORD *)&dword_140404A6C[v8 + 71856254];
            dword_140404A6C[2 * v14 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v14 + 438881252] = v12;
            dword_140404A6C[2 * v14 + 438881246] = 3600;
            dword_140404A6C[2 * v14 + 438881247] = v9;
            dword_140404A6C[2 * v14 + 438881264] = v13;
          }
        }
      }
      v5 += 47224;
      --v6;
    }
    while ( v6 );
    v3 = 0;
  }
  v148 = 0;
  v15 = 0;
  v151 = v0;
  if ( (int)v0 > 0 )
  {
    v16 = 0;
    v17 = v0;
    v145 = 0;
    while ( 1 )
    {
      v18 = 47224 * v16;
      v143 = 47224 * v16;
      v19 = dword_140404A6C[47224 * v16 + 438887412];
      if ( v19 <= 0 )
        break;
LABEL_239:
      ++v15;
      v16 = v145 + 1;
      v148 = v15;
      v145 = v16;
      if ( v16 >= v17 )
        goto LABEL_240;
    }
    v20 = dword_140404A6C[283831447];
    if ( dword_140404A6C[v18 + 438887409] != dword_140404A6C[283831447] )
    {
      dword_140404A6C[289301094] = dword_1402B2658;
      *(_QWORD *)&dword_140404A6C[289301092] = 9;
      LOBYTE(dword_140404A6C[289301095]) = 6;
      *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
      sub_140115D90(&dword_140404A6C[283831312], 4);
      sub_140115D90(&dword_140404A6C[283831441], 4);
      sub_140115D90(&dword_140404A6C[283831446], 8);
      v21 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v21 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v22 = *(_OWORD *)&dword_140404A6C[283831317];
        *(_OWORD *)((char *)&dword_140404A6C[289301094] + v21) = *(_OWORD *)&dword_140404A6C[283831313];
        *(_OWORD *)((char *)&dword_140404A6C[289301098] + v21) = v22;
        v21 = dword_140404A6C[289301092] + 32;
        dword_140404A6C[289301092] += 32;
      }
      v23 = 16;
      v24 = dword_140404A6C[289301093];
      v25 = (int)(fabs(*(float *)&dword_140404A6C[283831482]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v26 = v25 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831482] >= 0.0 )
          v26 = v25;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v23) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v26 << SLOBYTE(dword_140404A6C[289301093]);
          v27 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v23 < 8 - dword_140404A6C[289301093] )
            break;
          v24 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v23 == v27 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_38;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v26 >>= v27;
          v23 -= v27;
          ++dword_140404A6C[289301092];
          if ( v23 <= 0 )
            goto LABEL_38;
        }
        v24 = v23 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v23;
      }
LABEL_38:
      v28 = 16;
      v29 = (int)(fabs(*(float *)&dword_140404A6C[283831483]) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v30 = v29 | 0x8000;
        if ( *(float *)&dword_140404A6C[283831483] >= 0.0 )
          v30 = v29;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v21) &= ~(((1 << v28) - 1) << v24);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
          v31 = 8 - dword_140404A6C[289301093];
          v21 = dword_140404A6C[289301092];
          if ( v28 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v28 == v31 )
          {
            v21 = ++dword_140404A6C[289301092];
            goto LABEL_47;
          }
          v21 = dword_140404A6C[289301092] + 1;
          v30 >>= v31;
          v28 -= v31;
          ++dword_140404A6C[289301092];
          v24 = 0;
          if ( v28 <= 0 )
            goto LABEL_47;
        }
        dword_140404A6C[289301093] += v28;
      }
LABEL_47:
      if ( dword_140404A6C[283831312] == 7 )
      {
        sub_140115D90(&dword_140404A6C[284022502], 8);
        v21 = dword_140404A6C[289301092];
      }
      v32 = *(_QWORD *)&dword_140404A6C[v18 + 438887407];
      v33 = v19 + v21;
      v34 = dword_140404A6C[v18 + 438887405];
      dword_140404A6C[456202456] = v21;
      v35 = dword_140404A6C[v18 + 438887406];
      dword_140404A6C[v18 + 438887412] = v33;
      sub_140130350(v34, v35, v32);
LABEL_238:
      v17 = v151;
      goto LABEL_239;
    }
    v36 = (int)dword_140404A6C[v18 + 438887411];
    v37 = dword_140404A6C[283831448];
    if ( (_DWORD)v36 == -1
      || (v38 = (int)dword_140404A6C[3597 * v36 + 71856292], (_DWORD)v38 == -1)
      || (v39 = 7166 * v38, (int)dword_140404A6C[7166 * v38 + 280651318] <= 0) )
    {
      v41 = &dword_140404A6C[v18 + 438920024];
      if ( dword_140404A6C[283831448] == 2 )
      {
        *v41 = dword_140404A6C[v18 + 438920021];
        v41[1] = dword_140404A6C[v18 + 438920022];
        v40 = dword_140404A6C[v18 + 438920023];
      }
      else
      {
        *(_QWORD *)v41 = 0;
        v40 = 0;
      }
    }
    else
    {
      v40 = dword_140404A6C[v39 + 280651337];
      v41 = &dword_140404A6C[v18 + 438920024];
      *v41 = dword_140404A6C[v39 + 280651335];
      v41[1] = dword_140404A6C[v39 + 280651336];
    }
    v41[2] = v40;
    dword_140404A6C[289301094] = dword_1402B2658;
    *(unsigned int *)((char *)&dword_140404A6C[289301096] + 1) = dword_140404A6C[283831474];
    *(_QWORD *)&dword_140404A6C[289301092] = 13;
    LOBYTE(dword_140404A6C[289301095]) = 5;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = v20;
    sub_140115D90(&dword_140404A6C[283831448], 4);
    if ( v37 == 1 )
    {
      v42 = &dword_140404A6C[71856271];
      v43 = 32;
      do
      {
        sub_140115D90(v42, 1);
        v42 += 3597;
        --v43;
      }
      while ( v43 );
    }
    else if ( v37 != 3 )
    {
LABEL_64:
      v46 = dword_140404A6C[289301092];
      v47 = 24;
      v48 = dword_140404A6C[289301093];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v49 = dword_140404A6C[283831450] & 0xFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v47) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v47 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v47 == v50 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_72;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v47 -= v50;
          ++dword_140404A6C[289301092];
          if ( v47 <= 0 )
            goto LABEL_72;
        }
        v48 = v47 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v47;
      }
LABEL_72:
      v51 = 16;
      if ( v46 < 0x10000 )
      {
        v52 = LOWORD(dword_140404A6C[284022086]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v51) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v52 << SLOBYTE(dword_140404A6C[289301093]);
          v53 = 8 - dword_140404A6C[289301093];
          v46 = dword_140404A6C[289301092];
          if ( v51 < 8 - dword_140404A6C[289301093] )
            break;
          v48 = v3;
          dword_140404A6C[289301093] = v3;
          if ( v51 == v53 )
          {
            v46 = ++dword_140404A6C[289301092];
            goto LABEL_80;
          }
          v46 = dword_140404A6C[289301092] + 1;
          v52 >>= v53;
          v51 -= v53;
          ++dword_140404A6C[289301092];
          if ( v51 <= 0 )
            goto LABEL_80;
        }
        v48 = v51 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v51;
      }
LABEL_80:
      v54 = 30;
      if ( v46 < 0x10000 )
      {
        v55 = dword_140404A6C[179992853] & 0x3FFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v46) &= ~(((1 << v54) - 1) << v48);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v55 << SLOBYTE(dword_140404A6C[289301093]);
          v56 = 8 - dword_140404A6C[289301093];
          if ( v54 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v54 == v56 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_88;
          }
          v54 -= v56;
          v46 = dword_140404A6C[289301092] + 1;
          v55 >>= v56;
          ++dword_140404A6C[289301092];
          v48 = v3;
          if ( v54 <= 0 )
            goto LABEL_88;
        }
        dword_140404A6C[289301093] += v54;
      }
LABEL_88:
      sub_140115D90(&dword_140404A6C[283831506], 6);
      sub_140115D90(&dword_140404A6C[283837379], 6);
      sub_140115D90(&dword_140404A6C[283843252], 6);
      sub_140115D90(&dword_140404A6C[283849125], 6);
      sub_140115D90(&dword_140404A6C[283854998], 6);
      v57 = dword_140404A6C[289301092];
      v58 = 8;
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v59 = dword_140404A6C[289301093];
        v60 = (unsigned __int8)v36;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v57) &= ~(((1 << v58) - 1) << v59);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v60 << SLOBYTE(dword_140404A6C[289301093]);
          v61 = 8 - dword_140404A6C[289301093];
          if ( v58 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = v3;
          if ( v58 == v61 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_96;
          }
          v58 -= v61;
          v57 = dword_140404A6C[289301092] + 1;
          v60 >>= v61;
          ++dword_140404A6C[289301092];
          v59 = v3;
          if ( v58 <= 0 )
            goto LABEL_96;
        }
        dword_140404A6C[289301093] += v58;
      }
LABEL_96:
      v62 = 3597 * v36;
      v63 = &dword_140404A6C[3597 * v36 + 71856292];
      sub_140115D90(v63, 10);
      v146 = 0;
      v147 = 0;
      if ( (_DWORD)v36 != -1 )
      {
        v64 = (int)*v63;
        if ( (_DWORD)v64 != -1 )
        {
          dword_140404A6C[v62 + 71856327] = dword_140404A6C[7166 * v64 + 280651341];
          dword_140404A6C[v62 + 71856328] = dword_140404A6C[7166 * *v63 + 280651342];
          v65 = 7166LL * (int)*v63;
          v146 = *(_QWORD *)&dword_140404A6C[v65 + 280651680];
          v147 = dword_140404A6C[v65 + 280651682];
        }
      }
      v66 = (int)*v63;
      if ( (_DWORD)v66 != -1 )
      {
        v67 = 28664 * v66;
        v68 = dword_140404A6C[289301092];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v68 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = v3;
            ++dword_140404A6C[289301092];
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v68) = dword_140404A6C[v67 / 4 + 280651341];
          v69 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v69;
          if ( v69 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v69;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v69;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v69) = dword_140404A6C[v67 / 4 + 280651342];
            v70 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v70;
            if ( v70 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v70;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v70;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v70) = dword_140404A6C[v67 / 4 + 280651365];
              v71 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v71;
              if ( v71 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v71;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v71;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v71) = dword_140404A6C[v67 / 4 + 280651366];
                v72 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] = v72;
                if ( v72 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v72;
                    dword_140404A6C[289301093] = v3;
                    dword_140404A6C[289301092] = v72;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v72) = dword_140404A6C[v67 / 4 + 280651357];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
        }
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818692), 1);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818688), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846696), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846704), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846708), 4);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846712), 4);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846692), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846552), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846564), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846572), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846580), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846588), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846596), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126846604), 7);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818596), 8);
        sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v67 + 1126818600), 8);
      }
      v73 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v73 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v73) = v146;
        v74 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v74;
        if ( v74 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v74;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v74;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v74) = HIDWORD(v146);
          v75 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v75;
          if ( v75 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v75;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v75;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v147;
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856289], 1);
      sub_140115D90(&dword_140404A6C[v62 + 71856342], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71856343], 16);
      if ( dword_140404A6C[v62 + 71856342] == 10 )
      {
        v76 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 56076LL * (int)dword_140404A6C[v62 + 71856343] + 906829868);
        sub_140115D90(v76, 8);
        if ( *v76 > 0 )
        {
          v77 = (unsigned int)*v76;
          v78 = &dword_140404A6C[14019 * dword_140404A6C[v62 + 71856343] + 225654130];
          do
          {
            sub_140115D90(v78 - 1, 8);
            sub_140115D90(v78, 24);
            sub_140115D90(v78 + 1, 4);
            v78 += 3;
            --v77;
          }
          while ( v77 );
        }
      }
      v79 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v79 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = v3;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v79) = dword_140404A6C[v62 + 71856272];
        v80 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v80;
        if ( v80 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v80;
            dword_140404A6C[289301093] = v3;
            dword_140404A6C[289301092] = v80;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v80) = dword_140404A6C[v62 + 71856273];
          v81 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v81;
          if ( v81 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v81;
              dword_140404A6C[289301093] = v3;
              dword_140404A6C[289301092] = v81;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v81) = dword_140404A6C[v62 + 71856274];
            v82 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] = v82;
            if ( v82 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v82;
                dword_140404A6C[289301093] = v3;
                dword_140404A6C[289301092] = v82;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v82) = dword_140404A6C[v62 + 71856275];
              v83 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v83;
              if ( v83 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v83;
                  dword_140404A6C[289301093] = v3;
                  dword_140404A6C[289301092] = v83;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v83) = dword_140404A6C[v62 + 71856276];
                dword_140404A6C[289301092] += 4;
              }
            }
          }
        }
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856291], 16);
      sub_140115D90(&dword_140404A6C[v62 + 71856362], 8);
      sub_140115D90(&dword_140404A6C[v62 + 71857711], 10);
      sub_140115D90(&dword_140404A6C[v62 + 71857712], 6);
      sub_140115D90(&dword_140404A6C[v62 + 71857713], 8);
      v84 = 7;
      v85 = (int *)&dword_140404A6C[v62 + 71857714];
      do
      {
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71857714] + v3 + v62 * 4), 4);
        if ( *v85 > 0 )
        {
          v86 = (unsigned int *)((char *)&dword_140404A6C[v62 + 71857715] + v3);
          v87 = (unsigned int)*v85;
          do
          {
            sub_140115D90(v86++, 16);
            --v87;
          }
          while ( v87 );
        }
        v3 += 36;
        v85 += 9;
        --v84;
      }
      while ( v84 );
      sub_140115D90(&dword_140404A6C[v62 + 71857986], 8);
      v88 = dword_140404A6C[v62 + 71857986];
      if ( v88 > 0 )
      {
        v89 = dword_140404A6C[289301093];
        v90 = dword_140404A6C[289301092];
        v91 = 0;
        v92 = (unsigned int)v88;
        do
        {
          v93 = v62 * 4 + 72 * v91;
          if ( v90 < 0x10000 )
          {
            if ( v89 > 0 )
            {
              ++v90;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v90;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71857987]
                                                                                           + v93);
            v89 = dword_140404A6C[289301093];
            v90 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v94 = -1;
          do
            ++v94;
          while ( *((_BYTE *)&dword_140404A6C[71857988] + v93 + v94) );
          v95 = v94 & 0x3F;
          v96 = 6;
          if ( v90 < 0x10000 )
          {
            v97 = v95;
            while ( 1 )
            {
              *((_BYTE *)&dword_140404A6C[289301094] + v90) &= ~(((1 << v96) - 1) << v89);
              *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v97 << SLOBYTE(dword_140404A6C[289301093]);
              v98 = 8 - dword_140404A6C[289301093];
              v90 = dword_140404A6C[289301092];
              if ( v96 < 8 - dword_140404A6C[289301093] )
                break;
              v89 = 0;
              dword_140404A6C[289301093] = 0;
              if ( v96 == v98 )
              {
                v90 = ++dword_140404A6C[289301092];
                goto LABEL_168;
              }
              v90 = dword_140404A6C[289301092] + 1;
              v97 >>= v98;
              v96 -= v98;
              ++dword_140404A6C[289301092];
              if ( v96 <= 0 )
                goto LABEL_168;
            }
            v89 = v96 + dword_140404A6C[289301093];
            dword_140404A6C[289301093] += v96;
LABEL_168:
            if ( v90 < 0x10000 )
            {
              if ( v89 > 0 )
              {
                ++v90;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v90;
              }
              sub_1401FC920(
                (__m128i *)((char *)&dword_140404A6C[289301094] + v90),
                (     __m128i *)((char *)&dword_140404A6C[71857988] + v93),
                v95);
              v89 = dword_140404A6C[289301093];
              v90 = v95 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] = v90;
              if ( v90 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v90;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v90;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v90) = *(unsigned int *)((char *)&dword_140404A6C[71858004]
                                                                                               + v93);
                v89 = dword_140404A6C[289301093];
                v90 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
          }
          ++v91;
          --v92;
        }
        while ( v92 );
      }
      sub_140115D90(&dword_140404A6C[v62 + 71856282], 8);
      sub_140110D00(v148, v36);
      sub_14002DB60(v148, dword_140404A6C[v143 + 438887411]);
      v99 = 8;
      v100 = &dword_140404A6C[v143 + 438887429];
      v144 = 47224LL * v148;
      v152 = &dword_140404A6C[v143 + 438887429];
      v101 = &dword_140404A6C[v144 + 438887429];
      v142 = 8;
      v150 = &dword_140404A6C[v144 + 438887429];
      do
      {
        sub_140115D90(v101 - 1, 1);
        if ( !*(v100 - 1) )
          goto LABEL_194;
        sub_140115D90(v101, 8);
        sub_140115D90(v101 + 1, 8);
        sub_140115D90(v101 + 2, 8);
        v102 = (int)*v100;
        v103 = 32901 * v102;
        v104 = dword_140404A6C[32901 * v102 + 299853696] & 0x3F;
        dword_140404A6C[32901 * v102 + 299853696] = v104;
        v105 = ((_BYTE)v104 - 4) & 0x3F;
        if ( (_DWORD)v105 == v104 )
        {
LABEL_194:
          v106 = dword_140404A6C[289301092];
        }
        else
        {
          v106 = dword_140404A6C[289301092];
          v107 = 32901 * v102;
          do
          {
            v108 = 6;
            if ( v106 < 0x10000 )
            {
              v109 = dword_140404A6C[289301093];
              v110 = v105;
              while ( 1 )
              {
                *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v108) - 1) << v109);
                *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v110 << SLOBYTE(dword_140404A6C[289301093]);
                v111 = 8 - dword_140404A6C[289301093];
                if ( v108 < 8 - dword_140404A6C[289301093] )
                  break;
                dword_140404A6C[289301093] = 0;
                if ( v108 == v111 )
                {
                  ++dword_140404A6C[289301092];
                  goto LABEL_188;
                }
                v108 -= v111;
                v106 = dword_140404A6C[289301092] + 1;
                v110 >>= v111;
                ++dword_140404A6C[289301092];
                v109 = 0;
                if ( v108 <= 0 )
                  goto LABEL_188;
              }
              dword_140404A6C[289301093] += v108;
            }
LABEL_188:
            sub_140115D90(&dword_140404A6C[v107 + 299853762 + v105], 11);
            sub_140115D90(&dword_140404A6C[v107 + 299853698 + v105], 2);
            v112 = (int)dword_140404A6C[v107 + 299853762 + v105];
            v106 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v106 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              sub_1401FC920(
                (__m128i *)((char *)&dword_140404A6C[289301094] + v106),
                (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v105 + 299853826 + v103],
                v112);
              v106 = v112 + dword_140404A6C[289301092];
              dword_140404A6C[289301092] += v112;
            }
            v105 = ((_BYTE)v105 + 1) & 0x3F;
          }
          while ( (_DWORD)v105 != v104 );
          v101 = v150;
          v100 = v152;
          v99 = v142;
        }
        v101 += 10;
        v100 += 10;
        --v99;
        v150 = v101;
        v142 = v99;
        v152 = v100;
      }
      while ( v99 );
      v113 = dword_140404A6C[308307070];
      v114 = 16;
      v115 = dword_140404A6C[289301093];
      if ( v106 < 0x10000 )
      {
        v116 = LOWORD(dword_140404A6C[308307070]);
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v114) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v116 << SLOBYTE(dword_140404A6C[289301093]);
          v117 = 8 - dword_140404A6C[289301093];
          v106 = dword_140404A6C[289301092];
          if ( v114 < 8 - dword_140404A6C[289301093] )
            break;
          v115 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v114 == v117 )
          {
            v106 = ++dword_140404A6C[289301092];
            goto LABEL_204;
          }
          v106 = dword_140404A6C[289301092] + 1;
          v116 >>= v117;
          v114 -= v117;
          ++dword_140404A6C[289301092];
          if ( v114 <= 0 )
            goto LABEL_204;
        }
        v115 = v114 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v114;
      }
LABEL_204:
      LOBYTE(v99) = 0;
      v118 = dword_140404A6C[v143 + 438887424];
      v119 = v113 - v118 + 0x10000;
      if ( v113 >= v118 )
        v119 = v113 - v118;
      if ( v119 > 63 )
        v119 = 63;
      v120 = 6;
      if ( !dword_140404A6C[456202445] )
        v119 = 0;
      if ( v106 < 0x10000 )
      {
        v121 = v115;
        v122 = v119 & 0x3F;
        v123 = v106;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v123) &= ~(((1 << v120) - 1) << v121);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v122 << SLOBYTE(dword_140404A6C[289301093]);
          v124 = 8 - dword_140404A6C[289301093];
          if ( v120 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v120 == v124 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_218;
          }
          v120 -= v124;
          v123 = dword_140404A6C[289301092] + 1;
          v122 >>= v124;
          ++dword_140404A6C[289301092];
          v121 = 0;
          if ( v120 <= 0 )
            goto LABEL_218;
        }
        dword_140404A6C[289301093] += v120;
      }
LABEL_218:
      v125 = 47224LL * v148;
      sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v144 * 4 + 1759763052), 16);
      v15 = v148;
      if ( v119 > 0 )
      {
        v126 = (unsigned int)v119;
        LOBYTE(v99) = v119;
        do
        {
          sub_14010EFF0(v118, v148);
          v118 = (unsigned __int16)(v118 + 1);
          --v126;
        }
        while ( v126 );
        v125 = 47224LL * v148;
      }
      v127 = dword_140404A6C[289301092];
      v128 = dword_140404A6C[289301093];
      v129 = 6;
      dword_140404A6C[v143 + 438887424] = v118;
      dword_140404A6C[289301092] = v106;
      dword_140404A6C[289301093] = v115;
      if ( v106 < 0x10000 )
      {
        do
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v106) &= ~(((1 << v129) - 1) << v115);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v99 << SLOBYTE(dword_140404A6C[289301093]);
          v130 = 8 - dword_140404A6C[289301093];
          if ( v129 <= 8 - dword_140404A6C[289301093] )
            break;
          v129 -= v130;
          v106 = dword_140404A6C[289301092] + 1;
          LODWORD(v99) = (unsigned int)v99 >> v130;
          ++dword_140404A6C[289301092];
          LOBYTE(v115) = 0;
          dword_140404A6C[289301093] = 0;
        }
        while ( v129 > 0 );
        v15 = v148;
      }
      dword_140404A6C[289301092] = v127;
      dword_140404A6C[289301093] = v128;
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934627];
        v128 = dword_140404A6C[289301093];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      ++dword_140404A6C[v143 + 438934627];
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          dword_140404A6C[289301092] = ++v127;
          dword_140404A6C[289301093] = 0;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934625];
        v127 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v127;
        if ( v127 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v127;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v127;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v127) = dword_140404A6C[v125 + 438934626];
          v127 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] += 4;
        }
      }
      dword_140404A6C[v143 + 438887412] += v127;
      v131 = dword_140404A6C[v143 + 438887406];
      v132 = dword_140404A6C[v143 + 438887405];
      dword_140404A6C[456202456] = v127;
      sub_140130350(v132, v131, *(_QWORD *)&dword_140404A6C[v143 + 438887407]);
      v3 = 0;
      goto LABEL_238;
    }
    v44 = &dword_140404A6C[284023018];
    v3 = 3;
    v45 = &dword_140404A6C[283831505];
    do
    {
      sub_140115D90(v45, 16);
      sub_140115D90(v44, 16);
      v45 += 5873;
      ++v44;
      --v3;
    }
    while ( v3 );
    goto LABEL_64;
  }
LABEL_240:
  v133 = 0;
  v149 = 0;
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v134 = &dword_140404A6C[438887407];
    do
    {
      if ( v134[3] && (((unsigned __int8)v133 ^ LOBYTE(dword_140404A6C[283831474])) & 0x7F) == 0 )
      {
        v135 = &dword_140404A6C[438881245];
        dword_140404A6C[289301094] = dword_1402B2658;
        v136 = &dword_140404A6C[438881247];
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v137 = 256;
        LOBYTE(dword_140404A6C[289301095]) = 9;
        do
        {
          sub_140115D90(v136 - 2, 1);
          if ( *v135 )
          {
            v138 = dword_140404A6C[289301092];
            if ( (int)dword_140404A6C[289301092] < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                v138 = dword_140404A6C[289301092] + 1;
                dword_140404A6C[289301093] = 0;
                ++dword_140404A6C[289301092];
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v138) = *v136;
              v139 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v139;
              if ( v139 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v139;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v139;
                }
                v140 = *(_OWORD *)(v136 + 5);
                *(_OWORD *)((char *)&dword_140404A6C[289301094] + v139) = *(_OWORD *)(v136 + 1);
                *(_OWORD *)((char *)&dword_140404A6C[289301098] + v139) = v140;
                v141 = dword_140404A6C[289301092] + 32;
                dword_140404A6C[289301092] = v141;
                if ( v141 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v141;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v141;
                  }
                  *(unsigned int *)((char *)&dword_140404A6C[289301094] + v141) = v136[17];
                  dword_140404A6C[289301092] += 4;
                }
              }
            }
          }
          v136 += 20;
          v135 += 20;
          --v137;
        }
        while ( v137 );
        sub_140130350(*(v134 - 2), *((_WORD *)v134 - 2), *(_QWORD *)v134);
        v133 = v149;
      }
      ++v133;
      v134 += 47224;
      v149 = v133;
    }
    while ( v133 < (int)dword_140404A6C[456202445] );
  }
}
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

// 140137AE6: masking with 0x3F was optimized away because esi.4 <= 0x3F
// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAB0: using guessed type unsigned int;
// 183EBFAC0: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183EBFCCC: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;
// 1AD04ADCC: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (00000001401380F0) ----------------------------------------------------
__int64            sub_1401380F0(int a1, int a2)
{
  /* src/engine/item_tick.c */
  extern void item_follow_holder(int item, int human);
  item_follow_holder(a1, a2);
  return 0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140138770) ----------------------------------------------------
unsigned int *sub_140138770()
{
  unsigned int *v0; // rax
  __int64 v1; // rcx
  unsigned int *result; // rax
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm4_4

  *(_OWORD *)&dword_140404A6C[282486052] = xmmword_1402792B0;
  dword_140404A6C[282486045] = 0;
  dword_140404A6C[282486050] = -1107296256;
  *(_OWORD *)&dword_140404A6C[282486077] = xmmword_1402792B0;
  dword_140404A6C[282486051] = 0;
  *(_OWORD *)&dword_140404A6C[282486102] = xmmword_1402792B0;
  dword_140404A6C[282486056] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486046] = 0;
  dword_140404A6C[282486070] = 0;
  *(_OWORD *)&dword_140404A6C[282486127] = xmmword_1402792D0;
  *(_QWORD *)&dword_140404A6C[282486075] = 1040187392;
  *(_OWORD *)&dword_140404A6C[282486071] = xmmword_140278D50;
  dword_140404A6C[282486081] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486096] = xmmword_140278D50;
  dword_140404A6C[282486095] = 1;
  *(_OWORD *)&dword_140404A6C[282486302] = xmmword_1402792C0;
  *(_QWORD *)&dword_140404A6C[282486100] = 1040187392;
  *(_OWORD *)&dword_140404A6C[282486327] = xmmword_1402792C0;
  dword_140404A6C[282486106] = 1096810496;
  *(_OWORD *)&dword_140404A6C[282486121] = xmmword_140278D60;
  dword_140404A6C[282486120] = 2;
  dword_140404A6C[282486131] = 1090519040;
  *(_OWORD *)&dword_140404A6C[282486296] = xmmword_1402798A0;
  *(_QWORD *)&dword_140404A6C[282486125] = 1044381696;
  dword_140404A6C[282486295] = 0;
  *(_OWORD *)&dword_140404A6C[282486321] = xmmword_140278DD0;
  *(_QWORD *)&dword_140404A6C[282486300] = 0;
  *(_OWORD *)&dword_140404A6C[282486352] = xmmword_1402792E0;
  dword_140404A6C[282486306] = 1094713344;
  *(_OWORD *)&dword_140404A6C[282486346] = xmmword_140278EA0;
  dword_140404A6C[282486320] = 10;
  dword_140404A6C[282486325] = -1098907648;
  dword_140404A6C[282486397] = -1090519040;
  *(_OWORD *)&dword_140404A6C[282486427] = xmmword_1402792E0;
  dword_140404A6C[282486326] = 0;
  dword_140404A6C[282486423] = -1115684864;
  dword_140404A6C[282486331] = 1088421888;
  dword_140404A6C[282486345] = 11;
  dword_140404A6C[282486350] = -1098907648;
  dword_140404A6C[282486351] = 0;
  dword_140404A6C[282486356] = 1077936128;
  dword_140404A6C[282486370] = 0;
  *(_OWORD *)&dword_140404A6C[282486377] = xmmword_1402792C0;
  dword_140404A6C[282486372] = -1098907648;
  dword_140404A6C[282486373] = 0;
  dword_140404A6C[282486371] = 1035993088;
  *(_QWORD *)&dword_140404A6C[282486375] = 0;
  dword_140404A6C[282486374] = 1035993088;
  dword_140404A6C[282486381] = 1094713344;
  dword_140404A6C[282486395] = 13;
  *(_OWORD *)&dword_140404A6C[282486402] = xmmword_1402792C0;
  dword_140404A6C[282486398] = 0;
  dword_140404A6C[282486396] = 0x80000000;
  dword_140404A6C[282486400] = -1098907648;
  dword_140404A6C[282486401] = 0;
  dword_140404A6C[282486399] = 0x80000000;
  dword_140404A6C[282486406] = 1088421888;
  dword_140404A6C[282486420] = 14;
  dword_140404A6C[282486422] = -1098907648;
  dword_140404A6C[282486421] = 0x80000000;
  dword_140404A6C[282486425] = -1098907648;
  v0 = &dword_140404A6C[282486080];
  *(_OWORD *)&dword_140404A6C[282486152] = xmmword_1402792A0;
  v1 = 4;
  dword_140404A6C[282486426] = 0;
  *(_OWORD *)&dword_140404A6C[282486177] = xmmword_1402792A0;
  dword_140404A6C[282486424] = 0x80000000;
  *(_OWORD *)&dword_140404A6C[282486202] = xmmword_140279290;
  dword_140404A6C[282486431] = 1077936128;
  dword_140404A6C[282486222] = -1110441984;
  *(_OWORD *)&dword_140404A6C[282486146] = xmmword_1402798B0;
  dword_140404A6C[282486145] = 2;
  *(_OWORD *)&dword_140404A6C[282486171] = xmmword_140278DC0;
  *(_QWORD *)&dword_140404A6C[282486150] = 1031798784;
  *(_OWORD *)&dword_140404A6C[282486196] = xmmword_140278DB0;
  dword_140404A6C[282486156] = 1077936128;
  dword_140404A6C[282486160] = 1052770304;
  dword_140404A6C[282486247] = -1096286208;
  *(_OWORD *)&dword_140404A6C[282486277] = xmmword_140279290;
  dword_140404A6C[282486170] = 4;
  dword_140404A6C[282486272] = -1100480512;
  dword_140404A6C[282486175] = -1104674816;
  dword_140404A6C[282486176] = 0;
  dword_140404A6C[282486181] = 1075838976;
  dword_140404A6C[282486195] = 5;
  dword_140404A6C[282486200] = -1104674816;
  dword_140404A6C[282486201] = 0;
  dword_140404A6C[282486206] = 1069547520;
  dword_140404A6C[282486220] = 2;
  *(_OWORD *)&dword_140404A6C[282486227] = xmmword_1402792A0;
  dword_140404A6C[282486223] = 0;
  dword_140404A6C[282486221] = 1044381696;
  *(_QWORD *)&dword_140404A6C[282486225] = 1031798784;
  dword_140404A6C[282486224] = 1044381696;
  dword_140404A6C[282486231] = 1077936128;
  dword_140404A6C[282486245] = 7;
  *(_OWORD *)&dword_140404A6C[282486252] = xmmword_1402792A0;
  dword_140404A6C[282486248] = 0;
  dword_140404A6C[282486246] = 0x80000000;
  dword_140404A6C[282486250] = -1104674816;
  dword_140404A6C[282486251] = 0;
  dword_140404A6C[282486249] = 0x80000000;
  dword_140404A6C[282486256] = 1075838976;
  dword_140404A6C[282486270] = 8;
  dword_140404A6C[282486273] = 0;
  dword_140404A6C[282486271] = 0x80000000;
  dword_140404A6C[282486275] = -1104674816;
  dword_140404A6C[282486276] = 0;
  dword_140404A6C[282486274] = 0x80000000;
  dword_140404A6C[282486281] = 1069547520;
  do
    v0 += 200;
  while ( (__int64)v0 < (__int64)&dword_140404A6C[282486480] );
  result = &dword_140404A6C[282486077];
  do
  {
    v3 = *((float *)result - 25);
    v4 = (float)(*((float *)result - 23) + *((float *)result - 23)) + v3;
    v5 = (float)(*((float *)result - 24) + *((float *)result - 24)) + v3;
    v6 = (float)(*((float *)result - 22) + *((float *)result - 22)) + v3;
    v7 = v4 * v4;
    v8 = v6 * v6;
    *((float *)result - 20) = 9.0 / (float)(v7 + v8);
    *((float *)result - 19) = 9.0 / (float)((float)(v5 * v5) + v8);
    *((float *)result - 18) = 9.0 / (float)((float)(v5 * v5) + v7);
    *((_QWORD *)result - 8) = 0;
    *(_QWORD *)(result - 13) = 0;
    *(result - 14) = 0;
    *(_QWORD *)(result - 11) = 0;
    *(result - 9) = 0;
    *(result - 8) = 1040187392;
    v9 = (float)(*((float *)result + 2) + *((float *)result + 2)) + *(float *)result;
    v10 = (float)(*((float *)result + 1) + *((float *)result + 1)) + *(float *)result;
    v11 = (float)(*((float *)result + 3) + *((float *)result + 3)) + *(float *)result;
    v12 = v9 * v9;
    v13 = v11 * v11;
    *((float *)result + 5) = 9.0 / (float)(v12 + v13);
    *((float *)result + 6) = 9.0 / (float)((float)(v10 * v10) + v13);
    *((float *)result + 7) = 9.0 / (float)((float)(v10 * v10) + v12);
    *(_QWORD *)(result + 9) = 0;
    *((_QWORD *)result + 6) = 0;
    result[11] = 0;
    *((_QWORD *)result + 7) = 0;
    result[16] = 0;
    result[17] = 1040187392;
    v14 = *((float *)result + 25);
    v15 = (float)(*((float *)result + 27) + *((float *)result + 27)) + v14;
    v16 = (float)(*((float *)result + 28) + *((float *)result + 28)) + v14;
    v17 = (float)(*((float *)result + 26) + *((float *)result + 26)) + v14;
    v18 = v15 * v15;
    v19 = v16 * v16;
    *((float *)result + 30) = 9.0 / (float)(v18 + v19);
    *((float *)result + 31) = 9.0 / (float)((float)(v17 * v17) + v19);
    *((float *)result + 32) = 9.0 / (float)((float)(v17 * v17) + v18);
    *((_QWORD *)result + 17) = 0;
    *(_QWORD *)(result + 37) = 0;
    result[36] = 0;
    *(_QWORD *)(result + 39) = 0;
    result[41] = 0;
    result[42] = 1040187392;
    v20 = *((float *)result + 50);
    v21 = (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + v20)
        * (float)((float)(*((float *)result + 52) + *((float *)result + 52)) + v20);
    v22 = (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + v20)
        * (float)((float)(*((float *)result + 53) + *((float *)result + 53)) + v20);
    v23 = (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + v20)
        * (float)((float)(*((float *)result + 51) + *((float *)result + 51)) + v20);
    *((float *)result + 55) = 9.0 / (float)(v21 + v22);
    *((float *)result + 56) = 9.0 / (float)(v23 + v22);
    *((float *)result + 57) = 9.0 / (float)(v23 + v21);
    *(_QWORD *)(result + 59) = 0;
    *((_QWORD *)result + 31) = 0;
    result[61] = 0;
    *((_QWORD *)result + 32) = 0;
    result[66] = 0;
    result[67] = 1040187392;
    result += 100;
    --v1;
  }
  while ( v1 );
  dword_140404A6C[282486144] = 1038090240;
  dword_140404A6C[282486138] = -1089025052;
  dword_140404A6C[282486141] = 1058458596;
  dword_140404A6C[282486067] = 0;
  dword_140404A6C[282486068] = 1044381696;
  dword_140404A6C[282486069] = 1040187392;
  dword_140404A6C[282486092] = 0;
  dword_140404A6C[282486093] = 1040187392;
  dword_140404A6C[282486094] = 1040187392;
  dword_140404A6C[282486117] = 0;
  dword_140404A6C[282486118] = 1040187392;
  dword_140404A6C[282486119] = 1040187392;
  dword_140404A6C[282486142] = 1;
  dword_140404A6C[282486143] = 1031798784;
  dword_140404A6C[282486317] = 1;
  dword_140404A6C[282486318] = 1052770304;
  dword_140404A6C[282486319] = 1035993088;
  dword_140404A6C[282486342] = 1;
  dword_140404A6C[282486343] = 1049624576;
  dword_140404A6C[282486344] = 1031798784;
  dword_140404A6C[282486367] = 2;
  dword_140404A6C[282486368] = 1040187392;
  dword_140404A6C[282486369] = 1031798784;
  dword_140404A6C[282486392] = 1;
  dword_140404A6C[282486393] = 1052770304;
  dword_140404A6C[282486394] = 1035993088;
  dword_140404A6C[282486417] = 1;
  dword_140404A6C[282486418] = 1049624576;
  dword_140404A6C[282486419] = 1031798784;
  dword_140404A6C[282486442] = 2;
  dword_140404A6C[282486443] = 1040187392;
  dword_140404A6C[282486444] = 1031798784;
  dword_140404A6C[282486167] = 1;
  dword_140404A6C[282486168] = 1048576000;
  dword_140404A6C[282486169] = 1031798784;
  dword_140404A6C[282486192] = 1;
  dword_140404A6C[282486193] = 1048576000;
  dword_140404A6C[282486194] = 1031798784;
  dword_140404A6C[282486217] = 1;
  dword_140404A6C[282486218] = 1031798784;
  dword_140404A6C[282486219] = 1031798784;
  dword_140404A6C[282486242] = 1;
  dword_140404A6C[282486243] = 1048576000;
  dword_140404A6C[282486244] = 1031798784;
  dword_140404A6C[282486267] = 1;
  dword_140404A6C[282486268] = 1048576000;
  dword_140404A6C[282486269] = 1031798784;
  dword_140404A6C[282486292] = 1;
  dword_140404A6C[282486293] = 1031798784;
  dword_140404A6C[282486294] = 1031798784;
  dword_140404A6C[282486086] = -1085730853;
  dword_140404A6C[282486089] = 1053364187;
  dword_140404A6C[282486087] = -1085730853;
  dword_140404A6C[282486090] = 1061752795;
  dword_140404A6C[282486088] = -1094119461;
  dword_140404A6C[282486091] = 1053364187;
  dword_140404A6C[282486111] = -1085730853;
  dword_140404A6C[282486114] = 1053364187;
  dword_140404A6C[282486112] = -1085730853;
  dword_140404A6C[282486115] = 1061752795;
  dword_140404A6C[282486113] = -1094119461;
  dword_140404A6C[282486116] = 1053364187;
  dword_140404A6C[282486136] = -1085730853;
  dword_140404A6C[282486139] = 1061752795;
  dword_140404A6C[282486137] = -1080636444;
  dword_140404A6C[282486140] = 1066847204;
  dword_140404A6C[282486311] = -1078989345;
  dword_140404A6C[282486314] = 1070141403;
  dword_140404A6C[282486312] = -1094119461;
  dword_140404A6C[282486315] = 1053364187;
  dword_140404A6C[282486313] = -1094119461;
  dword_140404A6C[282486316] = 1053364187;
  dword_140404A6C[282486336] = -1070600737;
  *(_QWORD *)&dword_140404A6C[282486339] = 0;
  *(_QWORD *)&dword_140404A6C[282486337] = 0;
  dword_140404A6C[282486341] = 0;
  dword_140404A6C[282486361] = -1085730853;
  dword_140404A6C[282486364] = 1061752795;
  dword_140404A6C[282486362] = -1085730853;
  dword_140404A6C[282486365] = 1061752795;
  dword_140404A6C[282486363] = -1094119461;
  dword_140404A6C[282486366] = 1053364187;
  dword_140404A6C[282486386] = -1078989345;
  dword_140404A6C[282486389] = 1070141403;
  dword_140404A6C[282486387] = -1094119461;
  dword_140404A6C[282486390] = 1053364187;
  dword_140404A6C[282486388] = -1094119461;
  dword_140404A6C[282486391] = 1053364187;
  dword_140404A6C[282486411] = -1070600737;
  *(_QWORD *)&dword_140404A6C[282486414] = 0;
  *(_QWORD *)&dword_140404A6C[282486412] = 0;
  dword_140404A6C[282486416] = 0;
  dword_140404A6C[282486436] = -1085730853;
  dword_140404A6C[282486439] = 1061752795;
  dword_140404A6C[282486437] = -1085730853;
  dword_140404A6C[282486440] = 1061752795;
  dword_140404A6C[282486438] = -1094119461;
  dword_140404A6C[282486441] = 1053364187;
  dword_140404A6C[282486161] = -1077342245;
  dword_140404A6C[282486164] = 1070141403;
  dword_140404A6C[282486162] = -1080636444;
  dword_140404A6C[282486165] = 1066847204;
  dword_140404A6C[282486163] = -1077342245;
  dword_140404A6C[282486166] = 1070141403;
  *(_QWORD *)&dword_140404A6C[282486186] = 0;
  *(_QWORD *)&dword_140404A6C[282486189] = 1070141403;
  dword_140404A6C[282486188] = 0;
  dword_140404A6C[282486191] = 0;
  dword_140404A6C[282486211] = -1077342245;
  dword_140404A6C[282486214] = 1070141403;
  dword_140404A6C[282486212] = -1085730853;
  dword_140404A6C[282486215] = 1061752795;
  dword_140404A6C[282486213] = -1074048047;
  dword_140404A6C[282486216] = 1073435601;
  dword_140404A6C[282486236] = -1077342245;
  dword_140404A6C[282486239] = 1070141403;
  dword_140404A6C[282486237] = -1080636444;
  dword_140404A6C[282486240] = 1066847204;
  dword_140404A6C[282486238] = -1077342245;
  dword_140404A6C[282486241] = 1070141403;
  *(_QWORD *)&dword_140404A6C[282486261] = 0;
  *(_QWORD *)&dword_140404A6C[282486264] = 1070141403;
  dword_140404A6C[282486263] = 0;
  dword_140404A6C[282486266] = 0;
  dword_140404A6C[282486286] = -1077342245;
  dword_140404A6C[282486289] = 1070141403;
  dword_140404A6C[282486287] = -1085730853;
  dword_140404A6C[282486290] = 1061752795;
  dword_140404A6C[282486288] = -1074048047;
  dword_140404A6C[282486291] = 1073435601;
  return result;
}

// 140278D50: using guessed type __int128 xmmword_140278D50;
// 140278D60: using guessed type __int128 xmmword_140278D60;
// 140278DB0: using guessed type __int128 xmmword_140278DB0;
// 140278DC0: using guessed type __int128 xmmword_140278DC0;
// 140278DD0: using guessed type __int128 xmmword_140278DD0;
// 140278EA0: using guessed type __int128 xmmword_140278EA0;
// 140279290: using guessed type __int128 xmmword_140279290;
// 1402792A0: using guessed type __int128 xmmword_1402792A0;
// 1402792B0: using guessed type __int128 xmmword_1402792B0;
// 1402792C0: using guessed type __int128 xmmword_1402792C0;
// 1402792D0: using guessed type __int128 xmmword_1402792D0;
// 1402792E0: using guessed type __int128 xmmword_1402792E0;
// 1402798A0: using guessed type __int128 xmmword_1402798A0;
// 1402798B0: using guessed type __int128 xmmword_1402798B0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399DEE0: using guessed type int[];
// 18399DEF4: using guessed type unsigned int;
// 18399DEF8: using guessed type unsigned int;
// 18399DEFC: using guessed type unsigned int;
// 18399DF0C: using guessed type unsigned int;
// 18399DF38: using guessed type unsigned int;
// 18399DF3C: using guessed type unsigned int;
// 18399DF40: using guessed type unsigned int;
// 18399DF44: using guessed type unsigned int;
// 18399DF48: using guessed type unsigned int;
// 18399DF58: using guessed type unsigned int;
// 18399DF60: using guessed type unsigned int;
// 18399DF70: using guessed type unsigned int;
// 18399DF84: using guessed type unsigned int;
// 18399DF88: using guessed type unsigned int;
// 18399DF8C: using guessed type unsigned int;
// 18399DF90: using guessed type unsigned int;
// 18399DF94: using guessed type unsigned int;
// 18399DF98: using guessed type unsigned int;
// 18399DF9C: using guessed type unsigned int;
// 18399DFA0: using guessed type unsigned int;
// 18399DFA4: using guessed type unsigned int;
// 18399DFA8: using guessed type unsigned int;
// 18399DFAC: using guessed type unsigned int;
// 18399DFBC: using guessed type unsigned int;
// 18399DFC4: using guessed type unsigned int;
// 18399DFD4: using guessed type unsigned int;
// 18399DFE8: using guessed type unsigned int;
// 18399DFEC: using guessed type unsigned int;
// 18399DFF0: using guessed type unsigned int;
// 18399DFF4: using guessed type unsigned int;
// 18399DFF8: using guessed type unsigned int;
// 18399DFFC: using guessed type unsigned int;
// 18399E000: using guessed type unsigned int;
// 18399E004: using guessed type unsigned int;
// 18399E008: using guessed type unsigned int;
// 18399E00C: using guessed type unsigned int;
// 18399E010: using guessed type unsigned int;
// 18399E020: using guessed type unsigned int;
// 18399E028: using guessed type unsigned int;
// 18399E038: using guessed type unsigned int;
// 18399E04C: using guessed type unsigned int;
// 18399E050: using guessed type unsigned int;
// 18399E054: using guessed type unsigned int;
// 18399E058: using guessed type unsigned int;
// 18399E05C: using guessed type unsigned int;
// 18399E060: using guessed type unsigned int;
// 18399E064: using guessed type unsigned int;
// 18399E068: using guessed type unsigned int;
// 18399E06C: using guessed type unsigned int;
// 18399E070: using guessed type unsigned int;
// 18399E074: using guessed type unsigned int;
// 18399E084: using guessed type unsigned int;
// 18399E08C: using guessed type unsigned int;
// 18399E09C: using guessed type unsigned int;
// 18399E0AC: using guessed type unsigned int;
// 18399E0B0: using guessed type unsigned int;
// 18399E0B4: using guessed type unsigned int;
// 18399E0B8: using guessed type unsigned int;
// 18399E0BC: using guessed type unsigned int;
// 18399E0C0: using guessed type unsigned int;
// 18399E0C4: using guessed type unsigned int;
// 18399E0C8: using guessed type unsigned int;
// 18399E0CC: using guessed type unsigned int;
// 18399E0D0: using guessed type unsigned int;
// 18399E0D4: using guessed type unsigned int;
// 18399E0D8: using guessed type unsigned int;
// 18399E0E8: using guessed type unsigned int;
// 18399E0EC: using guessed type unsigned int;
// 18399E0F0: using guessed type unsigned int;
// 18399E100: using guessed type unsigned int;
// 18399E114: using guessed type unsigned int;
// 18399E11C: using guessed type unsigned int;
// 18399E120: using guessed type unsigned int;
// 18399E128: using guessed type unsigned int;
// 18399E12C: using guessed type unsigned int;
// 18399E130: using guessed type unsigned int;
// 18399E134: using guessed type unsigned int;
// 18399E138: using guessed type unsigned int;
// 18399E13C: using guessed type unsigned int;
// 18399E14C: using guessed type unsigned int;
// 18399E150: using guessed type unsigned int;
// 18399E154: using guessed type unsigned int;
// 18399E164: using guessed type unsigned int;
// 18399E178: using guessed type unsigned int;
// 18399E17C: using guessed type unsigned int;
// 18399E180: using guessed type unsigned int;
// 18399E184: using guessed type unsigned int;
// 18399E188: using guessed type unsigned int;
// 18399E18C: using guessed type unsigned int;
// 18399E190: using guessed type unsigned int;
// 18399E194: using guessed type unsigned int;
// 18399E198: using guessed type unsigned int;
// 18399E19C: using guessed type unsigned int;
// 18399E1A0: using guessed type unsigned int;
// 18399E1A4: using guessed type unsigned int;
// 18399E1A8: using guessed type unsigned int;
// 18399E1AC: using guessed type unsigned int;
// 18399E1B0: using guessed type unsigned int;
// 18399E1B8: using guessed type unsigned int;
// 18399E1C8: using guessed type unsigned int;
// 18399E1DC: using guessed type unsigned int;
// 18399E1E0: using guessed type unsigned int;
// 18399E1E4: using guessed type unsigned int;
// 18399E1E8: using guessed type unsigned int;
// 18399E1EC: using guessed type unsigned int;
// 18399E1F0: using guessed type unsigned int;
// 18399E1F4: using guessed type unsigned int;
// 18399E1F8: using guessed type unsigned int;
// 18399E1FC: using guessed type unsigned int;
// 18399E200: using guessed type unsigned int;
// 18399E204: using guessed type unsigned int;
// 18399E208: using guessed type unsigned int;
// 18399E20C: using guessed type unsigned int;
// 18399E210: using guessed type unsigned int;
// 18399E214: using guessed type unsigned int;
// 18399E218: using guessed type unsigned int;
// 18399E21C: using guessed type unsigned int;
// 18399E22C: using guessed type unsigned int;
// 18399E240: using guessed type unsigned int;
// 18399E248: using guessed type unsigned int;
// 18399E24C: using guessed type unsigned int;
// 18399E254: using guessed type unsigned int;
// 18399E258: using guessed type unsigned int;
// 18399E25C: using guessed type unsigned int;
// 18399E260: using guessed type unsigned int;
// 18399E264: using guessed type unsigned int;
// 18399E268: using guessed type unsigned int;
// 18399E26C: using guessed type unsigned int;
// 18399E270: using guessed type unsigned int;
// 18399E274: using guessed type unsigned int;
// 18399E278: using guessed type unsigned int;
// 18399E27C: using guessed type unsigned int;
// 18399E280: using guessed type unsigned int;
// 18399E290: using guessed type unsigned int;
// 18399E2A4: using guessed type unsigned int;
// 18399E2A8: using guessed type unsigned int;
// 18399E2AC: using guessed type unsigned int;
// 18399E2B0: using guessed type unsigned int;
// 18399E2B4: using guessed type unsigned int;
// 18399E2B8: using guessed type unsigned int;
// 18399E2BC: using guessed type unsigned int;
// 18399E2C0: using guessed type unsigned int;
// 18399E2C4: using guessed type unsigned int;
// 18399E2C8: using guessed type unsigned int;
// 18399E2CC: using guessed type unsigned int;
// 18399E2DC: using guessed type unsigned int;
// 18399E2E4: using guessed type unsigned int;
// 18399E2F4: using guessed type unsigned int;
// 18399E308: using guessed type unsigned int;
// 18399E30C: using guessed type unsigned int;
// 18399E310: using guessed type unsigned int;
// 18399E314: using guessed type unsigned int;
// 18399E318: using guessed type unsigned int;
// 18399E31C: using guessed type unsigned int;
// 18399E320: using guessed type unsigned int;
// 18399E324: using guessed type unsigned int;
// 18399E328: using guessed type unsigned int;
// 18399E32C: using guessed type unsigned int;
// 18399E330: using guessed type unsigned int;
// 18399E340: using guessed type unsigned int;
// 18399E344: using guessed type unsigned int;
// 18399E348: using guessed type unsigned int;
// 18399E358: using guessed type unsigned int;
// 18399E36C: using guessed type unsigned int;
// 18399E370: using guessed type unsigned int;
// 18399E378: using guessed type unsigned int;
// 18399E380: using guessed type unsigned int;
// 18399E384: using guessed type unsigned int;
// 18399E388: using guessed type unsigned int;
// 18399E38C: using guessed type unsigned int;
// 18399E390: using guessed type unsigned int;
// 18399E394: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E3A8: using guessed type unsigned int;
// 18399E3AC: using guessed type unsigned int;
// 18399E3BC: using guessed type unsigned int;
// 18399E3D0: using guessed type unsigned int;
// 18399E3D4: using guessed type unsigned int;
// 18399E3D8: using guessed type unsigned int;
// 18399E3DC: using guessed type unsigned int;
// 18399E3E0: using guessed type unsigned int;
// 18399E3E4: using guessed type unsigned int;
// 18399E3E8: using guessed type unsigned int;
// 18399E3EC: using guessed type unsigned int;
// 18399E3F0: using guessed type unsigned int;
// 18399E3F4: using guessed type unsigned int;
// 18399E3F8: using guessed type unsigned int;
// 18399E3FC: using guessed type unsigned int;
// 18399E400: using guessed type unsigned int;
// 18399E404: using guessed type unsigned int;
// 18399E408: using guessed type unsigned int;
// 18399E410: using guessed type unsigned int;
// 18399E420: using guessed type unsigned int;
// 18399E434: using guessed type unsigned int;
// 18399E438: using guessed type unsigned int;
// 18399E43C: using guessed type unsigned int;
// 18399E440: using guessed type unsigned int;
// 18399E444: using guessed type unsigned int;
// 18399E448: using guessed type unsigned int;
// 18399E44C: using guessed type unsigned int;
// 18399E450: using guessed type unsigned int;
// 18399E454: using guessed type unsigned int;
// 18399E458: using guessed type unsigned int;
// 18399E45C: using guessed type unsigned int;
// 18399E460: using guessed type unsigned int;
// 18399E464: using guessed type unsigned int;
// 18399E468: using guessed type unsigned int;
// 18399E46C: using guessed type unsigned int;
// 18399E470: using guessed type unsigned int;
// 18399E474: using guessed type unsigned int;
// 18399E484: using guessed type unsigned int;
// 18399E498: using guessed type unsigned int;
// 18399E49C: using guessed type unsigned int;
// 18399E4A4: using guessed type unsigned int;
// 18399E4AC: using guessed type unsigned int;
// 18399E4B0: using guessed type unsigned int;
// 18399E4B4: using guessed type unsigned int;
// 18399E4B8: using guessed type unsigned int;
// 18399E4BC: using guessed type unsigned int;
// 18399E4C0: using guessed type unsigned int;
// 18399E4C4: using guessed type unsigned int;
// 18399E4C8: using guessed type unsigned int;
// 18399E4CC: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;
// 18399E4D4: using guessed type unsigned int;
// 18399E4D8: using guessed type unsigned int;
// 18399E4E8: using guessed type unsigned int;
// 18399E4FC: using guessed type unsigned int;
// 18399E500: using guessed type unsigned int;
// 18399E504: using guessed type unsigned int;
// 18399E508: using guessed type unsigned int;
// 18399E50C: using guessed type unsigned int;
// 18399E510: using guessed type unsigned int;
// 18399E514: using guessed type unsigned int;
// 18399E518: using guessed type unsigned int;
// 18399E51C: using guessed type unsigned int;

//----- (000000014018D9F0) ----------------------------------------------------
__int64            sub_14018D9F0(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 7166LL * a1;
  sub_140115AE0(&v4, 8);
  v2 = v4;
  if ( v4 == 255 )
    v2 = -1;
  dword_140404A6C[v1 + 280651305] = v2;
  sub_140115AE0(&dword_140404A6C[v1 + 280658439], 1);
  sub_140115AE0(&dword_140404A6C[v1 + 280658440], 5);
  sub_140115AE0(&dword_140404A6C[v1 + 280658441], 3);
  sub_140115AE0(&dword_140404A6C[v1 + 280658443], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658444], 3);
  sub_140115AE0(&dword_140404A6C[v1 + 280658442], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658445], 5);
  sub_140115AE0(&dword_140404A6C[v1 + 280658446], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658447], 4);
  sub_140115AE0(&dword_140404A6C[v1 + 280658449], 4);
  return sub_140115AE0(&dword_140404A6C[v1 + 280658450], 2);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];


//----- (000000014007F590) ----------------------------------------------------
unsigned int *           sub_14007F590(signed int a1)
{
  unsigned int *result; // rax
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  unsigned int *v14; // rdx
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
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007F590[16];
#define retaddr (*(_UNKNOWN * (*))(void *)(sr_frame_14007F590 + 0)) /* [rsp+48h] */

  result = (unsigned int *)&retaddr;
  v2 = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    v3 = 7166LL * a1;
    v4 = (int)dword_140404A6C[v3 + 280651305];
    if ( (_DWORD)v4 != -1 && dword_140404A6C[3597 * v4 + 71856292] == a1 )
      dword_140404A6C[3597 * v4 + 71856292] = -1;
    v5 = 0;
    v6 = 0;
    v7 = (int *)&dword_140404A6C[v3 + 280658139];
    do
    {
      while ( *v7 > 0 )
        sub_1400CA7C0(dword_140404A6C[7166 * v2 + 280658139 + v6 + *v7], v2, v5);
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < 8 );
    v8 = dword_140404A6C[7166 * v2 + 280654224];
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = &dword_140404A6C[v3 + 280654225];
      do
      {
        v11 = (int)*v10;
        v10 += 3;
        dword_140404A6C[61 * v11 + 486149253] = 0;
        --v9;
      }
      while ( v9 );
    }
    v12 = dword_140404A6C[7166 * v2 + 280652687];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v3 + 280652688];
      do
      {
        v15 = (int)*v14;
        v14 += 12;
        dword_140404A6C[61 * v15 + 486149253] = 0;
        --v13;
      }
      while ( v13 );
    }
    v16 = (int)dword_140404A6C[7166 * v2 + 280651439];
    if ( (unsigned int)v16 < 0x2000 )
      dword_140404A6C[47 * v16 + 18215709] = 0;
    v17 = (int)dword_140404A6C[7166 * v2 + 280651517];
    if ( (unsigned int)v17 < 0x2000 )
      dword_140404A6C[47 * v17 + 18215709] = 0;
    v18 = (int)dword_140404A6C[7166 * v2 + 280651595];
    if ( (unsigned int)v18 < 0x2000 )
      dword_140404A6C[47 * v18 + 18215709] = 0;
    v19 = (int)dword_140404A6C[7166 * v2 + 280651673];
    if ( (unsigned int)v19 < 0x2000 )
      dword_140404A6C[47 * v19 + 18215709] = 0;
    v20 = (int)dword_140404A6C[7166 * v2 + 280651751];
    if ( (unsigned int)v20 < 0x2000 )
      dword_140404A6C[47 * v20 + 18215709] = 0;
    v21 = (int)dword_140404A6C[7166 * v2 + 280651829];
    if ( (unsigned int)v21 < 0x2000 )
      dword_140404A6C[47 * v21 + 18215709] = 0;
    v22 = (int)dword_140404A6C[7166 * v2 + 280651907];
    if ( (unsigned int)v22 < 0x2000 )
      dword_140404A6C[47 * v22 + 18215709] = 0;
    v23 = (int)dword_140404A6C[7166 * v2 + 280651985];
    if ( (unsigned int)v23 < 0x2000 )
      dword_140404A6C[47 * v23 + 18215709] = 0;
    v24 = (int)dword_140404A6C[7166 * v2 + 280652063];
    if ( (unsigned int)v24 < 0x2000 )
      dword_140404A6C[47 * v24 + 18215709] = 0;
    v25 = (int)dword_140404A6C[7166 * v2 + 280652141];
    if ( (unsigned int)v25 < 0x2000 )
      dword_140404A6C[47 * v25 + 18215709] = 0;
    v26 = (int)dword_140404A6C[7166 * v2 + 280652219];
    if ( (unsigned int)v26 < 0x2000 )
      dword_140404A6C[47 * v26 + 18215709] = 0;
    v27 = (int)dword_140404A6C[7166 * v2 + 280652297];
    if ( (unsigned int)v27 < 0x2000 )
      dword_140404A6C[47 * v27 + 18215709] = 0;
    v28 = (int)dword_140404A6C[7166 * v2 + 280652375];
    if ( (unsigned int)v28 < 0x2000 )
      dword_140404A6C[47 * v28 + 18215709] = 0;
    v29 = (int)dword_140404A6C[7166 * v2 + 280652453];
    if ( (unsigned int)v29 < 0x2000 )
      dword_140404A6C[47 * v29 + 18215709] = 0;
    v30 = (int)dword_140404A6C[7166 * v2 + 280652531];
    if ( (unsigned int)v30 < 0x2000 )
      dword_140404A6C[47 * v30 + 18215709] = 0;
    result = (unsigned int *)(int)dword_140404A6C[7166 * v2 + 280652609];
    if ( (unsigned int)result < 0x2000 )
      dword_140404A6C[47 * (_QWORD)result + 18215709] = 0;
    v31 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      result = &dword_140404A6C[132400638];
      do
      {
        if ( *result == (_DWORD)v2 )
          *result = -1;
        result += 383;
        --v31;
      }
      while ( v31 );
    }
    v32 = dword_140404A6C[456202453] == 0;
    dword_140404A6C[7166 * v2 + 280651303] = 0;
    if ( !v32 )
      ++dword_140404A6C[v2 + 282485789];
  }
  return result;
}
#undef retaddr

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A56B0) ----------------------------------------------------
__int64            sub_1400A56B0(float *a1, float a2, float a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_random_direction(float *, float, float);
  human_random_direction(a1, a2, a3);
  return 0;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12C0: using guessed type unsigned int;

//----- (00000001400A9940) ----------------------------------------------------
__int64            sub_1400A9940(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_turn(int, int, int, float *);
  human_limit_joint_turn(a1, a2, a3, a4);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A9EF0) ----------------------------------------------------
__int64            sub_1400A9EF0(int a1, int a2, int a3, float *a4)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_angles(int, int, int, float *);
  human_limit_joint_angles(a1, a2, a3, a4);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AA510) ----------------------------------------------------
__int64            sub_1400AA510(int a1, int a2)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_keep_arms_off_item(int, int);
  human_keep_arms_off_item(a1, a2);
  return 0;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400AC530) ----------------------------------------------------
__int64            sub_1400AC530(float *a1, int a2, int a3)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_item_28_hand_target(float *, int, int);
  human_item_28_hand_target(a1, a2, a3);
  return 0;
}
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B29B0) ----------------------------------------------------
__int64            sub_1400B29B0(__int64 a1, int a2, int a3, int a4, int a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_aim_hand_target(float *, int, int, int, const float *);
  (void)a5;
  human_aim_hand_target((float *)a1, a2, a3, a4, a6);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399E1AC: using guessed type unsigned int;
// 18399E1B0: using guessed type unsigned int;

//----- (00000001400B2BF0) ----------------------------------------------------
__int64            sub_1400B2BF0(int a1, int a2, int a3, float *a4, float a5, float a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_limit_joint_change(int, int, int, float *, float, float);
  human_limit_joint_change(a1, a2, a3, a4, a5, a6);
  return a2;
}
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B3A80) ----------------------------------------------------
__int64            sub_1400B3A80(unsigned int a1, int a2)
{
  /* Clean implementation: src/engine/human_hits.c, checked against the original executable
     (tools/native-compare suite hits). */
  extern void human_collide_vehicle(int human, int vehicle);
  human_collide_vehicle((int)a1, a2);
  return a1; /* as the original leaves it; discarded by its caller */
}

//----- (00000001400B4DA0) ----------------------------------------------------
__int64            sub_1400B4DA0(int a1, int a2, int a3, unsigned int *a4, unsigned int *a5, float *a6)
{
  /* Clean implementation: src/engine/human_ragdoll.c, checked against the original executable
     (tools/native-compare suite ragdoll). */
  extern void human_hold_item(int, int, int, const float *, const float *, const float *);
  human_hold_item(a1, a2, a3, (const float *)a4, (const float *)a5, a6);
  return 0;
}
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B5410) ----------------------------------------------------
__int64            sub_1400B5410(int a1, signed int a2, signed int a3, float *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = a3;
  v5 = a1;
  result = sub_140055FA0(a1, a2, a3, a4);
  if ( (_DWORD)result != -1 )
    dword_140404A6C[7166 * v5 + 280651511 + 78 * v4] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400B95E0) ----------------------------------------------------
void sub_1400B95E0()
{
  extern void world_update_human_bounds(void);
  /* src/engine/world_blocks.c */
  world_update_human_bounds();
}
