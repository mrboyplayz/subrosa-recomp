/* Address: 0x1401a2830 | Name: sub_1401A2830 | Size: 293 bytes */
__int64 __fastcall sub_1401A2830(__int64 a1, int a2, int a3, int a4)
{
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]
  int i; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+10h] [rbp-18h]
  unsigned __int8 *v9; // [rsp+18h] [rbp-10h]
  int v10; // [rsp+48h] [rbp+20h]

  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                         + *(__int16 *)(*(_QWORD *)(a1 + 136) + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1))));
  v5 = 0;
  v6 = *v9;
  v10 = a4 - 1;
  for ( i = 0; i < 6; ++i )
  {
    if ( v9[(v5 + v6 + 1) >> 1] < v10 )
      v5 = (v5 + v6 + 1) >> 1;
    else
      v6 = (v5 + v6 + 1) >> 1;
  }
  if ( v5 )
    v8 = v9[v5];
  else
    v8 = -1;
  if ( v10 - v8 > v9[v6] - v10 )
    return (unsigned int)v6;
  else
    return (unsigned int)v5;
}

