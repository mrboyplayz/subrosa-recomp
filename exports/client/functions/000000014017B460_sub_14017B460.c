/* Address: 0x14017b460 | Name: sub_14017B460 | Size: 136 bytes */
__int64 __fastcall sub_14017B460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rdx
  _BYTE *v4; // rcx

  if ( (unsigned int)sub_140181710(a1, a1, a3) )
    return 1;
  if ( *v4 == 116
    && v4[1] == 116
    && v4[2] == 99
    && v4[3] == 102
    && ((v3[7] - 0x10000 + (v3[4] << 24) + (v3[6] << 8) + ((unsigned __int8)v4[5] << 16)) & 0xFFFEFFFF) == 0 )
  {
    return v3[11] + ((v3[10] + ((v3[9] + (v3[8] << 8)) << 8)) << 8);
  }
  return 0;
}

