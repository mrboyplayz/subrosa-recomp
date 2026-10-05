/* Address: 0x140261090 | Name: sub_140261090 | Size: 191 bytes */
__int64 __fastcall sub_140261090(int a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rcx

  if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
  {
    v4 = (__int64)a1 >> 6;
    v5 = 9LL * (a1 & 0x3F);
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 72LL * (a1 & 0x3F) + 40) == -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          v7 = 4294967286LL;
          goto LABEL_11;
        }
        v6 = a1 - 1;
        if ( !v6 )
        {
          v7 = 4294967285LL;
          goto LABEL_11;
        }
        if ( v6 == 1 )
        {
          v7 = 4294967284LL;
LABEL_11:
          ((void (__fastcall *)(__int64, __int64))SetStdHandle)(v7, a2);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] + 8 * v5 + 40) = a2;
      return 0;
    }
  }
  *errno() = 9;
  *(_DWORD *)sub_14024D19C() = 0;
  return 0xFFFFFFFFLL;
}

