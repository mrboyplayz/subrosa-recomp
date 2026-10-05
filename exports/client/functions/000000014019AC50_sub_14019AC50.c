/* Address: 0x14019ac50 | Name: sub_14019AC50 | Size: 191 bytes */
__int64 __fastcall sub_14019AC50(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 9;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 128;
  *(_DWORD *)(a1 + 44) = sub_1401B5DD0(a1);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 32) - 1 - (*(int *)(a1 + 44) >> 1);
  *(_DWORD *)(a1 + 48) = 0;
  return sub_1401B5EA0(a1);
}

