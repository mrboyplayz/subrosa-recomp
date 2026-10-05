/* Address: 0x1402625e4 | Name: wcspbrk | Size: 52 bytes */
#49 *__cdecl wcspbrk(const #49 *String, const #49 *Control)
{
  const #49 *v2; // r8
  __int16 v3; // ax

  while ( 1 )
  {
    if ( !*(_WORD *)String )
      return nullptr;
    v2 = Control;
    if ( *(_WORD *)Control )
      break;
LABEL_6:
    String = (const #49 *)((char *)String + 2);
  }
  v3 = *(_WORD *)Control;
  while ( v3 != *(_WORD *)String )
  {
    v2 = (const #49 *)((char *)v2 + 2);
    v3 = *(_WORD *)v2;
    if ( !*(_WORD *)v2 )
      goto LABEL_6;
  }
  return String;
}

