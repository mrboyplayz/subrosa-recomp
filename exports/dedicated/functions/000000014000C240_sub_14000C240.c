/* Address: 0x14000c240 | Name: sub_14000C240 | Size: 327 bytes */
__int64 __fastcall sub_14000C240(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // rdx
  int v7; // eax
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
  v6 = 1052016LL * (int)a1;
  if ( (int)(a2 >> 6) >= dword_16CDE9ED4[v6 / 4] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= dword_16CDE9ED8[v6 / 4] )
    return 0xFFFFFFFFLL;
  v7 = dword_16CDE9EDC[v6 / 4];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(qword_16CDE9EE8[v6 / 8] + 4LL
                                        * (int)((a2 >> 6) + dword_16CDE9ED4[v6 / 4] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = dword_16CDEA410[263004 * (int)a1
                     + 513 * v8
                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned __int16)word_1661A2EA8[13860 * v9 + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7))))];
}

