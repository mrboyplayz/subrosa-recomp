/* Address: 0x14025b344 | Name: sub_14025B344 | Size: 286 bytes */
__int64 __fastcall sub_14025B344(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v8; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v10; // [rsp+38h] [rbp-C8h]
  _QWORD v11[5]; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+68h] [rbp-98h]
  _WORD Filename[264]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+280h] [rbp+180h]

  v3 = a3;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _WORD *, __int64))GetModuleFileNameW)(a1, Filename, 261) )
  {
    v11[4] = 0;
    v11[0] = a2;
    v11[1] = v3;
    v11[3] = v3;
    v11[2] = a2;
    v12 = 0;
    sub_140213644((_LocaleUpdate *)v9, nullptr);
    v6 = 65001;
    if ( *(_DWORD *)(v9[1] + 12LL) == 65001 )
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
      v6 = 0;
    }
    else
    {
      if ( v10 )
        *(_DWORD *)(v9[0] + 936LL) &= ~2u;
      v6 = 1;
    }
    __acrt_wcs_to_mbs_cp<__crt_win32_buffer_no_resizing>(Filename, (__int64)v11, v6);
  }
  else
  {
    v5 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v5);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v14);
}

