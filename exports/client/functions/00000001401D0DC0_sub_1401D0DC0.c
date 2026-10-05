/* Address: 0x1401d0dc0 | Name: sub_1401D0DC0 | Size: 294 bytes */
__int64 __fastcall sub_1401D0DC0(__int64 a1, __int64 a2, float a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < (unsigned __int16)(a4 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * (i + 1)) = a3 * *(float *)(a2 + 4LL * (i + 1));
    *(float *)(a1 + 4LL * (i + 2)) = a3 * *(float *)(a2 + 4LL * (i + 2));
    *(float *)(a1 + 4LL * (i + 3)) = a3 * *(float *)(a2 + 4LL * (i + 3));
  }
  while ( 1 )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return result;
}

