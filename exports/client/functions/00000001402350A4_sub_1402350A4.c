/* Address: 0x1402350a4 | Name: sub_1402350A4 | Size: 477 bytes */
char __fastcall MEMORY[0x1402350A4](__int64 a1)
{
  _WORD *v1; // r8
  int v4; // r9d
  int v5; // ecx
  int v6; // ecx

  v1 = *(_WORD **)(a1 + 8);
  if ( *v1 > 0x64u )
  {
    if ( *v1 <= 0x67u )
      goto LABEL_50;
    switch ( *v1 )
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
  if ( *v1 <= 0x53u )
  {
    if ( *v1 != 83 )
    {
      if ( *v1 == 65 )
        goto LABEL_50;
      if ( *v1 != 67 )
      {
        if ( *v1 <= 0x44u )
        {
LABEL_10:
          *(_QWORD *)(a1 + 16) = 22;
          *(_DWORD *)(a1 + 24) = 0;
          *(_BYTE *)(a1 + 28) = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          *(_BYTE *)(a1 + 44) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          return 0;
        }
        if ( *v1 > 0x47u )
        {
          if ( *v1 != 73 )
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
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 == 2 )
        *(_BYTE *)(a1 + 44) = 0;
      if ( ((v4 - 3) & 0xFFFFFFFA) == 0 && v4 != 7 )
        *(_BYTE *)(a1 + 44) = 1;
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 8) = v1 + 1;
      return 1;
    }
LABEL_40:
    v6 = *(_DWORD *)(a1 + 40);
    if ( v6 == 2 )
      *(_BYTE *)(a1 + 44) = 0;
    if ( ((v6 - 3) & 0xFFFFFFFA) == 0 && v6 != 7 )
      *(_BYTE *)(a1 + 44) = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 8) = v1 + 1;
    return 1;
  }
  if ( *v1 == 88 )
  {
LABEL_38:
    *(_DWORD *)(a1 + 48) = 6;
    goto LABEL_51;
  }
  if ( *v1 != 91 )
  {
    if ( *v1 == 97 )
      goto LABEL_50;
    if ( *v1 != 99 )
      goto LABEL_10;
    goto LABEL_15;
  }
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 == 2 )
    *(_BYTE *)(a1 + 44) = 0;
  if ( ((v5 - 3) & 0xFFFFFFFA) == 0 && v5 != 7 )
    *(_BYTE *)(a1 + 44) = 1;
  *(_DWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 8) = v1 + 1;
  return sub_140235ADC(a1);
}

