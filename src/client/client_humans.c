#include "shared_client.h"

//----- (0000000140053840) ----------------------------------------------------
__int64            sub_140053840(float *a1, float *a2, int a3)
{
  int v3;
  __int64 v4;
  unsigned int *v6;
  int v7;
  __int64 v10;
  unsigned int v11;
  char v12;
  unsigned int *v13;
  unsigned int *v14;
  unsigned int *v15;
  signed int v16;
  float v17;
  float v18;
  float i;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  signed int v32;
  float v33;
  __int64 v34;
  float v35;
  float v36;
  char v37;
  float v38;
  char v39;
  unsigned int v40;
  unsigned int v41;
  _Alignas(8) unsigned sr_human_spawn_velocity[3];

  v3 = 0;
  v4 = a3;
  v6 = &g_18329E308;
  v7 = 0;
  while ( *v6 )
  {
    ++v7;
    v6 += 7166;
    if ( (__int64)v6 >= (__int64)&g_18399DB08 )
      return 0xFFFFFFFFLL;
  }
  if ( v7 == -1 )
    return 0xFFFFFFFFLL;
  v10 = 7166LL * v7;
  crt_memset((void *)(uintptr_t)(&dword_140404A6C[v10 + 280651293]), 0, 0x6FF8u);
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
  v13 = &g_18399DEEC;
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
  if ( game_connected )
    ++dword_140404A6C[v7 + 282485789];
  return (unsigned int)v7;
}

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

