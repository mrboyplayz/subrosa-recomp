/* Address: 0x1401cde70 | Name: sub_1401CDE70 | Size: 160 bytes */
__int64 __fastcall sub_1401CDE70(__int64 a1, int a2, float a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * v5;
    v5 = v5 * a3;
  }
  result = a2 - 1;
  *(float *)(a1 + 4 * result) = *(float *)(a1 + 4 * result) * v5;
  return result;
}

