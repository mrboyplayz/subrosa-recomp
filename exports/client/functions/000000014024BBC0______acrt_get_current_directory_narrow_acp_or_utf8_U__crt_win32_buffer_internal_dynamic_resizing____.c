/* Address: 0x14024bbc0 | Name: ??$__acrt_get_current_directory_narrow_acp_or_utf8@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z | Size: 284 bytes */
__int64 __fastcall __acrt_get_current_directory_narrow_acp_or_utf8<__crt_win32_buffer_internal_dynamic_resizing>(
        __int64 a1)
{
  int current_directory; // eax
  char v3; // bl
  int v4; // r8d
  __int64 v6; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v8; // [rsp+38h] [rbp-C8h]
  _QWORD v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *Block; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  char v13; // [rsp+68h] [rbp-98h]
  _BYTE v14[528]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+280h] [rbp+180h]

  v12 = 0;
  v9[0] = v14;
  v13 = 0;
  v9[1] = 260;
  v11 = 260;
  Block = v14;
  current_directory = __acrt_get_current_directory_wide<__crt_win32_buffer_internal_dynamic_resizing>(v9);
  v3 = current_directory;
  if ( !current_directory )
  {
    sub_140213644((_LocaleUpdate *)v7, nullptr);
    v4 = 65001;
    if ( *(_DWORD *)(v7[1] + 12LL) == 65001 )
    {
      if ( v8 != v3 )
        *(_DWORD *)(v7[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( v8 )
        *(_DWORD *)(v7[0] + 936LL) &= ~2u;
      v4 = 0;
    }
    else
    {
      if ( v8 )
        *(_DWORD *)(v7[0] + 936LL) &= ~2u;
      v4 = 1;
    }
    __acrt_wcs_to_mbs_cp<__crt_win32_buffer_internal_dynamic_resizing>(Block, a1, v4);
  }
  if ( v13 )
    free_base(Block);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v15);
}

