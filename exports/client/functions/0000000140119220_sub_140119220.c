/* Address: 0x140119220 | Name: sub_140119220 | Size: 3404 bytes */
__int64 __fastcall sub_140119220(int a1)
{
  unsigned int v1; // xmm2_4
  unsigned int v2; // xmm3_4
  signed int v3; // edi
  __int64 v4; // rbx
  signed int v5; // ecx
  unsigned int v6; // xmm1_4
  unsigned int v7; // xmm8_4
  float v8; // xmm6_4
  unsigned int v9; // eax
  signed int v10; // r14d
  unsigned int *v11; // r15
  unsigned int *v12; // rcx
  _BYTE *v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  int v16; // r8d
  int *v17; // r14
  unsigned int *v18; // rcx
  _BYTE *v19; // rdx
  char v20; // al
  unsigned int v21; // eax
  __int64 v23; // [rsp+8h] [rbp-100h] BYREF
  char v24[512]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v25[512]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v26; // [rsp+438h] [rbp+330h]

  v1 = 1082130432;
  v2 = 1115684864;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1115684864;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    v2 = dword_140404A6C[70087068];
    v1 = dword_140404A6C[70087067];
  }
  v3 = 0;
  v4 = 3597LL * a1;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087084] = v1;
  dword_140404A6C[70087085] = v2;
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087083] = 0;
  ui_select_value_candidate((__int64)"Weapons", (int *)&dword_140404A6C[v4 + 71856345], 128);
  ui_select_value_candidate((__int64)"Ammo", (int *)&dword_140404A6C[v4 + 71856345], 129);
  ui_select_value_candidate((__int64)"Equipment", (int *)&dword_140404A6C[v4 + 71856345], 130);
  if ( dword_140404A6C[283831312] != 7 )
  {
    ui_select_value_candidate((__int64)"Vehicles", (int *)&dword_140404A6C[v4 + 71856345], 131);
    ui_select_value_candidate((__int64)"Stocks", (int *)&dword_140404A6C[v4 + 71856345], 132);
  }
  if ( dword_140404A6C[v4 + 71856289] )
    ui_select_value_candidate((__int64)"Manager", (int *)&dword_140404A6C[v4 + 71856345], 133);
  if ( !dword_140404A6C[70087083] )
  {
    dword_140404A6C[70087067] = dword_140404A6C[70087084];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087086] + *(float *)&dword_140404A6C[70087085];
    if ( dword_140404A6C[70326263] )
    {
      ++dword_140404A6C[70326521];
      dword_140404A6C[70326520] = 0;
    }
  }
  v5 = dword_140404A6C[70317962];
  dword_140404A6C[70087083] = 1;
  if ( (int)dword_140404A6C[70317962] <= 0 )
  {
    v6 = dword_140404A6C[70087069];
  }
  else
  {
    v5 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v5;
    v6 = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087069] = v6;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
  }
  v7 = 1107296256;
  v8 = 128.0;
  dword_140404A6C[70087067] = 1107296256;
  dword_140404A6C[70087068] = 1124073472;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = v6;
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  v9 = dword_140404A6C[v4 + 71856342];
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  if ( v9 == 14 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278535234]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"9mm", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278530162]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"MP5", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278522554]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"AK-47", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278525090]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"M-16", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278532698]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"Uzi", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 15 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278536502]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"9mm Magazine", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278531430]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"MP5 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 1);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278523822]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"AK-47 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 2);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278526358]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"M-16 Magazine", (int *)&dword_140404A6C[v4 + 71856345], 3);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278533966]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"Uzi Magazine", (int *)&dword_140404A6C[v4 + 71856345], 4);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 16 )
  {
    sub_140158AB0(v24, "$%d", dword_140404A6C[278539038]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"Bandage", (int *)&dword_140404A6C[v4 + 71856345], 0);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278540306]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"Briefcase", (int *)&dword_140404A6C[v4 + 71856345], 7);
    sub_140158AB0(v24, "$%d", dword_140404A6C[278537770]);
    sub_1400764B0(
      v24,
      (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
      (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
      12.0,
      10);
    ui_select_value_candidate((__int64)"Grenade", (int *)&dword_140404A6C[v4 + 71856345], 6);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 == 17 )
  {
    v10 = 0;
    if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
    {
      v11 = &dword_140404A6C[v4 + 71858004];
      do
      {
        if ( v10 == 4 )
        {
          v7 = 1140850688;
          v8 = 128.0;
        }
        dword_140404A6C[70087067] = v7;
        *(float *)&dword_140404A6C[70087068] = v8;
        v12 = &dword_140404A6C[18 * v10 + 71857988 + v4];
        v13 = (_BYTE *)(v25 - (_BYTE *)v12);
        do
        {
          v14 = *(_BYTE *)v12;
          *((_BYTE *)v12 + (_QWORD)v13) = *(_BYTE *)v12;
          v12 = (unsigned int *)((char *)v12 + 1);
        }
        while ( v14 );
        sub_140158AB0(v24, "$%d", *v11);
        sub_1400764B0(
          v24,
          (float)(*(float *)&dword_140404A6C[70087069] + *(float *)&dword_140404A6C[70087067]) - 2.0,
          (float)(*(float *)&dword_140404A6C[70087070] + *(float *)&dword_140404A6C[70087068]) - 2.0,
          12.0,
          10);
        v15 = dword_140404A6C[70087076];
        v16 = *(v11 - 17);
        if ( (int)*v11 > (int)dword_140404A6C[v4 + 71856272] )
          v15 = 1;
        dword_140404A6C[70087076] = v15;
        ui_select_value_candidate((__int64)v25, (int *)&dword_140404A6C[v4 + 71856345], v16);
        ++v10;
        v8 = v8 + 44.0;
        v11 += 18;
      }
      while ( v10 < (int)dword_140404A6C[v4 + 71857986] );
      v9 = dword_140404A6C[v4 + 71856342];
      v5 = dword_140404A6C[70317962];
    }
  }
  if ( v9 == 18 )
  {
    dword_140404A6C[70087067] = v7;
    *(float *)&dword_140404A6C[70087068] = v8;
    ui_select_value_candidate((__int64)"Buy 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 0);
    ui_select_value_candidate((__int64)"Buy 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 1);
    ui_select_value_candidate((__int64)"Buy 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 2);
    ui_select_value_candidate((__int64)"Buy 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 3);
    dword_140404A6C[70087067] = 1140850688;
    dword_140404A6C[70087068] = 1124073472;
    v7 = 1140850688;
    v8 = 128.0;
    ui_select_value_candidate((__int64)"Sell 1 Share", (int *)&dword_140404A6C[v4 + 71856345], 4);
    ui_select_value_candidate((__int64)"Sell 10 Shares", (int *)&dword_140404A6C[v4 + 71856345], 5);
    ui_select_value_candidate((__int64)"Sell 100 Shares", (int *)&dword_140404A6C[v4 + 71856345], 6);
    ui_select_value_candidate((__int64)"Sell 1000 Shares", (int *)&dword_140404A6C[v4 + 71856345], 7);
    v9 = dword_140404A6C[v4 + 71856342];
    v5 = dword_140404A6C[70317962];
  }
  if ( v9 != 19 )
    goto LABEL_47;
  dword_140404A6C[70087067] = v7;
  *(float *)&dword_140404A6C[70087068] = v8;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v5 = ++dword_140404A6C[70317962];
  }
  dword_140404A6C[70087070] = 1102053376;
  dword_140404A6C[70087069] = 1132199936;
  if ( (int)dword_140404A6C[v4 + 71857986] > 0 )
  {
    v17 = (int *)&dword_140404A6C[v4 + 71857987];
    do
    {
      if ( v3 == 10 )
      {
        dword_140404A6C[70087067] = 1140850688;
        dword_140404A6C[70087068] = 1124073472;
      }
      v18 = &dword_140404A6C[18 * v3 + 71857988 + v4];
      v19 = (_BYTE *)(v25 - (_BYTE *)v18);
      do
      {
        v20 = *(_BYTE *)v18;
        *((_BYTE *)v18 + (_QWORD)v19) = *(_BYTE *)v18;
        v18 = (unsigned int *)((char *)v18 + 1);
      }
      while ( v20 );
      ui_select_value_candidate((__int64)v25, (int *)&dword_140404A6C[v4 + 71856345], *v17);
      ++v3;
      v17 += 18;
    }
    while ( v3 < (int)dword_140404A6C[v4 + 71857986] );
    v5 = dword_140404A6C[70317962];
  }
  if ( v5 > 0 )
  {
    dword_140404A6C[70317962] = --v5;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
LABEL_47:
    if ( v5 > 0 )
    {
      dword_140404A6C[70317962] = --v5;
      dword_140404A6C[70087069] = dword_140404A6C[2 * v5 + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * v5 + 70317964];
    }
  }
  dword_140404A6C[70087068] = 1138491392;
  dword_140404A6C[70087067] = 1107296256;
  if ( v5 < 16 )
  {
    dword_140404A6C[2 * v5 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1109393408;
  ui_select_value_candidate((__int64)"Done", (int *)&dword_140404A6C[280649838], 0);
  v21 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v21 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v21 - 1) + 70317964];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
}

