#include "shared_client.h"


//----- (00000001400090C0) ----------------------------------------------------
__int64            sub_1400090C0(int a1)
{
  /* Clean implementation: src/engine/bot.c, checked against the original executable
     (tools/native-compare/t_bot.c). */
  extern long long bot_plan_next_leg(int player);
  return bot_plan_next_leg(a1);
}

//----- (00000001400096B0) ----------------------------------------------------
__int64            sub_1400096B0(int a1, int a2, int a3, unsigned int a4, int a5, int a6)
{
  /* Clean implementation: src/engine/bot.c, checked against the original executable
     (tools/native-compare/t_botroute.c). The original takes the target intersection's
     column and row as fifth and sixth arguments. */
  extern long long bot_plan_route(int player, int street, int heading, int reverse, int target_column, int target_row);
  return bot_plan_route(a1, a2, a3, (int)a4, a5, a6);
}

//----- (000000014005CCF0) ----------------------------------------------------
__int64 sub_14005CCF0()
{
  /* Clean implementation: src/engine/player.c, checked against the original executable
     (tools/native-compare/t_player.c). */
  extern int player_create(void);
  return (unsigned int)player_create();   /* the original returns -1 as 0xFFFFFFFF, zero-extended */
}

//----- (00000001400802F0) ----------------------------------------------------
void            sub_1400802F0(int a1)
{
  /* Clean implementation: src/engine/player.c, checked against the original executable
     (tools/native-compare/t_player.c). */
  extern void player_delete(int player);
  player_delete(a1);
}

//----- (0000000140091E60) ----------------------------------------------------
unsigned __int64            sub_140091E60(int a1)
{
  /* Clean implementation: src/engine/player.c, checked against the original executable
     (tools/native-compare/t_player.c). */
  extern char *player_clean_name(int player);
  return (unsigned __int64)(uintptr_t)player_clean_name(a1);
}

//----- (000000014009EA20) ----------------------------------------------------
void            sub_14009EA20(int a1, int a2)
{
  /* Clean implementation: src/engine/player_input.c, checked against the original executable
     (tools/native-compare/t_playerinput.c). */
  extern void player_read_hand_keys(int player, int human);
  player_read_hand_keys(a1, a2);
}

