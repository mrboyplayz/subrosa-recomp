/* Address: 0x1401a6ae0 | Name: sub_1401A6AE0 | Size: 169 bytes */
__int64 __fastcall sub_1401A6AE0(unsigned int a1)
{
  int v2; // [rsp+20h] [rbp-28h]
  unsigned int v3; // [rsp+24h] [rbp-24h]
  unsigned int v4; // [rsp+28h] [rbp-20h]
  unsigned int v5; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v6; // [rsp+50h] [rbp+8h]

  v6 = a1;
  v4 = 0;
  v2 = (int)sub_14019A020(a1) >> 1;
  v3 = 1 << v2;
  do
  {
    v5 = (v3 + 2 * v4) << v2;
    if ( v5 <= v6 )
    {
      v4 += v3;
      v6 -= v5;
    }
    v3 >>= 1;
    --v2;
  }
  while ( v2 >= 0 );
  return v4;
}

