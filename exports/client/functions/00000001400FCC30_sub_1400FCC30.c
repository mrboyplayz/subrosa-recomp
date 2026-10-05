/* Address: 0x1400fcc30 | Name: sub_1400FCC30 | Size: 82 bytes */
__int64 sub_1400FCC30()
{
  __int64 result; // rax
  unsigned int v1; // ecx

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  result = ui_button_candidate((__int64)"Back");
  v1 = dword_140404A6C[283831310];
  if ( (_DWORD)result )
    v1 = 0;
  dword_140404A6C[283831310] = v1;
  return result;
}

