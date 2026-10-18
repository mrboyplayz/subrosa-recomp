#include "shared_client.h"

//----- (0000000140127910) ----------------------------------------------------
__int64            sr_ResetGame(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int16 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned int *v13;
  __int64 v14;
  unsigned int *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int *v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int *v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int *v27;
  signed int v28;
  _DWORD *v29;
  unsigned int v30;
  unsigned int *v31;
  int j;
  int v33;
  int v34;
  float v35;
  int v36;
  unsigned int *v37;
  unsigned int v38;
  unsigned __int8 v39;
  unsigned int v40;
  unsigned int *v41;
  unsigned int *v42;
  int v43;
  unsigned int *v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int *v56;
  unsigned int *v57;
  unsigned int *v58;
  unsigned int *v59;
  unsigned int *v60;
  unsigned int *v61;
  unsigned int *v62;
  unsigned int *v63;
  unsigned int *v64;
  unsigned int *v65;
  unsigned int *v66;
  unsigned int *v67;
  __int64 v68;
  unsigned int *v69;
  _DWORD *v70;
  __int64 v71;
  _DWORD *v72;
  __int64 v73;
  _DWORD *v74;
  __int64 v75;
  _QWORD *v76;
  __int64 v77;
  unsigned int *v78;
  __int64 v79;
  unsigned int *v80;
  __int64 v81;
  unsigned int *v82;
  float v83;
  double v84;
  unsigned int v85;
  double v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char v92;
  __int64 v93;
  unsigned int *v94;
  unsigned __int64 v95;
  unsigned int *v96;
  __int64 v97;
  __int64 k;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  signed int v107;
  signed int v108;
  signed int v109;
  signed int v110;
  int v111;
  unsigned int *v112;
  int v113;
  unsigned int *v114;
  int v115;
  double v116;
  unsigned int v117;
  signed int v118;
  __int64 v119;
  unsigned int v120;
  unsigned int *v121;
  __int64 v122;
  __int64 v123;
  signed int v124;
  unsigned int *v125;
  __int64 v126;
  unsigned int v127;
  unsigned int v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
       char *v135;
  __int64 v136;
  unsigned int *v137;
  char v138;
  unsigned int v139;
  int v140;
  __int64 v141;
  unsigned int *v142;
  float v143;
  int *v144;
  float v145;
  float v146;
  __int64 v147;
  char v148;
  __int64 v149;
  char v150;
  __int64 v151;
  char v152;
  __int64 v153;
  char v154;
  float v155;
  int v156;
  __int64 v157;
  int v158;
  int v159;
  __int64 v160;
  unsigned int v161;
  __int64 v162;
  signed int v163;
  signed int v164;
  signed int v165;
  signed int v166;
  signed int v167;
  signed int v168;
  signed int v169;
  signed int v170;
  float v171;
  float v172;
  __int64 v173;
  unsigned int *v174;
  unsigned int v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
       char *v180;
  unsigned int *v181;
  char v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  __int64 v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned int v196;
  unsigned int v197;
  __int64 v198;
  signed int v199;
  unsigned int *v200;
  unsigned int v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
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
      game_type, game_connected,
      (char *)(unsigned int *)&g_183EBFAB0);
  if ( !replay_active && (int)g_144CBFAA8 > 0 && (int)replay_length > 0 )
  {
    v3 = 1;
    crt_sprintf(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", 1);
    for ( i = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb"); i; i = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "rb") )
    {
      if ( v3 >= 1000 )
        break;
      crt_fclose(i);
      crt_sprintf(&(*(__int128 *)(void *)sr_reset_spawn_rotation), "replay%03d.srp", ++v3);
    }
    v5 = crt_fopen((char *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), "wb");
    v6 = v5;
    if ( v5 )
    {
      v216 = 1;
      crt_fread((__int64)&v216, 4, 1, v5);
      v217[0] = dword_1402B26C8;
      crt_fread((__int64)v217, 4, 1, v6);
      crt_fread((__int64)&replay_length, 4, 1, v6);
      crt_fread(*(__int64 *)&g_144CBFAB8, 1, (int)replay_length, v6);
      crt_fclose(v6);
    }
    --g_144CBFAA8;
  }
  v7 = game_type;
  g_1AD04B21C = game_type;
  if ( !game_connected )
    goto LABEL_19;
  if ( game_type == 7 )
  {
    strcpy(
      (char *)(unsigned int *)&g_183EBFAB0,
      (     char *)&dword_140404A6C[16 * (__int64)(int)g_183F7A610 + 284022506]);
    v7 = game_type;
  }
  else
  {
    if ( ((game_type - 4) & 0xFFFFFFFB) != 0 )
    {
      if ( ((game_type - 3) & 0xFFFFFFFC) != 0 || game_type == 4 )
        goto LABEL_19;
      *(unsigned int *)&g_183EBFAB0 = 1853190002;
      v8 = 100;
    }
    else
    {
      *(unsigned int *)&g_183EBFAB0 = *(_DWORD *)"test2";
      v8 = *(_WORD *)"2";
    }
    LOWORD(g_183EBFAB4) = v8;
  }
LABEL_19:
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *((unsigned __int8 *)(unsigned int *)&g_183EBFAB0 + v10++);
    v12 = (_BYTE)v11 == *((_BYTE *)&dword_140274DA8 + v10 - 1);
    if ( (_BYTE)v11 != *((_BYTE *)&dword_140274DA8 + v10 - 1) )
      break;
    if ( v10 == 6 )
    {
      v12 = (_BYTE)v11 == 0;
      break;
    }
  }
  g_183F7CB60 = v12;
  if ( (_DWORD)v7 == 3 )
    g_183EBFCB0 = g_183F7A5B4 != 0;
  g_183F7CBC0 = xmmword_140279820;
  g_1AD04B214 = -1;
  g_183F7CBD0 = 1113325568;
  g_183F7CBD4 = 1152958464;
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
  sub_14007BB00();
  v211 = 1065353216;
  v210 = 1065353216;
  v209 = 1065353216;
  v208 = 1065353216;
  v207 = 1;
  sr_text_draw_recovered("Generating...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  v13 = &g_1A6F9E144;
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
  g_15104AE60 = 0;
  v15 = &g_140544AB4;
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
  while ( (__int64)v15 < (__int64)&g_144950AB4 );
  v16 = game_type;
  if ( game_type == 4
    || (int)game_type <= 1
    || (v17 = 1, (int)game_type >= 8) )
  {
    v17 = 0;
  }
  if ( replay_active )
    v17 = 0;
  g_18329CC24 = v17;
  v18 = &g_192E8F66C;
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
  while ( (__int64)v18 < (__int64)&g_192E98E6C );
  v19 = game_connected;
  g_183E93544 = 1;
  if ( game_connected )
  {
    if ( ((v16 - 2) & 0xFFFFFFFA) == 0 && v16 != 6 )
    {
      sub_14012C480();
      sub_140132B00();
      v19 = game_connected;
      v16 = game_type;
    }
    if ( v19 )
    {
      v20 = ++g_183EBFCC4;
      if ( v16 == 7 )
      {
        if ( v20 <= 5 )
          goto LABEL_157;
        v21 = g_183F7A5FC;
        v22 = &g_151622454;
        *(_QWORD *)&g_183F7AE14 = 0;
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
        while ( (__int64)v22 < (__int64)&g_1519A5854 );
        goto LABEL_156;
      }
      if ( v16 == 3 && g_183EBFCB0 == 1 && v20 > 5 )
      {
        v23 = g_183F7A5B0;
        v24 = &g_151620CEC;
        g_19021F0C4 = 1120403456;
        g_19021F0CC = 1000;
        g_19021F0C0 = 100;
        g_19021F0DC = 1120403456;
        g_19021F0E4 = 1000;
        g_19021F0D8 = 100;
        g_19021F0F4 = 1120403456;
        g_19021F0FC = 1000;
        g_19021F0F0 = 100;
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
        while ( (__int64)v24 < (__int64)&g_1519A40EC );
LABEL_156:
        g_183EBFCC4 = 1;
      }
    }
  }
LABEL_157:
  game_state = 1;
  *(_QWORD *)&g_183EBFCD4 = 0;
  if ( v16 == 3 )
  {
    g_183EBFCDC = 7200;
    g_183EBFCD4 = 7200;
  }
  else
  {
    if ( v16 == 2 || v16 - 5 <= 2 )
      g_183EBFCD4 = 1800;
    if ( v16 <= 1 )
    {
      g_183EBFCD4 = g_183EBFCE0;
      game_state = 2;
    }
  }
  if ( v16 == 7 )
  {
    v25 = g_183F7A60C;
  }
  else
  {
    v25 = 0;
    if ( v16 == 3 )
      v25 = g_183F7A5BC;
  }
  g_183EBFCE8 = v25;
  v26 = g_183F79DE4;
  if ( !replay_active )
    v26 = -1;
  g_183F7A320 = 0;
  g_183F79DE4 = v26;
  v27 = &g_183EBFDBC;
  *(unsigned int *)&g_183F7A570 = 0;
  *(_QWORD *)&effect_previous_3c = 0;
  g_183F7C588 = -1;
  g_183F79DE8 = 0;
  g_1B4657C80 = 0;
  do
  {
    *(_QWORD *)(v27 - 3) = 0;
    *v27 = 0;
    if ( !game_unknown_183ebfcc8 )
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
  while ( (__int64)v27 < (__int64)&g_183EE2454 );
  v30 = game_unknown_183ebfcc8;
  if ( !game_unknown_183ebfcc8 )
  {
    strcpy((char *)&g_183EBFCF0, "Buy Stuff");
    g_183EBFCEC = 10000;
  }
  v31 = &g_19021F0CC;
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
    v37 = &g_151620CEC;
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
    while ( (__int64)v37 < (__int64)&g_1519A40EC );
    v31 += 6;
  }
  *(_QWORD *)&g_183F79F84 = 0;
  world_item_29_count = 0;
  g_183F775E0 = 0;
  if ( v19 )
    v38 = v30 + 1;
  else
    v38 = game_unknown_1a4d2dce4;
  game_unknown_183ebfcc8 = v38;
  game_tick = 0;
  game_unknown_1a4d2dce0 = 0;
  g_183E93524 = 0;
  if ( v19 )
  {
    sub_1401063E0();
    if ( game_connected )
    {
      (game_sun_angle) = (float)(unsigned __int8)rand() * 0.003067961575771484;
      (game_sun_angle) = (float)((unsigned __int8)rand() + 64) * 0.003067961575771484;
      v39 = rand();
      v38 = game_unknown_183ebfcc8;
      game_day_time = 2376000;
      *(float *)&v40 = (float)v39 * 0.01227184630308594;
      *(unsigned int *)&game_unknown_183ebfd58 = v40;
      goto LABEL_197;
    }
    v38 = game_unknown_183ebfcc8;
  }
  else
  {
    g_183E53120 = 0;
  }
  v40 = *(unsigned int *)&game_unknown_183ebfd58;
LABEL_197:
  physics_point_count = 0;
  v41 = &g_1B4287C80;
  do
  {
    *v41 = 0;
    v41 += 61;
  }
  while ( (__int64)v41 < (__int64)&g_1B4657C80 );
  v42 = &g_1601172A0;
  do
  {
    *v42 = 0;
    v42 += 202;
  }
  while ( (__int64)v42 < (__int64)&g_1601E12A0 );
  v43 = game_type;
  v44 = &g_151620C60;
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
  v56 = &g_1449816E0;
  do
  {
    *v56 = 0;
    v56 += 47;
  }
  while ( (__int64)v56 < (__int64)&g_144AF96E0 );
  v57 = &g_18329E308;
  do
  {
    *v57 = 0;
    v57 += 7166;
  }
  while ( (__int64)v57 < (__int64)&g_18399DB08 );
  v58 = &g_15F2DE364;
  do
  {
    *(v58 - 5209) = 0;
    *v58 = -1;
    v58 += 5210;
  }
  while ( (__int64)v58 < (__int64)&g_15FD0B364 );
  v59 = &g_182BBB180;
  do
  {
    *v59 = 0;
    v59 += 1760;
  }
  while ( (__int64)v59 < (__int64)&g_18329B180 );
  v60 = &g_182A7D580;
  do
  {
    *v60 = 0;
    v60 += 3;
  }
  while ( (__int64)v60 < (__int64)&g_182A7E180 );
  g_1A796F380 = 0;
  g_1A796F3D4 = 0;
  g_1A796F428 = 0;
  g_1A796F47C = 0;
  g_1A796F4D0 = 0;
  g_1A796F524 = 0;
  g_1A796F578 = 0;
  g_1A796F5CC = 0;
  g_1A796F620 = 0;
  g_1A796F674 = 0;
  g_1A796F6C8 = 0;
  g_1A796F71C = 0;
  g_1A796F770 = 0;
  g_1A796F7C4 = 0;
  g_1A796F818 = 0;
  g_1A796F86C = 0;
  g_1A796F8C0 = 0;
  g_1A796F914 = 0;
  g_1A796F968 = 0;
  g_1A796F9BC = 0;
  g_1A796FA10 = 0;
  g_1A796FA64 = 0;
  g_1A796FAB8 = 0;
  g_1A796FB0C = 0;
  g_1A796FB60 = 0;
  g_1A796FBB4 = 0;
  g_1A796FC08 = 0;
  g_1A796FC5C = 0;
  g_1A796FCB0 = 0;
  g_1A796FD04 = 0;
  g_1A796FD58 = 0;
  g_1A796FDAC = 0;
  g_1A796FE00 = 0;
  g_1A796FE54 = 0;
  g_1A796FEA8 = 0;
  g_1A796FEFC = 0;
  g_1A796FF50 = 0;
  g_1A796FFA4 = 0;
  g_1A796FFF8 = 0;
  g_1A797004C = 0;
  g_1A79700A0 = 0;
  g_1A79700F4 = 0;
  g_1A7970148 = 0;
  g_1A797019C = 0;
  g_1A79701F0 = 0;
  g_1A7970244 = 0;
  g_1A7970298 = 0;
  g_1A79702EC = 0;
  g_1A7970340 = 0;
  g_1A7970394 = 0;
  g_1A79703E8 = 0;
  g_1A797043C = 0;
  g_1A7970490 = 0;
  g_1A79704E4 = 0;
  g_1A7970538 = 0;
  g_1A797058C = 0;
  g_1A79705E0 = 0;
  g_1A7970634 = 0;
  g_1A7970688 = 0;
  g_1A79706DC = 0;
  g_1A7970730 = 0;
  g_1A7970784 = 0;
  g_1A79707D8 = 0;
  g_1A797082C = 0;
  g_1A7970880 = 0;
  g_1A79708D4 = 0;
  g_1A7970928 = 0;
  g_1A797097C = 0;
  g_1A79709D0 = 0;
  g_1A7970A24 = 0;
  g_1A7970A78 = 0;
  g_1A7970ACC = 0;
  g_1A7970B20 = 0;
  g_1A7970B74 = 0;
  g_1A7970BC8 = 0;
  g_1A7970C1C = 0;
  g_1A7970C70 = 0;
  g_1A7970CC4 = 0;
  g_1A7970D18 = 0;
  g_1A7970D6C = 0;
  g_1A7970DC0 = 0;
  g_1A7970E14 = 0;
  v61 = &g_181FEEBC0;
  g_1A7970E68 = 0;
  v62 = &g_15FD16268;
  g_1A7970EBC = 0;
  g_1A7970F10 = 0;
  g_1A7970F64 = 0;
  g_1A7970FB8 = 0;
  g_1A797100C = 0;
  g_1A7971060 = 0;
  g_1A79710B4 = 0;
  g_1A7971108 = 0;
  g_1A797115C = 0;
  g_1A79711B0 = 0;
  g_1A7971204 = 0;
  g_1A7971258 = 0;
  g_1A79712AC = 0;
  g_1A7971300 = 0;
  g_1A7971354 = 0;
  g_1A79713A8 = 0;
  g_1A79713FC = 0;
  g_1A7971450 = 0;
  g_1A79714A4 = 0;
  g_1A79714F8 = 0;
  g_1A797154C = 0;
  g_1A79715A0 = 0;
  g_1A79715F4 = 0;
  g_1A7971648 = 0;
  g_1A797169C = 0;
  g_1A79716F0 = 0;
  g_1A7971744 = 0;
  g_1A7971798 = 0;
  g_1A79717EC = 0;
  g_1A7971840 = 0;
  g_1A7971894 = 0;
  g_1A79718E8 = 0;
  g_1A797193C = 0;
  g_1A7971990 = 0;
  g_1A79719E4 = 0;
  g_1A7971A38 = 0;
  g_1A7971A8C = 0;
  g_1A7971AE0 = 0;
  g_1A7971B34 = 0;
  g_1A7971B88 = 0;
  g_1A7971BDC = 0;
  g_1A7971C30 = 0;
  g_1A7971C84 = 0;
  g_1A7971CD8 = 0;
  g_1A7971D2C = 0;
  do
  {
    *v62 = -1;
    v62 += 383;
    *v61 = 0;
    v61 += 2570;
  }
  while ( (__int64)v62 < (__int64)&g_15FE95268 );
  v63 = &g_1816DEB80;
  do
  {
    *v63 = 0;
    v63 += 290;
  }
  while ( (__int64)v63 < (__int64)&g_181FEEB80 );
  g_1816DEB80 = 1;
  v64 = &g_17CE4B61C;
  world_street_count = 0;
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
  while ( (__int64)v64 < (__int64)&g_17CE6F61C );
  world_unknown_15fd16260_count = 0;
  crt_memset((void *)(uintptr_t)(&g_15FE95280), 0, 0x1000u);
  crt_memset((void *)(uintptr_t)(&g_18399DAE0), 0, 0x400u);
  crt_memset((void *)(uintptr_t)(&g_18329B1E0), 0, 0x1000u);
  v65 = &g_16B2AAF20;
  do
  {
    *v65 = 0;
    v65 += 34653;
  }
  while ( (__int64)v65 < (__int64)(unsigned int *)&g_16D482320 );
  g_16B2AAF1C = 0;
  v66 = &g_1857BD744;
  world_bullet_count = 0;
  world_effect_count = 0;
  world_particle_count = 0;
  blood_stain_count = 0;
  effect_mark_count = 0;
  *(_QWORD *)&world_particle_resting_0_count = 0;
  *(_QWORD *)&world_particle_resting_1_count = 0;
  g_1A70AE564 = 0;
  g_1A70AE560 = 0;
  world_event_count = 0;
  g_189C1DC60 = 0;
  do
  {
    *(_QWORD *)(v66 - 1) = 0;
    v66 += 39;
  }
  while ( (__int64)v66 < (__int64)&g_185A2D744 );
  v67 = &g_1A8E3DA7C;
  v68 = 257;
  v69 = &g_1A8E477E0;
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
  crt_memset((void *)(uintptr_t)(&g_160FC4960), 0, 0x4DC0000u);
  crt_memset((void *)(uintptr_t)(&g_1ABC2D840), 0, 0x2E1E0u);
  v82 = &g_1A4D2DD14;
  g_1ABC2D894 = -1;
  do
  {
    *v82 = 0;
    v82 += 4;
  }
  while ( (__int64)v82 < (__int64)&g_1A4D31D14 );
  *(_QWORD *)&g_1A4D31D14 = 0;
  g_1A4D3BD1C = 0;
  g_144CBFAAC = 0;
  if ( !replay_active )
    *(_QWORD *)&replay_position = 0;
  v83 = (game_sun_angle);
  g_189C1DC80 = 0;
  g_189C7BEC4 = 0;
  g_189CDA108 = 0;
  g_189D3834C = 0;
  g_189D96590 = 0;
  g_189DF47D4 = 0;
  g_189E52A18 = 0;
  g_189EB0C5C = 0;
  v84 = sin((game_sun_angle));
  *(float *)&v85 = cos(*(float *)&v40) * v84;
  *(unsigned int *)&g_18417DE78 = v85;
  *(unsigned int *)&g_18417DE7C = cosf(v83);
  v86 = sin(*(float *)&v40);
  g_18417DE84 = 0;
  *(float *)&v86 = v86 * v84;
  *(unsigned int *)&g_18417DE80 = LODWORD(v86);
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
  sub_14007BB00();
  v211 = 1065353216;
  v210 = 1065353216;
  v209 = 1065353216;
  v208 = 1065353216;
  v207 = 1;
  SR_DEBUG_STAGE("Generating level: prepare map geometry");
  sr_text_draw_recovered("Generating level...",512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  if ( !strcmp_sr((     char *)&g_175FD1404, (     char *)(unsigned int *)&g_183EBFAB0) )
  {
    if ( g_175FD1400 )
    {
      v93 = 0;
      v94 = &g_154164248;
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
      while ( (__int64)v94 < (__int64)&g_15ADAC248 );
      v44 = &g_151620C60;
      goto LABEL_348;
    }
  }
  else
  {
    g_175FD1400 = 0;
  }
  SR_DEBUG_STAGE("Generating level: load/build world data (0x056980)");
  sub_140056980();
  SR_DEBUG_LOG("World data generation returned");
  v91 = 0;
  do
  {
    v92 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v91);
    *((_BYTE *)&g_175FD1404 + v91++) = v92;
  }
  while ( v92 );
  SR_DEBUG_STAGE("Generating level: prepare world render resources (0x124320)");
  sub_140124320();
  SR_DEBUG_LOG("World render resource setup returned");
LABEL_348:
  SR_DEBUG_STAGE("Generating level: finalize render state (0x14C390)");
  sub_14014C390();
  ((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&glClearColor)(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);
  glClear(16640);
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
  if ( game_unknown_183ebfcc8 == 1 )
  {
    *(float *)&g_183F7C360 = (float)(int)g_16B2A222C;
    *(float *)&g_183F7C364 = (float)(int)g_16B2A2230;
    *(float *)&g_183F7C368 = (float)(int)g_16B2A2234;
  }
  if ( !replay_active )
  {
    g_183F7C38C = 0;
    *(float *)&g_183F7C37C = g_16B2A2EC8 + 32.0;
    *(float *)&g_183F7C380 = g_16B2A2ECC + 16.0;
    g_183F7C384 = g_16B2A2ED0;
    g_183F7C388 = -1077342245;
  }
  v105 = game_connected;
  /* Debugging extension: a single local human on the shared test arena.
     Native city Practice spawners below populate distant items and trains. */
  if (v105 && !game_type &&
      !strcmp((char *)(unsigned int *)&g_183EBFAB0, "debugtest"))
  {
    float sr_test_position[3] = {1024.0f, 25.25f, 1024.0f};
    float sr_test_rotation[9] = {1,0,0, 0,1,0, 0,0,1};
    g_151620C60 = 1;
    g_151620CE4 = 0;
    int sr_test_human = sub_140053840(sr_test_position, sr_test_rotation, 0);
    { extern void practice_remember_spawn(const float *position);
      practice_remember_spawn(sr_test_position); }
    if (sr_test_human < 0 || sr_test_human >= 256)
    {
      g_151620C60 = 0;
      SR_DEBUG_LOG("Test arena: player creation failed (%d)", sr_test_human);
      return 0;
    }
    g_151620CFC = sr_test_human;
    g_151624420 = 1;
    g_151624424 = 1;
    g_151624428 = 1;
    dword_140404A6C[7166 * sr_test_human + 280658445] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658446] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658447] = 1;
    dword_140404A6C[7166 * sr_test_human + 280658449] = g_151624434;
    memcpy((unsigned int *)&g_16B2A2EC8, sr_test_position, sizeof(sr_test_position));
    /* Use the native Practice camera formula (spawn + 32 X, + 16 Y, spawn Z,
       yaw -pi/2) instead of the earlier hardcoded eye height. The old 27.0 put
       the eye 3 m above a 24 m floor and let physics drop it to 24.7, i.e. on
       the floor plane, which is not a view the original ever produced. */
    *(float *)&g_183F7C37C = sr_test_position[0] + 32.0f;
    *(float *)&g_183F7C380 = sr_test_position[1] + 16.0f;
    *(float *)&g_183F7C384 = sr_test_position[2];
    *(float *)&g_183F7C388 = -1.5707964f;
    *(float *)&g_183F7C38C = 0.0f;
    g_183F7C574 = 1.0f;
    v139 = v105;
    SR_DEBUG_LOG("Test arena: one player at (1024, 25.25, 1024), solid floor y=24, camera (1056, 41.25, 1024)");
    goto SR_TEST_ARENA_FINALIZE;
  }
  if ( game_connected )
  {
    v106 = game_type;
    if ( game_type == 1 )
    {
      (*(int64_t *)(void *)sr_reset_spawn_position) = 0x41D00000430A0000LL;
      LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 1124728832;
      g_151620C60 = 1;
      g_151620CE4 = 0;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_reset_spawn_rotation), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation) + 3, sr_export_float_lane_container(1078530011));
      g_151620CFC = sub_140053840((float *)&(*(int64_t *)(void *)sr_reset_spawn_position), (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 0);
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      g_151620DB8 = 0;
      sr_reset_spawn_rotation[8] = 1065353216;
      dword_140404A6C[7166 * g_151620CFC + 280651341] = 1078530011;
      v107 = sr_CreateItem(3, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v107, -1, g_151620CFC, 0);
      v108 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v108, -1, g_151620CFC, 1);
      v109 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v109, -1, g_151620CFC, 3);
      v110 = sr_CreateItem(4, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
      sub_1400E35D0(v110, -1, g_151620CFC, 3);
      LODWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1124859904;
      sr_reset_spawn_rotation[8] = 1065353216;
      (*(__int128 *)(void *)sr_reset_spawn_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_reset_spawn_rotation+4)) = xmmword_140278D30;
      sr_CreateVehicle(0, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 1u);
      v105 = game_connected;
      v106 = game_type;
    }
    if ( v105 && v106 == 4 )
    {
      v111 = 0;
      if ( (int)g_16B2A2EE0 > 0 )
      {
        v112 = &g_16B2A2EE4;
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
        while ( v111 < (int)g_16B2A2EE0 );
      }
      v113 = 0;
      v114 = &g_151624484;
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
              if ( v120 != -1 && (int)g_16B2A2EE0 > 0 )
              {
                v121 = &g_16B2A2EEC;
                v122 = g_16B2A2EE0;
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
      v125 = &g_183EBFDC4;
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
      v127 = game_connected;
      v128 = game_tick;
      if ( game_connected )
      {
        v129 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v129) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v129) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v129) = 0;
        *(unsigned int *)((char *)&g_1873DE484 + v129) = 1;
      }
      g_183EBFDC0 = 1;
      if ( v127 )
      {
        v130 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v130) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v130) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v130) = 1;
        *(unsigned int *)((char *)&g_1873DE484 + v130) = 1;
      }
      g_183EC5984 = 1;
      if ( v127 )
      {
        v131 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v131) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v131) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v131) = 2;
        *(unsigned int *)((char *)&g_1873DE484 + v131) = 1;
      }
      g_183ECB548 = 1;
      if ( v127 )
      {
        v132 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v132) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v132) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v132) = 3;
        *(unsigned int *)((char *)&g_1873DE484 + v132) = 1;
      }
      g_183ED110C = 1;
      if ( v127 )
      {
        v133 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v133) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v133) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v133) = 4;
        *(unsigned int *)((char *)&g_1873DE484 + v133) = 1;
      }
      g_183ED6CD0 = 1;
      if ( v127 )
      {
        v134 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v134) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v134) = v128;
        *(unsigned int *)((char *)&g_1873DE480 + v134) = 5;
        *(unsigned int *)((char *)&g_1873DE484 + v134) = 1;
      }
      g_183EDC894 = 1;
    }
  }
  LODWORD((*(int64_t *)(void *)(sr_reset_spawn_position+2))) = 0;
  v135 = "test2";
  v136 = 0;
  v137 = (unsigned int *)&g_183EBFAB0;
  while ( 1 )
  {
    v138 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v136++);
    if ( v138 != sr_mem_140274da0[v136 - 1] )
      break;
    if ( v136 == 6 )
    {
      sub_14002A9A0();
      g_16B2A2ED0 = g_15B1AC860;
      g_16B2A2EC8 = g_15B1AC858 + 16.0;
      g_16B2A2ECC = g_15B1AC85C + 1.0;
      break;
    }
  }
  sub_140188B80(v136, (__int64)v137, (__int64)v135);
  v139 = game_connected;
  if ( game_connected )
  {
    if ( !game_type )
    {
      v140 = 0;
      v141 = 0;
      do
      {
        HIDWORD((*(int64_t *)(void *)sr_reset_spawn_position)) = 1104150528;
        v142 = &g_15162440C;
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
          v148 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v147++);
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
          v150 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v149++);
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
          v152 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v151++);
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
          v154 = *((_BYTE *)(unsigned int *)&g_183EBFAB0 + v153++);
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
        if (v140 == 0) {
          extern void practice_remember_spawn(const float *position);
          practice_remember_spawn((const float *)sr_reset_player_position);
        }
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
          v196 = g_18329E52C;
          v197 = g_18329E530;
          *((_QWORD *)v144 - 335) = 0;
          *(v144 - 668) = 1133281280;
          dword_140404A6C[v141 + 71859149] = 1104150528;
          dword_140404A6C[8 * *(v144 - 669) + 71859150 + v141] = 1124073472;
          v198 = v141 * 4 + 32LL * *(v144 - 669);
          *(unsigned int *)((char *)&g_15162399C + v198) = v196;
          *(unsigned int *)((char *)&g_1516239A4 + v198) = g_18329E534;
          *(unsigned int *)((char *)&g_1516239A0 + v198) = v197;
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
          g_16A7DBD90 = sr_CreateVehicle(6, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (unsigned int *)&(*(__int128 *)(void *)sr_reset_spawn_rotation), 3u);
          *(float *)&(*(int64_t *)(void *)sr_reset_spawn_position) = v172;
          sr_CreateItem(41, (float *)&(*(int64_t *)(void *)sr_reset_spawn_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = v172;
          (*(float *)(void *)(sr_reset_player_position+2)) = v155 - 2.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = v143 + 0.25;
          v173 = (int)sr_CreateItem(39, (float *)&(*(int64_t *)(void *)sr_reset_player_position), nullptr, (float *)&(*(__int128 *)(void *)sr_reset_spawn_rotation));
          v174 = &g_181FEEBC0;
          v175 = 0;
          v176 = 0;
          while ( *v174 )
          {
            ++v175;
            ++v176;
            v174 += 2570;
            if ( (__int64)v174 >= (__int64)&g_1829F8BC0 )
            {
              v175 = -1;
              v176 = -1;
              goto LABEL_430;
            }
          }
          if ( v175 != -1 )
          {
            crt_memset((void *)(uintptr_t)(&dword_140404A6C[2570 * v175 + 275753045]), 0, 0x2828u);
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
          sub_1400584B0(v184, (     __m128i *)&g_183E93124);
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
          *(float *)&(*(int64_t *)(void *)sr_reset_player_position) = (float)(int)g_16B2A222C + 6.0;
          (*(float *)(void *)(sr_reset_player_position+2)) = (float)(int)g_16B2A2234 - 8.0;
          *((float *)&(*(int64_t *)(void *)sr_reset_player_position) + 1) = (float)(int)g_16B2A2230 + 8.0;
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
      if ( (int)item_block_region_count > 0 )
      {
        v199 = 0;
        v200 = &g_1760C5638;
        do
        {
          if ( *v200 == 4 )
            break;
          ++v199;
          v200 += 14019;
        }
        while ( v199 < (int)item_block_region_count );
        if ( game_type == 2 )
          sub_14012E620(v199, 24);
      }
      sub_14012E960(128);
      v139 = game_connected;
      v201 = game_tick;
      if ( game_connected )
      {
        v202 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v202) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v202) = v201;
        *(unsigned int *)((char *)&g_1873DE480 + v202) = 0;
        *(unsigned int *)((char *)&g_1873DE484 + v202) = 1;
      }
      g_183EBFDC0 = 1;
      if ( v139 )
      {
        v203 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v203) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v203) = v201;
        *(unsigned int *)((char *)&g_1873DE480 + v203) = 1;
        *(unsigned int *)((char *)&g_1873DE484 + v203) = 1;
      }
      g_183EC5984 = 1;
      if ( v139 )
      {
        v204 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v204) = 10;
        *(unsigned int *)((char *)&g_1873DE464 + v204) = v201;
        *(unsigned int *)((char *)&g_1873DE480 + v204) = 2;
        *(unsigned int *)((char *)&g_1873DE484 + v204) = 1;
      }
      g_183ECB548 = 1;
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
  SR_DEBUG_CHECK_BODIES(&g_1449816E0, 8192, "after game spawning");
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

