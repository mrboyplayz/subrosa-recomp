/* Address: 0x140119f70 | Name: sub_140119F70 | Size: 950 bytes */
__int64 __fastcall sub_140119F70(int a1)
{
  char v1; // bp
  __int64 v2; // rdx
  int v3; // ecx
  unsigned int v4; // xmm1_4
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // edx
  int *v8; // rsi
  int v9; // r8d
  unsigned int *v10; // rcx
  _BYTE *v11; // rdx
  char v12; // al
  signed int v13; // ebx
  int *v14; // rsi
  int v15; // r8d
  unsigned int *v16; // rcx
  _BYTE *v17; // rdx
  char v18; // al
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-258h] BYREF
  _BYTE v23[512]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v24; // [rsp+220h] [rbp-38h]

  v1 = 0;
  v2 = a1;
  v3 = dword_140404A6C[70317962];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087068] = 1115684864;
  dword_140404A6C[70087084] = 1098907648;
  dword_140404A6C[70087085] = 1115684864;
  dword_140404A6C[70087083] = 0;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317964] = dword_140404A6C[70087070];
    v3 = ++dword_140404A6C[70317962];
  }
  v4 = 1126170624;
  v5 = 0;
  v6 = 3597 * v2;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1103101952;
  v7 = dword_140404A6C[3597 * v2 + 71857986];
  if ( v7 > 0 )
  {
    v8 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v9 = *v8;
      if ( (*v8 & 0x1000000) != 0 )
      {
        v10 = &dword_140404A6C[18 * v5 + 71857988 + v6];
        v11 = (_BYTE *)(v23 - (_BYTE *)v10);
        do
        {
          v12 = *(_BYTE *)v10;
          *((_BYTE *)v10 + (_QWORD)v11) = *(_BYTE *)v10;
          v10 = (unsigned int *)((char *)v10 + 1);
        }
        while ( v12 );
        ui_select_value_candidate((__int64)v23, (int *)&dword_140404A6C[v6 + 71856345], v9);
      }
      v7 = dword_140404A6C[v6 + 71857986];
      ++v5;
      v8 += 18;
    }
    while ( v5 < v7 );
    v3 = dword_140404A6C[70317962];
    v4 = dword_140404A6C[70087069];
  }
  if ( v3 > 0 )
  {
    dword_140404A6C[70317962] = --v3;
    v4 = dword_140404A6C[2 * v3 + 70317963];
    dword_140404A6C[70087069] = v4;
    dword_140404A6C[70087070] = dword_140404A6C[2 * v3 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087083] = 1;
  dword_140404A6C[70087068] = 1124073472;
  if ( v3 < 16 )
  {
    dword_140404A6C[2 * v3 + 70317963] = v4;
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v13 = 0;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1108344832;
  if ( v7 > 0 )
  {
    v14 = (int *)&dword_140404A6C[v6 + 71857987];
    do
    {
      v15 = *v14;
      if ( (*v14 & 0x1000000) == 0 )
      {
        v16 = &dword_140404A6C[18 * v13 + 71857988 + v6];
        v17 = (_BYTE *)(v23 - (_BYTE *)v16);
        do
        {
          v18 = *(_BYTE *)v16;
          *((_BYTE *)v16 + (_QWORD)v17) = *(_BYTE *)v16;
          v16 = (unsigned int *)((char *)v16 + 1);
        }
        while ( v18 );
        v19 = dword_140404A6C[70087076];
        if ( (v15 & 0x100) != 0 )
          v19 = 1;
        dword_140404A6C[70087076] = v19;
        ui_select_value_candidate((__int64)v23, (int *)&dword_140404A6C[v6 + 71856345], v15);
        if ( (v1 & 7) == 7 )
        {
          dword_140404A6C[70087068] = 1124073472;
          *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 284.0;
        }
        ++v1;
      }
      ++v13;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 71857986] );
  }
  dword_140404A6C[70087068] = 1139802112;
  dword_140404A6C[70087067] = 1098907648;
  ui_select_value_candidate((__int64)"Done", (int *)&dword_140404A6C[280649838], 0);
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v24);
}

