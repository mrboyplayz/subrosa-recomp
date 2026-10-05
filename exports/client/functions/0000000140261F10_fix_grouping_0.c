/* Address: 0x140261f10 | Name: fix_grouping_0 | Size: 52 bytes */
char __fastcall fix_grouping_0(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rdx
  _BYTE *v3; // r8
  char v4; // cl

  result = *a1;
  v2 = a1;
  while ( result )
  {
    if ( (unsigned __int8)(result - 48) <= 9u )
    {
      *v2 = result - 48;
LABEL_4:
      ++v2;
      goto LABEL_5;
    }
    if ( result != 59 )
      goto LABEL_4;
    v3 = v2;
    do
    {
      v4 = v3[1];
      *v3++ = v4;
    }
    while ( v4 );
LABEL_5:
    result = *v2;
  }
  return result;
}

