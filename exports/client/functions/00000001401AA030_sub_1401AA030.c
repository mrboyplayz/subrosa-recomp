/* Address: 0x1401aa030 | Name: sub_1401AA030 | Size: 177 bytes */
__int64 __fastcall sub_1401AA030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v6 = 0.70710677 * *(float *)(a1 + 4LL * i);
    v5 = 0.70710677 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * i) = v6 + v5;
    *(float *)(a2 + 4LL * i) = v5 - v6;
  }
  return result;
}

