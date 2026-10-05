/* Address: 0x14024adb4 | Name: ??$call_win32_function@V_lambda_1a60cddbd8640ed4c95e91b82cd9827b_@@@?$__crt_win32_buffer@_WU__crt_win32_buffer_public_dynamic_resizing@@@@QEAAHAEBV_lambda_1a60cddbd8640ed4c95e91b82cd9827b_@@@Z | Size: 214 bytes */
__int64 __fastcall __crt_win32_buffer<wchar_t,__crt_win32_buffer_public_dynamic_resizing>::call_win32_function<_lambda_1a60cddbd8640ed4c95e91b82cd9827b_>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax

  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  v5 = v4;
  if ( !v4 )
    goto LABEL_2;
  if ( (unsigned __int64)v4 <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = v4;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v8 = j__malloc_base(2 * v5 + 2);
  *(_QWORD *)(a1 + 16) = v8;
  v9 = 0;
  result = v8 == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    v9 = v5 + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = v9;
  if ( !(_DWORD)result )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))GetFullPathNameW)(*a2, v9, *(_QWORD *)(a1 + 16), 0);
    if ( !v10 )
    {
LABEL_2:
      v6 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v6);
      return (unsigned int)*errno();
    }
    *(_QWORD *)(a1 + 32) = v10;
    return 0;
  }
  return result;
}

