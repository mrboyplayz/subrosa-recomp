/* Address: 0x14011acc0 | Name: sub_14011ACC0 | Size: 690 bytes */
__int64 __fastcall sub_14011ACC0(int a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // r8d
  const char *v5; // rcx
  signed int v6; // ecx
  __int64 result; // rax

  v1 = a1;
  if ( dword_140404A6C[283831312] == 2 || dword_140404A6C[283831312] == 5 )
  {
    v6 = dword_140404A6C[70317962];
    goto LABEL_22;
  }
  dword_140404A6C[70087084] = dword_140404A6C[70087067];
  dword_140404A6C[70087086] = 0;
  dword_140404A6C[70087085] = dword_140404A6C[70087068];
  dword_140404A6C[70087083] = 0;
  sub_1400755F0();
  v2 = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1119879168;
  v3 = 3597 * v1;
  do
  {
    if ( dword_140404A6C[v3 + 71856286] != 17 )
      goto LABEL_12;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        dword_140404A6C[70087074] = 31;
        v4 = 2;
        v5 = "Join Monsota";
      }
      else
      {
        if ( dword_140404A6C[283831312] == 7 )
          goto LABEL_12;
        dword_140404A6C[70087074] = v2 + 30;
        v4 = v2 + 1;
        v5 = "Join OXS";
      }
    }
    else
    {
      dword_140404A6C[70087074] = 30;
      v4 = 1;
      v5 = "Join Goldmen";
    }
    ui_select_value_candidate((__int64)v5, (int *)&dword_140404A6C[v3 + 71856345], v4);
LABEL_12:
    ++v2;
  }
  while ( v2 < 3 );
  if ( dword_140404A6C[v3 + 71856286] != 17 )
  {
    dword_140404A6C[70087067] = 1144717312;
    dword_140404A6C[70087074] = 33;
    ui_select_value_candidate((__int64)"Observer", (int *)&dword_140404A6C[v3 + 71856345], 4);
  }
  v6 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    v6 = dword_140404A6C[70317962] - 1;
    dword_140404A6C[70317962] = v6;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v6 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v6 + 70317964];
  }
  if ( !dword_140404A6C[70087083] && dword_140404A6C[70326263] )
  {
    ++dword_140404A6C[70326521];
    dword_140404A6C[70326520] = 0;
  }
  dword_140404A6C[70087083] = 1;
LABEL_22:
  dword_140404A6C[70087067] = 1146028032;
  dword_140404A6C[70087068] = 1107296256;
  if ( v6 < 16 )
  {
    dword_140404A6C[2 * v6 + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087074] = 21;
  ui_select_value_candidate((__int64)"Ready", (int *)&dword_140404A6C[3597 * v1 + 71856345], 5);
  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

