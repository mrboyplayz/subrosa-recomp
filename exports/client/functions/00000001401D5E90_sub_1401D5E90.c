/* Address: 0x1401d5e90 | Name: sub_1401D5E90 | Size: 437 bytes */
__int64 __fastcall sub_1401D5E90(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  float v6; // [rsp+4h] [rbp-24h]
  float v7; // [rsp+8h] [rbp-20h]
  float v8; // [rsp+10h] [rbp-18h]

  v8 = 2.0 - (float)((float)(3.1415927 / (float)(int)(a4 + 1)) * (float)(3.1415927 / (float)(int)(a4 + 1)));
  if ( a3 >= 2 )
  {
    v6 = 1.0;
    v7 = 0.5 * v8;
  }
  else
  {
    v6 = 0.0;
    v7 = 3.1415927 / (float)(int)(a4 + 1);
  }
  for ( i = 0; ; i += 4 )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    *(float *)(a1 + 4LL * i) = (float)(*(float *)(a2 + 4LL * i) * 0.5) * (float)(v6 + v7);
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a2 + 4LL * (i + 1)) * v7;
    v6 = (float)(v8 * v7) - v6;
    *(float *)(a1 + 4LL * (i + 2)) = (float)(*(float *)(a2 + 4LL * (i + 2)) * 0.5) * (float)(v7 + v6);
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a2 + 4LL * (i + 3)) * v6;
    v7 = (float)(v8 * v6) - v7;
  }
  return result;
}

