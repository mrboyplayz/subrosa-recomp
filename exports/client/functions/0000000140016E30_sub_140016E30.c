/* Address: 0x140016e30 | Name: sub_140016E30 | Size: 304 bytes */
void __fastcall sub_140016E30(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rcx

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v6 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v7 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v7 )
      {
        v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
        if ( (_DWORD)v8 != -1 )
        {
          v9 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v8
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v9 != -1 )
            dword_140404A6C[6930 * v9 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
        }
      }
    }
  }
}

