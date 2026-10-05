/* Address: 0x140013020 | Name: sub_140013020 | Size: 242 bytes */
__int64 __fastcall sub_140013020(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v4 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v4 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v4 + 111579651] )
    return 0xFFFFFFFFLL;
  v5 = dword_140404A6C[v4 + 111579652];
  if ( (int)(a4 >> 6) >= v5 )
    return 0xFFFFFFFFLL;
  v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
  if ( (_DWORD)v6 == -1 )
    return 0xFFFFFFFFLL;
  else
    return dword_140404A6C[263004 * (int)a1
                         + 111579985
                         + 513 * v6
                         + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
}

