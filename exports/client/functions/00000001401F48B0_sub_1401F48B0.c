/* Address: 0x1401f48b0 | Name: sub_1401F48B0 | Size: 584 bytes */
__int64 __fastcall sub_1401F48B0(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int j; // [rsp+0h] [rbp-28h]
  int k; // [rsp+0h] [rbp-28h]
  int v13; // [rsp+4h] [rbp-24h]
  int v14; // [rsp+8h] [rbp-20h]
  int v15; // [rsp+Ch] [rbp-1Ch]
  float v16; // [rsp+10h] [rbp-18h]
  float v17; // [rsp+14h] [rbp-14h]

  v13 = 48000 / a9;
  v15 = a5 / (48000 / a9);
  if ( a7 == 1 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v16 = *(float *)(a8 + 4LL * v13 * i) * *(float *)(a8 + 4LL * v13 * i);
      *(float *)(a2 + 4LL * i) = (float)((float)(v16 * a4) + (float)((float)(1.0 - v16) * a3))
                               * *(float *)(a1 + 4LL * i);
    }
  }
  else
  {
    for ( j = 0; j < v15; ++j )
    {
      v17 = *(float *)(a8 + 4LL * v13 * j) * *(float *)(a8 + 4LL * v13 * j);
      *(float *)(a2 + 8LL * j) = (float)((float)(v17 * a4) + (float)((float)(1.0 - v17) * a3))
                               * *(float *)(a1 + 8LL * j);
      *(float *)(a2 + 4LL * (2 * j + 1)) = (float)((float)(v17 * a4) + (float)((float)(1.0 - v17) * a3))
                                         * *(float *)(a1 + 4LL * (2 * j + 1));
    }
  }
  v14 = 0;
  do
  {
    for ( k = a5 / (48000 / a9); k < a6; ++k )
      *(float *)(a2 + 4LL * (int)(v14 + a7 * k)) = a4 * *(float *)(a1 + 4LL * (int)(v14 + a7 * k));
    ++v14;
    result = a7;
  }
  while ( v14 < (int)a7 );
  return result;
}

