/* Address: 0x14022e598 | Name: sub_14022E598 | Size: 74 bytes */
__int64 __fastcall sub_14022E598(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  MEMORY[0x1401FCD30]((_WORD *)(a1 + 52), 0, 0x20u);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  return a1;
}

