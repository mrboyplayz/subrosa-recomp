/* Address: 0x14000d730 | Name: sub_14000D730 | Size: 269 bytes */
void __fastcall sub_14000D730(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v4 = 1052016LL * (int)a1;
    if ( (int)(a2 >> 6) < dword_16CDE9ED4[v4 / 4] && (int)(a3 >> 6) < dword_16CDE9ED8[v4 / 4] )
    {
      v5 = dword_16CDE9EDC[v4 / 4];
      if ( (int)(a4 >> 6) < v5 )
      {
        v6 = *(int *)(qword_16CDE9EE8[v4 / 8]
                    + 4LL * (int)((a2 >> 6) + dword_16CDE9ED4[v4 / 4] * ((a4 >> 6) + (a3 >> 6) * v5)));
        if ( (_DWORD)v6 != -1 )
        {
          v7 = dword_16CDEA410[263004 * (int)a1
                             + 513 * v6
                             + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v7 != -1 )
            *((_DWORD *)&unk_1661A7EC4 + 6930 * v7) = 1;
        }
      }
    }
  }
}

