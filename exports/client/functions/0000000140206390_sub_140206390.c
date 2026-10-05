/* Address: 0x140206390 | Name: sub_140206390 | Size: 225 bytes */
__int64 __fastcall sub_140206390(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int16 *v3; // rsi
  __int64 v4; // rbx

  v1 = a1;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064575];
  if ( result )
  {
    if ( result == -1 )
      return 0;
  }
  else
  {
    v3 = off_140284900[a1];
    v4 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v3, 0, 2048);
    if ( v4
      || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
      && (unsigned int)wcsncmp(v3, L"api-ms-", 7)
      && (v4 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v3, 0, 0)) != 0 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19064575], v4) )
        ((void (__fastcall *)(__int64))FreeLibrary)(v4);
      return v4;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v1 + 19064575], -1);
      return 0;
    }
  }
  return result;
}