//----- (00000001400BE010) ----------------------------------------------------
__int64 sub_1400BE010()
{
  BOOL v0;
  __int64 v1;
  int v2;
  int v3;
  float v4;
  __int64 v5;
  float v6;
  double v7;
  double v8;
  float v9;
  __int64 v10;
  signed int v11;
  int v12;
  float *v13;
  __int16 v14;
  int v15;
  int v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  int v23;
  bool v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  int v29;
  int v30;
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
  double v45;
  double v46;
  double v47;
  double v48;
  double v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  int v54;
  int v55;
  float v56;
  double v57;
  float v58;
  bool v59;
  __int64 v60;
  __int64 v61;
  float *v62;
  _DWORD *v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  double v69;
  float v70;
  float v71;
  float v72;
  float v73;
  double v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  unsigned int v79;
  float v80;
  float v81;
  float v82;
  int v83;
  __int64 v84;
  _DWORD *v85;
  _BOOL8 v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  unsigned int v96;
  float v97;
  float v98;
  float v99;
  int v100;
  __int64 v101;
  float *v102;
  unsigned int *v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  __int64 v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  __int64 v119;
  __int64 v120;
  float v121;
  float v122;
  int v123;
  signed int v124;
  int *v125;
  __int64 v126;
  float v127;
  unsigned int v128;
  unsigned int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int *v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  unsigned int v144;
  float v145;
  float v146;
  __int64 v147;
  __int64 v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  int v157;
  float v158;
  float v159;
  unsigned int v160;
  float v161;
  float v162;
  float v163;
  float v164;
  __int64 v165;
  float v166;
  float v167;
  __int64 v168;
  int v169;
  float v170;
  __int64 v171;
  float v172;
  __int64 v173;
  float v174;
  float *v175;
  float v176;
  float v177;
  float v178;
  float v179;
  __int64 v180;
  float v181;
  float v182;
  float v183;
  float v184;
  int v185;
  __int64 v186;
  float v187;
  float v188;
  float v189;
  unsigned int v190;
  float v191;
  float v192;
  int v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  unsigned int v197;
  unsigned int v198;
  unsigned int v199;
  __int64 v200;
  unsigned int v201;
  float v202;
  __int64 v203;
  int v204;
  float v205;
  float v206;
  unsigned int v207;
  unsigned int v208;
  unsigned int v209;
  float v210;
  float v211;
  float v212;
  __int64 v213;
  int v214;
  __int64 v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  unsigned int v226;
  unsigned int v227;
  float v228;
  float *v229;
  float v230;
  float v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  float v240;
  unsigned int v241;
  unsigned int v242;
  float v243;
  float v244;
  float v245;
  float v246;
  unsigned int v247;
  unsigned int v248;
  float v249;
  __int64 v250;
  __int64 v251;
  float v252;
  unsigned int *v253;
  float v254;
  unsigned int v255;
  float v256;
  float v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float v262;
  unsigned int v263;
  float v264;
  int v265;
  __int64 v266;
  __int64 v267;
  _DWORD *v268;
  _DWORD *v269;
  __int64 v270;
  double v271;
  double v272;
  double v273;
  double v274;
  double v275;
  __int64 v276;
  float v277;
  float v278;
  float v279;
  unsigned int v280;
  unsigned int v281;
  unsigned int v282;
  __int64 v283;
  float v284;
  float v285;
  unsigned int v286;
  unsigned int v287;
  unsigned int v288;
  int v289;
  int v290;
  _DWORD *v291;
  _DWORD *v292;
  __int64 v293;
  __int64 v294;
  int v295;
  __int64 v296;
  float *v297;
  __int64 v298;
  float v299;
  float v300;
  __int64 v301;
  int *v302;
  __int64 v303;
  __int64 v304;
  float v305;
  float v306;
  __int64 v307;
  float v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  unsigned int v312;
  int v313;
  __int64 v314;
  char *v315;
  __int64 v316;
  unsigned int *v317;
  int v318;
  __int64 v319;
  __int64 v320;
  int v321;
  int v322;
  int v323;
  int *v324;
  int *v325;
  int v326;
  __int64 v327;
  int v328;
  __int64 v329;
  unsigned int *v330;
  unsigned int v331;
  unsigned int v332;
  int v333;
  int v334;
  int v335;
  __int64 v336;
  signed int v337;
  __int64 v338;
  unsigned int v339;
  __int64 v340;
  int v341;
  int v342;
  int v343;
  __int64 v344;
  unsigned int v345;
  unsigned int v346;
  __int64 v347;
  signed int v348;
  __int64 v349;
  int v350;
  __int64 v351;
  unsigned int v352;
  signed int v353;
  float *v354;
  unsigned int *v355;
  float v356;
  float v357;
  float v358;
  float v359;
  __int64 v360;
  __int64 v361;
  float v362;
  float v363;
  float v364;
  float v365;
  float v366;
  float v367;
  float v368;
  float v369;
  float v370;
  float v371;
  float v372;
  double v373;
  float v374;
  float v375;
  __int64 v376;
  __m128 v377;
  float v378;
  float v379;
  float v380;
  float v381;
  float v382;
  float v383;
  float v384;
  float v385;
  float v386;
  float v387;
  float v388;
  float v389;
  float v390;
  float v391;
  float v392;
  float v393;
  float v394;
  float v395;
  float v396;
  float v397;
  float v398;
  float v399;
  float v400;
  float v401;
  float v402;
  float v403;
  float v404;
  float v405;
  float v406;
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
    *(unsigned int *)((char *)&g_18329E4F8 + v10) = 0;
    v12 = 0;
    v13 = (float *)&g_15F2D92C4;
    do
    {
      if ( *((_DWORD *)v13 - 49)
        && v11 < 8
        && *(v13 - 5) <= *(float *)((char *)&g_18329E4D4 + v10)
        && *(v13 - 2) >= *(float *)((char *)&g_18329E4C8 + v10)
        && *(v13 - 3) <= *(float *)((char *)&g_18329E4DC + v10)
        && *v13 >= *(float *)((char *)&g_18329E4D0 + v10)
        && *(v13 - 4) <= *(float *)((char *)&g_18329E4D8 + v10)
        && *(v13 - 1) >= *(float *)((char *)&g_18329E4CC + v10) )
      {
        dword_140404A6C[7166 * v5 + 280651428 + v11] = v12;
        v11 = *(unsigned int *)((char *)&g_18329E4F8 + v10) + 1;
        *(unsigned int *)((char *)&g_18329E4F8 + v10) = v11;
      }
      ++v12;
      v13 += 5210;
    }
    while ( v12 < 512 );
    sub_1400B5E70(v3);
    v14 = game_tick;
    if ( (game_tick & 0x1F) == 0 )
    {
      v15 = *(unsigned int *)((char *)&g_18329E324 + v10);
      v16 = *(unsigned int *)((char *)&g_18329E328 + v10);
      if ( v15 > v16 )
      {
        v15 = *(unsigned int *)((char *)&g_18329E328 + v10);
        *(unsigned int *)((char *)&g_18329E324 + v10) = v16;
      }
      if ( v16 > 127 )
        v16 = 127;
      if ( v15 < v16 )
        *(unsigned int *)((char *)&g_18329E324 + v10) = v15 + 1;
    }
    v17 = *(float *)((char *)&g_1832A4DC0 + v10);
    v18 = *(float *)((char *)&g_1832A4DBC + v10);
    v19 = *(float *)((char *)&g_1832A4DC4 + v10);
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
    *(float *)((char *)&g_1832A4DBC + v10) = v22;
    *(float *)((char *)&g_1832A4DC0 + v10) = v21;
    *(float *)((char *)&g_1832A4DC4 + v10) = v20;
    v23 = *(unsigned int *)((char *)&g_18329E358 + v10);
    if ( v23 > 0 )
      *(unsigned int *)((char *)&g_18329E358 + v10) = v23 - 1;
    v24 = (*((_BYTE *)&g_18329E51C + v10) & 8) == 0;
    v25 = v4;
    v26 = *(int *)((char *)&g_18329E330 + v10);
    v27 = *(int *)((char *)&g_18329E334 + v10);
    v416 = *(float *)((char *)&g_18329E330 + v10);
    LODWORD(v426) = v27;
    if ( !v24 )
      v25 = *(float *)&v446;
    if ( !g_16B27ECC4 )
    {
      v28 = *(float *)((char *)&g_18329E420 + v10);
      if ( v28 >= (float)(v25 - v6) )
      {
        if ( v28 <= (float)(v25 + v6) )
          *(float *)((char *)&g_18329E420 + v10) = v25;
        else
          *(float *)((char *)&g_18329E420 + v10) = v28 - v6;
      }
      else
      {
        *(float *)((char *)&g_18329E420 + v10) = v28 + v6;
      }
    }
    if ( (v14 & 7) == 0 )
    {
      v29 = *(unsigned int *)((char *)&g_18329E380 + v10);
      if ( v29 > 0 )
        *(unsigned int *)((char *)&g_18329E380 + v10) = v29 - 1;
    }
    v30 = *(unsigned int *)((char *)&g_18329E320 + v10);
    if ( v30 > 0 )
      *(unsigned int *)((char *)&g_18329E320 + v10) = v30 - 1;
    if ( (_DWORD)v26 == -1 )
    {
      v31 = *(float *)((char *)&g_18329E3E0 + v10);
      v32 = *(float *)((char *)&g_18329E450 + v10);
      v33 = v31;
      if ( (float)(v32 - v31) >= v7 )
        v33 = v31 + v8;
      if ( (float)(v33 - v32) >= v7 )
        v32 = v32 + v8;
      v34 = v33 - v32;
      v421 = (char *)&g_18329E440 + v10;
      v35 = *(float *)((char *)&g_18329E440 + v10);
      if ( (float)(v34 - v35) >= v7 )
        v35 = v35 + v8;
      if ( (float)(v35 - v34) >= v7 )
        v34 = v34 + v8;
      v36 = *(float *)&v448;
      v37 = v35 - v34;
      *(float *)((char *)&g_18329E3C0 + v10) = v37;
      v38 = fmaxf(v37, v447);
      if ( v38 > v36 )
        v38 = v36;
      if ( !*(unsigned int *)((char *)&g_18329E384 + v10) )
        v38 = *(float *)&v1;
      v39 = v37 - v38;
      if ( v39 >= v445 )
      {
        *(float *)((char *)&g_18329E400 + v10) = v39;
        if ( v39 > v453 )
          *(unsigned int *)((char *)&g_18329E400 + v10) = 1070141403;
      }
      else
      {
        *(unsigned int *)((char *)&g_18329E400 + v10) = -1077342245;
      }
      if ( !LOBYTE(g_183F7C960) )
      {
        v40 = v38;
        v41 = v38 + v31;
        v42 = v40 + *(float *)((char *)&g_18329E3A0 + v10);
        *(float *)((char *)&g_18329E3E0 + v10) = v41;
        v31 = v41;
        *(float *)((char *)&g_18329E3A0 + v10) = v42;
      }
      v43 = *(float *)((char *)&g_1832A4B84 + v10)
          + *(float *)((char *)&g_18329E3A0 + v10);
      v44 = v439;
      if ( COERCE_FLOAT(LODWORD(v43) & v2) < v439 )
        v43 = *(float *)&v1;
      *(float *)((char *)&g_18329E3A0 + v10) = v43;
      if ( COERCE_FLOAT(LODWORD(v31) & v2) < v44 )
      {
        v31 = *(float *)&v1;
        *(unsigned int *)((char *)&g_18329E3E0 + v10) = 0;
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
      *(float *)((char *)&g_18329E3A0 + v10) = v47;
LABEL_67:
      v48 = v31;
      if ( v31 >= v46 )
      {
        if ( v48 <= v7 )
        {
LABEL_72:
          v50 = v1;
          v51 = v1;
          v417 = (unsigned int *)((char *)&g_18329E444 + v10);
          *(unsigned int *)((char *)&g_18329E3A4 + v10) = *(unsigned int *)((char *)&g_18329E444
                                                                                         + v10);
          goto LABEL_74;
        }
        v49 = v48 - v8;
      }
      else
      {
        v49 = *(float *)((char *)&g_18329E3E0 + v10) + v8;
      }
      *(float *)((char *)&g_18329E3E0 + v10) = v49;
      goto LABEL_72;
    }
    v421 = (char *)&g_18329E440 + v10;
    v51 = *(unsigned int *)((char *)&g_18329E440 + v10);
    *(unsigned int *)((char *)&g_18329E400 + v10) = v51;
    v417 = (unsigned int *)((char *)&g_18329E444 + v10);
    v50 = *(unsigned int *)((char *)&g_18329E444 + v10);
    *(unsigned int *)((char *)&g_18329E404 + v10) = v50;
LABEL_74:
    *(unsigned int *)((char *)&g_18329E408 + v10) = v51;
    v52 = 0;
    *(unsigned int *)((char *)&g_18329E40C + v10) = v50;
    v53 = *(int *)((char *)&g_18329E310 + v10);
    if ( (_DWORD)v53 != -1 )
    {
      v54 = dword_140404A6C[3597 * v53 + 71856276];
      if ( v54 > 0 )
      {
        LOBYTE(v52) = v54 >= 100;
        ++v52;
      }
    }
    if ( *(unsigned int *)((char *)&g_1832A52B4 + v10) != v52 )
    {
      ++dword_140404A6C[v5 + 282485789];
      *(unsigned int *)((char *)&g_1832A52B4 + v10) = v52;
    }
    v55 = *(unsigned int *)((char *)&g_18329E344 + v10);
    *(unsigned int *)((char *)&g_1832A5048 + v10) = 1065353216;
    if ( v55 < 25 )
    {
      v56 = (float)v55 * v440;
      v57 = sin((float)((float)((float)((v14 + (_WORD)v3 * (_WORD)v3 * (_WORD)v3) & 0x1FF) * v441) * v8));
      v58 = v57 * v450 * (float)(v4 - v56) + (float)((float)(v56 * v9) + v442);
      if ( v55 < 10 )
        v58 = v58 * (float)((float)((float)v55 * v423) + v9);
      *(float *)((char *)&g_1832A5048 + v10) = v58;
    }
    v59 = *(int *)((char *)&g_1832A4DD8 + v10) <= 0;
    v414 = 0.0;
    if ( !v59 || *(int *)((char *)&g_1832A4E00 + v10) > 0 )
      LODWORD(v414) = 1;
    *(unsigned int *)((char *)&g_18329E35C + v10) = 0;
    v60 = 20840 * v26;
    v61 = 0;
    v62 = (float *)((char *)&g_18329E5F0 + v10);
    v427 = 20840 * v26;
    v63 = (unsigned int *)((char *)&g_18329E5F0 + v10);
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
    *(_QWORD *)&v69 = *(unsigned int *)((char *)&g_18329E3A0 + v10);
    *(float *)&(*(float *)&sr_human_tick_rotation[8]) = 1.0;
    (*(__int128 *)(void *)sr_human_tick_rotation) = xmmword_140278D30;
    (*(__int128 *)(void *)(sr_human_tick_rotation+4)) = xmmword_140278D30;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_human_tick_rotation), (float *)&(*(__int128 *)(void *)sr_human_tick_rotation) + 3, v69);
    v70 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 3);
    v71 = *((float *)&(*(__int128 *)(void *)(sr_human_tick_rotation+4)) + 2);
    v72 = *(float *)&(*(float *)&sr_human_tick_rotation[8]);
    v73 = v432;
    v74 = v445;
    *(unsigned int *)((char *)&g_1832A4C8C + v10) = *(unsigned int *)((char *)&g_1832A4C88
                                                                                   + v10);
    *(unsigned int *)((char *)&g_1832A4C88 + v10) = 0;
    v75 = (float)((float)((float)(*(float *)((char *)&g_18329E530 + v10)
                                - *(float *)((char *)&g_18329F3D0 + v10))
                        * v70)
                + (float)((float)(*(float *)((char *)&g_18329E52C + v10)
                                - *(float *)((char *)&g_18329F3CC + v10))
                        * v71))
        + (float)((float)((float)(*(float *)((char *)&g_18329E534 + v10)
                                - *(float *)((char *)&g_18329F3D4 + v10))
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
    *(unsigned int *)((char *)&g_1832A4D68 + v10) = *(unsigned int *)((char *)&g_1832A4D64
                                                                                   + v10);
    *(unsigned int *)((char *)&g_1832A4D64 + v10) = 0;
    *(float *)((char *)&g_1832A4C88 + v10) = v76;
    v77 = *(float *)((char *)&g_18329F778 + v10);
    v78 = *(unsigned int *)((char *)&g_18329F77C + v10);
    *(float *)&v79 = *(float *)((char *)&g_18329E52C + v10)
                   - *(float *)((char *)&g_18329F774 + v10);
    sr_human_tick_endpoint[0] = *(float *)((char *)&g_18329F774 + v10);
    v80 = *(float *)((char *)&g_18329E530 + v10) - v77;
    sr_human_tick_endpoint[1] = v77;
    sr_human_tick_endpoint[2] = *(float *)&v78;
    sr_human_tick_point[0] = *(float *)&v79;
    sr_human_tick_point[1] = v80;
    v81 = (float)((float)(*(float *)&v79 * v71) + (float)(v80 * v70))
        + (float)((float)((float)(*(float *)((char *)&g_18329E534 + v10) - *(float *)&v78) * v72) + v73);
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
    *(float *)((char *)&g_1832A4D64 + v10) = v82;
    if ( (_DWORD)v26 == -1 )
    {
      if ( *(int *)((char *)&g_18329E344 + v10) > 0
        && !*(unsigned int *)((char *)&g_18329E360 + v10)
        && (*((_BYTE *)&g_18329E51C + v10) & 4) != 0 )
      {
        v83 = *(unsigned int *)((char *)&g_1832A4A3C + v10);
        if ( v83 < 32 )
          *(unsigned int *)((char *)&g_1832A4A3C + v10) = v83 + 1;
      }
      v84 = 0;
      v85 = (unsigned int *)((char *)&g_18329E658 + v10);
      do
      {
        *v85 = 0;
        if ( *(int *)((char *)&g_18329E344 + v10) > 0
          && *(int *)((char *)&g_1832A5058 + v10) >= 50
          && *(unsigned int *)((char *)&g_18329E360 + v10) != 2
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
      v24 = *(unsigned int *)((char *)&g_18329E360 + v10) == 3;
      v434 = v0;
      if ( !v24
        && *(int *)((char *)&g_1832A4A3C + v10) > 0
        && (*((_BYTE *)&g_18329E51C + v10) & 4) == 0
        && *(unsigned int *)((char *)&g_1832A4C14 + v10) == 1
        && *(unsigned int *)((char *)&g_1832A4CF0 + v10) == 1
        && *(unsigned int *)((char *)&g_18329F4F8 + v10)
        && *(unsigned int *)((char *)&g_18329F8A0 + v10) )
      {
        *(unsigned int *)((char *)&g_18329E360 + v10) = 3;
        v87 = g_18399E3A4;
        v88 = g_18399E2D8;
        v89 = g_18399E404;
        v90 = g_18399E3A4;
        v6 = *(float *)&v415;
        v91 = g_18399E2D8;
        v92 = g_18399E404;
        *(unsigned int *)((char *)&dword_140404A6C[55 * v86 + 280658026] + v10) = 1;
        *(unsigned int *)((char *)&g_1832A4BBC + v10) = !v0;
        *(unsigned int *)((char *)&g_1832A4A48 + v10) = *(unsigned int *)((char *)&g_18329E474
                                                                                       + v10);
        *(unsigned int *)((char *)&g_1832A4A4C + v10) = *(unsigned int *)((char *)&g_18329E470
                                                                                       + v10);
        *(unsigned int *)((char *)&g_1832A4B58 + v10) = 1075235812;
        *(unsigned int *)((char *)&g_1832A4C1C + v10) = 0;
        *(unsigned int *)((char *)&g_1832A4CF8 + v10) = 0;
        *(float *)((char *)&g_1832A4C20 + v10) = (float)((float)(v90
                                                                              * *(float *)((char *)&g_18329F2D0
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329F294
                                                                                 + v10))
                                                              - (float)((float)(v91
                                                                              * *(float *)((char *)(unsigned int *)&g_18329E55C
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329E52C
                                                                                 + v10));
        *(float *)((char *)&g_1832A4C24 + v10) = (float)((float)(v90
                                                                              * *(float *)((char *)(unsigned int *)&g_18329F2D4
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329F298
                                                                                 + v10))
                                                              - (float)((float)(v88
                                                                              * *(float *)((char *)&g_18329E560
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329E530
                                                                                 + v10));
        v78 = g_18399E4D0;
        v93 = *(float *)&g_18399E4D0;
        *(float *)((char *)&g_1832A4C28 + v10) = (float)((float)(v87
                                                                              * *(float *)((char *)&g_18329F2D8
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329F29C
                                                                                 + v10))
                                                              - (float)((float)(v88
                                                                              * *(float *)((char *)&g_18329E564
                                                                                         + v10))
                                                                      + *(float *)((char *)&g_18329E534
                                                                                 + v10));
        v94 = *(float *)&v78 * *(float *)((char *)&g_18329F678 + v10);
        v95 = (float)(v93 * *(float *)((char *)(unsigned int *)&g_18329F67C + v10))
            + *(float *)((char *)&g_18329F640 + v10);
        *(float *)&v78 = (float)(*(float *)&v78 * *(float *)((char *)&g_18329F680 + v10))
                       + *(float *)((char *)&g_18329F644 + v10);
        *(float *)&v96 = (float)(v89 * *(float *)((char *)(unsigned int *)&g_18329E55C + v10))
                       + *(float *)((char *)&g_18329E52C + v10);
        v97 = (float)(v92 * *(float *)((char *)&g_18329E560 + v10))
            + *(float *)((char *)&g_18329E530 + v10);
        v2 = v433;
        v98 = (float)(v89 * *(float *)((char *)&g_18329E564 + v10))
            + *(float *)((char *)&g_18329E534 + v10);
        sr_human_tick_endpoint[0] = v94 + *(float *)((char *)&g_18329F63C + v10);
        sr_human_tick_endpoint[1] = v95;
        sr_human_tick_endpoint[2] = *(float *)&v78;
        sr_human_tick_point[0] = *(float *)&v96;
        *(float *)&v78 = *(float *)&v78 - v98;
        sr_human_tick_point[1] = v97;
        *(float *)((char *)&g_1832A4CFC + v10) = sr_human_tick_endpoint[0] - *(float *)&v96;
        sr_human_tick_point[2] = v98;
        *(float *)((char *)&g_1832A4D00 + v10) = v95 - v97;
        *(unsigned int *)((char *)&g_1832A4D04 + v10) = v78;
      }
      v99 = v422;
      v100 = 0;
      v101 = 0;
      v102 = (float *)((char *)&g_18329E548 + v10);
      v103 = &g_18399DF38;
      do
      {
        if ( v100 != 12
          && v100 != 15
          && (v100 != 11 && v100 != 14
           || *(unsigned int *)((char *)&g_18329E360 + v10) == 2
           || *(int *)((char *)&g_18329E344 + v10) <= 0
           || *(int *)((char *)&g_1832A5058 + v10) < 50) )
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
          v24 = *(unsigned int *)((char *)&g_18329E360 + v10) == 0;
          v106 = *(v102 - 7);
          v107 = *(v102 - 6);
          v108 = *(v102 - 5);
          v109 = v10 + 12 * (v101 + (int)*v103);
          v110 = *(float *)((char *)(unsigned int *)&g_18329E55C + v109);
          v111 = *(float *)((char *)&g_18329E560 + v109);
          v112 = *(float *)((char *)&g_18329E564 + v109);
          sr_human_tick_point[0] = (float)((float)(v105 * -0.5) * v110) + v106;
          sr_human_tick_point[1] = (float)((float)(v105 * -0.5) * v111) + v107;
          sr_human_tick_point[2] = (float)((float)(v105 * -0.5) * v112) + v108;
          if ( v24
            && *(int *)((char *)&g_18329E344 + v10) > 0
            && *(int *)((char *)&g_1832A5058 + v10) >= 50
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
            v116 = g_151A8488C;
            v117 = g_151A84890;
            v118 = g_151A84894;
            if ( COERCE_FLOAT(
                   COERCE_UNSIGNED_INT(
                     (float)((float)(g_151A8488C * *(v102 - 1))
                           + (float)(g_151A84890 * *v102))
                   + (float)(g_151A84894 * v102[1]))
                 & v2) > 0.06666666666666667
              && item_hit_layer != -1
              && g_151A848D8 != -1 )
            {
              v119 = 28664LL * (unsigned int)v3 + 312LL * (unsigned int)v100;
              sub_14000B7D0(
                item_hit_layer,
                g_151A848D8,
                g_151A848DC,
                g_151A848E0,
                g_151A848F0,
                g_151A848F4,
                (unsigned int *)((char *)&g_18329E52C + v119),
                (unsigned int *)((char *)&g_18329E544 + v119));
              v118 = g_151A84894;
              v117 = g_151A84890;
              v116 = g_151A8488C;
            }
            if ( !*(unsigned int *)((char *)&g_18329E33C + v10) )
            {
              if ( v100 == 3 )
              {
                if ( !*(unsigned int *)((char *)&g_18329E348 + v10)
                  && COERCE_FLOAT(
                       COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                     & v2) > 0.2666666666666667 )
                {
                  *(unsigned int *)((char *)&g_18329E344 + v10) -= 120;
                }
              }
              else if ( v100 )
              {
                if ( v100 == 2 )
                {
                  if ( !*(unsigned int *)((char *)&g_18329E348 + v10)
                    && COERCE_FLOAT(
                         COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                       & v2) > 0.2 )
                  {
                    *(unsigned int *)((char *)&g_18329E344 + v10) -= 120;
                  }
                }
                else if ( (v100 == 10 || v100 == 13)
                       && !*(unsigned int *)((char *)&g_18329E348 + v10)
                       && COERCE_FLOAT(
                            COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                          & v2) > 0.2666666666666667 )
                {
                  if ( v100 == 10 )
                    *(unsigned int *)((char *)&g_1832A5084 + v10) = 0;
                  else
                    *(unsigned int *)((char *)&g_1832A508C + v10) = 0;
                }
              }
              else if ( !*(unsigned int *)((char *)&g_18329E348 + v10)
                     && COERCE_FLOAT(
                          COERCE_UNSIGNED_INT((float)((float)(v116 * *(v102 - 1)) + (float)(v117 * *v102)) + (float)(v118 * v102[1]))
                        & v2) > 0.2 )
              {
                *(unsigned int *)((char *)&g_18329E344 + v10) -= 120;
              }
            }
            v78 = 1061997773;
            if ( *(unsigned int *)((char *)&g_18329E360 + v10) == 2 )
              v78 = 1036831949;
            v120 = *((int *)v102 - 8);
            v121 = (ragdoll_unknown_height) - *(float *)&dword_140404A6C[47 * v120 + 18215716];
            sr_human_tick_point[0] = *(float *)&g_151A84880 - *(float *)&dword_140404A6C[47 * v120 + 18215715];
            v122 = *(float *)&g_151A84888 - *(float *)&dword_140404A6C[47 * v120 + 18215717];
            sr_human_tick_point[1] = v121;
            sr_human_tick_point[2] = v122;
            if ( item_hit_block_part == -1 )
              sub_140005160(
                v120,
                (unsigned int *)&sr_human_tick_point[0],
                (unsigned int *)&g_151A8488C,
                v115 - g_151A8489C,
                v78,
                v104,
                0x3D800000u);
            *(unsigned int *)((char *)&g_18329E35C + v10) = 1;
          }
        }
        v6 = *(float *)&v415;
        ++v100;
        v101 += 26;
        v103 += 25;
        v102 += 78;
      }
      while ( v100 < 16 );
      v123 = *(unsigned int *)((char *)&g_18329E33C + v10);
      if ( v123 <= 0 )
        *(unsigned int *)((char *)&g_18329E338 + v10) = -1;
      else
        *(unsigned int *)((char *)&g_18329E33C + v10) = v123 - 1;
      v1 = LODWORD(v409);
      v124 = 0;
      if ( *(int *)((char *)&g_18329E4F8 + v10) > 0 )
      {
        v125 = (int *)((char *)&g_18329E4FC + v10);
        do
        {
          sub_1400B3A80(v3, *v125);
          ++v124;
          ++v125;
        }
        while ( v124 < *(int *)((char *)&g_18329E4F8 + v10) );
      }
      *(unsigned int *)((char *)&g_18329E388 + v10) = *(unsigned int *)((char *)&g_18329E52C
                                                                                     + v10);
      *(unsigned int *)((char *)&g_18329E38C + v10) = *(unsigned int *)((char *)&g_18329E530
                                                                                     + v10);
      *(unsigned int *)((char *)&g_18329E390 + v10) = *(unsigned int *)((char *)&g_18329E534
                                                                                     + v10);
      goto LABEL_368;
    }
    *(float *)((char *)&g_18329E3A0 + v10) = sub_14023F704(
                                                              COERCE_FLOAT(dword_140404A6C[5210 * v26 + 129716732] ^ v424),
                                                              *(float *)&dword_140404A6C[5210 * v26 + 129716734]);
    *(unsigned int *)((char *)&g_18329E3A4 + v10) = 0;
    *(unsigned int *)((char *)&g_1832A4C14 + v10) = 0;
    *(unsigned int *)((char *)&g_1832A4CF0 + v10) = 0;
    if ( *(int *)((char *)&g_18329E358 + v10) > 900 )
      *(unsigned int *)((char *)&g_18329E358 + v10) = 900;
    if ( !*(unsigned int *)((char *)&g_18329E334 + v10) )
    {
      v126 = (int)dword_140404A6C[5210 * v26 + 129720183];
      if ( (_DWORD)v126 == -1 || dword_140404A6C[383 * v126 + 132400638] != v3 )
      {
        if ( *(unsigned int *)((char *)&g_18329E340 + v10) )
        {
          v127 = *(float *)((char *)&g_18329E43C + v10);
          if ( v127 > *(float *)&v1 )
            v127 = *(float *)&v1;
          *(float *)&dword_140404A6C[5210 * v26 + 129720168] = v127;
          if ( !*(unsigned int *)((char *)&g_1832A4DD8 + v10)
            || (v128 = dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v10) + 278845898],
                v128 == 15)
            || v128 == 25 )
          {
            if ( !*(unsigned int *)((char *)&g_1832A4E00 + v10)
              || (v129 = dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4E04 + v10) + 278845898],
                  v129 == 15)
              || v129 == 25 )
            {
              dword_140404A6C[5210 * v26 + 129720165] = *(unsigned int *)((char *)&g_18329E430 + v10);
              dword_140404A6C[5210 * v26 + 129720166] = *(unsigned int *)((char *)&g_18329E434 + v10);
              dword_140404A6C[5210 * v26 + 129720167] = *(unsigned int *)((char *)&g_18329E438 + v10);
              dword_140404A6C[5210 * v26 + 129720168] = *(unsigned int *)((char *)&g_18329E43C + v10);
              dword_140404A6C[5210 * v26 + 129720173] = *(unsigned int *)((char *)&g_18329E51C + v10);
              dword_140404A6C[5210 * v26 + 129716714] = *(unsigned int *)((char *)&g_18329E310 + v10);
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
      v134 = (int *)((char *)&g_18329F290 + v10);
      v135 = *(float *)((char *)&g_15F2DE2E4 + v133);
      v136 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + v133)
                                   * *(float *)&dword_140404A6C[5210 * v26 + 129716726])
                           + *(float *)&dword_140404A6C[5210 * v26 + 129716720])
                   + (float)(v135 * *(float *)&dword_140404A6C[5210 * v26 + 129716729]))
           + (float)(*(float *)((char *)&g_15F2DE2E8 + v133)
                   * *(float *)&dword_140404A6C[5210 * v26 + 129716732]);
      v137 = *(float *)((char *)&g_15F2DE2E8 + v133) * *(float *)&dword_140404A6C[5210 * v26 + 129716733];
      v138 = (float)((float)(*(float *)((char *)&g_15F2DE2E0 + v133)
                           * *(float *)&dword_140404A6C[5210 * v26 + 129716728])
                   + *(float *)&dword_140404A6C[5210 * v26 + 129716722])
           + (float)(v135 * *(float *)&dword_140404A6C[5210 * v26 + 129716731]);
      v139 = *(float *)((char *)&g_15F2DE2E8 + v133) * *(float *)&dword_140404A6C[5210 * v26 + 129716734];
      v140 = (float)((float)(*(float *)((char *)&g_15F2DE2E0 + v133)
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
          v171 = *(unsigned int *)((char *)&g_15F2DE2E0 + v133);
          v168 = *(int *)((char *)&g_18329E528 + v10);
          v169 = 0;
          v170 = *(float *)((char *)&g_15F2DE2E4 + v133) + v432;
          *(float *)&v171 = (float)((float)((float)(*(float *)&v171
                                                  * *(float *)((char *)&g_15F2D9248 + v60))
                                          + *(float *)((char *)&g_15F2D9230 + v60))
                                  + (float)(v145 * v170))
                          + (float)(*(float *)((char *)&g_15F2DE2E8 + v133)
                                  * *(float *)((char *)&g_15F2D9260 + v60));
          v172 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + v133)
                                       * *(float *)((char *)&g_15F2D9244 + v60))
                               + *(float *)((char *)&g_15F2D922C + v60))
                       + (float)(v170 * *(float *)((char *)&g_15F2D9250 + v60)))
               + (float)(*(float *)((char *)&g_15F2DE2E8 + v133)
                       * *(float *)((char *)&g_15F2D925C + v60));
          v173 = 47 * v168;
          v174 = (float)((float)((float)(*(float *)((char *)&g_15F2DE2E0 + v133)
                                       * *(float *)((char *)&g_15F2D924C + v60))
                               + *(float *)((char *)&g_15F2D9234 + v60))
                       + (float)(v170 * v146))
               + (float)(*(float *)((char *)&g_15F2DE2E8 + v133)
                       * *(float *)((char *)&g_15F2D9264 + v60));
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
            v179 = *(float *)((char *)&g_15F2D9250 + v60);
            v180 = *(unsigned int *)((char *)&g_15F2D9254 + v60);
            v181 = *(float *)((char *)&g_15F2D9258 + v60);
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
            v185 = *(unsigned int *)((char *)&g_15F2D9228 + v60);
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
                crt_memset((void *)(uintptr_t)(&dword_140404A6C[v195 + 486149254]), 0, 0xF0u);
                dword_140404A6C[v195 + 486149253] = 1;
                dword_140404A6C[v195 + 486149254] = 10;
                v196 = 18 * v194;
                *(_QWORD *)&dword_140404A6C[v195 + 486149256] = 0;
                dword_140404A6C[v195 + 486149291] = *(unsigned int *)((char *)&g_15F2D9228 + v60);
                v197 = v410;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543029] = 0;
                dword_140404A6C[v195 + 486149293] = v197;
                v198 = *(unsigned int *)((char *)&g_15F2DE2E0 + v133);
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543033] = 0;
                dword_140404A6C[v195 + 486149292] = v168;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543037] = 0;
                dword_140404A6C[v195 + 486149281] = 1048576000;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543041] = 0;
                dword_140404A6C[v195 + 486149282] = 1052770304;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543045] = 0;
                dword_140404A6C[v195 + 486149267] = v198;
                v199 = *(unsigned int *)((char *)&g_15F2DE2E8 + v133);
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543049] = 0;
                dword_140404A6C[v195 + 486149269] = v199;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543053] = 0;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543057] = 0;
                *(_OWORD *)&dword_140404A6C[2 * v196 + 485543061] = 0;
                v200 = *(unsigned int *)((char *)&g_15F2DE2E4 + v133);
                *(float *)&dword_140404A6C[v195 + 486149268] = *(float *)&v200 + v422;
                *(_QWORD *)&dword_140404A6C[v195 + 486149270] = 0;
                dword_140404A6C[v195 + 486149272] = 0;
                *(float *)&v200 = sub_14002D050(
                                    &sr_human_tick_point[0],
                                    (float *)((char *)&g_15F2D9244 + v60),
                                    (float *)&dword_140404A6C[47 * v168 + 18215724]);
                v201 = g_16B27ECFC;
                v202 = *(float *)&v200;
                if ( g_16B27ECFC )
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
    if ( dword_140404A6C[24944 * *(unsigned int *)((char *)&g_15F2D9204 + v60) + 346707718] )
      goto LABEL_349;
    v210 = *(float *)((char *)&g_15F2D9248 + v60);
    v211 = *(float *)((char *)&g_15F2D924C + v60);
    v212 = *(float *)((char *)&g_15F2D9244 + v60);
    v213 = 47LL * *(int *)((char *)&g_18329E528 + v10);
    v214 = *(unsigned int *)((char *)&g_18329E354 + v10);
    v215 = v60 + 12LL * (int)v27;
    v216 = *(float *)((char *)&g_15F2DE2E0 + v215);
    v217 = (float)(v216 * v210) + *(float *)((char *)&g_15F2D9230 + v60);
    v218 = (float)(v216 * v211) + *(float *)((char *)&g_15F2D9234 + v60);
    v219 = (float)(v216 * v212) + *(float *)((char *)&g_15F2D922C + v60);
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
    v221 = *(float *)((char *)&g_15F2D9254 + v60);
    v222 = *(float *)((char *)&g_15F2DE2E4 + v215) + 0.25;
    v223 = *(float *)((char *)&g_15F2D9258 + v60);
    v224 = *(float *)((char *)&g_15F2D9250 + v60);
    v225 = *(float *)((char *)&g_15F2D925C + v60);
    v226 = *(unsigned int *)((char *)&g_15F2D928C + v60);
    *(float *)&dword_140404A6C[v213 + 18215716] = (float)(v221 * v222) + v217;
    *(float *)&v227 = (float)(v223 * v222) + v218;
    v228 = *(float *)((char *)&g_15F2DE2E8 + v215);
    v229 = (float *)&dword_140404A6C[v213 + 18215730];
    dword_140404A6C[v213 + 18215717] = v227;
    v230 = v224 * v222;
    v231 = *(float *)((char *)&g_15F2D9260 + v60);
    v232 = v230 + v219;
    v233 = *(float *)((char *)&g_15F2D9264 + v60);
    *(float *)&dword_140404A6C[v213 + 18215715] = v232 + (float)(v225 * v228);
    *(float *)&dword_140404A6C[v213 + 18215716] = (float)(v231 * v228) + *(float *)&dword_140404A6C[v213 + 18215716];
    *(float *)&dword_140404A6C[v213 + 18215717] = (float)(v233 * v228) + *(float *)&dword_140404A6C[v213 + 18215717];
    dword_140404A6C[v213 + 18215718] = v226;
    dword_140404A6C[v213 + 18215719] = *(unsigned int *)((char *)&g_15F2D9290 + v60);
    dword_140404A6C[v213 + 18215720] = *(unsigned int *)((char *)&g_15F2D9294 + v60);
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
    v250 = *(int *)((char *)&g_15F2D9228 + v60);
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
      v265 = *(unsigned int *)((char *)&g_18329E354 + v10);
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
        sr_human_tick_point[0] = *(float *)((char *)&g_18329E52C + v10) - (float)(*(float *)&dword_1402F6188 * v4);
        sr_human_tick_point[1] = *(float *)((char *)&g_18329E530 + v10) - (float)(*(float *)&dword_1402F618C * v4);
        sr_human_tick_point[2] = *(float *)((char *)&g_18329E534 + v10) - (float)(*(float *)&dword_1402F6190 * v4);
        if ( (unsigned int)sub_1400DC050((float *)&dword_140404A6C[7166 * v410 + 280651440], &sr_human_tick_point[0], 0) )
        {
          v271 = acos(
                   fminf(
                     *(float *)((char *)&g_18329E530 + v10) - (ragdoll_unknown_height),
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
      if ( !*(unsigned int *)((char *)&g_18329E334 + v10) )
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
      v277 = *(float *)((char *)&g_18399DEF0 + v426);
      v278 = *(float *)((char *)&g_18399DEF4 + v426);
      v279 = *(float *)((char *)&g_18399DEF8 + v426);
      *(float *)&v280 = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215724])
                      + *(float *)&dword_140404A6C[v266 + 18215715];
      dword_140404A6C[v267 + 18215715] = v280;
      *(float *)&dword_140404A6C[v267 + 18215716] = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215725])
                                                  + *(float *)&dword_140404A6C[v266 + 18215716];
      *(float *)&dword_140404A6C[v267 + 18215717] = (float)(v277 * *(float *)&dword_140404A6C[v266 + 18215726])
                                                  + *(float *)&dword_140404A6C[v266 + 18215717];
      *(float *)&v281 = (float)(v278 * *(float *)&dword_140404A6C[v266 + 18215727]) + *(float *)&v280;
      *(float *)&v282 = *(float *)((char *)(unsigned int *)&g_18399DEE4 + v276) - v277;
      v283 = *(unsigned int *)((char *)&g_18399DEE8 + v276);
      *(float *)&v283 = *(float *)&v283 - v278;
      dword_140404A6C[v267 + 18215715] = v281;
      v284 = v278 * *(float *)&dword_140404A6C[v266 + 18215728];
      sr_human_tick_point[0] = *(float *)&v282;
      sr_human_tick_point[1] = *(float *)&v283;
      *(float *)&dword_140404A6C[v267 + 18215716] = v284 + *(float *)&dword_140404A6C[v267 + 18215716];
      *(float *)&v286 = (float)(v278 * *(float *)&dword_140404A6C[v266 + 18215729])
                      + *(float *)&dword_140404A6C[v267 + 18215717];
      sr_human_tick_point[2] = *(float *)((char *)&g_18399DEEC + v276) - v279;
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
    v24 = (*(unsigned int *)((char *)&g_18329E51C + v10) & 0x800) == 0;
    *(float *)((char *)&g_18329E338 + v10) = v416;
    *(unsigned int *)((char *)&g_18329E33C + v10) = 100;
    if ( v24 )
    {
      *(unsigned int *)((char *)&g_18329E354 + v10) = 0;
      goto LABEL_361;
    }
    v289 = *(unsigned int *)((char *)&g_18329E354 + v10);
    if ( v289 <= 0
      || (v290 = v289 + 1,
          *(unsigned int *)((char *)&g_18329E354 + v10) = v290,
          v78 = *(unsigned int *)((char *)&g_18329E394 + v10),
          *(float *)&v78 = (float)((float)(*(float *)&v78 * *(float *)&v78)
                                 + (float)(*(float *)((char *)&g_18329E398 + v10)
                                         * *(float *)((char *)&g_18329E398 + v10)))
                         + (float)(*(float *)((char *)&g_18329E39C + v10)
                                 * *(float *)((char *)&g_18329E39C + v10)),
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
      *(unsigned int *)((char *)&g_18329E330 + v10) = -1;
      *v291 = *(unsigned int *)((char *)&g_18329E3A4 + v10);
      *(unsigned int *)((char *)&g_18329E450 + v10) = *(unsigned int *)((char *)&g_18329E3E0
                                                                                     + v10);
      v293 = 24944LL * *(int *)((char *)&g_15F2D9204 + v60);
      *v292 = 0;
      *(unsigned int *)((char *)&g_15F2DC820 + v60) = 4;
      *(unsigned int *)((char *)&g_18329E354 + v10) = 0;
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
                               (float *)((char *)&g_15F2D922C + v60),
                               (float *)&dword_140404A6C[7166 * v296 + 280651440 + v298],
                               0) )
          {
            v299 = (float)(g_151A84890 * 0.0625) + (ragdoll_unknown_height);
            *(v297 - 2) = (float)(g_151A8488C * 0.0625) + *(float *)&g_151A84880;
            v300 = g_151A84894 * 0.0625;
            *(v297 - 1) = v299;
            *v297 = v300 + *(float *)&g_151A84888;
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
    if ( *(int *)((char *)&g_18329E344 + v10) <= 0
      || *(int *)((char *)&g_1832A5058 + v10) < 50 )
    {
      *(unsigned int *)((char *)&g_18329E330 + v10) = -1;
      *v292 = *(unsigned int *)((char *)&g_18329E3A0 + v10);
      *v291 = *(unsigned int *)((char *)&g_18329E3A4 + v10);
      *(unsigned int *)((char *)&g_15F2DC820 + v60) = 4;
    }
    v3 = v410;
    if ( (*(unsigned int *)((char *)&g_18329E51C + v10) & 0x800) != 0
      && (*(unsigned int *)((char *)&g_18329E520 + v10) & 0x800) == 0 )
    {
      *(unsigned int *)((char *)&g_18329E354 + v10) = 1;
    }
LABEL_368:
    if ( *(int *)((char *)&g_18329E344 + v10) <= 0 )
    {
      v301 = 7;
      v302 = (int *)((char *)&g_1832A4DDC + v10);
      while ( 1 )
      {
        if ( *(v302 - 1) > 0 )
        {
          v78 = v1;
          v303 = 1760LL * *v302;
          v304 = 47LL * (int)dword_140404A6C[v303 + 278845915];
          dword_140404A6C[v304 + 18215718] = *(unsigned int *)((char *)&g_18329E544 + v10);
          dword_140404A6C[v304 + 18215719] = *(unsigned int *)((char *)&g_18329E548 + v10);
          dword_140404A6C[v304 + 18215720] = *(unsigned int *)((char *)&g_18329E54C + v10);
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
              if ( game_connected )
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
    v315 = (char *)&g_18329E570 + v10;
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
    if ( *(float *)((char *)(unsigned int *)&g_18329E56C + v428) < 0.70700002 )
      *(unsigned int *)((char *)&g_1832A4A3C + v428) = 0;
    if ( *(unsigned int *)((char *)&g_18329E330 + v319) != -1 )
    {
      *(unsigned int *)((char *)&g_18329E360 + v319) = 4;
      *(unsigned int *)((char *)&g_1832A4C14 + v319) = 0;
      *(unsigned int *)((char *)&g_1832A4CF0 + v319) = 0;
      v321 = *(unsigned int *)((char *)&g_18329E360 + v319);
      goto LABEL_386;
    }
    v321 = *(unsigned int *)((char *)&g_18329E360 + v319);
    if ( v321 == 4 )
    {
      *(unsigned int *)((char *)&g_18329E360 + v319) = 1;
      v322 = 1;
      *(unsigned int *)((char *)&g_1832A4BBC + v319) = 0;
      goto LABEL_392;
    }
LABEL_386:
    v322 = v321;
    if ( v321 == 2 )
    {
      if ( (*(unsigned int *)((char *)&g_18329E51C + v319) & 0x80000) == 0 )
      {
        v322 = 0;
        *(unsigned int *)((char *)&g_18329E360 + v319) = 0;
        goto LABEL_392;
      }
LABEL_393:
      *(unsigned int *)((char *)&g_18329E360 + v319) = 2;
      sub_1400BA210(v318);
    }
    else
    {
      if ( v321 != 3 )
      {
LABEL_392:
        if ( (*(unsigned int *)((char *)&g_18329E51C + v319) & 0x80000) != 0 )
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
    if ( *(int *)((char *)&g_18329E344 + v319) <= 0
      || *(int *)((char *)&g_1832A5058 + v319) < 50 )
    {
      v323 = v410;
      v324 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v319 + 1126819712);
      v325 = (int *)&g_18399DF44;
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
    *(unsigned int *)((char *)&g_18329E388 + v319) = *(unsigned int *)((char *)&g_18329E52C
                                                                                    + v319);
    *(unsigned int *)((char *)&g_18329E38C + v319) = *(unsigned int *)((char *)&g_18329E530
                                                                                    + v319);
    *(unsigned int *)((char *)&g_18329E390 + v319) = *(unsigned int *)((char *)&g_18329E534
                                                                                    + v319);
    *(unsigned int *)((char *)&g_18329E30C + v319) = 1;
    if ( !v24
      && !dword_140404A6C[24944 * *(unsigned int *)((char *)&g_15F2D9204 + v320) + 346707718]
      && !*(unsigned int *)((char *)&g_18329E354 + v319) )
    {
      v331 = *(unsigned int *)((char *)&g_18329E30C + v319);
      if ( v414 == 0.0 )
        v331 = 0;
      *(unsigned int *)((char *)&g_18329E30C + v319) = v331;
    }
    if ( *(float *)((char *)&g_18329E530 + v319) < -32.0 )
      *(unsigned int *)((char *)&g_18329E344 + v319) = -100;
    if ( *(unsigned int *)((char *)&g_18329E330 + v319) == -1 )
      sub_1400B2E70(v318);
    if ( *(int *)((char *)&g_18329E344 + v319) > 0 )
    {
      if ( *(unsigned int *)((char *)&g_18329E310 + v319) == -1 )
      {
        v353 = *(unsigned int *)((char *)&g_18329E340 + v319) - 1;
        goto LABEL_472;
      }
      *(unsigned int *)((char *)&g_18329E340 + v319) = 3600;
    }
    else
    {
      v332 = game_type;
      v333 = 3480;
      if ( game_type == 7 && g_183F7A5F8 )
        v333 = 3300;
      v334 = *(unsigned int *)((char *)&g_18329E340 + v319);
      v335 = v334;
      if ( v334 < v333 )
      {
        v336 = *(int *)((char *)&g_18329E310 + v319);
        if ( (_DWORD)v336 == -1 )
        {
          v351 = *(int *)((char *)&g_18329E314 + v319);
          if ( (_DWORD)v351 != -1 )
          {
            if ( (int)v351 >= 0 && (int)v351 < (int)g_160361344 )
            {
              v352 = dword_140404A6C[28 * v351 + 134050374];
              if ( (int)(v352 - 10000) > 0 )
                dword_140404A6C[28 * v351 + 134050374] = v352 - (int)(float)((float)(int)(v352 - 10000) * v423);
            }
            *(unsigned int *)((char *)&g_18329E314 + v319) = -1;
            v335 = v334;
          }
        }
        else
        {
          if ( game_type == 4 && (unsigned int)v336 <= 0xFF )
          {
            sub_14011AF80(v336, dword_140404A6C[3597 * v336 + 71856288]);
            v337 = v336;
            goto LABEL_430;
          }
          v337 = *(unsigned int *)((char *)&g_18329E310 + v319);
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
            if ( !g_183F7A5F4 )
            {
              sub_140138430(v336, 17);
              v332 = game_type;
            }
            v336 = *(int *)((char *)&g_18329E310 + v319);
            dword_140404A6C[3597 * v336 + 71856291] = 30 * (dword_140404A6C[3597 * v336 + 71856276] + 40);
          }
          if ( v332 == 5 )
          {
            if ( (unsigned int)v336 <= 0xFF )
            {
              v343 = (signed int)g_183F7A31C / 3;
              crt_sprintf(v461, "%s has died", (     char *)&dword_140404A6C[3597 * (int)v336 + 71856254]);
              if ( game_connected )
              {
                v344 = -1;
                do
                  ++v344;
                while ( SR_VEC_LANES(128, v461[0], i8)[v344] );
                v345 = world_event_count;
                if ( (int)v344 > 63 )
                  LODWORD(v344) = 63;
                v346 = game_tick;
                v347 = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + v347) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + v347) = v346;
                crt_memcpy((__m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v347 + 1195238560), v461, (int)v344);
                *(_BYTE *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v347 + 1195238560 + (int)v344) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + v347) = v344;
                *(unsigned int *)((char *)&g_1873DE484 + v347) = 3;
                world_event_count = v345 + 1;
                *(unsigned int *)((char *)&g_1873DE488 + v347) = -1;
                HIWORD(world_event_count) = 0;
                *(unsigned int *)((char *)&g_1873DE48C + v347) = 0;
              }
              v348 = g_183EBFCD4;
              if ( (int)g_183EBFCD4 <= 50400 )
              {
                if ( v343 > 0 )
                  v348 = 18000 / v343 + g_183EBFCD4;
                if ( v348 > 50400 )
                  v348 = 50400;
                g_183EBFCD4 = v348;
              }
              v332 = game_type;
              goto LABEL_456;
            }
          }
          else
          {
LABEL_456:
            if ( v332 == 7 )
            {
              v349 = 3597LL * *(int *)((char *)&g_18329E310 + v319);
              dword_140404A6C[v349 + 71857786] = 0;
              dword_140404A6C[v349 + 71857811] = 0;
              dword_140404A6C[v349 + 71857836] = 0;
              dword_140404A6C[v349 + 71857861] = 0;
              dword_140404A6C[v349 + 71857886] = 0;
              dword_140404A6C[v349 + 71857911] = 0;
              dword_140404A6C[v349 + 71857936] = 0;
            }
          }
          v350 = *(unsigned int *)((char *)&g_18329E310 + v319);
          dword_140404A6C[3597 * v350 + 71856292] = -1;
          sub_140051DC0(v350);
          v335 = *(unsigned int *)((char *)&g_18329E340 + v319);
          *(_QWORD *)((char *)&g_18329E310 + v319) = -1;
        }
      }
      v353 = v335 - 1;
      if ( ((v332 - 3) & 0xFFFFFFFD) == 0 && v353 < 4 )
        v353 = 4;
LABEL_472:
      *(unsigned int *)((char *)&g_18329E340 + v319) = v353;
      if ( v353 <= 0 )
        sub_14007F590(v410);
    }
    v354 = (float *)((char *)&g_18329E74C + v319);
    *(unsigned int *)((char *)&g_18329E520 + v319) = *(unsigned int *)((char *)&g_18329E51C
                                                                                    + v319);
    v355 = &g_18399DF44;
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
      v362 = *(float *)((char *)&g_18329E560 + v361);
      v363 = *(float *)((char *)(unsigned int *)&g_18329E55C + v361);
      v364 = *(float *)((char *)&g_18329E564 + v361);
      v365 = *(float *)((char *)(unsigned int *)&g_18329E56C + v361);
      v366 = *(float *)((char *)&g_18329E568 + v361);
      v367 = *(float *)((char *)&g_18329E570 + v361);
      v368 = *(float *)((char *)&g_18329E574 + v361);
      v413 = *(v354 - 43);
      v369 = *(v354 - 40);
      v370 = (float)((float)(v357 * v363) + (float)(v359 * v362)) + (float)(*(float *)&v426 * v364);
      v411 = *(v354 - 41);
      v371 = (float)((float)(v413 * v363) + (float)(v414 * v362)) + (float)(v411 * v364);
      *(float *)&v427 = v369;
      v372 = sub_14023F704(
               (float)((float)(v369 * v366) + (float)(v356 * v365)) + (float)(v358 * v367),
               (float)((float)(v369 * v368) + (float)(*(float *)((char *)&g_18329E578 + v361) * v356))
             + (float)(*(float *)((char *)&g_18329E57C + v361) * v358));
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
      v378 = *(float *)((char *)&g_18329E57C + v361);
      v379 = *(float *)((char *)&g_18329E578 + v361) * v414;
      v380 = (float)(v412 * v368) + (float)(*(float *)((char *)&g_18329E578 + v361) * v416);
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
      v383 = *(float *)((char *)(unsigned int *)&g_18329E55C + v361);
      v384 = *(float *)((char *)&g_18329E560 + v361);
      v385 = *(float *)((char *)&g_18329E564 + v361);
      v386 = *(float *)((char *)(unsigned int *)&g_18329E56C + v361);
      v387 = *(float *)((char *)&g_18329E568 + v361);
      v388 = *(float *)((char *)&g_18329E570 + v361);
      v389 = *(float *)((char *)&g_18329E578 + v361);
      v390 = *(float *)((char *)&g_18329E574 + v361);
      v391 = *(float *)((char *)&g_18329E57C + v361);
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
    while ( (__int64)v355 < (__int64)&g_18399E520 );
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
  unsigned int *v0;
  int i;
  int v2;
  int v3;
  __int64 v4;
  float v5;
  float v6;
  unsigned int *v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  unsigned int *v19;
  __int64 v20;
  unsigned int *v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;

  v0 = &g_1601172AC;
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v0 - 3) )
    {
      v2 = v0[1];
      if ( v2 > 0 )
        v0[1] = --v2;
      if ( (((unsigned __int8)i ^ LOBYTE(game_tick)) & 0x1F) == 0 )
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
          v7 = &g_1832A552C;
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

//----- (0000000140008440) ----------------------------------------------------
void            sub_140008440(int a1, int a2)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  signed int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  _DWORD *v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned int *v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  signed int v33;
  __int64 v34;
  float *v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float *v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140008440[16];
#define v54 (*(float (*))(void *)(sr_frame_140008440 + 0)) /* [rsp+20h] */
#define v55 (*(float (*))(void *)(sr_frame_140008440 + 4)) /* [rsp+24h] */
#define v56 (*(float (*))(void *)(sr_frame_140008440 + 8)) /* [rsp+28h] */

  v2 = a1;
  v3 = a2;
  if ( a1 != -1 && a2 != -1 && (((unsigned __int8)a1 ^ LOBYTE(game_tick)) & 1) == 0 )
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
                v17 = game_tick & 0xF;
                if ( dword_140404A6C[v5 + 280651313] != -1 )
                  v17 = 3;
                v18 = 312 * v17 + v5 * 4;
                v19 = *(float *)((char *)&g_18329E530 + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651675];
                v20 = *(float *)((char *)&g_18329E534 + v18)
                    - *(float *)&dword_140404A6C[v10 + 280651676];
                v54 = *(float *)((char *)&g_18329E52C + v18)
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
                    *v25 = *(unsigned int *)((char *)&g_18329E52C + v18);
                    v25[1] = *(unsigned int *)((char *)&g_18329E530 + v18);
                    v25[2] = *(unsigned int *)((char *)&g_18329E534 + v18);
                    dword_140404A6C[6 * (int)dword_140404A6C[v9 + 71859668]++ + 71859675 + v9] = 600;
                    if ( (_DWORD)v13 != -1 )
                    {
LABEL_23:
                      v26 = v9 * 4 + 24LL * (int)v13;
                      v27 = *(float *)((char *)&g_1516241D4 + v26) + 1.0;
                      *(float *)((char *)&g_1516241D4 + v26) = v27;
                      if ( v27 > 16.0 )
                        *(unsigned int *)((char *)&g_1516241D4 + v26) = 1098907648;
                      *(float *)((char *)&g_1516241C8 + v26) = *(float *)((char *)&g_1516241C8
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&g_1516241CC + v26) = *(float *)((char *)&g_1516241CC
                                                                                      + v26)
                                                                           * 0.875;
                      *(float *)((char *)&g_1516241D0 + v26) = *(float *)((char *)&g_1516241D0
                                                                                      + v26)
                                                                           * 0.875;
                      sub_1400A56B0(
                        &v54,
                        (float)((float)(16.0 - *(float *)((char *)&g_1516241D4 + v26)) + v23) * 0.03125,
                        0.0);
                      v28 = v56 + *(float *)((char *)&g_18329E534 + v18);
                      v29 = (float)(v55 + *(float *)((char *)&g_18329E530 + v18))
                          + (float)(*(float *)&dword_140404A6C[v5 + 280651447] * 4.0);
                      v54 = (float)(*(float *)&dword_140404A6C[v5 + 280651446] * 4.0)
                          + (float)(v54 + *(float *)((char *)&g_18329E52C + v18));
                      v30 = *(float *)&dword_140404A6C[v5 + 280651448] * 4.0;
                      v31 = (float)(v54 * 0.125) + *(float *)((char *)&g_1516241C8 + v26);
                      v55 = v29;
                      *(float *)((char *)&g_1516241C8 + v26) = v31;
                      v32 = (float)(v29 * 0.125) + *(float *)((char *)&g_1516241CC + v26);
                      v56 = v28 + v30;
                      *(float *)((char *)&g_1516241CC + v26) = v32;
                      *(float *)((char *)&g_1516241D0 + v26) = (float)((float)(v28 + v30) * 0.125)
                                                                           + *(float *)((char *)&g_1516241D0
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
          *((_OWORD *)v35 - 1) = *(_OWORD *)((char *)&g_1516241AC + v38);
          *(_QWORD *)v35 = *(_QWORD *)((char *)&g_1516241BC + v38);
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

//----- (000000014002DB60) ----------------------------------------------------
__int64            sub_14002DB60(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  unsigned int *v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  float *v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float *v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  unsigned int *v38;
  signed int v39;
  unsigned int *v40;
  __int64 v41;
  unsigned int *v42;
  __int64 v43;
  __int64 v44;
  float *v45;
  float v46;
  float v47;
  unsigned int v48;
  unsigned int *v49;
  signed int i;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _DWORD *v55;
  __int64 v56;
  float *v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  signed int v62;
  __int64 v63;
  int *v64;
  __int64 v65;
  __int64 v66;
  unsigned int *v67;
  float *v68;
  float v69;
  float v70;
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
  if ( !g_151E461C0 )
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
      v6 = g_18329E8D4;
      v7 = g_18329E8D8;
      v8 = g_18329E8DC;
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
    if ( game_state != 3 )
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
        if ( (int)g_18329E344 <= 0 )
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
  v38 = &g_151620CFC;
  v39 = 0;
  v40 = &g_187BDE868;
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
      if ( game_state == 3 )
      {
LABEL_80:
        v44 = (int)*v38;
        if ( (_DWORD)v44 == -1 || game_state == 3 )
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
  v49 = &g_182BBB2DC;
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
                if ( *(int *)((char *)&g_1816760A0 + v63) > 0 )
                {
                  v64 = (int *)((char *)&g_1816760A4 + v63);
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
                  while ( v62 < *(int *)((char *)&g_1816760A0 + v63) );
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

//----- (000000014002EFF0) ----------------------------------------------------
__int64            sub_14002EFF0(int a1)
{
  signed int v1;
  signed int v2;
  unsigned int v3;
  double v4;
  __int64 v5;
  unsigned int v6;
  __int128 v7;
  __int128 v8;
  __int64 v9;
  unsigned int v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  __int128 v15;
  double v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  double v26;
  float v27;
  float v28;
  float v29;
  float v30;
  double v31;
  float v32;
  float v33;
  double v34;
  double v35;
  double v36;
  double v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  double v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
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

  v1 = local_player;
  v2 = -1;
  if ( local_player != -1 )
    v2 = dword_140404A6C[3597 * local_player + 71856292];
  if ( a1 > 0 )
  {
    v3 = g_183F7C588;
    *(_QWORD *)&v4 = v63;
    v5 = (unsigned int)a1;
    do
    {
      if ( v2 != -1 )
      {
        if ( v2 != v3 )
        {
          *(_QWORD *)&g_183F7C5C8 = 0;
          *(unsigned int *)&g_183F7C5D0 = 0;
          g_183F7C598 = 0;
          g_183F7C5A0 = 0;
          v6 = dword_140404A6C[7166 * v2 + 280651675];
          *(unsigned int *)&g_183F7C58C = dword_140404A6C[7166 * v2 + 280651674];
          *(unsigned int *)&g_183F7C594 = dword_140404A6C[7166 * v2 + 280651676];
          v7 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651686];
          *(unsigned int *)&g_183F7C590 = v6;
          v8 = *(_OWORD *)&dword_140404A6C[7166 * v2 + 280651690];
          g_183F7C5A4 = v7;
          g_183F7C5C4 = dword_140404A6C[7166 * v2 + 280651694];
          *(_OWORD *)&g_183F7C5B4 = v8;
        }
        v9 = 7166LL * v2;
        v10 = dword_140404A6C[v9 + 280651313];
        if ( v10 == -1 )
        {
          v11 = *(float *)&dword_140404A6C[v9 + 280651357];
          v12 = 3597LL * v1;
          v13 = *(float *)&dword_140404A6C[v12 + 71856301];
          if ( (float)(v13 - v11) >= 3.14159265359 )
            v11 = v11 + 6.2831855;
          if ( (float)(v11 - v13) >= 3.14159265359 )
            v13 = v13 + 6.2831855;
          *(_QWORD *)&v4 = dword_140404A6C[v12 + 71856297];
          v14 = v11 - v13;
          if ( (float)(v14 - *(float *)&v4) >= 3.14159265359 )
            *(float *)&v4 = *(float *)&v4 + 6.2831855;
          if ( (float)(*(float *)&v4 - v14) >= 3.14159265359 )
            v14 = v14 + 6.2831855;
          *(float *)&v4 = *(float *)&v4 - v14;
        }
        v15 = *(_OWORD *)&dword_140404A6C[v9 + 280651690];
        v65 = *(_OWORD *)&dword_140404A6C[v9 + 280651686];
        v67 = dword_140404A6C[v9 + 280651694];
        v66 = v15;
        if ( fsqrt(
               (float)((float)(g_183F7C5A8 * g_183F7C5A8)
                     + (float)(*(float *)&g_183F7C5A4 * *(float *)&g_183F7C5A4))
             + (float)(g_183F7C5AC * g_183F7C5AC)) < 0.5 )
        {
          v65 = xmmword_140278D30;
          v67 = 1065353216;
          g_183F7C5C4 = 1065353216;
          v66 = xmmword_140278D30;
          g_183F7C5A4 = xmmword_140278D30;
          *(_OWORD *)&g_183F7C5B4 = xmmword_140278D30;
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
        g_183F7C58C = g_183F7C58C
                                              + (float)((float)(*(float *)&dword_140404A6C[v9 + 280651674]
                                                              - g_183F7C58C)
                                                      * 0.5);
        g_183F7C590 = g_183F7C590
                                              + (float)((float)(v17 - g_183F7C590) * 0.5);
        g_183F7C594 = g_183F7C594
                                              + (float)((float)(v18 - g_183F7C594) * 0.5);
        sub_14011C080(v64, (float *)&v65, (float *)(unsigned int *)&g_183F7C5A4);
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
        v27 = g_183F7C5B4;
        v28 = v26 + v26;
        v58 = *(float *)&v24 * v28;
        v57 = v23 * v28;
        v59 = v25 * v28;
        v60 = (float)((float)((float)(*(float *)&v24 * v28) * *(float *)&g_183F7C5B0)
                    + (float)((float)(v23 * v28) * *(float *)&g_183F7C5A4))
            + (float)((float)(v25 * v28) * g_183F7C5BC);
        v61 = (float)((float)((float)(*(float *)&v24 * v28) * g_183F7C5B4)
                    + (float)((float)(v23 * v28) * g_183F7C5A8))
            + (float)((float)(v25 * v28) * g_183F7C5C0);
        v29 = (float)(v60 * 0.125) + g_183F7C5C8;
        v62 = (float)((float)((float)(*(float *)&v24 * v28) * g_183F7C5B8)
                    + (float)((float)(v23 * v28) * g_183F7C5AC))
            + (float)((float)(v25 * v28) * *(float *)&g_183F7C5C4);
        v30 = (float)(v61 * 0.125) + g_183F7C5CC;
        *(float *)&v24 = (float)(v62 * 0.125) + g_183F7C5D0;
        HIDWORD(v31) = HIDWORD(v24);
        g_183F7C5C8 = v29 * 0.5;
        g_183F7C5CC = v30 * 0.5;
        g_183F7C5D0 = *(float *)&v24 * 0.5;
        *(float *)&v31 = fsqrt(
                           (float)((float)((float)(v30 * v30) + (float)(v29 * v29))
                                 + (float)(*(float *)&v24 * *(float *)&v24))
                         * 0.25);
        if ( *(float *)&v31 > 0.000015258789 )
        {
          v58 = (float)((float)(1.0 / *(float *)&v31) * v30) * 0.5;
          v57 = (float)(v29 * (float)(1.0 / *(float *)&v31)) * 0.5;
          v59 = (float)(*(float *)&v24 * (float)(1.0 / *(float *)&v31)) * 0.5;
          sub_14007B2A0((__int64)(unsigned int *)&g_183F7C5A4, &v57, v31);
          v27 = g_183F7C5B4;
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
          *(_QWORD *)&v34 = dword_140404A6C[3597 * local_player + 71856299];
          *(float *)&v34 = (float)(*(float *)&v34 * 0.5) + v33;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v34);
          *(_QWORD *)&v35 = dword_140404A6C[3597 * local_player + 71856300];
          *(float *)&v35 = (float)(*(float *)&v35 * 0.75) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v35);
          *(_QWORD *)&v36 = dword_140404A6C[3597 * local_player + 71856299];
          *(float *)&v36 = *(float *)&v36 * 0.5;
          sub_14007B2A0((__int64)&v65, (float *)&v65 + 3, v36);
          *(_QWORD *)&v37 = dword_140404A6C[3597 * local_player + 71856300];
          *(float *)&v37 = (float)(*(float *)&v37 * 0.25) + (float)(*(float *)&dword_140404A6C[v9 + 280651342] * 0.5);
          sub_14007B2A0((__int64)&v65, (float *)&v65, v37);
          sub_14011C080(v64, (float *)&v65, (float *)(unsigned int *)&g_183F7C5A4);
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
          v48 = (float)((float)(*(float *)&g_183F7C5B0 * (float)(v43 * v46))
                      + (float)(*(float *)&g_183F7C5A4 * v47))
              + (float)(g_183F7C5BC * (float)(v44 * v46));
          v57 = v47;
          v49 = (float)((float)(g_183F7C5B4 * (float)(v43 * v46))
                      + (float)(g_183F7C5A8 * v47))
              + (float)(g_183F7C5C0 * (float)(v44 * v46));
          HIDWORD(v4) = 0;
          v50 = (float)((float)(g_183F7C5B8 * (float)(v43 * v46))
                      + (float)(g_183F7C5AC * v47))
              + (float)(*(float *)&g_183F7C5C4 * (float)(v44 * v46));
          v60 = v48 * 0.5;
          v61 = v49 * 0.5;
          v62 = v50 * 0.5;
          *(float *)&v4 = fsqrt((float)((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50)) * 0.25);
          if ( *(float *)&v4 > 0.000015258789 )
          {
            v62 = (float)(1.0 / *(float *)&v4) * (float)(v50 * 0.5);
            v61 = (float)(1.0 / *(float *)&v4) * (float)(v49 * 0.5);
            v60 = (float)(1.0 / *(float *)&v4) * (float)(v48 * 0.5);
            v4 = fmin(fmax(v32 * -0.39269908169875, *(float *)&v4), v32 * 0.39269908169875);
            sub_14007B2A0((__int64)(unsigned int *)&g_183F7C5A4, &v60, sr_export_float_lane_container(sr_text_float_bits((float)(v4))) /* the original converts to float (cvtsd2ss) before this call */);
          }
        }
        v1 = local_player;
      }
      ++game_tick_mark;
      v3 = v2;
      g_183F7C588 = v2;
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

//----- (0000000140042930) ----------------------------------------------------
__int64            sub_140042930(__int64 a1, __int64 a2, __int64 a3)
{
  char v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  signed int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  signed int v13;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  unsigned int *v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned int v21;
  char v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  char v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  char v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  char v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  int v46;
  signed int v47;
  __int64 v48;
  int v49;
  char v50;
  int v51;
  signed int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  signed int v59;
  int v60;
  unsigned int v61;
  char v62;
  unsigned int v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int *v71;
  signed int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  signed int v77;
  signed int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int *v88;
  int *v89;
  __int64 v90;
  __int64 v91;
  signed int v92;
  signed int v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  char v101;
  int v102;
  __int64 v103;
  unsigned int *v104;
  unsigned int *v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  signed int v110;
  int v111;
  signed int v112;
  unsigned int v113;
  int v114;
  char v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  char v120;
  unsigned int v121;
  int v122;
  int v123;
  int v124;
  char v125;
  unsigned int v126;
  __int64 v127;
  __int64 v128;
  int v129;
  __int64 v130;
  int v131;
  int v132;
  char v133;
  unsigned int v134;
  __int64 v135;
  __int64 v136;
  __m128i *v137;
  unsigned __int64 v138;
  int v139;
  int v140;
  signed int v141;
  int v142;
  int v143;
  char v144;
  int v145;
  int v146;
  int v147;
  char v148;
  int v149;
  __int64 v150;
  __int64 v151;
  unsigned int v152;
  __int64 i;
  unsigned int *v154;
  unsigned int *v155;
  int v156;
  unsigned int *v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  unsigned int v164;
  unsigned int *v165;
  __int64 v166;
  unsigned int *v167;
  signed int v168;
  signed int v169;
  int v170;
  __int64 v171;
  __int64 v172;
  __int128 v173;
  __int128 v174;
  int v175;
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

  if ( (int)++g_1A4D2DD08 < 1800 )
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
      v9 = packet_in_byte;
      if ( (int)packet_in_byte >= 0x10000
        || (v10 = packet_in_byte + 1,
            (signed int)(packet_in_byte + 1) > (int)packet_in_length) )
      {
        v11 = packet_in_bit;
      }
      else
      {
        v11 = packet_in_bit;
        if ( (int)packet_in_bit > 0 )
        {
          v11 = 0;
          ++packet_in_byte;
          packet_in_bit = 0;
          v9 = v10;
        }
        v12 = v9++;
        v3 = *((_BYTE *)&packet_in_data + v12);
        v178 = v3;
        packet_in_byte = v9;
      }
      if ( v3 != 6 )
        break;
      g_1A4D2DD08 = 0;
      if ( v9 < 0x10000 && v9 + 4 <= (int)packet_in_length )
      {
        if ( v11 > 0 )
        {
          ++v9;
          packet_in_bit = 0;
          packet_in_byte = v9;
        }
        game_unknown_1a4d2dce4 = *(unsigned int *)((char *)&packet_in_data + v9);
        packet_in_byte = v9 + 4;
      }
      sub_140115AE0(&game_type, 4);
      sub_140115AE0(&g_183EBFCB0, 4);
      sub_140115AE0(&g_183EBFCC4, 8);
      v13 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000
        && (signed int)(packet_in_byte + 32) <= (int)packet_in_length )
      {
        if ( (int)packet_in_bit > 0 )
        {
          v13 = packet_in_byte + 1;
          packet_in_bit = 0;
          ++packet_in_byte;
        }
        v14 = *(_OWORD *)((char *)&packet_in_data + v13);
        v15 = *(_OWORD *)((char *)&g_1853AD434 + v13);
        packet_in_byte = v13 + 32;
        g_183EBFAB0 = v14;
        g_183EBFAC0 = v15;
      }
      sub_14018D440((float *)(unsigned int *)&game_sun_angle, 16);
      sub_14018D440((float *)(unsigned int *)&game_unknown_183ebfd58, 16);
      if ( game_type == 7 )
        sub_140115AE0(&g_183F7A604, 8);
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
        if ( local_player != -1 )
          dword_140404A6C[3597 * local_player + 71856266] = 1;
        v165 = &g_1A8E379E0;
        v166 = 256;
        v167 = &g_1A8E379E8;
        do
        {
          sub_140115AE0(v167 - 2, 1);
          if ( *v165 )
          {
            v168 = packet_in_byte;
            if ( (int)packet_in_byte < 0x10000 )
            {
              v169 = packet_in_length;
              v170 = packet_in_bit;
              if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
              {
                if ( (int)packet_in_bit > 0 )
                {
                  v168 = packet_in_byte + 1;
                  v170 = 0;
                  ++packet_in_byte;
                  packet_in_bit = 0;
                }
                v171 = v168;
                v168 += 4;
                *v167 = *(unsigned int *)((char *)&packet_in_data + v171);
                packet_in_byte = v168;
              }
              if ( v168 < 0x10000 )
              {
                if ( v168 + 32 <= v169 )
                {
                  if ( v170 > 0 )
                  {
                    ++v168;
                    v170 = 0;
                    packet_in_byte = v168;
                    packet_in_bit = 0;
                  }
                  v172 = v168;
                  v168 += 32;
                  v173 = *(_OWORD *)((char *)&packet_in_data + v172);
                  v174 = *(_OWORD *)((char *)&g_1853AD434 + v172);
                  packet_in_byte = v168;
                  *(_OWORD *)(v167 + 1) = v173;
                  *(_OWORD *)(v167 + 5) = v174;
                }
                if ( v168 < 0x10000 && v168 + 4 <= v169 )
                {
                  if ( v170 > 0 )
                  {
                    ++v168;
                    packet_in_bit = 0;
                    packet_in_byte = v168;
                  }
                  v167[17] = *(unsigned int *)((char *)&packet_in_data + v168);
                  packet_in_byte = v168 + 4;
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
    g_1A4D2DD08 = 0;
    if ( v9 < 0x10000 && v9 + 4 <= (int)packet_in_length )
    {
      if ( v11 > 0 )
      {
        ++v9;
        v11 = 0;
        packet_in_byte = v9;
        packet_in_bit = 0;
      }
      v16 = v9;
      v9 += 4;
      v6 = *(unsigned int *)((char *)&packet_in_data + v16);
      packet_in_byte = v9;
    }
    if ( v6 != game_unknown_183ebfcc8 )
      goto LABEL_388;
    if ( v9 < 0x10000 && v9 + 4 <= (int)packet_in_length )
    {
      if ( v11 > 0 )
      {
        ++v9;
        packet_in_bit = 0;
        packet_in_byte = v9;
      }
      v6 = *(unsigned int *)((char *)&packet_in_data + v9);
      packet_in_byte = v9 + 4;
    }
    if ( (int)game_tick > v6 && (signed int)(game_tick - v6) < 10000 )
      goto LABEL_388;
    game_tick = v6;
    sub_140115AE0(&game_state, 4);
    if ( game_state == 1 )
    {
      v17 = &g_151620CA8;
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
    else if ( game_state != 3 )
    {
LABEL_111:
      sub_140115AE0(&g_183EBFCD4, 24);
      sub_140115AE0(&g_183F79F84, 16);
      sub_140115AE0(&game_day_time, 30);
      sub_140115AE0(&g_183EBFDB4, 6);
      sub_140115AE0(&g_183EC5978, 6);
      sub_140115AE0(&g_183ECB53C, 6);
      sub_140115AE0(&g_183ED1100, 6);
      sub_140115AE0(&g_183ED6CC4, 6);
      sub_140115AE0(&local_player, 8);
      v45 = 10;
      v46 = packet_in_byte;
      v47 = packet_in_length;
      v48 = 3597LL * (int)local_player;
      v187 = (int)local_player;
      v192 = v48 * 4;
      if ( (int)packet_in_byte >= 0x10000
        || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
      {
        v49 = packet_in_bit;
      }
      else
      {
        v49 = packet_in_bit;
        v7 = 0;
        v50 = 0;
        while ( 1 )
        {
          v51 = 8 - v49;
          v7 |= (~(-1 << v45)
               & (*((unsigned __int8 *)&packet_in_data + v46) >> SLOBYTE(packet_in_bit))) << v50;
          v190 = v7;
          if ( v45 < (unsigned int)(8 - v49) )
            break;
          v49 = 0;
          packet_in_bit = 0;
          if ( v45 == v51 )
          {
            packet_in_byte = ++v46;
            goto LABEL_121;
          }
          ++v46;
          v45 -= v51;
          v50 += v51;
          packet_in_byte = v46;
          if ( v45 <= 0 )
            goto LABEL_121;
        }
        v49 += v45;
        packet_in_bit = v49;
      }
LABEL_121:
      v52 = v7;
      if ( v7 == 1023 )
        v52 = -1;
      v53 = v52;
      dword_140404A6C[3597 * local_player + 71856292] = v52;
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
              packet_in_bit = 0;
              packet_in_byte = v46;
              v49 = 0;
            }
            v55 = v46;
            v46 += 4;
            dword_140404A6C[v54 + 280651341] = *(unsigned int *)((char *)&packet_in_data + v55);
            packet_in_byte = v46;
          }
          if ( v46 < 0x10000 )
          {
            if ( v46 + 4 <= v47 )
            {
              if ( v49 > 0 )
              {
                ++v46;
                packet_in_bit = 0;
                packet_in_byte = v46;
                v49 = 0;
              }
              v56 = v46;
              v46 += 4;
              dword_140404A6C[v54 + 280651342] = *(unsigned int *)((char *)&packet_in_data + v56);
              packet_in_byte = v46;
            }
            if ( v46 < 0x10000 )
            {
              if ( v46 + 4 <= v47 )
              {
                if ( v49 > 0 )
                {
                  ++v46;
                  packet_in_bit = 0;
                  packet_in_byte = v46;
                  v49 = 0;
                }
                v57 = v46;
                v46 += 4;
                dword_140404A6C[v54 + 280651365] = *(unsigned int *)((char *)&packet_in_data + v57);
                packet_in_byte = v46;
              }
              if ( v46 < 0x10000 )
              {
                if ( v46 + 4 <= v47 )
                {
                  if ( v49 > 0 )
                  {
                    ++v46;
                    packet_in_bit = 0;
                    packet_in_byte = v46;
                    v49 = 0;
                  }
                  v58 = v46;
                  v46 += 4;
                  dword_140404A6C[v54 + 280651366] = *(unsigned int *)((char *)&packet_in_data + v58);
                  packet_in_byte = v46;
                }
                if ( v46 < 0x10000 && v46 + 4 <= v47 )
                {
                  if ( v49 > 0 )
                  {
                    ++v46;
                    packet_in_bit = 0;
                    packet_in_byte = v46;
                  }
                  dword_140404A6C[v54 + 280651357] = *(unsigned int *)((char *)&packet_in_data + v46);
                  packet_in_byte = v46 + 4;
                }
              }
            }
          }
        }
        sub_140115AE0(&dword_140404A6C[v54 + 280651334], 1);
        sub_140115AE0(&dword_140404A6C[v54 + 280651333], 8);
        v59 = packet_in_byte;
        v60 = 8;
        if ( (int)packet_in_byte < 0x10000
          && (signed int)(packet_in_byte + 1) <= (int)packet_in_length )
        {
          v61 = packet_in_bit;
          v8 = 0;
          v62 = 0;
          while ( 1 )
          {
            v63 = 8 - v61;
            v8 |= (~(-1 << v60)
                 & (*((unsigned __int8 *)&packet_in_data + v59) >> SLOBYTE(packet_in_bit))) << v62;
            v191 = v8;
            if ( v60 < 8 - v61 )
              break;
            packet_in_bit = 0;
            if ( v60 == v63 )
            {
              packet_in_byte = v59 + 1;
              goto LABEL_158;
            }
            ++v59;
            v60 -= v63;
            v62 += v63;
            packet_in_byte = v59;
            v61 = 0;
            if ( v60 <= 0 )
              goto LABEL_158;
          }
          packet_in_bit = v60 + v61;
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
        v49 = packet_in_bit;
        v46 = packet_in_byte;
        v47 = packet_in_length;
      }
      if ( v46 < 0x10000 )
      {
        if ( v46 + 4 <= v47 )
        {
          if ( v49 > 0 )
          {
            ++v46;
            packet_in_bit = 0;
            packet_in_byte = v46;
            v49 = 0;
          }
          v65 = v46;
          v46 += 4;
          v197 = *(unsigned int *)((char *)&packet_in_data + v65);
          packet_in_byte = v46;
        }
        if ( v46 < 0x10000 )
        {
          if ( v46 + 4 <= v47 )
          {
            if ( v49 > 0 )
            {
              ++v46;
              packet_in_bit = 0;
              packet_in_byte = v46;
              v49 = 0;
            }
            v66 = v46;
            v46 += 4;
            v198 = *(unsigned int *)((char *)&packet_in_data + v66);
            packet_in_byte = v46;
          }
          if ( v46 < 0x10000 && v46 + 4 <= v47 )
          {
            if ( v49 > 0 )
            {
              ++v46;
              packet_in_bit = 0;
              packet_in_byte = v46;
            }
            v199 = *(unsigned int *)((char *)&packet_in_data + v46);
            packet_in_byte = v46 + 4;
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
      v77 = packet_in_byte;
      if ( (int)packet_in_byte < 0x10000 )
      {
        v78 = packet_in_length;
        v79 = packet_in_bit;
        if ( (signed int)(packet_in_byte + 4) <= (int)packet_in_length )
        {
          if ( (int)packet_in_bit > 0 )
          {
            v77 = packet_in_byte + 1;
            v79 = 0;
            ++packet_in_byte;
            packet_in_bit = 0;
          }
          v80 = v77;
          v77 += 4;
          dword_140404A6C[v48 + 71856272] = *(unsigned int *)((char *)&packet_in_data + v80);
          packet_in_byte = v77;
        }
        if ( v77 < 0x10000 )
        {
          if ( v77 + 4 <= v78 )
          {
            if ( v79 > 0 )
            {
              ++v77;
              v79 = 0;
              packet_in_byte = v77;
              packet_in_bit = 0;
            }
            v81 = v77;
            v77 += 4;
            dword_140404A6C[v48 + 71856273] = *(unsigned int *)((char *)&packet_in_data + v81);
            packet_in_byte = v77;
          }
          if ( v77 < 0x10000 )
          {
            if ( v77 + 4 <= v78 )
            {
              if ( v79 > 0 )
              {
                ++v77;
                v79 = 0;
                packet_in_byte = v77;
                packet_in_bit = 0;
              }
              v82 = v77;
              v77 += 4;
              dword_140404A6C[v48 + 71856274] = *(unsigned int *)((char *)&packet_in_data + v82);
              packet_in_byte = v77;
            }
            if ( v77 < 0x10000 )
            {
              if ( v77 + 4 <= v78 )
              {
                if ( v79 > 0 )
                {
                  ++v77;
                  v79 = 0;
                  packet_in_byte = v77;
                  packet_in_bit = 0;
                }
                v83 = v77;
                v77 += 4;
                dword_140404A6C[v48 + 71856275] = *(unsigned int *)((char *)&packet_in_data + v83);
                packet_in_byte = v77;
              }
              if ( v77 < 0x10000 && v77 + 4 <= v78 )
              {
                if ( v79 > 0 )
                {
                  ++v77;
                  packet_in_bit = 0;
                  packet_in_byte = v77;
                }
                dword_140404A6C[v48 + 71856276] = *(unsigned int *)((char *)&packet_in_data + v77);
                packet_in_byte = v77 + 4;
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
      sub_140115AE0((unsigned int *)((char *)&g_151622774 + v192), 8);
      v92 = 0;
      if ( *(int *)((char *)&g_151622774 + v192) > 0 )
      {
        v93 = packet_in_length;
        v94 = v192;
        v95 = packet_in_bit;
        v96 = packet_in_byte;
        v97 = v180;
        do
        {
          v98 = v91 + 72LL * v92;
          if ( v96 < 0x10000 && v96 + 4 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              packet_in_bit = 0;
              packet_in_byte = v96;
              v95 = 0;
            }
            v99 = v96;
            v96 += 4;
            *(unsigned int *)((char *)&g_151622778 + v98) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v99);
            packet_in_byte = v96;
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
                    & (*((unsigned __int8 *)&packet_in_data + v96) >> SLOBYTE(packet_in_bit))) << v101;
              v180 = v97;
              if ( v100 < (unsigned int)(8 - v95) )
                break;
              v95 = 0;
              packet_in_bit = 0;
              if ( v100 == v102 )
              {
                packet_in_byte = ++v96;
                goto LABEL_232;
              }
              ++v96;
              v100 -= v102;
              v101 += v102;
              packet_in_byte = v96;
              if ( v100 <= 0 )
                goto LABEL_232;
            }
            v95 += v100;
            packet_in_bit = v95;
          }
LABEL_232:
          if ( v96 < 0x10000 && v96 + v97 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              packet_in_bit = 0;
              packet_in_byte = v96;
              v95 = 0;
            }
            crt_memcpy(
              (__m128i *)((char *)&g_15162277C + v98),
              (     __m128i *)((char *)&packet_in_data + v96),
              v97);
            v97 = v180;
            v96 += v180;
            packet_in_byte = v96;
          }
          *((_BYTE *)&g_15162277C + v94 + v97) = 0;
          if ( v96 < 0x10000 && v96 + 4 <= v93 )
          {
            if ( v95 > 0 )
            {
              ++v96;
              packet_in_bit = 0;
              packet_in_byte = v96;
              v95 = 0;
            }
            v103 = v96;
            v96 += 4;
            *(unsigned int *)((char *)&g_1516227BC + v98) = *(unsigned int *)((char *)&packet_in_data
                                                                                          + v103);
            packet_in_byte = v96;
          }
          ++v92;
          v94 += 72;
        }
        while ( v92 < *(int *)((char *)&g_151622774 + v91) );
        v6 = v180;
      }
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v91 + 291638484), 8);
      sub_14018F1B0();
      v104 = &g_189C1DC88;
      g_16B27E3A0 = packet_in_byte;
      v105 = &g_189C3BCC4;
      v106 = 0;
      v193 = 0;
      v107 = 0;
      v194 = 0;
      v108 = 8;
      v187 = 0;
      v109 = 0;
      v195 = &g_189C1DC88;
      v196 = &g_189C3BCC4;
      v192 = 8;
      do
      {
        sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v106 + 1237441664), 1);
        if ( *(v104 - 2) )
        {
          v110 = packet_in_byte;
          v111 = 8;
          v112 = packet_in_length;
          if ( (int)packet_in_byte >= 0x10000
            || (signed int)(packet_in_byte + 1) > (int)packet_in_length )
          {
            v113 = packet_in_bit;
            v114 = v188;
          }
          else
          {
            v113 = packet_in_bit;
            v114 = 0;
            v115 = 0;
            while ( 1 )
            {
              v116 = 8 - v113;
              v114 |= (~(-1 << v111)
                     & (*((unsigned __int8 *)&packet_in_data + v110) >> SLOBYTE(packet_in_bit))) << v115;
              v188 = v114;
              if ( v111 < 8 - v113 )
                break;
              v113 = 0;
              packet_in_bit = 0;
              if ( v111 == v116 )
              {
                packet_in_byte = ++v110;
                goto LABEL_256;
              }
              ++v110;
              v111 -= v116;
              v115 += v116;
              packet_in_byte = v110;
              if ( v111 <= 0 )
                goto LABEL_256;
            }
            v113 += v111;
            packet_in_bit = v113;
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
                     & (*((unsigned __int8 *)&packet_in_data + v110) >> SLOBYTE(packet_in_bit))) << v120;
              v185 = v119;
              if ( v118 < 8 - v113 )
                break;
              v113 = 0;
              packet_in_bit = 0;
              if ( v118 == v121 )
              {
                packet_in_byte = ++v110;
                goto LABEL_268;
              }
              ++v110;
              v118 -= v121;
              v120 += v121;
              packet_in_byte = v110;
              if ( v118 <= 0 )
                goto LABEL_268;
            }
            v113 += v118;
            packet_in_bit = v113;
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
                     & (*((unsigned __int8 *)&packet_in_data + v110) >> SLOBYTE(packet_in_bit))) << v125;
              v186 = v124;
              if ( v123 < 8 - v113 )
                break;
              v113 = 0;
              packet_in_bit = 0;
              if ( v123 == v126 )
              {
                packet_in_byte = ++v110;
                goto LABEL_280;
              }
              ++v110;
              v123 -= v126;
              v125 += v126;
              packet_in_byte = v110;
              if ( v123 <= 0 )
                goto LABEL_280;
            }
            v113 += v123;
            packet_in_bit = v113;
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
                       & (*((unsigned __int8 *)&packet_in_data + v110) >> SLOBYTE(packet_in_bit))) << v133;
                v181 = v132;
                if ( v131 < 8 - v113 )
                  break;
                packet_in_bit = 0;
                if ( v131 == v134 )
                {
                  packet_in_byte = v110 + 1;
                  goto LABEL_293;
                }
                ++v110;
                v131 -= v134;
                v133 += v134;
                packet_in_byte = v110;
                v113 = 0;
                if ( v131 <= 0 )
                  goto LABEL_293;
              }
              packet_in_bit = v131 + v113;
            }
LABEL_293:
            v135 = v132;
            v136 = v132 + v193;
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v136 + 1237564608), 11);
            sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 4 * v136 + 1237564864), 2);
            v110 = packet_in_byte;
            v112 = packet_in_length;
            v137 = (__m128i *)((char *)&dword_140404A6C[512 * v135 + 308337941] + v127);
            if ( (int)packet_in_byte >= 0x10000
              || (v138 = (int)dword_140404A6C[v135 + 308337813 + v128],
                  (signed int)(v138 + packet_in_byte) > (int)packet_in_length) )
            {
              v113 = packet_in_bit;
            }
            else
            {
              v113 = packet_in_bit;
              if ( (int)packet_in_bit > 0 )
              {
                v110 = packet_in_byte + 1;
                packet_in_bit = 0;
                ++packet_in_byte;
                v113 = 0;
              }
              crt_memcpy(v137, (     __m128i *)((char *)&packet_in_data + v110), v138);
              v110 += v138;
              packet_in_byte = v110;
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
      sub_140115AE0(&g_1A4D2DD0C, 16);
      v139 = packet_in_byte;
      v140 = 6;
      v141 = packet_in_length;
      if ( (int)packet_in_byte >= 0x10000
        || (int)packet_in_byte > (int)packet_in_length )
      {
        v142 = packet_in_bit;
        v143 = v189;
      }
      else
      {
        v142 = packet_in_bit;
        v143 = 0;
        v144 = 0;
        while ( 1 )
        {
          v145 = 8 - v142;
          v143 |= (~(-1 << v140)
                 & (*((unsigned __int8 *)&packet_in_data + v139) >> SLOBYTE(packet_in_bit))) << v144;
          v189 = v143;
          if ( v140 < (unsigned int)(8 - v142) )
            break;
          v142 = 0;
          packet_in_bit = 0;
          if ( v140 == v145 )
          {
            packet_in_byte = ++v139;
            goto LABEL_313;
          }
          ++v139;
          v140 -= v145;
          v144 += v145;
          packet_in_byte = v139;
          if ( v140 <= 0 )
            goto LABEL_313;
        }
        v142 += v140;
        packet_in_bit = v142;
      }
LABEL_313:
      v146 = 16;
      if ( v139 >= 0x10000 || v139 + 2 > (int)packet_in_length )
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
                 & (*((unsigned __int8 *)&packet_in_data + v139) >> SLOBYTE(packet_in_bit))) << v148;
          v183 = v147;
          if ( v146 < (unsigned int)(8 - v142) )
            break;
          v142 = 0;
          packet_in_bit = 0;
          if ( v146 == v149 )
          {
            packet_in_byte = ++v139;
            goto LABEL_323;
          }
          ++v139;
          v146 -= v149;
          v148 += v149;
          packet_in_byte = v139;
          if ( v146 <= 0 )
            goto LABEL_323;
        }
        v142 += v146;
        packet_in_bit = v142;
      }
LABEL_323:
      if ( v143 > 0 )
      {
        v150 = (unsigned int)v143;
        do
        {
          sub_14018DBF0(v147);
          if ( world_event_count == v147 )
          {
            ++world_event_count;
            HIWORD(world_event_count) = 0;
          }
          v147 = (unsigned __int16)(v147 + 1);
          --v150;
        }
        while ( v150 );
        v142 = packet_in_bit;
        v139 = packet_in_byte;
        v141 = packet_in_length;
        v183 = v147;
      }
      if ( v139 < 0x10000 )
      {
        if ( v139 + 4 <= v141 )
        {
          if ( v142 > 0 )
          {
            ++v139;
            packet_in_bit = 0;
            packet_in_byte = v139;
            v142 = 0;
          }
          v151 = v139;
          v139 += 4;
          g_1A6F9E13C = *(unsigned int *)((char *)&packet_in_data + v151);
          packet_in_byte = v139;
        }
        if ( v139 < 0x10000 )
        {
          if ( v139 + 4 <= v141 )
          {
            if ( v142 > 0 )
            {
              ++v139;
              packet_in_bit = 0;
              v142 = 0;
            }
            v139 += 4;
            packet_in_byte = v139;
          }
          if ( v139 < 0x10000 && v139 + 4 <= v141 )
          {
            if ( v142 > 0 )
            {
              ++v139;
              packet_in_bit = 0;
              packet_in_byte = v139;
            }
            v6 = *(unsigned int *)((char *)&packet_in_data + v139);
            packet_in_byte = v139 + 4;
          }
        }
      }
      g_1A6F9E138 = sub_140198F9B() - v6;
      dword_140404A6C[LOBYTE(g_1A6F9E13C) + 430859702] = 1;
      v152 = g_1A6F9E13C;
      for ( i = (unsigned __int8)(LOBYTE(g_1A6F9E140) + 1);
            (_DWORD)i != LOBYTE(g_1A6F9E13C);
            i = (unsigned __int8)(i + 1) )
      {
        dword_140404A6C[i + 430859702] = 0;
        v152 = g_1A6F9E13C;
      }
      g_183F7AEEC = world_event_count;
      v154 = &g_1832A4E00;
      g_1A6F9E140 = v152;
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
      while ( (__int64)v154 < (__int64)&g_1839A4600 );
      v155 = &g_182BBB1B4;
      do
      {
        if ( *(v155 - 13) )
          *v155 = 0;
        if ( v155[1747] )
          v155[1760] = 0;
        v155 += 3520;
      }
      while ( (__int64)v155 < (__int64)&g_18329B1B4 );
      v156 = 0;
      v157 = &g_182BBB1A8;
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
              v163 = *(int *)((char *)&g_1832A4DD8 + v162);
              if ( (int)v163 < 2 )
              {
                dword_140404A6C[7166 * v161 + 280658140 + 10 * (int)v157[1] + v163] = v156;
                ++*(unsigned int *)((char *)&g_1832A4DD8 + v162);
              }
            }
          }
        }
        ++v156;
        v157 += 1760;
      }
      while ( v156 < 1024 );
      v164 = g_1AD04ADD0;
      v7 = v190;
      v8 = v191;
      if ( (int)g_1AD04ADD0 < v179 )
        v164 = v179;
      v3 = v178;
      g_1AD04ADD0 = v164;
      g_1A4D2DD04 = 1;
      g_1AD04ADCC = v179;
      goto LABEL_367;
    }
    v19 = packet_in_byte;
    v20 = 16;
    if ( (int)packet_in_byte >= 0x10000
      || (signed int)(packet_in_byte + 2) > (int)packet_in_length )
    {
      v21 = packet_in_bit;
    }
    else
    {
      v21 = packet_in_bit;
      v4 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = 8 - v21;
        v4 |= (~(-1 << v20)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v22;
        v184 = v4;
        if ( v20 < 8 - v21 )
          break;
        v21 = 0;
        packet_in_bit = 0;
        if ( v20 == v23 )
        {
          packet_in_byte = ++v19;
          goto LABEL_53;
        }
        ++v19;
        v20 -= v23;
        v22 += v23;
        packet_in_byte = v19;
        if ( v20 <= 0 )
          goto LABEL_53;
      }
      v21 += v20;
      packet_in_bit = v21;
    }
