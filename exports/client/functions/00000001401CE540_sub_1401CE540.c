/* Address: 0x1401ce540 | Name: sub_1401CE540 | Size: 140 bytes */
__int64 __fastcall sub_1401CE540(__int64 a1, __int64 a2, signed int a3, signed int a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  int i; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+20h]

  v10 = a4;
  if ( a4 > a3 )
    v10 = a3;
  for ( i = 0; ; ++i )
  {
    result = v10;
    if ( i >= (int)v10 )
      break;
    v5 = sub_1401D0EF0(a2, a2 + 4LL * i, (unsigned int)(a3 - i));
    *(float *)(a1 + 4LL * i) = v5;
  }
  return result;
}

