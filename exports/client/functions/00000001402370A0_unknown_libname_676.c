/* Address: 0x1402370a0 | Name: unknown_libname_676 | Size: 38 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
unsigned __int64 __fastcall unknown_libname_676(unsigned __int64 a1, int a2)
{
  unsigned __int64 result; // rax
  _DWORD *v3; // rdi
  __int64 i; // rcx

  result = a1 + 4;
  if ( a1 < a1 + 4 )
  {
    v3 = (_DWORD *)a1;
    result = a2;
    for ( i = a1 < a1 + 4; i; --i )
      *v3++ = a2;
  }
  return result;
}

