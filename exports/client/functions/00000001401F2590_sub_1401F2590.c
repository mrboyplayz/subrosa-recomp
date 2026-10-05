/* Address: 0x1401f2590 | Name: sub_1401F2590 | Size: 249 bytes */
__int64 __fastcall sub_1401F2590(_DWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, unsigned int a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = sub_1401F21B0((__int64)a1);
  for ( i = 0; ; ++i )
  {
    result = a7;
    if ( i >= (int)a7 )
      break;
    v10 = (__int16)sub_1401AD3E0();
    for ( j = 0; j < a6; ++j )
      *(_WORD *)(a5 + 2LL * (j + i * a6)) += (v10 * *(__int16 *)(v11 + 2LL * (j + a3 * *a1)) + 0x4000) >> 15;
  }
  return result;
}