LABEL_53:
    v24 = v4 | 0xFFFF0000;
    v25 = 16;
    if ( (v4 & 0x8000) == 0 )
      v24 = v4;
    g_183EBFDB0 = v24;
    if ( v19 < 0x10000 && v19 + 2 <= (int)packet_in_length )
    {
      v5 = 0;
      v26 = 0;
      while ( 1 )
      {
        v27 = 8 - v21;
        v5 |= (~(-1 << v25)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v26;
        v182 = v5;
        if ( v25 < 8 - v21 )
          break;
        v21 = 0;
        packet_in_bit = 0;
        if ( v25 == v27 )
        {
          packet_in_byte = ++v19;
          goto LABEL_64;
        }
        ++v19;
        v25 -= v27;
        v26 += v27;
        packet_in_byte = v19;
        if ( v25 <= 0 )
          goto LABEL_64;
      }
      v21 += v25;
      packet_in_bit = v21;
    }
LABEL_64:
    v28 = v5 | 0xFFFF0000;
    v29 = 16;
    if ( (v5 & 0x8000) == 0 )
      v28 = v5;
    g_183F7AE14 = v28;
    if ( v19 < 0x10000 && v19 + 2 <= (int)packet_in_length )
    {
      v4 = 0;
      v30 = 0;
      while ( 1 )
      {
        v31 = 8 - v21;
        v4 |= (~(-1 << v29)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v30;
        v184 = v4;
        if ( v29 < 8 - v21 )
          break;
        v21 = 0;
        packet_in_bit = 0;
        if ( v29 == v31 )
        {
          packet_in_byte = ++v19;
          goto LABEL_75;
        }
        ++v19;
        v29 -= v31;
        v30 += v31;
        packet_in_byte = v19;
        if ( v29 <= 0 )
          goto LABEL_75;
      }
      v21 += v29;
      packet_in_bit = v21;
    }
LABEL_75:
    v32 = v4 | 0xFFFF0000;
    v33 = 16;
    if ( (v4 & 0x8000) == 0 )
      v32 = v4;
    g_183EC5974 = v32;
    if ( v19 < 0x10000 && v19 + 2 <= (int)packet_in_length )
    {
      v5 = 0;
      v34 = 0;
      while ( 1 )
      {
        v35 = 8 - v21;
        v5 |= (~(-1 << v33)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v34;
        v182 = v5;
        if ( v33 < 8 - v21 )
          break;
        v21 = 0;
        packet_in_bit = 0;
        if ( v33 == v35 )
        {
          packet_in_byte = ++v19;
          goto LABEL_86;
        }
        ++v19;
        v33 -= v35;
        v34 += v35;
        packet_in_byte = v19;
        if ( v33 <= 0 )
          goto LABEL_86;
      }
      v21 += v33;
      packet_in_bit = v21;
    }
LABEL_86:
    v36 = v5 | 0xFFFF0000;
    v37 = 16;
    if ( (v5 & 0x8000) == 0 )
      v36 = v5;
    g_183F7AE18 = v36;
    if ( v19 < 0x10000 && v19 + 2 <= (int)packet_in_length )
    {
      v4 = 0;
      v38 = 0;
      while ( 1 )
      {
        v39 = 8 - v21;
        v4 |= (~(-1 << v37)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v38;
        v184 = v4;
        if ( v37 < 8 - v21 )
          break;
        v21 = 0;
        packet_in_bit = 0;
        if ( v37 == v39 )
        {
          packet_in_byte = ++v19;
          goto LABEL_97;
        }
        ++v19;
        v37 -= v39;
        v38 += v39;
        packet_in_byte = v19;
        if ( v37 <= 0 )
          goto LABEL_97;
      }
      v21 += v37;
      packet_in_bit = v21;
    }
LABEL_97:
    v40 = v4 | 0xFFFF0000;
    v41 = 16;
    if ( (v4 & 0x8000) == 0 )
      v40 = v4;
    g_183ECB538 = v40;
    if ( v19 < 0x10000 && v19 + 2 <= (int)packet_in_length )
    {
      v5 = 0;
      v42 = 0;
      while ( 1 )
      {
        v43 = 8 - v21;
        v5 |= (~(-1 << v41)
             & (*((unsigned __int8 *)&packet_in_data + v19) >> SLOBYTE(packet_in_bit))) << v42;
        v182 = v5;
        if ( v41 < 8 - v21 )
          break;
        packet_in_bit = 0;
        if ( v41 == v43 )
        {
          packet_in_byte = v19 + 1;
          goto LABEL_108;
        }
        ++v19;
        v41 -= v43;
        v42 += v43;
        packet_in_byte = v19;
        v21 = 0;
        if ( v41 <= 0 )
          goto LABEL_108;
      }
      packet_in_bit = v41 + v21;
    }
LABEL_108:
    v44 = v5 | 0xFFFF0000;
    if ( (v5 & 0x8000) == 0 )
      v44 = v5;
    g_183F7AE1C = v44;
    goto LABEL_111;
  }
  sub_140095FC0(a1, a2, a3);
  g_183EBFAA4 = 0;
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

//----- (0000000140055FA0) ----------------------------------------------------
__int64            sub_140055FA0(int a1, signed int a2, signed int a3, float *a4)
{
  /* Clean implementation: src/engine/human_body.c, checked against the original executable
     (tools/native-compare suite humanjoint). This wrapper keeps the entry point the recompiled callers use. */
  extern int human_create_joint_bond(int human, int parent_bone, int child_bone, const float anchor[3]);
  return (unsigned int)human_create_joint_bond(a1, a2, a3, a4); /* -1 as the original's 0xFFFFFFFF in EAX */
}

//----- (0000000140085AA0) ----------------------------------------------------
__int64 sub_140085AA0()
{
  __int64 v0;
  __int64 v1;
  __m128i v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __m128i v6;
  unsigned int *v7;
  int v8;
  unsigned int v9;
  char *v10;
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

  if ( local_player == -1 )
    return 0; /* compatibility result discarded by all reviewed callers */
  v0 = 3597LL * (int)local_player;
  v1 = (int)dword_140404A6C[v0 + 71856292];
  if ( g_18329CC24 )
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
      crt_sprintf(v18, "%s to open briefcase", off_1402B29C0[0]);
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
      crt_sprintf(v18, "%s to close briefcase", off_1402B29C0[0]);
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
  if ( *(float *)&dword_140404A6C[v3 + 280651456] < 0.69999999 )
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

//----- (0000000140087810) ----------------------------------------------------
__int64            sub_140087810(int a1, int a2)
{
  __int64 v2;
  __int64 v3;
  signed int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  float v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  unsigned int *v20;
  __int64 v21;
  unsigned int *v22;
  __int64 v23;
  __m128i v24;
  double v25;
  __int64 v26;
  signed int v27;
  int *v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  int v33;
  char *v34;
  unsigned int *v35;
  unsigned __int64 v36;
  __int64 v37;
  _BYTE *v38;
  __int64 v39;
  float *v40;
  int v41;
  unsigned int *v42;
  float v43;
  __int64 v44;
  double v45;
  double v46;
  __m128i v47;
  __int64 v48;
  __m128i v49;
  float v50;
  signed int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  float v55;
  float v56;
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
  renderer_current_font = 1;
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
    if ( *(int *)((char *)&g_151622334 + v18) > 0 )
    {
      v19 = (int)dword_140404A6C[*((unsigned __int8 *)&g_151622338 + v18) + 282486849];
      if ( (_DWORD)v19 != -1 )
        sr_CSDrawAtlasEntry(
          0,
          v19,
          (float)((float)(*((float *)&(*(int *)(void *)sr_hud_slot_positions) + 2 * (v12 & 7)) - v16)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
        + v16,
          (float)((float)(*(float *)&((uint64_t *)(void *)(sr_hud_slot_positions+1))[v12 & 7] - v17)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
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
    glBindTexture(3553, renderer_white_texture);
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
  v38 = (char *)&g_183F7C97C + 2;
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
      glBindTexture(3553, renderer_white_texture);
      sub_14006CFF0(v46, v45, 1124073472, 32.0, 9, 0, 0, 0, 1048576000);
      *(float *)&v45 = *(float *)&v45 + 32.0;
      --v44;
    }
    while ( v44 );
    v49 = v47;
    if ( *(unsigned int *)((char *)&g_151620DB0 + v36) == v41 + 2 )
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
  renderer_current_font = 2;
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

//----- (0000000140088130) ----------------------------------------------------
double            sub_140088130(int a1)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  unsigned int *v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int *v14;
  float *v15;
  unsigned int *v16;
  int v17;
  unsigned int *v18;
  float v19;
  float v20;
  int v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  unsigned int *v26;
  __int64 v27;
  float v28;
  float v29;
  int v30;
  float *v31;
  float v32;
  float v33;
  signed int v34;
  signed int v35;
  unsigned int *v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  float v40;
  float v41;
  __m128i v42;
  __m128i v43;
  unsigned int *v44;
  int v45;
  float v46;
  __m128i v47;
  double result;
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
  if ( !g_183F7CB60 )
  {
    v49 = 1123024896;
    LODWORD(v50) = 1123024896;
  }
  v2 = 0;
  v3 = 256;
  if ( g_183F79DF0 )
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
  glDisable(2884);
  v6 = &g_151620CE4;
  g_183EBFDB4 = 0;
  g_183EC5978 = 0;
  g_183ECB53C = 0;
  g_183ED1100 = 0;
  g_183ED6CC4 = 0;
  g_183EDC888 = 0;
  g_183EE244C = 0;
  g_183EE8010 = 0;
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
  if ( !g_183F7CB60 )
    v8 = 0.125;
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF11C + 284024944]);
  sub_14006CFF0(0.0, 0.0, 1132462080, 256.0, 0, 1065353216, 1065353216, 1065353216, 1061158912);
  glEnable(2848);
  glLineWidth(2.0f /* native XMM0 */);
  v13 = game_type;
  v14 = (unsigned int *)dword_1402B2834;
  v15 = (float *)(unsigned int *)&g_183EBFD60;
  if ( game_type == 4 )
  {
    v16 = (unsigned int *)dword_1402B2834;
    v17 = 0;
    v18 = (unsigned int *)&g_183EBFD60;
    do
    {
      v19 = (float)((float)((float)(*((float *)v18 + 3) + *(float *)v18) * 0.5) - g_18399EB64)
          * v8;
      v20 = (float)((float)((float)(*((float *)v18 + 5) + *((float *)v18 + 2)) * 0.5)
                  - g_18399EB6C)
          * v8;
      glBindTexture(3553, renderer_white_texture);
      if ( game_type == 4 )
      {
        sub_140081DA0(v19, v20, sr_export_float_lane_container(1098907648), *((float *)v16 - 1), *v16, v16[1], 0x3F800000u);
        if ( local_player != -1 && v17 == dword_140404A6C[3597 * local_player + 71856286] )
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
    while ( (__int64)v18 < (__int64)&g_183EE23F8 );
    v13 = game_type;
    v1 = a1;
  }
  if ( (((_DWORD)v13 - 3) & 0xFFFFFFFD) == 0 )
  {
    v21 = 0;
    do
    {
      v22 = (float)((float)((float)(v15[3] + *v15) * 0.5) - g_18399EB64) * 0.25;
      v23 = (float)((float)((float)(v15[5] + v15[2]) * 0.5) - g_18399EB6C) * 0.25;
      glBindTexture(3553, renderer_white_texture);
      if ( game_type == 3 )
      {
        sub_140081DA0(v22, v23, sr_export_float_lane_container(1098907648), *((float *)v14 - 1), *v14, v14[1], 0x3F800000u);
        if ( local_player != -1 && v21 == dword_140404A6C[3597 * local_player + 71856286] )
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
    while ( (__int64)v15 < (__int64)(unsigned int *)&g_183ED10AC );
    v13 = game_type;
  }
  if ( (_DWORD)v13 != 3 )
    goto LABEL_43;
  if ( local_player != -1 )
  {
    v13 = 14388LL * (int)local_player;
    v24 = *(int *)((char *)&g_151620CE4 + v13);
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
              v28 = *(float *)&dword_140404A6C[19 * v27 + 487148756] - g_18399EB64;
              v29 = *(float *)&dword_140404A6C[19 * v27 + 487148758] - g_18399EB6C;
              glBindTexture(3553, renderer_white_texture);
              sub_140081DA0(v28 * 0.25, v29 * 0.25, sr_export_float_lane_container(1090519040), 0.0, 0x3F800000u, 0, 0x3F800000u);
            }
          }
        }
        v26 += 279;
        --v25;
      }
      while ( v25 );
      v13 = game_type;
LABEL_43:
      if ( (_DWORD)v13 == 5 )
      {
        v30 = 0;
        if ( (int)g_1B4657DB8 > 0 )
        {
          v31 = (float *)&g_1B4657DC4;
          do
          {
            v32 = *(v31 - 2) - g_18399EB64;
            v33 = *v31 - g_18399EB6C;
            glBindTexture(3553, renderer_white_texture);
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
          while ( v30 < (int)g_1B4657DB8 );
        }
      }
    }
  }
  glLineWidth(1.0f /* native XMM0 */);
  glDisable(2848);
  if ( g_183F7CB60 )
    goto LABEL_67;
  v34 = g_175FF3464;
  v35 = 0;
  if ( (int)g_175FF3464 <= 0 )
  {
LABEL_60:
    if ( (int)item_block_region_count > 0 )
    {
      v44 = &g_1760C5684;
      do
      {
        v47 = _mm_cvtsi32_si128((int)(v44[2]));
        v45 = *(v44 - 19);
        v46 = (float)((float)((float)(*((float *)v44 - 3) + *(float *)v44) * 0.5) - g_18399EB64)
            * v8;
        *(float *)SR_VEC_LANES(128, v47, i32) = (float)((float)((float)(*(float *)SR_VEC_LANES(128, v47, i32) + *((float *)v44 - 1)) * 0.5)
                                        - g_18399EB6C)
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
      while ( v2 < (int)item_block_region_count );
    }
    goto LABEL_67;
  }
  v36 = &g_175FF348C;
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
    v41 = (float)((float)(v40 + v40) - g_18399EB64) * v8;
    *(float *)SR_VEC_LANES(128, v42, i32) = (float)((float)(*(float *)SR_VEC_LANES(128, v42, i32) + *(float *)SR_VEC_LANES(128, v42, i32))
                                    - g_18399EB6C)
                            * v8;
    if ( v37 == 1 )
    {
      v43 = _mm_castps_si128(_mm_set_ss((float)(((int)(dword_140404A6C[v39 + 225391230] - 256) / 56) & 1)));
      *(float *)SR_VEC_LANES(128, v43, i32) = (float)(*(float *)SR_VEC_LANES(128, v43, i32) * 16.0) + *(float *)SR_VEC_LANES(128, v42, i32);
      v42 = v43;
    }
    sr_text_draw_recovered((char *)&dword_140404A6C[396 * v35 + 225426047], v41, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v42))), 6.0, 5, 0.25f, 0.75f, 0.25f, 1.0f, NULL);
    v34 = g_175FF3464;
LABEL_58:
    ++v35;
    v36 += 396;
  }
  while ( v35 < v34 );
  if ( !g_183F7CB60 )
    goto LABEL_60;
LABEL_67:
  if ( v1 != -1 )
    sub_1400891B0(
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651335] - g_18399EB64) * v8,
      (float)(*(float *)&dword_140404A6C[7166 * v1 + 280651337] - g_18399EB6C) * v8,
      sr_export_float_lane_container(1082130432),
      1.0,
      0x3F800000u,
      0x3F800000u,
      0x3F400000u,
      *(float *)&dword_140404A6C[7166 * v1 + 280651341]);
  result = sub_14007BB00();
  if ( g_183F79DF0 )
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

//----- (00000001400A83B0) ----------------------------------------------------
void sub_1400A83B0()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  float v5;
  int v6;
  __int64 v7;
  __int64 v8;
  float v9;
  unsigned int *v10;
  float *v11;
  float *v12;
  float v13;
  __int64 v14;
  float v15;
  float v16[4];

  v0 = -1;
  nearest_item = -1;
  if ( local_player != -1 )
  {
    v1 = 3597LL * (int)local_player;
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
        if ( *(int *)((char *)&g_1832A4DD8 + v7) <= 0 )
          goto LABEL_8;
        v8 = 10;
        if ( v4 )
          v8 = 0;
        if ( (int)dword_140404A6C[v3 + 280658139 + v8] <= 0 )
        {
LABEL_8:
          v9 = *(float *)&dword_140404A6C[v3 + 280651694];
          v10 = &g_182BBB1A4;
          v11 = (float *)&g_182BBB1DC;
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
          nearest_item = v0;
          if ( v0 != -1 && *(int *)((char *)&g_1832A4DD8 + v7) > 0 )
          {
            if ( !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v7)
                                                + 278845898]
                                + 278521356
                                + dword_140404A6C[1760 * v0 + 278845898]] )
              v0 = -1;
            nearest_item = v0;
          }
        }
      }
    }
  }
}

