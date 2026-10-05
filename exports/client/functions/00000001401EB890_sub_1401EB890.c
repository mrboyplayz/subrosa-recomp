/* Address: 0x1401eb890 | Name: sub_1401EB890 | Size: 388 bytes */
__int64 __fastcall sub_1401EB890(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int i; // [rsp+30h] [rbp-18h]
  int j; // [rsp+30h] [rbp-18h]
  int k; // [rsp+30h] [rbp-18h]
  int m; // [rsp+30h] [rbp-18h]
  signed int v8; // [rsp+34h] [rbp-14h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v9 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v8; ++i )
    *(float *)(a2 + 4LL * i) = (float)*(char *)(*(_QWORD *)a1 + i);
  sub_1401F2860(a2, *(_QWORD *)(a1 + 8), v8, v9, v8, a3);
  for ( j = 0; j < v8; ++j )
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) * 0.0078125;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)v8;
      if ( k >= v8 )
        break;
      *(float *)(a2 + 4LL * k) = sub_1401F2810();
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)v8;
      if ( m >= v8 )
        break;
      *(float *)(a2 + 4LL * m) = sub_1401F2690();
    }
  }
  return result;
}

