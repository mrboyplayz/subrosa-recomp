/* Address: 0x14014fab0 | Name: sub_14014FAB0 | Size: 500 bytes */
void __fastcall sub_14014FAB0(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3, _BYTE *a4)
{
  int v4; // r10d
  _BYTE *v6; // rsi
  const char *v7; // rbp
  int v8; // ebx
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = dword_140404A6C[71856245];
  v6 = a3;
  v7 = (const char *)a1;
  if ( *(_QWORD *)&dword_140404A6C[71856245] )
  {
    v8 = 0;
    if ( a2 )
    {
      a3 = (_BYTE *)*(unsigned __int8 *)a2;
      v9 = 0;
      if ( (_BYTE)a3 )
      {
        v10 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v10) = (_BYTE)a3;
          ++v9;
          ++v10;
          if ( *(_BYTE *)a2 == 10 )
          {
            ++v9;
            *((_BYTE *)&dword_140404A6C[71823477] + v10++) = 34;
          }
          a3 = (_BYTE *)*(unsigned __int8 *)++a2;
          if ( (_BYTE)a3 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v10) = 28252;
            v9 += 3;
            *((_BYTE *)&dword_140404A6C[71823477] + v10 + 2) = 34;
            v10 += 3;
            a3 = (_BYTE *)*(unsigned __int8 *)a2;
          }
        }
        while ( (_BYTE)a3 );
      }
      if ( (unsigned __int64)v9 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + v9) = 0;
      sub_1400920F0(v4, "char %svs[]=\"%s\";\r\n\r\n", (const char *)a1, (const char *)&dword_140404A6C[71823477]);
      v4 = dword_140404A6C[71856245];
    }
    if ( v6 )
    {
      a2 = (unsigned __int8)*v6;
      a1 = 0;
      if ( (_BYTE)a2 )
      {
        v11 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v11) = a2;
          a1 = (unsigned int)(a1 + 1);
          ++v11;
          if ( *v6 == 10 )
          {
            a1 = (unsigned int)(a1 + 1);
            *((_BYTE *)&dword_140404A6C[71823477] + v11++) = 34;
          }
          a2 = (unsigned __int8)*++v6;
          if ( (_BYTE)a2 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v11) = 28252;
            a1 = (unsigned int)(a1 + 3);
            *((_BYTE *)&dword_140404A6C[71823477] + v11 + 2) = 34;
            v11 += 3;
            a2 = (unsigned __int8)*v6;
          }
        }
        while ( (_BYTE)a2 );
      }
      if ( (unsigned __int64)(int)a1 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + (int)a1) = 0;
      sub_1400920F0(v4, "char %sfs[]=\"%s\";\r\n\r\n", v7, (const char *)&dword_140404A6C[71823477]);
      v4 = dword_140404A6C[71856245];
    }
    if ( !a4 )
      return;
    a1 = (unsigned __int8)*a4;
    if ( (_BYTE)a1 )
    {
      v12 = 0;
      do
      {
        *((_BYTE *)&dword_140404A6C[71823477] + v12) = a1;
        ++v8;
        ++v12;
        if ( *a4 == 10 )
        {
          ++v8;
          *((_BYTE *)&dword_140404A6C[71823477] + v12++) = 34;
        }
        a1 = (unsigned __int8)*++a4;
        if ( (_BYTE)a1 == 13 )
        {
          *(_WORD *)((char *)&dword_140404A6C[71823477] + v12) = 28252;
          v8 += 3;
          *((_BYTE *)&dword_140404A6C[71823477] + v12 + 2) = 34;
          v12 += 3;
          a1 = (unsigned __int8)*a4;
        }
      }
      while ( (_BYTE)a1 );
    }
    if ( (unsigned __int64)v8 < 0x20000 )
    {
      *((_BYTE *)&dword_140404A6C[71823477] + v8) = 0;
      sub_1400920F0(v4, "char %sgs[]=\"%s\";\r\n\r\n", v7, (const char *)&dword_140404A6C[71823477]);
      return;
    }
LABEL_33:
    sub_1401F8694(a1, a2, a3);
  }
}

