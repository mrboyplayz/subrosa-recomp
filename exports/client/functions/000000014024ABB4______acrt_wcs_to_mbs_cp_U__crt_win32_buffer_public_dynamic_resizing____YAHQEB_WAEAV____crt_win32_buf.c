/* Address: 0x14024abb4 | Name: ??$__acrt_wcs_to_mbs_cp@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQEB_WAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@I@Z | Size: 394 bytes */
__int64 __fastcall __acrt_wcs_to_mbs_cp<__crt_win32_buffer_public_dynamic_resizing>(_WORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // esi
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax

  v3 = 0;
  v6 = (int)a1;
  if ( !a1 )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    goto LABEL_5;
  }
  if ( *a1 )
  {
    v9 = sub_140258A84(a3, 0, (_DWORD)a1, -1, 0, 0, 0, 0);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v9 > v12 )
      {
        if ( *(_BYTE *)(a2 + 40) )
        {
          free(*(void **)(a2 + 16));
          *(_BYTE *)(a2 + 40) = 0;
        }
        v13 = j__malloc_base(v10);
        *(_QWORD *)(a2 + 16) = v13;
        v12 = 0;
        v14 = -v13;
        v8 = v14 == 0 ? 0xC : 0;
        if ( (v14 == 0 ? 0xC : 0) == 0 )
          v12 = v10;
        *(_BYTE *)(a2 + 40) = v8 == 0;
        *(_QWORD *)(a2 + 24) = v12;
        if ( (v14 == 0 ? 0xC : 0) != 0 )
          return v8;
      }
      v15 = sub_140258A84(a3, 0, v6, -1, *(_QWORD *)(a2 + 16), v12, 0, 0);
      if ( v15 )
      {
        *(_QWORD *)(a2 + 32) = v15 - 1LL;
        return v3;
      }
    }
    v11 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v11);
    return (unsigned int)*errno();
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( *(_BYTE *)(a2 + 40) )
    {
      free(*(void **)(a2 + 16));
      *(_BYTE *)(a2 + 40) = 0;
    }
    v7 = j__malloc_base(1);
    *(_QWORD *)(a2 + 16) = v7;
    v8 = v7 == 0 ? 0xC : 0;
    *(_BYTE *)(a2 + 40) = v8 == 0;
    *(_QWORD *)(a2 + 24) = v8 == 0;
    if ( (v7 == 0 ? 0xC : 0) != 0 )
      return v8;
  }
  **(_BYTE **)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 32) = 0;
  return v3;
}