//----- (000000014009F050) ----------------------------------------------------
__int64            sub_14009F050(int a1, __int64 a2, double a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r8d
  unsigned int v10; // r10d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int v27; // r8d
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  unsigned int *v31; // rcx
  int v32; // eax
  unsigned int v33; // r11d
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // esi
  int v37; // ebx
  char v38; // r12
  __int64 v39; // rcx
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // rcx
  float v43; // xmm1_4
  float v44; // xmm0_4
  char v45; // r13
  unsigned __int8 v46; // al
  unsigned int v47; // ecx
  int v48; // r8d
  char v49; // al
  __int64 v50; // r14
  int v51; // r8d
  unsigned int v52; // edx
  char v53; // al
  unsigned int v54; // r10d
  unsigned int v55; // ebx
  unsigned int v56; // eax
  unsigned __int8 v57; // al
  unsigned int v58; // ecx
  __int64 v59; // rdx
  char v60; // al
  unsigned __int8 v61; // al
  unsigned int v62; // ecx
  int v63; // r8d
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rdx
  char v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned int v72; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009F050[96];
#define v74 (*(__int64 (*))(void *)(sr_frame_14009F050 + 0)) /* [rsp+0h] */
#define v75 (*(int (*))(void *)(sr_frame_14009F050 + 32)) /* [rsp+20h] */
#define v76 (*(int (*))(void *)(sr_frame_14009F050 + 36)) /* [rsp+24h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_14009F050 + 40)) /* [rsp+28h] */
#define v78 (*(__int128 (*))(void *)(sr_frame_14009F050 + 48)) /* [rsp+30h] */
#define v79 (*(__int128 (*))(void *)(sr_frame_14009F050 + 64)) /* [rsp+40h] */
#define v80 (*(float (*))(void *)(sr_frame_14009F050 + 80)) /* [rsp+50h] */
#define v81 (*(__int64 (*))(void *)(sr_frame_14009F050 + 88)) /* [rsp+58h] */

  v3 = 0;
  v4 = a1;
  v75 = a1;
  dword_140404A6C[438291413] = 2;
  if ( dword_140404A6C[283831311] == 1 )
  {
    dword_140404A6C[280649838] = 1;
    v5 = 1;
    dword_140404A6C[283831484] = 0;
  }
  else
  {
    dword_140404A6C[283831484] = 1;
    v5 = 0;
    if ( !dword_140404A6C[283831311] && a1 != -1 && dword_140404A6C[280649838] )
      sub_140118B70(a1);
  }
  sub_14003A0F0();
  dword_140404A6C[284024595] = dword_140404A6C[284024635];
  *(_OWORD *)&dword_140404A6C[284024557] = *(_OWORD *)&dword_140404A6C[284024597];
  *(_OWORD *)&dword_140404A6C[284024561] = *(_OWORD *)&dword_140404A6C[284024601];
  *(_OWORD *)&dword_140404A6C[284024565] = *(_OWORD *)&dword_140404A6C[284024605];
  *(_OWORD *)&dword_140404A6C[284024569] = *(_OWORD *)&dword_140404A6C[284024609];
  *(_OWORD *)&dword_140404A6C[284024573] = *(_OWORD *)&dword_140404A6C[284024613];
  *(_OWORD *)&dword_140404A6C[284024577] = *(_OWORD *)&dword_140404A6C[284024617];
  *(_OWORD *)&dword_140404A6C[284024581] = *(_OWORD *)&dword_140404A6C[284024621];
  *(_OWORD *)&dword_140404A6C[284024585] = *(_OWORD *)&dword_140404A6C[284024625];
  *(_OWORD *)&dword_140404A6C[284024589] = *(_OWORD *)&dword_140404A6C[284024629];
  *(_QWORD *)&dword_140404A6C[284024593] = *(_QWORD *)&dword_140404A6C[284024633];
  dword_140404A6C[284024635] = sr_menu_relative_mouse(&v76, (int *)&v77);
  dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
  dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
  *(float *)&dword_140404A6C[284024599] = (float)v76;
  *(float *)&dword_140404A6C[284024600] = (float)(int)v77;
  dword_140404A6C[284024597] = 1140850688;
  dword_140404A6C[284024598] = 1134559232;
  sub_140198E40();
  if ( BYTE1(dword_140404A6C[284024775]) )
  {
    BYTE1(dword_140404A6C[284024775]) = 0;
    sub_140095FC0(v7, v6, v8);
  }
  v9 = dword_140404A6C[468760166];
  v10 = dword_140404A6C[468760165];
  v11 = 0;
  for ( dword_140404A6C[280649848] = 0; v9 != v10; dword_140404A6C[468760166] = v9 )
  {
    if ( v11 < 32 )
    {
      dword_140404A6C[5 * v11 + 280649849] = dword_140404A6C[5 * v9 + 468760167];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649852] = dword_140404A6C[5 * v9 + 468760169];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649851] = dword_140404A6C[5 * v9 + 468760168];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649853] = dword_140404A6C[5 * v9 + 468760170];
      dword_140404A6C[5 * dword_140404A6C[280649848] + 280649850] = dword_140404A6C[5 * v9 + 468760171];
      v11 = ++dword_140404A6C[280649848];
    }
    v9 = ((_WORD)v9 + 1) & 0x3FF;
  }
  if ( (_DWORD)v4 != -1 )
  {
    v12 = (int)dword_140404A6C[3597 * v4 + 71856292];
    if ( (_DWORD)v12 != -1 )
    {
      v13 = 7166 * v12;
      if ( (int)dword_140404A6C[7166 * v12 + 280651318] > 0 && (int)dword_140404A6C[v13 + 280658139] > 0 )
      {
        v14 = (int)dword_140404A6C[v13 + 280658140];
        if ( (_DWORD)v14 != -1 && dword_140404A6C[1760 * v14 + 278845898] == 39 )
        {
          sub_1400A1640(v4, v14);
          v11 = dword_140404A6C[280649848];
        }
      }
    }
  }
  v15 = 2;
  v16 = (__int64)&dword_140404A6C[284024765];
  v17 = &dword_140404A6C[284024637];
  do
  {
    v17 += 32;
    v18 = *(_OWORD *)v16;
    v19 = *(_OWORD *)(v16 + 16);
    v16 += 128;
    *((_OWORD *)v17 - 8) = v18;
    v20 = *(_OWORD *)(v16 - 96);
    *((_OWORD *)v17 - 7) = v19;
    v21 = *(_OWORD *)(v16 - 80);
    *((_OWORD *)v17 - 6) = v20;
    v22 = *(_OWORD *)(v16 - 64);
    *((_OWORD *)v17 - 5) = v21;
    v23 = *(_OWORD *)(v16 - 48);
    *((_OWORD *)v17 - 4) = v22;
    v24 = *(_OWORD *)(v16 - 32);
    *((_OWORD *)v17 - 3) = v23;
    v25 = *(_OWORD *)(v16 - 16);
    *((_OWORD *)v17 - 2) = v24;
    *((_OWORD *)v17 - 1) = v25;
    --v15;
  }
  while ( v15 );
  v26 = *(unsigned __int16 *)(v16 + 64);
  v27 = 0;
  v28 = *(_OWORD *)(v16 + 16);
  *(_OWORD *)v17 = *(_OWORD *)v16;
  v29 = *(_OWORD *)(v16 + 32);
  *((_OWORD *)v17 + 1) = v28;
  v30 = *(_OWORD *)(v16 + 48);
  *((_OWORD *)v17 + 2) = v29;
  *((_OWORD *)v17 + 3) = v30;
  *((_WORD *)v17 + 32) = v26;
  *((_BYTE *)v17 + 66) = *(_BYTE *)(v16 + 66);
  if ( v11 > 0 )
  {
    v31 = &dword_140404A6C[280649851];
    do
    {
      if ( !*(v31 - 1) )
      {
        v16 = (int)*v31;
        if ( (unsigned int)(v16 - 1) <= 0xFE )
        {
          v32 = *(v31 - 2);
          if ( v32 )
          {
            if ( v32 == 1 )
              *((_BYTE *)&dword_140404A6C[284024765] + v16) = 0;
          }
          else
          {
            *((_BYTE *)&dword_140404A6C[284024765] + v16) = 1;
          }
        }
      }
      ++v27;
      v31 += 5;
    }
    while ( v27 < v11 );
  }
  if ( dword_140404A6C[309078285] )
    sub_1400387E0();
  if ( dword_140404A6C[283831311] || !v5 )
  {
    v33 = dword_140404A6C[280649838];
    if ( dword_140404A6C[280649838] )
    {
      dword_140404A6C[280649840] = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v33 = 0;
    dword_140404A6C[280649838] = 0;
  }
  v34 = dword_140404A6C[280649840];
  if ( !dword_140404A6C[284024633] )
    v34 = 0;
  dword_140404A6C[280649840] = v34;
LABEL_39:
  dword_140404A6C[280649839] = v33;
  if ( !dword_140404A6C[283785909] && LOBYTE(dword_140404A6C[284024775]) && !LOBYTE(dword_140404A6C[284024647]) )
  {
    LOBYTE(dword_140404A6C[283785913]) = 0;
    dword_140404A6C[283785909] = 1;
  }
  if ( dword_140404A6C[19065870] )
  {
    if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[283831479] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024769]) )
    {
      v35 = dword_140404A6C[283831480];
      if ( !BYTE2(dword_140404A6C[284024641]) )
        v35 = 1;
      dword_140404A6C[283831480] = v35;
    }
    if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
      dword_140404A6C[283831481] ^= 1u;
    v36 = dword_140404A6C[284021982];
    if ( BYTE1(dword_140404A6C[284024778]) )
      v36 = -1;
    dword_140404A6C[284021982] = v36;
    if ( BYTE2(dword_140404A6C[284024772]) )
    {
      v37 = 1;
      dword_140404A6C[284021982] = -1;
      dword_140404A6C[19065878] = 1;
      v36 = -1;
    }
    else
    {
      v37 = dword_140404A6C[19065878];
    }
    v38 = BYTE1(dword_140404A6C[284024821]);
    if ( HIBYTE(dword_140404A6C[284024772]) )
    {
      v37 = 2;
      dword_140404A6C[19065878] = 2;
      if ( BYTE1(dword_140404A6C[284024821]) )
      {
        dword_140404A6C[284024395] = dword_140404A6C[284024388];
        dword_140404A6C[284024396] = dword_140404A6C[284024389];
        dword_140404A6C[284024397] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
        *(_QWORD *)&a3 = dword_140404A6C[284024393];
        v37 = dword_140404A6C[19065878];
        v36 = dword_140404A6C[284021982];
        v38 = BYTE1(dword_140404A6C[284024821]);
        v39 = 7LL * (int)dword_140404A6C[19065878];
        v40 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v39 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v39 + 284024381];
        v41 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v39 + 284024382] = v40 + *(float *)&dword_140404A6C[v39 + 284024382];
        *(float *)&dword_140404A6C[v39 + 284024383] = v41 + *(float *)&dword_140404A6C[v39 + 284024383];
        dword_140404A6C[v39 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v39 + 284024385] = dword_140404A6C[284024392];
      }
    }
    if ( LOBYTE(dword_140404A6C[284024773]) )
    {
      v37 = 3;
      dword_140404A6C[19065878] = 3;
      if ( v38 )
      {
        dword_140404A6C[284024402] = dword_140404A6C[284024388];
        dword_140404A6C[284024403] = dword_140404A6C[284024389];
        dword_140404A6C[284024404] = dword_140404A6C[284024390];
        v78 = xmmword_140278D30;
        v80 = 1.0;
        v79 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v78, (float *)&v78 + 3, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024391]));
        sub_14007B2A0((__int64)&v78, (float *)&v78, sr_export_float_lane_container((unsigned __int64)dword_140404A6C[284024392]));
        *(_QWORD *)&a3 = dword_140404A6C[284024393];
        v37 = dword_140404A6C[19065878];
        v36 = dword_140404A6C[284021982];
        v38 = BYTE1(dword_140404A6C[284024821]);
        v42 = 7LL * (int)dword_140404A6C[19065878];
        v43 = *((float *)&v79 + 3) * *(float *)&dword_140404A6C[284024393];
        *(float *)&dword_140404A6C[v42 + 284024381] = (float)(*((float *)&v79 + 2)
                                                            * *(float *)&dword_140404A6C[284024393])
                                                    + *(float *)&dword_140404A6C[v42 + 284024381];
        v44 = v80 * *(float *)&a3;
        *(float *)&dword_140404A6C[v42 + 284024382] = v43 + *(float *)&dword_140404A6C[v42 + 284024382];
        *(float *)&dword_140404A6C[v42 + 284024383] = v44 + *(float *)&dword_140404A6C[v42 + 284024383];
        dword_140404A6C[v42 + 284024384] = dword_140404A6C[284024391];
        dword_140404A6C[v42 + 284024385] = dword_140404A6C[284024392];
      }
    }
    v45 = dword_140404A6C[284024648];
    if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
    {
      v46 = v36;
      if ( v36 >= 0 )
      {
        LOBYTE(v47) = v36 + 1;
        if ( v38 )
          LOBYTE(v47) = v36 - 1;
      }
      else
      {
        LOBYTE(v47) = 0;
        v46 = -1;
      }
      v47 = (unsigned __int8)v47;
      v48 = v46;
      while ( 1 )
      {
        v16 = 28664LL * v47;
        if ( *(unsigned int *)((char *)&dword_140404A6C[280651303] + v16) )
        {
          if ( *(int *)((char *)&dword_140404A6C[280651318] + v16) > 0
            && *(unsigned int *)((char *)&dword_140404A6C[280658438] + v16) <= 2 )
          {
            break;
          }
        }
        v49 = 1;
        if ( v38 )
          v49 = -1;
        v47 = (unsigned __int8)(v47 + v49);
        if ( v47 == v48 )
          goto LABEL_82;
      }
      v36 = v47;
      dword_140404A6C[284021982] = v47;
    }
