/* Address: 0x1401dee00 | Name: sub_1401DEE00 | Size: 814 bytes */
__int64 __fastcall sub_1401DEE00(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 16; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    v5 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2)
                                                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                               * a2[2]))
                                                                               + (float)(*(float *)(a3
                                                                                                  + 4LL * (i - 1)
                                                                                                  - 12)
                                                                                       * a2[3]))
                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 16)
                                                                               * a2[4]))
                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]))
                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]))
                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 40) * a2[10]))
               + (float)(*(float *)(a3 + 4LL * (i - 1) - 44) * a2[11]))
       + (float)(*(float *)(a3 + 4LL * (i - 1) - 48) * a2[12]);
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)(v5 + (float)(*(float *)(a3 + 4LL * (i - 1) - 52) * a2[13]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 56) * a2[14]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 60) * a2[15]));
  }
  return result;
}

