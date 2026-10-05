/* Address: 0x1401bc2a0 | Name: sub_1401BC2A0 | Size: 86 bytes */
__int64 __fastcall sub_1401BC2A0(unsigned int a1)
{
  int v2; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v3[5]; // [rsp+24h] [rbp-14h] BYREF

  sub_1401BE460(a1, v3, &v2);
  return ((31 - v3[0]) << 7) + (unsigned int)((179LL * (128 - v2) * v2) >> 16) + v2;
}

