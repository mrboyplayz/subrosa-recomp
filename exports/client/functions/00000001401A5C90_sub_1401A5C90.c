/* Address: 0x1401a5c90 | Name: sub_1401A5C90 | Size: 203 bytes */
__int64 __fastcall sub_1401A5C90(float a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  signed int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < a4 && *(float *)(a2 + 4LL * i) <= a1; ++i )
    ;
  if ( i > a5 && (float)(*(float *)(a2 + 4LL * a5) + *(float *)(a3 + 4LL * a5)) > a1 )
    i = a5;
  if ( i < a5 && a1 > (float)(*(float *)(a2 + 4LL * (a5 - 1)) - *(float *)(a3 + 4LL * (a5 - 1))) )
    return (unsigned int)a5;
  return (unsigned int)i;
}

