/* Address: 0x14007adf0 | Name: sub_14007ADF0 | Size: 115 bytes */
__int64 __fastcall sub_14007ADF0(__int64 a1, int a2, int a3)
{
  signed int v3; // r9d
  int v4; // ebx

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000 )
    return 0;
  v4 = a3 * a2;
  if ( (signed int)(a3 * a2 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483] )
    return 0;
  if ( (int)dword_140404A6C[289317485] > 0 )
  {
    v3 = dword_140404A6C[289317484] + 1;
    dword_140404A6C[289317485] = 0;
    ++dword_140404A6C[289317484];
  }
  MEMORY[0x1401FC920](a1, (char *)&dword_140404A6C[289317486] + v3);
  dword_140404A6C[289317484] += v4;
  return 1;
}

