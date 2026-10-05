/* Address: 0x140253024 | Name: ?write_binary_nolock@@YA?AUwrite_result@?A0x17268360@@HQEBDI@Z | Size: 108 bytes */
__int64 __fastcall write_binary_nolock(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r9
  __int64 v7; // rcx

  v6 = a1 + 4;
  v7 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD))WriteFile)(v7, a3, a4, v6, 0) )
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  return a1;
}