LABEL_82:
    if ( v37 == 1 )
    {
      sub_140105180(1, v16, a3);
    }
    else
    {
      sub_140105470(v37, v16, a3);
      if ( v36 != -1 )
        sub_14002EDF0(v37, (__int64)&dword_140404A6C[7166 * v36 + 280651335]);
    }
    v33 = dword_140404A6C[280649838];
  }
  else
  {
    v36 = dword_140404A6C[284021982];
    v38 = BYTE1(dword_140404A6C[284024821]);
    v45 = dword_140404A6C[284024648];
  }
  if ( (_DWORD)v4 != -1 && !dword_140404A6C[309078285] )
  {
    v77 = v4;
    v50 = 3597 * v4;
    v51 = dword_140404A6C[v50 + 71856345];
    if ( v51 >= 0 )
    {
      v52 = dword_140404A6C[v50 + 71856342];
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856367 + v50] = 0;
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856368 + v50] = v52;
      dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856369 + v50] = v51;
      *(_OWORD *)&dword_140404A6C[21 * (int)dword_140404A6C[v50 + 71856362] + 71856372 + v50] = *(_OWORD *)&dword_140404A6C[v50 + 71856346];
      v53 = dword_140404A6C[v50 + 71856362] + 1;
      dword_140404A6C[v50 + 71856345] = -1;
      dword_140404A6C[v50 + 71856362] = v53 & 0x3F;
      LOBYTE(dword_140404A6C[v50 + 71856346]) = 0;
      if ( dword_140404A6C[v50 + 71856342] - 14 <= 5 )
        dword_140404A6C[v50 + 71857986] = 0;
      dword_140404A6C[v50 + 71857986] = 0;
    }
    v54 = dword_140404A6C[283831312];
    v55 = dword_140404A6C[280648133];
    if ( dword_140404A6C[283831312] == 4 && dword_140404A6C[v50 + 71856266] )
    {
      if ( dword_140404A6C[v50 + 71856342] == 1
        && HIBYTE(dword_140404A6C[284024774])
        && !HIBYTE(dword_140404A6C[284024646]) )
      {
        v56 = dword_140404A6C[284021984] ^ 1;
        dword_140404A6C[284021984] ^= 1u;
      }
      else
      {
        v56 = dword_140404A6C[284021984];
      }
      if ( v56 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v36 = -1;
        dword_140404A6C[284021982] = v36;
        if ( LOBYTE(dword_140404A6C[284024776]) )
        {
          if ( !v45 )
          {
            if ( v36 >= 0 )
            {
              v57 = v36 + 1;
              if ( v38 )
                v57 = v36 - 1;
            }
            else
            {
              v57 = 0;
              LOBYTE(v36) = -1;
            }
            v58 = v57;
            while ( 1 )
            {
              v59 = 7166LL * v58;
              if ( dword_140404A6C[v59 + 280651303] )
              {
                if ( (int)dword_140404A6C[v59 + 280651318] > 0 )
                  break;
              }
              v60 = 1;
              if ( v38 )
                v60 = -1;
              v58 = (unsigned __int8)(v58 + v60);
              if ( v58 == (unsigned __int8)v36 )
                goto LABEL_140;
            }
            dword_140404A6C[284021982] = v58;
          }
        }
      }
    }
    else
    {
      dword_140404A6C[284021984] = 0;
      if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
        && !dword_140404A6C[284021983]
        && !dword_140404A6C[280648133] )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
          v36 = -1;
        if ( LOBYTE(dword_140404A6C[284024776]) && !v45 )
        {
          v61 = v36;
          if ( v36 >= 0 )
          {
            LOBYTE(v62) = v36 + 1;
            if ( v38 )
              LOBYTE(v62) = v36 - 1;
          }
          else
          {
            LOBYTE(v62) = 0;
            v61 = -1;
          }
          v62 = (unsigned __int8)v62;
          v63 = v61;
          while ( 1 )
          {
            v64 = 7166LL * v62;
            if ( dword_140404A6C[v64 + 280651303] )
            {
              if ( (int)dword_140404A6C[v64 + 280651318] > 0 && dword_140404A6C[v64 + 280658438] <= 2 )
                break;
            }
            v65 = 1;
            if ( v38 )
              v65 = -1;
            v62 = (unsigned __int8)(v62 + v65);
            if ( v62 == v63 )
              goto LABEL_137;
          }
          v36 = v62;
        }
LABEL_137:
        if ( dword_140404A6C[283831448] != 2 )
          v36 = -1;
        dword_140404A6C[284021982] = v36;
      }
    }
LABEL_140:
    v66 = dword_140404A6C[280649843];
    dword_140404A6C[280649844] = dword_140404A6C[280649843];
    *(_QWORD *)&dword_140404A6C[280649845] = 0;
    v67 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651037]);
    if ( !v67 )
      v66 = 0;
    dword_140404A6C[280649843] = v66;
    if ( !dword_140404A6C[280648133] )
    {
      dword_140404A6C[280649846] = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[280651039]) != 0;
      if ( !v67 || *((_BYTE *)&dword_140404A6C[284024637] + (int)dword_140404A6C[280651037]) )
      {
        if ( !(_DWORD)v66 )
          dword_140404A6C[280649845] = dword_140404A6C[284024634] != 0;
      }
      else
      {
        dword_140404A6C[280649843] = 1;
      }
    }
    v68 = (int)dword_140404A6C[v50 + 71856292];
    dword_140404A6C[v50 + 71856339] = 0;
    if ( (_DWORD)v68 != -1 )
    {
      v66 = 28664 * v68;
      if ( (int)dword_140404A6C[7166 * v68 + 280651318] > 0 )
      {
        v69 = *(int *)((char *)&dword_140404A6C[280651313] + v66);
        dword_140404A6C[v50 + 71856339] = 1;
        if ( (_DWORD)v69 != -1 )
        {
          if ( dword_140404A6C[24944 * dword_140404A6C[5210 * v69 + 129716710] + 346707719] == 1
            || *(unsigned int *)((char *)&dword_140404A6C[280651314] + v66) )
          {
            dword_140404A6C[v50 + 71856339] = 2;
          }
          else
          {
            dword_140404A6C[v50 + 71856339] = 3;
          }
        }
        goto LABEL_175;
      }
    }
    v70 = v77;
    v71 = 3597 * v77;
    *(_QWORD *)&dword_140404A6C[v71 + 71856293] = 0;
    *(_QWORD *)&dword_140404A6C[v71 + 71856295] = 0;
    dword_140404A6C[v50 + 71856325] = 0;
    *(_QWORD *)&dword_140404A6C[v50 + 71856331] = 0;
    if ( v54 == 3 || v54 - 5 <= 2 || v54 == 4 && dword_140404A6C[v50 + 71856266] )
    {
      if ( !v33 )
      {
        sub_140105180(1, v66, a3);
        goto LABEL_164;
      }
    }
    else if ( !v33 )
    {
LABEL_164:
      if ( !v55 )
      {
        if ( BYTE2(dword_140404A6C[284024772]) )
        {
          v3 = 64;
          dword_140404A6C[v50 + 71856325] = 64;
        }
        if ( HIBYTE(dword_140404A6C[284024772]) )
        {
          v3 |= 0x80u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( LOBYTE(dword_140404A6C[284024773]) )
        {
          v3 |= 0x100u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(dword_140404A6C[284024773]) )
        {
          v3 |= 0x200u;
          dword_140404A6C[v50 + 71856325] = v3;
        }
        if ( BYTE1(dword_140404A6C[284024770]) )
          dword_140404A6C[3597 * v70 + 71856325] = v3 | 0x1000;
      }
    }
LABEL_175:
    v72 = dword_140404A6C[v50 + 71856339];
    switch ( v72 )
    {
      case 1u:
        sub_1400A21B0(v75);
        break;
      case 2u:
        sub_1400A0EB0(v75);
        break;
      case 3u:
        sub_1400A1D20(v75);
        break;
    }
    dword_140404A6C[v50 + 71856340] = dword_140404A6C[v50 + 71856339];
  }
  return 0; /* the function has no caller */
}

#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81

// 14009F41D: conditional instruction was optimized away because rdx.8 is in (1..FF)
// 14009F1ED: variable 'v7' is possibly undefined
// 14009F1ED: variable 'v6' is possibly undefined
// 14009F1ED: variable 'v8' is possibly undefined
// 14009F874: variable 'v16' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144CBFAC4: using guessed type unsigned int;
// 18329B180: using guessed type unsigned int;
// 18329CC24: using guessed type unsigned int;
// 18329CC28: using guessed type unsigned int;
// 18329CC2C: using guessed type unsigned int;
// 18329CC38: using guessed type unsigned int;
// 18329CC3C: using guessed type unsigned int;
// 18329CC40: using guessed type unsigned int;
// 18329CC4C: using guessed type unsigned int;
// 183E93540: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFD4C: using guessed type unsigned int;
// 183EBFD5C: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DEC: using guessed type unsigned int;
// 183F7C37C: using guessed type unsigned int;
// 183F7C380: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C388: using guessed type unsigned int;
// 183F7C38C: using guessed type unsigned int;
// 183F7C398: using guessed type unsigned int;
// 183F7C39C: using guessed type unsigned int;
// 183F7C3A0: using guessed type unsigned int;
// 183F7C3B4: using guessed type unsigned int;
// 183F7C3B8: using guessed type unsigned int;
// 183F7C3BC: using guessed type unsigned int;
// 183F7C620: using guessed type unsigned int;
// 183F7C630: using guessed type unsigned int;
// 183F7C640: using guessed type unsigned int;
// 183F7C650: using guessed type unsigned int;
// 183F7C660: using guessed type unsigned int;
// 183F7C670: using guessed type unsigned int;
// 183F7C680: using guessed type unsigned int;
// 183F7C690: using guessed type unsigned int;
// 183F7C6A0: using guessed type unsigned int;
// 183F7C6B0: using guessed type unsigned int;
// 183F7C6B8: using guessed type unsigned int;
// 183F7C6C0: using guessed type unsigned int;
// 183F7C6C4: using guessed type unsigned int;
// 183F7C6D0: using guessed type unsigned int;
// 183F7C6E0: using guessed type unsigned int;
// 183F7C6F0: using guessed type unsigned int;
// 183F7C700: using guessed type unsigned int;
// 183F7C710: using guessed type unsigned int;
// 183F7C720: using guessed type unsigned int;
// 183F7C730: using guessed type unsigned int;
// 183F7C740: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;
// 183F7C758: using guessed type unsigned int;
// 183F7C78C: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (00000001400A1640) ----------------------------------------------------
void            sub_1400A1640(int a1, unsigned int a2)
{
  /* Clean implementation: src/engine/player_input.c (player_type_on_computer), checked against the
     original executable (tools/native-compare/t_playerinput.c). */
  extern void player_type_on_computer(int player, int computer);
  player_type_on_computer(a1, (int)a2);
}

