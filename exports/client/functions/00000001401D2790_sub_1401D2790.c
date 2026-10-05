/* Address: 0x1401d2790 | Name: sub_1401D2790 | Size: 544 bytes */
__int64 __fastcall sub_1401D2790(int *a1, int *a2, int a3, int a4, unsigned int a5)
{
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+24h] [rbp-14h]

  v7 = 0;
  a1[1524] = a2[12];
  a1[1169] = a2[13];
  a1[1139] = a2[2];
  a1[1141] = a2[3];
  a1[1142] = a2[4];
  a1[1143] = a2[5];
  a1[1527] = a2[10];
  a1[1442] = *a2;
  a1[1443] = a2[1];
  a1[1134] = a3;
  a1[1444] = a4;
  if ( !a1[1167] || a1[1170] )
  {
    v11 = sub_1401C12F0(a1, a2);
    if ( a5 )
      v11 = a5;
    v8 = sub_1401DB3D0(a1, v11);
    v9 = sub_1401DB660(a1, v11, (unsigned int)a2[6]) + v8;
    v10 = sub_1401DBB00(a1, (unsigned int)a2[9]) + v9;
    a1[1154] = a2[8];
    v6 = sub_1401DBFF0(a1, a2);
    a1[1167] = 1;
    return (unsigned int)(v6 + v10);
  }
  else
  {
    if ( a1[1139] != a1[1140] && a1[1144] > 0 )
      return (unsigned int)sub_1401DB3D0(a1, (unsigned int)a1[1144]);
    return v7;
  }
}

