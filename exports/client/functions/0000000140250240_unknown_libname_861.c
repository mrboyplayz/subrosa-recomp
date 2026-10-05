/* Address: 0x140250240 | Name: unknown_libname_861 | Size: 75 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_861(FILE *Stream)
{
  int v3; // eax

  if ( !Stream )
    return sub_1402500F4(0);
  if ( (unsigned int)sub_1402501C4(Stream) )
    return 0xFFFFFFFFLL;
  if ( (*((_DWORD *)Stream + 5) & 0x800) != 0 )
  {
    v3 = fileno(Stream);
    if ( commit(v3) )
      return 0xFFFFFFFFLL;
  }
  return 0;
}

