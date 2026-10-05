/* Address: 0x1401be210 | Name: sub_1401BE210 | Size: 116 bytes */
__int64 __fastcall sub_1401BE210(__int64 a1, __int64 a2, char a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]
  unsigned int v6; // [rsp+4h] [rbp-14h]

  v6 = 0;
  for ( i = 0; i < a4; ++i )
    v6 += (*(__int16 *)(a2 + 2LL * i) * *(__int16 *)(a1 + 2LL * i)) >> a3;
  return v6;
}

