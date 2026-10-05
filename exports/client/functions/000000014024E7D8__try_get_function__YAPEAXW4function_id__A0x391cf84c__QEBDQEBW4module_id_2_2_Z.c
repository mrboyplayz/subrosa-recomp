/* Address: 0x14024e7d8 | Name: ?try_get_function@@YAPEAXW4function_id@?A0x391cf84c@@QEBDQEBW4module_id@2@2@Z | Size: 470 bytes */
__int64 __fastcall try_get_function(unsigned int a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // r15
  unsigned int *v6; // rbp
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int16 *v13; // r14

  v4 = a1;
  v6 = a3;
  v8 = _security_cookie;
  v9 = __ROR8__(*(_QWORD *)&dword_140404A6C[2 * a1 + 19065329] ^ _security_cookie, _security_cookie & 0x3F);
  if ( v9 == -1 )
    return 0;
  if ( v9 )
    return v9;
  if ( a3 == a4 )
  {
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v11 = *v6;
    v12 = *(_QWORD *)&dword_140404A6C[2 * v11 + 19065289];
    if ( !v12 )
      break;
    if ( v12 != -1 )
      goto LABEL_25;
LABEL_19:
    if ( ++v6 == a4 )
    {
      v8 = _security_cookie;
      goto LABEL_21;
    }
  }
  v13 = off_14028A6F0[v11];
  v12 = ((__int64 (__fastcall *)(__int16 *, _QWORD, __int64))LoadLibraryExW)(v13, 0, 2048);
  if ( !v12 )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp(v13, L"api-ms-", 7)
      || !(unsigned int)wcsncmp(v13, L"ext-ms-", 7) )
    {
      v12 = 0;
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(__int16 *, _QWORD, _QWORD))LoadLibraryExW)(v13, 0, 0);
    }
  }
  if ( !v12 )
  {
    _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v11 + 19065289], -1);
    goto LABEL_19;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&dword_140404A6C[2 * v11 + 19065289], v12) )
    ((void (__fastcall *)(__int64))FreeLibrary)(v12);
LABEL_25:
  v8 = _security_cookie;
LABEL_22:
  if ( v12 )
  {
    result = ((__int64 (__fastcall *)(__int64, __int64))GetProcAddress)(v12, a2);
    if ( result )
    {
      _InterlockedExchange64(
        (volatile __int64 *)&dword_140404A6C[2 * v4 + 19065329],
        _security_cookie ^ __ROR8__(result, 64 - (_security_cookie & 0x3Fu)));
      return result;
    }
    v8 = _security_cookie;
  }
  _InterlockedExchange64(
    (volatile __int64 *)&dword_140404A6C[2 * v4 + 19065329],
    v8 ^ __ROR8__(-1, 64 - ((unsigned __int8)v8 & 0x3Fu)));
  return 0;
}

