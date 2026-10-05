/* Address: 0x140263bb8 | Name: LanguageEnumProc | Size: 264 bytes */
__int64 __fastcall LanguageEnumProc(__int64 a1)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-128h] BYREF
  _BYTE LCData[240]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v11; // [rsp+110h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = *(_DWORD **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString(a1);
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, __int64))GetLocaleInfoW)(
                        v4,
                        *(_DWORD *)(v2 + 176) != 0 ? 3 : 4097,
                        LCData,
                        120) )
  {
    *v3 = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
  }
  v5 = sub_14026AE18(*(_QWORD *)(v2 + 152), LCData);
  v6 = *(_DWORD *)(v2 + 176);
  if ( !v5 )
  {
    if ( v6 )
      goto LABEL_11;
    v7 = 1;
LABEL_10:
    if ( !(unsigned int)TestDefaultLanguage_0((unsigned int)v4, v7, v3) )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
LABEL_11:
    *v3 |= 4u;
    v3[1] = v4;
    v3[2] = v4;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
  }
  if ( !v6 && *(_DWORD *)(v2 + 172) && !(unsigned int)sub_14026AE18(*(_QWORD *)(v2 + 152), LCData) )
  {
    v7 = 0;
    goto LABEL_10;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
}

