/* Address: 0x1401c2ee0 | Name: sub_1401C2EE0 | Size: 84 bytes */
__int64 __fastcall sub_1401C2EE0(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-18h]
  unsigned int v4; // [rsp+4h] [rbp-14h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 = (v4 << 8) + *(char *)(a1 + i);
  return v4;
}

