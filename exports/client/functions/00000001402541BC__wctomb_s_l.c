/* Address: 0x1402541bc | Name: _wctomb_s_l | Size: 412 bytes */
__int64 __fastcall wctomb_s_l(
        int *a1,
        _WORD *a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        struct __crt_locale_pointers *Locale)
{
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+58h] [rbp-8h]
  __int128 v16; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int16 v17; // [rsp+98h] [rbp+38h] BYREF

  v17 = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      v9 = 22;
      *errno() = 22;
      sub_14024CF6C();
      return v9;
    }
    sub_140213644((_LocaleUpdate *)&v13, Locale);
    v10 = *(_DWORD *)(v14 + 12);
    if ( v10 == 65001 )
    {
      *(_QWORD *)&v16 = 0;
      v11 = __crt_mbstring::__c32rtomb_utf8(a2, v17, &v16);
      if ( a1 )
        *a1 = v11;
      if ( v11 > 4 )
      {
        v9 = *errno();
        goto LABEL_21;
      }
      goto LABEL_33;
    }
    if ( !*(_QWORD *)(v14 + 312) )
    {
      if ( v17 > 0xFFu )
      {
        if ( a2 && a3 )
          MEMORY[0x1401FCD30](a2, 0, a3);
        goto LABEL_20;
      }
      if ( !a2 )
        goto LABEL_27;
      if ( a3 )
      {
        *(_BYTE *)a2 = v17;
LABEL_27:
        if ( a1 )
          *a1 = 1;
LABEL_33:
        v9 = 0;
        goto LABEL_21;
      }
LABEL_38:
      v9 = 34;
      *errno() = 34;
      sub_14024CF6C();
LABEL_21:
      if ( v15 )
        *(_DWORD *)(v13 + 936) &= ~2u;
      return v9;
    }
    LODWORD(v16) = 0;
    v12 = sub_140258A84(v10, 0, (unsigned int)&v17, 1, (_DWORD)a2, a3, 0, (__int64)&v16);
    if ( v12 )
    {
      if ( !(_DWORD)v16 )
      {
        if ( a1 )
          *a1 = v12;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)((__int64 (*)(void))GetLastError)() == 122 )
    {
      if ( a2 && a3 )
        MEMORY[0x1401FCD30](a2, 0, a3);
      goto LABEL_38;
    }
LABEL_20:
    v9 = 42;
    *errno() = 42;
    goto LABEL_21;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

