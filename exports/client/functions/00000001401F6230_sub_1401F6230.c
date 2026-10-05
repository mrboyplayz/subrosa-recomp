/* Address: 0x1401f6230 | Name: sub_1401F6230 | Size: 195 bytes */
char *__fastcall sub_1401F6230(_DWORD *a1)
{
  int i; // [rsp+20h] [rbp-28h]
  int v3; // [rsp+24h] [rbp-24h]
  int v4; // [rsp+28h] [rbp-20h]
  char *v5; // [rsp+30h] [rbp-18h]

  v3 = sub_1401E06F0(2);
  v4 = sub_1401E06F0(1);
  v5 = (char *)a1 + (int)sub_1401E99B0(292);
  for ( i = 0; i < a1[1]; ++i )
  {
    if ( i >= a1[2] )
      v5 += (int)sub_1401E99B0(v4);
    else
      v5 += (int)sub_1401E99B0(v3);
  }
  return &v5[480 * *a1];
}

