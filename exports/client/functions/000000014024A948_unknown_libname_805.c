/* Address: 0x14024a948 | Name: unknown_libname_805 | Size: 114 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_805(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax

  v3 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned __int64)v3 > *(_QWORD *)(a2 + 24) )
    {
      if ( *(_BYTE *)(a2 + 40) )
        *(_BYTE *)(a2 + 40) = 0;
      *errno() = 34;
      *(_BYTE *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v3;
    }
  }
  else
  {
    v5 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v5);
    return (unsigned int)*errno();
  }
  return v4;
}

