/* Address: 0x1400c4990 | Name: sub_1400C4990 | Size: 338 bytes */
__int64 __fastcall sub_1400C4990(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx

  v3 = a2;
  if ( a1 != -1 )
  {
    v4 = 3597LL * a1;
    v5 = dword_16D67D624[v4];
    if ( (_DWORD)v5 != a2 )
    {
      if ( (unsigned int)v5 <= 5 && dword_1915414A4[5873 * v5] == a1 )
      {
        if ( dword_19154118C == 4 )
        {
          sub_1400EC370(v5);
          LODWORD(v5) = dword_16D67D624[v4];
        }
        result = (int)v5;
        dword_1915414A4[5873 * (int)v5] = -1;
      }
      v7 = dword_16D67D63C[v4];
      dword_16D67D624[v4] = v3;
      if ( (unsigned int)v3 <= 5 )
      {
        v8 = dword_16D680D64[v4];
        dword_16D680D60[v4] = 1;
        if ( ((v8 - 3) & 0xFFFFFFFA) != 0 || v8 == 4 )
          dword_16D680D64[v4] = dword_140146BB0[v3];
        result = (unsigned int)dword_140146BD0[v3];
        *(_DWORD *)&algn_16D680D68[v4 * 4] = result;
      }
      if ( (_DWORD)v3 == 17 )
      {
        v9 = dword_16D680D64[v4];
        dword_16D680D60[v4] = 0;
        result = (unsigned int)(v9 - 3);
        if ( (result & 0xFFFFFFFA) != 0 || v9 == 4 )
          dword_16D680D64[v4] = 0;
        *(_DWORD *)&algn_16D680D68[v4 * 4] = 0;
      }
      if ( (_DWORD)v7 != -1 )
      {
        v10 = dword_16D680D60[v4];
        v11 = 7166 * v7;
        ++dword_1910411A0[v7];
        dword_190948960[v11] = v10;
        dword_190948964[v11] = dword_16D680D64[v4];
        result = *(unsigned int *)&algn_16D680D68[v4 * 4];
        dword_190948968[v11] = result;
      }
    }
  }
  return result;
}

