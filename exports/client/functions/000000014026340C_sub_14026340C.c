/* Address: 0x14026340c | Name: sub_14026340C | Size: 611 bytes */
__int64 __fastcall sub_14026340C(_WORD *a1, signed int *a2, __int64 a3)
{
  __int64 v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  _WORD **v10; // rdi
  #49 *v11; // rcx
  signed int v12; // eax
  signed int v13; // ebx
  __int64 v14; // r9

  v6 = sub_140255A70();
  v7 = a1;
  v8 = v6 + 152;
  *(_DWORD *)(v6 + 168) = 0;
  v9 = v6 + 752;
  *(_QWORD *)(v6 + 152) = a1;
  v10 = (_WORD **)(v6 + 160);
  *(_WORD *)(v6 + 752) = 0;
  *(_QWORD *)(v6 + 160) = a1 + 64;
  if ( a1[64] )
  {
    TranslateName((__int64)&off_14028F6F0, 22, (_QWORD *)(v6 + 160));
    v7 = *(_WORD **)v8;
  }
  if ( !*v7 )
  {
    GetLocaleNameFromDefault(v8);
    goto LABEL_13;
  }
  if ( **v10 )
    GetLocaleNameFromLangCountry(v8);
  else
    GetLocaleNameFromLanguage(v8);
  if ( !*(_DWORD *)(v8 + 16) )
  {
    if ( (unsigned int)TranslateName((__int64)&off_14028F2D0, 64, (_QWORD *)v8) )
    {
      if ( **v10 )
        GetLocaleNameFromLangCountry(v8);
      else
        GetLocaleNameFromLanguage(v8);
    }
LABEL_13:
    if ( !*(_DWORD *)(v8 + 16) )
      return 0;
  }
  v11 = (#49 *)(a1 + 128);
  if ( *a1 || *(_WORD *)v11 )
    v12 = ProcessCodePage(v11, v8);
  else
    v12 = ((__int64 (*)(void))GetACP)();
  v13 = v12;
  if ( v12 && v12 != 65000 && (unsigned int)((__int64 (__fastcall *)(_QWORD))IsValidCodePage)((unsigned __int16)v12) )
  {
    if ( a2 )
      *a2 = v13;
    if ( !a3 )
      return 1;
    v14 = -1;
    *(_WORD *)(a3 + 288) = 0;
    do
      ++v14;
    while ( *(_WORD *)(v9 + 2 * v14) );
    if ( (unsigned int)sub_140260D80((_WORD *)(a3 + 288), 85, v9, v14 + 1) )
      goto LABEL_38;
    if ( (unsigned int)sub_14024F174(a3 + 288, 0x1001u, a3, 0x40u)
      && (unsigned int)sub_14024F174(a3 + 288, 0x1002u, a3 + 128, 0x40u)
      && (!MEMORY[0x14026CEFC](a3 + 128, 95) && !MEMORY[0x14026CEFC](a3 + 128, 46)
       || (unsigned int)sub_14024F174(a3 + 288, 7u, a3 + 128, 0x40u)) )
    {
      if ( v13 != 65001 )
      {
        itow_s(v13, (__int16 *)(a3 + 256), 0x10u, 0xAu);
        return 1;
      }
      if ( !(unsigned int)sub_140260D80((_WORD *)(a3 + 256), 16, (__int64)L"utf8", 5) )
        return 1;
LABEL_38:
      sub_14024CFBC();
      JUMPOUT(0x14026366ELL);
    }
  }
  return 0;
}

