/* Address: 0x14026a260 | Name: _wcsnicoll_l | Size: 240 bytes */
__int64 __fastcall wcsnicoll_l(__int64 a1, __int64 a2, unsigned __int64 a3, struct __crt_locale_pointers *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  _QWORD v11[3]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-10h]

  if ( !a3 )
    return 0;
  if ( a1 && a2 )
  {
    v8 = 0x7FFFFFFF;
    if ( a3 <= 0x7FFFFFFF )
    {
      sub_140213644((_LocaleUpdate *)v11, a4);
      v9 = *(_QWORD *)(v11[1] + 304LL);
      if ( v9 )
      {
        v10 = _acrt_CompareStringW(v9, 4097, a1, a3, a2, a3);
        if ( v10 )
          v8 = v10 - 2;
        else
          *errno() = 22;
      }
      else
      {
        v8 = _ascii_wcsnicmp(a1, a2, a3);
      }
      if ( v12 )
        *(_DWORD *)(v11[0] + 936LL) &= ~2u;
    }
    else
    {
      *errno() = 22;
      sub_14024CF6C();
    }
    return v8;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
}

