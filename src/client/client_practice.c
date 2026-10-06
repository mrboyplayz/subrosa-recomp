#include "shared_client.h"


//----- (0000000140127910) ----------------------------------------------------
__int64            sr_ResetGame(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 i; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int16 v8; // ax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int *v13; // rax
  __int64 v14; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // rax
  unsigned int v19; // r11d
  int v20; // eax
  unsigned int v21; // edx
  unsigned int *v22; // rax
  unsigned int v23; // edx
  unsigned int *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int *v27; // rax
  signed int v28; // edx
  _DWORD *v29; // rcx
  unsigned int v30; // r9d
  unsigned int *v31; // r8
  int j; // r10d
  int v33; // ecx
  int v34; // edx
  float v35; // xmm0_4
  int v36; // ecx
  unsigned int *v37; // rax
  unsigned int v38; // r9d
  unsigned __int8 v39; // al
  unsigned int v40; // xmm8_4
  unsigned int *v41; // rax
  unsigned int *v42; // rax
  int v43; // ecx
  unsigned int *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rdx
  unsigned int v49; // r10d
  unsigned int v50; // r10d
  unsigned int v51; // r10d
  unsigned int v52; // r10d
  unsigned int v53; // r10d
  unsigned int v54; // r10d
  unsigned int v55; // r10d
  unsigned int *v56; // rax
  unsigned int *v57; // rax
  unsigned int *v58; // rax
  unsigned int *v59; // rax
  unsigned int *v60; // rax
  unsigned int *v61; // rcx
  unsigned int *v62; // rax
  unsigned int *v63; // rax
  unsigned int *v64; // rax
  unsigned int *v65; // rax
  unsigned int *v66; // rax
  unsigned int *v67; // rcx
  __int64 v68; // r10
  unsigned int *v69; // r9
  _DWORD *v70; // rax
  __int64 v71; // rdx
  _DWORD *v72; // rax
  __int64 v73; // rdx
  _DWORD *v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // rdx
  unsigned int *v78; // rax
  __int64 v79; // rdx
  unsigned int *v80; // rax
  __int64 v81; // rdx
  unsigned int *v82; // rax
  float v83; // xmm6_4
  double v84; // xmm7_8
  unsigned int v85; // xmm1_4
  double v86; // xmm0_8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  char v92; // al
  __int64 v93; // r12
  unsigned int *v94; // r13
  unsigned __int64 v95; // r15
  unsigned int *v96; // rcx
  __int64 v97; // r8
  __int64 k; // r14
  __int64 v99; // rsi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned int v104; // eax
  unsigned int v105; // eax
  unsigned int v106; // ecx
  signed int v107; // eax
  signed int v108; // eax
  signed int v109; // eax
  signed int v110; // eax
  int v111; // r14d
  unsigned int *v112; // rsi
  int v113; // r14d
  unsigned int *v114; // rsi
  int v115; // xmm1_4
  double v116; // xmm2_8
  unsigned int v117; // xmm0_4
  signed int v118; // eax
  __int64 v119; // rcx
  unsigned int v120; // r9d
  unsigned int *v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rcx
  signed int v124; // r14d
  unsigned int *v125; // rsi
  __int64 v126; // rdx
  unsigned int v127; // edx
  unsigned int v128; // r8d
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
       char *v135; // r8
  __int64 v136; // rcx
  unsigned int *v137; // rdx
  char v138; // al
  unsigned int v139; // edx
  int v140; // r14d
  __int64 v141; // r12
  unsigned int *v142; // rsi
  float v143; // xmm8_4
  int *v144; // rsi
  float v145; // xmm7_4
  float v146; // xmm6_4
  __int64 v147; // rcx
  char v148; // al
  __int64 v149; // rcx
  char v150; // al
  __int64 v151; // rcx
  char v152; // al
  __int64 v153; // rcx
  char v154; // al
  float v155; // xmm7_4
  int v156; // eax
  __int64 v157; // r9
  int v158; // edx
  int v159; // r8d
  __int64 v160; // rax
  unsigned int v161; // eax
  __int64 v162; // rcx
  signed int v163; // eax
  signed int v164; // eax
  signed int v165; // eax
  signed int v166; // eax
  signed int v167; // eax
  signed int v168; // eax
  signed int v169; // eax
  signed int v170; // eax
  float v171; // xmm9_4
  float v172; // xmm6_4
  __int64 v173; // r13
  unsigned int *v174; // rcx
  unsigned int v175; // esi
  __int64 v176; // r15
  __int64 v177; // rax
  __int64 v178; // r10
  __int64 v179; // rax
       char *v180; // r9
  unsigned int *v181; // r8
  char v182; // al
  int v183; // eax
  int v184; // eax
  int v185; // eax
  int v186; // eax
  int v187; // eax
  int v188; // eax
  __int64 v189; // rax
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  unsigned int v196; // xmm0_4
  unsigned int v197; // xmm1_4
  __int64 v198; // rax
  signed int v199; // ecx
  unsigned int *v200; // rax
  unsigned int v201; // r8d
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  _Alignas(8) unsigned sr_reset_spawn_position[4];
  _Alignas(8) unsigned sr_reset_player_position[3];
  _Alignas(16) unsigned sr_reset_spawn_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140127910[1232];
#define v206 (*(__int64 (*))(void *)(sr_frame_140127910 + 0)) /* [rsp+8h] */
#define v207 (*(int (*))(void *)(sr_frame_140127910 + 32)) /* [rsp+28h] */
#define v208 (*(int (*))(void *)(sr_frame_140127910 + 40)) /* [rsp+30h] */
#define v209 (*(int (*))(void *)(sr_frame_140127910 + 48)) /* [rsp+38h] */
#define v210 (*(int (*))(void *)(sr_frame_140127910 + 56)) /* [rsp+40h] */
#define v211 (*(int (*))(void *)(sr_frame_140127910 + 64)) /* [rsp+48h] */
#define v216 (*(int (*))(void *)(sr_frame_140127910 + 112)) /* [rsp+78h] */
#define v217 (*(int (*)[3])(void *)(sr_frame_140127910 + 116)) /* [rsp+7Ch] */
#define v218 (*(char (*)[1024])(void *)(sr_frame_140127910 + 128)) /* [rsp+88h] */
#define v222 (*(__int64 (*))(void *)(sr_frame_140127910 + 1216)) /* [rsp+4C8h] */

  SR_DEBUG_STAGE("ResetGame: clear previous game state and prepare generation");
  SR_DEBUG_LOG("Game mode=%u, local simulation=%u, map=%.31s",
      dword_140404A6C[283831312], dword_140404A6C[456202453],
      (char *)&dword_140404A6C[283831313]);
  if ( !dword_140404A6C[19065870] && (int)dword_140404A6C[19065871] > 0 && (int)dword_140404A6C[19065874] > 0 )
  {
    v3 = 1;
    sub_140158AB0(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", 1);
    for ( i = sub_14020B8D8((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb"); i; i = sub_14020B8D8((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb") )
    {
      if ( v3 >= 1000 )
        break;
      sub_14020B9E8(i);
      sub_140158AB0(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", ++v3);
    }
    v5 = sub_14020B8D8((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "wb");
    v6 = v5;
    if ( v5 )
    {
      v216 = 1;
      sub_14020CE0C((__int64)&v216, 4, 1, v5);
      v217[0] = dword_1402B26C8;
      sub_14020CE0C((__int64)v217, 4, 1, v6);
      sub_14020CE0C((__int64)&dword_140404A6C[19065874], 4, 1, v6);
      sub_14020CE0C(*(__int64 *)&dword_140404A6C[19065875], 1, (int)dword_140404A6C[19065874], v6);
      sub_14020B9E8(v6);
    }
    --dword_140404A6C[19065871];
  }
  v7 = dword_140404A6C[283831312];
  dword_140404A6C[456202732] = dword_140404A6C[283831312];
  if ( !dword_140404A6C[456202453] )
    goto LABEL_19;
  if ( dword_140404A6C[283831312] == 7 )
  {
    strcpy(
      (char *)&dword_140404A6C[283831313],
      (     char *)&dword_140404A6C[16 * (__int64)(int)dword_140404A6C[284022505] + 284022506]);
    v7 = dword_140404A6C[283831312];
  }
  else
  {
    if ( ((dword_140404A6C[283831312] - 4) & 0xFFFFFFFB) != 0 )
    {
      if ( ((dword_140404A6C[283831312] - 3) & 0xFFFFFFFC) != 0 || dword_140404A6C[283831312] == 4 )
        goto LABEL_19;
      dword_140404A6C[283831313] = 1853190002;
      v8 = 100;
    }
    else
    {
      dword_140404A6C[283831313] = *(_DWORD *)"test2";
      v8 = *(_WORD *)"2";
    }
    LOWORD(dword_140404A6C[283831314]) = v8;
  }
LABEL_19:
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *((unsigned __int8 *)&dword_140404A6C[283831313] + v10++);
    v12 = (_BYTE)v11 == *((_BYTE *)&dword_140274DA8 + v10 - 1);
    if ( (_BYTE)v11 != *((_BYTE *)&dword_140274DA8 + v10 - 1) )
      break;
    if ( v10 == 6 )
    {
      v12 = (_BYTE)v11 == 0;
      break;
    }
  }
  dword_140404A6C[284024893] = v12;
  if ( (_DWORD)v7 == 3 )
    dword_140404A6C[283831441] = dword_140404A6C[284022482] != 0;
  *(_OWORD *)&dword_140404A6C[284024917] = xmmword_140279820;
  dword_140404A6C[456202730] = -1;
  dword_140404A6C[284024921] = 1113325568;
  dword_140404A6C[284024922] = 1152958464;
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v211 = 1065353216;
  v210 = 1065353216;
  v209 = 1065353216;
  v208 = 1065353216;
  v207 = 1;
  sr_text_draw_recovered("Generating...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  v13 = &dword_140404A6C[430859702];
  v14 = 16;
  do
  {
    *(_QWORD *)v13 = 0x100000001LL;
    *((_QWORD *)v13 + 1) = 0x100000001LL;
    *((_QWORD *)v13 + 2) = 0x100000001LL;
    v13 += 16;
    *((_QWORD *)v13 - 5) = 0x100000001LL;
    *((_QWORD *)v13 - 4) = 0x100000001LL;
    *((_QWORD *)v13 - 3) = 0x100000001LL;
    *((_QWORD *)v13 - 2) = 0x100000001LL;
    *((_QWORD *)v13 - 1) = 0x100000001LL;
    --v14;
  }
  while ( v14 );
  dword_140404A6C[70326525] = 0;
  v15 = &dword_140404A6C[327698];
  do
  {
    if ( *(v15 - 1) && !*v15 )
      *v15 = 1;
    if ( v15[278719] && !v15[278720] )
      v15[278720] = 1;
    if ( v15[557439] && !v15[557440] )
      v15[557440] = 1;
    if ( v15[836159] && !v15[836160] )
      v15[836160] = 1;
    if ( v15[1114879] && !v15[1114880] )
      v15[1114880] = 1;
    if ( v15[1393599] && !v15[1393600] )
      v15[1393600] = 1;
    if ( v15[1672319] && !v15[1672320] )
      v15[1672320] = 1;
    if ( v15[1951039] && !v15[1951040] )
      v15[1951040] = 1;
    if ( v15[2229759] && !v15[2229760] )
      v15[2229760] = 1;
    if ( v15[2508479] && !v15[2508480] )
      v15[2508480] = 1;
    if ( v15[2787199] && !v15[2787200] )
      v15[2787200] = 1;
    if ( v15[3065919] && !v15[3065920] )
      v15[3065920] = 1;
    if ( v15[3344639] && !v15[3344640] )
      v15[3344640] = 1;
    if ( v15[3623359] && !v15[3623360] )
      v15[3623360] = 1;
    if ( v15[3902079] && !v15[3902080] )
      v15[3902080] = 1;
    if ( v15[4180799] && !v15[4180800] )
      v15[4180800] = 1;
    if ( v15[4459519] && !v15[4459520] )
      v15[4459520] = 1;
    if ( v15[4738239] && !v15[4738240] )
      v15[4738240] = 1;
    if ( v15[5016959] && !v15[5016960] )
      v15[5016960] = 1;
    if ( v15[5295679] && !v15[5295680] )
      v15[5295680] = 1;
    if ( v15[5574399] && !v15[5574400] )
      v15[5574400] = 1;
    if ( v15[5853119] && !v15[5853120] )
      v15[5853120] = 1;
    if ( v15[6131839] && !v15[6131840] )
      v15[6131840] = 1;
    if ( v15[6410559] && !v15[6410560] )
      v15[6410560] = 1;
    if ( v15[6689279] && !v15[6689280] )
      v15[6689280] = 1;
    if ( v15[6967999] && !v15[6968000] )
      v15[6968000] = 1;
    if ( v15[7246719] && !v15[7246720] )
      v15[7246720] = 1;
    if ( v15[7525439] && !v15[7525440] )
      v15[7525440] = 1;
    if ( v15[7804159] && !v15[7804160] )
      v15[7804160] = 1;
    if ( v15[8082879] && !v15[8082880] )
      v15[8082880] = 1;
    if ( v15[8361599] && !v15[8361600] )
      v15[8361600] = 1;
    if ( v15[8640319] && !v15[8640320] )
      v15[8640320] = 1;
    v15 += 8919040;
  }
  while ( (__int64)v15 < (__int64)&dword_140404A6C[18165778] );
  v16 = dword_140404A6C[283831312];
  if ( dword_140404A6C[283831312] == 4
    || (int)dword_140404A6C[283831312] <= 1
    || (v17 = 1, (int)dword_140404A6C[283831312] >= 8) )
  {
    v17 = 0;
  }
  if ( dword_140404A6C[19065870] )
    v17 = 0;
  dword_140404A6C[280649838] = v17;
  v18 = &dword_140404A6C[346696448];
  do
  {
    if ( *(v18 - 3) )
      *(_QWORD *)(v18 - 1) = 0;
    if ( v18[35] )
      *(_QWORD *)(v18 + 37) = 0;
    if ( v18[73] )
      *(_QWORD *)(v18 + 75) = 0;
    if ( v18[111] )
      *(_QWORD *)(v18 + 113) = 0;
    v18 += 152;
  }
  while ( (__int64)v18 < (__int64)&dword_140404A6C[346706176] );
  v19 = dword_140404A6C[456202453];
  dword_140404A6C[283785910] = 1;
  if ( dword_140404A6C[456202453] )
  {
    if ( ((v16 - 2) & 0xFFFFFFFA) == 0 && v16 != 6 )
    {
      sub_14012C480();
      sub_140132B00();
      v19 = dword_140404A6C[456202453];
      v16 = dword_140404A6C[283831312];
    }
    if ( v19 )
    {
      v20 = ++dword_140404A6C[283831446];
      if ( v16 == 7 )
      {
        if ( v20 <= 5 )
          goto LABEL_157;
        v21 = dword_140404A6C[284022500];
        v22 = &dword_140404A6C[71857786];
        *(_QWORD *)&dword_140404A6C[284023018] = 0;
        do
        {
          *(v22 - 1514) = v21;
          *v22 = 0;
          v22[25] = 0;
          v22[50] = 0;
          v22[75] = 0;
          v22[100] = 0;
          v22[125] = 0;
          v22[150] = 0;
          v22 += 3597;
        }
        while ( (__int64)v22 < (__int64)&dword_140404A6C[72778618] );
        goto LABEL_156;
      }
      if ( v16 == 3 && dword_140404A6C[283831441] == 1 && v20 > 5 )
      {
        v23 = dword_140404A6C[284022481];
        v24 = &dword_140404A6C[71856288];
        dword_140404A6C[335047062] = 1120403456;
        dword_140404A6C[335047064] = 1000;
        dword_140404A6C[335047061] = 100;
        dword_140404A6C[335047068] = 1120403456;
        dword_140404A6C[335047070] = 1000;
        dword_140404A6C[335047067] = 100;
        dword_140404A6C[335047074] = 1120403456;
        dword_140404A6C[335047076] = 1000;
        dword_140404A6C[335047073] = 100;
        do
        {
          *(v24 - 16) = v23;
          *v24 = 0;
          v24[1498] = 0;
          v24[1523] = 0;
          v24[1548] = 0;
          v24[1573] = 0;
          v24[1598] = 0;
          v24[1623] = 0;
          v24[1648] = 0;
          v24 += 3597;
        }
        while ( (__int64)v24 < (__int64)&dword_140404A6C[72777120] );
LABEL_156:
        dword_140404A6C[283831446] = 1;
      }
    }
  }
LABEL_157:
  dword_140404A6C[283831448] = 1;
  *(_QWORD *)&dword_140404A6C[283831450] = 0;
  if ( v16 == 3 )
  {
    dword_140404A6C[283831452] = 7200;
    dword_140404A6C[283831450] = 7200;
  }
  else
  {
    if ( v16 == 2 || v16 - 5 <= 2 )
      dword_140404A6C[283831450] = 1800;
    if ( v16 <= 1 )
    {
      dword_140404A6C[283831450] = dword_140404A6C[283831453];
      dword_140404A6C[283831448] = 2;
    }
  }
  if ( v16 == 7 )
  {
    v25 = dword_140404A6C[284022504];
  }
  else
  {
    v25 = 0;
    if ( v16 == 3 )
      v25 = dword_140404A6C[284022484];
  }
  dword_140404A6C[283831455] = v25;
  v26 = dword_140404A6C[284021982];
  if ( !dword_140404A6C[19065870] )
    v26 = -1;
  dword_140404A6C[284022317] = 0;
  dword_140404A6C[284021982] = v26;
  v27 = &dword_140404A6C[283831508];
  dword_140404A6C[284022465] = 0;
  *(_QWORD *)&dword_140404A6C[284021987] = 0;
  dword_140404A6C[284024519] = -1;
  dword_140404A6C[284021983] = 0;
  dword_140404A6C[487148677] = 0;
  do
  {
    *(_QWORD *)(v27 - 3) = 0;
    *v27 = 0;
    if ( !dword_140404A6C[283831447] )
      v27[2] = -1;
    v27[80] = 0;
    v28 = 0;
    *((_BYTE *)v27 + 412) = 0;
    v27[359] = 0;
    *((_BYTE *)v27 + 1528) = 0;
    v27[638] = 0;
    *((_BYTE *)v27 + 2644) = 0;
    v27[917] = 0;
    *((_BYTE *)v27 + 3760) = 0;
    v27[1196] = 0;
    *((_BYTE *)v27 + 4876) = 0;
    v27[1475] = 0;
    *((_BYTE *)v27 + 5992) = 0;
    v27[1754] = 0;
    *((_BYTE *)v27 + 7108) = 0;
    v27[2033] = 0;
    *((_BYTE *)v27 + 8224) = 0;
    v27[2312] = 0;
    *((_BYTE *)v27 + 9340) = 0;
    v27[2591] = 0;
    *((_BYTE *)v27 + 10456) = 0;
    v27[2870] = 0;
    *((_BYTE *)v27 + 11572) = 0;
    v27[3149] = 0;
    *((_BYTE *)v27 + 12688) = 0;
    v27[3428] = 0;
    *((_BYTE *)v27 + 13804) = 0;
    v27[3707] = 0;
    *((_BYTE *)v27 + 14920) = 0;
    v27[3986] = 0;
    *((_BYTE *)v27 + 16036) = 0;
    v27[4265] = 0;
    *((_BYTE *)v27 + 17152) = 0;
    if ( (int)v27[4823] > 0 )
    {
      v29 = v27 + 4824;
      do
      {
        *v29 = 0;
        v29 += 13;
        ++v28;
      }
      while ( v28 < (int)v27[4823] );
    }
    v27[3] = 0;
    v27 += 5873;
  }
  while ( (__int64)v27 < (__int64)&dword_140404A6C[283866746] );
  v30 = dword_140404A6C[283831447];
  if ( !dword_140404A6C[283831447] )
  {
    strcpy((char *)&dword_140404A6C[283831457], "Buy Stuff");
    dword_140404A6C[283831456] = 10000;
  }
  v31 = &dword_140404A6C[335047064];
  for ( j = 0; j < 6; ++j )
  {
    if ( v30 )
    {
      v33 = *v31;
    }
    else
    {
      *(v31 - 2) = 1120403456;
      v33 = 1000;
      *v31 = 1000;
    }
    v34 = (unsigned __int64)(1717986919LL * v33) >> 32;
    v35 = (float)v33;
    v36 = 100;
    *(v31 - 3) = 100;
    v31[1] = ((unsigned int)v34 >> 31) + (v34 >> 2);
    v37 = &dword_140404A6C[71856288];
    *((float *)v31 - 1) = v35 * 0.1;
    do
    {
      if ( *(v37 - 2) == j )
      {
        v36 += *v37;
        *(v31 - 3) = v36;
      }
      v37 += 3597;
    }
    while ( (__int64)v37 < (__int64)&dword_140404A6C[72777120] );
    v31 += 6;
  }
  *(_QWORD *)&dword_140404A6C[284022086] = 0;
  dword_140404A6C[284023071] = 0;
  dword_140404A6C[284019421] = 0;
  if ( v19 )
    v38 = v30 + 1;
  else
    v38 = dword_140404A6C[421831838];
  dword_140404A6C[283831447] = v38;
  dword_140404A6C[283831474] = 0;
  dword_140404A6C[421831837] = 0;
  dword_140404A6C[283785902] = 0;
  if ( v19 )
  {
    sub_1401063E0();
    if ( dword_140404A6C[456202453] )
    {
      *(float *)&dword_140404A6C[283831482] = (float)(unsigned __int8)rand() * 0.003067961575771484;
      *(float *)&dword_140404A6C[283831482] = (float)((unsigned __int8)rand() + 64) * 0.003067961575771484;
      v39 = rand();
      v38 = dword_140404A6C[283831447];
      dword_140404A6C[179992853] = 2376000;
      *(float *)&v40 = (float)v39 * 0.01227184630308594;
      dword_140404A6C[283831483] = v40;
      goto LABEL_197;
    }
    v38 = dword_140404A6C[283831447];
  }
  else
  {
    dword_140404A6C[283720109] = 0;
  }
  v40 = dword_140404A6C[283831483];
LABEL_197:
  dword_140404A6C[73990061] = 0;
  v41 = &dword_140404A6C[486149253];
  do
  {
    *v41 = 0;
    v41 += 61;
  }
  while ( (__int64)v41 < (__int64)&dword_140404A6C[487148677] );
  v42 = &dword_140404A6C[133450253];
  do
  {
    *v42 = 0;
    v42 += 202;
  }
  while ( (__int64)v42 < (__int64)&dword_140404A6C[133657101] );
  v43 = dword_140404A6C[283831312];
  v44 = &dword_140404A6C[71856253];
  v45 = 0;
  do
  {
    v46 = 3597 * v45;
    if ( dword_140404A6C[3597 * v45 + 71859139] )
      dword_140404A6C[v46 + 71856253] = 0;
    dword_140404A6C[v46 + 71856329] = 0;
    dword_140404A6C[v46 + 71856279] = 0;
    dword_140404A6C[v46 + 71856290] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71856362] = 0;
    dword_140404A6C[v46 + 71856330] = 1;
    dword_140404A6C[v46 + 71856292] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71856288] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71856286] = 0;
    }
    dword_140404A6C[v46 + 71856271] = 0;
    if ( v43 == 4 || v43 <= 1 || (v47 = 2, v43 >= 8) )
      v47 = 0;
    dword_140404A6C[v46 + 71856342] = v47;
    v48 = 32901 * v45;
    dword_140404A6C[v46 + 71856345] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71856339] = 0;
    dword_140404A6C[v46 + 71856301] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71856282] = 0;
    dword_140404A6C[32901 * v45 + 299853693] = 1;
    dword_140404A6C[v46 + 71856284] = 0;
    dword_140404A6C[v46 + 71859663] = -1;
    if ( dword_140404A6C[v46 + 71862736] )
      dword_140404A6C[v46 + 71859850] = 0;
    dword_140404A6C[v46 + 71859926] = 0;
    dword_140404A6C[v46 + 71859876] = 0;
    dword_140404A6C[v46 + 71859887] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71859959] = 0;
    dword_140404A6C[v46 + 71859927] = 1;
    dword_140404A6C[v46 + 71859889] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71859885] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71859883] = 0;
    }
    dword_140404A6C[v46 + 71859868] = 0;
    if ( v43 == 4 || v43 <= 1 || (v49 = 2, v43 >= 8) )
      v49 = 0;
    dword_140404A6C[v46 + 71859939] = v49;
    dword_140404A6C[v46 + 71859942] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71859936] = 0;
    dword_140404A6C[v46 + 71859898] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71859879] = 0;
    dword_140404A6C[v46 + 71859881] = 0;
    dword_140404A6C[v46 + 71863260] = -1;
    dword_140404A6C[v48 + 299886594] = 1;
    if ( dword_140404A6C[v46 + 71866333] )
      dword_140404A6C[v46 + 71863447] = 0;
    dword_140404A6C[v46 + 71863523] = 0;
    dword_140404A6C[v46 + 71863473] = 0;
    dword_140404A6C[v46 + 71863484] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71863556] = 0;
    dword_140404A6C[v46 + 71863524] = 1;
    dword_140404A6C[v46 + 71863486] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71863482] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71863480] = 0;
    }
    dword_140404A6C[v46 + 71863465] = 0;
    if ( v43 == 4 || v43 <= 1 || (v50 = 2, v43 >= 8) )
      v50 = 0;
    dword_140404A6C[v46 + 71863536] = v50;
    dword_140404A6C[v46 + 71863539] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71863533] = 0;
    dword_140404A6C[v46 + 71863495] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71863476] = 0;
    dword_140404A6C[v46 + 71863478] = 0;
    dword_140404A6C[v46 + 71866857] = -1;
    dword_140404A6C[v48 + 299919495] = 1;
    if ( dword_140404A6C[v46 + 71869930] )
      dword_140404A6C[v46 + 71867044] = 0;
    dword_140404A6C[v46 + 71867120] = 0;
    dword_140404A6C[v46 + 71867070] = 0;
    dword_140404A6C[v46 + 71867081] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71867153] = 0;
    dword_140404A6C[v46 + 71867121] = 1;
    dword_140404A6C[v46 + 71867083] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71867079] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71867077] = 0;
    }
    dword_140404A6C[v46 + 71867062] = 0;
    if ( v43 == 4 || v43 <= 1 || (v51 = 2, v43 >= 8) )
      v51 = 0;
    dword_140404A6C[v46 + 71867133] = v51;
    dword_140404A6C[v46 + 71867136] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71867130] = 0;
    dword_140404A6C[v46 + 71867092] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71867073] = 0;
    dword_140404A6C[v46 + 71867075] = 0;
    dword_140404A6C[v46 + 71870454] = -1;
    dword_140404A6C[v48 + 299952396] = 1;
    if ( dword_140404A6C[v46 + 71873527] )
      dword_140404A6C[v46 + 71870641] = 0;
    dword_140404A6C[v46 + 71870717] = 0;
    dword_140404A6C[v46 + 71870667] = 0;
    dword_140404A6C[v46 + 71870678] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71870750] = 0;
    dword_140404A6C[v46 + 71870718] = 1;
    dword_140404A6C[v46 + 71870680] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71870676] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71870674] = 0;
    }
    dword_140404A6C[v46 + 71870659] = 0;
    if ( v43 == 4 || v43 <= 1 || (v52 = 2, v43 >= 8) )
      v52 = 0;
    dword_140404A6C[v46 + 71870730] = v52;
    dword_140404A6C[v46 + 71870733] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71870727] = 0;
    dword_140404A6C[v46 + 71870689] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71870670] = 0;
    dword_140404A6C[v46 + 71870672] = 0;
    dword_140404A6C[v46 + 71874051] = -1;
    dword_140404A6C[v48 + 299985297] = 1;
    if ( dword_140404A6C[v46 + 71877124] )
      dword_140404A6C[v46 + 71874238] = 0;
    dword_140404A6C[v46 + 71874314] = 0;
    dword_140404A6C[v46 + 71874264] = 0;
    dword_140404A6C[v46 + 71874275] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71874347] = 0;
    dword_140404A6C[v46 + 71874315] = 1;
    dword_140404A6C[v46 + 71874277] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71874273] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71874271] = 0;
    }
    dword_140404A6C[v46 + 71874256] = 0;
    if ( v43 == 4 || v43 <= 1 || (v53 = 2, v43 >= 8) )
      v53 = 0;
    dword_140404A6C[v46 + 71874327] = v53;
    dword_140404A6C[v46 + 71874330] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71874324] = 0;
    dword_140404A6C[v46 + 71874286] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71874267] = 0;
    dword_140404A6C[v46 + 71874269] = 0;
    dword_140404A6C[v46 + 71877648] = -1;
    dword_140404A6C[v48 + 300018198] = 1;
    if ( dword_140404A6C[v46 + 71880721] )
      dword_140404A6C[v46 + 71877835] = 0;
    dword_140404A6C[v46 + 71877911] = 0;
    dword_140404A6C[v46 + 71877861] = 0;
    dword_140404A6C[v46 + 71877872] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71877944] = 0;
    dword_140404A6C[v46 + 71877912] = 1;
    dword_140404A6C[v46 + 71877874] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71877870] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71877868] = 0;
    }
    dword_140404A6C[v46 + 71877853] = 0;
    if ( v43 == 4 || v43 <= 1 || (v54 = 2, v43 >= 8) )
      v54 = 0;
    dword_140404A6C[v46 + 71877924] = v54;
    dword_140404A6C[v46 + 71877927] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71877921] = 0;
    dword_140404A6C[v46 + 71877883] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71877864] = 0;
    dword_140404A6C[v46 + 71877866] = 0;
    dword_140404A6C[v46 + 71881245] = -1;
    dword_140404A6C[v48 + 300051099] = 1;
    if ( dword_140404A6C[v46 + 71884318] )
      dword_140404A6C[v46 + 71881432] = 0;
    dword_140404A6C[v46 + 71881508] = 0;
    dword_140404A6C[v46 + 71881458] = 0;
    dword_140404A6C[v46 + 71881469] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71881541] = 0;
    dword_140404A6C[v46 + 71881509] = 1;
    dword_140404A6C[v46 + 71881471] = -1;
    if ( v43 == 4 )
    {
      if ( !v38 )
        dword_140404A6C[v46 + 71881467] = 0;
    }
    else if ( !v43 )
    {
      dword_140404A6C[v46 + 71881465] = 0;
    }
    dword_140404A6C[v46 + 71881450] = 0;
    if ( v43 == 4 || v43 <= 1 || (v55 = 2, v43 >= 8) )
      v55 = 0;
    dword_140404A6C[v46 + 71881521] = v55;
    v45 += 8;
    dword_140404A6C[v46 + 71881524] = -1;
    *(_QWORD *)&dword_140404A6C[v46 + 71881518] = 0;
    dword_140404A6C[v46 + 71881480] = 0;
    *(_QWORD *)&dword_140404A6C[v46 + 71881461] = 0;
    dword_140404A6C[v46 + 71881463] = 0;
    dword_140404A6C[v46 + 71884842] = -1;
    dword_140404A6C[v48 + 300084000] = 1;
  }
  while ( v45 < 256 );
  v56 = &dword_140404A6C[18215709];
  do
  {
    *v56 = 0;
    v56 += 47;
  }
  while ( (__int64)v56 < (__int64)&dword_140404A6C[18600733] );
  v57 = &dword_140404A6C[280651303];
  do
  {
    *v57 = 0;
    v57 += 7166;
  }
  while ( (__int64)v57 < (__int64)&dword_140404A6C[282485799] );
  v58 = &dword_140404A6C[129721918];
  do
  {
    *(v58 - 5209) = 0;
    *v58 = -1;
    v58 += 5210;
  }
  while ( (__int64)v58 < (__int64)&dword_140404A6C[132389438] );
  v59 = &dword_140404A6C[278845893];
  do
  {
    *v59 = 0;
    v59 += 1760;
  }
  while ( (__int64)v59 < (__int64)&dword_140404A6C[280648133] );
  v60 = &dword_140404A6C[278520517];
  do
  {
    *v60 = 0;
    v60 += 3;
  }
  while ( (__int64)v60 < (__int64)&dword_140404A6C[278521285] );
  dword_140404A6C[433433157] = 0;
  dword_140404A6C[433433178] = 0;
  dword_140404A6C[433433199] = 0;
  dword_140404A6C[433433220] = 0;
  dword_140404A6C[433433241] = 0;
  dword_140404A6C[433433262] = 0;
  dword_140404A6C[433433283] = 0;
  dword_140404A6C[433433304] = 0;
  dword_140404A6C[433433325] = 0;
  dword_140404A6C[433433346] = 0;
  dword_140404A6C[433433367] = 0;
  dword_140404A6C[433433388] = 0;
  dword_140404A6C[433433409] = 0;
  dword_140404A6C[433433430] = 0;
  dword_140404A6C[433433451] = 0;
  dword_140404A6C[433433472] = 0;
  dword_140404A6C[433433493] = 0;
  dword_140404A6C[433433514] = 0;
  dword_140404A6C[433433535] = 0;
  dword_140404A6C[433433556] = 0;
  dword_140404A6C[433433577] = 0;
  dword_140404A6C[433433598] = 0;
  dword_140404A6C[433433619] = 0;
  dword_140404A6C[433433640] = 0;
  dword_140404A6C[433433661] = 0;
  dword_140404A6C[433433682] = 0;
  dword_140404A6C[433433703] = 0;
  dword_140404A6C[433433724] = 0;
  dword_140404A6C[433433745] = 0;
  dword_140404A6C[433433766] = 0;
  dword_140404A6C[433433787] = 0;
  dword_140404A6C[433433808] = 0;
  dword_140404A6C[433433829] = 0;
  dword_140404A6C[433433850] = 0;
  dword_140404A6C[433433871] = 0;
  dword_140404A6C[433433892] = 0;
  dword_140404A6C[433433913] = 0;
  dword_140404A6C[433433934] = 0;
  dword_140404A6C[433433955] = 0;
  dword_140404A6C[433433976] = 0;
  dword_140404A6C[433433997] = 0;
  dword_140404A6C[433434018] = 0;
  dword_140404A6C[433434039] = 0;
  dword_140404A6C[433434060] = 0;
  dword_140404A6C[433434081] = 0;
  dword_140404A6C[433434102] = 0;
  dword_140404A6C[433434123] = 0;
  dword_140404A6C[433434144] = 0;
  dword_140404A6C[433434165] = 0;
  dword_140404A6C[433434186] = 0;
  dword_140404A6C[433434207] = 0;
  dword_140404A6C[433434228] = 0;
  dword_140404A6C[433434249] = 0;
  dword_140404A6C[433434270] = 0;
  dword_140404A6C[433434291] = 0;
  dword_140404A6C[433434312] = 0;
  dword_140404A6C[433434333] = 0;
  dword_140404A6C[433434354] = 0;
  dword_140404A6C[433434375] = 0;
  dword_140404A6C[433434396] = 0;
  dword_140404A6C[433434417] = 0;
  dword_140404A6C[433434438] = 0;
  dword_140404A6C[433434459] = 0;
  dword_140404A6C[433434480] = 0;
  dword_140404A6C[433434501] = 0;
  dword_140404A6C[433434522] = 0;
  dword_140404A6C[433434543] = 0;
  dword_140404A6C[433434564] = 0;
  dword_140404A6C[433434585] = 0;
  dword_140404A6C[433434606] = 0;
  dword_140404A6C[433434627] = 0;
  dword_140404A6C[433434648] = 0;
  dword_140404A6C[433434669] = 0;
  dword_140404A6C[433434690] = 0;
  dword_140404A6C[433434711] = 0;
  dword_140404A6C[433434732] = 0;
  dword_140404A6C[433434753] = 0;
  dword_140404A6C[433434774] = 0;
  dword_140404A6C[433434795] = 0;
  dword_140404A6C[433434816] = 0;
  dword_140404A6C[433434837] = 0;
  dword_140404A6C[433434858] = 0;
  v61 = &dword_140404A6C[275753045];
  dword_140404A6C[433434879] = 0;
  v62 = &dword_140404A6C[132400639];
  dword_140404A6C[433434900] = 0;
  dword_140404A6C[433434921] = 0;
  dword_140404A6C[433434942] = 0;
  dword_140404A6C[433434963] = 0;
  dword_140404A6C[433434984] = 0;
  dword_140404A6C[433435005] = 0;
  dword_140404A6C[433435026] = 0;
  dword_140404A6C[433435047] = 0;
  dword_140404A6C[433435068] = 0;
  dword_140404A6C[433435089] = 0;
  dword_140404A6C[433435110] = 0;
  dword_140404A6C[433435131] = 0;
  dword_140404A6C[433435152] = 0;
  dword_140404A6C[433435173] = 0;
  dword_140404A6C[433435194] = 0;
  dword_140404A6C[433435215] = 0;
  dword_140404A6C[433435236] = 0;
  dword_140404A6C[433435257] = 0;
  dword_140404A6C[433435278] = 0;
  dword_140404A6C[433435299] = 0;
  dword_140404A6C[433435320] = 0;
  dword_140404A6C[433435341] = 0;
  dword_140404A6C[433435362] = 0;
  dword_140404A6C[433435383] = 0;
  dword_140404A6C[433435404] = 0;
  dword_140404A6C[433435425] = 0;
  dword_140404A6C[433435446] = 0;
  dword_140404A6C[433435467] = 0;
  dword_140404A6C[433435488] = 0;
  dword_140404A6C[433435509] = 0;
  dword_140404A6C[433435530] = 0;
  dword_140404A6C[433435551] = 0;
  dword_140404A6C[433435572] = 0;
  dword_140404A6C[433435593] = 0;
  dword_140404A6C[433435614] = 0;
  dword_140404A6C[433435635] = 0;
  dword_140404A6C[433435656] = 0;
  dword_140404A6C[433435677] = 0;
  dword_140404A6C[433435698] = 0;
  dword_140404A6C[433435719] = 0;
  dword_140404A6C[433435740] = 0;
  dword_140404A6C[433435761] = 0;
  dword_140404A6C[433435782] = 0;
  dword_140404A6C[433435803] = 0;
  dword_140404A6C[433435824] = 0;
  do
  {
    *v62 = -1;
    v62 += 383;
    *v61 = 0;
    v61 += 2570;
  }
  while ( (__int64)v62 < (__int64)&dword_140404A6C[132792831] );
  v63 = &dword_140404A6C[273377349];
  do
  {
    *v63 = 0;
    v63 += 290;
  }
  while ( (__int64)v63 < (__int64)&dword_140404A6C[275753029] );
  dword_140404A6C[273377349] = 1;
  v64 = &dword_140404A6C[254352108];
  dword_140404A6C[421506973] = 0;
  do
  {
    *(v64 - 9) = 0;
    *v64 = 0;
    v64[9] = 0;
    v64[18] = 0;
    v64[27] = 0;
    v64[36] = 0;
    v64[45] = 0;
    v64[54] = 0;
    v64[63] = 0;
    v64[72] = 0;
    v64[81] = 0;
    v64[90] = 0;
    v64[99] = 0;
    v64[108] = 0;
    v64[117] = 0;
    v64[126] = 0;
    v64[135] = 0;
    v64[144] = 0;
    v64[153] = 0;
    v64[162] = 0;
    v64[171] = 0;
    v64[180] = 0;
    v64[189] = 0;
    v64[198] = 0;
    v64[207] = 0;
    v64[216] = 0;
    v64[225] = 0;
    v64[234] = 0;
    v64[243] = 0;
    v64[252] = 0;
    v64[261] = 0;
    v64[270] = 0;
    v64[279] = 0;
    v64[288] = 0;
    v64[297] = 0;
    v64[306] = 0;
    v64[315] = 0;
    v64[324] = 0;
    v64[333] = 0;
    v64[342] = 0;
    v64[351] = 0;
    v64[360] = 0;
    v64[369] = 0;
    v64[378] = 0;
    v64[387] = 0;
    v64[396] = 0;
    v64[405] = 0;
    v64[414] = 0;
    v64[423] = 0;
    v64[432] = 0;
    v64[441] = 0;
    v64[450] = 0;
    v64[459] = 0;
    v64[468] = 0;
    v64[477] = 0;
    v64[486] = 0;
    v64[495] = 0;
    v64[504] = 0;
    v64[513] = 0;
    v64[522] = 0;
    v64[531] = 0;
    v64[540] = 0;
    v64[549] = 0;
    v64[558] = 0;
    v64 += 576;
  }
  while ( (__int64)v64 < (__int64)&dword_140404A6C[254388972] );
  dword_140404A6C[132792829] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[132792837]), 0, 0x1000u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[282485789]), 0, 0x400u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[280648157]), 0, 0x1000u);
  v65 = &dword_140404A6C[180001069];
  do
  {
    *v65 = 0;
    v65 += 34653;
  }
  while ( (__int64)v65 < (__int64)&dword_140404A6C[188872237] );
  dword_140404A6C[180001068] = 0;
  v66 = &dword_140404A6C[290382646];
  dword_140404A6C[438881242] = 0;
  dword_140404A6C[433435845] = 0;
  dword_140404A6C[431564581] = 0;
  dword_140404A6C[431564589] = 0;
  dword_140404A6C[431646510] = 0;
  *(_QWORD *)&dword_140404A6C[431744815] = 0;
  *(_QWORD *)&dword_140404A6C[432269105] = 0;
  dword_140404A6C[431138494] = 0;
  dword_140404A6C[431138493] = 0;
  dword_140404A6C[308307070] = 0;
  dword_140404A6C[308307069] = 0;
  do
  {
    *(_QWORD *)(v66 - 1) = 0;
    v66 += 39;
  }
  while ( (__int64)v66 < (__int64)&dword_140404A6C[291021622] );
  v67 = &dword_140404A6C[438887428];
  v68 = 257;
  v69 = &dword_140404A6C[438897501];
  do
  {
    *(v67 - 4) = 0;
    v70 = v67 + 32599;
    *v67 = 0;
    v71 = 1024;
    v67[10] = 0;
    v67[20] = 0;
    v67[30] = 0;
    v67[40] = 0;
    v67[50] = 0;
    v67[60] = 0;
    v67[70] = 0;
    *(v67 - 2) = -1;
    do
    {
      *v70 = 0;
      v70 += 4;
      --v71;
    }
    while ( v71 );
    *(_QWORD *)(v67 + 36695) = 0;
    v72 = v67 + 1105;
    v67[36697] = 0;
    v73 = 256;
    v67[46938] = 0;
    v67[46940] = 0;
    do
    {
      v72[2] = 0;
      *v72 = 0;
      v72 += 3;
      --v73;
    }
    while ( v73 );
    v74 = v67 + 82;
    v75 = 512;
    do
    {
      *v74 = 0;
      v74 += 2;
      --v75;
    }
    while ( v75 );
    v76 = v67 + 1874;
    v77 = 1024;
    do
    {
      *v76 = 0;
      *((_DWORD *)v76 - 1) = 0;
      v76[1] = 0;
      v76 = (_QWORD *)((char *)v76 + 20);
      --v77;
    }
    while ( v77 );
    v78 = v67 + 6995;
    v79 = 1024;
    do
    {
      *(_QWORD *)(v78 - 1) = 0;
      *(v78 - 2) = 0;
      v78 += 3;
      --v79;
    }
    while ( v79 );
    v80 = v69;
    v81 = 256;
    do
    {
      v80 += 88;
      *((_OWORD *)v80 - 24) = 0;
      *((_OWORD *)v80 - 23) = 0;
      *((_OWORD *)v80 - 22) = 0;
      *((_OWORD *)v80 - 21) = 0;
      *((_OWORD *)v80 - 20) = 0;
      *((_OWORD *)v80 - 19) = 0;
      *((_OWORD *)v80 - 18) = 0;
      *((_OWORD *)v80 - 17) = 0;
      *((_OWORD *)v80 - 16) = 0;
      *((_OWORD *)v80 - 15) = 0;
      *((_OWORD *)v80 - 14) = 0;
      *((_OWORD *)v80 - 13) = 0;
      *((_OWORD *)v80 - 12) = 0;
      *((_OWORD *)v80 - 11) = 0;
      *((_OWORD *)v80 - 10) = 0;
      *((_OWORD *)v80 - 9) = 0;
      *((_OWORD *)v80 - 8) = 0;
      *((_OWORD *)v80 - 7) = 0;
      *((_OWORD *)v80 - 6) = 0;
      *((_OWORD *)v80 - 5) = 0;
      *((_OWORD *)v80 - 4) = 0;
      *((_OWORD *)v80 - 3) = 0;
      --v81;
    }
    while ( v81 );
    v69 += 47224;
    v67 += 47224;
    --v68;
  }
  while ( v68 );
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[137297853]), 0, 0x4DC0000u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[450929525]), 0, 0x2E1E0u);
  v82 = &dword_140404A6C[421831850];
  dword_140404A6C[450929546] = -1;
  do
  {
    *v82 = 0;
    v82 += 4;
  }
  while ( (__int64)v82 < (__int64)&dword_140404A6C[421835946] );
  *(_QWORD *)&dword_140404A6C[421835946] = 0;
  dword_140404A6C[421846188] = 0;
  dword_140404A6C[19065872] = 0;
  if ( !dword_140404A6C[19065870] )
    *(_QWORD *)&dword_140404A6C[19065873] = 0;
  v83 = *(float *)&dword_140404A6C[283831482];
  dword_140404A6C[308307077] = 0;
  dword_140404A6C[308403478] = 0;
  dword_140404A6C[308499879] = 0;
  dword_140404A6C[308596280] = 0;
  dword_140404A6C[308692681] = 0;
  dword_140404A6C[308789082] = 0;
  dword_140404A6C[308885483] = 0;
  dword_140404A6C[308981884] = 0;
  v84 = sin(*(float *)&dword_140404A6C[283831482]);
  *(float *)&v85 = cos(*(float *)&v40) * v84;
  dword_140404A6C[284550403] = v85;
  dword_140404A6C[284550404] = cosf(v83);
  v86 = sin(*(float *)&v40);
  dword_140404A6C[284550406] = 0;
  *(float *)&v86 = v86 * v84;
  dword_140404A6C[284550405] = LODWORD(v86);
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v211 = 1065353216;
  v210 = 1065353216;
  v209 = 1065353216;
  v208 = 1065353216;
  v207 = 1;
  SR_DEBUG_STAGE("Generating level: prepare map geometry");
  sr_text_draw_recovered("Generating level...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  if ( !strcmp_sr((     char *)&dword_140404A6C[225391206], (     char *)&dword_140404A6C[283831313]) )
  {
    if ( dword_140404A6C[225391205] )
    {
      v93 = 0;
      v94 = &dword_140404A6C[83197431];
      v95 = 0;
      do
      {
        if ( *(v94 - 3074) )
        {
          v96 = v94;
          v97 = 512;
          do
          {
            if ( (*v96 & 0xE0000000) == 0x80000000 )
              *v96 &= 0xFF00FFFF;
            v96[2560] = 0;
            ++v96;
            --v97;
          }
          while ( v97 );
          for ( k = 0; k < 4; ++k )
          {
            if ( v95 <= 0x6C413B8 )
            {
              v99 = (int)dword_140404A6C[k + 83200503 + v93];
              dword_140404A6C[k + 83200503 + v93] = -1;
              if ( (unsigned int)v99 <= 0x3FF )
              {
                dword_140404A6C[8969 * v99 + 73991662] = -1;
                sub_1401941F0(0, v99);
                sub_1401941F0(3, v99);
                sub_1401941F0(5, v99);
              }
            }
          }
        }
        v95 += 27720LL;
        v94 += 6930;
        v93 += 6930;
      }
      while ( (__int64)v94 < (__int64)&dword_140404A6C[111582711] );
      v44 = &dword_140404A6C[71856253];
      goto LABEL_348;
    }
  }
  else
  {
    dword_140404A6C[225391205] = 0;
  }
  SR_DEBUG_STAGE("Generating level: load/build world data (0x056980)");
  sub_140056980();
  SR_DEBUG_LOG("World data generation returned");
  v91 = 0;
  do
  {
    v92 = *((_BYTE *)&dword_140404A6C[283831313] + v91);
    *((_BYTE *)&dword_140404A6C[225391206] + v91++) = v92;
  }
  while ( v92 );
  SR_DEBUG_STAGE("Generating level: prepare world render resources (0x124320)");
  sub_140124320();
  SR_DEBUG_LOG("World render resource setup returned");
LABEL_348:
  SR_DEBUG_STAGE("Generating level: finalize render state (0x14C390)");
  sub_14014C390();
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v211 = 1065353216;
  v210 = 1065353216;
  v209 = 1065353216;
  v208 = 1065353216;
  v207 = 1;
  SR_DEBUG_STAGE("Generating game: spawn humans, vehicles, items and joints");
  sr_text_draw_recovered("Generating game...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  v104 = sub_140237448(nullptr);
  srand(v104);
  if ( dword_140404A6C[283831447] == 1 )
  {
    *(float *)&dword_140404A6C[284024381] = (float)(int)dword_140404A6C[179992048];
    *(float *)&dword_140404A6C[284024382] = (float)(int)dword_140404A6C[179992049];
    *(float *)&dword_140404A6C[284024383] = (float)(int)dword_140404A6C[179992050];
  }
  if ( !dword_140404A6C[19065870] )
  {
    dword_140404A6C[284024392] = 0;
    *(float *)&dword_140404A6C[284024388] = *(float *)&dword_140404A6C[179992855] + 32.0;
    *(float *)&dword_140404A6C[284024389] = *(float *)&dword_140404A6C[179992856] + 16.0;
    dword_140404A6C[284024390] = dword_140404A6C[179992857];
    dword_140404A6C[284024391] = -1077342245;
  }
  v105 = dword_140404A6C[456202453];
  /* Debugging extension: a single local human on the shared test arena.
     Native city Practice spawners below populate distant items and trains. */
  if (v105 && !dword_140404A6C[283831312] &&
      !strcmp((char *)&dword_140404A6C[283831313], "debugtest"))
  {
    float sr_test_position[3] = {1024.0f, 25.25f, 1024.0f};
    float sr_test_rotation[9] = {1,0,0, 0,1,0, 0,0,1};
    dword_140404A6C[71856253] = 1;
    dword_140404A6C[71856286] = 0;
    int sr_test_human = sub_140053840(sr_test_position, sr_test_rotation, 0);
    if (sr_test_human < 0 || sr_test_human >= 256)
    {
      dword_140404A6C[71856253] = 0;
      SR_DEBUG_LOG("Test arena: player creation failed (%d)", sr_test_human);
      return 0;
    }
    dword_140404A6C[71856292] = sr_test_human;
    dword_140404A6C[71859821] = 1;
    dword_140404A6C[71859822] = 1;
    dword_140404A6C[71859823] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658445] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658446] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658447] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658449] = dword_140404A6C[71859826];
    memcpy(&dword_140404A6C[179992855], sr_test_position, sizeof(sr_test_position));
    /* Use the native Practice camera formula (spawn + 32 X, + 16 Y, spawn Z,
       yaw -pi/2) instead of the earlier hardcoded eye height. The old 27.0 put
       the eye 3 m above a 24 m floor and let physics drop it to 24.7, i.e. on
       the floor plane, which is not a view the original ever produced. */
    *(float *)&dword_140404A6C[284024388] = sr_test_position[0] + 32.0f;
    *(float *)&dword_140404A6C[284024389] = sr_test_position[1] + 16.0f;
    *(float *)&dword_140404A6C[284024390] = sr_test_position[2];
    *(float *)&dword_140404A6C[284024391] = -1.5707964f;
    *(float *)&dword_140404A6C[284024392] = 0.0f;
    *(float *)&dword_140404A6C[284024514] = 1.0f;
    v139 = v105;
    SR_DEBUG_LOG("Test arena: one player at (1024, 25.25, 1024), solid floor y=24, camera (1056, 41.25, 1024)");
    goto SR_TEST_ARENA_FINALIZE;
  }
  if ( dword_140404A6C[456202453] )
  {
    v106 = dword_140404A6C[283831312];
    if ( dword_140404A6C[283831312] == 1 )
    {
      (*(int64_t *)(void *)sr_reset_spawn_position) = 0x41D00000430A0000LL;
      LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 1124728832;
      dword_140404A6C[71856253] = 1;
      dword_140404A6C[71856286] = 0;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, sr_export_float_lane_container(1078530011));
      dword_140404A6C[71856292] = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_spawn_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 0);
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      *(_QWORD *)&dword_140404A6C[71856339] = 0;
      sr_reset_spawn_rotation[8] = 1065353216;
      dword_140404A6C[7166 * dword_140404A6C[71856292] + 280651341] = 1078530011;
      v107 = sr_CreateItem(3, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v107, -1, dword_140404A6C[71856292], 0);
      v108 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v108, -1, dword_140404A6C[71856292], 1);
      v109 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v109, -1, dword_140404A6C[71856292], 3);
      v110 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v110, -1, dword_140404A6C[71856292], 3);
      LODWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1124859904;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sr_CreateVehicle(0, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 1u);
      v105 = dword_140404A6C[456202453];
      v106 = dword_140404A6C[283831312];
    }
    if ( v105 && v106 == 4 )
    {
      v111 = 0;
      if ( (int)dword_140404A6C[179992861] > 0 )
      {
        v112 = &dword_140404A6C[179992862];
        do
        {
          v112[2] = sr_CreateVehicle(
                      *v112,
                      (float *)&dword_140404A6C[16 * (__int64)v111 + 179992866],
                      nullptr,
                      &dword_140404A6C[16 * (__int64)v111 + 179992869],
                      v112[1]);
          v112 += 16;
          ++v111;
        }
        while ( v111 < (int)dword_140404A6C[179992861] );
      }
      v113 = 0;
      v114 = &dword_140404A6C[71859846];
      do
      {
        if ( *(v114 - 3593) )
        {
          if ( *(v114 - 3) )
          {
            v115 = *(v114 - 1);
            *(_QWORD *)&v116 = v114[1];
            LODWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = *(v114 - 2);
            v117 = *v114;
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = v115;
            LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = v117;
            (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
            sr_reset_spawn_rotation[8] = 1065353216;
            (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
            sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, v116);
            v118 = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_spawn_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), v113);
            *(v114 - 3554) = v118;
            if ( v118 != -1 )
            {
              v119 = 7166LL * v118;
              dword_140404A6C[v119 + 280651306] = *(v114 - 3578);
              dword_140404A6C[v119 + 280651341] = v114[1];
              sub_140117020(v113);
              v120 = v114[2];
              if ( v120 != -1 && (int)dword_140404A6C[179992861] > 0 )
              {
                v121 = &dword_140404A6C[179992864];
                v122 = dword_140404A6C[179992861];
                do
                {
                  if ( v120 == v121[1] )
                  {
                    v123 = 7166LL * (int)*(v114 - 3554);
                    dword_140404A6C[v123 + 280651313] = *v121;
                    dword_140404A6C[v123 + 280651314] = v114[3];
                  }
                  v121 += 16;
                  --v122;
                }
                while ( v122 );
              }
            }
          }
        }
        ++v113;
        v114 += 3597;
      }
      while ( v113 < 256 );
      v124 = 0;
      v125 = &dword_140404A6C[283831510];
      do
      {
        v126 = (int)*v125;
        if ( (_DWORD)v126 != -1 )
        {
          *v125 = -1;
          if ( dword_140404A6C[3597 * v126 + 71856253] )
            sub_1400F45A0(v124, v126);
        }
        ++v124;
        v125 += 5873;
      }
      while ( v124 < 6 );
      v127 = dword_140404A6C[456202453];
      v128 = dword_140404A6C[283831474];
      if ( dword_140404A6C[456202453] )
      {
        v129 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v129) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v129) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v129) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v129) = 1;
      }
      dword_140404A6C[283831509] = 1;
      if ( v127 )
      {
        v130 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v130) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v130) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v130) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v130) = 1;
      }
      dword_140404A6C[283837382] = 1;
      if ( v127 )
      {
        v131 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v131) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v131) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v131) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v131) = 1;
      }
      dword_140404A6C[283843255] = 1;
      if ( v127 )
      {
        v132 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v132) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v132) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v132) = 3;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v132) = 1;
      }
      dword_140404A6C[283849128] = 1;
      if ( v127 )
      {
        v133 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v133) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v133) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v133) = 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v133) = 1;
      }
      dword_140404A6C[283855001] = 1;
      if ( v127 )
      {
        v134 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v134) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v134) = v128;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v134) = 5;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v134) = 1;
      }
      dword_140404A6C[283860874] = 1;
    }
  }
  LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 0;
  v135 = "test2";
  v136 = 0;
  v137 = &dword_140404A6C[283831313];
  while ( 1 )
  {
    v138 = *((_BYTE *)&dword_140404A6C[283831313] + v136++);
    if ( v138 != sr_mem_140274da0[v136 - 1] )
      break;
    if ( v136 == 6 )
    {
      sub_14002A9A0();
      dword_140404A6C[179992857] = dword_140404A6C[112631677];
      *(float *)&dword_140404A6C[179992855] = *(float *)&dword_140404A6C[112631675] + 16.0;
      *(float *)&dword_140404A6C[179992856] = *(float *)&dword_140404A6C[112631676] + 1.0;
      break;
    }
  }
  sub_140188B80(v136, (__int64)v137, (__int64)v135);
  v139 = dword_140404A6C[456202453];
  if ( dword_140404A6C[456202453] )
  {
    if ( !dword_140404A6C[283831312] )
    {
      v140 = 0;
      v141 = 0;
      do
      {
        HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
        v142 = &dword_140404A6C[71859816];
        *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = (float)((float)v140 + (float)v140) + 280.0;
        if ( v140 )
        {
          HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1115160576;
          v143 = 62.0;
          v144 = (int *)&v142[v141];
          *(v144 - 3563) = 1;
          v145 = (float)((float)(v140 & 3) + (float)(v140 & 3)) + 1520.0;
          v146 = (float)((float)((unsigned int)v140 >> 2) + (float)((unsigned int)v140 >> 2)) + 1508.0;
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = v146;
          *(v144 - 669) = 0;
          v144[5] = 2;
          *v144 = v140 & 1;
          strcpy((char *)v144 - 14248, "test");
          v144[6] = 1;
        }
        else
        {
          v145 = 1528.0;
          v144 = (int *)&v142[v141];
          v143 = 62.0;
          (*(int64_t *)(void *)sr_reset_spawn_position) = 0x4278000044BC8000LL;
          v146 = 1508.0;
          *(v144 - 3563) = 1;
        }
        v147 = 0;
        *(v144 - 3530) = v140 != 0;
        while ( 1 )
        {
          v148 = *((_BYTE *)&dword_140404A6C[283831313] + v147++);
          if ( v148 != sr_mem_140274da0[v147 - 1] )
            break;
          if ( v147 == 6 )
          {
            v143 = 25.25;
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1103757312;
            v145 = (float)((float)(v140 & 3) + (float)(v140 & 3)) + 1120.0;
            v146 = (float)((float)((unsigned int)v140 >> 2) + (float)((unsigned int)v140 >> 2)) + 1088.0;
            *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = v146;
            break;
          }
        }
        v149 = 0;
        while ( 1 )
        {
          v150 = *((_BYTE *)&dword_140404A6C[283831313] + v149++);
          if ( v150 != sr_mem_140274dfc[v149 - 1] )
            break;
          if ( v149 == 5 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            v143 = 26.0;
            break;
          }
        }
        v151 = 0;
        while ( 1 )
        {
          v152 = *((_BYTE *)&dword_140404A6C[283831313] + v151++);
          if ( v152 != *((_BYTE *)&dword_140274E04 + v151 - 1) )
            break;
          if ( v151 == 7 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            v143 = 26.0;
            break;
          }
        }
        v153 = 0;
        while ( 1 )
        {
          v154 = *((_BYTE *)&dword_140404A6C[283831313] + v153++);
          if ( v154 != sr_mem_140274950[v153 - 1] )
            break;
          if ( v153 == 5 )
          {
            HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
            v143 = 26.0;
            break;
          }
        }
        (*(int64_t *)(void *)sr_reset_player_position) = (*(int64_t *)(void *)sr_reset_spawn_position);
        v155 = v145 - 48.0;
        *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v155;
        (*(float *)(void *)(sr_reset_player_position+2)) = v155;
        if ( v140 )
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = v146 + 32.0;
        sr_reset_spawn_rotation[8] = 1065353216;
        (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
        (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
        v156 = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_player_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), v140);
        v157 = v156;
        *(v144 - 3524) = v156;
        v144[5] = 1;
        if ( v140 )
          v144[5] = 1;
        v144[6] = 1;
        v158 = 0;
        v159 = 1;
        if ( v140 != 1 )
          v158 = (v140 != 0) + 1;
        v144[7] = v158;
        if ( v140 )
        {
          v160 = (v140 - 1) % 6;
          v159 = dword_1402B2980[v160];
          v158 = dword_1402B29A0[v160];
          v144[6] = v159;
          v144[7] = v158;
        }
        v161 = v144[10];
        v162 = 7166 * v157;
        dword_140404A6C[v162 + 280658445] = 1;
        dword_140404A6C[v162 + 280658446] = v159;
        dword_140404A6C[v162 + 280658447] = v158;
        dword_140404A6C[v162 + 280658449] = v161;
        if ( v140 )
        {
          v196 = dword_140404A6C[280651440];
          v197 = dword_140404A6C[280651441];
          *((_QWORD *)v144 - 335) = 0;
          *(v144 - 668) = 1133281280;
          dword_140404A6C[v141 + 71859149] = 1104150528;
          dword_140404A6C[8 * *(v144 - 669) + 71859150 + v141] = 1124073472;
          v198 = v141 * 4 + 32LL * *(v144 - 669);
          *(unsigned int *)((char *)&dword_140404A6C[71859148] + v198) = v196;
          *(unsigned int *)((char *)&dword_140404A6C[71859150] + v198) = dword_140404A6C[280651442];
          *(unsigned int *)((char *)&dword_140404A6C[71859149] + v198) = v197;
          ++*(v144 - 669);
        }
        else
        {
          sr_reset_spawn_rotation[8] = 1065353216;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          v163 = sr_CreateItem(3, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v163, -1, *(v144 - 3524), 0);
          v164 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v164, -1, *(v144 - 3524), 1);
          v165 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v165, -1, *(v144 - 3524), 3);
          v166 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v166, -1, *(v144 - 3524), 3);
          v167 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v167, -1, *(v144 - 3524), 4);
          v168 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v168, -1, *(v144 - 3524), 4);
          v169 = sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v169, -1, *(v144 - 3524), 5);
          v170 = sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400E35D0(v170, -1, *(v144 - 3524), 5);
          sr_reset_spawn_rotation[8] = 1065353216;
          v171 = v155 - 2.0;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = v146 + 10.0;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v155 - 2.0;
          sub_140061950();
          v172 = v146 + 2.0;
          dword_140404A6C[177167561] = sr_CreateVehicle(6, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 3u);
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = v172;
          sr_CreateItem(41, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = v172;
          (*(float *)(void *)(sr_reset_player_position+2)) = v155 - 2.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = v143 + 0.25;
          v173 = (int)sr_CreateItem(39, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          v174 = &dword_140404A6C[275753045];
          v175 = 0;
          v176 = 0;
          while ( *v174 )
          {
            ++v175;
            ++v176;
            v174 += 2570;
            if ( (__int64)v174 >= (__int64)&dword_140404A6C[278384725] )
            {
              v175 = -1;
              v176 = -1;
              goto LABEL_430;
            }
          }
          if ( v175 != -1 )
          {
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[2570 * v175 + 275753045]), 0, 0x2828u);
            v177 = 2570 * v176;
            dword_140404A6C[v177 + 275753045] = 1;
            dword_140404A6C[v177 + 275753046] = 20000;
          }
