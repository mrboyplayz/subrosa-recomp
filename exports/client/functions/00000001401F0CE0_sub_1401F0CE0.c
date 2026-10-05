/* Address: 0x1401f0ce0 | Name: sub_1401F0CE0 | Size: 159 bytes */
__int64 __fastcall sub_1401F0CE0(int a1, int a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+24h] [rbp-24h]
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  if ( a1 < 1 || a2 > a1 || a2 < 0 )
    return 0;
  v3 = sub_1401E2280(2);
  v5 = sub_1401E2280(1);
  v4 = sub_1401E99B0(268);
  v6 = sub_1401E99B0(v3) * a2 + v4;
  return (unsigned int)sub_1401E99B0(v5) * (a1 - a2) + v6;
}

