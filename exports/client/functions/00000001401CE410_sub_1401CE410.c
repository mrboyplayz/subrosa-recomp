/* Address: 0x1401ce410 | Name: sub_1401CE410 | Size: 290 bytes */
__int64 __fastcall sub_1401CE410(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int j; // [rsp+4h] [rbp-24h]
  float v6; // [rsp+8h] [rbp-20h]
  float v7; // [rsp+Ch] [rbp-1Ch]
  float v8; // [rsp+10h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v6 = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v7 = *(float *)(a1 + 4LL * j);
      v8 = *(float *)(a1 + 4LL * (i - j - 1));
      *(float *)(a1 + 4LL * j) = v7 + (float)(v8 * v6);
      *(float *)(a1 + 4LL * (i - j - 1)) = v8 + (float)(v7 * v6);
    }
    *(float *)(a1 + 4LL * i) = -v6;
  }
  return result;
}

