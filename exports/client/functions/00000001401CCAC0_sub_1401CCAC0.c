/* Address: 0x1401ccac0 | Name: sub_1401CCAC0 | Size: 142 bytes */
__int64 __fastcall sub_1401CCAC0(__int64 a1)
{
  int i; // [rsp+20h] [rbp-18h]
  unsigned int v3; // [rsp+24h] [rbp-14h]

  v3 = 0;
  for ( i = 0; i < 2; ++i )
    v3 = sub_1401C7180((_DWORD *)(4288LL * i + a1));
  MEMORY[0x1401FCD30](a1 + 8576, 0, 12);
  *(_DWORD *)(a1 + 8596) = 0;
  return v3;
}

