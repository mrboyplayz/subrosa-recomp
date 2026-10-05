/* Address: 0x14019a5e0 | Name: sub_14019A5E0 | Size: 222 bytes */
__int64 __fastcall sub_14019A5E0(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+20h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+18h]

  v8 = a3 - 1;
  v4 = sub_14019A020(a3 - 1) + 1;
  if ( v4 <= 8 )
    return sub_14019A290(a1, a2, a2 + 1, v8 + 1);
  v5 = v4 - 8;
  sub_14019A290(a1, a2 >> v5, (a2 >> v5) + 1, (v8 >> v5) + 1);
  return sub_14019A6D0(a1, ((1 << v5) - 1) & a2, v5);
}

