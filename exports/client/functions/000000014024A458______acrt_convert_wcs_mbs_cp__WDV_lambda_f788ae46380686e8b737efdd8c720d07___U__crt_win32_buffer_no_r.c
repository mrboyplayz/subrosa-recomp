/* Address: 0x14024a458 | Name: ??$__acrt_convert_wcs_mbs_cp@_WDV_lambda_f788ae46380686e8b737efdd8c720d07_@@U__crt_win32_buffer_no_resizing@@@@YAHQEB_WAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@AEBV_lambda_f788ae46380686e8b737efdd8c720d07_@@I@Z | Size: 281 bytes */
__int64 __fastcall __acrt_convert_wcs_mbs_cp<wchar_t,char,_lambda_f788ae46380686e8b737efdd8c720d07_,__crt_win32_buffer_no_resizing>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v6; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  int v13; // eax

  v6 = (int)a1;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    v8 = sub_140258A84(a4, 0, (_DWORD)a1, -1, 0, 0, 0, 0);
    v10 = v8;
    if ( v8 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v8 > v12 )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      v13 = sub_140258A84(a4, 0, v6, -1, *(_QWORD *)(a2 + 16), v12, 0, 0);
      if ( v13 )
      {
        *(_QWORD *)(a2 + 32) = v13 - 1LL;
        return 0;
      }
    }
    v11 = ((__int64 (__fastcall *)(__int64, __int64))GetLastError)(v9, v10);
    sub_14024D14C(v11);
    return (unsigned int)*errno();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
      *(_BYTE *)(a2 + 40) = 0;
LABEL_10:
    *errno() = 34;
    *(_BYTE *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    return 34;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return 0;
}

