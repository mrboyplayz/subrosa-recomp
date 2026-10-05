/* Address: 0x1402612b8 | Name: _free_osfhnd | Size: 186 bytes */
__int64 __fastcall free_osfhnd(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx

  if ( a1 >= 0 && a1 < dword_140404A6C[19065657] )
  {
    v2 = (__int64)a1 >> 6;
    v3 = 9LL * (a1 & 0x3F);
    v4 = *(_QWORD *)&dword_140404A6C[2 * v2 + 19065401];
    if ( (*(_BYTE *)(v4 + 72LL * (a1 & 0x3F) + 56) & 1) != 0 && *(_QWORD *)(v4 + 72LL * (a1 & 0x3F) + 40) != -1 )
    {
      if ( (unsigned int)sub_14024774C() == 1 )
      {
        if ( !a1 )
        {
          v6 = 4294967286LL;
          goto LABEL_12;
        }
        v5 = a1 - 1;
        if ( !v5 )
        {
          v6 = 4294967285LL;
          goto LABEL_12;
        }
        if ( v5 == 1 )
        {
          v6 = 4294967284LL;
LABEL_12:
          ((void (__fastcall *)(__int64, _QWORD))SetStdHandle)(v6, 0);
        }
      }
      *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v2 + 19065401] + 8 * v3 + 40) = -1;
      return 0;
    }
  }
  *errno() = 9;
  *(_DWORD *)sub_14024D19C() = 0;
  return 0xFFFFFFFFLL;
}

