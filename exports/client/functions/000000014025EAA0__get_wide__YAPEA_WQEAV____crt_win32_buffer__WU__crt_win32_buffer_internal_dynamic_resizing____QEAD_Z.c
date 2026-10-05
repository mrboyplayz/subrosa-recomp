/* Address: 0x14025eaa0 | Name: ?get_wide@@YAPEA_WQEAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@QEAD@Z | Size: 157 bytes */
__int64 __fastcall get_wide(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // r8d
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
  if ( (unsigned int)sub_140238394(a2, a1, v4) )
    return 0;
  else
    return *(_QWORD *)(a1 + 16);
}

