/* Address: 0x1402625a4 | Name: sub_1402625A4 | Size: 63 bytes */
__int64 __fastcall MEMORY[0x1402625A4](_WORD *a1, _WORD *a2)
{
  bool v3; // zf
  _WORD *v4; // rax
  _WORD *v5; // r9
  __int16 v6; // dx

  v3 = *a1 == 0;
  v4 = a1;
  while ( !v3 )
  {
    v5 = a2;
    if ( *a2 )
    {
      v6 = *a2;
      while ( *v4 != v6 )
      {
        v6 = *++v5;
        if ( !*v5 )
          goto LABEL_7;
      }
      return v4 - a1;
    }
LABEL_7:
    v3 = *++v4 == 0;
  }
  return v4 - a1;
}

