/* Address: 0x1401f4640 | Name: sub_1401F4640 | Size: 611 bytes */
__int64 __fastcall sub_1401F4640(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  float v11; // [rsp+4h] [rbp-24h]
  float v12; // [rsp+8h] [rbp-20h]
  float v13; // [rsp+10h] [rbp-18h]
  float v14; // [rsp+48h] [rbp+20h]

  v14 = 1.0 - a4;
  for ( i = 0; i < a5 / (48000 / a9); ++i )
  {
    v13 = *(float *)(a8 + 4LL * 48000 / a9 * i) * *(float *)(a8 + 4LL * 48000 / a9 * i);
    v11 = (float)((float)(v13 * v14) + (float)((float)(1.0 - v13) * (float)(1.0 - a3)))
        * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - v11;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + v11;
  }
  while ( 1 )
  {
    result = (unsigned int)a6;
    if ( i >= a6 )
      break;
    v12 = v14 * (float)(0.5 * (float)(*(float *)(a1 + 4LL * a7 * i) - *(float *)(a1 + 4LL * (a7 * i + 1))));
    *(float *)(a2 + 4LL * a7 * i) = *(float *)(a2 + 4LL * a7 * i) - v12;
    *(float *)(a2 + 4LL * (a7 * i + 1)) = *(float *)(a2 + 4LL * (a7 * i + 1)) + v12;
    ++i;
  }
  return result;
}

