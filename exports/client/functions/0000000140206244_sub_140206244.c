/* Address: 0x140206244 | Name: sub_140206244 | Size: 332 bytes */
__int64 __fastcall sub_140206244(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rdi
  unsigned int *v6; // rbp
  __int64 result; // rax
  bool i; // zf
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int16 *v12; // r15

  v4 = a1;
  v6 = a3;
  result = *(_QWORD *)&dword_140404A6C[2 * a1 + 19064581];
  if ( result != -1 )
  {
    if ( result )
      return result;
    for ( i = a3 == a4; !i; i = v6 == a4 )
    {
      v10 = *v6;
      v11 = *(_QWORD *)&dword_140404A6C[2 * v10 + 19064575];
      if ( v11 )
      {
        if ( v11 != -1 )
          goto LABEL_16;
      }
      else
      {
        v12 = off_140284900[v10];
        v11 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v12, 0, 2048);
        if ( v11
          || (unsigned int)((__int64 (*)(void))GetLastError)() == 87
          && (unsigned int)wcsncmp(v12, L"api-ms-", 7)
          && (v11 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v12, 0, 0)) != 0 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v10 + 19064575], v11) )
            ((void (__fastcall *)(__int64))FreeLibrary)(v11);
LABEL_16:
          result = ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v11, a2);
          if ( result )
          {
            _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064581], result);
            return result;
          }
          break;
        }
        _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v10 + 19064575], -1);
      }
      ++v6;
    }
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v4 + 19064581], -1);
  }
  return 0;
}

