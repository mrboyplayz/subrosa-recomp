/* Address: 0x14021c2c0 | Name: sub_14021C2C0 | Size: 81 bytes */
char __fastcall sub_14021C2C0(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 52));
  result = sub_1402226D8(a1);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) |= 4u;
        *(_DWORD *)(a1 + 52) = -v3;
      }
    }
    return 1;
  }
  return result;
}

