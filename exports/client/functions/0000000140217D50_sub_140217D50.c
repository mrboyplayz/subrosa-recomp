/* Address: 0x140217d50 | Name: sub_140217D50 | Size: 148 bytes */
char __fastcall sub_140217D50(__int64 a1)
{
  int v1; // eax
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( v1 == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( (unsigned __int8)unknown_libname_497(a1, 0) )
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
  *errno() = 22;
  sub_14024CF6C(v4);
  return 0;
}

