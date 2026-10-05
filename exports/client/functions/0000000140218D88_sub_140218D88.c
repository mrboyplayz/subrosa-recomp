/* Address: 0x140218d88 | Name: sub_140218D88 | Size: 75 bytes */
char __fastcall sub_140218D88(__int64 a1)
{
  char result; // al

  if ( *(_WORD *)(a1 + 66) != 42 )
    return unknown_libname_460(a1, (_DWORD *)(a1 + 56));
  result = sub_140222B88(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1) && *(int *)(a1 + 56) < 0 )
      *(_DWORD *)(a1 + 56) = -1;
    return 1;
  }
  return result;
}

