/* Address: 0x1401ba2f0 | Name: sub_1401BA2F0 | Size: 155 bytes */
__int64 __fastcall sub_1401BA2F0(__int64 a1, __int64 a2, unsigned int a3, float a4, float a5)
{
  float v5; // xmm0_4
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]

  v5 = sqrt(a4);
  v7 = 0;
  do
  {
    *(float *)(a2 + 4LL * v7) = (float)((float)(1.0 / v5) * a5) * (float)*(int *)(a1 + 4LL * v7);
    ++v7;
    result = a3;
  }
  while ( v7 < (int)a3 );
  return result;
}

