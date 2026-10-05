/* Address: 0x140003760 | Name: sub_140003760 | Size: 371 bytes */
__int64 __fastcall sub_140003760(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // r9d
  signed int v7; // eax
  __int64 result; // rax

  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628800] = a3;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628801] = a4;
  v4 = &dword_140404A6C[34 * a1 + 225391205];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628802] = v4[35] + v4[25];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628804] = v4[36] + v4[27];
  v5 = 34LL * a2;
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v4[26];
  v6 = dword_140404A6C[225628799];
  v7 = dword_140404A6C[v5 + 225391231];
  if ( (int)dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] > v7 )
  {
    dword_140404A6C[12 * dword_140404A6C[225628799] + 225628803] = v7;
    v6 = dword_140404A6C[225628799];
  }
  dword_140404A6C[12 * v6 + 225628805] = dword_140404A6C[v5 + 225391230]
                                       - dword_140404A6C[v5 + 225391242]
                                       - v4[25]
                                       - v4[35];
  dword_140404A6C[12 * dword_140404A6C[225628799] + 225628806] = dword_140404A6C[v5 + 225391232]
                                                               - dword_140404A6C[v5 + 225391243]
                                                               - v4[27]
                                                               - dword_140404A6C[34 * a1 + 225391241];
  result = (int)dword_140404A6C[225628799];
  dword_140404A6C[12 * dword_140404A6C[225628799]++ + 225628807] = 0;
  return result;
}