//----- (00000001400A85E0) ----------------------------------------------------
_BOOL8            sub_1400A85E0(int a1, int a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  if ( a2 == 1 )
  {
    v4 = 28664LL * a1;
    v5 = a3 ^ 1LL;
    v6 = v4 + 40LL * a3;
    v7 = *(unsigned int *)((char *)&g_1832A4DD8 + v6);
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v9 = v4 + 40 * v5;
      if ( *(int *)((char *)&g_1832A4DD8 + v9) > 0 )
        return dword_140404A6C[1268
                             * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v6)
                                             + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v9)
                                             + 278845898]] != 0;
      v8 = v7 == 0;
    }
    if ( !v8 )
      return 0;
    v11 = v4 + 40 * v5;
    if ( *(int *)((char *)&g_1832A4DD8 + v11) <= 0 )
      return 0;
    v12 = 1760LL * *(int *)((char *)&g_1832A4DDC + v11);
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
    v15 = *(unsigned int *)((char *)&g_1832A4DD8 + v14);
    if ( v15 <= 0 )
      return !v15 && !dword_140404A6C[14 * a3 + 280658223 + v13] && (int)dword_140404A6C[10 * a4 + 280658159 + v13] > 0;
    return dword_140404A6C[1268
                         * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v14)
                                         + 278845898]
                         + 278521660
                         + a4]
        && (int)dword_140404A6C[10 * a4 + 280658159 + v13] < 2;
  }
}

//----- (00000001400A87A0) ----------------------------------------------------
__int64            sub_1400A87A0(int a1)
{
  int v1;
  __int64 v2;
  signed int v3;
  __int64 result;
  unsigned int *v5;
  float *v6;
  __int64 v7;
  float v8;
  float v9;
  int v10;
  unsigned int *v11;
  float v12;
  float *v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  BOOL v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  float v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  float v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  BOOL v68;
  _BOOL8 v69;
  float v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  int v76;
  double v77;
  signed int v78;
  float *v79;
  int v80;
  float v81;
  float v82;
  float v83;
  unsigned __int64 v84;
  int v85;
  __int64 v86;
  _BOOL8 v87;
  unsigned int *v88;
  float v89;
  int i;
  int v91;
  signed int v92;
  float v93;
  float *v94;
  float v95;
  float v96;
  float v97;
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
  unsigned int *v108;
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
    v5 = &g_182BBB1A4;
    v6 = (float *)&g_182BBB1DC;
    v7 = v2 * 4 + 48 * result;
    v8 = 0.5;
    dword_140404A6C[v2 + 280658335] = *(unsigned int *)((char *)&g_1832A5104 + v7);
    dword_140404A6C[v2 + 280658336] = *(unsigned int *)((char *)&g_1832A5108 + v7);
    dword_140404A6C[v2 + 280658337] = (int)(float)(*(float *)((char *)&g_1832A5108 + v7) * 100.0);
    result = *(unsigned int *)((char *)&g_1832A5104 + v7);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_140404A6C[v2 + 280651313] == -1 )
      {
        v9 = 0.5;
        v10 = 0;
        v11 = &g_182BBB1A4;
        v12 = *(float *)&dword_140404A6C[v2 + 280651693] * 1.5;
        v13 = (float *)&g_182BBB1DC;
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
      result = *(unsigned int *)((char *)&g_1832A5104 + v7);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(v16) = *(unsigned int *)((char *)&g_1832A512C + v7);
      v17 = *(int *)((char *)&g_1832A5130 + v7);
      if ( (int)v16 < 2 )
        goto LABEL_35;
      v18 = 1;
      v19 = v2 * 4 + 40 * (v17 + 2);
      v20 = *(unsigned int *)((char *)&g_1832A4DD8 + v19);
      if ( v20 > 0 )
      {
        v21 = (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v19) + 278845898];
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
      v25 = *(unsigned int *)((char *)&g_1832A4DD8 + v24);
      if ( v25 <= 0 )
      {
        if ( !v25 && !dword_140404A6C[14 * v16 + 280658223 + v2] && v20 > 0 )
          goto LABEL_34;
      }
      else if ( dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v24)
                                                   + 278845898]
                              + 278521660
                              + v17]
             && v20 < 2 )
      {
LABEL_34:
        *(unsigned int *)((char *)&g_1832A512C + v7) = v16;
LABEL_35:
        if ( (_DWORD)v16 == -1 )
          goto LABEL_53;
        v26 = *(float *)((char *)&g_1832A5108 + v7) + 0.06666667;
        *(float *)((char *)&g_1832A5108 + v7) = v26;
        v27 = v2 * 4 + 40LL * (int)v16;
        v28 = *(unsigned int *)((char *)&g_1832A4DD8 + v27);
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
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v27)
                                                   + 278845898]
                              + 278521660
                              + v17]
            || (result = 5 * v17, (int)dword_140404A6C[10 * v17 + 280658159 + v2] >= 2) )
          {
LABEL_39:
            *(unsigned int *)((char *)&g_1832A5108 + v7) = 1065353216;
            v29 = v17;
            v28 = *(unsigned int *)((char *)&g_1832A4DD8 + v27);
LABEL_40:
            if ( v28 <= 0 )
            {
              if ( v28 )
                goto LABEL_53;
              if ( dword_140404A6C[14 * (int)v16 + 280658223 + v2] )
                goto LABEL_53;
              v30 = v2 * 4 + 40 * (v29 + 2);
              if ( *(int *)((char *)&g_1832A4DD8 + v30) <= 0 )
                goto LABEL_53;
              LODWORD(v30) = *(unsigned int *)((char *)&g_1832A4DDC + v30);
              v31 = v16;
              goto LABEL_52;
            }
            v30 = *(int *)((char *)&g_1832A4DDC + v27);
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
      v32 = *(unsigned int *)((char *)&g_1832A512C + v7);
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
            if ( *(int *)((char *)&g_1832A4DD8 + v37) > 0
              && !dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v37) + 278845906] )
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
        *(unsigned int *)((char *)&g_1832A512C + v7) = v32;
      }
      if ( v32 == -1 )
        goto LABEL_111;
      v38 = *(float *)((char *)&g_1832A5108 + v7) + 0.033333335;
      *(float *)((char *)&g_1832A5108 + v7) = v38;
      v39 = v38;
      if ( v38 < 0.875
        || (v40 = v2 * 4 + 40LL * v32, *(int *)((char *)&g_1832A4DD8 + v40) <= 0)
        || (v41 = v2 * 4 + 40 * (v32 ^ 1LL), *(int *)((char *)&g_1832A4DD8 + v41) <= 0)
        || (v42 = *(int *)((char *)&g_1832A4DDC + v41),
            v43 = (int)dword_140404A6C[1760 * v42 + 278845898],
            !dword_140404A6C[1268
                           * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v40)
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
          *(unsigned int *)((char *)&g_1832A5108 + v7) = 1065353216;
        }
        v50 = v32 ^ 1LL;
        v51 = v2 * 4 + 40LL * v32;
        v52 = *(unsigned int *)((char *)&g_1832A4DD8 + v51);
        v53 = v52 == 0;
        if ( v52 > 0 )
        {
          v54 = v2 * 4 + 40 * v50;
          if ( *(int *)((char *)&g_1832A4DD8 + v54) > 0 )
          {
            v55 = *(int *)((char *)&g_1832A4DDC + v54);
            v56 = (int)dword_140404A6C[1760 * v55 + 278845898];
            if ( !dword_140404A6C[1268
                                * (int)dword_140404A6C[1760
                                                     * *(unsigned int *)((char *)&g_1832A4DDC + v51)
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
                                      *(unsigned int *)((char *)&g_1832A4DDC + v54),
                                      *(unsigned int *)((char *)&g_1832A4DDC + v51),
                                      -1,
                                      0)
                  || !dword_140404A6C[1268
                                    * dword_140404A6C[1760
                                                    * *(unsigned int *)((char *)&g_1832A4DDC + v54)
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
            if ( game_connected )
              ++dword_140404A6C[v60 + 280648157];
            goto LABEL_99;
          }
          v53 = v52 == 0;
        }
        if ( !v53 )
          goto LABEL_111;
        v64 = v2 * 4 + 40 * v50;
        if ( *(int *)((char *)&g_1832A4DD8 + v64) <= 0 )
          goto LABEL_111;
        v65 = *(int *)((char *)&g_1832A4DDC + v64);
        v66 = (int)dword_140404A6C[1760 * v65 + 278845906];
        if ( (int)v66 <= 0
          || !dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[1760 * v65 + 278845907] + 278845898]
                            + 278521356
                            + dword_140404A6C[1760 * v65 + 278845898]]
          || !(unsigned int)sub_1400E35D0(dword_140404A6C[1760 * v65 + 278845906 + v66], -1, v1, v32)
          || !dword_140404A6C[1268
                            * dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v64)
                                            + 278845898]
                            + 278521289] )
        {
          goto LABEL_111;
        }
        v63 = 0.875;
LABEL_110:
        sub_1400515E0(
          g_183E936AC,
          &dword_140404A6C[1760 * *(unsigned int *)((char *)&g_1832A4DDC + v51) + 278845916],
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
          if ( game_connected )
            ++dword_140404A6C[v47 + 280648157];
        }
      }
      *(unsigned int *)((char *)&g_1832A5108 + v7) = 0;
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
          v88 = &g_15F2D9230;
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
                    v108 = &g_18329E330;
                    while ( !*(v108 - 10) || *v108 != i || v108[1] != v92 )
                    {
                      v108 += 7166;
                      if ( (__int64)v108 >= (__int64)&g_18399DB30 )
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
            v85 = *(unsigned int *)((char *)&g_1832A512C + v7);
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
              *(unsigned int *)((char *)&g_1832A512C + v7) = v85;
            }
            if ( !dword_140404A6C[10 * v85 + 280658139 + v2] )
              sub_1400E35D0(v78, -1, v1, v85);
          }
        }
      }
    }
    else
    {
      v67 = *(unsigned int *)((char *)&g_1832A512C + v7);
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
        *(unsigned int *)((char *)&g_1832A512C + v7) = v67;
      }
      if ( v67 != -1 )
      {
        v70 = *(float *)&dword_140404A6C[v2 + 280651331];
        if ( v70 <= -0.196349540849375 || v70 >= 0.0981747704246875 )
          goto LABEL_132;
        v71 = v2 * 4 + 40LL * v67;
        if ( *(int *)((char *)&g_1832A4DD8 + v71) > 0 )
        {
          v72 = *(int *)((char *)&g_1832A4DDC + v71);
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
              if ( game_connected )
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
          if ( v77 <= 0.1472621556370313 )
            dword_140404A6C[v2 + 280651331] = 0;
          else
            *(float *)&dword_140404A6C[v2 + 280651331] = v77 - 0.1472621556370313;
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

//----- (00000001400A9760) ----------------------------------------------------
__int64            sub_1400A9760(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v5;
  int v7;
  int v8;
  int v9;

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
                                        - (float)(fminf((float)(100 - v7) * 0.039999999, 1.0) * (float)a4));
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
                                                     - (float)((float)(a4 * (100 - v9)) * 0.0099999998));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      dword_140404A6C[v5 + 280658312] += -2 * a4;
      result = dword_140404A6C[v5 + 280658300];
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                          - (float)((float)(a4 * (100 - result)) * 0.0099999998));
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

//----- (00000001400AAAA0) ----------------------------------------------------
__int64            sub_1400AAAA0(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  float *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int *v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int *v35;
  float *v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  __int64 v58;
  float v59;
  float v60;
  float v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  signed int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 result;
  unsigned int *v78;
  signed int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  signed int v83;
  __int64 v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  unsigned int *v88;
  __int64 v89;
  __int64 v90;
  unsigned int *v91;
  unsigned int *v92;
  unsigned int *v93;
  __int64 v94;
  unsigned int *v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
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
  v5 = (float *)&g_18399E2E0;
  dword_140404A6C[v2 + 280654321] = 0;
  v6 = 2;
  dword_140404A6C[v2 + 280655794] = 0;
  dword_140404A6C[v2 + 280656115] = 0;
  dword_140404A6C[v2 + 280654323] = dword_140404A6C[v2 + 280651439];
  v7 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + v7) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + v7) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v8 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v8 + 1;
  dword_140404A6C[23 * v8 + 280654346 + v2] = dword_140404A6C[v2 + 280651517];
  v9 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + v9) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + v9) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v10 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v10 + 1;
  dword_140404A6C[23 * v10 + 280654346 + v2] = dword_140404A6C[v2 + 280651595];
  v11 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + v11) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + v11) = 0;
  dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
  v12 = (int)dword_140404A6C[v2 + 280654321];
  dword_140404A6C[v2 + 280654321] = v12 + 1;
  dword_140404A6C[23 * v12 + 280654346 + v2] = dword_140404A6C[v2 + 280651673];
  v13 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
  *(_QWORD *)((char *)&g_1832A123C + v13) = 0;
  *(unsigned int *)((char *)&g_1832A1244 + v13) = 0;
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
    *(float *)((char *)&g_1832A123C + v19) = v16;
    *(float *)((char *)&g_1832A1240 + v19) = v17;
    *(float *)((char *)&g_1832A1244 + v19) = v18;
    v20 = v16 - *(v5 - 5);
    v21 = v17 - *(v5 - 4);
    v22 = v18 - *(v5 - 3);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *(v15 - 78);
    v23 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A124C + v23) = v20;
    *(float *)((char *)&g_1832A1250 + v23) = v21;
    *(float *)((char *)&g_1832A1254 + v23) = v22;
    v24 = v5[23];
    v25 = v5[24];
    v26 = v5[25];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v27 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v27 + 1;
    dword_140404A6C[23 * v27 + 280654346 + v2] = *(v15 - 78);
    v28 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A123C + v28) = v24;
    v29 = v24 - v5[20];
    *(float *)((char *)&g_1832A1240 + v28) = v25;
    v30 = v25 - v5[21];
    *(float *)((char *)&g_1832A1244 + v28) = v26;
    v31 = v26 - v5[22];
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v15;
    v32 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A124C + v32) = v29;
    *(float *)((char *)&g_1832A1250 + v32) = v30;
    *(float *)((char *)&g_1832A1254 + v32) = v31;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v33 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v33 + 1;
    dword_140404A6C[23 * v33 + 280654346 + v2] = *v15;
    v34 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(unsigned int *)((char *)&g_1832A123C + v34) = 0;
    *(_QWORD *)((char *)&g_1832A1240 + v34) = 1048576000;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 1;
    v5 += 75;
    v15 += 234;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
    --v6;
  }
  while ( v6 );
  v35 = &dword_140404A6C[v2 + 280651751];
  v36 = (float *)&g_18399E150;
  do
  {
    v37 = *(v36 - 52);
    v38 = *(v36 - 51);
    v39 = *(v36 - 50);
    dword_140404A6C[23 * (int)v14 + 280654323 + v2] = dword_140404A6C[v2 + 280651595];
    v40 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A123C + v40) = v37;
    *(float *)((char *)&g_1832A1240 + v40) = v38;
    *(float *)((char *)&g_1832A1244 + v40) = v39;
    v41 = v37 - *(v36 - 55);
    v42 = v38 - *(v36 - 54);
    v43 = v39 - *(v36 - 53);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = *v35;
    v44 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A124C + v44) = v41;
    *(float *)((char *)&g_1832A1250 + v44) = v42;
    *(float *)((char *)&g_1832A1254 + v44) = v43;
    v45 = *(v36 - 27);
    v46 = *(v36 - 26);
    v47 = *(v36 - 25);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v48 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v48 + 1;
    dword_140404A6C[23 * v48 + 280654346 + v2] = *v35;
    v49 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A123C + v49) = v45;
    v50 = v45 - *(v36 - 30);
    *(float *)((char *)&g_1832A1240 + v49) = v46;
    v51 = v46 - *(v36 - 29);
    *(float *)((char *)&g_1832A1244 + v49) = v47;
    v52 = v47 - *(v36 - 28);
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v35[78];
    v53 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A124C + v53) = v50;
    v54 = *(v36 - 2);
    *(float *)((char *)&g_1832A1250 + v53) = v51;
    v55 = *(v36 - 1);
    *(float *)((char *)&g_1832A1254 + v53) = v52;
    v56 = *v36;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v57 = (int)dword_140404A6C[v2 + 280654321];
    dword_140404A6C[v2 + 280654321] = v57 + 1;
    dword_140404A6C[23 * v57 + 280654346 + v2] = v35[78];
    v58 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A123C + v58) = v54;
    *(float *)((char *)&g_1832A1240 + v58) = v55;
    v59 = v54 - *(v36 - 5);
    v60 = v55 - *(v36 - 4);
    *(float *)((char *)&g_1832A1244 + v58) = v56;
    v61 = v56 - *(v36 - 3);
    v62 = v35[156];
    v36 += 75;
    v35 += 234;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654327 + v2] = v62;
    v63 = v2 * 4 + 92LL * (int)dword_140404A6C[v2 + 280654321];
    *(float *)((char *)&g_1832A124C + v63) = v59;
    *(float *)((char *)&g_1832A1250 + v63) = v60;
    *(float *)((char *)&g_1832A1254 + v63) = v61;
    dword_140404A6C[23 * (int)dword_140404A6C[v2 + 280654321] + 280654322 + v2] = 2;
    v14 = dword_140404A6C[v2 + 280654321] + 1;
    dword_140404A6C[v2 + 280654321] = v14;
  }
  while ( (__int64)v36 < (__int64)&g_18399E3A8 );
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
  *(unsigned int *)((char *)&g_1832A293C + result) = 15;
  if ( (int)++dword_140404A6C[v2 + 280655794] > 0 )
  {
    v78 = &dword_140404A6C[v2 + 280655795];
    do
    {
      v79 = 0;
      v80 = v2 * 4 + 92LL * (int)v78[1];
      v78[3] = *(unsigned int *)((char *)&g_1832A1238 + v80);
      result = (int)*v78;
      v81 = v2 * 4 + 92 * result;
      if ( *(int *)((char *)&g_1832A1234 + v81) > 0 )
      {
        v82 = 0;
        do
        {
          v83 = 0;
          if ( *(int *)((char *)&g_1832A1234 + v80) > 0 )
          {
            result = (__int64)&g_1832A1238 + v80;
            v84 = v82 + v2 * 4 + 92LL * (int)*v78;
            do
            {
              v85 = *(unsigned int *)((char *)&g_1832A1238 + v84);
              if ( v85 == *(_DWORD *)result )
                v78[3] = v85;
              ++v83;
              result += 16;
            }
            while ( v83 < *(int *)((char *)&g_1832A1234 + v80) );
            v3 = 0;
          }
          ++v79;
          v82 += 16;
        }
        while ( v79 < *(int *)((char *)&g_1832A1234 + v81) );
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
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  v6 = 28664LL * a1;
  result = a2;
  v8 = v6 + 312LL * a3;
  v9 = v6 + 312LL * a2;
  v10 = (float)(*(float *)((char *)&g_18329E580 + v9)
              - *(float *)((char *)&g_18329E580 + v8))
      * a6;
  v11 = (float)(*(float *)((char *)&g_18329E584 + v9)
              - *(float *)((char *)&g_18329E584 + v8))
      * a6;
  v12 = (float)(*(float *)((char *)&g_18329E588 + v9)
              - *(float *)((char *)&g_18329E588 + v8))
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
  __int64 v1;
  signed int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  signed int v31;
  double v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  __int64 v38;
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
  unsigned int v51;
  int v52;
  float v53;
  float v54;
  unsigned int v55;
  int v56;
  float v57;
  unsigned int *v58;
  float *v59;
  float v60;
  int v61;
  __int64 v62;
  float v63;
  int v64;
  __int64 v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float *v70;
  float v71;
  unsigned int v72;
  int v73;
  int v74;
  unsigned int v75;
  unsigned int *v76;
  float v77;
  float *v78;
  signed int v79;
  float v80;
  __int64 v81;
  int v82;
  float v83;
  float v84;
  __int64 v85;
  float v86;
  float v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  float v92;
  float v93;
  unsigned int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  float v108;
  unsigned int v109;
  float v110;
  float v111;
  float v112;
  float v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  unsigned int v126;
  float v127;
  float v128;
  bool v129;
  unsigned int v130;
  int v131;
  int v132;
  signed int v133;
  signed int v134;
  int v135;
  int v136;
  signed int v137;
  signed int v138;
  int *v139;
  __int64 v140;
  __int64 v141;
  signed int v142;
  int *v143;
  __int64 v144;
  signed int v145;
  int *v146;
  __int64 v147;
  signed int v148;
  int *v149;
  __int64 v150;
  signed int v151;
  int *v152;
  __int64 v153;
  signed int v154;
  int *v155;
  __int64 v156;
  signed int v157;
  int *v158;
  __int64 v159;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400B62E0[192];
#define v161 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 0)) /* [rsp+0h] */
#define v162 (*(int (*))(void *)(sr_frame_1400B62E0 + 32)) /* [rsp+20h] */
#define v163 (*(unsigned int (*))(void *)(sr_frame_1400B62E0 + 36)) /* [rsp+24h] */
#define v164 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 40)) /* [rsp+28h] */
#define v165 (*(int (*))(void *)(sr_frame_1400B62E0 + 48)) /* [rsp+30h] */
#define v166 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 56)) /* [rsp+38h] */
#define v167 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 64)) /* [rsp+40h] */
#define v168 (*(int (*))(void *)(sr_frame_1400B62E0 + 72)) /* [rsp+48h] */
#define v169 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 80)) /* [rsp+50h] */
#define v170 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 88)) /* [rsp+58h] */
#define v171 (*(float (*)[6])(void *)(sr_frame_1400B62E0 + 96)) /* [rsp+60h] */
#define v172 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 120)) /* [rsp+78h] */
#define v173 (*(float (*))(void *)(sr_frame_1400B62E0 + 128)) /* [rsp+80h] */
#define v174 (*(float (*))(void *)(sr_frame_1400B62E0 + 132)) /* [rsp+84h] */
#define v175 (*(float (*))(void *)(sr_frame_1400B62E0 + 136)) /* [rsp+88h] */
#define v176 (*(__int128 (*))(void *)(sr_frame_1400B62E0 + 144)) /* [rsp+90h] */
#define v177 (*(__int128 (*))(void *)(sr_frame_1400B62E0 + 160)) /* [rsp+A0h] */
#define v178 (*(float (*))(void *)(sr_frame_1400B62E0 + 176)) /* [rsp+B0h] */
#define v179 (*(__int64 (*))(void *)(sr_frame_1400B62E0 + 184)) /* [rsp+B8h] */

  v1 = a1;
  v2 = 0;
  v3 = 28664 * v1;
  v163 = v1;
  v172 = 28664 * v1;
  if ( dword_140404A6C[7166 * v1 + 280651305] != -1 )
    v2 = dword_140404A6C[7166 * v1 + 280651305];
  v4 = *(unsigned int *)((char *)&g_1832A5050 + v3);
  if ( v4 > 0 )
    *(unsigned int *)((char *)&g_1832A5050 + v3) = v4 - 1;
  v5 = 0;
  v6 = 0;
  v7 = v2;
  v168 = 0;
  v162 = 0;
  v169 = v2;
  v164 = 0;
  do
  {
    v8 = v3 + 40 * v6;
    v9 = *(int *)((char *)&g_1832A4DD8 + v8) <= 0;
    v166 = v8;
    if ( !v9 )
    {
      v10 = *(int *)((char *)&g_1832A4DDC + v8);
      v11 = v10;
      v12 = v3 - 936 * v6;
      v13 = 1760 * v10;
      v14 = *(float *)((char *)&g_18329F028 + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845917];
      v15 = *(float *)((char *)&g_18329F02C + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845918];
      v16 = *(float *)((char *)&g_18329F024 + v12) - *(float *)&dword_140404A6C[1760 * v10 + 278845916];
      if ( fsqrt((float)((float)(v14 * v14) + (float)(v16 * v16)) + (float)(v15 * v15)) > 1.75
        && (unsigned int)v10 <= 0x3FF )
      {
        v17 = dword_140404A6C[v13 + 278845903];
        if ( v17 == -1 )
        {
          v18 = dword_140404A6C[v13 + 278845902];
          if ( v18 == -1 )
            goto LABEL_15;
          sub_1400CA7C0(v10, v18, dword_140404A6C[v13 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v10, v17);
        }
        if ( game_connected )
          ++dword_140404A6C[v11 + 280648157];
      }
    }
LABEL_15:
    v19 = *(unsigned int *)((char *)&g_18329E51C + v3);
    v165 = 0;
    if ( (v19 & 1) != 0 )
    {
      v20 = v19 & 0x10;
      if ( v5 )
      {
        if ( v5 == 1 )
          v165 = v20 != 0;
      }
      else
      {
        v165 = v20 == 0;
      }
    }
    v21 = *(unsigned int *)((char *)&g_18329E51C + v3);
    v22 = ((v21 & 0x40) != 0) - 1;
    if ( (v21 & 0x80u) != 0 )
      v22 = 1;
    if ( (v21 & 0x100) != 0 )
      v22 = 2;
    if ( (v21 & 0x200) != 0 )
      v22 = 3;
    if ( (v21 & 0x400) != 0 )
      v22 = 4;
    v9 = *(int *)((char *)&g_1832A5058 + v3) < 50;
    LODWORD(v167) = v22;
    if ( v9 && *(int *)((char *)&g_1832A4DD8 + v8) > 0 )
    {
      v23 = *(int *)((char *)&g_1832A4DDC + v8);
      if ( (unsigned int)v23 <= 0x3FF )
      {
        v24 = 1760 * v23;
        v25 = *(int *)((char *)&g_1832A4DDC + v8);
        v26 = dword_140404A6C[1760 * v23 + 278845903];
        if ( v26 == -1 )
        {
          v27 = dword_140404A6C[v24 + 278845902];
          if ( v27 == -1 )
            goto LABEL_37;
          sub_1400CA7C0(v23, v27, dword_140404A6C[v24 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v23, v26);
        }
        if ( game_connected )
          ++dword_140404A6C[v25 + 280648157];
      }
    }
LABEL_37:
    v28 = *(unsigned int *)((char *)&g_1832A4DD8 + v8);
    if ( v28 > 0 )
    {
      v29 = *(int *)((char *)&g_1832A4DDC + v8);
      v30 = 1760 * v29;
      v31 = dword_140404A6C[1760 * v29 + 278845898];
      if ( v31 == 28 )
      {
        *(_QWORD *)&v32 = *(unsigned int *)((char *)&g_18329E430 + v3);
        v178 = 1.0;
        v176 = xmmword_140278D30;
        v177 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v176, (float *)&dword_1402F6188, v32);
        v33 = *((float *)&v176 + 1);
        v34 = *(float *)&v176;
        v35 = *((float *)&v176 + 2);
        v31 = dword_140404A6C[v30 + 278845898];
        v36 = (float)(*((float *)&v176 + 2) * 0.5) + *(float *)&dword_140404A6C[v30 + 278846087];
        *(float *)&v32 = (float)(*(float *)&v176 * 0.5) + *(float *)&dword_140404A6C[v30 + 278846085];
        v37 = v3 + 56 * v6;
        v38 = 1268LL * v31;
        *(float *)((char *)&g_1832A4F1C + v37) = (float)(*((float *)&v176 + 1) * 0.5)
                                                              + *(float *)&dword_140404A6C[v30 + 278846086];
        *(float *)((char *)&g_1832A4F20 + v37) = v36;
        v39 = *((float *)&v177 + 1);
        *(unsigned int *)((char *)&g_1832A4F18 + v37) = LODWORD(v32);
        v40 = *(float *)&dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + v8) + 278521317 + v38];
        v41 = v33 * v40;
        v42 = v34 * v40;
        v43 = v35 * v40;
        v44 = *(float *)&v177;
        v45 = v42 + *(float *)&v32;
        *(float *)((char *)&g_1832A4F18 + v37) = v45;
        *(float *)((char *)&g_1832A4F1C + v37) = v41
                                                              + *(float *)((char *)&g_1832A4F1C + v37);
        v46 = *((float *)&v176 + 3);
        *(float *)((char *)&g_1832A4F20 + v37) = v43
                                                              + *(float *)((char *)&g_1832A4F20 + v37);
        LODWORD(v32) = dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + v8) + 278521318 + v38];
        v47 = (float)(v46 * *(float *)&v32) + v45;
        *(float *)((char *)&g_1832A4F18 + v37) = v47;
        *(float *)((char *)&g_1832A4F1C + v37) = (float)(v44 * *(float *)&v32)
                                                              + *(float *)((char *)&g_1832A4F1C + v37);
        v48 = *((float *)&v177 + 2);
        *(float *)((char *)&g_1832A4F20 + v37) = (float)(v39 * *(float *)&v32)
                                                              + *(float *)((char *)&g_1832A4F20 + v37);
        LODWORD(v32) = dword_140404A6C[3 * *(int *)((char *)&g_1832A4DFC + v8) + 278521319 + v38];
        v49 = *((float *)&v177 + 3) * *(float *)&v32;
        *(float *)((char *)&g_1832A4F18 + v37) = (float)(v48 * *(float *)&v32) + v47;
        v50 = v178 * *(float *)&v32;
        *(float *)((char *)&g_1832A4F1C + v37) = v49
                                                              + *(float *)((char *)&g_1832A4F1C + v37);
        *(float *)((char *)&g_1832A4F20 + v37) = v50
                                                              + *(float *)((char *)&g_1832A4F20 + v37);
        *(unsigned int *)((char *)&g_1832A4F24 + v37) = *(unsigned int *)((char *)&g_18329E430
                                                                                       + v3);
      }
      if ( v31 == 36
        && (*(unsigned int *)((char *)&g_18329E51C + v3) & 0x800) == 0
        && (unsigned int)v29 <= 0x3FF )
      {
        v51 = dword_140404A6C[v30 + 278845903];
        if ( v51 == -1 )
        {
          v52 = dword_140404A6C[v30 + 278845902];
          if ( v52 == -1 )
            goto LABEL_49;
          sub_1400CA7C0(v29, v52, dword_140404A6C[v30 + 278845904]);
        }
        else
        {
          sub_1400CA9B0(v29, v51);
        }
        if ( game_connected )
          ++dword_140404A6C[v29 + 280648157];
      }
LABEL_49:
      if ( dword_140404A6C[v30 + 278845898] != 39 )
        goto LABEL_57;
      v53 = *(float *)((char *)&g_18329E578 + v3) + *(float *)((char *)&g_18329E578 + v3);
      v54 = *(float *)((char *)&g_18329E57C + v3) + *(float *)((char *)&g_18329E57C + v3);
      v173 = *(float *)((char *)&g_18329E52C + v3)
           - (float)(*(float *)((char *)&g_18329E574 + v3)
                   + *(float *)((char *)&g_18329E574 + v3));
      v174 = *(float *)((char *)&g_18329E530 + v3) - v53;
      v175 = *(float *)((char *)&g_18329E534 + v3) - v54;
      if ( sub_14007ABA0(
             (float *)((char *)&g_18329E52C + v3),
             &v173,
             (float *)&dword_140404A6C[v30 + 278845916]) <= 1.0 )
      {
        if ( (*((_BYTE *)&g_18329E51C + v3) & 1) != 0
          || (*((_BYTE *)&g_18329E520 + v3) & 1) == 0
          || (unsigned int)v29 > 0x3FF )
        {
          goto LABEL_57;
        }
        v55 = dword_140404A6C[v30 + 278845903];
        if ( v55 == -1 )
          goto LABEL_53;
      }
      else
      {
        if ( (unsigned int)v29 > 0x3FF )
          goto LABEL_57;
        v55 = dword_140404A6C[v30 + 278845903];
        if ( v55 == -1 )
        {
LABEL_53:
          v56 = dword_140404A6C[v30 + 278845902];
          if ( v56 == -1 )
            goto LABEL_57;
          sub_1400CA7C0(v29, v56, dword_140404A6C[v30 + 278845904]);
          goto LABEL_55;
        }
      }
      sub_1400CA9B0(v29, v55);
LABEL_55:
      if ( game_connected )
        ++dword_140404A6C[v29 + 280648157];
LABEL_57:
      if ( dword_140404A6C[v30 + 278845898] - 19 > 5
        || (*((_BYTE *)&g_18329E51C + v3) & 1) != 0
        || (*((_BYTE *)&g_18329E520 + v3) & 1) == 0 )
      {
        goto LABEL_84;
      }
      v57 = *(float *)((char *)&g_18329E8D4 + v3);
      v58 = &g_182BBB194;
      v59 = (float *)&g_182BBB1DC;
      v60 = *(float *)((char *)&g_18329E91C + v3) * 1.5;
      v61 = -1;
      v62 = -1;
      v63 = *(float *)((char *)&g_18329E920 + v3) * 1.5;
      v64 = 0;
      LODWORD(v166) = -1;
      v65 = 0;
      v66 = 0.5;
      v170 = -1;
      v67 = v57 - v60;
      v68 = *(float *)((char *)&g_18329E924 + v3) * 1.5;
      v171[0] = v67;
      v69 = *(float *)((char *)&g_18329E8D8 + v3);
      v70 = (float *)((char *)&g_18329E8D4 + v3);
      v171[1] = v69 - v63;
      v171[2] = v70[2] - v68;
      do
      {
        if ( *(v58 - 5) && *v58 == 39 && v58[4] == -1 )
        {
          v71 = sub_14007ABA0(v70, v171, v59);
          if ( v71 >= v66 )
          {
            v61 = v166;
            v62 = v170;
          }
          else
          {
            v61 = v64;
            v62 = v65;
            LODWORD(v166) = v64;
            v66 = v71;
            v170 = v65;
          }
        }
        ++v64;
        v59 += 1760;
        ++v65;
        v58 += 1760;
      }
      while ( v64 < 1024 );
      v3 = v172;
      if ( v61 == -1 || dword_140404A6C[1760 * v62 + 278845906] )
      {
LABEL_83:
        v22 = v167;
        v6 = v164;
LABEL_84:
        v74 = *(unsigned int *)((char *)&g_18329E51C + v3);
        if ( (v74 & 0x1000) != 0 )
          dword_140404A6C[v30 + 278845977] |= 2u;
        v5 = v162;
        v75 = v163;
        if ( (v74 & 0x1020) == 0 && v22 == -1 && v165 )
          dword_140404A6C[v30 + 278845977] |= 1u;
        goto LABEL_152;
      }
      if ( (unsigned int)v29 <= 0x3FF )
      {
        v72 = dword_140404A6C[v30 + 278845903];
        if ( v72 != -1 )
        {
          sub_1400CA9B0(v29, v72);
          goto LABEL_80;
        }
        v73 = dword_140404A6C[v30 + 278845902];
        if ( v73 != -1 )
        {
          sub_1400CA7C0(v29, v73, dword_140404A6C[v30 + 278845904]);
LABEL_80:
          if ( game_connected )
            ++dword_140404A6C[v29 + 280648157];
        }
      }
      sub_1400E35D0(v166, v29, -1, 0);
      goto LABEL_83;
    }
    if ( !v5
      && (*((_BYTE *)&g_18329E51C + v3) & 1) == 0
      && (*((_BYTE *)&g_18329E520 + v3) & 1) != 0
      && !v28 )
    {
      v76 = &g_182BBB1A4;
      v77 = *(float *)((char *)&g_18329E91C + v3) * 1.5;
      v78 = (float *)&g_182BBB1DC;
      v79 = -1;
      v80 = *(float *)((char *)&g_18329E920 + v3) * 1.5;
      v81 = -1;
      v82 = 0;
      v165 = -1;
      v83 = 0.5;
      v84 = *(float *)((char *)&g_18329E8D4 + v3) - v77;
      v167 = -1;
      v85 = 0;
      v86 = *(float *)((char *)&g_18329E924 + v3) * 1.5;
      v173 = v84;
      v174 = *(float *)((char *)&g_18329E8D8 + v3) - v80;
      v175 = *(float *)((char *)&g_18329E8DC + v3) - v86;
      do
      {
        if ( *(v76 - 9) && *v76 == -1 )
        {
          v87 = sub_14007ABA0((float *)((char *)&g_18329E8D4 + v3), &v173, v78);
          if ( v87 < v83 && ((v88 = (int)v76[1], (_DWORD)v88 == -1) || dword_140404A6C[1760 * v88 + 278845902] == -1) )
          {
            v79 = v82;
            v81 = v85;
            v165 = v82;
            v83 = v87;
            v167 = v85;
          }
          else
          {
            v81 = v167;
            v79 = v165;
          }
        }
        ++v82;
        v78 += 1760;
        ++v85;
        v76 += 1760;
      }
      while ( v82 < 1024 );
      if ( v79 != -1 )
      {
        v89 = 1760 * v81;
        v90 = (int)dword_140404A6C[1760 * v81 + 278845903];
        if ( (_DWORD)v90 == -1 )
          goto LABEL_107;
        if ( dword_140404A6C[1760 * v90 + 278845898] == 39 )
        {
          sub_1400E35D0(v79, -1, -1, 0);
LABEL_107:
          v8 = v166;
          v6 = v164;
          v5 = v162;
          v7 = v169;
          v91 = v3 + 48LL * *(int *)((char *)&g_1832A5100 + v3);
          if ( dword_140404A6C[v89 + 278845898] == 39 )
            *(unsigned int *)((char *)&g_1832A5104 + v91) = 4;
          else
            *(unsigned int *)((char *)&g_1832A5104 + v91) = 3;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + v3)
                                                   + 280658352]
                          + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + v3)
                                                   + 280658353]
                          + v3) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[12 * *(unsigned int *)((char *)&g_1832A5100 + v3)
                                                   + 280658343]
                          + v3) = 0;
          *(unsigned int *)((char *)&g_1832A5100 + v3) = ((unsigned __int8)*(unsigned int *)((char *)&g_1832A5100 + v3)
                                                                       + 1)
                                                                      & 7;
          goto LABEL_112;
        }
      }
      v7 = v169;
      v5 = v162;
      v6 = v164;
      v8 = v166;
    }
