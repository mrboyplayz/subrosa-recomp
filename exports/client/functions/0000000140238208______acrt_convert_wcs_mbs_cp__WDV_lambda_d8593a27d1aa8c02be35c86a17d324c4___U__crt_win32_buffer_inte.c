/* Address: 0x140238208 | Name: ??$__acrt_convert_wcs_mbs_cp@_WDV_lambda_d8593a27d1aa8c02be35c86a17d324c4_@@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQEB_WAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@AEBV_lambda_d8593a27d1aa8c02be35c86a17d324c4_@@I@Z_0 | Size: 395 bytes */
__int64 __fastcall __acrt_convert_wcs_mbs_cp<wchar_t,char,_lambda_d8593a27d1aa8c02be35c86a17d324c4_,__crt_win32_buffer_internal_dynamic_resizing>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax

  v6 = (int)a1;
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
    v9 = sub_140258A84(a4, 0, (_DWORD)a1, -1, 0, 0, 0, 0);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v9 > v12 )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free_base(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = malloc_base(v10);
        *(_QWORD *)(a2 + 16) = v13;
        v12 = 0;
        result = v13 == 0 ? 0xC : 0;
        if ( !(_DWORD)result )
          v12 = v10;
        *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
        *(_QWORD *)(a2 + 24) = v12;
        if ( (_DWORD)result )
          return result;
      }
      v14 = sub_140258A84(a4, 0, v6, -1, *(_QWORD *)(a2 + 16), v12, 0, 0);
      if ( v14 )
      {
        *(_QWORD *)(a2 + 32) = v14 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
    return (unsigned int)*errno();
  }
  if ( *(_QWORD *)(a2 + 24) )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 40) )
  {
    free_base(*(void **)(a2 + 16));
    *(_BYTE *)(a2 + 40) = 0;
  }
  v7 = malloc_base(1);
  *(_QWORD *)(a2 + 16) = v7;
  result = v7 == 0 ? 0xC : 0;
  *(_BYTE *)(a2 + 40) = (_DWORD)result == 0;
  *(_QWORD *)(a2 + 24) = (_DWORD)result == 0;
  if ( !(_DWORD)result )
  {
LABEL_11:
    **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
    *(_QWORD *)(a2 + 32) = 0;
    return 0;
  }
  return result;
}

