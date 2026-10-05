/* Address: 0x1401a27f0 | Name: sub_1401A27F0 | Size: 56 bytes */
__int64 __fastcall sub_1401A27F0(int a1)
{
  if ( a1 >= 8 )
    return (unsigned int)(((a1 & 7) + 8) << ((a1 >> 3) - 1));
  else
    return (unsigned int)a1;
}

