/* Address: 0x140235928 | Name: sub_140235928 | Size: 433 bytes */
char __fastcall sub_140235928(__int64 a1)
{
  unsigned __int64 v1; // rdi
  _BYTE *v4; // r8
  _BYTE *v5; // rcx
  char v6; // r11
  unsigned __int8 v7; // al
  _BYTE *v8; // rsi
  _BYTE *v9; // rdx
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r9
  char v13; // r10
  _BYTE *v14; // rdx

  v1 = a1 + 52;
  if ( a1 == -52 )
  {
    MEMORY[0xFFFFFFFFFFFFFFDC] = 12;
    MEMORY[0xFFFFFFFFFFFFFFE4] = 0;
    MEMORY[0xFFFFFFFFFFFFFFE6] = 0;
    MEMORY[0xFFFFFFFFFFFFFFEC] = 0;
    MEMORY[0xFFFFFFFFFFFFFFF4] = 0;
    MEMORY[0xFFFFFFFFFFFFFFF8] = 0;
    MEMORY[0xFFFFFFFFFFFFFFFC] = 0;
    return 0;
  }
  MEMORY[0x1401FCD30]((_WORD *)(a1 + 52), 0, 0x20u);
  v4 = *(_BYTE **)(a1 + 8);
  v5 = v4;
  v6 = *v4;
  v7 = *v4;
  if ( *v4 == 94 )
  {
    *(_QWORD *)(a1 + 8) = ++v4;
    v5 = v4;
    v7 = *v4;
  }
  if ( v7 == 93 )
  {
    *(_QWORD *)(a1 + 8) = ++v4;
    *(_BYTE *)(a1 + 63) |= 0x20u;
    v5 = v4;
    v7 = *v4;
  }
  v8 = nullptr;
  if ( v7 != 93 )
  {
    v9 = v4;
    do
    {
      if ( !v7 )
        break;
      if ( v7 != 45 || v9 - 1 == v8 || v9 == v4 || v9[1] == 93 )
      {
        *(_BYTE *)(((unsigned __int64)v7 >> 3) + a1 + 52) |= 1 << (v7 & 7);
      }
      else
      {
        v10 = *(v9 - 1);
        v8 = v9 + 1;
        v11 = v10;
        v12 = v9[1];
        if ( v10 <= v12 )
          v11 = v9[1];
        v13 = v11 + 1;
        if ( v10 <= v9[1] )
          v12 = *(v9 - 1);
        while ( v12 != v13 )
        {
          *(_BYTE *)(((unsigned __int64)v12 >> 3) + a1 + 52) |= 1 << (v12 & 7);
          ++v12;
        }
      }
      v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
      *(_QWORD *)(a1 + 8) = v5;
      v9 = v5;
      v7 = *v5;
    }
    while ( *v5 != 93 );
  }
  if ( !*v5 )
  {
    *(_QWORD *)(a1 + 16) = 22;
    *(_WORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 26) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    return 0;
  }
  if ( v6 == 94 )
  {
    v14 = (_BYTE *)v1;
    if ( v1 < v1 + 32 )
    {
      do
      {
        *v14 = ~*v14;
        ++v14;
      }
      while ( &v14[-v1] != (_BYTE *)(v1 + 32 >= v1 ? 0x20 : 0) );
      v5 = *(_BYTE **)(a1 + 8);
    }
  }
  *(_QWORD *)(a1 + 8) = v5 + 1;
  return 1;
}

