/* Address: 0x14026396c | Name: LangCountryEnumProc | Size: 586 bytes */
__int64 __fastcall LangCountryEnumProc(__int64 a1)
{
  _QWORD *v2; // rsi
  int *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  _WORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // [rsp+0h] [rbp-138h] BYREF
  _BYTE LCData[240]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v19; // [rsp+110h] [rbp-28h]

  v2 = (_QWORD *)(sub_140255A70() + 152);
  v3 = *(int **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString(a1);
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, __int64))GetLocaleInfoW)(
                        v4,
                        *((_DWORD *)v2 + 7) != 0 ? 7 : 4098,
                        LCData,
                        120) )
    goto LABEL_38;
  v5 = -1;
  if ( (unsigned int)sub_14026AE18(v2[1], LCData) )
    goto LABEL_20;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))GetLocaleInfoW)(
                        (unsigned int)v4,
                        *((_DWORD *)v2 + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
LABEL_38:
    *v3 = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
  }
  v6 = sub_14026AE18(*v2, LCData);
  v7 = *v3;
  if ( v6 )
  {
    if ( (v7 & 2) != 0 )
      goto LABEL_20;
    v9 = *v3;
    if ( *((_DWORD *)v2 + 5) )
    {
      v10 = wcsnicmp(*v2, LCData, *((int *)v2 + 5));
      v7 = *v3;
      if ( !v10 )
      {
        v3[2] = v4;
        *v3 = v7 | 2;
        v11 = -1;
        do
          ++v11;
        while ( *(_WORD *)(*v2 + 2 * v11) );
        if ( (_DWORD)v11 == *((_DWORD *)v2 + 5) )
          v3[1] = v4;
        goto LABEL_20;
      }
      v9 = *v3;
    }
    if ( (v9 & 1) == 0 )
    {
      v12 = 0;
      v13 = &unk_1402902A8;
      while ( (_WORD)v4 != *v13 )
      {
        ++v12;
        ++v13;
        if ( v12 >= 0xA )
        {
          v8 = v7 | 1;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v8 = v7 | 0x304;
    v3[1] = v4;
LABEL_19:
    v3[2] = v4;
    *v3 = v8;
  }
LABEL_20:
  if ( (*v3 & 0x300) == 0x300 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))GetLocaleInfoW)(
                        (unsigned int)v4,
                        *((_DWORD *)v2 + 6) != 0 ? 3 : 4097,
                        LCData,
                        120) )
    goto LABEL_38;
  if ( (unsigned int)sub_14026AE18(*v2, LCData) )
  {
    if ( *((_DWORD *)v2 + 6) || !*((_DWORD *)v2 + 5) || (unsigned int)sub_14026AE18(*v2, LCData) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
    v15 = 0;
    goto LABEL_33;
  }
  v14 = *v3 | 0x200;
  *v3 = v14;
  if ( !*((_DWORD *)v2 + 6) && *((_DWORD *)v2 + 5) )
  {
    do
      ++v5;
    while ( *(_WORD *)(*v2 + 2 * v5) );
    if ( (_DWORD)v5 == *((_DWORD *)v2 + 5) )
    {
      v15 = 1;
LABEL_33:
      if ( !(unsigned int)TestDefaultLanguage_0((unsigned int)v4, v15, v3) )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
      *v3 |= 0x100u;
      goto LABEL_35;
    }
  }
  *v3 = v14 | 0x100;
LABEL_35:
  if ( !v3[1] )
    v3[1] = v4;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v19);
}

