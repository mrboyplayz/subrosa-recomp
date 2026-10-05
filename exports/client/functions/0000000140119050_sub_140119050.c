/* Address: 0x140119050 | Name: sub_140119050 | Size: 459 bytes */
__int64 __fastcall sub_140119050(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int *v3; // rdx
  int v4; // r8d
  const char *v5; // rcx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v1 = 3597LL * a1;
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  ui_select_value_candidate((__int64)"Deposit", (int *)&dword_140404A6C[v1 + 71856345], 7);
  ui_select_value_candidate((__int64)"Withdrawl $5", (int *)&dword_140404A6C[v1 + 71856345], 1);
  ui_select_value_candidate((__int64)"Withdrawl $10", (int *)&dword_140404A6C[v1 + 71856345], 2);
  ui_select_value_candidate((__int64)"Withdrawl $20", (int *)&dword_140404A6C[v1 + 71856345], 3);
  ui_select_value_candidate((__int64)"Withdrawl $50", (int *)&dword_140404A6C[v1 + 71856345], 4);
  ui_select_value_candidate((__int64)"Withdrawl $100", (int *)&dword_140404A6C[v1 + 71856345], 5);
  ui_select_value_candidate((__int64)"Withdrawl $1000", (int *)&dword_140404A6C[v1 + 71856345], 6);
  v2 = dword_140404A6C[v1 + 71856342];
  v3 = &dword_140404A6C[280649838];
  if ( v2 == 12 )
    v3 = &dword_140404A6C[v1 + 71856345];
  v4 = 0;
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  if ( v2 == 12 )
    v4 = 16;
  v5 = "Done";
  if ( v2 == 12 )
    v5 = "Back";
  ui_select_value_candidate((__int64)v5, (int *)v3, v4);
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

