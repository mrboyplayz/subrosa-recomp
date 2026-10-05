/* Address: 0x1401d0ef0 | Name: sub_1401D0EF0 | Size: 333 bytes */
double __fastcall sub_1401D0EF0(__int64 a1, __int64 a2, int a3)
{
  int i; // [rsp+0h] [rbp-18h]
  double v5; // [rsp+8h] [rbp-10h]

  v5 = 0.0;
  for ( i = 0; i < a3 - 3; i += 4 )
    v5 = v5
       + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a2 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a2 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a2 + 4LL * (i + 3));
  while ( i < a3 )
  {
    v5 = v5 + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return v5;
}

