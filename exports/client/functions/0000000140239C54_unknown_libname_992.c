/* Address: 0x140239c54 | Name: unknown_libname_992 | Size: 49 bytes */
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_992(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
}

