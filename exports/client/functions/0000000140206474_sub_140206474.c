/* Address: 0x140206474 | Name: sub_140206474 | Size: 267 bytes */
__int64 __fastcall sub_140206474(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 *v8; // r14

  v4 = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    v6 = *v4;
    v7 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19064575];
    if ( !v7 )
      break;
    if ( v7 != -1 )
      return ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v7, a1);
LABEL_10:
    if ( ++v4 == a3 )
      return 0;
  }
  v8 = off_140284900[v6];
  v7 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v8, 0, 2048);
  if ( !v7
    && ((unsigned int)((__int64 (*)(void))GetLastError)() != 87
     || !(unsigned int)wcsncmp(v8, L"api-ms-", 7)
     || (v7 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v8, 0, 0)) == 0) )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19064575], -1);
    goto LABEL_10;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19064575], v7) )
    ((void (__fastcall *)(__int64))FreeLibrary)(v7);
  return ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v7, a1);
}

