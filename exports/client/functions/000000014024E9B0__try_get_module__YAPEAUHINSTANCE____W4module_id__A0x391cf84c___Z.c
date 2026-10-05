/* Address: 0x14024e9b0 | Name: ?try_get_module@@YAPEAUHINSTANCE__@@W4module_id@?A0x391cf84c@@@Z | Size: 254 bytes */
__int64 __fastcall try_get_module(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int16 *v3; // rsi
  __int64 v4; // rbx

  v1 = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19065289];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    v3 = off_14028A6F0[a1];
    v4 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v3, 0, 2048);
    if ( !v4 )
    {
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
        || !(unsigned int)wcsncmp(v3, L"api-ms-", 7)
        || !(unsigned int)wcsncmp(v3, L"ext-ms-", 7) )
      {
        v4 = 0;
      }
      else
      {
        v4 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v3, 0, 0);
      }
    }
    if ( v4 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19065289], v4) )
        ((void (__fastcall *)(__int64))FreeLibrary)(v4);
      return v4;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19065289], -1);
      return 0;
    }
  }
  return result;
}

