/* Address: 0x140001e30 | Name: sub_140001E30 | Size: 145 bytes */
__int64 __fastcall sub_140001E30(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rsi

  v2 = -1;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  if ( (int)v2 > 24 )
    LODWORD(v2) = 24;
  v3 = 0;
  if ( (int)dword_140404A6C[134050358] <= 0 )
    return 0;
  v4 = (int)v2;
  while ( (unsigned int)strncmp(a1, &dword_140404A6C[28 * v3 + 134050365], v4) )
  {
    if ( ++v3 >= (int)dword_140404A6C[134050358] )
      return 0;
  }
  return 1;
}

