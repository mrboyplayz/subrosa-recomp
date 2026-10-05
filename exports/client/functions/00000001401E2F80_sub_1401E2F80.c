/* Address: 0x1401e2f80 | Name: sub_1401E2F80 | Size: 108 bytes */
__int64 __fastcall sub_1401E2F80(_BYTE *a1, int a2, int a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+24h] [rbp-14h]

  v4 = sub_1401E2EF0(a1, a2);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = sub_1401E2D90(a1, a3) * v4;
  if ( (int)(25 * v5) <= 3 * a3 )
    return v5;
  else
    return 4294967292LL;
}

