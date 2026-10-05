/* Address: 0x1402630dc | Name: LanguageEnumProcEx | Size: 234 bytes */
__int64 __fastcall LanguageEnumProcEx(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r9
  _QWORD v6[6]; // [rsp+0h] [rbp-138h] BYREF
  _BYTE v7[240]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v8; // [rsp+120h] [rbp-18h]

  v2 = sub_140255A70();
  v3 = v2 + 152;
  if ( (unsigned int)sub_14024F174(a1, *(_DWORD *)(v2 + 176) != 0 ? 3 : 4097, (__int64)v7, 0x78u) )
  {
    if ( !(unsigned int)sub_14026AE18(*(_QWORD *)v3, v7) )
    {
      v4 = -1;
      do
        ++v4;
      while ( *(_WORD *)(a1 + 2 * v4) );
      if ( (unsigned int)sub_140260D80((_WORD *)(v3 + 600), 85, a1, v4 + 1) )
      {
        v6[4] = 0;
        sub_14024CFBC();
        JUMPOUT(0x1402631C5LL);
      }
      *(_DWORD *)(v3 + 16) |= 4u;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 16) = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v6 ^ v8);
}

