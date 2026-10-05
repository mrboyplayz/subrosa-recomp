/* Address: 0x1401d5b50 | Name: sub_1401D5B50 | Size: 676 bytes */
__int64 __fastcall sub_1401D5B50(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  double v14; // [rsp+28h] [rbp-20h]
  double v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v16 = a1 + 4LL * (a3 - 1);
  v14 = sub_1401D1050(v16, a2);
  v4 = v14;
  *a4 = v4;
  for ( i = 1; i < a3; ++i )
  {
    v14 = v14
        + (float)((float)(*(float *)(v16 + 4LL * -i) * *(float *)(v16 + 4LL * -i))
                - (float)(*(float *)(v16 + 4LL * (a2 - i)) * *(float *)(v16 + 4LL * (a2 - i))));
    v5 = v14;
    a4[i + a3 * i] = v5;
  }
  v17 = a1 + 4LL * (a3 - 2);
  for ( j = 1; ; ++j )
  {
    result = (unsigned int)a3;
    if ( j >= a3 )
      break;
    v15 = sub_1401D0EF0(v16, v17, a2);
    v7 = v15;
    a4[a3 * j] = v7;
    v8 = v15;
    a4[j] = v8;
    for ( k = 1; k < a3 - j; ++k )
    {
      v15 = v15
          + (float)((float)(*(float *)(v16 + 4LL * -k) * *(float *)(v17 + 4LL * -k))
                  - (float)(*(float *)(v16 + 4LL * (a2 - k)) * *(float *)(v17 + 4LL * (a2 - k))));
      v9 = v15;
      a4[k + a3 * (k + j)] = v9;
      v10 = v15;
      a4[k + j + a3 * k] = v10;
    }
    v17 -= 4;
  }
  return result;
}