// 1402B29D0: using guessed type int dword_1402B29D0[128];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A1AE0) ----------------------------------------------------
__int64            sub_1400A1AE0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  double v5; // xmm2_8
  float v6; // xmm9_4
  float v7; // xmm8_4
  double v8; // xmm2_8
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm10_4
  double v12; // xmm0_8
  float v13; // xmm2_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A1AE0[80];
#define v15 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 0)) /* [rsp+0h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 32)) /* [rsp+20h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1400A1AE0 + 48)) /* [rsp+30h] */
#define v18 (*(float (*))(void *)(sr_frame_1400A1AE0 + 64)) /* [rsp+40h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1400A1AE0 + 72)) /* [rsp+48h] */

  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856292];
  if ( (_DWORD)v2 != -1 )
  {
    v3 = 7166 * v2;
    if ( (int)dword_140404A6C[7166 * v2 + 280658139] > 0 )
    {
      v4 = (int)dword_140404A6C[v3 + 280658140];
      if ( (_DWORD)v4 != -1 )
      {
        *(_QWORD *)&v5 = dword_140404A6C[v1 + 71856293];
        v16 = xmmword_140278D30;
        v18 = 1.0;
        v17 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v16, (float *)&dword_1402F6188, v5);
        v6 = *(float *)&v16;
        v7 = *((float *)&v16 + 2);
        *(_QWORD *)&v8 = dword_140404A6C[v3 + 280651341];
        v16 = xmmword_140278D30;
        v18 = 1.0;
        v17 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v16, (float *)&dword_1402F6188, v8);
        v9 = (float)(*(float *)&dword_140404A6C[284024599] * 1.25) * 0.0009765625;
        v10 = (float)(*(float *)&dword_140404A6C[284024600] * 1.25) * 0.0009765625;
        v11 = sub_14023F704(
                *(float *)&dword_140404A6C[1760 * v4 + 278845936],
                *(float *)&dword_140404A6C[1760 * v4 + 278845934]);
        *(_QWORD *)&v12 = DWORD2(v16);
        *(float *)&v12 = sub_14023F704(
                           (float)((float)(*((float *)&v16 + 2) * v9) + v7) + (float)(v18 * v10),
                           (float)((float)(*(float *)&v16 * v9) + v6) + (float)(*((float *)&v17 + 2) * v10));
        v13 = SR_VEC_READ_LANES(128, sub_14000B5F0(v12, v11), f32)[0];
        if ( v13 >= -1.570796326795 )
        {
          if ( v13 > 1.570796326795 )
            v13 = 1.5707963705062866;
        }
        else
        {
          v13 = -1.5707963705062866;
        }
        *(float *)&dword_140404A6C[v1 + 71856293] = v11 + v13;
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A1D20) ----------------------------------------------------
__int64            sub_1400A1D20(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rbx
  bool v4; // zf
  int v5; // edx
  float v6; // xmm2_4
  unsigned int v7; // ecx
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  unsigned int v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4

  v1 = a1;
  result = 14388LL * a1;
  v3 = a1;
  if ( *(unsigned int *)((char *)&dword_140404A6C[71856340] + result) != 3 )
  {
    *(_QWORD *)((char *)&dword_140404A6C[71856296] + result) = 0;
    *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 0;
  }
  v4 = dword_140404A6C[280649838] == 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856330] + result) = 1;
  *(_QWORD *)((char *)&dword_140404A6C[71856293] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856295] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) = 0;
  if ( v4 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[71856292] + result);
    if ( v5 != -1 )
    {
      v6 = 0.0;
      v7 = dword_140404A6C[284024633];
      if ( !dword_140404A6C[284024634] || dword_140404A6C[284024633] )
      {
        if ( *(float *)&dword_140404A6C[421831839] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831839] <= 1.0 )
            v11 = 0.0;
          else
            v11 = *(float *)&dword_140404A6C[421831839] + -1.0;
        }
        else
        {
          v11 = *(float *)&dword_140404A6C[421831839] + 1.0;
        }
        if ( *(float *)&dword_140404A6C[421831840] >= -1.0 )
        {
          if ( *(float *)&dword_140404A6C[421831840] <= 1.0 )
            v12 = 0.0;
          else
            v12 = *(float *)&dword_140404A6C[421831840] + -1.0;
        }
        else
        {
          v12 = *(float *)&dword_140404A6C[421831840] + 1.0;
        }
        *(float *)&dword_140404A6C[421831839] = v11
                                              + (float)((float)(*(float *)&dword_140404A6C[284024599] * 0.125) * 0.5);
        *(float *)&v13 = v12 + (float)((float)(*(float *)&dword_140404A6C[284024600] * 0.125) * 0.5);
        v14 = *(float *)((char *)&dword_140404A6C[71856293] + result);
        *(float *)((char *)&dword_140404A6C[71856295] + result) = *(float *)&dword_140404A6C[421831839]
                                                                + *(float *)((char *)&dword_140404A6C[71856295] + result);
        dword_140404A6C[421831840] = v13;
        *(float *)((char *)&dword_140404A6C[71856293] + result) = v14 - *(float *)&v13;
        if ( !v7 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = *(float *)((char *)&dword_140404A6C[71856297]
                                                                             + result)
                                                                  * 0.875;
          *(float *)((char *)&dword_140404A6C[71856298] + result) = *(float *)((char *)&dword_140404A6C[71856298]
                                                                             + result)
                                                                  * 0.875;
        }
      }
      else
      {
        v8 = 1.0 - *(float *)((char *)&dword_140404A6C[71856332] + result);
        v9 = (float)((float)(*(float *)&dword_140404A6C[284024599] * v8) * 0.0015384615398943424)
           + *(float *)((char *)&dword_140404A6C[71856297] + result);
        v10 = (float)((float)(*(float *)&dword_140404A6C[284024600] * v8) * 0.0015384615398943424)
            + *(float *)((char *)&dword_140404A6C[71856298] + result);
        if ( v9 >= -2.74889357189125 )
        {
          *(float *)((char *)&dword_140404A6C[71856297] + result) = v9;
          if ( v9 > 2.74889357189125 )
            *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = 1076882911;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856297] + result) = -1070600737;
        }
        if ( v10 >= -1.570796326795 )
        {
          *(float *)((char *)&dword_140404A6C[71856298] + result) = v10;
          if ( v10 > 1.570796326795 )
            *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = 1070141403;
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[71856298] + result) = -1077342245;
        }
      }
      v15 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
          + *(float *)((char *)&dword_140404A6C[71856331] + result);
      if ( v15 >= 0.0 )
      {
        v6 = (float)((float)(int)dword_140404A6C[137297772] * 0.125)
           + *(float *)((char *)&dword_140404A6C[71856331] + result);
        if ( v15 > 0.875 )
          v6 = 0.875;
      }
      v4 = dword_140404A6C[280648133] == 0;
      v16 = *(float *)((char *)&dword_140404A6C[71856332] + result);
      *(float *)((char *)&dword_140404A6C[71856331] + result) = v6;
      *(float *)((char *)&dword_140404A6C[71856332] + result) = (float)((float)(v6 - v16) * 0.0625) + v16;
      if ( v4 )
      {
        if ( BYTE2(dword_140404A6C[284024771]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  + 0.03125;
        if ( BYTE2(dword_140404A6C[284024770]) )
          *(float *)((char *)&dword_140404A6C[71856296] + result) = *(float *)((char *)&dword_140404A6C[71856296]
                                                                             + result)
                                                                  - 0.03125;
        if ( LOBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  - 1.0;
        if ( HIBYTE(dword_140404A6C[284024766]) )
          *(float *)((char *)&dword_140404A6C[71856294] + result) = *(float *)((char *)&dword_140404A6C[71856294]
                                                                             + result)
                                                                  + 1.0;
        if ( LOBYTE(dword_140404A6C[284024776]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 4u;
        if ( LOBYTE(dword_140404A6C[284024821]) )
          *(unsigned int *)((char *)&dword_140404A6C[71856325] + result) |= 8u;
        if ( BYTE1(dword_140404A6C[284024821]) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x10u;
        if ( LOBYTE(dword_140404A6C[284024767]) )
          dword_140404A6C[3597 * v1 + 71856325] |= 0x800u;
      }
      sub_14009EA20(v1, v5);
      result = 3597 * v3;
      v17 = *(float *)&dword_140404A6C[3597 * v3 + 71856293];
      if ( v17 >= -1.0 )
      {
        if ( v17 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856293] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856293] = -1082130432;
      }
      v18 = *(float *)&dword_140404A6C[3597 * v3 + 71856294];
      if ( v18 >= -1.0 )
      {
        if ( v18 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856294] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856294] = -1082130432;
      }
      v19 = *(float *)&dword_140404A6C[3597 * v3 + 71856295];
      if ( v19 >= -1.0 )
      {
        if ( v19 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856295] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856295] = -1082130432;
      }
      v20 = *(float *)&dword_140404A6C[3597 * v3 + 71856296];
      if ( v20 >= -1.0 )
      {
        if ( v20 > 1.0 )
          dword_140404A6C[3597 * v3 + 71856296] = 1065353216;
      }
      else
      {
        dword_140404A6C[3597 * v3 + 71856296] = -1082130432;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7C750: using guessed type unsigned int;
// 1A4D2DCEC: using guessed type unsigned int;

//----- (00000001400A21B0) ----------------------------------------------------
void            sub_1400A21B0(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // eax
  signed int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm1_4
  int v12; // xmm0_4
  float v13; // xmm8_4
  unsigned int v14; // r12d
  float v15; // xmm9_4
  float v16; // xmm7_4
  unsigned int v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  unsigned int v23; // ebx
  unsigned int v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  unsigned int v27; // xmm10_4
  float v28; // xmm7_4
  float *v29; // rax
  float v30; // xmm0_4
  float v31; // xmm0_4
  unsigned int v32; // r15d
  unsigned int v33; // xmm6_4
  float v34; // xmm1_4
  unsigned int v35; // ecx
  float v36; // xmm8_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  unsigned int v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm7_4
  unsigned int v44; // xmm4_4
  float v45; // xmm4_4
  float v46; // xmm2_4
  unsigned int v47; // xmm0_4
  float v48; // xmm1_4
  double v49; // xmm0_8
  float v50; // xmm0_4
  float v51; // xmm4_4
  float v52; // xmm7_4
  float v53; // xmm4_4
  unsigned int v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm1_4
  __int64 v58; // rcx
  int v59; // [rsp+B0h] [rbp+8h]

  v2 = 3597LL * a1;
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856294] = 0;
  dword_140404A6C[v2 + 71856296] = 0;
  v4 = (int)dword_140404A6C[v2 + 71856292];
  dword_140404A6C[v2 + 71856325] = 0;
  v59 = v4;
  if ( (_DWORD)v4 != -1 )
  {
    v5 = v4;
    if ( dword_140404A6C[v2 + 71856340] != 1 )
    {
      dword_140404A6C[v2 + 71856293] = 0;
      dword_140404A6C[v2 + 71856298] = dword_140404A6C[7166 * v4 + 280651342];
      v6 = dword_140404A6C[7166 * v4 + 280651357];
      dword_140404A6C[v2 + 71856336] = 0;
      dword_140404A6C[v2 + 71856301] = v6;
    }
    if ( !dword_140404A6C[280649838] )
    {
      v7 = -1;
      v8 = 28664 * v5 + 40LL * (BYTE1(dword_140404A6C[284024821]) != 0);
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v8) > 0 )
        v7 = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v8);
      if ( dword_140404A6C[v2 + 71856341] != v7 )
      {
        v9 = 1760LL * v7;
        if ( dword_140404A6C[v9 + 278845898] == 28 )
          *(float *)&dword_140404A6C[v2 + 71856293] = sub_14023F704(
                                                        *(float *)&dword_140404A6C[v9 + 278845936],
                                                        *(float *)&dword_140404A6C[v9 + 278845934]);
      }
      dword_140404A6C[v2 + 71856341] = v7;
      if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 18 )
      {
        dword_140404A6C[v2 + 71856330] += dword_140404A6C[137297772];
        dword_140404A6C[137297772] = 0;
      }
      else
      {
        sub_1400A2C00(a1, v7);
      }
      v10 = dword_140404A6C[v2 + 71856330];
      if ( v10 < 0 )
      {
        dword_140404A6C[v2 + 71856330] = 0;
        dword_140404A6C[v2 + 71856331] = 0;
        goto LABEL_23;
      }
      if ( v10 <= 2 )
      {
        if ( !v10 )
        {
          dword_140404A6C[v2 + 71856331] = 0;
          goto LABEL_23;
        }
        if ( v10 == 1 )
        {
          dword_140404A6C[v2 + 71856331] = 1031798784;
          goto LABEL_23;
        }
      }
      else
      {
        dword_140404A6C[v2 + 71856330] = 2;
      }
      dword_140404A6C[v2 + 71856331] = 1056964608;
LABEL_23:
      v11 = *(float *)&dword_140404A6C[v2 + 71856331];
      *(float *)&v12 = -0.25;
      if ( v11 >= -0.25 )
      {
        *(float *)&v12 = 0.75;
        if ( v11 <= 0.75 )
          goto LABEL_28;
        dword_140404A6C[v2 + 71856331] = 1061158912;
      }
      else
      {
        dword_140404A6C[v2 + 71856331] = -1098907648;
      }
      v11 = *(float *)&v12;
LABEL_28:
      v13 = *(float *)&dword_140404A6C[284024599];
      v14 = dword_140404A6C[73991627];
      v15 = *(float *)&dword_140404A6C[284024600];
      v16 = *(float *)&dword_140404A6C[284024600];
      *(float *)&v17 = (float)((float)(v11 - *(float *)&dword_140404A6C[v2 + 71856332]) * 0.0625)
                     + *(float *)&dword_140404A6C[v2 + 71856332];
      dword_140404A6C[v2 + 71856332] = v17;
      v18 = v13 * (float)(1.0 - *(float *)&v17);
      v19 = v16 * (float)(1.0 - *(float *)&v17);
      v20 = v18 * 0.001953125;
      if ( v14 )
        v21 = v19 * -0.0009765625;
      else
        v21 = v19 * 0.0009765625;
      v22 = (float)(v20 * 0.5) + *(float *)&dword_140404A6C[v2 + 71856309];
      *(float *)&dword_140404A6C[v2 + 71856310] = (float)(v21 + *(float *)&dword_140404A6C[v2 + 71856310]) * 0.9375;
      *(float *)&dword_140404A6C[v2 + 71856309] = v22 * 0.9375;
      v23 = dword_140404A6C[280648133];
      if ( !dword_140404A6C[280648133] && dword_140404A6C[280649845] )
      {
        v24 = dword_140404A6C[7166 * v5 + 280651357];
        v25 = SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v24), *(float *)&dword_140404A6C[v2 + 71856301]), f32)[0];
        v26 = SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 71856297]), v25), f32)[0];
        *(float *)&v27 = v20 + *(float *)&dword_140404A6C[v2 + 71856299];
        v28 = v19 * 0.001953125;
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856297] = v26;
        dword_140404A6C[v2 + 71856301] = v24;
        dword_140404A6C[v2 + 71856299] = v27;
        v30 = *(float *)&dword_140404A6C[v2 + 71856300];
        if ( v14 )
          v31 = v30 - v28;
        else
          v31 = v30 + v28;
        v32 = dword_140404A6C[280649843];
        *v29 = v31;
        dword_140404A6C[v2 + 71856325] |= 2u;
