/* Address: 0x1401dfa30 | Name: sub_1401DFA30 | Size: 986 bytes */
float __fastcall sub_1401DFA30(float *a1, float a2, float a3, int a4)
{
  float result; // xmm0_4
  float v5; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int m; // [rsp+20h] [rbp-28h]
  int n; // [rsp+20h] [rbp-28h]
  int ii; // [rsp+20h] [rbp-28h]
  int jj; // [rsp+20h] [rbp-28h]
  int kk; // [rsp+20h] [rbp-28h]
  float v13; // [rsp+24h] [rbp-24h]
  float v14; // [rsp+24h] [rbp-24h]
  float v15; // [rsp+28h] [rbp-20h]
  int k; // [rsp+2Ch] [rbp-1Ch]
  int v17; // [rsp+34h] [rbp-14h]

  v17 = 0;
  for ( i = a4 - 1; i > 0; --i )
    a1[i - 1] = a1[i - 1] - (float)(a2 * a1[i]);
  result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
  v13 = result;
  for ( j = 0; j < a4; ++j )
  {
    result = a1[j] * v13;
    a1[j] = result;
  }
  for ( k = 0; k < 10; ++k )
  {
    v15 = -1.0;
    for ( m = 0; m < a4; ++m )
    {
      v5 = sub_140244390();
      if ( v5 > v15 )
      {
        v15 = v5;
        v17 = m;
      }
    }
    result = a3;
    if ( a3 >= v15 )
      break;
    for ( n = 1; n < a4; ++n )
      a1[n - 1] = a1[n - 1] + (float)(a2 * a1[n]);
    v14 = 1.0 / v13;
    for ( ii = 0; ii < a4; ++ii )
      a1[ii] = a1[ii] * v14;
    sub_1401CDE70(
      (__int64)a1,
      a4,
      0.99000001
    - (float)((float)((float)((float)(0.1 * (float)k) + 0.80000001) * (float)(v15 - a3))
            / (float)(v15 * (float)(v17 + 1))));
    for ( jj = a4 - 1; jj > 0; --jj )
      a1[jj - 1] = a1[jj - 1] - (float)(a2 * a1[jj]);
    result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
    v13 = result;
    for ( kk = 0; kk < a4; ++kk )
    {
      result = a1[kk] * v13;
      a1[kk] = result;
    }
  }
  return result;
}

