/* Address: 0x14024a9bc | Name: ??$__acrt_get_full_path_name_wide@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQEB_WAEAV?$__crt_win32_buffer@_WU__crt_win32_buffer_public_dynamic_resizing@@@@@Z | Size: 226 bytes */
__int64 __fastcall __acrt_get_full_path_name_wide<__crt_win32_buffer_public_dynamic_resizing>(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         a1,
         *(unsigned int *)(a2 + 24),
         *(_QWORD *)(a2 + 16),
         0);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    if ( (unsigned __int64)v4 <= *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = v4;
      return v5;
    }
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v8 = j__malloc_base(2 * v6 + 2);
    *(_QWORD *)(a2 + 16) = v8;
    v9 = 0;
    v10 = -v8;
    if ( (v10 == 0 ? 0xC : 0) == 0 )
      v9 = v6 + 1;
    *(_BYTE *)(a2 + 40) = (v10 == 0 ? 0xC : 0) == 0;
    *(_QWORD *)(a2 + 24) = v9;
    if ( (v10 == 0 ? 0xC : 0) != 0 )
      return v10 == 0 ? 0xC : 0;
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
            a1,
            (unsigned int)v9,
            *(_QWORD *)(a2 + 16),
            0);
    if ( v11 )
    {
      *(_QWORD *)(a2 + 32) = v11;
      return v5;
    }
  }
  v7 = ((__int64 (*)(void))GetLastError)();
  sub_14024D14C(v7);
  return (unsigned int)*errno();
}

