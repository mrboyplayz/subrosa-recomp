/* Address: 0x1401c9630 | Name: sub_1401C9630 | Size: 158 bytes */
_DWORD *__fastcall sub_1401C9630(_DWORD *a1)
{
  int i; // [rsp+0h] [rbp-18h]
  int v3; // [rsp+4h] [rbp-14h]
  int v4; // [rsp+Ch] [rbp-Ch]

  v4 = 0x7FFF / (a1[585] + 1);
  v3 = 0;
  for ( i = 0; i < a1[585]; ++i )
  {
    v3 += v4;
    *((_WORD *)a1 + i + 2038) = v3;
  }
  a1[1043] = 0;
  a1[1044] = 3176576;
  return a1;
}

