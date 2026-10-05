/* Address: 0x14000cc70 | Name: sub_14000CC70 | Size: 312 bytes */
__int64 __fastcall sub_14000CC70(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  int v6; // eax
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
  v5 = 1052016LL * (int)a1;
  if ( (int)(a2 >> 6) >= dword_16CDE9ED4[v5 / 4] )
    return 0;
  if ( (int)(a3 >> 6) >= dword_16CDE9ED8[v5 / 4] )
    return 0;
  v6 = dword_16CDE9EDC[v5 / 4];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(qword_16CDE9EE8[v5 / 8] + 4LL
                                        * (int)((a2 >> 6) + dword_16CDE9ED4[v5 / 4] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = dword_16CDEA410[263004 * (int)a1
                     + 513 * v7
                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return (unsigned int)dword_1661A6EA8[6930 * v8 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

