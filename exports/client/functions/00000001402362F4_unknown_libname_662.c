/* Address: 0x1402362f4 | Name: unknown_libname_662 | Size: 44 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_662(_QWORD *a1)
{
  __int64 v1; // rcx

  if ( *a1 && a1[3] )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v1);
  return 0;
}

