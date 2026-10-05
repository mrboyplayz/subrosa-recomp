/* Address: 0x14022206c | Name: unknown_libname_550 | Size: 83 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_550(__int64 a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int i; // r10d
  _BYTE *v5; // rcx

  v2 = *(_BYTE **)(a1 + 72);
  for ( i = 0; (int)i < a2; v2 = v5 + 1 )
  {
    if ( !*v2 )
      break;
    v5 = v2 + 1;
    if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * (unsigned __int8)*v2) & 0x8000) == 0 )
      v5 = v2;
    ++i;
  }
  return i;
}

