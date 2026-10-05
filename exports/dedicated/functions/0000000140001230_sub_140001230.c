/* Address: 0x140001230 | Name: sub_140001230 | Size: 146 bytes */
__int64 __fastcall sub_140001230(char *Str1)
{
  __int64 v2; // rax
  int v3; // ebx
  size_t v4; // rsi

  v2 = -1;
  do
    ++v2;
  while ( Str1[v2] );
  if ( (int)v2 > 24 )
    LODWORD(v2) = 24;
  v3 = 0;
  if ( dword_16DDCBA24 <= 0 )
    return 0;
  v4 = (int)v2;
  while ( strncmp(Str1, (const char *)&unk_16DDCBA40 + 112 * v3, v4) )
  {
    if ( ++v3 >= dword_16DDCBA24 )
      return 0;
  }
  return 1;
}

