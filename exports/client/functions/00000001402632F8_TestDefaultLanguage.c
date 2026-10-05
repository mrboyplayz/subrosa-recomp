/* Address: 0x1402632f8 | Name: TestDefaultLanguage | Size: 119 bytes */
_BOOL8 __fastcall TestDefaultLanguage(__int64 a1, int a2, __int16 **a3)
{
  __int16 *v5; // r9
  int v6; // r8d
  __int16 *v7; // rcx
  __int16 v8; // dx
  __int64 v9; // rax

  if ( (unsigned int)TestDefaultCountry(a1) || !a2 )
    return 1;
  v5 = *a3;
  v6 = 0;
  v7 = *a3;
  if ( *a3 )
  {
    v8 = *v5;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int16)(v8 - 65) > 0x19u && (unsigned __int16)(v8 - 97) > 0x19u )
        break;
      v8 = *v7;
      ++v6;
    }
  }
  v9 = -1;
  do
    ++v9;
  while ( v5[v9] );
  return v6 != (_DWORD)v9;
}

