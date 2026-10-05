/* Address: 0x14024e6bc | Name: ?try_get_first_available_module@@YAPEAUHINSTANCE__@@QEBW4module_id@?A0x391cf84c@@0@Z | Size: 281 bytes */
__int64 __fastcall try_get_first_available_module(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int16 *v6; // rbp

  v3 = a1;
  if ( a1 == a2 )
    return 0;
  while ( 1 )
  {
    v4 = *v3;
    v5 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065289];
    if ( !v5 )
      break;
    if ( v5 != -1 )
      return v5;
LABEL_16:
    if ( ++v3 == a2 )
      return 0;
  }
  v6 = off_14028A6F0[v4];
  v5 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v6, 0, 2048);
  if ( !v5 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp(v6, L"api-ms-", 7)
      || !(unsigned int)wcsncmp(v6, L"ext-ms-", 7) )
    {
      v5 = 0;
    }
    else
    {
      v5 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v6, 0, 0);
    }
  }
  if ( !v5 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19065289], -1);
    goto LABEL_16;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19065289], v5) )
    ((void (__fastcall *)(__int64))FreeLibrary)(v5);
  return v5;
}

