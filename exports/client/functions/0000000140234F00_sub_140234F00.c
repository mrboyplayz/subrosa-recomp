/* Address: 0x140234f00 | Name: sub_140234F00 | Size: 420 bytes */
char __fastcall MEMORY[0x140234F00](__int64 a1)
{
  unsigned __int8 *v1; // r8
  unsigned __int8 v3; // al
  int v5; // r9d
  int v6; // ecx
  int v7; // ecx

  v1 = *(unsigned __int8 **)(a1 + 8);
  v3 = *v1;
  if ( *v1 > 0x64u )
  {
    if ( v3 <= 0x67u )
      goto LABEL_50;
    switch ( v3 )
    {
      case 'i':
LABEL_49:
        *(_DWORD *)(a1 + 48) = 2;
        goto LABEL_51;
      case 'n':
        *(_DWORD *)(a1 + 48) = 9;
        goto LABEL_51;
      case 'o':
        *(_DWORD *)(a1 + 48) = 4;
        goto LABEL_51;
      case 'p':
        *(_DWORD *)(a1 + 40) = 10;
        break;
      case 's':
        goto LABEL_40;
      case 'u':
        *(_DWORD *)(a1 + 48) = 5;
        goto LABEL_51;
      case 'x':
        break;
      default:
        goto LABEL_10;
    }
    goto LABEL_38;
  }
  if ( *v1 == 100 )
  {
    *(_DWORD *)(a1 + 48) = 3;
LABEL_51:
    *(_QWORD *)(a1 + 8) = v1 + 1;
    return 1;
  }
  if ( v3 <= 0x53u )
  {
    if ( v3 != 83 )
    {
      if ( v3 == 65 )
        goto LABEL_50;
      if ( v3 != 67 )
      {
        if ( v3 <= 0x44u )
        {
LABEL_10:
          *(_QWORD *)(a1 + 16) = 22;
          *(_WORD *)(a1 + 24) = 0;
          *(_BYTE *)(a1 + 26) = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          *(_BYTE *)(a1 + 44) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          return 0;
        }
        if ( v3 > 0x47u )
        {
          if ( v3 != 73 )
            goto LABEL_10;
          goto LABEL_49;
        }
LABEL_50:
        *(_DWORD *)(a1 + 48) = 7;
        goto LABEL_51;
      }
LABEL_15:
      if ( !*(_QWORD *)(a1 + 32) )
        *(_QWORD *)(a1 + 32) = 1;
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((v5 - 3) & 0xFFFFFFFA) == 0 && v5 != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = v1 + 1;
      return 1;
    }
LABEL_40:
    v7 = *(_DWORD *)(a1 + 40);
    if ( v7 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((v7 - 3) & 0xFFFFFFFA) == 0 && v7 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = v1 + 1;
    return 1;
  }
  if ( v3 == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( v3 != 91 )
  {
    if ( v3 == 97 )
      goto LABEL_50;
    if ( v3 != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((v6 - 3) & 0xFFFFFFFA) == 0 && v6 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = v1 + 1;
  return sub_140235928(a1);
}

