/* Address: 0x1400f4bc0 | Name: sub_1400F4BC0 | Size: 312 bytes */
void __fastcall sub_1400F4BC0(int a1, int a2)
{
  __int64 v3; // r9
  __int64 v5; // r11
  signed int v6; // r10d
  signed int v7; // edi
  int v8; // edx
  unsigned int v9; // edx

  v3 = 3597LL * a1;
  v5 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v5 != -1 )
  {
    v6 = dword_140404A6C[v3 + 71856272];
    v7 = dword_140404A6C[14019 * dword_140404A6C[v3 + 71856343] + 225654127 + 3 * a2];
    if ( v6 >= v7 )
    {
      if ( (unsigned int)(a2 - 1) <= 2 )
      {
        v8 = a2 == 1 ? 3 : (a2 == 2) + 7;
        if ( dword_140404A6C[v3 + 71859822] != v8 )
        {
          ++dword_140404A6C[v5 + 282485789];
          v6 -= v7;
          dword_140404A6C[v3 + 71859822] = v8;
          dword_140404A6C[v3 + 71856272] = v6;
          dword_140404A6C[7166 * v5 + 280658446] = v8;
        }
      }
      if ( (unsigned int)(a2 - 4) <= 1 )
      {
        if ( a2 == 4 )
          v9 = 1;
        else
          v9 = 2;
        if ( dword_140404A6C[v3 + 71859826] != v9 )
        {
          ++dword_140404A6C[v5 + 282485789];
          dword_140404A6C[v3 + 71859826] = v9;
          dword_140404A6C[v3 + 71856272] = v6 - v7;
          dword_140404A6C[7166 * v5 + 280658449] = v9;
        }
      }
      sub_140051DC0(a1);
      if ( dword_140404A6C[283831312] == 3 )
        sub_140051F50((unsigned int)a1);
    }
  }
}

