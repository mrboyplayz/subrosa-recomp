#include "shared_client.h"

//----- (0000000140096440) ----------------------------------------------------
// Main frame/update hub candidate: polls input, handles connection/game state, invokes UI/menu draw, render uniform cache, and gameplay mouse/camera state.
void sr_ClientMain()
{
  unsigned int v0;
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
  unsigned int v12;
  __int64 v13;
  char v14;
  signed int i;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __m128i v20;
  __int64 v21;
  __m128i si128;
  char v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  unsigned int *v36;
  unsigned __int64 v37;
  signed int v38;
  __int64 v39;
  int v40;
  unsigned int *v41;
  int *v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  int v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 j;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  double v54;
  unsigned int v55;
  double v56;
  double v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  double v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  double v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  unsigned int *v84;
  unsigned int *v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  __m128i *v89;
  _DWORD *v90;
  __int64 v91;
  char *v92;
  char *v93;
  __int64 v94;
  __int64 v95;
  char *v96;
  char *v97;
  char *v98;
  char *v99;
  char *v100;
  __int64 v101;
  unsigned __int64 v102;
  int v103;
  char *v104;
  unsigned __int64 v105;
  char *v106;
  unsigned __int64 v107;
  char *v108;
  unsigned __int64 v109;
  char *v110;
  unsigned __int64 v111;
  char *v112;
  unsigned __int64 v113;
       __m128i *v114;
  char *v115;
  unsigned __int64 v116;
       __m128i *v117;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  char *v129;
  unsigned int v130;
  unsigned int v131;
  __int64 v132;
  __m128i v133;
       __m128i *v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  signed int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int128 v149;
  int v150;
  unsigned int *v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned int v156;
  char *v157;
  char v158;
  __m128 v159;
  __m128 v160;
  unsigned int v161;
  int v162;
       __m128i *v163;
  __m128 v164;
  __m128i v165;
  __m128 v166;
  __m128 v167;
  int v168;
  int v169;
  int v170;
  __int64 v171;
  int v172;
  int v173;
  __int64 v174;
  int v175;
  int v176;
  __int64 v177;
  int k;
  int v179;
  int v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  int v186;
  int v187;
  void **v188;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140096440[1424];
#define v190 (*(__int64 (*))(void *)(sr_frame_140096440 + 0)) /* [rsp+0h] */
#define v191 (*(__int64 (*))(void *)(sr_frame_140096440 + 32)) /* [rsp+20h] */
#define v192 (*(int (*))(void *)(sr_frame_140096440 + 40)) /* [rsp+28h] */
#define v193 (*(int (*))(void *)(sr_frame_140096440 + 48)) /* [rsp+30h] */
#define v194 (*(int (*))(void *)(sr_frame_140096440 + 56)) /* [rsp+38h] */
#define v195 (*(unsigned int (*))(void *)(sr_frame_140096440 + 64)) /* [rsp+40h] */
#define v196 (*(int (*))(void *)(sr_frame_140096440 + 72)) /* [rsp+48h] */
#define v197 (*(int (*))(void *)(sr_frame_140096440 + 80)) /* [rsp+50h] */
#define v198 (*(__int64 (*))(void *)(sr_frame_140096440 + 96)) /* [rsp+60h] */
#define v199 (*(unsigned int * (*))(void *)(sr_frame_140096440 + 104)) /* [rsp+68h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_140096440 + 112)) /* [rsp+70h] */
#define v201 (*(unsigned int * (*))(void *)(sr_frame_140096440 + 120)) /* [rsp+78h] */
#define v202 (*(__int64 (*))(void *)(sr_frame_140096440 + 128)) /* [rsp+80h] */
#define v203 (*(char * (*))(void *)(sr_frame_140096440 + 136)) /* [rsp+88h] */
#define v204 (*(char * (*))(void *)(sr_frame_140096440 + 144)) /* [rsp+90h] */
#define v205 (*(char * (*))(void *)(sr_frame_140096440 + 152)) /* [rsp+98h] */
#define v206 (*(char * (*))(void *)(sr_frame_140096440 + 160)) /* [rsp+A0h] */
#define v207 (*(char * (*))(void *)(sr_frame_140096440 + 168)) /* [rsp+A8h] */
#define v208 (*(char * (*))(void *)(sr_frame_140096440 + 176)) /* [rsp+B0h] */
#define v209 (*(char * (*))(void *)(sr_frame_140096440 + 184)) /* [rsp+B8h] */
#define v210 (*(char * (*))(void *)(sr_frame_140096440 + 192)) /* [rsp+C0h] */
#define v211 (*(char * (*))(void *)(sr_frame_140096440 + 200)) /* [rsp+C8h] */
#define v212 (*(char * (*))(void *)(sr_frame_140096440 + 208)) /* [rsp+D0h] */
#define v213 (*(char * (*))(void *)(sr_frame_140096440 + 216)) /* [rsp+D8h] */
#define v214 (*(char * (*))(void *)(sr_frame_140096440 + 224)) /* [rsp+E0h] */
#define v215 (*(char * (*))(void *)(sr_frame_140096440 + 232)) /* [rsp+E8h] */
#define v216 (*(char * (*))(void *)(sr_frame_140096440 + 240)) /* [rsp+F0h] */
#define v217 (*(char * (*))(void *)(sr_frame_140096440 + 248)) /* [rsp+F8h] */
#define v218 (*(char * (*))(void *)(sr_frame_140096440 + 256)) /* [rsp+100h] */
#define v219 (*(char * (*))(void *)(sr_frame_140096440 + 264)) /* [rsp+108h] */
#define v220 (*(__int64 (*))(void *)(sr_frame_140096440 + 272)) /* [rsp+110h] */
#define v221 (*(char * (*))(void *)(sr_frame_140096440 + 280)) /* [rsp+118h] */
#define v222 (*(__int64 (*))(void *)(sr_frame_140096440 + 288)) /* [rsp+120h] */
#define v223 (*(char * (*))(void *)(sr_frame_140096440 + 296)) /* [rsp+128h] */
#define v224 (*(char * (*))(void *)(sr_frame_140096440 + 304)) /* [rsp+130h] */
#define v225 (*(char (*)[64])(void *)(sr_frame_140096440 + 320)) /* [rsp+140h] */
#define v226 (*(_BYTE (*)[512])(void *)(sr_frame_140096440 + 384)) /* [rsp+180h] */
#define v227 (*(_BYTE (*)[512])(void *)(sr_frame_140096440 + 896)) /* [rsp+380h] */
#define v228 (*(__int64 (*))(void *)(sr_frame_140096440 + 1408)) /* [rsp+580h] */

  *(_QWORD *)&dword_140404A6C[284024502] = 0;
  dword_140404A6C[284024504] = 0;
  *(_QWORD *)&dword_140404A6C[284024515] = 0;
  dword_140404A6C[284024517] = 0;
  *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
  dword_140404A6C[284024513] = 1065353216;
  *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
  v0 = sub_140237448(nullptr);
  srand(v0);
  sub_140075650();
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  sr_text_draw_recovered("generating",512.0f,160.0f,20.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  SR_DEBUG_STAGE("Startup: load world assets, entity types and audio (0x139E90)");
  sub_140139E90(v6, v5, 0.0 /* unused native input */);
  SR_DEBUG_LOG("Initial asset loading returned");
  *(_OWORD *)&dword_140404A6C[225391181] = xmmword_140279810;
  dword_140404A6C[225391197] = 1115684864;
  dword_140404A6C[225391198] = 1061158912;
  *(_OWORD *)&dword_140404A6C[225391185] = xmmword_140279710;
  *(_OWORD *)&dword_140404A6C[225391189] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[225391193] = xmmword_140279490;
  sub_14007B2A0((__int64)&dword_140404A6C[225391188], (float *)&dword_140404A6C[225391188], sr_export_float_lane_container(1070141403));
  dword_140404A6C[193070975] = 3;
  *(_QWORD *)&dword_140404A6C[193070967] = -1;
  dword_140404A6C[193070974] = -1;
  *(_QWORD *)&dword_140404A6C[193070976] = 3;
  SR_DEBUG_STAGE("Startup: prepare client world (0x13CDF0)");
  sub_14013CDF0();
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v195 = 1065353216;
  v194 = 1065353216;
  v11 = 1126170624;
  v193 = 1065353216;
  v192 = 1065353216;
  LODWORD(v191) = 1;
  sr_text_draw_recovered("connecting",512.0f,160.0f,20.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);
  sub_140198EF3();
  SR_DEBUG_STAGE("Startup: connect to master server");
  if ( !(unsigned int)sr_ConnectMasterServer() )
  {
    v12 = inet_addr_sr("66.226.72.227");
    dword_140404A6C[280649181] = ntohl_sr(v12);
    LOWORD(dword_140404A6C[280649182]) = 27592;
  }
  sub_1400E5F10();
  dword_140404A6C[278384725] = sub_140198A50(&dword_140404A6C[278384727]);
  if ( dword_140404A6C[278384725] )
  {
    if ( (unsigned int)sub_140198AF0((__int64)v226) )
    {
      v226[63] = 0;
      v13 = 0;
      do
      {
        v14 = v226[v13];
        *((_BYTE *)&dword_140404A6C[73991096] + v13++) = v14;
      }
      while ( v14 );
      HIBYTE(dword_140404A6C[73991103]) = 0;
    }
    dword_140404A6C[278384988] = sub_1401988C0(4u);
    for ( i = 0; i < (int)dword_140404A6C[278384988]; ++i )
      sub_140198820(
        (__int64 *)&dword_140404A6C[132LL * i + 278384989],
        (__int64)&dword_140404A6C[132 * i + 278384992],
        i,
        4u);
  }
  dword_140404A6C[133919261] = 0;
  crt_chdir(&dword_140404A6C[278520373]);
  crt_sprintf(v225, "client2.csk");
  crt_chdir(&dword_140404A6C[278520245]);
  sub_14008EAD0(1);
  dword_140404A6C[289301069] = 1;
  v16 = sub_140198F9B();
  dword_140404A6C[283831309] = 0;
  dword_140404A6C[179668278] = v16 - 1000;
  dword_140404A6C[70087066] = 2;
  dword_140404A6C[283831311] = 0;
  sub_140198F9B();
  if ( (int)dword_140404A6C[283831311] <= 1 )
  {
    SR_DEBUG_STAGE("Startup complete: menu ready");
    v20 = _mm_cvtsi32_si128((int)(0x43A00000u));
    v21 = 0x18420000000LL;
    si128 = _mm_load_si128((     __m128i *)&xmmword_1402799B0);
    do
    {
      if ( dword_140404A6C[137297749] )
        break;
      dword_140404A6C[179955013] = sub_140198F9B();
      input_poll_events_candidate();
      if ( !dword_140404A6C[283831309] || (v23 = 3, dword_140404A6C[280649838]) )
        v23 = 2;
      sub_140076770(v23);
      sub_140198E40();
      if ( !dword_140404A6C[283831309] && *(_QWORD *)&dword_140404A6C[284024901] )
      {
        *(_QWORD *)&dword_140404A6C[456202717] = *(_QWORD *)&dword_140404A6C[284024901];
        *(_QWORD *)&dword_140404A6C[284024901] = 0;
        dword_140404A6C[456202714] = 0;
        game_connected = 0;
        crt_memset((void *)(uintptr_t)(&game_unknown_1a4d2dce0), 0, 0x2270864u);
        dword_140404A6C[179662132] = 1;
        v24 = sub_140198F9B();
        game_unknown_183ebfcc8 = -1;
        dword_140404A6C[179662126] = v24 + 200;
        dword_140404A6C[283831310] = 2;
      }
      sub_14006BED0();
      if ( dword_140404A6C[137297773] )
      {
        v26 = (signed int)(16 * dword_140404A6C[137297756]) / 9;
        if ( (int)dword_140404A6C[137297755] <= v26 )
          v26 = dword_140404A6C[137297755];
        dword_140404A6C[278520508] = v26;
        dword_140404A6C[137297759] = v26;
        dword_140404A6C[278520509] = (v26 + 8 * (v26 + 1)) / 16;
        dword_140404A6C[137297760] = dword_140404A6C[278520509];
        sub_14013D1B0();
        render_cache_camera_uniforms_candidate();
        dword_140404A6C[137297773] = 0;
      }
      if ( dword_140404A6C[283831309] )
      {
        if ( dword_140404A6C[283831310] == 3 )
        {
LABEL_31:
          ui_build_options_menu_candidate();
          goto LABEL_55;
        }
        if ( dword_140404A6C[283785909] )
        {
          dword_140404A6C[70087067] = 1114636288;
          dword_140404A6C[70087068] = 1134559232;
          dword_140404A6C[70087073] = 1;
          v30 = sub_140070200("chat", (__int64)&dword_140404A6C[283785913], 0x3Cu);
          if ( v30 )
          {
            if ( v30 == 1 )
            {
              v31 = -1;
              do
                ++v31;
              while ( *((_BYTE *)&dword_140404A6C[283785913] + v31) );
              dword_140404A6C[283785912] = v31;
              v32 = -1;
              do
                ++v32;
              while ( *((_BYTE *)&dword_140404A6C[283785913] + v32) );
              v33 = v32 & 0x3F;
              v34 = 3597LL * (int)local_player;
              dword_140404A6C[21 * (int)dword_140404A6C[v34 + 71856362] + 71856367 + v34] = 1;
              dword_140404A6C[21 * (int)dword_140404A6C[v34 + 71856362] + 71856368 + v34] = v33;
              crt_memcpy(
                (__m128i *)&dword_140404A6C[21 * (int)dword_140404A6C[v34 + 71856362] + 71856372 + v34],
                (     __m128i *)&dword_140404A6C[283785913],
                v33);
              dword_140404A6C[21 * (int)dword_140404A6C[v34 + 71856362] + 71856369 + v34] = dword_140404A6C[283785910];
              dword_140404A6C[v34 + 71856362] = ((unsigned __int8)dword_140404A6C[v34 + 71856362] + 1) & 0x3F;
              dword_140404A6C[283785911] = (LOBYTE(dword_140404A6C[283785911]) + 1) & 7;
            }
            dword_140404A6C[283785909] = 0;
          }
        }
      }
      else if ( dword_140404A6C[283831310] )
      {
        switch ( dword_140404A6C[283831310] )
        {
          case 1u:
            sub_1400FD300();
            break;
          case 2u:
            sub_1400FC480();
            break;
          case 3u:
            goto LABEL_31;
          case 4u:
            sub_1400FCFF0();
            break;
          case 5u:
            if ( (int)dword_140404A6C[70317962] < 16 )
            {
              dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
              dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
            }
            dword_140404A6C[70087069] = 1128267776;
            dword_140404A6C[70087070] = 1103101952;
            dword_140404A6C[70087074] = 41;
            v27 = sr_DrawMenuButton("Back");
            v28 = dword_140404A6C[283831310];
            if ( v27 )
              v28 = 0;
            dword_140404A6C[70087067] = 1107296256;
            dword_140404A6C[283831310] = v28;
            *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 64.0;
            sr_DrawMenuButtonSelectable("Female", (int *)&dword_140404A6C[73991647], 0);
            sr_DrawMenuButtonSelectable("Male", (int *)&dword_140404A6C[73991647], 1);
            sr_DrawMenuSlider("Head", (int *)&dword_140404A6C[73991648], 0, 4, 1);
            sr_DrawMenuSlider("Eyes", (int *)&dword_140404A6C[73991652], 0, 7, 1);
            sr_DrawMenuSlider("Hair", (int *)&dword_140404A6C[73991651], 0, 8, 1);
            sr_DrawMenuSlider("Hair Color", (int *)&dword_140404A6C[73991650], 0, 11, 1);
            sr_DrawMenuSlider("Skin", (int *)&dword_140404A6C[73991649], 0, 5, 1);
            v29 = dword_140404A6C[70317962];
            if ( (int)dword_140404A6C[70317962] > 0 )
            {
              --dword_140404A6C[70317962];
              dword_140404A6C[70087069] = dword_140404A6C[2 * (v29 - 1) + 70317963];
              dword_140404A6C[70087070] = dword_140404A6C[2 * (v29 - 1) + 70317964];
            }
            break;
          case 6u:
            dword_140404A6C[70087069] = 1126170624;
            dword_140404A6C[70087070] = 1101004800;
            dword_140404A6C[70087074] = 41;
            if ( (unsigned int)sr_DrawMenuButton("Back") )
              dword_140404A6C[283831310] = 0;
            break;
          default:
            dword_140404A6C[283831310] = 0;
            goto LABEL_142;
        }
      }
      else
      {
        sub_1400FE1B0();
      }
LABEL_55:
      if ( !dword_140404A6C[283831309] )
        goto LABEL_142;
      gameplay_mouse_camera_state_candidate(local_player, v25, *(double *)&v11);
      if ( !dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
        goto LABEL_142;
      v35 = 0;
      v36 = &dword_140404A6C[278846100];
      do
      {
        if ( *(v36 - 207) )
        {
          v37 = (int)*(v36 - 202);
          if ( (unsigned int)v37 <= 0x28 )
          {
            if ( _bittest64(&v21, v37) )
            {
              if ( *v36 == -1 )
              {
                v38 = sub_1400A4560();
                *v36 = v38;
                if ( v38 != -1 )
                {
                  v36[1] = 0;
                  v39 = 3LL * v38;
                  dword_140404A6C[v39 + 278520517] = 1;
                  dword_140404A6C[3 * v38 + 278520518] = v35;
                  dword_140404A6C[v39 + 278520519] = v37;
                }
              }
            }
          }
        }
        ++v35;
        v36 += 1760;
      }
      while ( v35 < 1024 );
      v40 = 0;
      v41 = &dword_140404A6C[278520518];
      v42 = (int *)&dword_140404A6C[283830725];
      do
      {
        if ( *(v41 - 1) )
        {
          v43 = (int)*v41;
          v44 = 1760 * v43;
          if ( dword_140404A6C[1760 * v43 + 278845893] && (v45 = dword_140404A6C[v44 + 278845898], v45 == v41[1]) )
          {
            if ( !dword_140404A6C[v44 + 278846101] || v45 == 40 )
            {
              switch ( v45 )
              {
                case 0x27u:
                  sub_14009C680(v43, *v42);
                  break;
                case 0x28u:
                  sub_14009C040(v43, *v42);
                  break;
                case 0x22u:
                  sub_14009CD10(v43, *v42);
                  break;
                case 0x1Du:
                  sub_14009D210(v43, *v42);
                  break;
              }
              dword_140404A6C[1760 * *v41 + 278846101] = 1;
            }
          }
          else
          {
            if ( dword_140404A6C[v44 + 278846100] == v40 )
              dword_140404A6C[v44 + 278846100] = -1;
            *(v41 - 1) = 0;
          }
        }
        ++v40;
        ++v42;
        v41 += 3;
      }
      while ( v40 < 256 );
      v46 = 0;
      v47 = 0;
      v48 = 0;
      do
      {
        if ( dword_140404A6C[v48 + 83194357] )
        {
          if ( dword_140404A6C[v48 + 83200510] && (unsigned int)v46 <= 0xFFF )
          {
            sub_14000C4C0(v46);
            for ( j = 0; j < 4; ++j )
            {
              if ( v48 <= 28378350 )
              {
                v50 = (int)dword_140404A6C[j + 83200503 + v47];
                dword_140404A6C[j + 83200503 + v47] = -1;
                if ( (unsigned int)v50 <= 0x3FF )
                {
                  dword_140404A6C[8969 * v50 + 73991662] = -1;
                  sub_1401941F0(0, v50);
                  sub_1401941F0(3, v50);
                  sub_1401941F0(5, v50);
                }
              }
            }
            dword_140404A6C[v48 + 83200510] = 0;
            if ( v46 == 1008 )
              ++dword_140404A6C[284205157];
          }
          if ( dword_140404A6C[v48 + 83200511] )
            sub_140017910(v46);
        }
        ++v46;
        v48 += 6930LL;
        v47 += 6930;
      }
      while ( v46 < 4096 );
      sub_1400932D0();
      if ( game_unknown_189f0eea0 )
      {
        v66 = dword_140404A6C[284021983];
        goto LABEL_112;
      }
      if ( local_player == -1
        || (v51 = (int)dword_140404A6C[3597 * local_player + 71856292], (_DWORD)v51 == -1) )
      {
        v53 = dword_140404A6C[284021983] == 0;
        if ( (int)dword_140404A6C[284021983] > 0 )
        {
          v66 = --dword_140404A6C[284021983];
LABEL_112:
          v53 = v66 == 0;
        }
      }
      else
      {
        v52 = (int)dword_140404A6C[3597 * local_player + 71856292];
        if ( (int)dword_140404A6C[7166 * v51 + 280651318] > 0 )
        {
          dword_140404A6C[284021983] = 180;
          goto LABEL_106;
        }
        v53 = dword_140404A6C[284021983] == 0;
        if ( (int)dword_140404A6C[284021983] > 0 )
        {
          dword_140404A6C[284021982] = dword_140404A6C[3597 * local_player + 71856292];
          --dword_140404A6C[284021983];
LABEL_106:
          *(_QWORD *)&v54 = dword_140404A6C[7166 * v51 + 280651341];
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          dword_140404A6C[284024513] = 1065353216;
          v55 = dword_140404A6C[344 * v52 + 284956408];
          dword_140404A6C[284024502] = dword_140404A6C[344 * v52 + 284956407];
          dword_140404A6C[284024504] = dword_140404A6C[344 * v52 + 284956409];
          dword_140404A6C[284024503] = v55;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508], v54);
          *(_QWORD *)&v56 = dword_140404A6C[7166 * dword_140404A6C[3597 * local_player + 71856292]
                                          + 280651342];
          *(float *)&v56 = *(float *)&v56 * 0.5;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505], v56);
          *(_QWORD *)&v57 = dword_140404A6C[7166 * dword_140404A6C[3597 * local_player + 71856292]
                                          + 280651342];
          *(float *)&v57 = *(float *)&v57 * 0.5;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024505], v57);
          v58 = 3597LL * (int)local_player;
          v59 = (int)dword_140404A6C[v58 + 71856292];
          *(float *)&dword_140404A6C[284024514] = 1.0 - *(float *)&dword_140404A6C[v58 + 71856332];
          v60 = dword_140404A6C[344 * v59 + 284956411];
          v61 = dword_140404A6C[344 * v59 + 284956413];
          v62 = dword_140404A6C[344 * v59 + 284956414];
          v63 = dword_140404A6C[344 * v59 + 284956415];
          dword_140404A6C[284024505] = dword_140404A6C[344 * v59 + 284956410];
          dword_140404A6C[284024507] = dword_140404A6C[344 * v59 + 284956412];
          dword_140404A6C[284024511] = dword_140404A6C[344 * v59 + 284956416];
          v64 = dword_140404A6C[344 * v59 + 284956418];
          dword_140404A6C[284024506] = v60;
          v65 = dword_140404A6C[344 * v59 + 284956417];
          dword_140404A6C[284024513] = v64;
          dword_140404A6C[284024508] = v61;
          dword_140404A6C[284024509] = v62;
          dword_140404A6C[284024510] = v63;
          dword_140404A6C[284024512] = v65;
          if ( dword_140404A6C[283831478] )
          {
            v61 = dword_140404A6C[284024529];
            v62 = dword_140404A6C[284024530];
            v63 = dword_140404A6C[284024531];
            dword_140404A6C[284024505] = dword_140404A6C[284024526];
            dword_140404A6C[284024507] = dword_140404A6C[284024528];
            dword_140404A6C[284024506] = dword_140404A6C[284024527];
            dword_140404A6C[284024508] = dword_140404A6C[284024529];
            dword_140404A6C[284024509] = dword_140404A6C[284024530];
            *(_QWORD *)&dword_140404A6C[284024510] = *(_QWORD *)&dword_140404A6C[284024531];
            *(_QWORD *)&dword_140404A6C[284024512] = *(_QWORD *)&dword_140404A6C[284024533];
          }
          *(float *)&dword_140404A6C[284024502] = (float)(*(float *)&dword_140404A6C[284024502]
                                                        - (float)(*(float *)&v61 * 0.0625))
                                                + (float)(*(float *)&v61 * 0.0625);
          *(float *)&dword_140404A6C[284024503] = (float)(*(float *)&dword_140404A6C[284024503]
                                                        - (float)(*(float *)&v62 * 0.0625))
                                                + (float)(*(float *)&v62 * 0.0625);
          dword_140404A6C[284024516] = dword_140404A6C[7166 * v59 + 280651681];
          *(float *)&dword_140404A6C[284024504] = (float)(*(float *)&dword_140404A6C[284024504]
                                                        - (float)(*(float *)&v63 * 0.0625))
                                                + (float)(*(float *)&v63 * 0.0625);
          dword_140404A6C[284024515] = dword_140404A6C[7166 * v59 + 280651680];
          dword_140404A6C[284024517] = dword_140404A6C[7166 * v59 + 280651682];
          goto LABEL_139;
        }
      }
      if ( v53 || game_unknown_189f0eea0 )
      {
        if ( local_player == -1 && !replay_active || game_unknown_189f0eea0 )
        {
          dword_140404A6C[284024513] = 1065353216;
          v67 = 0;
          if ( game_unknown_189f0eea0 )
            v67 = 2;
          v68 = 7 * v67;
          v69 = dword_140404A6C[7 * v67 + 284024382];
          *(_QWORD *)&v70 = dword_140404A6C[7 * v67 + 284024384];
          dword_140404A6C[284024502] = dword_140404A6C[7 * v67 + 284024381];
          v71 = dword_140404A6C[7 * v67 + 284024383];
          dword_140404A6C[284024503] = v69;
          dword_140404A6C[284024504] = v71;
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508], v70);
          sub_14007B2A0(
            (__int64)&dword_140404A6C[284024505],
            (float *)&dword_140404A6C[284024505],
            sr_export_float_lane_container((unsigned __int64)dword_140404A6C[v68 + 284024385]));
          *(_OWORD *)&dword_140404A6C[284024514] = xmmword_140278D30;
        }
        else
        {
          dword_140404A6C[284024502] = dword_140404A6C[284024388];
          dword_140404A6C[284024503] = dword_140404A6C[284024389];
          dword_140404A6C[284024504] = dword_140404A6C[284024390];
          dword_140404A6C[284024514] = 1065353216;
          *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
          dword_140404A6C[284024513] = 1065353216;
          *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
          sub_14007B2A0(
            (__int64)&dword_140404A6C[284024505],
            (float *)&dword_140404A6C[284024508],
            sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
          sub_14007B2A0(
            (__int64)&dword_140404A6C[284024505],
            (float *)&dword_140404A6C[284024505],
            sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
          v72 = dword_140404A6C[284021982];
          *(_QWORD *)&dword_140404A6C[284024515] = 0;
          dword_140404A6C[284024517] = 0;
          *(float *)&dword_140404A6C[284024502] = *(float *)&dword_140404A6C[284024502]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024511]);
          *(float *)&dword_140404A6C[284024503] = *(float *)&dword_140404A6C[284024503]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024512]);
          *(float *)&dword_140404A6C[284024504] = *(float *)&dword_140404A6C[284024504]
                                                + (float)(*(float *)&dword_140404A6C[284024393]
                                                        * *(float *)&dword_140404A6C[284024513]);
          if ( dword_140404A6C[284021982] != -1 )
          {
            if ( !dword_140404A6C[7166 * dword_140404A6C[284021982] + 280651303] )
              v72 = -1;
            dword_140404A6C[284021982] = v72;
          }
          v73 = replay_active;
          if ( !replay_active )
            goto LABEL_303;
          v74 = dword_140404A6C[19065878];
          if ( dword_140404A6C[19065878] != 1 )
          {
            dword_140404A6C[284024513] = 1065353216;
            v75 = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024382];
            *(_QWORD *)&v76 = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024384];
            dword_140404A6C[284024502] = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024381];
            v77 = dword_140404A6C[7 * dword_140404A6C[19065878] + 284024383];
            dword_140404A6C[284024503] = v75;
            dword_140404A6C[284024504] = v77;
            *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
            *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
            sub_14007B2A0((__int64)&dword_140404A6C[284024505], (float *)&dword_140404A6C[284024508], v76);
            sub_14007B2A0(
              (__int64)&dword_140404A6C[284024505],
              (float *)&dword_140404A6C[284024505],
              sr_export_float_lane_container((unsigned __int64)dword_140404A6C[7 * dword_140404A6C[19065878] + 284024385]));
            v74 = dword_140404A6C[19065878];
            v72 = dword_140404A6C[284021982];
            v73 = replay_active;
            *(float *)&dword_140404A6C[284024514] = 1.0
                                                  - *(float *)&dword_140404A6C[7 * dword_140404A6C[19065878] + 284024386];
          }
          if ( v73 )
          {
            if ( v74 == 1 )
              goto LABEL_135;
          }
          else
          {
LABEL_303:
            if ( game_type == 3
              || game_type - 5 <= 2
              || game_type == 4 && dword_140404A6C[3597 * local_player + 71856266] )
            {
LABEL_135:
              if ( v72 != -1 )
              {
                dword_140404A6C[284024514] = 1065353216;
                dword_140404A6C[284024513] = 1065353216;
                v78 = dword_140404A6C[344 * v72 + 284956344];
                v79 = dword_140404A6C[344 * v72 + 284956345];
                dword_140404A6C[284024390] = dword_140404A6C[344 * v72 + 284956346];
                dword_140404A6C[284024504] = dword_140404A6C[284024390];
                dword_140404A6C[284024388] = v78;
                dword_140404A6C[284024389] = v79;
                dword_140404A6C[284024502] = v78;
                dword_140404A6C[284024503] = v79;
                *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
                *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
                sub_14007B2A0(
                  (__int64)&dword_140404A6C[284024505],
                  (float *)&dword_140404A6C[284024508],
                  sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
                sub_14007B2A0(
                  (__int64)&dword_140404A6C[284024505],
                  (float *)&dword_140404A6C[284024505],
                  sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
                *(float *)&dword_140404A6C[284024502] = *(float *)&dword_140404A6C[284024502]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024511]);
                *(float *)&dword_140404A6C[284024503] = *(float *)&dword_140404A6C[284024503]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024512]);
                *(float *)&dword_140404A6C[284024504] = *(float *)&dword_140404A6C[284024504]
                                                      + (float)(*(float *)&dword_140404A6C[284024393]
                                                              * *(float *)&dword_140404A6C[284024513]);
                if ( dword_140404A6C[284021982] == -1 )
                {
                  *(_QWORD *)&dword_140404A6C[284024515] = 0;
                  dword_140404A6C[284024517] = 0;
                }
                else
                {
                  v80 = 7166LL * (int)dword_140404A6C[284021982];
                  v81 = dword_140404A6C[v80 + 280651339];
                  dword_140404A6C[284024515] = dword_140404A6C[v80 + 280651338];
                  dword_140404A6C[284024517] = dword_140404A6C[v80 + 280651340];
                  dword_140404A6C[284024516] = v81;
                }
              }
            }
          }
        }
      }
