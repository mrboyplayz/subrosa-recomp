/* Address: 0x140218c50 | Name: sub_140218C50 | Size: 74 bytes */
char __fastcall sub_140218C50(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 65) != 42 )
    return unknown_libname_454(a1, (_DWORD *)(a1 + 56));
  result = sub_140222958(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

