/* Address: 0x1400173c0 | Name: sub_1400173C0 | Size: 269 bytes */
void __fastcall sub_1400173C0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v4 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v4 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v4 + 111579651] )
    {
      v5 = dword_140404A6C[v4 + 111579652];
      if ( (int)(a4 >> 6) < v5 )
      {
        v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
        if ( (_DWORD)v6 != -1 )
        {
          v7 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v6
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v7 != -1 )
            dword_140404A6C[6930 * v7 + 83200510] = 1;
        }
      }
    }
  }
}