LABEL_63:
        v44 = dword_140404A6C[v2 + 71856297];
        goto LABEL_64;
      }
      v32 = dword_140404A6C[280649843];
      if ( v7 == -1 || dword_140404A6C[1760 * v7 + 278845898] != 28 && !dword_140404A6C[280649843] )
      {
        v48 = *(float *)&dword_140404A6C[v2 + 71856301];
        *(_QWORD *)&v49 = dword_140404A6C[7166 * v5 + 280651357];
        dword_140404A6C[v2 + 71856301] = LODWORD(v49);
        v50 = SR_VEC_READ_LANES(128, sub_14000B5F0(v49, v48), f32)[0];
        v51 = *(float *)&dword_140404A6C[v2 + 71856298];
        v52 = v19 * 0.001953125;
        if ( v14 )
          v53 = v51 - v52;
        else
          v53 = v51 + v52;
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&v54 = (float)(*(float *)&dword_140404A6C[v2 + 71856299] * 0.125)
                       + (float)((float)(*(float *)&dword_140404A6C[v2 + 71856297] - v50) + v20);
        v55 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = *(float *)&dword_140404A6C[v2 + 71856299] * 0.875;
        dword_140404A6C[v2 + 71856297] = v54;
        *(float *)&dword_140404A6C[v2 + 71856300] = v55 * 0.875;
        *(float *)&dword_140404A6C[v2 + 71856298] = (float)(v55 * 0.125) + v53;
        *(_QWORD *)&dword_140404A6C[v2 + 71856364] = 0;
        dword_140404A6C[v2 + 71856366] = 0;
        goto LABEL_63;
      }
      if ( !dword_140404A6C[280649843] )
      {
        sub_1400A1AE0(a1);
        v32 = dword_140404A6C[280649843];
        v23 = dword_140404A6C[280648133];
        v29 = (float *)&dword_140404A6C[v2 + 71856300];
        v45 = *(float *)&dword_140404A6C[v2 + 71856299];
        v46 = *(float *)&dword_140404A6C[v2 + 71856300];
        *(float *)&dword_140404A6C[v2 + 71856299] = v45 * 0.875;
        *(float *)&v44 = (float)(v45 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856297];
        *(float *)&v47 = (float)(v46 * 0.125) + *(float *)&dword_140404A6C[v2 + 71856298];
        dword_140404A6C[v2 + 71856297] = v44;
        *(float *)&dword_140404A6C[v2 + 71856300] = v46 * 0.875;
        dword_140404A6C[v2 + 71856298] = v47;
        goto LABEL_64;
      }
      v33 = dword_140404A6C[7166 * v5 + 280651357];
      v34 = *(float *)&dword_140404A6C[v2 + 71856297]
          - SR_VEC_READ_LANES(128, sub_14000B5F0(COERCE_DOUBLE((unsigned __int64)v33), *(float *)&dword_140404A6C[v2 + 71856301]), f32)[0];
      dword_140404A6C[v2 + 71856301] = v33;
      if ( v34 < -3.14159265359 )
        v34 = v34 + 6.28318530718;
      if ( v34 > 3.14159265359 )
        v34 = v34 - 6.28318530718;
      v35 = dword_140404A6C[284024633];
      v36 = (float)(v18 * 0.00048828125) + v34;
      *(float *)&dword_140404A6C[v2 + 71856297] = v36;
      if ( !v35 )
        *(float *)&dword_140404A6C[v2 + 71856364] = (float)(*(float *)&dword_140404A6C[73991630] * v15)
                                                  + *(float *)&dword_140404A6C[v2 + 71856364];
      v37 = *(float *)&dword_140404A6C[v2 + 71856364];
      if ( v37 >= -1.570796326795 )
      {
        if ( v37 > 1.570796326795 )
        {
          v37 = 1.5707963705062866;
          dword_140404A6C[v2 + 71856364] = 1070141403;
        }
      }
      else
      {
        v37 = -1.5707963705062866;
        dword_140404A6C[v2 + 71856364] = -1077342245;
      }
      v38 = *(float *)&dword_140404A6C[v2 + 71856365];
      v39 = 0.03125;
      v40 = fmaxf((float)(v37 - v38) * 0.125, -0.03125);
      if ( v40 <= 0.03125 )
        v39 = v40;
      v29 = (float *)&dword_140404A6C[v2 + 71856300];
      *(float *)&v41 = (float)(v39 - (float)(*(float *)&dword_140404A6C[v2 + 71856366] * 0.25))
                     + *(float *)&dword_140404A6C[v2 + 71856366];
      dword_140404A6C[v2 + 71856366] = v41;
      *(float *)&dword_140404A6C[v2 + 71856365] = *(float *)&v41 + v38;
      *(float *)&dword_140404A6C[v2 + 71856300] = v37 * 0.125;
      if ( v35 )
      {
        v42 = *(float *)&dword_140404A6C[v2 + 71856298];
        v43 = v19 * 0.0009765625;
        if ( !v14 )
        {
          *(float *)&v44 = v36;
          *(float *)&dword_140404A6C[v2 + 71856298] = v42 + v43;
LABEL_64:
          if ( *(float *)&v44 >= -2.74889357189125 )
          {
            if ( *(float *)&v44 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856297] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856297] = -1070600737;
          }
          v56 = *(float *)&dword_140404A6C[v2 + 71856298];
          if ( v56 >= -1.570796326795 )
          {
            if ( v56 > 1.570796326795 )
              dword_140404A6C[v2 + 71856298] = 1070141403;
          }
          else
          {
            dword_140404A6C[v2 + 71856298] = -1077342245;
          }
          v57 = *(float *)&dword_140404A6C[v2 + 71856299];
          if ( v57 >= -2.74889357189125 )
          {
            if ( v57 > 2.74889357189125 )
              dword_140404A6C[v2 + 71856299] = 1076882911;
          }
          else
          {
            dword_140404A6C[v2 + 71856299] = -1070600737;
          }
          if ( *v29 >= -1.570796326795 )
          {
            if ( *v29 > 1.570796326795 )
              *v29 = 1.5707963705062866;
          }
          else
          {
            *v29 = -1.5707963705062866;
          }
          if ( !v23 )
          {
            if ( BYTE2(dword_140404A6C[284024771]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] + 1.0;
            if ( BYTE2(dword_140404A6C[284024770]) )
              *(float *)&dword_140404A6C[v2 + 71856296] = *(float *)&dword_140404A6C[v2 + 71856296] - 1.0;
            if ( LOBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] - 1.0;
            if ( HIBYTE(dword_140404A6C[284024766]) )
              *(float *)&dword_140404A6C[v2 + 71856294] = *(float *)&dword_140404A6C[v2 + 71856294] + 1.0;
            if ( LOBYTE(dword_140404A6C[284024776]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 4u;
            if ( v32 )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( dword_140404A6C[284024356] && dword_140404A6C[285101134] )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x20u;
            if ( BYTE1(dword_140404A6C[284024770]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x1000u;
            if ( LOBYTE(dword_140404A6C[284024784]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x40000u;
            if ( BYTE1(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x10u;
            if ( LOBYTE(dword_140404A6C[284024821]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 8u;
            if ( BYTE1(dword_140404A6C[284024772]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x80000u;
            if ( v7 != -1 )
            {
              v58 = 1760LL * v7;
              if ( ((dword_140404A6C[v58 + 278845898] - 25) & 0xFFFFFFF7) == 0 && dword_140404A6C[v58 + 278846052] == 1 )
                sub_1400A2DC0(a1, v7);
            }
            if ( LOBYTE(dword_140404A6C[284024767]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x800u;
            if ( BYTE1(dword_140404A6C[284024767]) )
              dword_140404A6C[3597 * v3 + 71856325] |= 0x2000u;
          }
          sub_14009EA20(a1, v59);
          return;
        }
        *(float *)&dword_140404A6C[v2 + 71856298] = v42 - v43;
      }
      *(float *)&v44 = v36;
      goto LABEL_64;
    }
  }
}

// 1400A2386: conditional instruction was optimized away because eax.4==2
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E46198: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;
// 18329B180: using guessed type unsigned int;
// 18329CC38: using guessed type unsigned int;
// 183F7C6C8: using guessed type unsigned int;
// 183F7C6CC: using guessed type unsigned int;
// 183F7C750: using guessed type unsigned int;

//----- (00000001400A2DC0) ----------------------------------------------------
__int64            sub_1400A2DC0(int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( !BYTE2(dword_140404A6C[284024789]) && BYTE2(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024787]) && BYTE1(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024787]) && BYTE2(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024787]) && HIBYTE(dword_140404A6C[284024659]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024788]) && LOBYTE(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024788]) && BYTE1(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024788]) && BYTE2(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024788]) && HIBYTE(dword_140404A6C[284024660]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024789]) && LOBYTE(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024789]) && BYTE1(dword_140404A6C[284024661]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024774]) && HIBYTE(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 0;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024772]) && BYTE2(dword_140404A6C[284024644]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 1;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024772]) && HIBYTE(dword_140404A6C[284024644]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024773]) && LOBYTE(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 3;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024773]) && BYTE1(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 4;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024773]) && BYTE2(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 5;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !HIBYTE(dword_140404A6C[284024773]) && HIBYTE(dword_140404A6C[284024645]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 6;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !LOBYTE(dword_140404A6C[284024774]) && LOBYTE(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 7;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE1(dword_140404A6C[284024774]) && BYTE1(dword_140404A6C[284024646]) )
  {
    dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
    dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
    dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 8;
    result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
    dword_140404A6C[3597 * a1 + 71856362] = result;
  }
  if ( !BYTE2(dword_140404A6C[284024774]) )
  {
    if ( BYTE2(dword_140404A6C[284024646]) )
    {
      dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
      dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = a2;
      dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 9;
      result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
      dword_140404A6C[3597 * a1 + 71856362] = result;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400A3770) ----------------------------------------------------
void            sub_1400A3770(int a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // r10d
  __int64 v6; // rdx
  char v7; // al
  unsigned __int8 v8; // cl
  int v9; // r8d
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  int v12; // r11d
  __int64 v13; // rcx
  char v14; // al

  if ( dword_140404A6C[283831312] == 4 && (v1 = 3597LL * a1, dword_140404A6C[v1 + 71856266]) )
  {
    if ( dword_140404A6C[v1 + 71856342] == 1
      && HIBYTE(dword_140404A6C[284024774])
      && !HIBYTE(dword_140404A6C[284024646]) )
    {
      v2 = dword_140404A6C[284021984] ^ 1;
      dword_140404A6C[284021984] ^= 1u;
    }
    else
    {
      v2 = dword_140404A6C[284021984];
    }
    if ( v2 )
    {
      v3 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v3 = -1;
      dword_140404A6C[284021982] = v3;
      if ( LOBYTE(dword_140404A6C[284024776]) )
      {
        if ( !LOBYTE(dword_140404A6C[284024648]) )
        {
          if ( v3 >= 0 )
          {
            LOBYTE(v4) = v3 + 1;
            if ( BYTE1(dword_140404A6C[284024821]) )
              LOBYTE(v4) = v3 - 1;
          }
          else
          {
            LOBYTE(v4) = 0;
            LOBYTE(v3) = -1;
          }
          v4 = (unsigned __int8)v4;
          v5 = (unsigned __int8)v3;
          while ( 1 )
          {
            v6 = 7166LL * v4;
            if ( dword_140404A6C[v6 + 280651303] )
            {
              if ( (int)dword_140404A6C[v6 + 280651318] > 0 )
                break;
            }
            v7 = 1;
            if ( BYTE1(dword_140404A6C[284024821]) )
              v7 = -1;
            v4 = (unsigned __int8)(v4 + v7);
            if ( v4 == v5 )
              return;
          }
          dword_140404A6C[284021982] = v4;
        }
      }
    }
  }
  else
  {
    v8 = 0;
    dword_140404A6C[284021984] = 0;
    if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
      && !dword_140404A6C[284021983]
      && !dword_140404A6C[280648133] )
    {
      v9 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v9 = -1;
      if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
      {
        v10 = v9;
        if ( v9 >= 0 )
        {
          v8 = v9 + 1;
          if ( BYTE1(dword_140404A6C[284024821]) )
            v8 = v9 - 1;
        }
        else
        {
          v10 = -1;
        }
        v11 = v8;
        v12 = v10;
        while ( 1 )
        {
          v13 = 7166LL * v11;
          if ( dword_140404A6C[v13 + 280651303] )
          {
            if ( (int)dword_140404A6C[v13 + 280651318] > 0 && dword_140404A6C[v13 + 280658438] <= 2 )
              break;
          }
          v14 = 1;
          if ( BYTE1(dword_140404A6C[284024821]) )
            v14 = -1;
          v11 = (unsigned __int8)(v11 + v14);
          if ( v11 == v12 )
            goto LABEL_46;
        }
        v9 = v11;
      }
LABEL_46:
      if ( dword_140404A6C[283831448] != 2 )
        v9 = -1;
      dword_140404A6C[284021982] = v9;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DEC: using guessed type unsigned int;

//----- (00000001400EF980) ----------------------------------------------------
__int64            sub_1400EF980(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // r9d
  signed int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdi
  signed int v9; // ecx
  float v10; // xmm1_4
  signed int v11; // esi
  int i; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400EF980[64];
#define v13 (*(float (*)[4])(void *)(sr_frame_1400EF980 + 0)) /* [rsp+20h] */
#define v14 (*(_OWORD (*)[2])(void *)(sr_frame_1400EF980 + 16)) /* [rsp+30h] */
#define v15 (*(int (*))(void *)(sr_frame_1400EF980 + 48)) /* [rsp+50h] */

  result = a1;
  v3 = 3597LL * a1;
  v4 = a2;
  v5 = dword_140404A6C[v3 + 71856279];
  if ( v5 < 10 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v8 = (int)dword_140404A6C[v3 + 71856292];
    result = 3 * (v4 + v7);
    v9 = dword_140404A6C[3 * v4 + 225654127 + 3 * v7];
    if ( v6 >= v9 )
    {
      result = (unsigned int)(v5 + 1);
      dword_140404A6C[v3 + 71856272] = v6 - v9;
      dword_140404A6C[v3 + 71856279] = result;
      if ( (_DWORD)v4 == 1 && (_DWORD)v8 != -1 )
      {
        v10 = *(float *)&dword_140404A6C[7166 * v8 + 280651336];
        LODWORD(v13[0]) = dword_140404A6C[7166 * v8 + 280651335];
        LODWORD(v13[2]) = dword_140404A6C[7166 * v8 + 280651337];
        v13[1] = v10;
        v15 = 1065353216;
        v14[0] = xmmword_140278D30;
        v14[1] = xmmword_140278D30;
        v11 = sr_CreateItem(30, v13, nullptr, (float *)v14);
        for ( i = 0; i < 7; ++i )
        {
          result = sub_1400E35D0(v11, -1, v8, i);
          if ( (_DWORD)result )
            break;
        }
      }
    }
  }
  return result;
}
#undef v13
#undef v14
#undef v15

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400EFD20) ----------------------------------------------------
__int64            sub_1400EFD20(int a1, int a2)
{
  /* Clean implementation: src/engine/car_shop.c, checked against the original executable
     (tools/native-compare/t_carshop.c). No caller uses the result. */
  extern void player_buy_car(int player, int choice);
  player_buy_car(a1, a2);
  return 0;
}

// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F04F0) ----------------------------------------------------
void            sub_1400F04F0(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  signed int v5; // r15d
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdx
  float v9; // xmm1_4
  signed int v10; // ebp
  int i; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400F04F0[64];
#define v12 (*(float (*)[4])(void *)(sr_frame_1400F04F0 + 0)) /* [rsp+20h] */
#define v13 (*(_OWORD (*)[2])(void *)(sr_frame_1400F04F0 + 16)) /* [rsp+30h] */
#define v14 (*(int (*))(void *)(sr_frame_1400F04F0 + 48)) /* [rsp+50h] */

  v3 = 3597LL * a1;
  if ( (int)dword_140404A6C[v3 + 71856279] < 20 )
  {
    v4 = a2 + 4673LL * (int)dword_140404A6C[v3 + 71856343];
    v5 = dword_140404A6C[3 * v4 + 225654127];
    v6 = dword_140404A6C[3 * v4 + 225654126];
    if ( (int)dword_140404A6C[v3 + 71856272] >= v5 )
    {
      v7 = dword_140404A6C[v3 + 71856292];
      v8 = 7166LL * v7;
      v9 = *(float *)&dword_140404A6C[v8 + 280651336];
      LODWORD(v12[0]) = dword_140404A6C[v8 + 280651335];
      LODWORD(v12[2]) = dword_140404A6C[v8 + 280651337];
      v12[1] = v9;
      v14 = 1065353216;
      v13[0] = xmmword_140278D30;
      v13[1] = xmmword_140278D30;
      v10 = sr_CreateItem(v6, v12, nullptr, (float *)v13);
      for ( i = 2; i < 7; ++i )
      {
        if ( (unsigned int)sub_1400E35D0(v10, -1, v7, i) )
          break;
      }
      dword_140404A6C[v3 + 71856272] -= v5;
      ++dword_140404A6C[v3 + 71856279];
      sub_140051DC0(a1);
    }
  }
}
#undef v12
#undef v13
#undef v14

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F4BC0) ----------------------------------------------------
void            sub_1400F4BC0(int a1, int a2)
{
  __int64 v3; // r9
  __int64 v5; // r11
  signed int v6; // r10d
  signed int v7; // edi
  int v8; // edx
  unsigned int v9; // edx

  v3 = 3597LL * a1;
  v5 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v5 != -1 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = dword_140404A6C[14019 * dword_140404A6C[v3 + 71856343] + 225654127 + 3 * a2];
    if ( v6 >= v7 )
    {
      if ( (unsigned int)(a2 - 1) <= 2 )
      {
        v8 = a2 == 1 ? 3 : (a2 == 2) + 7;
        if ( dword_140404A6C[v3 + 71859822] != v8 )
        {
          ++dword_140404A6C[v5 + 282485789];
          v6 -= v7;
          dword_140404A6C[v3 + 71859822] = v8;
          dword_140404A6C[v3 + 71856272] = v6;
          dword_140404A6C[7166 * v5 + 280658446] = v8;
        }
      }
      if ( (unsigned int)(a2 - 4) <= 1 )
      {
        if ( a2 == 4 )
          v9 = 1;
        else
          v9 = 2;
        if ( dword_140404A6C[v3 + 71859826] != v9 )
        {
          ++dword_140404A6C[v5 + 282485789];
          dword_140404A6C[v3 + 71859826] = v9;
          dword_140404A6C[v3 + 71856272] = v6 - v7;
          dword_140404A6C[7166 * v5 + 280658449] = v9;
        }
      }
      sub_140051DC0(a1);
      if ( dword_140404A6C[283831312] == 3 )
        sub_140051F50(a1);
    }
  }
}

// 1400F4C9B: conditional instruction was optimized away because r8d.4==5
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400F6030) ----------------------------------------------------
void sub_1400F6030()
{
  __int64 v0; // rbp
  unsigned int *v1; // r10
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // r9d
  unsigned int v6; // r8d
  int v7; // edx
  float *v8; // r11
  __int64 v9; // rbx
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4

  v0 = dword_140404A6C[284021989];
  v1 = &dword_140404A6C[71856292];
  v2 = 1;
  v3 = 256;
  do
  {
    if ( *(v1 - 39) )
    {
      v4 = (int)*v1;
      if ( (_DWORD)v4 != -1 )
      {
        v5 = *(v1 - 10);
        if ( v5 < (int)v0 && (int)v0 > 0 )
        {
          v6 = *(v1 - 9);
          v7 = 1;
          v8 = (float *)&dword_140404A6C[284021992];
          v9 = v0;
          do
          {
            if ( (v6 & v7) == 0 )
            {
              v10 = *(v8 - 1) - *(float *)&dword_140404A6C[7166 * v4 + 280651336];
              v11 = *(v8 - 2) - *(float *)&dword_140404A6C[7166 * v4 + 280651335];
              v12 = *v8 - *(float *)&dword_140404A6C[7166 * v4 + 280651337];
              if ( (float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)) >= 16.0 )
              {
                v2 = 0;
              }
              else
              {
                v6 |= v7;
                *(v1 - 10) = ++v5;
              }
            }
            v7 = __ROL4__(v7, 1);
            v8 += 3;
            --v9;
          }
          while ( v9 );
          *(v1 - 9) = v6;
        }
      }
    }
    v1 += 3597;
    --v3;
  }
  while ( v3 );
  if ( !v2 )
    ++dword_140404A6C[283831450];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCD4: using guessed type unsigned int;

//----- (00000001401164B0) ----------------------------------------------------
__int64            sub_1401164B0(int a1, int a2)
{
  /* Clean implementation: src/engine/player_chat.c, checked against the original executable
     (tools/native-compare/t_chat.c). No caller uses the result. */
  extern void player_say(int player, int action);
  player_say(a1, a2);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401166B0) ----------------------------------------------------
#ifndef SR_FRAME_TYPES
#define SR_FRAME_TYPES
typedef __m128 sr_frame_m128 __attribute__((aligned(4)));
typedef __m128i sr_frame_m128i __attribute__((aligned(4)));
typedef __m128d sr_frame_m128d __attribute__((aligned(4)));
typedef __int128 sr_frame_i128 __attribute__((aligned(4)));
typedef unsigned __int128 sr_frame_u128 __attribute__((aligned(4)));
#endif
__int64            sub_1401166B0(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  double v7; // xmm9_8
  float v8; // xmm8_4
  float v9; // xmm9_4
  signed int v10; // eax
  __int64 v11; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401166B0[112];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401166B0 + 0)) /* [rsp+8h] */
