/* Address: 0x14025df6c | Name: sub_14025DF6C | Size: 782 bytes */
__int64 __fastcall sub_14025DF6C(unsigned __int8 *Start, unsigned __int8 *a2, __int64 *a3)
{
  __int64 i; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  char v8; // al
  __int64 v9; // r13
  unsigned int v10; // r8d
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // r8d
  int v16; // eax
  void *v17; // r15
  _BYTE *v18; // rcx
  char v19; // al
  __int64 v20; // rdx
  __int64 v22; // [rsp+0h] [rbp-100h] BYREF
  __int64 lpSearchFilter; // [rsp+20h] [rbp-E0h]
  __int64 dwAdditionalFlags; // [rsp+28h] [rbp-D8h]
  _QWORD v25[3]; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+48h] [rbp-B8h]
  _QWORD v27[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+68h] [rbp-98h]
  _QWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Block; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  char v33; // [rsp+98h] [rbp-68h]
  _QWORD v34[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  char v38; // [rsp+C8h] [rbp-38h]
  _BYTE FindFileData[44]; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v40[274]; // [rsp+FCh] [rbp-4h] BYREF
  __int64 v41; // [rsp+320h] [rbp+220h]

  for ( i = 0x200000000801LL; a2 != Start; a2 = mbsdec(Start, a2) )
  {
    v6 = *a2 - 47;
    if ( v6 <= 0x2Du && _bittest64(&i, (char)v6) )
      break;
  }
  if ( *a2 != 58 || a2 == Start + 1 )
  {
    v7 = *a2 - 47;
    if ( v7 > 0x2Du || (v8 = 1, !_bittest64(&i, (char)v7)) )
      v8 = 0;
    v34[0] = 0;
    v34[1] = 0;
    v35 = nullptr;
    v36 = 0;
    v37 = 0;
    v9 = (a2 - Start + 1) & -(__int64)(v8 != 0);
    v38 = 0;
    sub_140213644((_LocaleUpdate *)v25, nullptr);
    if ( *(_DWORD *)(v25[1] + 12LL) == 65001 )
    {
      if ( v26 )
        *(_DWORD *)(v25[0] + 936LL) &= ~2u;
      v10 = 65001;
    }
    else if ( (unsigned int)sub_14024EDA4() )
    {
      if ( v26 )
        *(_DWORD *)(v25[0] + 936LL) &= ~2u;
      v10 = 0;
    }
    else
    {
      if ( v26 )
        *(_DWORD *)(v25[0] + 936LL) &= ~2u;
      v10 = 1;
    }
    v11 = sub_140238394(Start, (__int64)v34, v10);
    v12 = v35;
    LODWORD(dwAdditionalFlags) = 0;
    lpSearchFilter = 0;
    if ( v11 )
      v12 = nullptr;
    v13 = ((__int64 (__fastcall *)(void *, _QWORD, _BYTE *, _QWORD, __int64, _DWORD))FindFirstFileExW)(
            v12,
            0,
            FindFileData,
            0,
            lpSearchFilter,
            dwAdditionalFlags);
    if ( v13 == -1 )
    {
      sub_14025DC58((__int64)Start, 0, 0, a3);
    }
    else
    {
      v14 = (a3[1] - *a3) >> 3;
      while ( 1 )
      {
        v29[0] = 0;
        v29[1] = 0;
        Block = nullptr;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        sub_140213644((_LocaleUpdate *)v27, nullptr);
        if ( *(_DWORD *)(v27[1] + 12LL) == 65001 )
        {
          if ( v28 )
            *(_DWORD *)(v27[0] + 936LL) &= ~2u;
          v15 = 65001;
        }
        else if ( (unsigned int)sub_14024EDA4() )
        {
          if ( v28 )
            *(_DWORD *)(v27[0] + 936LL) &= ~2u;
          v15 = 0;
        }
        else
        {
          if ( v28 )
            *(_DWORD *)(v27[0] + 936LL) &= ~2u;
          v15 = 1;
        }
        v16 = __acrt_wcs_to_mbs_cp<__crt_win32_buffer_internal_dynamic_resizing>(v40, (__int64)v29, v15);
        v17 = Block;
        v18 = Block;
        if ( v16 )
          v18 = nullptr;
        if ( *v18 != 46 || (v19 = v18[1]) != 0 && (v19 != 46 || v18[2]) )
        {
          if ( (unsigned int)sub_14025DC58((__int64)v18, (__int64)Start, v9, a3) )
            break;
        }
        if ( v33 )
          free_base(v17);
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *))FindNextFileW)(v13, FindFileData) )
        {
          v20 = (a3[1] - *a3) >> 3;
          if ( v14 != v20 )
            sub_14023AE00(
              *a3 + 8 * v14,
              v20 - v14,
              8u,
              (int (__fastcall *)(unsigned __int64, _BYTE *))unknown_libname_898);
          goto LABEL_52;
        }
      }
      if ( v33 )
        free_base(v17);
LABEL_52:
      ((void (__fastcall *)(__int64))FindClose)(v13);
    }
    if ( v38 )
      free_base(v35);
  }
  else
  {
    sub_14025DC58((__int64)Start, 0, 0, a3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v41);
}

