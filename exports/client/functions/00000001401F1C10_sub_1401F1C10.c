/* Address: 0x1401f1c10 | Name: sub_1401F1C10 | Size: 106 bytes */
__int64 __fastcall sub_1401F1C10(unsigned int a1, int a2, int a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+24h] [rbp-14h]

  v4 = sub_1401F2140((unsigned int)(a3 + a2), a1);
  if ( !v4 )
    return 0;
  v5 = sub_1401F0CE0(a2, a3);
  if ( v5 )
    return v5 + v4 + (unsigned int)sub_1401E99B0(4);
  else
    return 0;
}

