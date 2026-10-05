/* Address: 0x14011ab60 | Name: sub_14011AB60 | Size: 347 bytes */
void __fastcall sub_14011AB60(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdi
  int *v4; // rbx
  unsigned int v5; // eax
  int v6; // r8d
  const char *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax

  if ( a1 == -1 )
    return;
  v1 = 3597LL * a1;
  v2 = (int)dword_140404A6C[v1 + 71856343];
  if ( (_DWORD)v2 == -1 )
    return;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  sub_1400755F0();
  v3 = 14019 * v2;
  v4 = (int *)(0x140000000LL + v1 * 4 + 291638736);
  v5 = dword_140404A6C[v3 + 225641203];
  if ( v5 == 3 )
  {
    ui_select_value_candidate((__int64)"Sell Car", v4, 1);
    v5 = dword_140404A6C[v3 + 225641203];
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
    if ( v5 == 3 )
      goto LABEL_8;
  }
  else
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  }
  v4 = (int *)&dword_140404A6C[280649838];
LABEL_8:
  v6 = 0;
  if ( v5 == 3 )
    v6 = 16;
  v7 = "Done";
  if ( v5 == 3 )
    v7 = "Back";
  ui_select_value_candidate((__int64)v7, v4, v6);
  v8 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    v9 = v8 - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * v9 + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * v9 + 70317964];
  }
}

