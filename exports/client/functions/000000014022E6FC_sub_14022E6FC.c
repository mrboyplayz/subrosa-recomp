/* Address: 0x14022e6fc | Name: sub_14022E6FC | Size: 124 bytes */
__int64 __fastcall sub_14022E6FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  MEMORY[0x1401FCD30]((_WORD *)(a1 + 84), 0, 0x20u);
  *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 120) = a5;
  *(_QWORD *)(a1 + 128) = a6;
  return a1;
}