#define v14 (*(float (*))(void *)(sr_frame_1401166B0 + 32)) /* [rsp+28h] */
#define v15 (*(float (*))(void *)(sr_frame_1401166B0 + 36)) /* [rsp+2Ch] */
#define v16 (*(float (*))(void *)(sr_frame_1401166B0 + 40)) /* [rsp+30h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_1401166B0 + 48)) /* [rsp+38h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_1401166B0 + 64)) /* [rsp+48h] */
#define v19 (*(float (*))(void *)(sr_frame_1401166B0 + 80)) /* [rsp+58h] */
#define v20 (*(sr_frame_i128 (*))(void *)(sr_frame_1401166B0 + 88)) /* [rsp+60h] */

  v2 = 3597LL * a1;
  if ( (int)dword_140404A6C[v2 + 71856276] < (int)dword_140404A6C[284022493] )
  {
    v3 = (int)dword_140404A6C[v2 + 71856286];
    if ( (unsigned int)v3 > 5 )
    {
      v8 = *(float *)&dword_140404A6C[179992855];
      v9 = *(float *)&dword_140404A6C[179992857];
      v15 = *(float *)&dword_140404A6C[179992856];
      v14 = v8
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992858] - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      v16 = v9
          + (float)((float)((float)(*(float *)&dword_140404A6C[179992860] - 2.0) * (float)(unsigned __int8)rand())
                  * 0.001953125);
      *(_QWORD *)&v7 = 3217625051LL;
    }
    else
    {
      v17 = xmmword_140278D30;
      v18 = xmmword_140278D30;
      v19 = 1.0;
      v4 = *(float *)&dword_140404A6C[5873 * v3 + 283831498];
      v5 = *(float *)&dword_140404A6C[5873 * v3 + 283831499];
      v6 = *(float *)&dword_140404A6C[5873 * v3 + 283831500];
      v7 = *(float *)&dword_140404A6C[5873 * v3 + 283831497] + 1.570796326795;
      sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v7))) /* the original converts to float (cvtsd2ss) before this call */);
      v14 = (float)(v4 - (float)(*((float *)&v18 + 2) * 4.0)) + (float)(*(float *)&v17 * 18.0);
      v15 = (float)((float)(v5 - 0.5) - (float)(*((float *)&v18 + 3) * 4.0)) + (float)(*((float *)&v17 + 1) * 18.0);
      v16 = (float)(v6 - (float)(v19 * 4.0)) + (float)(*((float *)&v17 + 2) * 18.0);
    }
    v19 = 1.0;
    v17 = xmmword_140278D30;
    v18 = xmmword_140278D30;
    sub_14007B2A0((__int64)&v17, (float *)&v17 + 3, sr_export_float_lane_container(sr_text_float_bits((float)(v7))) /* the original converts to float (cvtsd2ss) before this call */);
    v10 = sub_140053840(&v14, (float *)&v17, a1);
    dword_140404A6C[v2 + 71856292] = v10;
    if ( v10 != -1 )
    {
      v11 = 7166LL * v10;
      dword_140404A6C[v11 + 280651306] = dword_140404A6C[v2 + 71856268];
      dword_140404A6C[v11 + 280651341] = LODWORD(v7);
      sub_140051DC0(a1);
      sub_140051F50(a1);
      dword_140404A6C[v2 + 71856342] = 0;
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B2A2EC8: using guessed type unsigned int;
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;

//----- (0000000140116A40) ----------------------------------------------------
__int64            sub_140116A40(int a1,      __m128i *a2)
{
  /* Clean implementation: src/engine/player_input.c, checked against the original executable
     (tools/native-compare/t_playerinput.c). */
  extern int player_queue_chat(int player, const char *text);
  return player_queue_chat(a1, (const char *)a2);
}

//----- (0000000140116B00) ----------------------------------------------------
__int64            sub_140116B00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  /* Clean implementation: src/engine/player_input.c, checked against the original executable
     (tools/native-compare/t_playerinput.c). */
  extern int player_queue_inventory_action(int player, int what, int hand, int argument);
  return player_queue_inventory_action(a1, (int)a2, (int)a3, (int)a4);
}

