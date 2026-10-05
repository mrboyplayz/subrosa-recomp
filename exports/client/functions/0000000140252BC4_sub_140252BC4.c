/* Address: 0x140252bc4 | Name: sub_140252BC4 | Size: 235 bytes */
__int64 __fastcall sub_140252BC4(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rsi
  unsigned int v7; // edi

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x80000000) != 0
    || a1 >= dword_140404A6C[19065657]
    || (v6 = (__int64)(int)a1 >> 6,
        (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) == 0) )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 9;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  sub_140261068(a1);
  v7 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    v7 = sub_140252DA0(a1, a2, a3);
  }
  else
  {
    *errno() = 9;
    *(_DWORD *)sub_14024D19C() = 0;
  }
  sub_140261150(a1);
  return v7;
}

