/* Address: 0x140016720 | Name: sub_140016720 | Size: 327 bytes */
__int64 __fastcall sub_140016720(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int8 *)&dword_140404A6C[6930 * v9 + 83197943]
           + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)))));
}

