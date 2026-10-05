/* Address: 0x1402182d8 | Name: sub_1402182D8 | Size: 92 bytes */
char __fastcall sub_1402182D8(__int64 a1)
{
  char result; // al

  result = unknown_libname_498(a1, 0);
  if ( result )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_207((unsigned int)*(char *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  return result;
}