LABEL_112:
    if ( v22 == -1
      && !*(unsigned int *)((char *)&g_1832A4DD8 + v8)
      && !*(unsigned int *)((char *)&dword_140404A6C[14 * v6 + 280658223] + v3)
      && (*((_BYTE *)&g_18329E51C + v3) & 1) == 0
      && (*((_BYTE *)&g_18329E520 + v3) & 1) != 0
      && !v168 )
    {
      v92 = *(float *)((char *)&g_18329E920 + v3) * 2.5;
      v93 = *(float *)((char *)&g_18329E924 + v3) * 2.5;
      v173 = *(float *)((char *)&g_18329E8D4 + v3)
           - (float)(*(float *)((char *)&g_18329E91C + v3) * 2.5);
      v174 = *(float *)((char *)&g_18329E8D8 + v3) - v92;
      v175 = *(float *)((char *)&g_18329E8DC + v3) - v93;
      if ( (unsigned int)sub_1400DC050((float *)((char *)&g_18329E8D4 + v3), &v173, 0) )
      {
        if ( item_hit_layer != -1 )
        {
          v94 = sub_140016590(
                  item_hit_layer,
                  g_151A848D8,
                  g_151A848DC,
                  g_151A848E0)
              & 0xFCFFFFFF;
          if ( game_state == 2 && game_type != 5 )
          {
            v95 = (int)dword_140404A6C[3597 * v7 + 71856286];
            if ( (unsigned int)v95 <= 5 && sub_14011B8F0((float *)((char *)&g_18329E388 + v3), v95, 4.0) )
            {
              if ( item_hit_unknown_7c != 6
                && (v94 < (g_14500CA14 | 0x80000000) || v94 > (g_14500CA20 | 0x80000000))
                || dword_140404A6C[5873 * v95 + 283831509] )
              {
                if ( v94 >= (g_14500CA14 | 0x80000000)
                  && v94 <= (g_14500CA20 | 0x80000000)
                  && dword_140404A6C[5873 * v95 + 283831509] == 1 )
                {
                  sub_1400518B0(v95, 0);
                  v168 = 1;
                  dword_140404A6C[5873 * v95 + 283831509] = 0;
                }
              }
              else
              {
                sub_1400518B0(v95, 1u);
                v168 = 1;
                dword_140404A6C[5873 * v95 + 283831509] = 1;
              }
            }
          }
        }
      }
    }
    v96 = v164;
    if ( (*(unsigned int *)((char *)&g_18329E51C + v3) & 0x800) == 0 )
      *(unsigned int *)((char *)&dword_140404A6C[14 * v164 + 280658223] + v3) = 0;
    v97 = v3 + 56 * v96;
    v98 = *(unsigned int *)((char *)&g_1832A4F28 + v97);
    if ( !v98 || (v99 = *(int *)((char *)&g_1832A4F2C + v97), (_DWORD)v99 == -1) )
    {
      v75 = v163;
      goto LABEL_151;
    }
    if ( !dword_140404A6C[7166 * v99 + 280651303] )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + v97) = 0;
      v98 = 0;
    }
    v100 = 3 - v96;
    v101 = sub_1400A4440();
    if ( v101 == -1 )
    {
      v75 = v163;
LABEL_150:
      v5 = v162;
LABEL_151:
      v6 = v164;
      goto LABEL_152;
    }
    v102 = 61LL * v101;
    crt_memset((void *)(uintptr_t)(&dword_140404A6C[v102 + 486149253]), 0, 0xF4u);
    v75 = v163;
    v103 = *(int *)((char *)&g_1832A4F34 + v97);
    dword_140404A6C[v102 + 486149293] = v99;
    v104 = 3 - v162;
    dword_140404A6C[v102 + 486149291] = v75;
    dword_140404A6C[v102 + 486149294] = v103;
    v105 = v3 + 936 * v100;
    dword_140404A6C[v102 + 486149292] = 3 * v104;
    v106 = *(unsigned int *)((char *)&g_1832A4F38 + v97);
    dword_140404A6C[v102 + 486149281] = 1044381696;
    dword_140404A6C[v102 + 486149282] = 1044381696;
    dword_140404A6C[v102 + 486149257] = 0;
    v107 = 28664 * v99 + 312 * v103;
    *(_QWORD *)&dword_140404A6C[v102 + 486149267] = 0;
    dword_140404A6C[v102 + 486149269] = 0;
    dword_140404A6C[v102 + 486149270] = v106;
    dword_140404A6C[v102 + 486149271] = *(unsigned int *)((char *)&g_1832A4F3C + v97);
    dword_140404A6C[v102 + 486149272] = *(unsigned int *)((char *)&g_1832A4F40 + v97);
    v108 = *(float *)&dword_140404A6C[v102 + 486149267];
    *(float *)&v109 = (float)((float)(v108 * *(float *)((char *)(unsigned int *)&g_18329E55C + v105))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149268]
                                    * *(float *)((char *)&g_18329E568 + v105)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149269]
                            * *(float *)((char *)&g_18329E574 + v105));
    v110 = *(float *)&dword_140404A6C[v102 + 486149269] * *(float *)((char *)&g_18329E578 + v105);
    v111 = (float)(*(float *)&dword_140404A6C[v102 + 486149268] * *(float *)((char *)&g_18329E570 + v105))
         + (float)(v108 * *(float *)((char *)&g_18329E564 + v105));
    v112 = *(float *)&dword_140404A6C[v102 + 486149269] * *(float *)((char *)&g_18329E57C + v105);
    v113 = (float)(*(float *)&dword_140404A6C[v102 + 486149268] * *(float *)((char *)(unsigned int *)&g_18329E56C + v105))
         + (float)(v108 * *(float *)((char *)&g_18329E560 + v105));
    dword_140404A6C[v102 + 486149267] = v109;
    *(float *)&v114 = v111 + v112;
    *(float *)&v115 = v113 + v110;
    dword_140404A6C[v102 + 486149269] = v114;
    dword_140404A6C[v102 + 486149268] = v115;
    *(float *)&v116 = (float)((float)(*(float *)&dword_140404A6C[v102 + 486149271]
                                    * *(float *)((char *)&g_18329E568 + v107))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149270]
                                    * *(float *)((char *)(unsigned int *)&g_18329E55C + v107)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149272]
                            * *(float *)((char *)&g_18329E574 + v107));
    *(float *)&v117 = (float)((float)(*(float *)&dword_140404A6C[v102 + 486149271]
                                    * *(float *)((char *)(unsigned int *)&g_18329E56C + v107))
                            + (float)(*(float *)&dword_140404A6C[v102 + 486149270]
                                    * *(float *)((char *)&g_18329E560 + v107)))
                    + (float)(*(float *)&dword_140404A6C[v102 + 486149272]
                            * *(float *)((char *)&g_18329E578 + v107));
    v118 = *(float *)&dword_140404A6C[v102 + 486149271] * *(float *)((char *)&g_18329E570 + v107);
    v119 = *(float *)&v114 + *(float *)((char *)&g_18329E534 + v105);
    v120 = *(float *)&dword_140404A6C[v102 + 486149270] * *(float *)((char *)&g_18329E564 + v107);
    v121 = *(float *)&dword_140404A6C[v102 + 486149272] * *(float *)((char *)&g_18329E57C + v107);
    v122 = *(float *)&v109 + *(float *)((char *)&g_18329E52C + v105);
    v123 = *(float *)&v115 + *(float *)((char *)&g_18329E530 + v105);
    dword_140404A6C[v102 + 486149271] = v117;
    v124 = *(float *)&v117 + *(float *)((char *)&g_18329E530 + v107);
    dword_140404A6C[v102 + 486149270] = v116;
    v125 = *(float *)&v116 + *(float *)((char *)&g_18329E52C + v107);
    v175 = v119;
    *(float *)&v126 = (float)(v118 + v120) + v121;
    dword_140404A6C[v102 + 486149272] = v126;
    if ( fsqrt(
           (float)((float)((float)(v124 - v123) * (float)(v124 - v123))
                 + (float)((float)(v125 - v122) * (float)(v125 - v122)))
         + (float)((float)((float)(*(float *)&v126 + *(float *)((char *)&g_18329E534 + v107)) - v119)
                 * (float)((float)(*(float *)&v126 + *(float *)((char *)&g_18329E534 + v107)) - v119))) > 0.125 )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + v97) = 0;
      v98 = 0;
    }
    if ( *(int *)((char *)&g_18329E324 + v3) < 8 )
    {
      *(unsigned int *)((char *)&g_1832A4F28 + v97) = 0;
      v98 = 0;
    }
    v127 = *(float *)((char *)&g_18329E5AC + v107);
    v173 = *(float *)((char *)&g_18329E5AC + v105);
    v128 = v127 + v173;
    v174 = v127;
    *(float *)&dword_140404A6C[v102 + 486149274] = (float)(1.0 / (float)(v127 + v173)) * v173;
    *(float *)&dword_140404A6C[v102 + 486149273] = (float)(1.0 / v128) * v127;
    if ( !v98 )
      goto LABEL_150;
    v129 = (game_tick & 3) == 0;
    v130 = *(unsigned int *)((char *)&g_18329E528 + v105);
    dword_140404A6C[v102 + 486149253] = 1;
    dword_140404A6C[v102 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[v102 + 486149256] = 0;
    dword_140404A6C[v102 + 486149291] = v130;
    dword_140404A6C[v102 + 486149292] = *(unsigned int *)((char *)&g_18329E528 + v107);
    dword_140404A6C[v102 + 486149281] = 1031798784;
    dword_140404A6C[v102 + 486149282] = 1044381696;
    if ( !v129 )
      goto LABEL_150;
    v131 = *(unsigned int *)((char *)&g_18329E324 + v3);
    v6 = v164;
    v5 = v162;
    if ( v131 > 0 )
      *(unsigned int *)((char *)&g_18329E324 + v3) = v131 - 1;
LABEL_152:
    v7 = v169;
    ++v5;
    ++v6;
    v162 = v5;
    v164 = v6;
  }
  while ( v5 < 2 );
  if ( (*(unsigned int *)((char *)&g_18329E51C + v3) & 0x2000) != 0
    && (*(unsigned int *)((char *)&g_18329E520 + v3) & 0x2000) == 0 )
  {
    v132 = *(unsigned int *)((char *)&g_1832A4DD8 + v3);
    if ( v132 <= 0 )
    {
      if ( *(int *)((char *)&g_1832A4E00 + v3) > 0 && !v132 )
      {
        v137 = *(unsigned int *)((char *)&g_1832A4E04 + v3);
        v135 = 0;
        v136 = v75;
        goto LABEL_163;
      }
    }
    else
    {
      v133 = *(unsigned int *)((char *)&g_1832A4DDC + v3);
      if ( *(unsigned int *)((char *)&g_1832A4E00 + v3) )
      {
        v134 = *(unsigned int *)((char *)&g_1832A4E04 + v3);
        sub_1400E35D0(v133, -1, -1, 0);
        sub_1400E35D0(v134, -1, v163, 0);
      }
      v135 = 1;
      v136 = v163;
      v137 = v133;
LABEL_163:
      sub_1400E35D0(v137, -1, v136, v135);
    }
  }
  v138 = 0;
  if ( *(int *)((char *)&g_1832A4DD8 + v3) > 0 )
  {
    v139 = (int *)((char *)&g_1832A4DDC + v3);
    do
    {
      v140 = 1760LL * *v139;
      v141 = (int)dword_140404A6C[v140 + 278845898];
      dword_140404A6C[v140 + 278845895] = 0;
      if ( dword_140404A6C[1268 * v141 + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v138;
      ++v139;
    }
    while ( v138 < *(int *)((char *)&g_1832A4DD8 + v3) );
  }
  v142 = 0;
  if ( *(int *)((char *)&g_1832A4E00 + v3) > 0 )
  {
    v143 = (int *)((char *)&g_1832A4E04 + v3);
    do
    {
      v144 = 1760LL * *v143;
      dword_140404A6C[v144 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v144 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v142;
      ++v143;
    }
    while ( v142 < *(int *)((char *)&g_1832A4E00 + v3) );
  }
  v145 = 0;
  if ( *(int *)((char *)&g_1832A4E28 + v3) > 0 )
  {
    v146 = (int *)((char *)&g_1832A4E2C + v3);
    do
    {
      v147 = 1760LL * *v146;
      dword_140404A6C[v147 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v147 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v145;
      ++v146;
    }
    while ( v145 < *(int *)((char *)&g_1832A4E28 + v3) );
  }
  v148 = 0;
  if ( *(int *)((char *)&g_1832A4E50 + v3) > 0 )
  {
    v149 = (int *)((char *)&g_1832A4E54 + v3);
    do
    {
      v150 = 1760LL * *v149;
      dword_140404A6C[v150 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v150 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v148;
      ++v149;
    }
    while ( v148 < *(int *)((char *)&g_1832A4E50 + v3) );
  }
  v151 = 0;
  if ( *(int *)((char *)&g_1832A4E78 + v3) > 0 )
  {
    v152 = (int *)((char *)&g_1832A4E7C + v3);
    do
    {
      v153 = 1760LL * *v152;
      dword_140404A6C[v153 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v153 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v151;
      ++v152;
    }
    while ( v151 < *(int *)((char *)&g_1832A4E78 + v3) );
  }
  v154 = 0;
  if ( *(int *)((char *)&g_1832A4EA0 + v3) > 0 )
  {
    v155 = (int *)((char *)&g_1832A4EA4 + v3);
    do
    {
      v156 = 1760LL * *v155;
      dword_140404A6C[v156 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v156 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v154;
      ++v155;
    }
    while ( v154 < *(int *)((char *)&g_1832A4EA0 + v3) );
  }
  v157 = 0;
  if ( *(int *)((char *)&g_1832A4EC8 + v3) > 0 )
  {
    v158 = (int *)((char *)&g_1832A4ECC + v3);
    do
    {
      v159 = 1760LL * *v158;
      dword_140404A6C[v159 + 278845895] = 0;
      if ( dword_140404A6C[1268 * dword_140404A6C[v159 + 278845898] + 278521289] )
        *(unsigned int *)((char *)&g_18329E358 + v3) = 0;
      ++v157;
      ++v158;
    }
    while ( v157 < *(int *)((char *)&g_1832A4EC8 + v3) );
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v161
#undef v162
#undef v163
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
  unsigned __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  unsigned int v24;
  float v25;
  unsigned int v26;
  float v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  float v31;
  unsigned int v32;
  float v33;
  unsigned int v34;
  __int128 v35;
  __int128 v36;
  float v37;
  float v38;
  float v39;
  int v40;
  unsigned int *v41;
  __int64 v42;
  float *v43;
  __int64 v44;
  __int64 v45;
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
  __int64 v58;
  float v59;
  float v60;
  float v61;
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
        v20 = *(float *)((char *)&g_192EB29A4 + v19);
        v21 = *(float *)((char *)&g_192EB299C + v19);
        v22 = *(float *)((char *)&g_192EB29A0 + v19) + 0.25;
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
          v31 = (float)((float)v29 * *(float *)((char *)&g_192EB299C + v19)) * 0.033333335;
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
        v41 = &g_18399E2C8;
        v42 = 780;
        v43 = (float *)&dword_140404A6C[v1 + 280652234];
        *(float *)&dword_140404A6C[v1 + 280652144] = v77 + v39;
        do
        {
          v44 = (int)*v41;
          v45 = v1 * 4 + 312 * v44;
          v46 = *(float *)((char *)(unsigned int *)&g_18329E55C + v45);
          *(v43 - 2) = v46;
          v47 = *(float *)((char *)&g_18329E560 + v45);
          *(v43 - 1) = v47;
          v48 = *(float *)((char *)&g_18329E564 + v45);
          *v43 = v48;
          v49 = *(float *)((char *)&g_18329E568 + v45);
          v43[1] = v49;
          v50 = *(float *)((char *)(unsigned int *)&g_18329E56C + v45);
          v43[2] = v50;
          v51 = *(float *)((char *)&g_18329E570 + v45);
          v43[3] = v51;
          v52 = *(float *)((char *)&g_18329E574 + v45);
          v43[4] = v52;
          v53 = *(float *)((char *)&g_18329E578 + v45);
          v43[5] = v53;
          v54 = *(float *)((char *)&g_18329E57C + v45);
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
          v59 = (float)(v46 * v55) + *(float *)((char *)&g_18329E52C + v58);
          *(v43 - 14) = v59;
          v60 = (float)(v47 * v55) + *(float *)((char *)&g_18329E530 + v58);
          *(v43 - 13) = v60;
          v61 = *(float *)((char *)&g_18329E534 + v58);
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
  unsigned int *v0;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  unsigned int v11;
  float v12;
  float *v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  unsigned int v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;

  v0 = &g_182BBB22C;
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
  v12 = (item_type39_child_offset);
  v13 = (float *)&g_182BBB238;
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
    v12 = (item_type39_child_offset);
    v13 += 1760;
    --v1;
  }
  while ( v1 );
}

//----- (00000001400EE780) ----------------------------------------------------
__int64            sub_1400EE780(signed int a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  signed int v10;
  unsigned int v11;
  int v12;
  signed int v13;
  unsigned int v14;
  __int64 v15;
  signed int v16;
  unsigned int v17;
  unsigned int v18;
  signed int v19;
  int j;
  int i;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  signed int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 k;
  int v37;
  __int64 v38;
  unsigned int *v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
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
        if ( game_type == 3 )
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
            crt_sprintf(
              Src,
              "%s has been fired from %s",
              (     char *)&dword_140404A6C[v34 + 71856254],
              off_1402B2890[v30]);
            if ( game_connected )
            {
              v43 = -1;
              do
                ++v43;
              while ( SR_VEC_LANES(128, Src[0], i8)[v43] );
              v44 = world_event_count;
              if ( (int)v43 > 63 )
                LODWORD(v43) = 63;
              v45 = game_tick;
              v46 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + v46) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + v46) = v45;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v46), Src, (int)v43);
              *((_BYTE *)&g_1873DE4A0 + (int)v43 + v46) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + v46) = v43;
              *(unsigned int *)((char *)&g_1873DE484 + v46) = 0;
              *(unsigned int *)((char *)&g_1873DE488 + v46) = -1;
              world_event_count = v44 + 1;
              *(unsigned int *)((char *)&g_1873DE48C + v46) = 0;
              HIWORD(world_event_count) = 0;
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

//----- (00000001400EF0D0) ----------------------------------------------------
void            sub_1400EF0D0(int a1, int a2, int a3)
{
  int v3;
  __int64 v4;
  __int64 v7;
  int v8;
  __int64 v9;
  float v10;
  float v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v16;
  float v17;
  int v18;
  int v19;
  float v20;
  int v21;
  int v22;
  float v23;
  int v24;
  int v25;
  float v26;
  unsigned int v27;
  __int64 v28;
  int v29;
  unsigned int *v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  signed int v35;
  signed int v36;
  __int64 v37;
  int i;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  signed int v44;
  __int64 v45;
  BOOL v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  signed int v51;
  __int64 v52;
  __int64 v53;
  int v54;
  unsigned int *v55;
  __int64 v56;
  __int64 v57;
  unsigned int *v58;
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
    if ( v10 < g_183EBFD60
      || v10 >= g_183EBFD6C
      || (v11 = *(float *)&dword_140404A6C[7166 * v7 + 280651337], v11 < g_183EBFD68)
      || (v12 = 1, v11 >= g_183EBFD74) )
    {
      v12 = 0;
    }
    v13 = 0;
    if ( !v12 )
      v13 = -1;
    if ( v10 < g_183EC5924
      || v10 >= g_183EC5930
      || (v14 = *(float *)&dword_140404A6C[v9 + 280651337], v14 < g_183EC592C)
      || (v15 = 1, v14 >= g_183EC5938) )
    {
      v15 = 0;
    }
    v16 = 1;
    if ( !v15 )
      v16 = v13;
    if ( v10 < g_183ECB4E8
      || v10 >= g_183ECB4F4
      || (v17 = *(float *)&dword_140404A6C[v9 + 280651337], v17 < g_183ECB4F0)
      || (v18 = 1, v17 >= g_183ECB4FC) )
    {
      v18 = 0;
    }
    v19 = 2;
    if ( !v18 )
      v19 = v16;
    if ( v10 < g_183ED10AC
      || v10 >= g_183ED10B8
      || (v20 = *(float *)&dword_140404A6C[v9 + 280651337], v20 < g_183ED10B4)
      || (v21 = 1, v20 >= g_183ED10C0) )
    {
      v21 = 0;
    }
    v22 = 3;
    if ( !v21 )
      v22 = v19;
    if ( v10 < g_183ED6C70
      || v10 >= g_183ED6C7C
      || (v23 = *(float *)&dword_140404A6C[v9 + 280651337], v23 < g_183ED6C78)
      || (v24 = 1, v23 >= g_183ED6C84) )
    {
      v24 = 0;
    }
    v25 = 4;
    if ( !v24 )
      v25 = v22;
    if ( v10 >= g_183EDC834 && v10 < g_183EDC840 )
    {
      v26 = *(float *)&dword_140404A6C[v9 + 280651337];
      if ( v26 >= g_183EDC83C && v26 < g_183EDC848 )
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
                  if ( *(int *)((char *)&g_1832A4DD8 + v47) <= 0 )
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
                    v48 = *(int *)((char *)&g_1832A4DDC + v47);
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

//----- (00000001400F0640) ----------------------------------------------------
__int64            sub_1400F0640(int a1)
{
  int v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  float *v15;
  float v16;
  float v17;
  __int64 v18;
  unsigned int *v19;
  char *v20;
  __int64 v21;
  unsigned int *v22;
  char v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  char *v27;
  unsigned int *v28;
  char v29;
  __int64 v30;
  char *v31;
  unsigned int *v32;
  char v33;
  char *v34;
  unsigned int *v35;
  char v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  signed int v40;
  int *v41;
       char *v42;
  unsigned int *v43;
  char v44;
  int v45;
  unsigned int *v46;
  int v47;
  int v48;
       char *v49;
  unsigned int *v50;
  char v51;
  char *v52;
  unsigned int *v53;
  char v54;
  char *v55;
  unsigned int *v56;
  char v57;
  char *v58;
  unsigned int *v59;
  char v60;
  char *v61;
  unsigned int *v62;
  char v63;
  char *v64;
  unsigned int *v65;
  char v66;
  char *v67;
  unsigned int *v68;
  char v69;
  char *v70;
  unsigned int *v71;
  char v72;
  char *v73;
  unsigned int *v74;
  char v75;
  char *v76;
  unsigned int *v77;
  char v78;
  int v79;
  char *v80;
  unsigned int *v81;
  char v82;
  char *v83;
  unsigned int *v84;
  char v85;
  char *v86;
  unsigned int *v87;
  char v88;
  char *v89;
  unsigned int *v90;
  char v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int *v96;
  __int64 v97;
  __int64 v98;
  float *v99;
  __int64 v100;
  float v101;
  __int64 v102;
  unsigned int v103;
  unsigned int *v104;
  int v105;
  __int64 v106;
  char *v107;
  char *v108;
  char v109;
  _WORD *v110;
  bool v111;
  char *v112;
  char *v113;
  unsigned int *v114;
  char v115;
  __int64 v116;
  int v117;
       char *v118;
  char *v119;
  unsigned int *v120;
  char v121;
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
  if ( game_state == 3 )
  {
    v5 = 0;
    dword_140404A6C[v2 + 71856342] = 0;
    goto LABEL_34;
  }
  v6 = item_block_region_count;
  v125 = dword_140404A6C[v2 + 71856342];
  if ( v125 - 9 <= 2 )
  {
    v7 = dword_140404A6C[v2 + 71856343];
    if ( v7 < 0 || v7 >= (int)item_block_region_count )
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
  v8 = &g_1760C5638;
  v9 = 0;
  if ( v6 > 0 )
  {
    v10 = &g_1760C5638;
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
    if ( game_type != 4 )
    {
      if ( ((game_type - 3) & 0xFFFFFFFB) != 0
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
    v15 = (float *)(unsigned int *)&g_183EBFD6C;
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
      if ( (__int64)v15 >= (__int64)&g_183EE2404 )
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
      *(_QWORD *)((char *)&g_15162277C + v93) = 0x614D20796C707041LL;
      *(unsigned int *)((char *)&g_151622784 + v93) = 1701273966;
      *(_WORD *)((char *)&g_151622788 + v93) = 114;
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
      *(unsigned int *)((char *)&g_15162277C + v97) = 1819308097;
      *(_WORD *)((char *)&g_151622780 + v97) = 121;
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
  v19 = &g_151623978;
  LODWORD(v126) = dword_140404A6C[v2 + 71856286];
  v127 = &g_151620C64;
  v125 = 6;
  if ( game_type != 4 )
  {
    v79 = v124;
LABEL_140:
    if ( (_DWORD)v18 != -1 )
    {
      v103 = dword_140404A6C[v2 + 71856342];
      if ( v103 == 17 )
      {
        v104 = &g_19021F24C;
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
            *(unsigned int *)((char *)&g_15162277C + v116) = 1145851731;
            *((_BYTE *)&g_151622780 + v116) = 0;
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
        v118 = (     char *)&g_151620C64;
        do
        {
          if ( *(v19 - 2886) && !*v19 && v5 != v79 )
          {
            if ( *(v19 - 2853) == dword_140404A6C[v2 + 71856286] )
            {
              crt_sprintf(v129, "Fire %s", v118);
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
          v41 = (int *)((char *)&g_183EC5824 + v24);
          do
          {
            v42 = (     char *)&dword_140404A6C[3597 * *v41 + 71856254];
            dword_140404A6C[18 * (int)v38 + 71857987 + v2] = (*v41 << 16) + 3;
            crt_sprintf(v129, "Hire %s", v42);
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
        v46 = &g_151623978;
        v47 = 0;
        v48 = 6;
        v49 = (     char *)&g_151620C64;
        do
        {
          if ( *(v46 - 2886) && !*v46 && v47 != v45 && *(v46 - 2853) == dword_140404A6C[v2 + 71856286] )
          {
            crt_sprintf(v129, "Fire %s", v49);
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
      crt_sprintf(v129, "Buy Disk", v34);
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
      crt_sprintf(v129, "Buy Briefcase", v52);
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
      crt_sprintf(v129, "Buy Walkie-Talkie", v55);
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
      crt_sprintf(v129, "Buy 9mm", v58);
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
      crt_sprintf(v129, "Buy 9mm Magazine", v61);
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
      crt_sprintf(v129, "Buy MP5", v64);
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
      crt_sprintf(v129, "Buy MP5 Magazine", v67);
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
      crt_sprintf(v129, "Buy Bandage", v70);
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
      crt_sprintf(v129, "Deposit", v73);
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
      if ( *(unsigned int *)((char *)&g_183EBFDC4 + v24) == v79 )
      {
        crt_sprintf(v129, "Withdrawl $20", v76);
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
        crt_sprintf(v129, "Withdrawl $100", v80);
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
        crt_sprintf(v129, "Withdrawl $1000", v83);
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
        crt_sprintf(v129, "Replace Phone", v86);
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
      *(_QWORD *)((char *)&g_15162277C + v102) = 0x6165542074697551LL;
      *(_WORD *)((char *)&g_151622784 + v102) = 109;
      v3 = dword_140404A6C[v2 + 71857986] + 1;
      dword_140404A6C[v2 + 71857986] = v3;
    }
    if ( game_type != 4 )
    {
      v19 = &g_151623978;
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
  int v1;
  __int64 v2;
  signed int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  bool v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  signed int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  signed int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _DWORD *v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  signed int v40;
  signed int v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  signed int v47;
  int v48;
  __int64 v49;
  float v50;
  float v51;
  signed int v52;
  int i;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  signed int v58;
  float v59;
  float v60;
  signed int v61;
  int j;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  unsigned int v70;
  __int64 v71;
  int v72;
  int v73;
  __int64 v74;
  signed int v75;
  unsigned int v76;
  unsigned int v77;
  signed int v78;
  int k;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  float v86;
  float v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  int v92;
  signed int v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  int v100;
  __int64 v101;
  float v102;
  float v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  float v108;
  float v109;
  int v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  signed int v119;
  int m;
  int v121;
  int v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned int v128;
  unsigned int v129;
  signed int v130;
  __int64 v131;
  __int64 v132;
  signed int v133;
  int v134;
  int v135;
  __int64 v136;
  __int64 v137;
  unsigned int v138;
  unsigned int v139;
  signed int v140;
  int v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  unsigned int *v149;
  float v150;
  unsigned int *v151;
  signed int v152;
  int v153;
  int n;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  int v158;
  unsigned int *v159;
  unsigned __int64 v160;
  unsigned int v161;
  __int64 v162;
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
  v3 = *(unsigned int *)((char *)&g_151620E18 + v2);
  LODWORD(v4) = *(unsigned int *)((char *)&g_151620CFC + v2);
  v167 = v4;
  if ( v3 != *(unsigned int *)((char *)&g_151620E14 + v2) )
  {
    while ( 1 )
    {
      if ( (_DWORD)v4 != -1 )
      {
        v5 = v2 + 84LL * v3;
        if ( *(unsigned int *)((char *)&g_151620E28 + v5) == 3 )
          break;
      }
LABEL_14:
      v183 = 84LL * v3;
      v9 = v183 + v2;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[v183 / 4 + 71856367] + v2) == 2;
      v168 = v183 + v2;
      if ( v10 )
      {
        LODWORD(v4) = *(unsigned int *)((char *)&g_151620CFC + v2);
        v167 = v4;
        if ( (_DWORD)v4 != -1 )
        {
          v11 = -1;
          v12 = *(int *)((char *)&g_151620E2C + v9);
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
              sub_1400C6D90(v12, *(unsigned int *)((char *)&g_151620E30 + v168));
              v15 = dword_140404A6C[v14 + 278845898];
            }
            if ( v15 == 18 )
            {
              v16 = *(unsigned int *)((char *)&g_151620E30 + v168);
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
                if ( !*(unsigned int *)((char *)&g_1832A4DD8 + v17) )
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
                v21 = *(int *)((char *)&g_1832A4DDC + v17);
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
              v24 = *(int *)((char *)&g_151620E30 + v168);
              if ( (unsigned int)v24 > 9 )
              {
                v9 = v168;
              }
              else
              {
                v10 = game_connected == 0;
                v25 = v24 + 10 * dword_140404A6C[v14 + 278845984];
                dword_140404A6C[v14 + 278845984] = v25;
                if ( !v10 )
                {
                  v26 = game_tick;
                  v27 = (__int64)(int)world_event_count++ << 7;
                  HIWORD(world_event_count) = 0;
                  *(unsigned int *)((char *)&g_1873DE460 + v27) = 19;
                  *(unsigned int *)((char *)&g_1873DE464 + v27) = v26;
                  *(unsigned int *)((char *)&g_1873DE480 + v27) = dword_140404A6C[v24 + 283785984];
                  *(unsigned int *)((char *)&g_1873DE484 + v27) = v12;
                  *(unsigned int *)((char *)&g_1873DE490 + v27) = 1065353216;
                  *(unsigned int *)((char *)&g_1873DE494 + v27) = 1065353216;
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
      if ( *(unsigned int *)((char *)&g_151620E28 + v9) == 1
        && !(unsigned int)sub_1401307D0(v1, (__int64)&g_151620E3C + v9) )
      {
        sub_1401164B0(v1, v3);
      }
      if ( *(unsigned int *)((char *)&g_151620E28 + v9) )
        goto LABEL_166;
      v28 = *(unsigned int *)((char *)&g_151620E2C + v9);
      v174 = v28;
      if ( *(unsigned int *)((char *)&g_151620DC4 + v2) != v28 )
        goto LABEL_166;
      v10 = *(unsigned int *)((char *)&g_151620CFC + v2) == -1;
      v29 = *(int *)((char *)&g_151620E30 + v9);
      LODWORD(v176) = v29;
      if ( !v10 )
        goto LABEL_89;
      if ( v28 == 2 )
      {
        if ( game_state != 1 )
          goto LABEL_89;
        if ( ((int)g_183EBFCD4 >= 600 || game_type == 7)
          && !*(unsigned int *)((char *)&g_151620CE8 + v2) )
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
                while ( *v34 != *(unsigned int *)((char *)&g_151620C9C + v2) )
                {
                  ++v32;
                  ++v34;
                  if ( v32 >= v33 )
                    goto LABEL_71;
                }
                goto LABEL_89;
              }
LABEL_71:
              *(unsigned int *)((char *)&g_151620CE4 + v2) = v30;
              *(unsigned int *)((char *)&g_151620CE8 + v2) = 60;
              *(unsigned int *)((char *)&g_151620CA8 + v2) = 0;
              break;
          }
          if ( (_DWORD)v29 == 4 )
          {
            v35 = *(int *)((char *)&g_151620CE4 + v2);
            if ( (unsigned int)v35 <= 0x10 )
            {
              v36 = 5873 * v35;
              if ( dword_140404A6C[5873 * v35 + 283831510] == v1 )
              {
                dword_140404A6C[v36 + 283831510] = -1;
                dword_140404A6C[v36 + 283837164] = 0;
              }
            }
            sub_14011AF80(v1, *(unsigned int *)((char *)&g_151620CEC + v2));
            *(unsigned int *)((char *)&g_151620CE4 + v2) = 17;
            *(unsigned int *)((char *)&g_151620CF0 + v2) = 0;
            sub_140051F50(v1);
            *(unsigned int *)((char *)&g_151620CE8 + v2) = 60;
            *(unsigned int *)((char *)&g_151620CA8 + v2) = 0;
            sub_140051DC0(v1);
            goto LABEL_89;
          }
        }
        if ( (_DWORD)v29 == 5 )
        {
          if ( !*(unsigned int *)((char *)&g_151620CA8 + v2) )
          {
            *(unsigned int *)((char *)&g_151620CA8 + v2) = 1;
            sub_140051DC0(v1);
            goto LABEL_89;
          }
          if ( (int)g_183EBFCD4 > 180 )
            *(unsigned int *)((char *)&g_151620CA8 + v2) = 0;
        }
        sub_140051DC0(v1);
        goto LABEL_89;
      }
      if ( v28 == 1 && !*(unsigned int *)((char *)&g_151620CF8 + v2) )
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
      if ( *(unsigned int *)((char *)&g_151620CFC + v2) != -1 )
      {
        v167 = *(unsigned int *)((char *)&g_151620CFC + v2);
        if ( game_type == 4 )
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
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 10;
            }
            else if ( (_DWORD)v29 == 2 )
            {
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 11;
            }
            break;
          case 10:
            if ( (int)v29 < 1
              || (v37 = *(int *)((char *)&g_151620DC8 + v2),
                  (int)v29 >= (int)(dword_140404A6C[14019 * v37 + 225654128] + 1)) )
            {
              v44 = v169;
            }
            else
            {
              v38 = dword_140404A6C[14019 * v37 + 225641203];
              if ( v38 == 5 )
              {
                v39 = *(int *)((char *)&g_151620CFC + v2);
                if ( (_DWORD)v39 != -1 )
                {
                  v40 = *(unsigned int *)((char *)&g_151620CAC + v2);
                  v41 = dword_140404A6C[14019 * v37 + 225654127 + 3 * v29];
                  if ( v40 >= v41 )
                  {
                    if ( (int)v29 <= 3 )
                    {
                      v42 = (_DWORD)v29 == 1 ? 3 : ((_DWORD)v29 == 2) + 7;
                      v173 = v42;
                      if ( *(unsigned int *)((char *)&g_151624424 + v2) != v42 )
                      {
                        ++dword_140404A6C[v39 + 282485789];
                        v40 -= v41;
                        *(unsigned int *)((char *)&g_151624424 + v2) = v42;
                        *(unsigned int *)((char *)&g_151620CAC + v2) = v40;
                        dword_140404A6C[7166 * v39 + 280658446] = v42;
                      }
                    }
                    if ( (unsigned int)(v29 - 4) <= 1 )
                    {
                      v43 = (_DWORD)v29 == 4 ? 1 : 2;
                      v173 = v43;
                      if ( *(unsigned int *)((char *)&g_151624434 + v2) != v43 )
                      {
                        ++dword_140404A6C[v39 + 282485789];
                        *(unsigned int *)((char *)&g_151624434 + v2) = v43;
                        *(unsigned int *)((char *)&g_151620CAC + v2) = v40 - v41;
                        dword_140404A6C[7166 * v39 + 280658449] = v43;
                      }
                    }
                    sub_140051DC0(v1);
                    if ( game_type == 3 )
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
              v45 = *(int *)((char *)&g_151620DC8 + v2);
              if ( dword_140404A6C[14019 * v45 + 225641203] == 8 )
              {
                if ( *(int *)((char *)&g_151620CC8 + v2) < 20 )
                {
                  v46 = v29 + 4673LL * *(int *)((char *)&g_151620DC8 + v2);
                  v47 = dword_140404A6C[3 * v46 + 225654127];
                  v48 = dword_140404A6C[3 * v46 + 225654126];
                  if ( *(int *)((char *)&g_151620CAC + v2) >= v47 )
                  {
                    v49 = *(int *)((char *)&g_151620CFC + v2);
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
                    *(unsigned int *)((char *)&g_151620CAC + v2) -= v47;
                    ++*(unsigned int *)((char *)&g_151620CC8 + v2);
                    sub_140051DC0(v1);
                    LODWORD(v45) = *(unsigned int *)((char *)&g_151620DC8 + v2);
                    LODWORD(v29) = v176;
                  }
                }
                v44 = 0;
                v169 = 0;
              }
              v54 = (int)v45;
              if ( dword_140404A6C[14019 * (int)v45 + 225641203] == 9 )
              {
                v55 = *(unsigned int *)((char *)&g_151620CC8 + v2);
                if ( v55 < 10 )
                {
                  v56 = *(unsigned int *)((char *)&g_151620CAC + v2);
                  v57 = *(int *)((char *)&g_151620CFC + v2);
                  v58 = dword_140404A6C[14019 * v54 + 225654127 + 3 * (int)v29];
                  if ( v56 >= v58 )
                  {
                    *(unsigned int *)((char *)&g_151620CAC + v2) = v56 - v58;
                    *(unsigned int *)((char *)&g_151620CC8 + v2) = v55 + 1;
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
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 9;
            v28 = v174;
            if ( v44 == 1 )
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 9;
            break;
          case 11:
            if ( (_DWORD)v29 == 1 )
            {
              v63 = *(int *)((char *)&g_151620CFC + v2);
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
                    *(unsigned int *)((char *)&g_151620CAC + v2) = (int)(float)((float)((float)(int)dword_140404A6C[24944 * dword_140404A6C[5210 * v65 + 129716710] + 346707730] * 0.75)
                                                                                            + (float)*(int *)((char *)&g_151620CAC + v2));
                  }
                  dword_140404A6C[1760 * v64 + 278845900] = 0;
                  dword_140404A6C[5210 * v65 + 129716716] = 0;
                }
              }
            }
            else if ( (_DWORD)v29 == 16 )
            {
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 9;
            }
            break;
        }
      }
      v66 = *(int *)((char *)&g_151620CE4 + v2);
      if ( (_DWORD)v66 == -1 || *(unsigned int *)((char *)&g_151620CFC + v2) == -1 )
      {
LABEL_345:
        v1 = v166;
        LODWORD(v4) = v167;
        goto LABEL_165;
      }
      v4 = *(int *)((char *)&g_151620CFC + v2);
      v167 = *(unsigned int *)((char *)&g_151620CFC + v2);
      switch ( v28 )
      {
        case 3:
          switch ( (_DWORD)v29 )
          {
            case 1:
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 4;
              break;
            case 2:
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 5;
              break;
            case 3:
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 7;
              break;
            default:
              v1 = v166;
              if ( (_DWORD)v29 != 4 )
              {
                v10 = (_DWORD)v29 == 5;
                v67 = -1;
                v9 = v168;
                if ( v10 )
                  *(unsigned int *)((char *)&g_151620DC4 + v2) = 8;
                goto LABEL_167;
              }
              *(unsigned int *)((char *)&g_151620DC4 + v2) = 12;
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
              if ( *(int *)((char *)&g_151620CC8 + v2) < 10 )
              {
                v73 = *(unsigned int *)((char *)&g_151620CAC + v2);
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
                    *(unsigned int *)((char *)&g_151620CAC + v2) -= dword_140404A6C[v74 + 278521286];
                    if ( game_type == 3 )
                      sub_140051F50(v166);
                    ++*(unsigned int *)((char *)&g_151620CC8 + v2);
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
        *(unsigned int *)((char *)&g_151620DC4 + v2) = 3;
LABEL_216:
      switch ( v28 )
      {
        case 6:
          v80 = v29 - 1;
          v81 = -1;
          if ( (int)v29 - 1 >= (int)g_19021F240
            || (v82 = dword_140404A6C[4 * (int)v29 + 335047157], v82 <= 0)
            || *(int *)((char *)&g_151620CAC + v2) < v82 )
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
                *(unsigned int *)((char *)&g_151620DC4 + v2) = 3;
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
                *(unsigned int *)((char *)&g_151620CAC + v180) -= dword_140404A6C[4 * (int)v176
                                                                                              + 335047157];
                if ( game_type == 3 )
                  sub_140051F50(v166);
                v10 = game_connected == 0;
                dword_140404A6C[2 * v94 + 335047157] = 0;
                if ( !v10 )
                {
                  v95 = game_tick;
                  v96 = (__int64)(int)world_event_count << 7;
                  v97 = g_19021F240 + 16 * v80;
                  v98 = world_event_count + 1;
                  *(unsigned int *)((char *)&g_1873DE460 + v96) = 14;
                  *(unsigned int *)((char *)&g_1873DE464 + v96) = v95;
                  v99 = dword_140404A6C[2 * v94 + 335047155];
                  *(unsigned int *)((char *)&g_1873DE480 + v96) = v97;
                  *(unsigned int *)((char *)&g_1873DE484 + v96) = v99;
                  *(unsigned int *)((char *)&g_1873DE488 + v96) = dword_140404A6C[2 * v94 + 335047156];
                  world_event_count = v98;
                  *(unsigned int *)((char *)&g_1873DE48C + v96) = 0;
                  HIWORD(world_event_count) = 0;
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
                v104 = *(unsigned int *)((char *)&g_151620CAC + v2);
                if ( v104 >= 1000 )
                {
                  v105 = v166;
                  *(unsigned int *)((char *)&g_151620CAC + v2) = v104 - 1000;
                  *(unsigned int *)((char *)&g_151624424 + v2) = 7;
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
              if ( *(int *)((char *)&g_151620CC8 + v2) >= 10
                || (v110 = *(unsigned int *)((char *)&g_151620CAC + v2), v110 < 0)
                || v110 < (int)g_182A8F6E4 )
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
                *(unsigned int *)((char *)&g_151620CAC + v2) -= g_182A8F6E4;
                v1 = v166;
                if ( game_type == 3 )
                  sub_140051F50(v166);
                ++*(unsigned int *)((char *)&g_151620CC8 + v2);
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
          v122 = *(unsigned int *)((char *)&g_151620CAC + v2);
          v123 = dword_1402B2960[(int)v29];
          if ( v122 < v123 )
            goto LABEL_295;
          if ( (int)v29 >= 3 || *(int *)((char *)&g_151620CD0 + v2) < 40 )
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
              *(unsigned int *)((char *)&g_151620CAC + v2) -= dword_1402B2960[(int)v29];
              if ( (int)v29 < 3 )
              {
                ++*(unsigned int *)((char *)&g_151620CD0 + v2);
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
                  *(unsigned int *)((char *)&g_151620CAC + v2) = v122 - v123;
                  if ( (int)v29 < 3 )
                    ++*(unsigned int *)((char *)&g_151620CD0 + v2);
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
                *(unsigned int *)((char *)&g_151620CAC + v2) += sub_1400C3D10(v126);
                dword_140404A6C[v127 + 278845900] = 0;
                goto LABEL_165;
              }
            }
          }
          break;
        case 12:
          v132 = *(int *)((char *)&g_151620CE4 + v2);
          if ( (unsigned int)v132 > 5 )
            goto LABEL_345;
          if ( (unsigned int)(v29 - 1) > 5 )
            goto LABEL_314;
          v133 = dword_140404A6C[6 * v132 + 335047066];
          v134 = dword_1402B2960[(int)v29];
          if ( v133 < v134 )
            goto LABEL_314;
          if ( (int)v29 < 3 && *(int *)((char *)&g_151620CD0 + v2) >= 40 )
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
              ++*(unsigned int *)((char *)&g_151620CD0 + v2);
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
                ++*(unsigned int *)((char *)&g_151620CD0 + v2);
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
                  *(unsigned int *)((char *)&g_151620DC4 + v2) = 3;
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
                  v155 = *(int *)((char *)&g_151620CE4 + v2);
                  v156 = v142 + 23492 * v155;
                  if ( *(unsigned int *)((char *)&g_183EBFEFC + v156)
                    && (_DWORD)v145 == *(unsigned int *)((char *)&g_183EBFF0C + v156) )
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
              v149 = &g_151620CE4;
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
                v151 = &g_151620CEC;
                v152 = 0;
                *(float *)&dword_140404A6C[6 * v132 + 335047062] = v150 * 0.2;
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
      if ( *(unsigned int *)((char *)&g_151620C94 + v2) )
      {
        if ( *(unsigned int *)((char *)&g_151620E28 + v9) == 4 )
        {
          v68 = *(int *)((char *)&g_151620E2C + v9);
          if ( (int)v68 >= 0 && (int)v68 < (int)g_160361344 )
          {
            v69 = *(unsigned int *)((char *)&g_151620E30 + v9);
            if ( v69 >= 0 )
            {
              v165 = *(unsigned int *)((char *)&g_151620E30 + v9);
              dword_140404A6C[28 * v68 + 134050385] = v69;
              crt_sprintf(Src, "%s %d banned %d", (     char *)&dword_140404A6C[28 * v68 + 134050365], v68, v165);
              if ( game_connected )
              {
                do
                  ++v67;
                while ( SR_VEC_LANES(128, Src[0], i8)[v67] );
                v70 = world_event_count;
                if ( (int)v67 > 63 )
                  LODWORD(v67) = 63;
                v71 = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + v71) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + v71) = game_tick;
                crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v71), Src, (int)v67);
                world_event_count = v70 + 1;
                v9 = v168;
                *((_BYTE *)&g_1873DE4A0 + v71 + (int)v67) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + v71) = v67;
                *(unsigned int *)((char *)&g_1873DE484 + v71) = 4;
                v67 = -1;
                *(unsigned int *)((char *)&g_1873DE488 + v71) = -1;
                *(unsigned int *)((char *)&g_1873DE48C + v71) = 0;
                HIWORD(world_event_count) = 0;
              }
            }
          }
        }
        if ( *(unsigned int *)((char *)&g_151620E28 + v9) == 5 )
        {
          v157 = *(int *)((char *)&g_151620E2C + v9);
          if ( (int)v157 >= 0 && (int)v157 < (int)g_160361344 )
          {
            v158 = *(unsigned int *)((char *)&g_151620E30 + v9);
            if ( v158 >= 0 )
            {
              dword_140404A6C[28 * v157 + 134050376] = v158;
              v159 = &g_151620C9C;
              v160 = v183;
              do
              {
                if ( *(v159 - 15) && *v159 == (_DWORD)v157 )
                  v159[8] = *(unsigned int *)((char *)&g_151620E30 + v160 + v2);
                v159 += 3597;
              }
              while ( (__int64)v159 < (__int64)&g_1519A409C );
              crt_sprintf(
                Src,
                "%s %d rating %d",
                (     char *)&dword_140404A6C[28 * *(unsigned int *)((char *)&g_151620E2C + v160 + v2)
                                             + 134050365],
                *(unsigned int *)((char *)&g_151620E2C + v160 + v2),
                *(unsigned int *)((char *)&g_151620E30 + v160 + v2));
              if ( game_connected )
              {
                do
                  ++v67;
                while ( SR_VEC_LANES(128, Src[0], i8)[v67] );
                v161 = world_event_count;
                if ( (int)v67 > 63 )
                  LODWORD(v67) = 63;
                v162 = (__int64)(int)world_event_count << 7;
                *(unsigned int *)((char *)&g_1873DE460 + v162) = 2;
                *(unsigned int *)((char *)&g_1873DE464 + v162) = game_tick;
                crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v162), Src, (int)v67);
                world_event_count = v161 + 1;
                *((_BYTE *)&g_1873DE4A0 + v162 + (int)v67) = 0;
                *(unsigned int *)((char *)&g_1873DE480 + v162) = v67;
                *(unsigned int *)((char *)&g_1873DE484 + v162) = 4;
                *(unsigned int *)((char *)&g_1873DE488 + v162) = -1;
                HIWORD(world_event_count) = 0;
                *(unsigned int *)((char *)&g_1873DE48C + v162) = 0;
              }
            }
          }
        }
      }
      v3 = ((unsigned __int8)*(unsigned int *)((char *)&g_151620E18 + v2) + 1) & 0x3F;
      *(unsigned int *)((char *)&g_151620E18 + v2) = v3;
      if ( v3 == *(unsigned int *)((char *)&g_151620E14 + v2) )
        return 0; /* compatibility result discarded by all reviewed callers */
    }
    v6 = *(unsigned int *)((char *)&g_151620E2C + v5);
    if ( (unsigned int)(v6 - 3) <= 4 )
    {
      dword_140404A6C[7166 * (int)v4 + 280658342 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = 2;
      dword_140404A6C[7166 * (int)v4 + 280658352 + 12 * dword_140404A6C[7166 * (int)v4 + 280658341]] = *(unsigned int *)((char *)&g_151620E30 + v5);
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
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658352 + v7] = *(unsigned int *)((char *)&g_151620E30 + v5);
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658353 + v7] = v8;
        goto LABEL_9;
      case 8:
        v7 = 7166LL * (int)v4;
        dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658342 + v7] = 3;
        break;
      default:
        goto LABEL_14;
    }
    dword_140404A6C[12 * (int)dword_140404A6C[v7 + 280658341] + 280658352 + v7] = *(unsigned int *)((char *)&g_151620E30
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

//----- (00000001400F5B60) ----------------------------------------------------
__int64            sub_1400F5B60(__int64 a1)
{
  __int64 result;
  int v2;
  unsigned int v3;
  unsigned int *v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int *v8;
  unsigned int v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  result = game_state;
  v2 = 0;
  if ( game_state != 1 )
  {
    if ( game_state != 2 )
      return result;
    v9 = g_183EBFCD4;
    goto LABEL_27;
  }
  v3 = 1;
  v4 = &g_151623978;
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
  v7 = --g_183EBFCD4;
  if ( v5 )
    result = v3;
  if ( !(_DWORD)result )
  {
    if ( v7 < 1200 )
      g_183EBFCD4 = 1200;
    return result;
  }
  if ( v7 > 60 )
  {
    g_183EBFCD4 = 60;
    return result;
  }
  if ( v7 <= 0 )
  {
    v8 = &g_151620CE4;
    do
    {
      if ( *(v8 - 33) )
        *v8 = 0;
      if ( v8[3564] )
        v8[3597] = 0;
      v8 += 7194;
    }
    while ( (__int64)v8 < (__int64)&g_1519A40E4 );
    sub_14005D920();
    v9 = 108000;
    game_state = 2;
LABEL_27:
    v10 = v9 - 1;
    v11 = 1;
    g_183EBFCD4 = v10;
    if ( g_183F7C30C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C30C;
      v12 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v12 != -1 )
      {
        a1 = 7166 * v12;
        v11 = (int)dword_140404A6C[7166 * v12 + 280651318] <= 0;
      }
    }
    if ( g_183F7C310 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C310;
      v13 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v13 != -1 )
      {
        a1 = 7166 * v13;
        if ( (int)dword_140404A6C[7166 * v13 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C314 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C314;
      v14 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v14 != -1 )
      {
        a1 = 7166 * v14;
        if ( (int)dword_140404A6C[7166 * v14 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C318 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C318;
      v15 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v15 != -1 )
      {
        a1 = 7166 * v15;
        if ( (int)dword_140404A6C[7166 * v15 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C31C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C31C;
      v16 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v16 != -1 )
      {
        a1 = 7166 * v16;
        if ( (int)dword_140404A6C[7166 * v16 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C320 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C320;
      v17 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v17 != -1 )
      {
        a1 = 7166 * v17;
        if ( (int)dword_140404A6C[7166 * v17 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C324 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C324;
      v18 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v18 != -1 )
      {
        a1 = 7166 * v18;
        if ( (int)dword_140404A6C[7166 * v18 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( g_183F7C328 == -1
      || (a1 = 3597LL * (int)g_183F7C328, v19 = (int)dword_140404A6C[a1 + 71856292], (_DWORD)v19 == -1)
      || (a1 = 7166 * v19, (int)dword_140404A6C[7166 * v19 + 280651318] <= 0) )
    {
      if ( v11 && (int)v10 > 300 )
      {
        v10 = 300;
        g_183F7C34C = 1;
        g_183EBFCD4 = 300;
      }
    }
    if ( g_183F7C32C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C32C;
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
    if ( g_183F7C330 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C330;
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
    if ( g_183F7C334 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C334;
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
    if ( g_183F7C338 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C338;
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
    if ( g_183F7C33C != -1 )
    {
      a1 = 3597LL * (int)g_183F7C33C;
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
    if ( g_183F7C340 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C340;
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
    if ( g_183F7C344 != -1 )
    {
      a1 = 3597LL * (int)g_183F7C344;
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
    result = (int)g_183F7C348;
    if ( (g_183F7C348 != -1
       && ((a1 = 3597LL * (int)g_183F7C348,
            result = (int)dword_140404A6C[a1 + 71856292],
            (_DWORD)result == -1)
        || (a1 = 7166 * result, (int)dword_140404A6C[7166 * result + 280651318] <= 0))
       || v2)
      && (int)v10 > 300 )
    {
      g_183EBFCD4 = 300;
      g_183F7C34C = 2;
    }
    else if ( (int)v10 <= 0 )
    {
      return sr_ResetGame(a1 * 4, v11, v10);
    }
  }
  return result;
}

//----- (00000001400F80A0) ----------------------------------------------------
__int64            sub_1400F80A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  int *v13;
  int j;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int *v19;
  __int64 v20;
  unsigned int *v21;
  int v22;
  unsigned int *v23;
  __int64 v24;
  unsigned int *v25;
  int v26;
  unsigned int *v27;
  __int64 v28;
  unsigned int *v29;
  int v30;
  int v31;
  __int64 v32;
  bool v33;
  int v34;
  __int64 v35;
  float v36;
  float v37;
  unsigned int v38;
  __m128i v39;
  signed int v40;
  signed int v41;
  __int64 v42;
  unsigned int *v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  __int64 v49;
  unsigned int *v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  unsigned int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  unsigned int *v64;
  unsigned int v65;
  signed int v66;
  float v67;
  float v68;
  float v69;
  double v70;
  __int64 v71;
  __int64 v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  unsigned int v82;
  __int64 v83;
  signed int v84;
  float v85;
  float v86;
  float v87;
  __int64 v88;
  unsigned int v89;
  unsigned int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  unsigned int *v95;
  __int64 v96;
  unsigned int *v97;
  signed int v98;
  signed int v99;
  int v100;
  unsigned int *v101;
  int v102;
  int v103;
  unsigned int *v104;
  __int64 v105;
  __int64 v106;
  unsigned int v107;
  unsigned int v108;
  int v109;
  unsigned int *v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  __int64 v115;
  unsigned int v116;
  __int64 v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  __int64 v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  __int64 v126;
  float v127;
  float v128;
  int v129;
  int v130;
  int v131;
  int v132;
  float *v133;
  float v134;
  int v135;
  int v136;
  int v137;
  char v138;
  float *v139;
  int i;
  double v141;
  float v142;
  float v143;
  float v144;
  __int64 v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  unsigned int *v155;
  __int64 v156;
  int v157;
  int v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  unsigned int v171;
  __int64 v172;
  int v173;
  int v174;
  unsigned int *v175;
  __int64 v176;
  int v177;
  unsigned int *v178;
  __int64 v179;
  unsigned int v180;
  int v181;
  signed int v182;
  unsigned int *v183;
  unsigned int v184;
  __int64 v185;
  int v186;
  __int64 v188;
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

  if ( game_state != 1 )
  {
    if ( game_state != 2 )
    {
      if ( game_state == 3 && (int)--g_183EBFCD4 <= 0 )
        sr_ResetGame(a1, a2, a3);
      return 0; /* no result: rax is residue at the exit */
    }
    v97 = &g_151623978;
    v98 = g_183EBFCD4 - 1;
    v99 = game_state_time + 1;
    --g_183EBFCD4;
    v100 = 0;
    ++game_state_time;
    v101 = &g_151623978;
    do
    {
      if ( *(v101 - 2886) && !*v101 && *(v101 - 2868) )
        ++v100;
      v101 += 3597;
    }
    while ( (__int64)v101 < (__int64)&g_1519A6D78 );
    v102 = g_183F7A320;
    v103 = 1800;
    if ( v99 < 18000 )
      v103 = 2700;
    if ( v99 >= 28800 )
      v103 = 900;
    if ( v99 >= 39600 )
      v103 = 300;
    if ( (int)g_183F7A320 > 0 )
    {
      v104 = &g_183F7A324;
      v105 = g_183F7A320;
      do
      {
        v106 = (int)dword_140404A6C[3597 * *v104 + 71856292];
        if ( (_DWORD)v106 != -1 )
        {
          v107 = dword_140404A6C[7166 * v106 + 280651441];
          g_183F7A5A0 = dword_140404A6C[7166 * v106 + 280651440];
          g_183F7A5A8 = dword_140404A6C[7166 * v106 + 280651442];
          g_183F7A5A4 = v107;
        }
        v104 += 9;
        --v105;
      }
      while ( v105 );
    }
    v108 = game_connected;
    if ( v99 >= 7200 && !(v98 % v103) )
    {
      v109 = 0;
      if ( (int)g_183F7A320 > 0 )
      {
        v110 = &g_183F7A340;
        do
        {
          v111 = *(v110 - 1);
          *(v110 - 4) = v111;
          v112 = *v110;
          *(v110 - 3) = *v110;
          v113 = v110[1];
          *(v110 - 2) = v113;
          if ( (int)game_state_time >= 10800 && v108 )
          {
            v114 = game_tick;
            v115 = (__int64)(int)world_event_count << 7;
            v116 = world_event_count + 1;
            *(unsigned int *)((char *)&g_1873DE460 + v115) = 21;
            *(unsigned int *)((char *)&g_1873DE464 + v115) = v114;
            *(unsigned int *)((char *)&g_1873DE480 + v115) = *(v110 - 6);
            *(_QWORD *)((char *)&g_1873DE484 + v115) = 1;
            *(unsigned int *)((char *)&g_1873DE48C + v115) = 0;
            *(unsigned int *)((char *)&g_1873DE468 + v115) = v111;
            *(unsigned int *)((char *)&g_1873DE46C + v115) = v112;
            *(unsigned int *)((char *)&g_1873DE470 + v115) = v113;
            world_event_count = v116;
            HIWORD(world_event_count) = 0;
          }
          v117 = (int)dword_140404A6C[3597 * *(v110 - 7) + 71856292];
          if ( (_DWORD)v117 == -1 )
          {
            *(v110 - 1) = g_183F7A5A0;
            *v110 = g_183F7A5A4;
            v118 = g_183F7A5A8;
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
            v119 = game_tick;
            v120 = v110[1];
            v121 = *v110;
            v122 = (__int64)(int)world_event_count << 7;
            v123 = world_event_count + 1;
            *(unsigned int *)((char *)&g_1873DE460 + v122) = 21;
            *(unsigned int *)((char *)&g_1873DE464 + v122) = v119;
            *(unsigned int *)((char *)&g_1873DE480 + v122) = *(v110 - 5);
            v124 = *(v110 - 1);
            *(_QWORD *)((char *)&g_1873DE484 + v122) = 1;
            *(unsigned int *)((char *)&g_1873DE48C + v122) = 0;
            *(unsigned int *)((char *)&g_1873DE468 + v122) = v124;
            *(unsigned int *)((char *)&g_1873DE46C + v122) = v121;
            *(unsigned int *)((char *)&g_1873DE470 + v122) = v120;
            world_event_count = v123;
            HIWORD(world_event_count) = 0;
          }
          v102 = g_183F7A320;
          ++v109;
          v110 += 9;
        }
        while ( v109 < (int)g_183F7A320 );
        v99 = game_state_time;
        v98 = g_183EBFCD4;
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
        g_183EBFDB0 = 100;
        v173 = 1;
        g_183EC5974 = 0;
        g_183ECB538 = 100;
      }
      else
      {
        v175 = &g_183F7A328;
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
        g_183EBFDB0 = 0;
        g_183EC5974 = 100;
        g_183ECB538 = 0;
      }
      else
      {
        v178 = &g_183F7A324;
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
          g_183EBFDB0 = 100;
          g_183EC5974 = 0;
          g_183ECB538 = 100;
        }
      }
      v180 = game_tick;
      v181 = 0;
      game_state = 3;
      g_183EBFCD4 = 1200;
      do
      {
        if ( *(v97 - 2886) )
        {
          if ( !*v97 )
          {
            v182 = 0;
            if ( v102 > 0 )
            {
              v183 = &g_183F7A328;
              do
              {
                if ( v108 )
                {
                  v184 = world_event_count;
                  v185 = (__int64)(int)world_event_count << 7;
                  v186 = *(v183 - 1) + ((*v183 + (v183[1] << 10)) << 10);
                  *(unsigned int *)((char *)&g_1873DE460 + v185) = 21;
                  *(unsigned int *)((char *)&g_1873DE464 + v185) = v180;
                  *(unsigned int *)((char *)&g_1873DE480 + v185) = v181;
                  *(unsigned int *)((char *)&g_1873DE484 + v185) = 2;
                  *(unsigned int *)((char *)&g_1873DE488 + v185) = v182;
                  *(unsigned int *)((char *)&g_1873DE48C + v185) = v186;
                  world_event_count = v184 + 1;
                  *(_QWORD *)((char *)&g_1873DE468 + v185) = 0;
                  *(unsigned int *)((char *)&g_1873DE470 + v185) = 0;
                  HIWORD(world_event_count) = 0;
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
    v139 = (float *)&g_183EBFD9C;
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
          v155 = &g_182BBB1E4;
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
          while ( (__int64)v155 < (__int64)&g_18329B1E4 );
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
    v102 = g_183F7A320;
    v98 = g_183EBFCD4;
    v97 = &g_151623978;
    v108 = game_connected;
    goto LABEL_204;
  }
  v3 = &g_151623978;
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
  v9 = --g_183EBFCD4;
  if ( v4 >= 3 )
    v8 = v5;
  if ( v8 )
  {
    if ( v9 > 180 )
      v9 = 180;
    g_183EBFCD4 = v9;
  }
  if ( v4 < 3 && v9 < 1800 )
  {
    g_183EBFCD4 = 1800;
    return 0; /* no result: rax is residue at the exit */
  }
  if ( v9 > 0 )
    return 0; /* no result: rax is residue at the exit */
  sub_14012E960(128);
  *(_OWORD *)&g_183F7A320 = 0;
  if ( (int)g_175FD145C > 0 )
    crt_memset((void *)(uintptr_t)(v198), 0, 4LL * (int)g_175FD145C);
  v10 = &g_151620CA8;
  v11 = 0;
  v12 = &g_151620CA8;
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
  g_183F7A31C = v11;
  v15 = rand() % 3;
  v16 = g_183F7A320;
  v17 = v15 + 3;
  while ( (!v16 || v11 >= v17) && v16 < 8 )
  {
    if ( v11 > 0 )
    {
      v18 = rand() % v11--;
      v19 = (unsigned int *)&v197[4 * v18];
      dword_140404A6C[9 * g_183F7A320 + 284022319] = *v19;
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
        dword_140404A6C[9 * g_183F7A320 + 284022318] = *v23;
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
          dword_140404A6C[9 * g_183F7A320 + 284022320] = *v27;
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
      v16 = g_183F7A320;
    }
    g_183F7A320 = ++v16;
  }
  v30 = 0;
  v31 = 0;
  v193 = 0;
  v32 = 0xC000100040000LL;
  do
  {
    if ( !*(v10 - 18) || !*v10 || v10[2868] )
      goto LABEL_79;
    v33 = (signed int)g_175FD145C <= 0;
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
          v34 = rand() % (signed int)g_175FD145C;
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
    v42 = g_183F7A320;
    v10[21] = v41;
    if ( v41 != -1 )
    {
      if ( (int)v42 > 0 )
      {
        v43 = &g_183F7A328;
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
    v46 = game_tick;
    v47 = 0;
    v48 = game_connected;
    if ( (int)v42 <= 0 )
    {
LABEL_76:
      v32 = 0xC000100040000LL;
      if ( v48 )
      {
        v55 = (__int64)(int)world_event_count++ << 7;
        HIWORD(world_event_count) = 0;
        *(unsigned int *)((char *)&g_1873DE460 + v55) = 21;
        *(unsigned int *)((char *)&g_1873DE464 + v55) = v46;
        *(unsigned int *)((char *)&g_1873DE480 + v55) = v30;
        *(_QWORD *)((char *)&g_1873DE484 + v55) = 0;
        *(unsigned int *)((char *)&g_1873DE48C + v55) = 0;
        *(_QWORD *)((char *)&g_1873DE468 + v55) = 0;
        *(unsigned int *)((char *)&g_1873DE470 + v55) = 0;
      }
      v31 = v193;
      goto LABEL_79;
    }
    v49 = v42;
    v50 = &g_183F7A32C;
    v51 = v193;
    do
    {
      if ( v30 == *(v50 - 1) )
      {
        v47 = 1;
        if ( !v48 )
          goto LABEL_74;
        v52 = (__int64)(int)world_event_count++ << 7;
        *(unsigned int *)((char *)&g_1873DE460 + v52) = 21;
        *(unsigned int *)((char *)&g_1873DE464 + v52) = v46;
        *(unsigned int *)((char *)&g_1873DE480 + v52) = v30;
        *(unsigned int *)((char *)&g_1873DE484 + v52) = 0;
        *(_QWORD *)((char *)&g_1873DE488 + v52) = 1;
        *(_QWORD *)((char *)&g_1873DE468 + v52) = 0;
        *(unsigned int *)((char *)&g_1873DE470 + v52) = 0;
        goto LABEL_73;
      }
      if ( v30 == *v50 )
      {
        v47 = 1;
        if ( v48 )
        {
          v53 = *(v50 - 2);
          v54 = (__int64)(int)world_event_count++ << 7;
          *(unsigned int *)((char *)&g_1873DE460 + v54) = 21;
          *(unsigned int *)((char *)&g_1873DE464 + v54) = v46;
          *(unsigned int *)((char *)&g_1873DE480 + v54) = v30;
          *(unsigned int *)((char *)&g_1873DE484 + v54) = 0;
          *(unsigned int *)((char *)&g_1873DE488 + v54) = 2;
          *(unsigned int *)((char *)&g_1873DE48C + v54) = v51 + v53;
          *(_QWORD *)((char *)&g_1873DE468 + v54) = 0;
          *(unsigned int *)((char *)&g_1873DE470 + v54) = 0;
LABEL_73:
          HIWORD(world_event_count) = 0;
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
  v89 = game_connected;
  v90 = game_tick;
  if ( game_connected )
  {
    v91 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + v91) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v91) = v90;
    *(unsigned int *)((char *)&g_1873DE480 + v91) = 0;
    *(unsigned int *)((char *)&g_1873DE484 + v91) = 1;
  }
  g_183EBFDC0 = 1;
  if ( v89 )
  {
    v92 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + v92) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v92) = v90;
    *(unsigned int *)((char *)&g_1873DE480 + v92) = 1;
    *(unsigned int *)((char *)&g_1873DE484 + v92) = 1;
  }
  g_183EC5984 = 1;
  if ( v89 )
  {
    v93 = (__int64)(int)world_event_count++ << 7;
    HIWORD(world_event_count) = 0;
    *(unsigned int *)((char *)&g_1873DE460 + v93) = 10;
    *(unsigned int *)((char *)&g_1873DE464 + v93) = v90;
    *(unsigned int *)((char *)&g_1873DE480 + v93) = 2;
    *(unsigned int *)((char *)&g_1873DE484 + v93) = 1;
  }
  v94 = 0;
  g_183ECB548 = 1;
  if ( (int)g_183F7A320 > 0 )
  {
    v95 = &g_183F7A344;
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
    while ( v94 < (int)g_183F7A320 );
  }
  game_state = 2;
  *(_QWORD *)&g_183EBFCD4 = 54000;
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

//----- (000000014010EE20) ----------------------------------------------------
__int64            sub_14010EE20(int a1)
{
  __int64 v1;

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

//----- (0000000140116D80) ----------------------------------------------------
void            sub_140116D80(int a1, int a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  float v8;
  __int64 v9;
  unsigned int v10;
  __m128i v11;
  __int64 v12;
  float *v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  float v18;
  int v19;
  int v20;

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
    || game_type != 4 )
  {
    return;
  }
  v7 = dword_140404A6C[v4 + 71856286];
  v8 = (float)(int)g_183F7A5C4;
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
    v11 = _mm_cvtsi32_si128(g_183F7A5C8);
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
      v11 = _mm_cvtsi32_si128(g_183F7A5CC);
    }
    else
    {
      v8 = (float)(int)g_183F7A5D0;
      if ( v16 > 5 || !sub_14011B8F0(v13, v16, 0.0) )
        goto LABEL_27;
      v11 = _mm_cvtsi32_si128(g_183F7A5D4);
    }
    goto LABEL_26;
  }
LABEL_27:
  v17 = dword_140404A6C[v5 + 71856276];
  v18 = v8 * 0.0099999998;
  if ( v17 > 0 )
    v18 = v18 * (float)(1.0 - fminf(fmaxf(fminf((float)v17 * 0.0099999998, 1.0), 0.0), 1.0));
  v19 = (int)(float)((float)a3 * v18);
  if ( v19 > 0 )
    dword_140404A6C[v4 + 71856276] += v19;
  v20 = dword_140404A6C[v4 + 71856276];
  if ( v20 > 1023 )
  {
    v20 = 1023;
    dword_140404A6C[v4 + 71856276] = 1023;
  }
  if ( v20 >= (int)g_183F7A5E4 )
    dword_140404A6C[7166 * dword_140404A6C[v4 + 71856292] + 280651318] = 0;
}

//----- (00000001401178F0) ----------------------------------------------------
__int64            sub_1401178F0(int a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int *v11;
  char v12;
  __int64 v13;
  double v14;
  double v15;
  unsigned int v16;
  float v17;
  double v18;
  double v19;
  signed int v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  double v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned int *v31;
  __int64 v32;
  double v33;
  __m128 v34;
  float v35;
  __m128 v36;
  float v37;
  float v38;
  double v39;
  float *v40;
  float v41;
  float v42;
  int v43;
  __int64 v44;
  float v45;
  float v46;
  bool v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  unsigned int v56;
  float v57;
  int v58;
  unsigned int v59;
  double v60;
  double v61;
  __int64 v62;
  float v63;
  float v64;
  __m128 v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __m128 v70;
  float v71;
  double v72;
  __int64 v73;
  float v74;
  float v75;
  float v76;
  float *v77;
  float *v78;
  int v79;
  __int64 v80;
  float v81;
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
    if ( *(float *)&dword_140404A6C[v7 + 280651456] < 0.89999998 )
    {
      if ( (game_tick & 0x7F) > 0x40 )
        dword_140404A6C[v3 + 71856325] |= 8u;
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    LODWORD(v19) = 0;
    if ( (int)dword_140404A6C[v3 + 71859146] < (int)dword_140404A6C[v3 + 71859147] )
    {
      dword_140404A6C[v3 + 71856296] = 1065353216;
      v20 = dword_140404A6C[v3 + 71859146];
      v21 = v3 * 4 + 32LL * v20;
      v22 = *(float *)((char *)&g_15162399C + v21) - *(float *)&dword_140404A6C[v7 + 280651335];
      v23 = *(float *)((char *)&g_1516239A4 + v21) - *(float *)&dword_140404A6C[v7 + 280651337];
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
    if ( *(float *)((char *)&g_1516241D4 + v29) < 2.0
      && fabs(*(float *)((char *)&g_1516241CC + v29) - *(float *)&dword_140404A6C[v7 + 280651336]) < 2.0
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
    if ( *(float *)((char *)&g_1516241D4 + v32) <= 12.0 )
      goto LABEL_70;
    *(_QWORD *)&v33 = *(unsigned int *)((char *)&g_1516241C8 + v32);
    *(float *)&v33 = *(float *)&v33 - *(float *)&dword_140404A6C[v7 + 280651986];
    v34 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&g_1516241D0 + v32))));
    SR_VEC_LANES(128, v34, f32)[0] = SR_VEC_LANES(128, v34, f32)[0] - *(float *)&dword_140404A6C[v7 + 280651988];
    v35 = *(float *)&v33 * *(float *)&v33;
    v36 = v34;
    v37 = (float)(*(float *)((char *)&g_1516241CC + v32) - *(float *)&dword_140404A6C[v7 + 280651987])
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
      v40 = (float *)&g_18329E8DC;
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
    if ( game_state == 1 )
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
        if ( v55 < 0.050000001 )
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
      if ( *(float *)((char *)&g_1516241D4 + v62) > 8.0 )
      {
        v65 = _mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)((char *)&g_1516241CC + v62))));
        v63 = *(float *)((char *)&g_1516241C8 + v62) - *(float *)&dword_140404A6C[v7 + 280652142];
        v64 = *(float *)((char *)&g_1516241D0 + v62) - *(float *)&dword_140404A6C[v7 + 280652144];
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
          if ( (float)((float)((float)(v68 * v75) + (float)(SR_VEC_LANES(128, v65, f32)[0] * v74)) + (float)(v69 * v76)) < -0.9975 )
          {
            v77 = (float *)&g_18329E8DC;
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
                   || g_151A848B0 == -1
                   || g_151A848AC == 1)
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

//----- (000000014011B2A0) ----------------------------------------------------
void sub_14011B2A0()
{
  unsigned int v0;
  unsigned int *v1;
  int v2;
  unsigned int *v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  unsigned int *v15;
  int v16;
  unsigned int *v17;
  int v18;
  unsigned int *v19;
  unsigned int *v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011B2A0[16];
#define v36 (*(__int64 (*))(void *)(sr_frame_14011B2A0 + 0)) /* [rsp+30h] */

  v0 = g_183F7A604;
  v1 = (unsigned int *)&g_151620DB8;
  v2 = game_state_time;
  v3 = &g_151620D24;
  v4 = g_183EBFCB0;
  v5 = game_type;
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
      v5 = game_type;
      v6 = v36;
      v7 = 0;
      v4 = g_183EBFCB0;
      v2 = game_state_time;
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
        v30 = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v26 + 335047062] * 0.94999999)
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
                                                                        * 0.98000002)
                                                                * (float)(int)*(v1 - 51))
                                                        + (float)v34);
      }
    }
LABEL_47:
    v0 = g_183F7A604;
    *(v1 - 13) = *(v1 - 14);
LABEL_48:
    v3 += 3597;
    v1 += 3597;
    v36 = --v6;
  }
  while ( v6 );
}
#undef v36

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
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int8 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  char *v14;
  char v15;
  unsigned __int8 *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  unsigned int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  __int8 *v62;
  __int8 v63;
  unsigned int v64;
  __int64 v65;
  unsigned int v66;
  unsigned int v67;
  __int64 v68;
  bool v69;
  unsigned int v70;
  unsigned int v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  float v87;
  float v88;
  float v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  __int64 v94;
  float v95;
  float v96;
  float v97;
  int i;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  signed int v102;
  int v103;
  __int64 v104;
  __int8 *v105;
  int v106;
  __int8 v107;
  __int64 v108;
  signed int v109;
  signed int v110;
  __int64 v111;
  __int8 *v112;
  __int8 v113;
  unsigned int v114;
  __int64 v115;
  unsigned int v116;
  unsigned int v117;
  __int64 v118;
  char v119;
  unsigned int *v120;
  __int8 *v121;
  __int8 v122;
  int v123;
  __int8 *v124;
  __int64 j;
  __int8 v126;
  int v127;
  unsigned int *v128;
  __int8 *v129;
  __int8 v130;
  __int64 v131;
  __int8 v132;
  __int64 v133;
  int v134;
  int v135;
  unsigned int *v136;
  __int8 *v137;
  __int8 v138;
  __int64 v139;
  __int8 v140;
  __int64 v141;
  int v142;
  int v143;
  __int8 *v144;
  __int8 v145;
  __int64 v146;
  __int64 v147;
  unsigned int v148;
  unsigned int v149;
  __int64 v150;
  unsigned int v151;
  __int64 v152;
  int v153;
  int v154;
  __int64 v155;
  __int64 v156;
  unsigned __int8 *v157;
  char *v158;
  int v159;
  int v160;
  unsigned int v161;
  __int64 v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __int64 v166;
  unsigned int v167;
  unsigned int v168;
  __int64 v169;
  int v170;
  unsigned int v171;
  __int64 v173;
  unsigned int v174;
  unsigned int v175;
  __int64 v176;
  int v177;
  int v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int v182;
  unsigned int v183;
  __int64 v184;
  unsigned int v185;
  int v186;
  __int64 v187;
  __int64 v188;
  unsigned int v189;
  unsigned int v190;
  __int64 v191;
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
  if ( *(int *)((char *)&g_151620CA0 + v4) > 0 )
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
  *((_BYTE *)&g_151624438 + v4) = 0;
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
          v14[(_QWORD)&g_151624438 + v4 - v3] = *v14;
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
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/admin "), 7) && (int)++*(unsigned int *)((char *)&g_151620C98 + v4) < 5 )
  {
    if ( LOBYTE(g_151E45D4C) )
    {
      v16 = (unsigned __int8 *)(v3 + 7);
      do
      {
        v17 = *((unsigned __int8 *)&g_151E45D44 + (_QWORD)v16 - v3 + 1);
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
        if ( (int)item_link_peer_count > 0 )
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
          while ( v20 < (int)item_link_peer_count );
          v194 = v20;
        }
        *(unsigned int *)((char *)&g_151620C94 + v4) = 1;
        if ( v19 != -1 )
          dword_140404A6C[47224 * v19 + 438887410] = 1;
        crt_sprintf(v202, "%s admin", (     char *)&g_151620C64 + v4);
        if ( game_connected )
        {
          v22 = -1;
          do
            ++v22;
          while ( SR_VEC_LANES(128, v202[0], i8)[v22] );
          v23 = world_event_count;
          if ( (int)v22 > 63 )
            LODWORD(v22) = 63;
          v24 = game_tick;
          v25 = (__int64)(int)world_event_count << 7;
          *(unsigned int *)((char *)&g_1873DE460 + v25) = 2;
          *(unsigned int *)((char *)&g_1873DE464 + v25) = v24;
          crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v25), v202, (int)v22);
          world_event_count = v23 + 1;
          *((_BYTE *)&g_1873DE4A0 + (int)v22 + v25) = 0;
          *(unsigned int *)((char *)&g_1873DE480 + v25) = v22;
          HIWORD(world_event_count) = 0;
          *(unsigned int *)((char *)&g_1873DE484 + v25) = 4;
          *(unsigned int *)((char *)&g_1873DE488 + v25) = -1;
          *(unsigned int *)((char *)&g_1873DE48C + v25) = 0;
        }
      }
    }
  }
  if ( !*(unsigned int *)((char *)&g_151620C94 + v4) )
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
          crt_sprintf(v202, "%d:%d", v26, -1);
        else
          crt_sprintf(v202, "%d:%d %s", v26, v29, (     char *)&dword_140404A6C[3597 * v29 + 71856254]);
        if ( game_connected )
        {
          v30 = -1;
          do
            ++v30;
          while ( SR_VEC_LANES(128, v202[0], i8)[v30] );
          v31 = game_tick;
          v32 = world_event_count;
          if ( (int)v30 > 63 )
            LODWORD(v30) = 63;
          v33 = (__int64)(int)world_event_count << 7;
          *(unsigned int *)((char *)&g_1873DE460 + v33) = 2;
          *(unsigned int *)((char *)&g_1873DE464 + v33) = v31;
          crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v33), v202, (int)v30);
          *((_BYTE *)&g_1873DE4A0 + (int)v30 + v33) = 0;
          *(unsigned int *)((char *)&g_1873DE480 + v33) = v30;
          world_event_count = v32 + 1;
          *(unsigned int *)((char *)&g_1873DE484 + v33) = 4;
          *(unsigned int *)((char *)&g_1873DE488 + v33) = -1;
          *(unsigned int *)((char *)&g_1873DE48C + v33) = 0;
          HIWORD(world_event_count) = 0;
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
    if ( (int)item_link_peer_count > 0 )
    {
      v35 = 0;
      do
      {
        if ( v35 < 10 )
        {
          v36 = (int)dword_140404A6C[47224 * v35 + 438887411];
          if ( (_DWORD)v36 != -1 )
          {
            crt_sprintf(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v36 + 71856254],
              dword_140404A6C[3597 * v36 + 71856265]);
            if ( game_connected )
            {
              v37 = -1;
              do
                ++v37;
              while ( SR_VEC_LANES(128, v202[0], i8)[v37] );
              v38 = game_tick;
              v39 = world_event_count;
              if ( (int)v37 > 63 )
                LODWORD(v37) = 63;
              v40 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + v40) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + v40) = v38;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v40), v202, (int)v37);
              *((_BYTE *)&g_1873DE4A0 + (int)v37 + v40) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + v40) = v37;
              world_event_count = v39 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + v40) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + v40) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + v40) = 0;
              HIWORD(world_event_count) = 0;
            }
            v34 = v194;
          }
        }
        v35 = ++v34;
        v194 = v34;
      }
      while ( v34 < (int)item_link_peer_count );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list2"), 6) )
  {
    v41 = 10;
    v194 = 10;
    if ( (int)item_link_peer_count > 10 )
    {
      v42 = 10;
      do
      {
        if ( v42 < 20 )
        {
          v43 = (int)dword_140404A6C[47224 * v42 + 438887411];
          if ( (_DWORD)v43 != -1 )
          {
            crt_sprintf(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v43 + 71856254],
              dword_140404A6C[3597 * v43 + 71856265]);
            if ( game_connected )
            {
              v44 = -1;
              do
                ++v44;
              while ( SR_VEC_LANES(128, v202[0], i8)[v44] );
              v45 = game_tick;
              v46 = world_event_count;
              if ( (int)v44 > 63 )
                LODWORD(v44) = 63;
              v47 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + v47) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + v47) = v45;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v47), v202, (int)v44);
              *((_BYTE *)&g_1873DE4A0 + (int)v44 + v47) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + v47) = v44;
              world_event_count = v46 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + v47) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + v47) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + v47) = 0;
              HIWORD(world_event_count) = 0;
            }
            v41 = v194;
          }
        }
        v42 = ++v41;
        v194 = v41;
      }
      while ( v41 < (int)item_link_peer_count );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list3"), 6) )
  {
    v48 = 20;
    v194 = 20;
    if ( (int)item_link_peer_count > 20 )
    {
      v49 = 20;
      do
      {
        if ( v49 < 30 )
        {
          v50 = (int)dword_140404A6C[47224 * v49 + 438887411];
          if ( (_DWORD)v50 != -1 )
          {
            crt_sprintf(
              v202,
              "%s  %d",
              (     char *)&dword_140404A6C[3597 * v50 + 71856254],
              dword_140404A6C[3597 * v50 + 71856265]);
            if ( game_connected )
            {
              v51 = -1;
              do
                ++v51;
              while ( SR_VEC_LANES(128, v202[0], i8)[v51] );
              v52 = game_tick;
              v53 = world_event_count;
              if ( (int)v51 > 63 )
                LODWORD(v51) = 63;
              v54 = (__int64)(int)world_event_count << 7;
              *(unsigned int *)((char *)&g_1873DE460 + v54) = 2;
              *(unsigned int *)((char *)&g_1873DE464 + v54) = v52;
              crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v54), v202, (int)v51);
              *((_BYTE *)&g_1873DE4A0 + (int)v51 + v54) = 0;
              *(unsigned int *)((char *)&g_1873DE480 + v54) = v51;
              world_event_count = v53 + 1;
              *(unsigned int *)((char *)&g_1873DE484 + v54) = 4;
              *(unsigned int *)((char *)&g_1873DE488 + v54) = -1;
              *(unsigned int *)((char *)&g_1873DE48C + v54) = 0;
              HIWORD(world_event_count) = 0;
            }
            v48 = v194;
          }
        }
        v49 = ++v48;
        v194 = v48;
      }
      while ( v48 < (int)item_link_peer_count );
      v4 = v197;
      v5 = v198;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/list4"), 6) )
  {
    v55 = 30;
    v194 = 30;
    if ( (int)item_link_peer_count > 30 )
    {
      v56 = 30;
      do
      {
        v57 = (int)dword_140404A6C[47224 * v56 + 438887411];
        if ( (_DWORD)v57 != -1 )
        {
          crt_sprintf(
            v202,
            "%s  %d",
            (     char *)&dword_140404A6C[3597 * v57 + 71856254],
            dword_140404A6C[3597 * v57 + 71856265]);
          if ( game_connected )
          {
            v58 = -1;
            do
              ++v58;
            while ( SR_VEC_LANES(128, v202[0], i8)[v58] );
            v59 = game_tick;
            v60 = world_event_count;
            if ( (int)v58 > 63 )
              LODWORD(v58) = 63;
            v61 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + v61) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + v61) = v59;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v61), v202, (int)v58);
            *((_BYTE *)&g_1873DE4A0 + (int)v58 + v61) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + v61) = v58;
            world_event_count = v60 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + v61) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + v61) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + v61) = 0;
            HIWORD(world_event_count) = 0;
          }
          v55 = v194;
        }
        v56 = ++v55;
        v194 = v55;
      }
      while ( v55 < (int)item_link_peer_count );
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
        || (unsigned int)crt_sscanf((__int64)v202, "%d", &v194) == -1
        || (v64 = v194, v194 < 0) )
      {
        v64 = g_144CBFAA8;
        goto LABEL_128;
      }
    }
    else
    {
      v64 = g_144CBFAA8 + 1;
    }
    g_144CBFAA8 = v64;
LABEL_128:
    crt_sprintf(v202, "savereplay: %d", v64);
    if ( game_connected )
    {
      v65 = -1;
      do
        ++v65;
      while ( SR_VEC_LANES(128, v202[0], i8)[v65] );
      v66 = world_event_count;
      if ( (int)v65 > 63 )
        LODWORD(v65) = 63;
      v67 = game_tick;
      v68 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + v68) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + v68) = v67;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v68), v202, (int)v65);
      world_event_count = v66 + 1;
      *((_BYTE *)&g_1873DE4A0 + (int)v65 + v68) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + v68) = v65;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE484 + v68) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + v68) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + v68) = 0;
    }
  }
  if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/godmode"), 8) )
    goto LABEL_141;
  v69 = *(unsigned int *)((char *)&g_151620CC0 + v4) == 1;
  *(unsigned int *)((char *)&g_151620CC0 + v4) ^= 1u;
  if ( v69 )
  {
    if ( !game_connected )
      goto LABEL_141;
    v73 = game_tick;
    v71 = world_event_count;
    v72 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&g_1873DE460 + v72) = 2;
    *(unsigned int *)((char *)&g_1873DE464 + v72) = v73;
    *(_QWORD *)((char *)&g_1873DE4A0 + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&g_1873DE4A8 + v72) = 26223;
    *(_WORD *)((char *)&g_1873DE4A8 + v72 + 2) = 102;
    *(unsigned int *)((char *)&g_1873DE480 + v72) = 11;
  }
  else
  {
    if ( !game_connected )
      goto LABEL_141;
    v70 = game_tick;
    v71 = world_event_count;
    v72 = (__int64)(int)world_event_count << 7;
    *(unsigned int *)((char *)&g_1873DE460 + v72) = 2;
    *(unsigned int *)((char *)&g_1873DE464 + v72) = v70;
    *(_QWORD *)((char *)&g_1873DE4A0 + v72) = 0x2065646F6D646F67LL;
    *(_WORD *)((char *)&g_1873DE4A8 + v72) = 28271;
    *((_BYTE *)&g_1873DE4A8 + v72 + 2) = 0;
    *(unsigned int *)((char *)&g_1873DE480 + v72) = 10;
  }
  *(unsigned int *)((char *)&g_1873DE484 + v72) = 4;
  world_event_count = v71 + 1;
  *(unsigned int *)((char *)&g_1873DE488 + v72) = -1;
  HIWORD(world_event_count) = 0;
  *(unsigned int *)((char *)&g_1873DE48C + v72) = 0;
