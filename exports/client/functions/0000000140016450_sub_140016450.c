/* Address: 0x140016450 | Name: sub_140016450 | Size: 312 bytes */
__int64 __fastcall sub_140016450(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

