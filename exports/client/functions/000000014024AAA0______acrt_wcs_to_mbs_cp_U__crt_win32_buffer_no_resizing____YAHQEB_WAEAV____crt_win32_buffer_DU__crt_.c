/* Address: 0x14024aaa0 | Name: ??$__acrt_wcs_to_mbs_cp@U__crt_win32_buffer_no_resizing@@@@YAHQEB_WAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@I@Z | Size: 273 bytes */
__int64 __fastcall __acrt_wcs_to_mbs_cp<__crt_win32_buffer_no_resizing>(_WORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // eax

  v3 = 0;
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
    v7 = sub_140258A84(a3, 0, (_DWORD)a1, -1, 0, 0, 0, 0);
    v9 = v7;
    if ( v7 )
    {
      v11 = *(_QWORD *)(a2 + 24);
      if ( v7 > v11 )
      {
        if ( *(_BYTE *)(a2 + 40) )
          *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_10;
      }
      v12 = sub_140258A84(a3, 0, v6, -1, *(_QWORD *)(a2 + 16), v11, 0, 0);
      v8 = v12;
      if ( v12 )
      {
        *(_QWORD *)(a2 + 32) = v12 - 1LL;
        return v3;
      }
    }
    v10 = ((__int64 (__fastcall *)(__int64, __int64))GetLastError)(v8, v9);
    sub_14024D14C(v10);
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
  return v3;
}

