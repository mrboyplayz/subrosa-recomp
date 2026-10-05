/* Address: 0x14023cfb4 | Name: unknown_libname_722 | Size: 74 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_722(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1[2] )
      ((void (*)(void))CloseHandle)();
    if ( v1[3] )
      ((void (*)(void))FreeLibrary)();
    free_base(v1);
  }
  *a1 = nullptr;
}

