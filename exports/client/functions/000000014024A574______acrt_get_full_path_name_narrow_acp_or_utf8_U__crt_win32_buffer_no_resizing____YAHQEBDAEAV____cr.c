/* Address: 0x14024a574 | Name: ??$__acrt_get_full_path_name_narrow_acp_or_utf8@U__crt_win32_buffer_no_resizing@@@@YAHQEBDAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@@Z | Size: 375 bytes */
__int64 __fastcall __acrt_get_full_path_name_narrow_acp_or_utf8<__crt_win32_buffer_no_resizing>(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // rsi
  unsigned int v5; // edi
  int full_path_name; // eax
  __int64 v8; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  char v15; // [rsp+68h] [rbp-98h]
  _QWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  char v20; // [rsp+98h] [rbp-68h]
  _BYTE v21[528]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[528]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v23; // [rsp+4C0h] [rbp+3C0h]

  v19 = 0;
  v14 = 0;
  v2 = v21;
  v16[0] = v21;
  v17 = v21;
  v16[1] = 260;
  v11[0] = v22;
  v18 = 260;
  v11[1] = 260;
  v13 = 260;
  Block = v22;
  v20 = 0;
  v15 = 0;
  sub_140213644((_LocaleUpdate *)v9, nullptr);
  v5 = 65001;
  if ( *(_DWORD *)(v9[1] + 12LL) == 65001 )
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    v5 = 0;
  }
  else
  {
    if ( v10 )
      *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    v5 = 1;
  }
  if ( !(unsigned int)sub_140238394(a1, (__int64)v11, v5) )
  {
    full_path_name = __acrt_get_full_path_name_wide<__crt_win32_buffer_internal_dynamic_resizing>(Block, v16);
    v2 = v17;
    if ( !full_path_name )
      __acrt_wcs_to_mbs_cp<__crt_win32_buffer_no_resizing>(v17, a2, v5);
  }
  if ( v15 )
    free_base(Block);
  if ( v20 )
    free_base(v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v23);
}

