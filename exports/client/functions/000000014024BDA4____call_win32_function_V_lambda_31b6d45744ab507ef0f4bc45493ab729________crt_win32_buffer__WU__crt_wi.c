/* Address: 0x14024bda4 | Name: ??$call_win32_function@V_lambda_31b6d45744ab507ef0f4bc45493ab729_@@@?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@QEAAHAEBV_lambda_31b6d45744ab507ef0f4bc45493ab729_@@@Z | Size: 192 bytes */
__int64 __fastcall __crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>::call_win32_function<_lambda_31b6d45744ab507ef0f4bc45493ab729_>(
        __int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax

  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v3 = v2;
  if ( !v2 )
    goto LABEL_2;
  if ( (unsigned __int64)v2 <= *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = v2;
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    free_base(*(void **)(a1 + 16));
    *(_BYTE *)(a1 + 40) = 0;
  }
  v6 = malloc_base(2 * v3 + 2);
  *(_QWORD *)(a1 + 16) = v6;
  v7 = 0;
  result = v6 == 0 ? 0xC : 0;
  if ( !(_DWORD)result )
    v7 = v3 + 1;
  *(_BYTE *)(a1 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a1 + 24) = v7;
  if ( !(_DWORD)result )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD))GetCurrentDirectoryW)(
           *(unsigned int *)(a1 + 24),
           *(_QWORD *)(a1 + 16));
    if ( !v8 )
    {
LABEL_2:
      v4 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v4);
      return (unsigned int)*errno();
    }
    *(_QWORD *)(a1 + 32) = v8;
    return 0;
  }
  return result;
}