//----- (0000000140116CA0) ----------------------------------------------------
unsigned int *           sub_140116CA0(int a1)
{
  unsigned int *result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r10
  unsigned int *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  result = (unsigned int *)a1;
  v2 = 3597LL * a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  if ( (_DWORD)v3 != -1 )
  {
    sub_14011AF80(a1, dword_140404A6C[v2 + 71856288]);
    result = &dword_140404A6C[280658140];
    v4 = 7;
    v5 = &dword_140404A6C[7166 * v3 + 280658140];
    do
    {
      v6 = (int)*(v5 - 1);
      if ( v6 > 0 )
      {
        result = v5;
        do
        {
          v7 = (int)*result;
          if ( dword_140404A6C[1760 * v7 + 278845898] == 27 )
          {
            v8 = (int)dword_140404A6C[1760 * v7 + 278846053];
            if ( (unsigned int)v8 <= 0x1FF )
            {
              v9 = 5210 * v8;
              if ( dword_140404A6C[5210 * v8 + 129716709] )
              {
                if ( (int)dword_140404A6C[v9 + 129716712] > 0 )
                  dword_140404A6C[v2 + 71856272] += dword_140404A6C[24944 * dword_140404A6C[v9 + 129716710] + 346707730];
              }
            }
          }
          ++result;
          --v6;
        }
        while ( v6 );
      }
      v5 += 10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140117020) ----------------------------------------------------
__int64            sub_140117020(int a1)
{
  /* Clean implementation: src/engine/player_inventory.c, checked against the original executable
     (tools/native-compare/t_inventory.c). No caller uses the result. */
  extern void player_restore_inventory(int player);
  player_restore_inventory(a1);
  return 0;
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140117820) ----------------------------------------------------
void            sub_140117820(unsigned int a1)
{
  /* Clean implementation: src/engine/player_inventory.c (player_toggle_mute). */
  extern void player_toggle_mute(unsigned int player);
  player_toggle_mute(a1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7B2F4: using guessed type unsigned int;

//----- (00000001401189F0) ----------------------------------------------------
__int64            sub_1401189F0(int a1, int a2)
{
  /* Clean implementation: src/engine/stocks.c, checked against the original executable
     (tools/native-compare/t_stocks.c). No caller uses the result. */
  extern void stocks_buy(int player, int count);
  stocks_buy(a1, a2);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011AF80) ----------------------------------------------------
__int64            sub_14011AF80(int a1, int a2)
{
  /* Clean implementation: src/engine/stocks.c, checked against the original executable
     (tools/native-compare/t_stocks.c). No caller uses the result. */
  extern void stocks_sell(int player, int count);
  stocks_sell(a1, a2);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011B7F0) ----------------------------------------------------
__int64            sub_14011B7F0(int a1, int a2)
{
  /* Clean implementation: src/engine/player_team.c, checked against the original executable
     (tools/native-compare/t_playerteam.c). */
  extern void player_take_team_damage(int player, int damage);
  player_take_team_damage(a1, a2);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFAAC: using guessed type unsigned int;

//----- (0000000140138430) ----------------------------------------------------
__int64            sub_140138430(int a1, int a2)
{
  /* Clean implementation: src/engine/player_team.c, checked against the original executable
     (tools/native-compare/t_playerteam.c). No caller uses the result. */
  extern void player_set_team(int player, int team);
  player_set_team(a1, a2);
  return 0;
}

// 1402B2980: using guessed type int dword_1402B2980[8];
// 1402B29A0: using guessed type int dword_1402B29A0[8];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140194C10) ----------------------------------------------------
__int64            sub_140194C10(int a1)
{
  /* Clean implementation: src/engine/stocks.c, checked against the original executable
     (tools/native-compare/t_stocks.c). No caller uses the result. */
  extern void corporation_share_team_money(int team);
  corporation_share_team_money(a1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

