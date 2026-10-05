/* Address: 0x1401bdff0 | Name: sub_1401BDFF0 | Size: 533 bytes */
__int64 __fastcall sub_1401BDFF0(_WORD *a1, __int16 *a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+28h] [rbp-10h]

  v4 = 0x20000 / (int)sub_1401BE3A0((unsigned int)*a2, 1);
  v8 = 0x20000 / (int)sub_1401BE3A0((unsigned int)(a2[1] - *a2), 1);
  *a1 = sub_1401BE320((unsigned int)(v8 + v4), 0x7FFF);
  for ( i = 1; i < a3 - 1; i += 2 )
  {
    v5 = 0x20000 / (int)sub_1401BE3A0((unsigned int)(a2[i + 1] - a2[i]), 1);
    a1[i] = sub_1401BE320((unsigned int)(v8 + v5), 0x7FFF);
    v8 = 0x20000 / (int)sub_1401BE3A0((unsigned int)(a2[i + 2] - a2[i + 1]), 1);
    a1[i + 1] = sub_1401BE320((unsigned int)(v8 + v5), 0x7FFF);
  }
  v6 = 0x20000 / (int)sub_1401BE3A0((unsigned int)(0x8000 - a2[a3 - 1]), 1);
  result = sub_1401BE320((unsigned int)(v8 + v6), 0x7FFF);
  a1[a3 - 1] = result;
  return result;
}