LABEL_141:
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/heli"), 5) )
  {
    v74 = *(int *)((char *)&g_151620CFC + v4);
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
    v78 = *(int *)((char *)&g_151620CFC + v4);
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
    v82 = *(int *)((char *)&g_151620CFC + v4);
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
    v86 = *(int *)((char *)&g_151620CFC + v4);
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
    v90 = *(int *)((char *)&g_151620CFC + v4);
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
    v94 = *(int *)((char *)&g_151620CFC + v4);
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
    v101 = *(int *)((char *)&g_151620CFC + v4);
    v194 = i;
    v102 = sr_CreateItem(
             25,
             (float *)&dword_140404A6C[7166 * v101 + 280651440],
             nullptr,
             (float *)&dword_140404A6C[7166 * v101 + 280651452]);
    v103 = *(unsigned int *)((char *)&g_151620CFC + v4);
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
      if ( SR_VEC_LANES(128, v202[0], i8)[0] && (unsigned int)crt_sscanf((__int64)v202, "%d", &v194) != -1 )
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
    if ( !SR_VEC_LANES(128, v202[0], i8)[0] || (unsigned int)crt_sscanf((__int64)v202, "%d", &v194) == -1 )
    {
      v114 = g_183F7A610;
    }
    else
    {
      v114 = v194 - 1;
      if ( (unsigned int)(v194 - 1) > 0x1F )
        v114 = 0;
      g_183F7A610 = v114;
    }
    crt_sprintf(v202, "mapnum: %d", v114 + 1);
    if ( game_connected )
    {
      v115 = -1;
      do
        ++v115;
      while ( SR_VEC_LANES(128, v202[0], i8)[v115] );
      v116 = game_tick;
      v117 = world_event_count;
      if ( (int)v115 > 63 )
        LODWORD(v115) = 63;
      v118 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + v118) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + v118) = v116;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v118), v202, (int)v115);
      *((_BYTE *)&g_1873DE4A0 + v118 + (int)v115) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + v118) = v115;
      world_event_count = v117 + 1;
      *(unsigned int *)((char *)&g_1873DE484 + v118) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + v118) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + v118) = 0;
      HIWORD(world_event_count) = 0;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/resetgame"), 10) )
  {
    g_1AD04B218 = 1;
    if ( *(_BYTE *)(v3 + 10) == 32 )
    {
      v119 = *(_BYTE *)(v3 + 11);
      if ( v119 == 114 )
      {
        g_1AD04B21C = 3;
        g_183EBFCC4 = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 101 )
      {
        g_1AD04B21C = 5;
        v119 = *(_BYTE *)(v3 + 11);
      }
      if ( v119 == 118 )
      {
        g_1AD04B21C = 7;
        g_183EBFCC4 = 5;
      }
    }
  }
  v120 = &g_160361354;
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
      crt_sscanf((__int64)v203, "%u", &v197);
      v127 = 0;
      if ( (int)g_160361344 > 0 )
      {
        v128 = &g_160361354;
        while ( *v128 != (_DWORD)v197 )
        {
          ++v127;
          v128 += 28;
          if ( v127 >= (int)g_160361344 )
            goto LABEL_229;
        }
        if ( v127 >= 0 && v127 < (int)g_160361344 )
        {
          g_1AD04B214 = v127;
          crt_sprintf(
            v202,
            "%s(%d) ban?",
            (     char *)&dword_140404A6C[28 * v127 + 134050365],
            dword_140404A6C[28 * v127 + 134050362]);
          if ( game_connected )
          {
            v173 = -1;
            do
              ++v173;
            while ( SR_VEC_LANES(128, v202[0], i8)[v173] );
            v174 = game_tick;
            v175 = world_event_count;
            if ( (int)v173 > 63 )
              LODWORD(v173) = 63;
            v176 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + v176) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + v176) = v174;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v176), v202, (int)v173);
            *((_BYTE *)&g_1873DE4A0 + v176 + (int)v173) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + v176) = v173;
            world_event_count = v175 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + v176) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + v176) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + v176) = 0;
            HIWORD(world_event_count) = 0;
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
        *((_BYTE *)&g_1862AE028 + v131++) = v132;
      }
      while ( v132 );
      g_1862AE020 = 0;
      v133 = -1;
      do
        ++v133;
      while ( SR_VEC_LANES(128, v202[0], i8)[v133] );
      g_1862AE024 = v133;
      v134 = sub_140115360();
      v135 = 0;
      if ( (int)g_160361344 <= 0 )
      {
LABEL_241:
        sub_1400A3D70();
      }
      else
      {
        v136 = &g_160361354;
        while ( *v136 != v134 )
        {
          ++v135;
          v136 += 28;
          if ( v135 >= (int)g_160361344 )
            goto LABEL_241;
        }
        v177 = sub_1400A3D70();
        if ( v135 >= 0 && v135 < (int)g_160361344 )
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
          crt_sprintf(
            v202,
            "%s(%d) %d cash",
            (     char *)&dword_140404A6C[v179 + 134050365],
            dword_140404A6C[v179 + 134050362],
            v177);
          if ( game_connected )
          {
            v181 = -1;
            do
              ++v181;
            while ( SR_VEC_LANES(128, v202[0], i8)[v181] );
            v182 = world_event_count;
            if ( (int)v181 > 63 )
              LODWORD(v181) = 63;
            v183 = game_tick;
            v184 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + v184) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + v184) = v183;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v184), v202, (int)v181);
            *((_BYTE *)&g_1873DE4A0 + (int)v181 + v184) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + v184) = v181;
            world_event_count = v182 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + v184) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + v184) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + v184) = 0;
            HIWORD(world_event_count) = 0;
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
        *((_BYTE *)&g_1862AE028 + v139++) = v140;
      }
      while ( v140 );
      g_1862AE020 = 0;
      v141 = -1;
      do
        ++v141;
      while ( SR_VEC_LANES(128, v202[0], i8)[v141] );
      g_1862AE024 = v141;
      v142 = sub_140115360();
      v143 = 0;
      if ( (int)g_160361344 <= 0 )
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
          if ( v143 >= (int)g_160361344 )
            goto LABEL_253;
        }
        v185 = sub_1400A3D70();
        if ( v143 >= 0 && v143 < (int)g_160361344 )
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
          crt_sprintf(
            v202,
            "%s(%d) %d rating",
            (     char *)&dword_140404A6C[v187 + 134050365],
            dword_140404A6C[v187 + 134050362],
            v185);
          if ( game_connected )
          {
            v188 = -1;
            do
              ++v188;
            while ( SR_VEC_LANES(128, v202[0], i8)[v188] );
            v189 = game_tick;
            v190 = world_event_count;
            if ( (int)v188 > 63 )
              LODWORD(v188) = 63;
            v191 = (__int64)(int)world_event_count << 7;
            *(unsigned int *)((char *)&g_1873DE460 + v191) = 2;
            *(unsigned int *)((char *)&g_1873DE464 + v191) = v189;
            crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v191), v202, (int)v188);
            *((_BYTE *)&g_1873DE4A0 + (int)v188 + v191) = 0;
            *(unsigned int *)((char *)&g_1873DE480 + v191) = v188;
            world_event_count = v190 + 1;
            *(unsigned int *)((char *)&g_1873DE484 + v191) = 4;
            *(unsigned int *)((char *)&g_1873DE488 + v191) = -1;
            *(unsigned int *)((char *)&g_1873DE48C + v191) = 0;
            HIWORD(world_event_count) = 0;
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
      && (unsigned int)crt_sscanf((__int64)v202, "%d", &v194) != -1
      && (g_1AD04B214 & 0x80000000) == 0
      && (int)g_1AD04B214 < (int)g_160361344 )
    {
      v146 = 28LL * (int)g_1AD04B214;
      LODWORD(v193) = v194;
      dword_140404A6C[v146 + 134050385] = v194;
      crt_sprintf(
        v202,
        "%s(%d) banned %d",
        (     char *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v146 * 4 + 540414816),
        dword_140404A6C[v146 + 134050362],
        v193);
      if ( game_connected )
      {
        v147 = -1;
        do
          ++v147;
        while ( SR_VEC_LANES(128, v202[0], i8)[v147] );
        v148 = game_tick;
        v149 = world_event_count;
        if ( (int)v147 > 63 )
          LODWORD(v147) = 63;
        v150 = (__int64)(int)world_event_count << 7;
        *(unsigned int *)((char *)&g_1873DE460 + v150) = 2;
        *(unsigned int *)((char *)&g_1873DE464 + v150) = v148;
        crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v150), v202, (int)v147);
        *((_BYTE *)&g_1873DE4A0 + (int)v147 + v150) = 0;
        *(unsigned int *)((char *)&g_1873DE480 + v150) = v147;
        world_event_count = v149 + 1;
        *(unsigned int *)((char *)&g_1873DE484 + v150) = 4;
        *(unsigned int *)((char *)&g_1873DE488 + v150) = -1;
        *(unsigned int *)((char *)&g_1873DE48C + v150) = 0;
        HIWORD(world_event_count) = 0;
      }
      g_1AD04B214 = -1;
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/bann"), 5) )
  {
    if ( game_connected )
    {
      v151 = game_tick;
      v152 = (__int64)(int)world_event_count++ << 7;
      HIWORD(world_event_count) = 0;
      *(unsigned int *)((char *)&g_1873DE460 + v152) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + v152) = v151;
      *(_QWORD *)((char *)&g_1873DE4A0 + v152) = 0x636E6163206E6162LL;
      *(unsigned int *)((char *)&g_1873DE4A8 + v152) = 1684368485;
      *((_BYTE *)&g_1873DE4AC + v152) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + v152) = 12;
      *(unsigned int *)((char *)&g_1873DE484 + v152) = 4;
      *(unsigned int *)((char *)&g_1873DE488 + v152) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + v152) = 0;
    }
    g_1AD04B214 = -1;
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/kick "), 6) )
  {
    v153 = -1;
    v194 = 0;
    if ( (int)item_link_peer_count > 0 )
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
      while ( v154 < (int)item_link_peer_count );
      v194 = v154;
      if ( v153 != -1 )
      {
        v161 = g_1A8E3DA00;
        v162 = 47224LL * v153;
        dword_140404A6C[g_1A8E3DA00 + 438886373] = dword_140404A6C[v162 + 438887405];
        g_1A8E3DA00 = v161 + 1;
        dword_140404A6C[v162 + 438887414] = 1200;
      }
    }
  }
  if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/message "), 9) )
  {
    v163 = *(__m128i_u *)(v3 + 25);
    v202[0] = *(__m128i_u *)(v3 + 9);
    v164 = *(__m128i_u *)(v3 + 41);
    v202[1] = v163;
    v165 = *(__m128i_u *)(v3 + 57);
    v202[2] = v164;
    v202[3] = v165;
    if ( game_connected )
    {
      v166 = -1;
      do
        ++v166;
      while ( SR_VEC_LANES(128, v202[0], i8)[v166] );
      v167 = game_tick;
      v168 = world_event_count;
      if ( (int)v166 > 63 )
        LODWORD(v166) = 63;
      v169 = (__int64)(int)world_event_count << 7;
      *(unsigned int *)((char *)&g_1873DE460 + v169) = 2;
      *(unsigned int *)((char *)&g_1873DE464 + v169) = v167;
      crt_memcpy((__m128i *)((char *)&g_1873DE4A0 + v169), v202, (int)v166);
      *((_BYTE *)&g_1873DE4A0 + (int)v166 + v169) = 0;
      *(unsigned int *)((char *)&g_1873DE480 + v169) = v166;
      world_event_count = v168 + 1;
      *(unsigned int *)((char *)&g_1873DE484 + v169) = 0;
      *(unsigned int *)((char *)&g_1873DE488 + v169) = -1;
      *(unsigned int *)((char *)&g_1873DE48C + v169) = 0;
      HIWORD(world_event_count) = 0;
    }
  }
  v170 = strncmp_sr((const char *)(uintptr_t)(v3), (const char *)(uintptr_t)("/clearkick"), 10);
  v171 = g_1A8E3DA00;
  if ( !v170 )
    v171 = 0;
  g_1A8E3DA00 = v171;
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

