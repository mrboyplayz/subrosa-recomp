/* Address: 0x14025e4d0 | Name: unknown_libname_901 | Size: 34 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_901(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 != -1 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))FindClose)(*a1);
    *a1 = -1;
  }
  return result;
}

