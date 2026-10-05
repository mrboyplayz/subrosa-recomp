/* Address: 0x14019b1c0 | Name: sub_14019B1C0 | Size: 215 bytes */
__int64 __fastcall sub_14019B1C0(_DWORD *a1, unsigned int a2)
{
  int v3; // [rsp+20h] [rbp-18h]
  unsigned int v4; // [rsp+24h] [rbp-14h]

  v4 = a1[4];
  v3 = a1[5];
  if ( v3 < a2 )
  {
    do
    {
      v4 |= (unsigned int)sub_1401B5E30(a1) << v3;
      v3 += 8;
    }
    while ( v3 <= 24 );
  }
  a1[4] = v4 >> a2;
  a1[5] = v3 - a2;
  a1[6] += a2;
  return ((1 << a2) - 1) & v4;
}

