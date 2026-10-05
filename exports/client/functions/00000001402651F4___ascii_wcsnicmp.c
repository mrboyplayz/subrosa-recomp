/* Address: 0x1402651f4 | Name: __ascii_wcsnicmp | Size: 75 bytes */
__int64 __fastcall _ascii_wcsnicmp(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // edx
  int v8; // r9d
  int v9; // ecx

  if ( !a3 )
    return 0;
  do
  {
    v6 = *a1++;
    v7 = *a2++;
    v8 = v6 + 32;
    if ( (unsigned int)(v6 - 65) > 0x19 )
      v8 = v6;
    v9 = v7 + 32;
    if ( (unsigned int)(v7 - 65) > 0x19 )
      v9 = v7;
    result = (unsigned int)(v8 - v9);
    if ( (_DWORD)result )
      break;
    if ( !v8 )
      break;
    --a3;
  }
  while ( a3 );
  return result;
}

