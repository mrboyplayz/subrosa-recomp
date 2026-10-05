/* Address: 0x140096fe0 | Name: sub_140096FE0 | Size: 312 bytes */
void __fastcall sub_140096FE0(int a1, int a2)
{
  __int64 v3; // r9
  __int64 v5; // r11
  int v6; // r10d
  int v7; // edi
  int v8; // edx
  int v9; // edx

  v3 = 3597LL * a1;
  v5 = dword_16D67D63C[v3];
  if ( (_DWORD)v5 != -1 )
  {
    v6 = dword_16D67D5EC[v3];
    v7 = *((_DWORD *)&qword_183A8AAA4 + 14019 * dword_16D67D708[v3] + 3 * a2 + 1);
    if ( v6 >= v7 )
    {
      if ( (unsigned int)(a2 - 1) <= 2 )
      {
        v8 = a2 == 1 ? 3 : (a2 == 2) + 7;
        if ( dword_16D680D64[v3] != v8 )
        {
          ++dword_1910411A0[v5];
          v6 -= v7;
          dword_16D680D64[v3] = v8;
          dword_16D67D5EC[v3] = v6;
          dword_190948964[7166 * v5] = v8;
        }
      }
      if ( (unsigned int)(a2 - 4) <= 1 )
      {
        if ( a2 == 4 )
          v9 = 1;
        else
          v9 = 2;
        if ( *(_DWORD *)&algn_16D680D74[v3 * 4] != v9 )
        {
          ++dword_1910411A0[v5];
          *(_DWORD *)&algn_16D680D74[v3 * 4] = v9;
          dword_16D67D5EC[v3] = v6 - v7;
          dword_190948970[7166 * v5] = v9;
        }
      }
      sub_14003A3D0(a1);
      if ( dword_19154118C == 3 )
        sub_14003A560(a1);
    }
  }
}

