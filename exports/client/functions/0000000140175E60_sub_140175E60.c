/* Address: 0x140175e60 | Name: sub_140175E60 | Size: 72 bytes */
__int64 __fastcall sub_140175E60(__int64 a1, int a2)
{
  unsigned int v2; // eax
  __int64 i; // r10
  unsigned __int64 v4; // r9

  v2 = -1;
  if ( a2 > 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v4 = *(unsigned __int8 *)(i + a1);
      v2 = (v2 >> 8) ^ dword_140301980[(unsigned __int8)v2 ^ v4];
    }
  }
  return ~v2;
}

