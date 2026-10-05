/* Address: 0x1401c2f40 | Name: sub_1401C2F40 | Size: 128 bytes */
__int64 __fastcall sub_1401C2F40(__int64 a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_WORD *)(a1 + 2LL * i) = ((a4 * (__int16)(*(_WORD *)(a3 + 2LL * i) - *(_WORD *)(a2 + 2LL * i))) >> 2)
                             + *(_WORD *)(a2 + 2LL * i);
  }
  return result;
}

