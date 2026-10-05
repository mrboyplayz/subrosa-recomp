/* Address: 0x140259c9c | Name: unknown_libname_885 | Size: 34 bytes */
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_885(__int64 *a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // rcx

  v1 = *a1;
  if ( v1 )
  {
    v2 = (_DWORD *)(v1 - 16);
    if ( *v2 == 56797 )
      free_base(v2);
  }
}

