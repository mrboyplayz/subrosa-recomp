/* Address: 0x14024b2e8 | Name: unknown_libname_811 | Size: 34 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_811(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
}

