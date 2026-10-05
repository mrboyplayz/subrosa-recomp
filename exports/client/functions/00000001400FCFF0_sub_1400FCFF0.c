/* Address: 0x1400fcff0 | Name: sub_1400FCFF0 | Size: 778 bytes */
__int64 sub_1400FCFF0()
{
  int v0; // eax
  unsigned int v1; // ecx
  float v2; // xmm2_4
  float v3; // xmm1_4
  unsigned int *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  v0 = ui_button_candidate((__int64)"Back");
  v1 = dword_140404A6C[283831310];
  v2 = *(float *)&dword_140404A6C[70087068] + 32.0;
  if ( v0 )
    v1 = 0;
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[283831310] = v1;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  *(float *)&dword_140404A6C[70087085] = v2;
  dword_140404A6C[70087084] = dword_140404A6C[70087067];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087083] = 0;
  ui_select_value_candidate((__int64)"World Mode", (int *)&dword_140404A6C[73991632], 4);
  ui_select_value_candidate((__int64)"Round Mode", (int *)&dword_140404A6C[73991632], 3);
  ui_select_value_candidate((__int64)"Eliminator Mode", (int *)&dword_140404A6C[73991632], 5);
  if ( dword_140404A6C[70087083] )
  {
    v3 = *(float *)&dword_140404A6C[70087068];
  }
  else
  {
    v3 = *(float *)&dword_140404A6C[70087086] + *(float *)&dword_140404A6C[70087085];
    dword_140404A6C[70087067] = dword_140404A6C[70087084];
    if ( dword_140404A6C[70326263] )
    {
      ++dword_140404A6C[70326521];
      dword_140404A6C[70326520] = 0;
    }
  }
  dword_140404A6C[70087083] = 1;
  *(float *)&dword_140404A6C[70087068] = v3 + 16.0;
  ui_text_entry_candidate((__int64)"Max Players", (__int64)&dword_140404A6C[73991631], 1, 32);
  if ( dword_140404A6C[73991632] == 3 )
  {
    v4 = &dword_140404A6C[284022480];
  }
  else
  {
    v4 = &dword_140404A6C[284022501];
    if ( dword_140404A6C[73991632] != 7 )
      v4 = &dword_140404A6C[73991633];
  }
  ui_text_entry_candidate((__int64)"Round Length", (__int64)v4, 1, 30);
  sub_140070200("Server Name", (__int64)&dword_140404A6C[73991224], 0x18u);
  dword_140404A6C[70087074] = 22;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  result = ui_button_candidate((__int64)"Start");
  if ( (_DWORD)result )
  {
    MEMORY[0x140198F0B](1, v6, v7);
    dword_140404A6C[284024635] = MEMORY[0x140198F05](&v10, &v11);
    dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
    dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
    v8 = 0;
    dword_140404A6C[283831312] = dword_140404A6C[73991632];
    *(float *)&dword_140404A6C[284024599] = (float)v10;
    *(float *)&dword_140404A6C[284024600] = (float)v11;
    dword_140404A6C[284024597] = 1140850688;
    dword_140404A6C[284024598] = 1134559232;
    do
    {
      v9 = *((_BYTE *)&dword_140404A6C[73991224] + v8);
      *((_BYTE *)&dword_140404A6C[456202458] + v8++) = v9;
    }
    while ( v9 );
    dword_140404A6C[456202722] = dword_140404A6C[73991631];
    dword_140404A6C[283831452] = 3600;
    dword_140404A6C[283831473] = 1260;
    dword_140404A6C[283831447] = 0;
    dword_140404A6C[456202453] = 1;
    dword_140404A6C[283831453] = 3600 * dword_140404A6C[73991633];
    *(_QWORD *)&dword_140404A6C[73991608] = 1;
    return sub_140095B00(v8, &dword_140404A6C[456202458]);
  }
  return result;
}

