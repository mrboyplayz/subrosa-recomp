/* Address: 0x140179870 | Name: sub_140179870 | Size: 209 bytes */
__int64 __fastcall sub_140179870(__int64 a1, __int64 a2)
{
  int v2; // edx
  _BYTE *v3; // rcx
  unsigned __int8 *v4; // r8

  if ( (unsigned int)sub_140181710(a1, a2, a1) )
    return (unsigned int)-(v2 != 0);
  if ( *v3 == 116
    && v3[1] == 116
    && v3[2] == 99
    && v3[3] == 102
    && ((v4[7] - 0x10000 + (v4[4] << 24) + (v4[6] << 8) + ((unsigned __int8)v3[5] << 16)) & 0xFFFEFFFF) == 0
    && v2 < v4[11] + ((v4[10] + ((v4[9] + (v4[8] << 8)) << 8)) << 8) )
  {
    return v4[4 * v2 + 15] + ((v4[4 * v2 + 14] + ((v4[4 * v2 + 13] + (v4[4 * v2 + 12] << 8)) << 8)) << 8);
  }
  return 0xFFFFFFFFLL;
}

