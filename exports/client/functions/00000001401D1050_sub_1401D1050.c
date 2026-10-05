/* Address: 0x1401d1050 | Name: sub_1401D1050 | Size: 327 bytes */
double __fastcall sub_1401D1050(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-18h]
  double v4; // [rsp+8h] [rbp-10h]

  v4 = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
    v4 = v4
       + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a1 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a1 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a1 + 4LL * (i + 3));
  while ( i < a2 )
  {
    v4 = v4 + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i);
    ++i;
  }
  return v4;
}