LABEL_430:
          v178 = 2570 * v176;
          dword_140404A6C[1760 * v173 + 278846098] = v175;
          v179 = (int)dword_140404A6C[2570 * v176 + 275754072];
          if ( (int)v179 < 256 )
          {
            dword_140404A6C[6 * v179 + 275754073 + v178] = 0;
            v180 = "SNAKE.EXE";
            v181 = &dword_140404A6C[2570 * v175 + 275754074 + 6 * dword_140404A6C[v178 + 275754072]];
            do
            {
              v182 = *v180++;
              *(_BYTE *)v181 = v182;
              v181 = (unsigned int *)((char *)v181 + 1);
            }
            while ( v182 );
            dword_140404A6C[6 * (int)dword_140404A6C[v178 + 275754072]++ + 275754078 + v178] = 0;
          }
          v183 = sr_CreateItem(34, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          strcpy(
            v218,
            "TEST TEST TEST\n"
            "NEXT LINE\n"
            "LOTS OF STUFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF!\n"
            "LOTS OF STUFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF!\n"
            "\n"
            "END\n"
            "\n"
            "Not the end\n"
            "More stuffffff!");
          sub_1400584B0(v183, (     __m128i *)v218);
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 1.0;
          v184 = sr_CreateItem(29, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          sub_1400584B0(v184, (     __m128i *)&dword_140404A6C[283785646]);
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v155;
          sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 3.0;
          sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 4.0;
          v185 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 5.0;
          dword_140404A6C[1760 * v185 + 278846111] = 1;
          v186 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 6.0;
          dword_140404A6C[1760 * v186 + 278846111] = 1;
          v187 = sr_CreateItem(26, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 7.0;
          dword_140404A6C[1760 * v187 + 278846111] = 1;
          v188 = sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 8.0;
          dword_140404A6C[1760 * v188 + 278845981] = 1111;
          v189 = 1760LL * (int)sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 9.0;
          dword_140404A6C[v189 + 278845981] = 2222;
          dword_140404A6C[v189 + 278846051] = 1;
          v190 = sr_CreateItem(25, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 10.0;
          dword_140404A6C[1760 * v190 + 278845981] = 3333;
          v191 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 11.0;
          dword_140404A6C[v191 + 278846063] = 100671489;
          dword_140404A6C[v191 + 278846062] = 9;
          v192 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 12.0;
          dword_140404A6C[v192 + 278846063] = 100671489;
          dword_140404A6C[v192 + 278846062] = 9;
          v193 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 13.0;
          dword_140404A6C[v193 + 278846063] = 100671489;
          dword_140404A6C[v193 + 278846062] = 9;
          v194 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 14.0;
          dword_140404A6C[v194 + 278846063] = 100671489;
          dword_140404A6C[v194 + 278846062] = 9;
          v195 = 1760LL * (int)sr_CreateItem(18, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 15.0;
          dword_140404A6C[v195 + 278846063] = 100671489;
          dword_140404A6C[v195 + 278846062] = 9;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 16.0;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 17.0;
          sr_CreateItem(13, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 19.0;
          sr_CreateItem(15, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = (float)(int)dword_140404A6C[179992048] + 6.0;
          (*(float *)(void *)(sr_reset_player_position+2)) = (float)(int)dword_140404A6C[179992050] - 8.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = (float)(int)dword_140404A6C[179992049] + 8.0;
          sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, sr_export_float_lane_container(3205942244LL));
          sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), sr_export_float_lane_container(1041681380));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 21.0;
          sr_reset_spawn_rotation[8] = 1065353216;
          (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
          (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
          sr_CreateItem(35, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 22.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 23.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 24.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 25.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 26.0;
          sr_CreateItem(17, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 28.0;
          sr_CreateItem(21, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 29.0;
          sr_CreateItem(9, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 30.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 31.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 32.0;
          sr_CreateItem(10, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 33.0;
          sr_CreateItem(14, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)(sr_reset_spawn_position+2)) = v171 + 35.0;
        }
        ++v140;
        v141 += 3597;
      }
      while ( v140 < 2 );
      if ( (int)dword_140404A6C[225641186] > 0 )
      {
        v199 = 0;
        v200 = &dword_140404A6C[225641203];
        do
        {
          if ( *v200 == 4 )
            break;
          ++v199;
          v200 += 14019;
        }
        while ( v199 < (int)dword_140404A6C[225641186] );
        if ( dword_140404A6C[283831312] == 2 )
          sub_14012E620(v199, 24);
      }
      sub_14012E960(128);
      v139 = dword_140404A6C[456202453];
      v201 = dword_140404A6C[283831474];
      if ( dword_140404A6C[456202453] )
      {
        v202 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v202) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v202) = v201;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v202) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v202) = 1;
      }
      dword_140404A6C[283831509] = 1;
      if ( v139 )
      {
        v203 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v203) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v203) = v201;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v203) = 1;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v203) = 1;
      }
      dword_140404A6C[283837382] = 1;
      if ( v139 )
      {
        v204 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v204) = 10;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v204) = v201;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v204) = 2;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v204) = 1;
      }
      dword_140404A6C[283843255] = 1;
    }
