/* Address: 0x140235704 | Name: sub_140235704 | Size: 350 bytes */
void __fastcall MEMORY[0x140235704](__int64 a1)
{
  _WORD *v1; // r8
  __int16 v3; // cx
  __int64 v4; // rax
  int v5; // eax
  __int16 v6; // cx
  __int64 v7; // r9
  _WORD *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8

  v1 = *(_WORD **)(a1 + 8);
  if ( *v1 != 73 )
  {
    if ( *v1 == 76 )
    {
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = v1 + 1;
      return;
    }
    if ( *v1 == 84 )
    {
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = v1 + 1;
      return;
    }
    if ( *v1 == 104 )
    {
      v6 = v1[1];
      v7 = 2;
      if ( v6 != 104 )
        v7 = 1;
      *(_QWORD *)(a1 + 8) = &v1[v7];
      v5 = (v6 != 104) + 1;
    }
    else
    {
      if ( *v1 == 106 )
      {
        *(_DWORD *)(a1 + 40) = 5;
        *(_QWORD *)(a1 + 8) = v1 + 1;
        return;
      }
      if ( *v1 != 108 )
      {
        if ( *v1 == 116 )
        {
          *(_DWORD *)(a1 + 40) = 7;
          *(_QWORD *)(a1 + 8) = v1 + 1;
        }
        else if ( *v1 == 122 )
        {
          *(_DWORD *)(a1 + 40) = 6;
          *(_QWORD *)(a1 + 8) = v1 + 1;
        }
        return;
      }
      v3 = v1[1];
      v4 = 2;
      if ( v3 != 108 )
        v4 = 1;
      *(_QWORD *)(a1 + 8) = &v1[v4];
      v5 = 4 - (v3 != 108);
    }
    *(_DWORD *)(a1 + 40) = v5;
    return;
  }
  v8 = v1 + 1;
  v9 = (unsigned __int16)v1[1];
  if ( (_WORD)v9 == 51 )
  {
    if ( v1[2] == 50 )
    {
      *(_DWORD *)(a1 + 40) = 9;
      *(_QWORD *)(a1 + 8) = v1 + 3;
      return;
    }
  }
  else if ( (_WORD)v9 == 54 && v1[2] == 52 )
  {
    *(_QWORD *)(a1 + 8) = v1 + 3;
LABEL_30:
    *(_DWORD *)(a1 + 40) = 10;
    return;
  }
  LOWORD(v9) = v9 - 88;
  if ( (unsigned __int16)v9 <= 0x20u )
  {
    v10 = 0x120821001LL;
    if ( _bittest64(&v10, v9) )
    {
      *(_QWORD *)(a1 + 8) = v8;
      goto LABEL_30;
    }
  }
}

