/* Address: 0x14022e68c | Name: sub_14022E68C | Size: 112 bytes */
__int64 __fastcall sub_14022E68C(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 8) = *a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  MEMORY[0x1401FCD30]((_WORD *)(a1 + 76), 0, 0x20u);
  *(_DWORD *)(a1 + 44) = 0;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 50) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 112) = a5;
  *(_QWORD *)(a1 + 120) = a6;
  return a1;
}