LABEL_139:
      if ( dword_140404A6C[179668288] )
      {
        *(_QWORD *)&dword_140404A6C[284024502] = *(_QWORD *)&dword_140404A6C[284024381];
        dword_140404A6C[284024504] = dword_140404A6C[284024383];
        *(_OWORD *)&dword_140404A6C[284024505] = xmmword_140278D30;
        dword_140404A6C[284024513] = 1065353216;
        *(_OWORD *)&dword_140404A6C[284024509] = xmmword_140278D30;
        sub_14007B2A0(
          (__int64)&dword_140404A6C[284024505],
          (float *)&dword_140404A6C[284024508],
          sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024384]));
        sub_14007B2A0(
          (__int64)&dword_140404A6C[284024505],
          (float *)&dword_140404A6C[284024505],
          sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024385]));
        *(_OWORD *)&dword_140404A6C[284024514] = xmmword_140278D30;
      }
      sub_14011FD00();
LABEL_142:
      dword_140404A6C[421831846] = 0;
      if ( dword_140404A6C[283831309] && game_connected )
      {
        dword_140404A6C[450929628] = dword_140404A6C[284021982];
        sub_14002DB60(255, local_player);
        v82 = 0;
        v200 = 0;
        v83 = 8;
        v198 = 0;
        v84 = &dword_140404A6C[450929549];
        v202 = 8;
        v85 = &dword_140404A6C[308337814];
        v199 = &dword_140404A6C[450929549];
        v86 = 0;
        v201 = &dword_140404A6C[308337814];
        do
        {
          v87 = *(v84 - 1);
          *(unsigned int *)((char *)&dword_140404A6C[308307077] + v86) = v87;
          if ( v87 )
          {
            v88 = (int)*v84;
            v89 = (__m128i *)((char *)&dword_140404A6C[308338453] + v82);
            *(unsigned int *)((char *)&dword_140404A6C[308307081] + v86) = v84[1];
            *(unsigned int *)((char *)&dword_140404A6C[308307082] + v86) = v84[2];
            *(unsigned int *)((char *)&dword_140404A6C[308307079] + v86) = v88;
            v88 *= 131604;
            v90 = (unsigned int *)((char *)&dword_140404A6C[308337813] + v86);
            *(unsigned int *)((char *)&dword_140404A6C[308337811] + v86) = *(unsigned int *)((char *)&dword_140404A6C[299853696]
                                                                                           + v88);
            v91 = v88 - v82 - (_QWORD)&dword_140404A6C[308338453];
            v92 = (char *)&dword_140404A6C[299854338] + v91;
            v203 = (char *)&dword_140404A6C[299855362] + v91;
            v93 = (char *)&dword_140404A6C[299854850] + v91;
            v204 = (char *)&dword_140404A6C[299855874] + v91;
            v205 = (char *)&dword_140404A6C[299856386] + v91;
            v218 = (char *)&dword_140404A6C[299856898] + v91;
            v221 = (char *)&dword_140404A6C[299857410] + v91;
            v94 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v91 + 1203628660;
            v95 = v88 - v86 - (_QWORD)&dword_140404A6C[308337813];
            v222 = v94;
            v206 = (char *)&dword_140404A6C[299853763] + v95;
            v96 = (char *)&dword_140404A6C[299853762] + v95;
            v223 = (char *)&dword_140404A6C[299853762] + v95;
            v97 = (char *)&dword_140404A6C[299853698] + v95;
            v207 = (char *)&dword_140404A6C[299853699] + v95;
            v224 = (char *)&dword_140404A6C[299853698] + v95;
            v208 = (char *)&dword_140404A6C[299853764] + v95;
            v209 = (char *)&dword_140404A6C[299853700] + v95;
            v210 = (char *)&dword_140404A6C[299853765] + v95;
            v211 = (char *)&dword_140404A6C[299853701] + v95;
            v212 = (char *)&dword_140404A6C[299853766] + v95;
            v213 = (char *)&dword_140404A6C[299853702] + v95;
            v214 = (char *)&dword_140404A6C[299853767] + v95;
            v215 = (char *)&dword_140404A6C[299853703] + v95;
            v216 = (char *)&dword_140404A6C[299853768] + v95;
            v98 = v203;
            v99 = v204;
            v100 = v205;
            v217 = (char *)&dword_140404A6C[299853704] + v95;
            v219 = (char *)&dword_140404A6C[299853769] + v95;
            v220 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v95 + 1203628176;
            v101 = 8;
            do
            {
              v102 = *(int *)((char *)v90 + (_QWORD)v96);
              v103 = *(_DWORD *)((char *)v90 + (_QWORD)v97);
              *v90 = v102;
              v90[64] = v103;
              crt_memcpy(v89 - 128, (__m128i *)((char *)v89 + v94), v102);
              v104 = v207;
              v105 = *(int *)((char *)v90 + (_QWORD)v206);
              v90[1] = v105;
              v90[65] = *(_DWORD *)((char *)v90 + (_QWORD)v104);
              crt_memcpy(v89, (     __m128i *)((char *)v89 + (_QWORD)v92), v105);
              v106 = v209;
              v107 = *(int *)((char *)v90 + (_QWORD)v208);
              v90[2] = v107;
              v90[66] = *(_DWORD *)((char *)v90 + (_QWORD)v106);
              crt_memcpy(v89 + 128, (     __m128i *)&v93[(_QWORD)v89], v107);
              v108 = v211;
              v109 = *(int *)((char *)v90 + (_QWORD)v210);
              v90[3] = v109;
              v90[67] = *(_DWORD *)((char *)v90 + (_QWORD)v108);
              crt_memcpy(v89 + 256, (     __m128i *)((char *)v89 + (_QWORD)v98), v109);
              v110 = v213;
              v111 = *(int *)((char *)v90 + (_QWORD)v212);
              v90[4] = v111;
              v90[68] = *(_DWORD *)((char *)v90 + (_QWORD)v110);
              crt_memcpy(v89 + 384, (     __m128i *)((char *)v89 + (_QWORD)v99), v111);
              v112 = v215;
              v113 = *(int *)((char *)v90 + (_QWORD)v214);
              v90[5] = v113;
              v90[69] = *(_DWORD *)((char *)v90 + (_QWORD)v112);
              crt_memcpy(v89 + 512, (     __m128i *)((char *)v89 + (_QWORD)v100), v113);
              v114 = (     __m128i *)&v218[(_QWORD)v89];
              v115 = v217;
              v116 = *(int *)((char *)v90 + (_QWORD)v216);
              v90[6] = v116;
              v90[70] = *(_DWORD *)((char *)v90 + (_QWORD)v115);
              crt_memcpy(v89 + 640, v114, v116);
              v117 = (     __m128i *)&v221[(_QWORD)v89];
              v118 = v220;
              v119 = *(int *)((char *)v90 + (_QWORD)v219);
              v90[7] = v119;
              v90[71] = *(_DWORD *)((char *)v90 + v118);
              crt_memcpy(v89 + 768, v117, v119);
              v89 += 1024;
              v94 = v222;
              v90 += 8;
              v96 = v223;
              v97 = v224;
              --v101;
            }
            while ( v101 );
            v85 = v201;
            v86 = v200;
            v84 = v199;
            v82 = v198;
            v83 = v202;
          }
          else
          {
            *(_QWORD *)(v85 - 1) = 0;
            *(_QWORD *)(v85 + 1) = 0;
            *(_QWORD *)(v85 + 3) = 0;
            *(_QWORD *)(v85 + 5) = 0;
            *(_QWORD *)(v85 + 7) = 0;
            *(_QWORD *)(v85 + 9) = 0;
            *(_QWORD *)(v85 + 11) = 0;
            *(_QWORD *)(v85 + 13) = 0;
            *(_QWORD *)(v85 + 15) = 0;
            *(_QWORD *)(v85 + 17) = 0;
            *(_QWORD *)(v85 + 19) = 0;
            *(_QWORD *)(v85 + 21) = 0;
            *(_QWORD *)(v85 + 23) = 0;
            *(_QWORD *)(v85 + 25) = 0;
            *(_QWORD *)(v85 + 27) = 0;
            *(_QWORD *)(v85 + 29) = 0;
            *(_QWORD *)(v85 + 31) = 0;
            *(_QWORD *)(v85 + 33) = 0;
            *(_QWORD *)(v85 + 35) = 0;
            *(_QWORD *)(v85 + 37) = 0;
            *(_QWORD *)(v85 + 39) = 0;
            *(_QWORD *)(v85 + 41) = 0;
            *(_QWORD *)(v85 + 43) = 0;
            *(_QWORD *)(v85 + 45) = 0;
            *(_QWORD *)(v85 + 47) = 0;
            *(_QWORD *)(v85 + 49) = 0;
            *(_QWORD *)(v85 + 51) = 0;
            *(_QWORD *)(v85 + 53) = 0;
            *(_QWORD *)(v85 + 55) = 0;
            *(_QWORD *)(v85 + 57) = 0;
            *(_QWORD *)(v85 + 59) = 0;
            *(_QWORD *)(v85 + 61) = 0;
          }
          v82 += 385604;
          v84 += 10;
          v86 += 385604;
          v198 = v82;
          v85 += 96401;
          v199 = v84;
          --v83;
          v200 = v86;
          v202 = v83;
          v201 = v85;
        }
        while ( v83 );
      }
      sub_14014FCF0((float *)&dword_140404A6C[284024502], &dword_140404A6C[284024505], &dword_140404A6C[284024515]);
      if ( local_player == -1 )
      {
        sub_14009E210(0);
      }
      else
      {
        sub_14009E210(local_player);
        v120 = 3597LL * (int)local_player;
        v121 = 32901LL * (int)local_player;
        dword_140404A6C[v120 + 71856270] = 0;
        if ( !dword_140404A6C[v121 + 299853693] )
          dword_140404A6C[v120 + 71856270] = 1;
      }
      unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
      unk_140404718(36160, 36064, 3553, dword_140404A6C[42 * dword_140404A6C[283829873] + 436582486], 0);
      if ( !dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
      {
        (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0x1.2121220000000p-5f,0x1.0101020000000p-4f,0x1.5151520000000p-4f,0.0f);
        (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
      }
      sub_14007BB00();
      v126 = dword_140404A6C[283831309];
      if ( dword_140404A6C[283831309] )
      {
        v127 = dword_140404A6C[283831310];
        if ( dword_140404A6C[283831310] != 3
          && !toggle_183f7aee0
          && game_state
          && local_player != -1 )
        {
          ui_draw_hud_menu_prompt_candidate(local_player);
          v127 = dword_140404A6C[283831310];
          v126 = dword_140404A6C[283831309];
        }
        if ( v126 )
        {
          if ( v127 != 3 && !toggle_183f7aee0 )
          {
            sub_140092D70();
            v127 = dword_140404A6C[283831310];
            v126 = dword_140404A6C[283831309];
          }
          if ( v126 && v127 != 3 && !dword_140404A6C[284023070] )
            sub_140092370();
        }
      }
      sub_14007BB00();
      if ( dword_140404A6C[283831309] && dword_140404A6C[283831310] != 3 && !toggle_183f7aee0 )
        sub_140082420();
      renderer_current_font = 2;
      if ( dword_140404A6C[283785909] )
      {
        if ( local_player == -1 )
        {
          v129 = "Chat:";
          goto LABEL_185;
        }
        v128 = dword_140404A6C[283785910];
        if ( !dword_140404A6C[283785910] )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          v191 = 0;
          sr_text_draw_recovered("Whisper:", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v20))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          v128 = dword_140404A6C[283785910];
        }
        if ( v128 == 1 )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          v191 = 0;
          sr_text_draw_recovered("Say:", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v20))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          v128 = dword_140404A6C[283785910];
        }
        if ( v128 == 2 )
        {
          v129 = "Yell:";
LABEL_185:
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          v191 = 0;
          sr_text_draw_recovered(v129, 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v20))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      sub_14007BB00();
      v130 = dword_140404A6C[283831309];
      if ( dword_140404A6C[283831309] )
      {
        v131 = dword_140404A6C[283831310];
        if ( dword_140404A6C[283831310] != 3
          && game_state == 2
          && effect_183f7aed8 > 0.0 )
        {
          qword_140404050(3553, renderer_white_texture);
          sub_14006CFF0(0.0, 0.0, 0x44800000 /* native XMM2 width 1024.0f */, 576.0, 0, 0, 0, 0, dword_140404A6C[284023067]);
          v131 = dword_140404A6C[283831310];
          v130 = dword_140404A6C[283831309];
        }
        if ( v130 && v131 != 3 && replay_active && game_state == 3 )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          LODWORD(v191) = 1;
          sr_text_draw_recovered("Replay End", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43700000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      sub_14007BB00();
      if ( dword_140404A6C[283831309]
        && dword_140404A6C[283831310] != 3
        && local_player != -1
        && (game_type == 3 || game_type - 5 <= 2)
        && game_state == 2
        && dword_140404A6C[3597 * local_player + 71856292] == -1
        && !toggle_183f7aee0 )
      {
        sub_140088C00();
      }
      if ( toggle_151e461d4 )
      {
        sr_text_draw_recovered("Ping:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        v196 = dword_140404A6C[430859699];
        v195 = 1065353216;
        v194 = 1065353216;
        v193 = 1065353216;
        v192 = 1065353216;
        v191 = 2;
        sr_text_draw_recovered("/i", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43960000u))))), 16.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v196});
        v133 = _mm_load_si128((     __m128i *)&xmmword_140279150);
        v134 = (     __m128i *)&dword_140404A6C[430859706];
        v135 = _mm_cvtsi64_si128((long long)(0));
        v136 = _mm_cvtsi64_si128((long long)(0));
        do
        {
          v137 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_loadu_si128(v134 - 1), _mm_cvtsi32_si128((int)(0LL))), si128);
          v138 = _mm_and_si128(_mm_add_epi32(v133, v135), v137);
          v139 = _mm_andnot_si128(v137, v135);
          v140 = v138;
          v141 = _mm_loadu_si128(v134);
          v134 += 2;
          v135 = _mm_or_si128(v140, v139);
          v142 = _mm_andnot_si128(_mm_cmpeq_epi32(_mm_cvtsi32_si128((int)(0LL)), v141), si128);
          v136 = _mm_or_si128(_mm_and_si128(_mm_add_epi32(v133, v136), v142), _mm_andnot_si128(v142, v136));
        }
        while ( (__int64)v134 < (__int64)&dword_140404A6C[430859962] );
        v143 = _mm_add_epi32(v135, v136);
        v144 = _mm_add_epi32(v143, _mm_srli_si128(v143, 8));
        sr_text_draw_recovered("Packetloss:", 0.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        v196 = 100 - (_mm_cvtsi128_si32(_mm_add_epi32(v144, _mm_srli_si128(v144, 4))) >> 8);
        v195 = 1065353216;
        v194 = 1065353216;
        v193 = 1065353216;
        v192 = 1065353216;
        v191 = 2;
        sr_text_draw_recovered("/i%", 112.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x439E0000u))))), 16.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v196});
      }
      v196 = dword_140404A6C[73991644];
      v195 = dword_140404A6C[284023068];
      v194 = 1065353216;
      v193 = 1065353216;
      v192 = 1065353216;
      LODWORD(v191) = 32;
      sr_text_draw_recovered("Mic:/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42800000u))))), 12.0, 32, 1.0f, 1.0f, 1.0f, sr_text_bits_float(v195), (const uint64[]){(unsigned)v196});
      v145 = 0;
      if ( (local_player & 0x80000000) == 0 )
        v145 = local_player;
      if ( dword_140404A6C[283831309] || dword_140404A6C[283831310] == 3 )
      {
        v146 = 32901LL * v145;
        if ( !dword_140404A6C[v146 + 299853693] || dword_140404A6C[283831310] == 3 )
        {
          qword_140404050(3553, renderer_white_texture);
          v53 = dword_140404A6C[v146 + 299853693] == 0;
          dword_140404A6C[456217205] = 2;
          dword_140404A6C[456217207] = 0;
          dword_140404A6C[456217208] = 9;
          if ( v53 )
            v149 = xmmword_140279700;
          else
            v149 = xmmword_140279690;
          *(_OWORD *)&dword_140404A6C[456807033] = v149;
          v150 = 0;
          v151 = &dword_140404A6C[308276353];
          {
            /* 0x1400985BD..0x14009864A (the graph of 0x140081B60, inlined): x = i + 16 (xmm10, from 0x140096866;
               768 when dword_140404A6C[283831310] == 3), y = sample * (1/256) (xmm11, 0x140096878) + 64 (288),
               z = 0 (xmm9, 0x140096492); 0x140098605 reads the short 16 bytes before rdi, 0x140098626 the one at rdi. */
            float sr_x0 = 16.0f, sr_y0 = 64.0f;
            if ( dword_140404A6C[283831310] == 3 )
            {
              sr_x0 = 768.0f;
              sr_y0 = 288.0f;
            }
            do
            {
              sub_14007D420((float)v150 + sr_x0, (float)*((__int16 *)v151 - 8) * 0.00390625f + sr_y0, 0.0f);
              ++v150;
              sub_14007D420((float)v150 + sr_x0, (float)*(__int16 *)v151 * 0.00390625f + sr_y0, 0.0f);
              v151 += 4;
            }
            while ( v150 < 239 );
          }
          sub_14006E0D0(v155, v147, v148);
          v20 = _mm_cvtsi32_si128((int)(0x43A00000u));
        }
        if ( dword_140404A6C[283831309] )
          goto LABEL_248;
      }
      if ( !dword_140404A6C[283831310] )
      {
        sr_text_draw_recovered("Sub Rosa", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        v197 = dword_1402B23DC + 97;
        v196 = dword_1402B231C;
        sr_text_draw_recovered("ALPHA /i/c", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43300000u))))), 16.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v196,(unsigned)v197});
        v195 = 1065353216;
        v194 = 1065353216;
        v193 = 1065353216;
        v192 = 1065353216;
        LODWORD(v191) = 65;
        sr_text_draw_recovered((char *)off_1402B2810, 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43400000u))))), 14.0, 65, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        if ( dword_140404A6C[278384725] )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          v191 = 0;
          sr_text_draw_recovered("Steam", 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x44090000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      if ( dword_140404A6C[283831310] == 1 )
      {
        sr_text_draw_recovered("Name", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Ping", 480.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Players", 560.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Game Type", 672.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Version", 784.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("Password", 878.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x42000000u))))), 20.0, 2, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43C80000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){dword_140404A6C[179473694]});
        v196 = dword_140404A6C[179662128];
        v195 = 1065353216;
        v194 = 1065353216;
        v193 = 1065353216;
        v192 = 1065353216;
        v191 = 0;
        sr_text_draw_recovered("/i", 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43CE0000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, (const uint64[]){(unsigned)v196});
      }
      if ( dword_140404A6C[283831310] == 2 )
      {
        v156 = dword_140404A6C[179662132];
        if ( dword_140404A6C[179662132] - 1 <= 1 )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          LODWORD(v191) = 1;
          sr_text_draw_recovered("Connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
          v156 = dword_140404A6C[179662132];
        }
        if ( v156 == 4 )
        {
          v195 = 1065353216;
          v194 = 1065353216;
          v193 = 1065353216;
          v192 = 1065353216;
          LODWORD(v191) = 1;
          sr_text_draw_recovered((char *)&dword_140404A6C[179662389], 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
        }
      }
      if ( dword_140404A6C[283831310] == 5 )
        sub_1400FBA50();
      if ( dword_140404A6C[283831310] == 6 )
        sub_1400FCC90();
      if ( dword_140404A6C[283831309] )
      {
LABEL_248:
        if ( dword_140404A6C[283831310] != 3 && toggle_151e461d0 )
          sub_140085AA0();
        if ( dword_140404A6C[283831309] )
        {
          v158 = 1;
          if ( !dword_140404A6C[280649838] )
            goto LABEL_254;
        }
        goto LABEL_253;
      }
      if ( dword_140404A6C[179668277] )
      {
        if ( dword_140404A6C[179668277] == 1 )
        {
          v157 = "CS Auth...";
        }
        else
        {
          if ( dword_140404A6C[179668277] != 2 )
            goto LABEL_253;
          crt_sprintf(v227, "%03d-%04d", dword_140404A6C[134050337] / 0x2710, dword_140404A6C[134050337] % 0x2710);
          v157 = v227;
        }
      }
      else if ( dword_140404A6C[278384725] )
      {
        v157 = "Steam Auth...";
        if ( !dword_140404A6C[278384987] )
          v157 = "Steam Ticket...";
      }
      else
      {
        v157 = "Steam Init Failed";
      }
      v195 = 1065353216;
      v194 = 1065353216;
      v193 = 1065353216;
      v192 = 1065353216;
      v191 = 0;
      sr_text_draw_recovered(v157, 16.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440C0000u))))), 12.0, 0, 1.0f, 1.0f, 1.0f, 1.0f, NULL);
      if ( dword_140404A6C[283831309] )
        goto LABEL_248;
