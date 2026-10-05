/* Address: 0x1401f7450 | Name: sub_1401F7450 | Size: 870 bytes */
__int64 __fastcall sub_1401F7450(int *a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  char *v9; // rax
  __int64 v10; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  unsigned int v13; // [rsp+24h] [rbp-34h]
  unsigned int v14; // [rsp+24h] [rbp-34h]
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+2Ch] [rbp-2Ch]
  int *v17; // [rsp+30h] [rbp-28h]
  unsigned int v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  if ( a3 > 255 || a3 < 1 || a5 > a4 || a4 < 1 || a5 < 0 || a4 > 255 - a5 )
    return 0xFFFFFFFFLL;
  a1[67] = sub_1401A13B0(a1, a2);
  *a1 = a3;
  a1[1] = a4;
  a1[2] = a5;
  if ( a8 != 1 )
    a1[68] = -1;
  a1[72] = -1000;
  a1[69] = a7;
  a1[70] = 5000;
  for ( i = 0; i < *a1; ++i )
    *((_BYTE *)a1 + i + 12) = *(_BYTE *)(a6 + i);
  if ( !(unsigned int)sub_1401E4C60(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 1 && !(unsigned int)sub_1401F64A0(a1) )
    return 0xFFFFFFFFLL;
  if ( a8 == 2 && !(unsigned int)sub_1401F63C0(*a1, nullptr, nullptr) )
    return 0xFFFFFFFFLL;
  v17 = (int *)((char *)a1 + (int)sub_1401E99B0(292));
  v15 = sub_1401E06F0(2);
  v16 = sub_1401E06F0(1);
  for ( j = 0; j < a1[2]; ++j )
  {
    v13 = sub_1401E0880(v17, v19, 2u, a7);
    if ( v13 )
      return v13;
    if ( j == a1[68] )
      sub_1401E0F40(v17, 10024, 1);
    v17 = (int *)((char *)v17 + (int)sub_1401E99B0(v15));
  }
  while ( j < a1[1] )
  {
    v14 = sub_1401E0880(v17, v19, 1u, a7);
    if ( j == a1[68] )
      sub_1401E0F40(v17, 10024, 1);
    if ( v14 )
      return v14;
    v17 = (int *)((char *)v17 + (int)sub_1401E99B0(v16));
    ++j;
  }
  if ( a8 == 1 )
  {
    v9 = sub_1401F6230(a1);
    MEMORY[0x1401FCD30](v9, 0, 4LL * a3);
    v10 = sub_1401F6300((__int64)a1);
    MEMORY[0x1401FCD30](v10, 0, 480LL * a3);
  }
  a1[71] = a8;
  return 0;
}

