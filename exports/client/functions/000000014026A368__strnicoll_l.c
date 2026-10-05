/* Address: 0x14026a368 | Name: _strnicoll_l | Size: 256 bytes */
__int64 __fastcall strnicoll_l(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 Locale; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v11, a4);
  if ( a3 )
  {
    if ( a1 && a2 )
    {
      v7 = 0x7FFFFFFF;
      if ( a3 <= 0x7FFFFFFF )
      {
        v8 = *(_QWORD *)(Locale + 304);
        if ( v8 )
        {
          v9 = _acrt_CompareStringA(
                 (unsigned int)&Locale,
                 v8,
                 4097,
                 (_DWORD)a1,
                 a3,
                 (__int64)a2,
                 a3,
                 *(_DWORD *)(Locale + 20));
          if ( v9 )
            v7 = v9 - 2;
          else
            *errno() = 22;
        }
        else
        {
          v7 = strnicmp_l(a1, a2, a3, (struct __crt_locale_pointers *)&Locale);
        }
      }
      else
      {
        *errno() = 22;
        sub_14024CF6C();
      }
    }
    else
    {
      *errno() = 22;
      sub_14024CF6C();
      v7 = 0x7FFFFFFF;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v13 )
    *(_DWORD *)(v11 + 936) &= ~2u;
  return v7;
}

