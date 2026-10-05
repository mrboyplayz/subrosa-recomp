/* Address: 0x140236378 | Name: unknown_libname_665 | Size: 44 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_665(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *a1;
  if ( v1 )
    return sub_14022389C(v1);
  *errno() = 22;
  sub_14024CF6C(v2);
  return 0;
}

