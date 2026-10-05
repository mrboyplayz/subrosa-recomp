/* Address: 0x1400c3c90 | Name: sub_1400C3C90 | Size: 116 bytes */
__int64 __fastcall sub_1400C3C90(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r11

  v3 = a3;
  v4 = 28664LL * a2 + 40LL * a3;
  v5 = *(int *)((char *)&dword_140404A6C[280658139] + v4);
  if ( (int)v5 >= 8 )
    return 0;
  dword_140404A6C[7166 * a2 + 280658140 + 10 * v3 + v5] = a1;
  ++*(unsigned int *)((char *)&dword_140404A6C[280658139] + v4);
  return 1;
}

