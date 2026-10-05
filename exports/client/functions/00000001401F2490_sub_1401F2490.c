/* Address: 0x1401f2490 | Name: sub_1401F2490 | Size: 240 bytes */
__int64 __fastcall sub_1401F2490(_DWORD *a1, __int64 a2, int a3, __int64 a4, int a5, int a6, unsigned int a7)
{
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-28h]
  int i; // [rsp+24h] [rbp-24h]
  float v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = 0.0;
    for ( j = 0; j < a3; ++j )
      v10 = v10 + (float)(*(__int16 *)(a2 + 2LL * (j + i * a3)) * *(__int16 *)(v11 + 2LL * (a5 + j * *a1)));
    *(float *)(a4 + 4LL * i * a6) = 9.3132257e-10 * v10;
  }
  return result;
}

