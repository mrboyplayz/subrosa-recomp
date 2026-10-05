/* Address: 0x1401e52c0 | Name: sub_1401E52C0 | Size: 301 bytes */
__int64 __fastcall sub_1401E52C0(int a1, int a2, int a3)
{
  int v4; // [rsp+0h] [rbp-18h]

  if ( a1 < a3 / 400 )
    return 0xFFFFFFFFLL;
  if ( a2 == 5000 )
  {
    v4 = a1;
  }
  else
  {
    if ( a2 < 5001 || a2 > 5009 )
      return 0xFFFFFFFFLL;
    if ( a2 > 5005 )
      v4 = a3 * (a2 - 5003) / 50;
    else
      v4 = (a3 / 400) << (a2 + 119);
  }
  if ( v4 > a1 )
    return 0xFFFFFFFFLL;
  if ( 400 * v4 == a3
    || 200 * v4 == a3
    || 100 * v4 == a3
    || 50 * v4 == a3
    || 25 * v4 == a3
    || 50 * v4 == 3 * a3
    || 50 * v4 == 4 * a3
    || 50 * v4 == 5 * a3
    || 50 * v4 == 6 * a3 )
  {
    return (unsigned int)v4;
  }
  return 0xFFFFFFFFLL;
}

