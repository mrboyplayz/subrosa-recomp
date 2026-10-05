/* Address: 0x1401f2380 | Name: sub_1401F2380 | Size: 262 bytes */
__int64 __fastcall sub_1401F2380(_DWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  float v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = *(float *)(a2 + 4LL * i * a4);
    for ( j = 0; j < a6; ++j )
      *(float *)(a5 + 4LL * (j + i * a6)) = *(float *)(a5 + 4LL * (j + i * a6))
                                          + (float)((float)(0.000030517578
                                                          * (float)*(__int16 *)(v11 + 2LL * (j + a3 * *a1)))
                                                  * v10);
  }
  return result;
}

