/* Address: 0x1401d26f0 | Name: sub_1401D26F0 | Size: 149 bytes */
__int64 __fastcall sub_1401D26F0(_DWORD *a1, int a2)
{
  MEMORY[0x1401FCD30](a1, 0, 10088);
  a1[1277] = a2;
  a1[2] = ((unsigned int)sub_1401BC2A0(0x3C0000u) - 2048) << 8;
  a1[3] = a1[2];
  a1[1166] = 1;
  return (unsigned int)sub_1401C4FB0((__int64)(a1 + 9));
}

