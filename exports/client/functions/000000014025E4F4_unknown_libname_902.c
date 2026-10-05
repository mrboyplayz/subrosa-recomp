/* Address: 0x14025e4f4 | Name: unknown_libname_902 | Size: 61 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_902(void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( *a1 != a1[1] )
  {
    do
      free_base(*v1++);
    while ( v1 != a1[1] );
    v1 = *a1;
  }
  free_base(v1);
}

