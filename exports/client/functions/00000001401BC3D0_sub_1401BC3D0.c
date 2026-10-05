/* Address: 0x1401bc3d0 | Name: sub_1401BC3D0 | Size: 231 bytes */
__int64 __fastcall sub_1401BC3D0(int a1)
{
  int v2; // eax
  int v3; // [rsp+0h] [rbp-18h]

  if ( a1 < 0 )
    return 0;
  if ( a1 >= 3967 )
    return 0x7FFFFFFF;
  v3 = 1 << (a1 >> 7);
  if ( a1 >= 2048 )
    v2 = (((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * (v3 >> 7);
  else
    v2 = (int)((((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * v3) >> 7;
  return (unsigned int)(v2 + v3);
}

