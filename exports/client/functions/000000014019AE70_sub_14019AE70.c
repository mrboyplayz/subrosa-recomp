/* Address: 0x14019ae70 | Name: sub_14019AE70 | Size: 157 bytes */
__int64 __fastcall sub_14019AE70(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+24h] [rbp-14h]

  v5 = (a4 - a3) * a1[10];
  a1[9] -= v5;
  if ( a2 )
    v6 = (a3 - a2) * a1[10];
  else
    v6 = a1[8] - v5;
  a1[8] = v6;
  return sub_1401B5EA0(a1);
}

