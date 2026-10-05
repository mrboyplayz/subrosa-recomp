/* Address: 0x14024c4b4 | Name: ??$__acrt_convert_wcs_mbs_cp@D_WV_lambda_7c9dea7b4ca7285d2cdb541a38da6275_@@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQEBDAEAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@AEBV_lambda_7c9dea7b4ca7285d2cdb541a38da6275_@@I@Z_0 | Size: 377 bytes */
__int64 __fastcall __acrt_convert_wcs_mbs_cp<char,wchar_t,_lambda_7c9dea7b4ca7285d2cdb541a38da6275_,__crt_win32_buffer_internal_dynamic_resizing>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax

  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free_base(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    v9 = MEMORY[0x140259504](a4, 9, a1);
    v12 = v9;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 > *(_QWORD *)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v14 = malloc_base(2 * v12);
        *(_QWORD *)(a2 + 16) = v14;
        v15 = 0;
        result = v14 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          v15 = v12;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = v15;
        if ( (_DWORD)result )
          return result;
      }
      v16 = MEMORY[0x140259504](a4, 9, a1);
      if ( v16 )
      {
        *(_QWORD *)(a2 + 32) = v16 - 1LL;
        return 0;
      }
    }
    v13 = ((__int64 (__fastcall *)(__int64, __int64))GetLastError)(v11, v10);
    sub_14024D14C(v13);
    return (unsigned int)*errno();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v7 = malloc_base(2);
  *(_QWORD *)(a2 + 16) = v7;
  result = v7 == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_WORD **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

