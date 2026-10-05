/* Address: 0x14000c990 | Name: sub_14000C990 | Size: 390 bytes */
__int64 __fastcall sub_14000C990(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r9d

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v6 = 1052016LL * (int)a1;
  if ( (int)(a2 >> 6) >= dword_16CDE9ED4[v6 / 4] )
    return 0;
  if ( (int)(a3 >> 6) >= dword_16CDE9ED8[v6 / 4] )
    return 0;
  v7 = dword_16CDE9EDC[v6 / 4];
  if ( (int)(a4 >> 6) >= v7 )
    return 0;
  v8 = *(int *)(qword_16CDE9EE8[v6 / 8] + 4LL
                                        * (int)((a2 >> 6) + dword_16CDE9ED4[v6 / 4] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0;
  v9 = dword_16CDEA410[263004 * (int)a1
                     + 513 * v8
                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0;
  v10 = dword_1661A4EA8[6930 * v9 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
  if ( (v10 & 0xE0000000) == 0xC0000000 )
    return (unsigned int)sub_14000C850(a1, a2 - (unsigned __int8)v10, a3 - BYTE2(v10), a4 - BYTE1(v10));
  return v10;
}

