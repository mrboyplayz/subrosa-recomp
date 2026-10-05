/* Address: 0x1401e2ef0 | Name: sub_1401E2EF0 | Size: 123 bytes */
__int64 __fastcall sub_1401E2EF0(_BYTE *a1, int a2)
{
  if ( a2 < 1 )
    return 0xFFFFFFFFLL;
  if ( (*a1 & 3) == 0 )
    return 1;
  if ( (*a1 & 3) != 3 )
    return 2;
  if ( a2 >= 2 )
    return a1[1] & 0x3F;
  return 4294967292LL;
}

