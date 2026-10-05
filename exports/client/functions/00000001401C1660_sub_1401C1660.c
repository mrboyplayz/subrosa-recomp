/* Address: 0x1401c1660 | Name: sub_1401C1660 | Size: 293 bytes */
__int64 __fastcall sub_1401C1660(_DWORD *a1, int a2)
{
  int v3; // [rsp+4h] [rbp-24h]
  int v4; // [rsp+8h] [rbp-20h]
  unsigned __int8 *v5; // [rsp+10h] [rbp-18h]
  int v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  a1[1152] = a2;
  if ( a1[1145] == 2 )
    v6 = a2 - (a1[1144] / 16 + 2000);
  if ( a1[1144] == 8 )
  {
    v3 = 107;
    v5 = (unsigned __int8 *)&unk_14027E0C0;
  }
  else if ( a1[1144] == 12 )
  {
    v3 = 155;
    v5 = (unsigned __int8 *)&unk_14027E130;
  }
  else
  {
    v3 = 191;
    v5 = (unsigned __int8 *)&unk_14027E1D0;
  }
  if ( (v6 + 200) / 400 - 10 >= v3 - 1 )
    v4 = v3 - 1;
  else
    v4 = (v6 + 200) / 400 - 10;
  if ( v4 > 0 )
    a1[1183] = 21 * v5[v4];
  else
    a1[1183] = 0;
  return 0;
}

