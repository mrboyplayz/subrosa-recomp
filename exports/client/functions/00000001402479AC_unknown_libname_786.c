/* Address: 0x1402479ac | Name: unknown_libname_786 | Size: 84 bytes */
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_786()
{
  unsigned int *v0; // rcx
  bool v1; // dl
  unsigned __int16 v2; // ax

  v0 = &dword_140404A6C[19065282];
  v1 = 0;
  if ( *(_QWORD *)&dword_140404A6C[19065845] )
    v0 = *(unsigned int **)&dword_140404A6C[19065845];
  while ( 1 )
  {
    v2 = *(_WORD *)v0;
    if ( *(_WORD *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    v0 = (unsigned int *)((char *)v0 + 2);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 2);
    v2 = *(_WORD *)v0;
  }
  while ( *(_WORD *)v0 );
  return v0;
}