//----- (0000000140136450) ----------------------------------------------------
void sub_140136450()
{
  __int64 v0;
  __int64 v1;
  unsigned int *v2;
  __int64 v3;
  unsigned int *v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  signed int v10;
  unsigned int *v11;
  __int128 v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  signed int v21;
  __int128 v22;
  signed int v23;
  char v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  signed int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  unsigned __int16 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned int *v41;
  unsigned int *v42;
  __int64 v43;
  unsigned int *v44;
  unsigned int *v45;
  signed int v46;
  signed int v47;
  char v48;
  unsigned int v49;
  unsigned int v50;
  signed int v51;
  unsigned int v52;
  unsigned int v53;
  signed int v54;
  unsigned int v55;
  unsigned int v56;
  signed int v57;
  signed int v58;
  char v59;
  unsigned int v60;
  unsigned int v61;
  __int64 v62;
  unsigned int *v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  signed int v68;
  signed int v69;
  signed int v70;
  signed int v71;
  signed int v72;
  signed int v73;
  signed int v74;
  signed int v75;
  int *v76;
  __int64 v77;
  unsigned int *v78;
  signed int v79;
  signed int v80;
  signed int v81;
  signed int v82;
  signed int v83;
  __int64 v84;
  int *v85;
  _DWORD *v86;
  __int64 v87;
  int v88;
  int v89;
  signed int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  signed int v96;
  unsigned int v97;
  unsigned int v98;
  __int64 v99;
  unsigned int *v100;
  unsigned int *v101;
  __int64 v102;
  __int64 v103;
  unsigned int v104;
  __int64 v105;
  signed int v106;
  __int64 v107;
  signed int v108;
  char v109;
  unsigned int v110;
  unsigned int v111;
  unsigned __int64 v112;
  signed int v113;
  signed int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  int v118;
  int v119;
  signed int v120;
  char v121;
  unsigned int v122;
  signed int v123;
  unsigned int v124;
  __int64 v125;
  __int64 v126;
  signed int v127;
  int v128;
  signed int v129;
  unsigned int v130;
  unsigned __int16 v131;
  __int64 v132;
  int v133;
  unsigned int *v134;
  unsigned int *v135;
  unsigned int *v136;
  __int64 v137;
  signed int v138;
  signed int v139;
  __int128 v140;
  signed int v141;
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

  v0 = (int)item_link_peer_count;
  ++g_1AD04B20C;
  sub_1400299C0();
  sub_140127630();
  v1 = 256;
  v2 = &g_1A8E379E0;
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
  if ( (int)item_link_peer_count > 0 )
  {
    v5 = &g_1A8E6BBFC;
    v6 = item_link_peer_count;
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
          v11 = &g_1A8E379E8;
          while ( !*(v11 - 2) || *v11 != v9 )
          {
            ++v10;
            v11 += 20;
            if ( (__int64)v11 >= (__int64)&g_1A8E3C9E8 )
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
    v20 = game_unknown_183ebfcc8;
    if ( dword_140404A6C[v18 + 438887409] != game_unknown_183ebfcc8 )
    {
      packet_out_data = dword_1402B2658;
      *(_QWORD *)&packet_out_byte = 9;
      LOBYTE(g_18539D408) = 6;
      *(unsigned int *)((char *)&g_18539D408 + 1) = game_unknown_183ebfcc8;
      sub_140115D90(&game_type, 4);
      sub_140115D90(&g_183EBFCB0, 4);
      sub_140115D90(&g_183EBFCC4, 8);
      v21 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v21 = packet_out_byte + 1;
          packet_out_bit = 0;
          ++packet_out_byte;
        }
        v22 = g_183EBFAC0;
        *(_OWORD *)((char *)&packet_out_data + v21) = g_183EBFAB0;
        *(_OWORD *)((char *)&g_18539D414 + v21) = v22;
        v21 = packet_out_byte + 32;
        packet_out_byte += 32;
      }
      v23 = 16;
      v24 = packet_out_bit;
      v25 = (int)(fabs((game_sun_angle)) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v26 = v25 | 0x8000;
        if ( (game_sun_angle) >= 0.0 )
          v26 = v25;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v21) &= ~(((1 << v23) - 1) << v24);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v26 << SLOBYTE(packet_out_bit);
          v27 = 8 - packet_out_bit;
          v21 = packet_out_byte;
          if ( v23 < 8 - packet_out_bit )
            break;
          v24 = 0;
          packet_out_bit = 0;
          if ( v23 == v27 )
          {
            v21 = ++packet_out_byte;
            goto LABEL_38;
          }
          v21 = packet_out_byte + 1;
          v26 >>= v27;
          v23 -= v27;
          ++packet_out_byte;
          if ( v23 <= 0 )
            goto LABEL_38;
        }
        v24 = v23 + LOBYTE(packet_out_bit);
        packet_out_bit += v23;
      }
