/* Address: 0x1401a3740 | Name: sub_1401A3740 | Size: 693 bytes */
__int64 __fastcall sub_1401A3740(__int64 a1, __int64 a2, float *a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm0_4
  int i; // [rsp+20h] [rbp-48h]
  int j; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  float *v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  float v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+54h] [rbp-14h]
  float *v21; // [rsp+58h] [rbp-10h]

  v19 = *(_QWORD *)(a1 + 32);
  v15 = *(_DWORD *)(a1 + 48) * a7;
  v13 = *(__int16 *)(v19 + 2LL * a6) * a7;
  if ( a8 != 1 )
  {
    if ( v13 >= v15 / a8 )
      v17 = v15 / a8;
    else
      v17 = *(__int16 *)(v19 + 2LL * a6) * a7;
    v13 = v17;
  }
  if ( a9 )
  {
    v13 = 0;
    a6 = 0;
    a5 = 0;
  }
  v16 = a3;
  v21 = (float *)(a2 + 4LL * *(__int16 *)(v19 + 2LL * a5) * a7);
  for ( i = 0; i < *(__int16 *)(v19 + 2LL * a5) * a7; ++i )
    *v16++ = 0.0;
  for ( j = a5; j < a6; ++j )
  {
    v14 = *(__int16 *)(v19 + 2LL * j) * a7;
    v20 = *(__int16 *)(v19 + 2LL * (j + 1)) * a7;
    if ( (float)(*(float *)(a4 + 4LL * j) + flt_140282A10[j]) <= 32.0 )
      v18 = *(float *)(a4 + 4LL * j) + flt_140282A10[j];
    else
      v18 = 32.0;
    v9 = exp(0.6931471805599453 * v18);
    do
    {
      *v16++ = *v21++ * v9;
      ++v14;
    }
    while ( v14 < v20 );
  }
  return MEMORY[0x1401FCD30](&a3[v13], 0, 4LL * (v15 - v13));
}

