/* Address: 0x140263670 | Name: CountryEnumProc | Size: 232 bytes */
__int64 __fastcall CountryEnumProc(__int64 a1)
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebx
  _WORD *i; // rax
  __int64 v8; // [rsp+0h] [rbp-128h] BYREF
  _BYTE LCData[240]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v10; // [rsp+110h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = *(_DWORD **)(sub_140255A70() + 928);
  v4 = (unsigned int)LcidFromHexString(a1);
  v5 = 0;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, __int64))GetLocaleInfoW)(
                       v4,
                       *(_DWORD *)(v2 + 180) != 0 ? 7 : 4098,
                       LCData,
                       120) )
  {
    if ( !(unsigned int)sub_14026AE18(*(_QWORD *)(v2 + 160), LCData) )
    {
      for ( i = &unk_1402902A8; (_WORD)v4 != *i; ++i )
      {
        if ( (unsigned int)++v5 >= 0xA )
        {
          *v3 |= 4u;
          v3[2] = v4;
          v3[1] = v4;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
        }
      }
    }
  }
  else
  {
    *v3 = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v10);
}

