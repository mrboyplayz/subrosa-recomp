/* Address: 0x1400c8ad0 | Name: sub_1400C8AD0 | Size: 204 bytes */
__int64 __fastcall sub_1400C8AD0(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // r10d
  unsigned int v4; // edi
  int v7; // r11d
  int v8; // r9d
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // cl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 < 62 )
  {
    v8 = *a3;
    do
    {
      v9 = *(_BYTE *)(v3 + a2);
      if ( (unsigned __int8)(v9 - 97) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 65) <= 0x19u )
        break;
      if ( (unsigned __int8)(v9 - 48) <= 9u )
        break;
      if ( !v9 )
        break;
      *a3 = ++v3;
      v8 = v3;
    }
    while ( v3 < 62 );
    if ( v8 < 62 )
    {
      v10 = a1;
      do
      {
        v11 = *(_BYTE *)(v8 + a2);
        if ( (unsigned __int8)(v11 - 97) > 0x19u
          && (unsigned __int8)(v11 - 65) > 0x19u
          && (unsigned __int8)(v11 - 48) > 9u
          && v11 != 46 )
        {
          break;
        }
        *v10 = v11;
        ++v7;
        ++v10;
        v8 = *a3 + 1;
        *a3 = v8;
      }
      while ( v8 < 62 );
    }
  }
  a1[v7] = 0;
  LOBYTE(v4) = v7 > 0;
  return v4;
}

