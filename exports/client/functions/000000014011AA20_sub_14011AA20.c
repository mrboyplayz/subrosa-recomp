/* Address: 0x14011aa20 | Name: sub_14011AA20 | Size: 307 bytes */
__int64 __fastcall sub_14011AA20(int a1)
{
  int *v1; // rbx
  __int64 result; // rax

  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1124073472;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1132199936;
  dword_140404A6C[70087070] = 1107296256;
  v1 = (int *)&dword_140404A6C[3597 * a1 + 71856345];
  ui_select_value_candidate((__int64)"Buy", v1, 1);
  ui_select_value_candidate((__int64)"Sell", v1, 2);
  *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 32.0;
  ui_select_value_candidate((__int64)"Done", (int *)&dword_140404A6C[280649838], 0);
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

