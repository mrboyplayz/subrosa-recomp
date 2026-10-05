/* Address: 0x140072030 | Name: sub_140072030 | Size: 173 bytes */
__int64 __fastcall sub_140072030(_BYTE *a1, __int64 a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  int v6; // r10d
  char v7; // dl
  __int64 v8; // rdx
  char v9; // al

  v3 = *a3;
  v4 = 0;
  if ( *a3 < 62 )
  {
    v6 = *a3;
    do
    {
      if ( *(_BYTE *)(v6 + a2) != 32 )
        break;
      *a3 = ++v6;
      v3 = v6;
    }
    while ( v6 < 62 );
  }
  v7 = *(_BYTE *)(v3 + a2);
  if ( (unsigned __int8)(v7 - 97) <= 0x19u || (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 48) <= 9u )
  {
    *a1 = 0;
  }
  else
  {
    if ( v7 && v3 < 62 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= 2 )
          break;
        v9 = *(_BYTE *)(v3 + a2);
        if ( !v9 )
          break;
        a1[v8] = v9;
        ++v4;
        ++v8;
        v3 = *a3 + 1;
        *a3 = v3;
      }
      while ( v3 < 62 );
    }
    a1[v4] = 0;
    if ( v4 > 0 )
      return 1;
  }
  return 0;
}

