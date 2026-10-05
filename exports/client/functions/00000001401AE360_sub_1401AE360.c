/* Address: 0x1401ae360 | Name: sub_1401AE360 | Size: 89 bytes */
__int64 __fastcall sub_1401AE360(__int64 a1, int a2)
{
  return (unsigned int)((a2 << 12) + 4 * (*(_DWORD *)(a1 + 4) * a2 - 1) + 256 + 4 * *(_DWORD *)(a1 + 8) * 4 * a2);
}

