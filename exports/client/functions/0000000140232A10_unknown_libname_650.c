/* Address: 0x140232a10 | Name: unknown_libname_650 | Size: 153 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_650(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 < 0 )
    return 0;
  if ( v1 > 1 )
  {
    v2 = 8;
    if ( v1 <= 6 )
    {
LABEL_13:
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 > 5 )
      {
        v10 = v5 - 6;
        if ( !v10 )
          return v2;
        v11 = v10 - 1;
        if ( !v11 )
          return v2;
        v9 = v11 - 2;
        v8 = v9 == 0;
LABEL_19:
        if ( !v8 )
        {
          if ( v9 != 1 )
            return 0;
          return v2;
        }
        return 4;
      }
      if ( v5 == 5 )
        return v2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 1;
        v7 = v6 - 1;
        if ( v7 )
        {
          v9 = v7 - 1;
          v8 = v9 == 0;
          goto LABEL_19;
        }
        return 2;
      }
      return 4;
    }
    if ( v1 == 7 )
    {
      v4 = *(_DWORD *)(a1 + 40);
      if ( v4 )
      {
        if ( v4 != 3 && v4 != 8 )
          return 0;
        return v2;
      }
      return 4;
    }
    if ( v1 != 8 )
    {
      if ( v1 != 9 )
        return 0;
      goto LABEL_13;
    }
  }
  return (*(_BYTE *)(a1 + 44) != 0) + 1LL;
}

