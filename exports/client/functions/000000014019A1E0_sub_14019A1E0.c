/* Address: 0x14019a1e0 | Name: sub_14019A1E0 | Size: 161 bytes */
__int64 __fastcall sub_14019A1E0(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 33;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0x80000000;
  *(_DWORD *)(a1 + 44) = -1;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}