LABEL_253:
      v158 = 0;
LABEL_254:
      sr_DrawMenu(v158);
      v159 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
      v160 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
      dword_140404A6C[dword_140404A6C[179955015] + 179955016] = sub_140198F9B() - dword_140404A6C[179955013];
      v161 = dword_140404A6C[179955080];
      v162 = dword_140404A6C[dword_140404A6C[179955015] + 179955016];
      dword_140404A6C[179955081] = 0;
      if ( (int)dword_140404A6C[179955080] < v162 )
        v161 = v162;
      dword_140404A6C[179955080] = v161;
      dword_140404A6C[179955015] = (LOBYTE(dword_140404A6C[179955015]) + 1) & 0x1F;
      v163 = (     __m128i *)&dword_140404A6C[179955020];
      do
      {
        v164 = _mm_cvtepi32_ps(_mm_loadu_si128(v163 - 1));
        v165 = _mm_loadu_si128(v163);
        v163 += 2;
        v159 = _mm_add_ps(v159, v164);
        v160 = _mm_add_ps(v160, _mm_cvtepi32_ps(v165));
      }
      while ( (__int64)v163 < (__int64)&dword_140404A6C[179955052] );
      v166 = _mm_add_ps(v159, v160);
      dword_140404A6C[421831846] = 0;
      v167 = _mm_add_ps(_mm_movehl_ps(v166, v166), v166);
      *(float *)&dword_140404A6C[179955081] = (float)(SR_VEC_LANES(128, v167, f32)[0] + SR_VEC_READ_LANES(128, _mm_shuffle_ps(v167, v167, 245), f32)[0])
                                            * 0.03125;
      if ( dword_140404A6C[283831309] )
      {
        v168 = 0;
        if ( game_connected )
        {
          v169 = sub_14003B920(1);
          if ( !v169 )
          {
            do
            {
              if ( v168 >= 20 )
                break;
              ++v168;
              v170 = sub_14003B920(1);
            }
            while ( !v170 );
          }
          v171 = 4;
          do
          {
            sub_14003B920(1);
            --v171;
          }
          while ( v171 );
        }
        else if ( replay_active )
        {
          v172 = sub_14003B920(1);
          if ( !v172 )
          {
            do
            {
              if ( v168 >= 20 )
                break;
              sub_140198FA1(1);
              ++v168;
              v173 = sub_14003B920(1);
            }
            while ( !v173 );
          }
          v174 = 4;
          if ( BYTE1(dword_140404A6C[284024767]) )
            v174 = 16;
          if ( BYTE2(dword_140404A6C[284024767]) )
            v174 = 64;
          do
          {
            sub_14003B920(1);
            --v174;
          }
          while ( v174 );
        }
        else if ( dword_140404A6C[73991654] )
        {
          v179 = sub_14003B920(1);
          if ( !v179 )
          {
            do
            {
              if ( v168 >= 20 )
                break;
              ++v168;
              v180 = sub_14003B920(1);
            }
            while ( !v180 );
          }
          v181 = 4;
          do
          {
            sub_14003B920(1);
            --v181;
          }
          while ( v181 );
        }
        else
        {
          v175 = sub_14003B920(1);
          if ( !v175 )
          {
            do
            {
              if ( v168 >= 20 )
                break;
              sub_140198FA1(1);
              ++v168;
              v176 = sub_14003B920(1);
            }
            while ( !v176 );
          }
          v177 = 4;
          do
          {
            sub_14003B920(1);
            --v177;
          }
          while ( v177 );
          for ( k = 0; !dword_140404A6C[421831846]; ++k )
          {
            if ( k >= 50 )
              break;
            sub_14003B920(1);
            sub_140198FA1(1);
          }
        }
      }
      unk_1404046F0(36160, 0);
      v11 = 0;
      (*(void (**)(float, float, float, float))&dword_140404A6C[18215089])(0.0f, 0.0f, 0.0f, 0.0f);
      (*(void (           **)(__int64))&dword_140404A6C[18215087])(0x4000);
      v186 = 0;
      v187 = 0;
      if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[278520508] )
        v186 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[278520508]) / 2;
      if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[278520509] )
        v187 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[278520509]) / 2;
      unk_1404046F0(36008, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
      unk_1404046F0(36009, 0);
      v196 = 9728;
      v195 = 0x4000;
      v194 = dword_140404A6C[278520509] + v187;
      v193 = dword_140404A6C[278520508] + v186;
      v192 = v187;
      LODWORD(v191) = v186;
      ((void (*)(int, int, int, int, int, int, int, int, unsigned int, unsigned int))unk_140404740)(
        0, 0, (int)dword_140404A6C[278520508], (int)dword_140404A6C[278520509],
        v186, v187, (int)dword_140404A6C[278520508] + v186,
        (int)dword_140404A6C[278520509] + v187, 0x4000u, 9728u);
      unk_1404046F0(36008, 0);
      sub_140198EF3();
      v21 = 0x18420000000LL;
    }
    while ( (int)dword_140404A6C[283831311] <= 1 );
  }
  if ( dword_140404A6C[283831309] )
    sub_140095FC0(v18, v17, v19);
  closesocket_sr((int)dword_140404A6C[289301079]);
  dword_140404A6C[289301071] = 0;
  sub_1401E0F20(*(void **)&dword_140404A6C[299853437]);
  v188 = (void **)&dword_140404A6C[299853565];
  do
    sub_1401E2C30(*v188++);
  while ( (__int64)v188 < (__int64)&dword_140404A6C[299853581] );
  return; /* native void epilogue; cookie is compiler instrumentation */
}
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
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef v206
#undef v207
#undef v208
#undef v209
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v216
#undef v217
#undef v218
#undef v219
#undef v220
#undef v221
#undef v222
#undef v223
#undef v224
#undef v225
#undef v226
#undef v227
#undef v228
