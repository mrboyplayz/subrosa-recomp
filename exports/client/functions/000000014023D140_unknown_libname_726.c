/* Address: 0x14023d140 | Name: unknown_libname_726 | Size: 74 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_726(_QWORD **a1)
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

