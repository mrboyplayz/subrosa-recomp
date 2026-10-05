/* Address: 0x1401d0c90 | Name: sub_1401D0C90 | Size: 289 bytes */
__int64 __fastcall sub_1401D0C90(__int64 a1, float a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < (unsigned __int16)(a3 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a1 + 4LL * (i + 1)) * a2;
    *(float *)(a1 + 4LL * (i + 2)) = *(float *)(a1 + 4LL * (i + 2)) * a2;
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a1 + 4LL * (i + 3)) * a2;
  }
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    ++i;
  }
  return result;
}

