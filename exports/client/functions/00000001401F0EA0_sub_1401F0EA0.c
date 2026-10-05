/* Address: 0x1401f0ea0 | Name: sub_1401F0EA0 | Size: 470 bytes */
__int64 __fastcall sub_1401F0EA0(int *a1, signed int a2, int a3, int a4, int a5, __int64 a6)
{
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  unsigned int v9; // [rsp+24h] [rbp-24h]
  unsigned int v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int *v13; // [rsp+30h] [rbp-18h]

  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  v13 = (int *)((char *)a1 + (int)sub_1401E99B0(268));
  v11 = sub_1401E2280(2);
  v12 = sub_1401E2280(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    v9 = sub_1401E23F0(v13, a2, 2u);
    if ( v9 )
      return v9;
    v13 = (int *)((char *)v13 + (int)sub_1401E99B0(v11));
  }
  while ( j < a1[1] )
  {
    v10 = sub_1401E23F0(v13, a2, 1u);
    if ( v10 )
      return v10;
    v13 = (int *)((char *)v13 + (int)sub_1401E99B0(v12));
    ++j;
  }
  return 0;
}

