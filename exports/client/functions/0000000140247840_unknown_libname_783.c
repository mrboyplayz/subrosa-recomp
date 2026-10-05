/* Address: 0x140247840 | Name: unknown_libname_783 | Size: 112 bytes */
// Microsoft VisualC 64bit universal runtime
unsigned int *unknown_libname_783()
{
  unsigned int *v0; // rbx
  bool v1; // di
  unsigned __int8 v2; // al

  sub_14025F520();
  v0 = &dword_140404A6C[19065281];
  if ( *(_QWORD *)&dword_140404A6C[19065843] )
    v0 = *(unsigned int **)&dword_140404A6C[19065843];
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_BYTE *)v0;
    if ( *(_BYTE *)v0 <= 0x20u )
    {
      if ( !v2 )
        return v0;
      if ( !v1 )
        break;
    }
    if ( v2 == 34 )
      v1 = !v1;
    if ( ismbblead(v2) )
      v0 = (unsigned int *)((char *)v0 + 1);
    v0 = (unsigned int *)((char *)v0 + 1);
  }
  do
  {
    if ( v2 > 0x20u )
      break;
    v0 = (unsigned int *)((char *)v0 + 1);
    v2 = *(_BYTE *)v0;
  }
  while ( *(_BYTE *)v0 );
  return v0;
}

