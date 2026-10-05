/* Address: 0x1401dff50 | Name: sub_1401DFF50 | Size: 185 bytes */
__int64 __fastcall sub_1401DFF50(__int64 a1, float *a2, float a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < a4; ++i )
    *(float *)(a1 + 4LL * (i + a4 * i)) = *(float *)(a1 + 4LL * (i + a4 * i)) + a3;
  *a2 = *a2 + a3;
  return 0;
}

