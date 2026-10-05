/* Address: 0x14000c100 | Name: sub_14000C100 | Size: 315 bytes */
__int64 __fastcall sub_14000C100(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v5 = 1052016LL * (int)a1;
  if ( (int)(a2 >> 6) >= dword_16CDE9ED4[v5 / 4] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= dword_16CDE9ED8[v5 / 4] )
    return 0xFFFFFFFFLL;
  v6 = dword_16CDE9EDC[v5 / 4];
  if ( (int)(a4 >> 6) >= v6 )
    return 0xFFFFFFFFLL;
  v7 = *(int *)(qword_16CDE9EE8[v5 / 8] + 4LL
                                        * (int)((a2 >> 6) + dword_16CDE9ED4[v5 / 4] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0xFFFFFFFFLL;
  v8 = dword_16CDEA410[263004 * (int)a1
                     + 513 * v7
                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned __int16)word_1661A2EB6[13860 * v8 + 512 * (a3 & 7) + 64 * (a4 & 7) + 8 * (a2 & 7)];
}

