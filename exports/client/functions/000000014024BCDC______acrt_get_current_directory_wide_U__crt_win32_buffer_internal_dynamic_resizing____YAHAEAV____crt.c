/* Address: 0x14024bcdc | Name: ??$__acrt_get_current_directory_wide@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z | Size: 197 bytes */
__int64 __fastcall __acrt_get_current_directory_wide<__crt_win32_buffer_internal_dynamic_resizing>(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax

  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD))GetCurrentDirectoryW)(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16));
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 <= *(_QWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 32) = v2;
      return v3;
    }
    if ( *(_BYTE *)(a1 + 40) )
    {
      free_base(*(void **)(a1 + 16));
      *(_BYTE *)(a1 + 40) = 0;
    }
    v6 = malloc_base(2 * v4 + 2);
    *(_QWORD *)(a1 + 16) = v6;
    v7 = 0;
    v8 = -v6;
    if ( (v8 == 0 ? 0xC : 0) == 0 )
      v7 = v4 + 1;
    *(_BYTE *)(a1 + 40) = (v8 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a1 + 24) = v7;
    if ( (v8 == 0 ? 0xC : 0) != 0 )
      return v8 == 0 ? 0xC : 0;
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))GetCurrentDirectoryW)(v7, *(_QWORD *)(a1 + 16));
    if ( v9 )
    {
      *(_QWORD *)(a1 + 32) = v9;
      return v3;
    }
  }
  v5 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v5);
  return (unsigned int)*errno();
}

