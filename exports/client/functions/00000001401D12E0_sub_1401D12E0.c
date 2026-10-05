/* Address: 0x1401d12e0 | Name: sub_1401D12E0 | Size: 82 bytes */
__int64 __fastcall sub_1401D12E0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    *(float *)(a1 + 4LL * i) = (float)*(__int16 *)(a2 + 2LL * i);
    result = (unsigned int)(i - 1);
  }
  return result;
}

