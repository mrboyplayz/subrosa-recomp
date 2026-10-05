/* Address: 0x14021c14c | Name: sub_14021C14C | Size: 80 bytes */
char __fastcall sub_14021C14C(__int64 a1)
{
  char result; // al
  int v3; // ecx

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 52));
  result = sub_1402224A8(a1);
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

