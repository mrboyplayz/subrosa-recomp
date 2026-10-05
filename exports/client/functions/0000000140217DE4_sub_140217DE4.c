/* Address: 0x140217de4 | Name: sub_140217DE4 | Size: 112 bytes */
char __fastcall sub_140217DE4(__int64 a1)
{
  __int64 v3; // rcx

  if ( (unsigned __int8)unknown_libname_498(a1, 0) )
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
  else
  {
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0;
  }
}

