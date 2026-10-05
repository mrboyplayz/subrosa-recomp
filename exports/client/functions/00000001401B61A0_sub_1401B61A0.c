/* Address: 0x1401b61a0 | Name: sub_1401B61A0 | Size: 1175 bytes */
__int64 __fastcall sub_1401B61A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+4h] [rbp-24h]
  __int64 v5; // [rsp+8h] [rbp-20h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v5 = *(_QWORD *)(a1 + 32);
    *(float *)(a1 + 32) = *(float *)a1 - *(float *)&v5;
    *(float *)(a1 + 36) = *(float *)(a1 + 4) - *((float *)&v5 + 1);
    *(float *)a1 = *(float *)a1 + *(float *)&v5;
    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *((float *)&v5 + 1);
    *(float *)&v5 = (float)(*(float *)(a1 + 40) + *(float *)(a1 + 44)) * 0.70710677;
    *((float *)&v5 + 1) = (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * 0.70710677;
    *(float *)(a1 + 40) = *(float *)(a1 + 8) - *(float *)&v5;
    *(float *)(a1 + 44) = *(float *)(a1 + 12) - *((float *)&v5 + 1);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)&v5;
    *(float *)(a1 + 12) = *(float *)(a1 + 12) + *((float *)&v5 + 1);
    LODWORD(v5) = *(_DWORD *)(a1 + 52);
    *((float *)&v5 + 1) = -*(float *)(a1 + 48);
    *(float *)(a1 + 48) = *(float *)(a1 + 16) - *(float *)&v5;
    *(float *)(a1 + 52) = *(float *)(a1 + 20) - *((float *)&v5 + 1);
    *(float *)(a1 + 16) = *(float *)(a1 + 16) + *(float *)&v5;
    *(float *)(a1 + 20) = *(float *)(a1 + 20) + *((float *)&v5 + 1);
    *(float *)&v5 = (float)(*(float *)(a1 + 60) - *(float *)(a1 + 56)) * 0.70710677;
    *((float *)&v5 + 1) = (float)-(float)(*(float *)(a1 + 60) + *(float *)(a1 + 56)) * 0.70710677;
    *(float *)(a1 + 56) = *(float *)(a1 + 24) - *(float *)&v5;
    *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&v5 + 1);
    *(float *)(a1 + 24) = *(float *)(a1 + 24) + *(float *)&v5;
    *(float *)(a1 + 28) = *(float *)(a1 + 28) + *((float *)&v5 + 1);
    a1 += 64;
  }
  return result;
}

