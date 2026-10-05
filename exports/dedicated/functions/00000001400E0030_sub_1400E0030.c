/* Address: 0x1400e0030 | Name: sub_1400E0030 | Size: 72 bytes */
__int64 __fastcall sub_1400E0030(__int64 a1, int a2)
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
      v2 = (v2 >> 8) ^ dword_140147D00[(unsigned __int8)v2 ^ v4];
    }
  }
  return ~v2;
}

