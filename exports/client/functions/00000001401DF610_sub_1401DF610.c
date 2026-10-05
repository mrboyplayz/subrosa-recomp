/* Address: 0x1401df610 | Name: sub_1401DF610 | Size: 470 bytes */
__int64 __fastcall sub_1401DF610(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 8; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1))
                                                                                             * *a2)
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 4)
                                                                                             * a2[1]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                     * a2[2]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12)
                                                                             * a2[3]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]));
  }
  return result;
}

