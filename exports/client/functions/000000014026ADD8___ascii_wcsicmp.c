/* Address: 0x14026add8 | Name: __ascii_wcsicmp | Size: 62 bytes */
__int64 __fastcall _ascii_wcsicmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // r8d
  int v5; // edx
  int v6; // r9d
  int v7; // ecx
  __int64 result; // rax

  do
  {
    v4 = *a1++;
    v5 = *a2++;
    v6 = v4 + 32;
    if ( (unsigned int)(v4 - 65) > 0x19 )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned int)(v5 - 65) > 0x19 )
      v7 = v5;
    result = (unsigned int)(v6 - v7);
  }
  while ( !(_DWORD)result && v6 );
  return result;
}