SR_TEST_ARENA_FINALIZE:
    if ( v139 )
    {
      sub_14008C030();
      sub_14008C310();
      sub_140052090();
      do
      {
        if ( *v44 )
        {
          sub_140051DC0(v9);
          sub_140051F50(v9);
        }
        ++v9;
        v44 += 3597;
      }
      while ( v9 < 256 );
    }
  }
  SR_DEBUG_CHECK_BODIES(&dword_140404A6C[18215709], 8192, "after game spawning");
  SR_DEBUG_STAGE("Generating game finished: returning to the client loop");
  return 0; /* legacy result ignored; native returns void */
}
#undef v206
#undef v207
#undef v208
#undef v209
#undef v210
#undef v211
#undef v216
#undef v217
#undef v218
#undef v222

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014012CEB0) ----------------------------------------------------
__int64            sub_14012CEB0(int a1, unsigned int a2, signed int a3, int a4, int a5, float a6)
{
  __int64 v6; // r15
  __int64 v9; // rbx
  int v11; // ecx
  int v12; // edx
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  __int64 v24; // rax
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm7_4
  __int64 v32; // r14
  unsigned int v33; // xmm7_4
  unsigned int v34; // xmm1_4
  unsigned int v35; // eax
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rdi
  char v39; // al
  unsigned int *v40; // rcx
  unsigned int v41; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14012CEB0[96];
#define v43 (*(__int64 (*))(void *)(sr_frame_14012CEB0 + 0)) /* [rsp+0h] */
#define v44 (*(unsigned int (*))(void *)(sr_frame_14012CEB0 + 48)) /* [rsp+30h] */
#define v45 (*(float (*))(void *)(sr_frame_14012CEB0 + 52)) /* [rsp+34h] */
#define v46 (*(float (*))(void *)(sr_frame_14012CEB0 + 56)) /* [rsp+38h] */
#define v47 (*(float (*)[4])(void *)(sr_frame_14012CEB0 + 64)) /* [rsp+40h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14012CEB0 + 80)) /* [rsp+50h] */

  v6 = a1;
  v9 = 396LL * a3;
  v11 = 0;
  v12 = dword_140404A6C[v9 + 225426061];
  v13 = *(float *)&dword_140404A6C[v9 + 225426175];
  v14 = *(float *)&dword_140404A6C[v9 + 225426176];
  v15 = *(float *)&dword_140404A6C[v9 + 225426174];
  v16 = (int)dword_140404A6C[v9 + 225426057];
  if ( (v12 >> 1) - a5 - 1 >= 0 )
    v11 = ((int)dword_140404A6C[v9 + 225426061] >> 1) - a5 - 1;
  v17 = v12 - 1;
  if ( v11 <= v12 - 1 )
    v17 = v11;
  if ( a4 )
  {
    v15 = -v15;
    v13 = -v13;
    v14 = -v14;
    v24 = v9 * 4 + 28LL * v17;
    v22 = *(float *)((char *)&dword_140404A6C[225426063] + v24);
    v23 = *(float *)((char *)&dword_140404A6C[225426065] + v24);
    v19 = *(float *)((char *)&dword_140404A6C[225426066] + v24);
    v20 = *(float *)((char *)&dword_140404A6C[225426067] + v24);
    v21 = *(float *)((char *)&dword_140404A6C[225426068] + v24);
  }
  else
  {
    v18 = v9 * 4 + 28LL * (v12 - v17);
    v19 = *(float *)((char *)&dword_140404A6C[225426056] + v18);
    v20 = *(float *)((char *)&dword_140404A6C[225426057] + v18);
    v21 = *(float *)((char *)&dword_140404A6C[225426058] + v18);
    v22 = *(float *)((char *)&dword_140404A6C[225426059] + v18);
    v23 = *(float *)((char *)&dword_140404A6C[225426061] + v18);
  }
  v25 = -1.5707964;
  v26 = a6 * fsqrt((float)((float)(v23 - v21) * (float)(v23 - v21)) + (float)((float)(v22 - v19) * (float)(v22 - v19)));
  if ( !dword_140404A6C[v9 + 225426058] )
    v25 = -3.1415927;
  if ( !a4 )
    v25 = v25 + 3.14159265359;
  v27 = (float)(v13 * v26) + v20;
  v28 = (float)(v15 * v26) + v19;
  v29 = *(float *)&dword_140404A6C[34 * dword_140404A6C[v9 + 225426056] + 225391234];
  v30 = (float)(v14 * v26) + v21;
  v44 = LODWORD(v28);
  v46 = v30;
  if ( v27 < v29 )
    v27 = v29;
  if ( v27 < *(float *)&dword_140404A6C[34 * v16 + 225391234] )
    v27 = *(float *)&dword_140404A6C[34 * v16 + 225391234];
  v45 = v27 + 2.0;
  v47[0] = v28 - (float)(*(float *)&dword_1402F6188 * 128.0);
  v47[1] = (float)(v27 + 2.0) - (float)(*(float *)&dword_1402F618C * 128.0);
  v47[2] = v30 - (float)(*(float *)&dword_1402F6190 * 128.0);
  if ( (unsigned int)sub_1400DC050((float *)&v44, v47, 0) )
    v31 = *(float *)&dword_140404A6C[73006982];
  else
    v31 = v45;
  v32 = 383LL * (int)dword_140404A6C[132792829];
  *(float *)&v33 = v31 + (float)(0.375 - *(float *)&dword_140404A6C[24944 * v6 + 346731821]);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v32 + 132400638]), 0, 0x5F8u);
  v34 = LODWORD(v46);
  v35 = dword_140404A6C[v9 + 225426059];
  dword_140404A6C[v32 + 132400641] = v44;
  dword_140404A6C[v32 + 132400643] = v34;
  dword_140404A6C[v32 + 132400642] = v33;
  dword_140404A6C[v32 + 132400637] = v6;
  *(_QWORD *)&dword_140404A6C[v32 + 132400638] = -1;
  *(float *)&dword_140404A6C[v32 + 132400647] = v25;
  dword_140404A6C[v32 + 132401011] = a2;
  dword_140404A6C[v32 + 132400659] = 1080033280;
  dword_140404A6C[v32 + 132400660] = -1090519040;
  dword_140404A6C[v32 + 132400661] = 1077936128;
  dword_140404A6C[v32 + 132400668] = 1;
  if ( a4 )
    v36 = v35 - a5 - 1;
  else
    v36 = a5 + v35;
  dword_140404A6C[v32 + 132400996] = v36;
  dword_140404A6C[v32 + 132400997] = v36;
  dword_140404A6C[v32 + 132400993] = a3;
  dword_140404A6C[v32 + 132400994] = a4;
  dword_140404A6C[v32 + 132400995] = -1;
  dword_140404A6C[v32 + 132400999] = 0;
  v37 = rand() % (signed int)dword_140404A6C[225426046];
  v38 = 383LL * (int)dword_140404A6C[132792829];
  v39 = rand();
  sub_140008E40(dword_140404A6C[132792829], dword_140404A6C[v38 + 132400993], a4, v37, v39 & 1);
  v40 = &dword_140404A6C[v38 + 132400648];
  *(_QWORD *)v40 = 1065353216;
  *((_QWORD *)v40 + 1) = 0;
  *((_QWORD *)v40 + 2) = 1065353216;
  *((_QWORD *)v40 + 3) = 0;
  v40[8] = 1065353216;
  sub_14007B2A0(
    (__int64)&dword_140404A6C[v38 + 132400648],
    (float *)&dword_140404A6C[v38 + 132400651],
    v25 + 1.570796326795);
  v41 = dword_140404A6C[132792829];
  ++dword_140404A6C[dword_140404A6C[132792829] + 132792837];
  dword_140404A6C[132792829] = v41 + 1;
  return (unsigned int)v41; /* native pre-increment spawn index */
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
