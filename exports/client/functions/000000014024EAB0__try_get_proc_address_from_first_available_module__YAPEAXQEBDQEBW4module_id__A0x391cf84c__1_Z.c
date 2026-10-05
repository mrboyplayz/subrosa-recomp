/* Address: 0x14024eab0 | Name: ?try_get_proc_address_from_first_available_module@@YAPEAXQEBDQEBW4module_id@?A0x391cf84c@@1@Z | Size: 311 bytes */
__int64 __fastcall try_get_proc_address_from_first_available_module(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 *v8; // rbp

  v4 = a2;
  if ( a2 == a3 )
    return 0;
  while ( 1 )
  {
    v6 = *v4;
    v7 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065289];
    if ( !v7 )
      break;
    if ( v7 != -1 )
      return ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v7, a1);
LABEL_16:
    if ( ++v4 == a3 )
      return 0;
  }
  v8 = off_14028A6F0[v6];
  v7 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v8, 0, 2048);
  if ( !v7 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp(v8, L"api-ms-", 7)
      || !(unsigned int)wcsncmp(v8, L"ext-ms-", 7) )
    {
      v7 = 0;
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v8, 0, 0);
    }
  }
  if ( !v7 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v6 + 19065289], v7) )
    ((void (__fastcall *)(__int64))FreeLibrary)(v7);
  return ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v7, a1);
}

