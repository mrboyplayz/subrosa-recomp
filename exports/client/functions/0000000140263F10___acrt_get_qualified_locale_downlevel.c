/* Address: 0x140263f10 | Name: __acrt_get_qualified_locale_downlevel | Size: 638 bytes */
__int64 __fastcall _acrt_get_qualified_locale_downlevel(__int64 a1, signed int *a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  _WORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  signed int v11; // eax
  signed int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-40h] BYREF
  __int64 Locale; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-10h]

  v6 = sub_140255A70();
  Locale = 0;
  LODWORD(v16) = 0;
  v7 = (_QWORD *)(v6 + 160);
  *(_QWORD *)(sub_140255A70() + 928) = &Locale;
  *(_QWORD *)(v6 + 152) = a1;
  *(_QWORD *)(v6 + 160) = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) )
    TranslateName_0((__int64)&off_14028F6F0, 22, (_QWORD *)(v6 + 160));
  LODWORD(Locale) = 0;
  v8 = *(_WORD **)(v6 + 152);
  if ( !v8 || !*v8 )
  {
    if ( *v7 && *(_WORD *)*v7 )
    {
      v9 = sub_140255A70();
      v10 = -1;
      do
        ++v10;
      while ( *(_WORD *)(*(_QWORD *)(v9 + 160) + 2 * v10) );
      *(_DWORD *)(v9 + 180) = v10 == 3;
      ((void (__fastcall *)(__int64 (__fastcall *)(__int64), __int64))EnumSystemLocalesW)(CountryEnumProc, 1);
      if ( (Locale & 4) == 0 )
        LODWORD(Locale) = 0;
    }
    else
    {
      LODWORD(Locale) = 260;
      LODWORD(v16) = ((__int64 (*)(void))GetUserDefaultLCID)();
      HIDWORD(Locale) = v16;
    }
LABEL_23:
    if ( !(_DWORD)Locale )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v17);
    goto LABEL_24;
  }
  if ( *v7 && *(_WORD *)*v7 )
    GetLcidFromLangCountry(&Locale);
  else
    GetLcidFromLanguage(&Locale);
  if ( !(_DWORD)Locale )
  {
    if ( TranslateName_0((__int64)&off_14028F2D0, 64, (_QWORD *)(v6 + 152)) )
    {
      if ( *v7 && *(_WORD *)*v7 )
        GetLcidFromLangCountry(&Locale);
      else
        GetLcidFromLanguage(&Locale);
    }
    goto LABEL_23;
  }
LABEL_24:
  v11 = ProcessCodePage_0((#49 *)((a1 + 256) & -(__int64)(a1 != 0)), (__int64)&Locale);
  v12 = v11;
  if ( v11
    && (unsigned int)((__int64 (__fastcall *)(_QWORD))IsValidCodePage)((unsigned __int16)v11)
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64))IsValidLocale)(HIDWORD(Locale), 1) )
  {
    if ( a2 )
      *a2 = v12;
    sub_14024F460(HIDWORD(Locale), v6 + 752, 0x55u, 0);
    if ( a3 )
    {
      sub_14024F460(HIDWORD(Locale), a3 + 288, 0x55u, 0);
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                           HIDWORD(Locale),
                           4097,
                           a3,
                           64) )
      {
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))GetLocaleInfoW)(
                             (unsigned int)v16,
                             4098,
                             a3 + 128,
                             64) )
          itow_s(v12, (__int16 *)(a3 + 256), 0x10u, 0xAu);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v17);
}

