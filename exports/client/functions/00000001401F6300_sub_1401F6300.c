/* Address: 0x1401f6300 | Name: sub_1401F6300 | Size: 181 bytes */
__int64 __fastcall sub_1401F6300(__int64 a1)
{
  int i; // [rsp+20h] [rbp-28h]
  int v3; // [rsp+24h] [rbp-24h]
  int v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v3 = sub_1401E06F0(2);
  v4 = sub_1401E06F0(1);
  v5 = (int)sub_1401E99B0(292) + a1;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 8) )
      v5 += (int)sub_1401E99B0(v4);
    else
      v5 += (int)sub_1401E99B0(v3);
  }
  return v5;
}

