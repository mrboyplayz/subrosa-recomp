/* Address: 0x1401f2140 | Name: sub_1401F2140 | Size: 104 bytes */
__int64 __fastcall sub_1401F2140(int a1, int a2)
{
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+24h] [rbp-14h]

  if ( a1 > 255 || a2 > 255 )
    return 0;
  v3 = 2 * a2 * a1;
  if ( v3 > 65004 )
    return 0;
  v4 = sub_1401E99B0(12);
  return (unsigned int)sub_1401E99B0(v3) + v4;
}

