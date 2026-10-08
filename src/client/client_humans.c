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
  __int64 v1; // r12
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // r15
  unsigned int *v6; // rbx
  __int64 v7; // rsi
  signed int i; // edi
  unsigned int v9; // xmm1_4
  unsigned int v10; // eax
  unsigned int v11; // xmm1_4
  unsigned int v12; // eax
  unsigned int v13; // xmm1_4
  unsigned int v14; // eax
  signed int v15; // edi
  unsigned int *v16; // rbx
  unsigned int v17; // xmm1_4
  unsigned int v18; // eax
  unsigned int v19; // xmm1_4
  unsigned int v20; // eax
  unsigned int v21; // xmm1_4
  __int64 result; // rax
  unsigned sr_skeleton_anchor[3];

  sr_skeleton_anchor[0] = dword_140404A6C[282486074];
  v1 = a1;
  sr_skeleton_anchor[1] = dword_140404A6C[282486075];
  sr_skeleton_anchor[2] = dword_140404A6C[282486076];
  v2 = sub_140055FA0(a1, 0, 1, (float *)&sr_skeleton_anchor[0]);
  if ( v2 != -1 )
    dword_140404A6C[7166 * v1 + 280651589] = v2;
  sr_skeleton_anchor[0] = dword_140404A6C[282486099];
  sr_skeleton_anchor[1] = dword_140404A6C[282486100];
  sr_skeleton_anchor[2] = dword_140404A6C[282486101];
  v3 = sub_140055FA0(v1, 1, 2, (float *)&sr_skeleton_anchor[0]);
  if ( v3 != -1 )
    dword_140404A6C[7166 * v1 + 280651667] = v3;
  sr_skeleton_anchor[0] = dword_140404A6C[282486124];
  sr_skeleton_anchor[1] = dword_140404A6C[282486125];
  sr_skeleton_anchor[2] = dword_140404A6C[282486126];
  v4 = sub_140055FA0(v1, 2, 3, (float *)&sr_skeleton_anchor[0]);
  if ( v4 != -1 )
    dword_140404A6C[7166 * v1 + 280651745] = v4;
  v5 = 0;
  v6 = &dword_140404A6C[282486351];
  v7 = 0;
  for ( i = 10; i < 16; i += 3 )
  {
    v9 = *(v6 - 51);
    sr_skeleton_anchor[0] = *(v6 - 52);
    sr_skeleton_anchor[2] = *(v6 - 50);
    sr_skeleton_anchor[1] = v9;
    v10 = sub_140055FA0(v1, 0, i, (float *)&sr_skeleton_anchor[0]);
    if ( v10 != -1 )
      dword_140404A6C[7166 * v1 + 280652291 + v7] = v10;
    v11 = *(v6 - 26);
    sr_skeleton_anchor[0] = *(v6 - 27);
    sr_skeleton_anchor[2] = *(v6 - 25);
    sr_skeleton_anchor[1] = v11;
    v12 = sub_140055FA0(v1, i, i + 1, (float *)&sr_skeleton_anchor[0]);
    if ( v12 != -1 )
      dword_140404A6C[7166 * v1 + 280652369 + v7] = v12;
    v13 = *(v6 - 1);
    sr_skeleton_anchor[0] = *(v6 - 2);
    sr_skeleton_anchor[2] = *v6;
    sr_skeleton_anchor[1] = v13;
    v14 = sub_140055FA0(v1, i + 1, i + 2, (float *)&sr_skeleton_anchor[0]);
    if ( v14 != -1 )
      dword_140404A6C[7166 * v1 + 280652447 + v7] = v14;
    v6 += 75;
    v7 += 234;
  }
  v15 = 4;
  v16 = &dword_140404A6C[282486201];
  do
  {
    v17 = *(v16 - 51);
    sr_skeleton_anchor[0] = *(v16 - 52);
    sr_skeleton_anchor[2] = *(v16 - 50);
    sr_skeleton_anchor[1] = v17;
    v18 = sub_140055FA0(v1, 2, v15, (float *)&sr_skeleton_anchor[0]);
    if ( v18 != -1 )
      dword_140404A6C[7166 * v1 + 280651823 + v5] = v18;
    v19 = *(v16 - 26);
    sr_skeleton_anchor[0] = *(v16 - 27);
    sr_skeleton_anchor[2] = *(v16 - 25);
    sr_skeleton_anchor[1] = v19;
    v20 = sub_140055FA0(v1, v15, v15 + 1, (float *)&sr_skeleton_anchor[0]);
    if ( v20 != -1 )
      dword_140404A6C[7166 * v1 + 280651901 + v5] = v20;
    v21 = *(v16 - 1);
    sr_skeleton_anchor[0] = *(v16 - 2);
    sr_skeleton_anchor[2] = *v16;
    sr_skeleton_anchor[1] = v21;
    result = sub_140055FA0(v1, v15 + 1, v15 + 2, (float *)&sr_skeleton_anchor[0]);
    if ( (_DWORD)result != -1 )
      dword_140404A6C[7166 * v1 + 280651979 + v5] = result;
    v15 += 3;
    v16 += 75;
    v5 += 234;
  }
  while ( v15 < 10 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18399DF54: using guessed type unsigned int;
// 18399DF58: using guessed type unsigned int;
// 18399DF5C: using guessed type unsigned int;
// 18399DFB8: using guessed type unsigned int;
// 18399DFBC: using guessed type unsigned int;
// 18399DFC0: using guessed type unsigned int;
// 18399E01C: using guessed type unsigned int;
// 18399E020: using guessed type unsigned int;
// 18399E024: using guessed type unsigned int;

//----- (00000001400ABB10) ----------------------------------------------------
_UNKNOWN **           sub_1400ABB10(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rbx
  float v4; // xmm1_4
  unsigned int v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm10_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm3_4
  unsigned int v25; // xmm7_4
  float v26; // xmm12_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm12_4
  float v31; // xmm10_4
  float v32; // xmm4_4
  float *v33; // rax
  __int64 v34; // rcx
  float v35; // xmm10_4
  float v36; // xmm1_4
  float v37; // xmm6_4
  float v38; // xmm15_4
  float v39; // xmm2_4
  float v40; // xmm13_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm11_4
  float v44; // xmm8_4
  float v45; // xmm0_4
  float v46; // xmm14_4
  float v47; // xmm8_4
  float v48; // xmm5_4
  float v49; // xmm10_4
  float v50; // xmm0_4
  float v51; // xmm5_4
  float v52; // xmm10_4
  float v53; // xmm12_4
  float v54; // xmm7_4
  float v55; // xmm12_4
  float v56; // xmm0_4
  float v57; // xmm9_4
  float v58; // xmm6_4
  float v59; // xmm15_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm0_4
  float v63; // xmm3_4
  float v64; // xmm3_4
  unsigned int *v65; // rdx
  float v66; // xmm5_4
  float v67; // xmm4_4
  float v68; // xmm6_4
  __m128 v69; // xmm3
  float v70; // xmm4_4
  float v71; // xmm6_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  double v74; // xmm2_8
  __m128d v75; // xmm3
  double v76; // xmm3_8
  float sr_human_mean_basis[9];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400ABB10[80];
#define v78 (*(float (*))(void *)(sr_frame_1400ABB10 + 8)) /* [rsp+20h] */
#define v79 (*(__m128 (*))(void *)(sr_frame_1400ABB10 + 16)) /* [rsp+28h] */
#define v89 (*(float (*))(void *)(sr_frame_1400ABB10 + 76)) /* [rsp+64h] */

  v1 = 0;
  v2 = a1;
  v3 = 7166LL * a1;
  *(_QWORD *)&dword_140404A6C[v3 + 280657914] = 0;
  dword_140404A6C[v3 + 280657916] = 0;
  v4 = *(float *)&dword_140404A6C[v3 + 280651472];
  *(float *)&v5 = v4 * *(float *)&dword_140404A6C[v3 + 280651440];
  dword_140404A6C[v3 + 280657914] = v5;
  *(float *)&dword_140404A6C[v3 + 280657915] = v4 * *(float *)&dword_140404A6C[v3 + 280651441];
  *(float *)&dword_140404A6C[v3 + 280657916] = v4 * *(float *)&dword_140404A6C[v3 + 280651442];
  v6 = *(float *)&dword_140404A6C[v3 + 280651550];
  v7 = *(float *)&dword_140404A6C[v3 + 280651472];
  *(float *)&v8 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651518]) + *(float *)&v5;
  dword_140404A6C[v3 + 280657914] = v8;
  *(float *)&v9 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651519]) + *(float *)&dword_140404A6C[v3 + 280657915];
  dword_140404A6C[v3 + 280657915] = v9;
  *(float *)&v10 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651520]) + *(float *)&dword_140404A6C[v3 + 280657916];
  dword_140404A6C[v3 + 280657916] = v10;
  v11 = *(float *)&dword_140404A6C[v3 + 280651628];
  v12 = v7 + *(float *)&dword_140404A6C[v3 + 280651550];
  v13 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651596]) + *(float *)&v8;
  *(float *)&dword_140404A6C[v3 + 280657914] = v13;
  v14 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651597]) + *(float *)&v9;
  *(float *)&dword_140404A6C[v3 + 280657915] = v14;
  v15 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651598]) + *(float *)&v10;
  *(float *)&dword_140404A6C[v3 + 280657916] = v15;
  v16 = *(float *)&dword_140404A6C[v3 + 280651628];
  v17 = v12 + v16;
  if ( v17 > 0.0 )
  {
    *(float *)&dword_140404A6C[v3 + 280657914] = v13 * (float)(1.0f / v17);
    *(float *)&dword_140404A6C[v3 + 280657915] = v14 * (float)(1.0f / v17);
    *(float *)&dword_140404A6C[v3 + 280657916] = v15 * (float)(1.0f / v17);
    v16 = *(float *)&dword_140404A6C[v3 + 280651628];
  }
  v18 = *(float *)&dword_140404A6C[v3 + 280651472];
  v19 = *(float *)&dword_140404A6C[v3 + 280651550];
  v20 = *(float *)&dword_140404A6C[v3 + 280651446] * v18;
  v21 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651604])
      + (float)((float)(v19 * *(float *)&dword_140404A6C[v3 + 280651526])
              + (float)(v18 * *(float *)&dword_140404A6C[v3 + 280651448]));
  v22 = (float)(v18 + v19) + v16;
  v23 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651602])
      + (float)((float)(*(float *)&dword_140404A6C[v3 + 280651524] * v19) + v20);
  v24 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651603])
      + (float)((float)(v19 * *(float *)&dword_140404A6C[v3 + 280651525])
              + (float)(*(float *)&dword_140404A6C[v3 + 280651472] * *(float *)&dword_140404A6C[v3 + 280651447]));
  if ( v22 > 0.0 )
  {
    v23 = v23 * (float)(1.0f / v22);
    v24 = v24 * (float)(1.0f / v22);
    v21 = v21 * (float)(1.0f / v22);
  }
  *(float *)&dword_140404A6C[v3 + 280657931] = *(float *)&dword_140404A6C[v3 + 280657931] * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657932] = *(float *)&dword_140404A6C[v3 + 280657932] * 0.5;
  *(float *)&v25 = (float)(v23 + *(float *)&dword_140404A6C[v3 + 280657930]) * 0.5;
  dword_140404A6C[v3 + 280657930] = v25;
  *(float *)&dword_140404A6C[v3 + 280657931] = (float)(v24 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657931];
  *(float *)&dword_140404A6C[v3 + 280657932] = (float)(v21 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657932];
  *(float *)&dword_140404A6C[v3 + 280657933] = *(float *)&v25 - *(float *)&dword_140404A6C[v3 + 280657986];
  *(float *)&dword_140404A6C[v3 + 280657934] = *(float *)&dword_140404A6C[v3 + 280657931]
                                             - *(float *)&dword_140404A6C[v3 + 280657987];
  *(float *)&dword_140404A6C[v3 + 280657935] = *(float *)&dword_140404A6C[v3 + 280657932]
                                             - *(float *)&dword_140404A6C[v3 + 280657988];
  v26 = *(float *)&dword_140404A6C[v3 + 280651472];
  v27 = *(float *)&dword_140404A6C[v3 + 280651550];
  v28 = *(float *)&dword_140404A6C[v3 + 280651461] * v26;
  v29 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651619])
      + (float)((float)(v27 * *(float *)&dword_140404A6C[v3 + 280651541])
              + (float)(v26 * *(float *)&dword_140404A6C[v3 + 280651463]));
  v30 = (float)(v26 + v27) + *(float *)&dword_140404A6C[v3 + 280651628];
  v31 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651617])
      + (float)((float)(*(float *)&dword_140404A6C[v3 + 280651539] * v27) + v28);
  v32 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651618])
      + (float)((float)(v27 * *(float *)&dword_140404A6C[v3 + 280651540])
              + (float)(*(float *)&dword_140404A6C[v3 + 280651472] * *(float *)&dword_140404A6C[v3 + 280651462]));
  if ( v30 > 0.0 )
  {
    v31 = v31 * (float)(1.0f / v30);
    v32 = v32 * (float)(1.0f / v30);
    v29 = v29 * (float)(1.0f / v30);
  }
  v33 = (float *)&dword_140404A6C[v3 + 280651463];
  v34 = 2;
  *(float *)&dword_140404A6C[v3 + 280657937] = *(float *)&dword_140404A6C[v3 + 280657937] * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657938] = *(float *)&dword_140404A6C[v3 + 280657938] * 0.5;
  v35 = v31 + *(float *)&dword_140404A6C[v3 + 280657936];
  sr_human_mean_basis[2] = 0.0;
  v78 = 0.0;
  sr_human_mean_basis[0] = 0.0;
  sr_human_mean_basis[1] = 0.0;
  *(float *)&dword_140404A6C[v3 + 280657936] = v35 * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657937] = (float)(v32 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657937];
  *(float *)&dword_140404A6C[v3 + 280657938] = (float)(v29 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657938];
  do
  {
    v36 = v33[9];
    v37 = v33[477];
    v38 = v36 * *(v33 - 2);
    v39 = v37 * v33[467];
    v40 = v33[555];
    sr_human_mean_basis[3] = v36 * *(v33 - 1);
    v41 = v36 * *v33;
    v42 = v33[87];
    v43 = v42 * v33[76];
    sr_human_mean_basis[6] = v41;
    sr_human_mean_basis[4] = v42 * v33[77];
    sr_human_mean_basis[7] = v42 * v33[78];
    v44 = v33[165];
    v45 = v44 * v33[156];
    v46 = v44 * v33[155];
    v47 = v44 * v33[154];
    sr_human_mean_basis[8] = v45;
    v48 = v33[243];
    sr_human_mean_basis[5] = v46;
    v49 = v48;
    v50 = v48 * v33[234];
    v51 = v48 * v33[232];
    v52 = v49 * v33[233];
    v89 = v50;
    v53 = v33[321];
    v54 = v53 * v33[311];
    v55 = v53 * v33[312];
    v56 = v37 * v33[466];
    v57 = v33[399] * v33[390];
    v58 = v37 * v33[468];
    v59 = (float)((float)((float)((float)((float)((float)((float)(v78 + v38) + v43) + v47) + v51)
                                + (float)(v33[321] * v33[310]))
                        + (float)(v33[399] * v33[388]))
                + v56)
        + (float)(v40 * v33[544]);
    v78 = v59;
    v60 = (float)((float)((float)((float)((float)((float)((float)(sr_human_mean_basis[0] + sr_human_mean_basis[3]) + sr_human_mean_basis[4]) + v46) + v52) + v54)
                        + (float)(v33[399] * v33[389]))
                + v39)
        + (float)(v40 * v33[545]);
    sr_human_mean_basis[0] = v60;
    v61 = (float)((float)((float)((float)((float)((float)((float)(sr_human_mean_basis[1] + sr_human_mean_basis[6]) + sr_human_mean_basis[7]) + sr_human_mean_basis[8]) + v89) + v55) + v57) + v58)
        + (float)(v40 * v33[546]);
    v62 = v33[9] + sr_human_mean_basis[2];
    sr_human_mean_basis[1] = v61;
    v63 = (float)((float)((float)((float)((float)(v62 + v33[87]) + v33[165]) + v33[243]) + v33[321]) + v33[399])
        + v33[477];
    v33 += 624;
    v64 = v63 + v40;
    sr_human_mean_basis[2] = v64;
    --v34;
  }
  while ( v34 );
  if ( v64 > 0.0 )
  {
    v59 = v59 * (float)(1.0f / v64);
    v60 = v60 * (float)(1.0f / v64);
    v61 = v61 * (float)(1.0f / v64);
  }
  *(float *)&dword_140404A6C[v3 + 280657942] = v59;
  *(float *)&dword_140404A6C[v3 + 280657943] = v60;
  *(float *)&dword_140404A6C[v3 + 280657944] = v61;
  v65 = &dword_140404A6C[v3 + 280657917];
  *v65 = dword_140404A6C[v3 + 280651452];
  v65[1] = dword_140404A6C[v3 + 280651453];
  v65[2] = dword_140404A6C[v3 + 280651454];
  v65[3] = dword_140404A6C[v3 + 280651455];
  v65[4] = dword_140404A6C[v3 + 280651456];
  v65[5] = dword_140404A6C[v3 + 280651457];
  v65[6] = dword_140404A6C[v3 + 280651458];
  v65[7] = dword_140404A6C[v3 + 280651459];
  v65[8] = dword_140404A6C[v3 + 280651460];
  sub_14010E370(SR_VEC_LANES(128, v79, f32), (float *)v65);
  v66 = SR_VEC_LANES(128, v79, f32)[3];
  v67 = SR_VEC_LANES(128, v79, f32)[2];
  v68 = SR_VEC_LANES(128, v79, f32)[1];
  v69 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v79, u32)[0]));
  if ( (float)((float)((float)(SR_VEC_LANES(128, v79, f32)[3] * *(float *)&dword_140404A6C[v3 + 280657929])
                     + (float)(SR_VEC_LANES(128, v79, f32)[2] * *(float *)&dword_140404A6C[v3 + 280657928]))
             + (float)((float)(SR_VEC_LANES(128, v79, f32)[1] * *(float *)&dword_140404A6C[v3 + 280657927])
                     + (float)(SR_VEC_LANES(128, v79, f32)[0] * *(float *)&dword_140404A6C[v3 + 280657926]))) < 0.0 )
  {
    v79 = _mm_xor_ps(v79, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v67 = SR_VEC_LANES(128, v79, f32)[2];
    v68 = SR_VEC_LANES(128, v79, f32)[1];
    v69 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v79, u32)[0]));
    v66 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v79, v79, 255), f32)[0];
  }
  v70 = v67 + *(float *)&dword_140404A6C[7166 * v2 + 280657928];
  v71 = v68 + *(float *)&dword_140404A6C[7166 * v2 + 280657927];
  v72 = v66 + *(float *)&dword_140404A6C[7166 * v2 + 280657929];
  v73 = SR_VEC_LANES(128, v69, f32)[0] + *(float *)&dword_140404A6C[7166 * v2 + 280657926];
  SR_VEC_LANES(128, v79, f32)[0] = v73 * 0.5;
  SR_VEC_LANES(128, v79, f32)[1] = v71 * 0.5;
  SR_VEC_LANES(128, v79, f32)[2] = v70 * 0.5;
  SR_VEC_LANES(128, v79, f32)[3] = v72 * 0.5;
  SR_VEC_LANES(128, v69, f32)[0] = (float)((float)((float)(v73 * v73) + (float)(v71 * v71))
                          + (float)((float)(v70 * v70) + (float)(v72 * v72)))
                  * 0.25;
  v74 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v69)), f64)[0];
  unsigned char sr_zero_or_unordered;
  __asm__ volatile("ucomisd %2, %1; sete %0" : "=qm"(sr_zero_or_unordered)
                   : "x"(_mm_set_sd(v74)), "x"(_mm_setzero_pd()) : "cc");
  if ( sr_zero_or_unordered )
  {
    v79 = ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279490));
  }
  else
  {
    v75 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
    SR_VEC_LANES(128, v75, f64)[0] = 1.0 / v74;
    v76 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v75, v75), f64)[0];
    do
    {
      __m128 sr_pair=_mm_castpd_ps(_mm_load_sd((const double *)(const void *)((const unsigned char *)&v79+8*v1)));
      __m128d sr_scaled=_mm_mul_pd(_mm_cvtps_pd(sr_pair),_mm_set1_pd(v76));
      __m128 sr_words=_mm_cvtpd_ps(sr_scaled);
      uint64_t sr_bits;memcpy(&sr_bits,&sr_words,8);
      memcpy((unsigned char *)&v79+8*v1,&sr_bits,8);
      ++v1;
    }
    while ( v1 < 2 );
  }
  _mm_storeu_ps((float *)&dword_140404A6C[v3 + 280657926], v79);
  return sub_14011C340((float *)&dword_140404A6C[v3 + 280657917], SR_VEC_LANES(128, v79, f32));
}
#undef v78
#undef v79
#undef v89

// 140279870: using guessed type __int128 xmmword_140279870;

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
  v440 = 0.039999999;
  v441 = 0.001953125;
  v450 = 0.25;
  v439 = 0.000015258789;
  v442 = 0.375;
  v454 = -3.14159265359;
  v423 = 0.050000001;
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
        v76 = -1.5707964;
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
        sr_human_tick_point[2] = -1.5707964;
        v82 = -1.5707964;
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
                     & v2) > 0.2666666666666667 )
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
                          & v2) > 0.2666666666666667 )
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
      v220 = (float)((float)v214 * v216) * 0.06666667;
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
            v272 = (float)(*(float *)&v270 * -0.5) - 0.5890486225481251;
            break;
          case 13LL:
            v272 = 0.196349540849375 - (float)(*(float *)&v270 * v252);
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
          sub_1400A56B0(&sr_human_tick_point[0], 0.016666668, *(float *)&v1);
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
    if ( *(float *)((char *)&dword_140404A6C[280651456] + v428) < 0.70700002 )
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
