/* Address: 0x14025e9f0 | Name: ?get_file_name@@YAPEADQEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QEA_W@Z | Size: 157 bytes */
__int64 __fastcall get_file_name(__int64 a1, _WORD *a2)
{
  int v4; // r8d
  _QWORD v6[3]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v6, nullptr);
  v4 = 65001;
  if ( *(_DWORD *)(v6[1] + 12LL) == 65001 )
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
    v4 = 0;
  }
  else
  {
    if ( v7 )
      *(_DWORD *)(v6[0] + 936LL) &= ~2u;
    v4 = 1;
  }
  if ( (unsigned int)__acrt_wcs_to_mbs_cp<__crt_win32_buffer_internal_dynamic_resizing>(a2, a1, v4) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

