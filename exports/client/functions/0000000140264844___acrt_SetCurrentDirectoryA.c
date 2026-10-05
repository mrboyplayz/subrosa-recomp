/* Address: 0x140264844 | Name: __acrt_SetCurrentDirectoryA | Size: 207 bytes */
__int64 __fastcall _acrt_SetCurrentDirectoryA(_BYTE *a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+38h] [rbp-38h]
  _QWORD v7[2]; // [rsp+40h] [rbp-30h] BYREF
  void *lpPathName; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  char v11; // [rsp+68h] [rbp-8h]

  v7[0] = 0;
  v7[1] = 0;
  lpPathName = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_140213644((_LocaleUpdate *)v5, nullptr);
  v2 = 65001;
  if ( *(_DWORD *)(v5[1] + 12LL) == 65001 )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
    v2 = 0;
  }
  else
  {
    if ( v6 )
      *(_DWORD *)(v5[0] + 936LL) &= ~2u;
    v2 = 1;
  }
  if ( (unsigned int)sub_140238394(a1, (__int64)v7, v2) )
    v3 = 0;
  else
    v3 = ((__int64 (__fastcall *)(void *))SetCurrentDirectoryW)(lpPathName);
  if ( v11 )
    free_base(lpPathName);
  return v3;
}