LABEL_38:
      v28 = 16;
      v29 = (int)(fabs((game_unknown_183ebfd58)) * 5215.189175234883) & 0x7FFF;
      if ( v21 < 0x10000 )
      {
        v30 = v29 | 0x8000;
        if ( (game_unknown_183ebfd58) >= 0.0 )
          v30 = v29;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v21) &= ~(((1 << v28) - 1) << v24);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v30 << SLOBYTE(packet_out_bit);
          v31 = 8 - packet_out_bit;
          v21 = packet_out_byte;
          if ( v28 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( v28 == v31 )
          {
            v21 = ++packet_out_byte;
            goto LABEL_47;
          }
          v21 = packet_out_byte + 1;
          v30 >>= v31;
          v28 -= v31;
          ++packet_out_byte;
          v24 = 0;
          if ( v28 <= 0 )
            goto LABEL_47;
        }
        packet_out_bit += v28;
      }
LABEL_47:
      if ( game_type == 7 )
      {
        sub_140115D90(&g_183F7A604, 8);
        v21 = packet_out_byte;
      }
      v32 = *(_QWORD *)&dword_140404A6C[v18 + 438887407];
      v33 = v19 + v21;
      v34 = dword_140404A6C[v18 + 438887405];
      g_1AD04ADCC = v21;
      v35 = dword_140404A6C[v18 + 438887406];
      dword_140404A6C[v18 + 438887412] = v33;
      sub_140130350(v34, v35, v32);
LABEL_238:
      v17 = v151;
      goto LABEL_239;
    }
    v36 = (int)dword_140404A6C[v18 + 438887411];
    v37 = game_state;
    if ( (_DWORD)v36 == -1
      || (v38 = (int)dword_140404A6C[3597 * v36 + 71856292], (_DWORD)v38 == -1)
      || (v39 = 7166 * v38, (int)dword_140404A6C[7166 * v38 + 280651318] <= 0) )
    {
      v41 = &dword_140404A6C[v18 + 438920024];
      if ( game_state == 2 )
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
    packet_out_data = dword_1402B2658;
    *(unsigned int *)((char *)&g_18539D40C + 1) = game_tick;
    *(_QWORD *)&packet_out_byte = 13;
    LOBYTE(g_18539D408) = 5;
    *(unsigned int *)((char *)&g_18539D408 + 1) = v20;
    sub_140115D90(&game_state, 4);
    if ( v37 == 1 )
    {
      v42 = &g_151620CA8;
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
      v46 = packet_out_byte;
      v47 = 24;
      v48 = packet_out_bit;
      if ( (int)packet_out_byte < 0x10000 )
      {
        v49 = g_183EBFCD4 & 0xFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v46) &= ~(((1 << v47) - 1) << v48);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v49 << SLOBYTE(packet_out_bit);
          v50 = 8 - packet_out_bit;
          v46 = packet_out_byte;
          if ( v47 < 8 - packet_out_bit )
            break;
          v48 = v3;
          packet_out_bit = v3;
          if ( v47 == v50 )
          {
            v46 = ++packet_out_byte;
            goto LABEL_72;
          }
          v46 = packet_out_byte + 1;
          v49 >>= v50;
          v47 -= v50;
          ++packet_out_byte;
          if ( v47 <= 0 )
            goto LABEL_72;
        }
        v48 = v47 + LOBYTE(packet_out_bit);
        packet_out_bit += v47;
      }
LABEL_72:
      v51 = 16;
      if ( v46 < 0x10000 )
      {
        v52 = LOWORD(g_183F79F84);
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v46) &= ~(((1 << v51) - 1) << v48);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v52 << SLOBYTE(packet_out_bit);
          v53 = 8 - packet_out_bit;
          v46 = packet_out_byte;
          if ( v51 < 8 - packet_out_bit )
            break;
          v48 = v3;
          packet_out_bit = v3;
          if ( v51 == v53 )
          {
            v46 = ++packet_out_byte;
            goto LABEL_80;
          }
          v46 = packet_out_byte + 1;
          v52 >>= v53;
          v51 -= v53;
          ++packet_out_byte;
          if ( v51 <= 0 )
            goto LABEL_80;
        }
        v48 = v51 + LOBYTE(packet_out_bit);
        packet_out_bit += v51;
      }
LABEL_80:
      v54 = 30;
      if ( v46 < 0x10000 )
      {
        v55 = game_day_time & 0x3FFFFFFF;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v46) &= ~(((1 << v54) - 1) << v48);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v55 << SLOBYTE(packet_out_bit);
          v56 = 8 - packet_out_bit;
          if ( v54 < 8 - packet_out_bit )
            break;
          packet_out_bit = v3;
          if ( v54 == v56 )
          {
            ++packet_out_byte;
            goto LABEL_88;
          }
          v54 -= v56;
          v46 = packet_out_byte + 1;
          v55 >>= v56;
          ++packet_out_byte;
          v48 = v3;
          if ( v54 <= 0 )
            goto LABEL_88;
        }
        packet_out_bit += v54;
      }
LABEL_88:
      sub_140115D90(&g_183EBFDB4, 6);
      sub_140115D90(&g_183EC5978, 6);
      sub_140115D90(&g_183ECB53C, 6);
      sub_140115D90(&g_183ED1100, 6);
      sub_140115D90(&g_183ED6CC4, 6);
      v57 = packet_out_byte;
      v58 = 8;
      if ( (int)packet_out_byte < 0x10000 )
      {
        v59 = packet_out_bit;
        v60 = (unsigned __int8)v36;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v57) &= ~(((1 << v58) - 1) << v59);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v60 << SLOBYTE(packet_out_bit);
          v61 = 8 - packet_out_bit;
          if ( v58 < 8 - packet_out_bit )
            break;
          packet_out_bit = v3;
          if ( v58 == v61 )
          {
            ++packet_out_byte;
            goto LABEL_96;
          }
          v58 -= v61;
          v57 = packet_out_byte + 1;
          v60 >>= v61;
          ++packet_out_byte;
          v59 = v3;
          if ( v58 <= 0 )
            goto LABEL_96;
        }
        packet_out_bit += v58;
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
        v68 = packet_out_byte;
        if ( (int)packet_out_byte < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            v68 = packet_out_byte + 1;
            packet_out_bit = v3;
            ++packet_out_byte;
          }
          *(unsigned int *)((char *)&packet_out_data + v68) = dword_140404A6C[v67 / 4 + 280651341];
          v69 = packet_out_byte + 4;
          packet_out_byte = v69;
          if ( v69 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v69;
              packet_out_bit = v3;
              packet_out_byte = v69;
            }
            *(unsigned int *)((char *)&packet_out_data + v69) = dword_140404A6C[v67 / 4 + 280651342];
            v70 = packet_out_byte + 4;
            packet_out_byte = v70;
            if ( v70 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++v70;
                packet_out_bit = v3;
                packet_out_byte = v70;
              }
              *(unsigned int *)((char *)&packet_out_data + v70) = dword_140404A6C[v67 / 4 + 280651365];
              v71 = packet_out_byte + 4;
              packet_out_byte = v71;
              if ( v71 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++v71;
                  packet_out_bit = v3;
                  packet_out_byte = v71;
                }
                *(unsigned int *)((char *)&packet_out_data + v71) = dword_140404A6C[v67 / 4 + 280651366];
                v72 = packet_out_byte + 4;
                packet_out_byte = v72;
                if ( v72 < 0x10000 )
                {
                  if ( (int)packet_out_bit > 0 )
                  {
                    ++v72;
                    packet_out_bit = v3;
                    packet_out_byte = v72;
                  }
                  *(unsigned int *)((char *)&packet_out_data + v72) = dword_140404A6C[v67 / 4 + 280651357];
                  packet_out_byte += 4;
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
      v73 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v73 = packet_out_byte + 1;
          packet_out_bit = v3;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v73) = v146;
        v74 = packet_out_byte + 4;
        packet_out_byte = v74;
        if ( v74 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v74;
            packet_out_bit = v3;
            packet_out_byte = v74;
          }
          *(unsigned int *)((char *)&packet_out_data + v74) = HIDWORD(v146);
          v75 = packet_out_byte + 4;
          packet_out_byte = v75;
          if ( v75 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v75;
              packet_out_bit = v3;
              packet_out_byte = v75;
            }
            *(unsigned int *)((char *)&packet_out_data + v75) = v147;
            packet_out_byte += 4;
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
      v79 = packet_out_byte;
      if ( (int)packet_out_byte < 0x10000 )
      {
        if ( (int)packet_out_bit > 0 )
        {
          v79 = packet_out_byte + 1;
          packet_out_bit = v3;
          ++packet_out_byte;
        }
        *(unsigned int *)((char *)&packet_out_data + v79) = dword_140404A6C[v62 + 71856272];
        v80 = packet_out_byte + 4;
        packet_out_byte = v80;
        if ( v80 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v80;
            packet_out_bit = v3;
            packet_out_byte = v80;
          }
          *(unsigned int *)((char *)&packet_out_data + v80) = dword_140404A6C[v62 + 71856273];
          v81 = packet_out_byte + 4;
          packet_out_byte = v81;
          if ( v81 < 0x10000 )
          {
            if ( (int)packet_out_bit > 0 )
            {
              ++v81;
              packet_out_bit = v3;
              packet_out_byte = v81;
            }
            *(unsigned int *)((char *)&packet_out_data + v81) = dword_140404A6C[v62 + 71856274];
            v82 = packet_out_byte + 4;
            packet_out_byte = v82;
            if ( v82 < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                ++v82;
                packet_out_bit = v3;
                packet_out_byte = v82;
              }
              *(unsigned int *)((char *)&packet_out_data + v82) = dword_140404A6C[v62 + 71856275];
              v83 = packet_out_byte + 4;
              packet_out_byte = v83;
              if ( v83 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++v83;
                  packet_out_bit = v3;
                  packet_out_byte = v83;
                }
                *(unsigned int *)((char *)&packet_out_data + v83) = dword_140404A6C[v62 + 71856276];
                packet_out_byte += 4;
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
        sub_140115D90((unsigned int *)((char *)&g_151622334 + v3 + v62 * 4), 4);
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
        v89 = packet_out_bit;
        v90 = packet_out_byte;
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
              packet_out_bit = 0;
              packet_out_byte = v90;
            }
            *(unsigned int *)((char *)&packet_out_data + v90) = *(unsigned int *)((char *)&g_151622778
                                                                                           + v93);
            v89 = packet_out_bit;
            v90 = packet_out_byte + 4;
            packet_out_byte += 4;
          }
          v94 = -1;
          do
            ++v94;
          while ( *((_BYTE *)&g_15162277C + v93 + v94) );
          v95 = v94 & 0x3F;
          v96 = 6;
          if ( v90 < 0x10000 )
          {
            v97 = v95;
            while ( 1 )
            {
              *((_BYTE *)&packet_out_data + v90) &= ~(((1 << v96) - 1) << v89);
              *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v97 << SLOBYTE(packet_out_bit);
              v98 = 8 - packet_out_bit;
              v90 = packet_out_byte;
              if ( v96 < 8 - packet_out_bit )
                break;
              v89 = 0;
              packet_out_bit = 0;
              if ( v96 == v98 )
              {
                v90 = ++packet_out_byte;
                goto LABEL_168;
              }
              v90 = packet_out_byte + 1;
              v97 >>= v98;
              v96 -= v98;
              ++packet_out_byte;
              if ( v96 <= 0 )
                goto LABEL_168;
            }
            v89 = v96 + packet_out_bit;
            packet_out_bit += v96;
LABEL_168:
            if ( v90 < 0x10000 )
            {
              if ( v89 > 0 )
              {
                ++v90;
                packet_out_bit = 0;
                packet_out_byte = v90;
              }
              crt_memcpy(
                (__m128i *)((char *)&packet_out_data + v90),
                (     __m128i *)((char *)&g_15162277C + v93),
                v95);
              v89 = packet_out_bit;
              v90 = v95 + packet_out_byte;
              packet_out_byte = v90;
              if ( v90 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++v90;
                  packet_out_bit = 0;
                  packet_out_byte = v90;
                }
                *(unsigned int *)((char *)&packet_out_data + v90) = *(unsigned int *)((char *)&g_1516227BC
                                                                                               + v93);
                v89 = packet_out_bit;
                v90 = packet_out_byte + 4;
                packet_out_byte += 4;
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
          v106 = packet_out_byte;
        }
        else
        {
          v106 = packet_out_byte;
          v107 = 32901 * v102;
          do
          {
            v108 = 6;
            if ( v106 < 0x10000 )
            {
              v109 = packet_out_bit;
              v110 = v105;
              while ( 1 )
              {
                *((_BYTE *)&packet_out_data + v106) &= ~(((1 << v108) - 1) << v109);
                *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v110 << SLOBYTE(packet_out_bit);
                v111 = 8 - packet_out_bit;
                if ( v108 < 8 - packet_out_bit )
                  break;
                packet_out_bit = 0;
                if ( v108 == v111 )
                {
                  ++packet_out_byte;
                  goto LABEL_188;
                }
                v108 -= v111;
                v106 = packet_out_byte + 1;
                v110 >>= v111;
                ++packet_out_byte;
                v109 = 0;
                if ( v108 <= 0 )
                  goto LABEL_188;
              }
              packet_out_bit += v108;
            }
LABEL_188:
            sub_140115D90(&dword_140404A6C[v107 + 299853762 + v105], 11);
            sub_140115D90(&dword_140404A6C[v107 + 299853698 + v105], 2);
            v112 = (int)dword_140404A6C[v107 + 299853762 + v105];
            v106 = packet_out_byte;
            if ( (int)packet_out_byte < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                v106 = packet_out_byte + 1;
                packet_out_bit = 0;
                ++packet_out_byte;
              }
              crt_memcpy(
                (__m128i *)((char *)&packet_out_data + v106),
                (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v105 + 299853826 + v103],
                v112);
              v106 = v112 + packet_out_byte;
              packet_out_byte += v112;
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
      v113 = world_event_count;
      v114 = 16;
      v115 = packet_out_bit;
      if ( v106 < 0x10000 )
      {
        v116 = LOWORD(world_event_count);
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v106) &= ~(((1 << v114) - 1) << v115);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v116 << SLOBYTE(packet_out_bit);
          v117 = 8 - packet_out_bit;
          v106 = packet_out_byte;
          if ( v114 < 8 - packet_out_bit )
            break;
          v115 = 0;
          packet_out_bit = 0;
          if ( v114 == v117 )
          {
            v106 = ++packet_out_byte;
            goto LABEL_204;
          }
          v106 = packet_out_byte + 1;
          v116 >>= v117;
          v114 -= v117;
          ++packet_out_byte;
          if ( v114 <= 0 )
            goto LABEL_204;
        }
        v115 = v114 + packet_out_bit;
        packet_out_bit += v114;
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
      if ( !item_link_peer_count )
        v119 = 0;
      if ( v106 < 0x10000 )
      {
        v121 = v115;
        v122 = v119 & 0x3F;
        v123 = v106;
        while ( 1 )
        {
          *((_BYTE *)&packet_out_data + v123) &= ~(((1 << v120) - 1) << v121);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v122 << SLOBYTE(packet_out_bit);
          v124 = 8 - packet_out_bit;
          if ( v120 < 8 - packet_out_bit )
            break;
          packet_out_bit = 0;
          if ( v120 == v124 )
          {
            ++packet_out_byte;
            goto LABEL_218;
          }
          v120 -= v124;
          v123 = packet_out_byte + 1;
          v122 >>= v124;
          ++packet_out_byte;
          v121 = 0;
          if ( v120 <= 0 )
            goto LABEL_218;
        }
        packet_out_bit += v120;
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
      v127 = packet_out_byte;
      v128 = packet_out_bit;
      v129 = 6;
      dword_140404A6C[v143 + 438887424] = v118;
      packet_out_byte = v106;
      packet_out_bit = v115;
      if ( v106 < 0x10000 )
      {
        do
        {
          *((_BYTE *)&packet_out_data + v106) &= ~(((1 << v129) - 1) << v115);
          *((_BYTE *)&packet_out_data + (int)packet_out_byte) |= (_BYTE)v99 << SLOBYTE(packet_out_bit);
          v130 = 8 - packet_out_bit;
          if ( v129 <= 8 - packet_out_bit )
            break;
          v129 -= v130;
          v106 = packet_out_byte + 1;
          LODWORD(v99) = (unsigned int)v99 >> v130;
          ++packet_out_byte;
          LOBYTE(v115) = 0;
          packet_out_bit = 0;
        }
        while ( v129 > 0 );
        v15 = v148;
      }
      packet_out_byte = v127;
      packet_out_bit = v128;
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          packet_out_byte = ++v127;
          packet_out_bit = 0;
        }
        *(unsigned int *)((char *)&packet_out_data + v127) = dword_140404A6C[v125 + 438934627];
        v128 = packet_out_bit;
        v127 = packet_out_byte + 4;
        packet_out_byte += 4;
      }
      ++dword_140404A6C[v143 + 438934627];
      if ( v127 < 0x10000 )
      {
        if ( v128 > 0 )
        {
          packet_out_byte = ++v127;
          packet_out_bit = 0;
        }
        *(unsigned int *)((char *)&packet_out_data + v127) = dword_140404A6C[v125 + 438934625];
        v127 = packet_out_byte + 4;
        packet_out_byte = v127;
        if ( v127 < 0x10000 )
        {
          if ( (int)packet_out_bit > 0 )
          {
            ++v127;
            packet_out_bit = 0;
            packet_out_byte = v127;
          }
          *(unsigned int *)((char *)&packet_out_data + v127) = dword_140404A6C[v125 + 438934626];
          v127 = packet_out_byte + 4;
          packet_out_byte += 4;
        }
      }
      dword_140404A6C[v143 + 438887412] += v127;
      v131 = dword_140404A6C[v143 + 438887406];
      v132 = dword_140404A6C[v143 + 438887405];
      g_1AD04ADCC = v127;
      sub_140130350(v132, v131, *(_QWORD *)&dword_140404A6C[v143 + 438887407]);
      v3 = 0;
      goto LABEL_238;
    }
    v44 = &g_183F7AE14;
    v3 = 3;
    v45 = &g_183EBFDB0;
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
  if ( (int)item_link_peer_count > 0 )
  {
    v134 = &g_1A8E3DA28;
    do
    {
      if ( v134[3] && (((unsigned __int8)v133 ^ LOBYTE(game_tick)) & 0x7F) == 0 )
      {
        v135 = &g_1A8E379E0;
        packet_out_data = dword_1402B2658;
        v136 = &g_1A8E379E8;
        *(_QWORD *)&packet_out_byte = 5;
        v137 = 256;
        LOBYTE(g_18539D408) = 9;
        do
        {
          sub_140115D90(v136 - 2, 1);
          if ( *v135 )
          {
            v138 = packet_out_byte;
            if ( (int)packet_out_byte < 0x10000 )
            {
              if ( (int)packet_out_bit > 0 )
              {
                v138 = packet_out_byte + 1;
                packet_out_bit = 0;
                ++packet_out_byte;
              }
              *(unsigned int *)((char *)&packet_out_data + v138) = *v136;
              v139 = packet_out_byte + 4;
              packet_out_byte = v139;
              if ( v139 < 0x10000 )
              {
                if ( (int)packet_out_bit > 0 )
                {
                  ++v139;
                  packet_out_bit = 0;
                  packet_out_byte = v139;
                }
                v140 = *(_OWORD *)(v136 + 5);
                *(_OWORD *)((char *)&packet_out_data + v139) = *(_OWORD *)(v136 + 1);
                *(_OWORD *)((char *)&g_18539D414 + v139) = v140;
                v141 = packet_out_byte + 32;
                packet_out_byte = v141;
                if ( v141 < 0x10000 )
                {
                  if ( (int)packet_out_bit > 0 )
                  {
                    ++v141;
                    packet_out_bit = 0;
                    packet_out_byte = v141;
                  }
                  *(unsigned int *)((char *)&packet_out_data + v141) = v136[17];
                  packet_out_byte += 4;
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
    while ( v133 < (int)item_link_peer_count );
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

//----- (00000001401380F0) ----------------------------------------------------
__int64            sub_1401380F0(int a1, int a2)
{
  /* Ported to src/engine/item_carry.c and compared with the original
     (tools/native-compare, suite itemcarry). The caller discards the result. */
  extern void item_follow_body(int, int);
  item_follow_body(a1, a2);
  return 0;
}

//----- (0000000140138770) ----------------------------------------------------
unsigned int *sub_140138770()
{
  unsigned int *v0;
  __int64 v1;
  unsigned int *result;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;

  g_18399DEFC = xmmword_1402792B0;
  g_18399DEE0 = 0;
  g_18399DEF4 = -1107296256;
  g_18399DF60 = xmmword_1402792B0;
  g_18399DEF8 = 0;
  g_18399DFC4 = xmmword_1402792B0;
  g_18399DF0C = 1096810496;
  g_18399DEE4 = 0;
  g_18399DF44 = 0;
  g_18399E028 = xmmword_1402792D0;
  g_18399DF58 = 1040187392;
  g_18399DF48 = xmmword_140278D50;
  g_18399DF70 = 1096810496;
  g_18399DFAC = xmmword_140278D50;
  g_18399DFA8 = 1;
  g_18399E2E4 = xmmword_1402792C0;
  g_18399DFBC = 1040187392;
  g_18399E348 = xmmword_1402792C0;
  g_18399DFD4 = 1096810496;
  g_18399E010 = xmmword_140278D60;
  g_18399E00C = 2;
  g_18399E038 = 1090519040;
  g_18399E2CC = xmmword_1402798A0;
  g_18399E020 = 1044381696;
  g_18399E2C8 = 0;
  g_18399E330 = xmmword_140278DD0;
  g_18399E2DC = 0;
  g_18399E3AC = xmmword_1402792E0;
  g_18399E2F4 = 1094713344;
  g_18399E394 = xmmword_140278EA0;
  g_18399E32C = 10;
  g_18399E340 = -1098907648;
  g_18399E460 = -1090519040;
  g_18399E4D8 = xmmword_1402792E0;
  g_18399E344 = 0;
  g_18399E4C8 = -1115684864;
  g_18399E358 = 1088421888;
  g_18399E390 = 11;
  *(unsigned int *)&g_18399E3A4 = -1098907648;
  g_18399E3A8 = 0;
  g_18399E3BC = 1077936128;
  g_18399E3F4 = 0;
  g_18399E410 = xmmword_1402792C0;
  g_18399E3FC = -1098907648;
  g_18399E400 = 0;
  g_18399E3F8 = 1035993088;
  g_18399E408 = 0;
  *(unsigned int *)&g_18399E404 = 1035993088;
  g_18399E420 = 1094713344;
  g_18399E458 = 13;
  g_18399E474 = xmmword_1402792C0;
  g_18399E464 = 0;
  g_18399E45C = 0x80000000;
  g_18399E46C = -1098907648;
  g_18399E470 = 0;
  g_18399E468 = 0x80000000;
  g_18399E484 = 1088421888;
  g_18399E4BC = 14;
  g_18399E4C4 = -1098907648;
  g_18399E4C0 = 0x80000000;
  g_18399E4D0 = -1098907648;
  v0 = &g_18399DF6C;
  g_18399E08C = xmmword_1402792A0;
  v1 = 4;
  g_18399E4D4 = 0;
  g_18399E0F0 = xmmword_1402792A0;
  g_18399E4CC = 0x80000000;
  g_18399E154 = xmmword_140279290;
  g_18399E4E8 = 1077936128;
  g_18399E1A4 = -1110441984;
  g_18399E074 = xmmword_1402798B0;
  g_18399E070 = 2;
  g_18399E0D8 = xmmword_140278DC0;
  g_18399E084 = 1031798784;
  g_18399E13C = xmmword_140278DB0;
  g_18399E09C = 1077936128;
  g_18399E0AC = 1052770304;
  g_18399E208 = -1096286208;
  g_18399E280 = xmmword_140279290;
  g_18399E0D4 = 4;
  g_18399E26C = -1100480512;
  g_18399E0E8 = -1104674816;
  g_18399E0EC = 0;
  g_18399E100 = 1075838976;
  g_18399E138 = 5;
  g_18399E14C = -1104674816;
  g_18399E150 = 0;
  g_18399E164 = 1069547520;
  g_18399E19C = 2;
  g_18399E1B8 = xmmword_1402792A0;
  g_18399E1A8 = 0;
  g_18399E1A0 = 1044381696;
  g_18399E1B0 = 1031798784;
  g_18399E1AC = 1044381696;
  g_18399E1C8 = 1077936128;
  g_18399E200 = 7;
  g_18399E21C = xmmword_1402792A0;
  g_18399E20C = 0;
  g_18399E204 = 0x80000000;
  g_18399E214 = -1104674816;
  g_18399E218 = 0;
  g_18399E210 = 0x80000000;
  g_18399E22C = 1075838976;
  g_18399E264 = 8;
  g_18399E270 = 0;
  g_18399E268 = 0x80000000;
  g_18399E278 = -1104674816;
  g_18399E27C = 0;
  g_18399E274 = 0x80000000;
  g_18399E290 = 1069547520;
  do
    v0 += 200;
  while ( (__int64)v0 < (__int64)&g_18399E5AC );
  result = (unsigned int *)&g_18399DF60;
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
  g_18399E06C = 1038090240;
  g_18399E054 = -1089025052;
  g_18399E060 = 1058458596;
  g_18399DF38 = 0;
  g_18399DF3C = 1044381696;
  g_18399DF40 = 1040187392;
  g_18399DF9C = 0;
  g_18399DFA0 = 1040187392;
  g_18399DFA4 = 1040187392;
  g_18399E000 = 0;
  g_18399E004 = 1040187392;
  g_18399E008 = 1040187392;
  g_18399E064 = 1;
  g_18399E068 = 1031798784;
  g_18399E320 = 1;
  g_18399E324 = 1052770304;
  g_18399E328 = 1035993088;
  g_18399E384 = 1;
  g_18399E388 = 1049624576;
  g_18399E38C = 1031798784;
  g_18399E3E8 = 2;
  g_18399E3EC = 1040187392;
  g_18399E3F0 = 1031798784;
  g_18399E44C = 1;
  g_18399E450 = 1052770304;
  g_18399E454 = 1035993088;
  g_18399E4B0 = 1;
  g_18399E4B4 = 1049624576;
  g_18399E4B8 = 1031798784;
  g_18399E514 = 2;
  g_18399E518 = 1040187392;
  g_18399E51C = 1031798784;
  g_18399E0C8 = 1;
  g_18399E0CC = 1048576000;
  g_18399E0D0 = 1031798784;
  g_18399E12C = 1;
  g_18399E130 = 1048576000;
  g_18399E134 = 1031798784;
  g_18399E190 = 1;
  g_18399E194 = 1031798784;
  g_18399E198 = 1031798784;
  g_18399E1F4 = 1;
  g_18399E1F8 = 1048576000;
  g_18399E1FC = 1031798784;
  g_18399E258 = 1;
  g_18399E25C = 1048576000;
  g_18399E260 = 1031798784;
  g_18399E2BC = 1;
  g_18399E2C0 = 1031798784;
  g_18399E2C4 = 1031798784;
  g_18399DF84 = -1085730853;
  g_18399DF90 = 1053364187;
  g_18399DF88 = -1085730853;
  g_18399DF94 = 1061752795;
  g_18399DF8C = -1094119461;
  g_18399DF98 = 1053364187;
  g_18399DFE8 = -1085730853;
  g_18399DFF4 = 1053364187;
  g_18399DFEC = -1085730853;
  g_18399DFF8 = 1061752795;
  g_18399DFF0 = -1094119461;
  g_18399DFFC = 1053364187;
  g_18399E04C = -1085730853;
  g_18399E058 = 1061752795;
  g_18399E050 = -1080636444;
  g_18399E05C = 1066847204;
  g_18399E308 = -1078989345;
  g_18399E314 = 1070141403;
  g_18399E30C = -1094119461;
  g_18399E318 = 1053364187;
  g_18399E310 = -1094119461;
  g_18399E31C = 1053364187;
  g_18399E36C = -1070600737;
  g_18399E378 = 0;
  g_18399E370 = 0;
  g_18399E380 = 0;
  g_18399E3D0 = -1085730853;
  g_18399E3DC = 1061752795;
  g_18399E3D4 = -1085730853;
  g_18399E3E0 = 1061752795;
  g_18399E3D8 = -1094119461;
  g_18399E3E4 = 1053364187;
  g_18399E434 = -1078989345;
  g_18399E440 = 1070141403;
  g_18399E438 = -1094119461;
  g_18399E444 = 1053364187;
  g_18399E43C = -1094119461;
  g_18399E448 = 1053364187;
  g_18399E498 = -1070600737;
  g_18399E4A4 = 0;
  g_18399E49C = 0;
  g_18399E4AC = 0;
  g_18399E4FC = -1085730853;
  g_18399E508 = 1061752795;
  g_18399E500 = -1085730853;
  g_18399E50C = 1061752795;
  g_18399E504 = -1094119461;
  g_18399E510 = 1053364187;
  g_18399E0B0 = -1077342245;
  g_18399E0BC = 1070141403;
  g_18399E0B4 = -1080636444;
  g_18399E0C0 = 1066847204;
  g_18399E0B8 = -1077342245;
  g_18399E0C4 = 1070141403;
  g_18399E114 = 0;
  g_18399E120 = 1070141403;
  g_18399E11C = 0;
  g_18399E128 = 0;
  g_18399E178 = -1077342245;
  g_18399E184 = 1070141403;
  g_18399E17C = -1085730853;
  g_18399E188 = 1061752795;
  g_18399E180 = -1074048047;
  g_18399E18C = 1073435601;
  g_18399E1DC = -1077342245;
  g_18399E1E8 = 1070141403;
  g_18399E1E0 = -1080636444;
  g_18399E1EC = 1066847204;
  g_18399E1E4 = -1077342245;
  g_18399E1F0 = 1070141403;
  g_18399E240 = 0;
  g_18399E24C = 1070141403;
  g_18399E248 = 0;
  g_18399E254 = 0;
  g_18399E2A4 = -1077342245;
  g_18399E2B0 = 1070141403;
  g_18399E2A8 = -1085730853;
  g_18399E2B4 = 1061752795;
  g_18399E2AC = -1074048047;
  g_18399E2B8 = 1073435601;
  return result;
}

//----- (000000014018D9F0) ----------------------------------------------------
__int64            sub_14018D9F0(int a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v4;

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