//----- (000000014012CEB0) ----------------------------------------------------
__int64            sub_14012CEB0(int a1, unsigned int a2, signed int a3, int a4, int a5, float a6)
{
  __int64 v6;
  __int64 v9;
  int v11;
  int v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  int v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  __int64 v38;
  char v39;
  unsigned int *v40;
  unsigned int v41;
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
    v22 = *(float *)((char *)&g_175FF34A8 + v24);
    v23 = *(float *)((char *)&g_175FF34B0 + v24);
    v19 = *(float *)((char *)&g_175FF34B4 + v24);
    v20 = *(float *)((char *)&g_175FF34B8 + v24);
    v21 = *(float *)((char *)&g_175FF34BC + v24);
  }
  else
  {
    v18 = v9 * 4 + 28LL * (v12 - v17);
    v19 = *(float *)((char *)&g_175FF348C + v18);
    v20 = *(float *)((char *)&g_175FF3490 + v18);
    v21 = *(float *)((char *)&g_175FF3494 + v18);
    v22 = *(float *)((char *)&g_175FF3498 + v18);
    v23 = *(float *)((char *)&g_175FF34A0 + v18);
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
    v31 = (ragdoll_unknown_height);
  else
    v31 = v45;
  v32 = 383LL * (int)world_unknown_15fd16260_count;
  *(float *)&v33 = v31 + (float)(0.375 - *(float *)&dword_140404A6C[24944 * v6 + 346731821]);
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v32 + 132400638]), 0, 0x5F8u);
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
  v37 = rand() % (signed int)g_175FF3464;
  v38 = 383LL * (int)world_unknown_15fd16260_count;
  v39 = rand();
  sub_140008E40(world_unknown_15fd16260_count, dword_140404A6C[v38 + 132400993], a4, v37, v39 & 1);
  v40 = &dword_140404A6C[v38 + 132400648];
  *(_QWORD *)v40 = 1065353216;
  *((_QWORD *)v40 + 1) = 0;
  *((_QWORD *)v40 + 2) = 1065353216;
  *((_QWORD *)v40 + 3) = 0;
  v40[8] = 1065353216;
  sub_14007B2A0(
    (__int64)&dword_140404A6C[v38 + 132400648],
    (float *)&dword_140404A6C[v38 + 132400651], sr_export_float_lane_container(sr_text_float_bits((float)(v25 + 1.570796326795))) /* the original converts to float (cvtsd2ss) before this call */);
  v41 = world_unknown_15fd16260_count;
  ++dword_140404A6C[world_unknown_15fd16260_count + 132792837];
  world_unknown_15fd16260_count = v41 + 1;
  return (unsigned int)v41; /* native pre-increment spawn index */
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
