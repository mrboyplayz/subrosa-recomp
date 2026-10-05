/* Address: 0x140262df0 | Name: LangCountryEnumProcEx | Size: 746 bytes */
__int64 __fastcall LangCountryEnumProcEx(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  _WORD *v9; // rcx
  __int64 v10; // rcx
  __int16 *v11; // r9
  int v12; // r8d
  __int16 *v13; // rcx
  __int16 v14; // dx
  __int64 v15; // rax
  _QWORD v17[6]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE String2[128]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-28h]

  v2 = sub_140255A70();
  v3 = (_QWORD *)(v2 + 152);
  if ( !(unsigned int)sub_14024F174(a1, *(_DWORD *)(v2 + 180) != 0 ? 7 : 4098, (__int64)String2, 0x40u) )
    goto LABEL_2;
  v4 = -1;
  if ( !(unsigned int)sub_14026AE18(v3[1], String2) )
  {
    if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)v3 + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    {
LABEL_2:
      *((_DWORD *)v3 + 4) = 0;
      return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
    }
    v5 = sub_14026AE18(*v3, String2);
    v6 = *((_DWORD *)v3 + 4);
    if ( v5 )
    {
      if ( (v6 & 2) != 0 )
        goto LABEL_15;
      if ( !*((_DWORD *)v3 + 5) || (unsigned int)wcsnicmp(*v3, String2, *((int *)v3 + 5)) )
      {
        if ( (v3[2] & 1) != 0 || !(unsigned int)TestDefaultCountry(a1) )
          goto LABEL_15;
        *((_DWORD *)v3 + 4) |= 1u;
        v7 = -1;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 2 * v7) );
      }
      else
      {
        *((_DWORD *)v3 + 4) |= 2u;
        v7 = -1;
        do
          ++v7;
        while ( *(_WORD *)(a1 + 2 * v7) );
      }
    }
    else
    {
      v7 = -1;
      *((_DWORD *)v3 + 4) = v6 | 0x304;
      do
        ++v7;
      while ( *(_WORD *)(a1 + 2 * v7) );
    }
    if ( (unsigned int)sub_140260D80((_WORD *)v3 + 300, 85, a1, v7 + 1) )
      goto LABEL_47;
  }
LABEL_15:
  if ( (v3[2] & 0x300) == 0x300 )
    return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
  if ( !(unsigned int)sub_14024F174(a1, *((_DWORD *)v3 + 6) != 0 ? 3 : 4097, (__int64)String2, 0x40u) )
    goto LABEL_2;
  if ( (unsigned int)sub_14026AE18(*v3, String2) )
    return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
  v8 = *((_DWORD *)v3 + 4) | 0x200;
  *((_DWORD *)v3 + 4) = v8;
  if ( *((_DWORD *)v3 + 6) )
  {
    v9 = v3 + 75;
    *((_DWORD *)v3 + 4) = v8 | 0x100;
    if ( *((_WORD *)v3 + 300) )
      return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    goto LABEL_45;
  }
  if ( !*((_DWORD *)v3 + 5) )
    goto LABEL_43;
  v10 = -1;
  do
    ++v10;
  while ( *(_WORD *)(*v3 + 2 * v10) );
  if ( (_DWORD)v10 != *((_DWORD *)v3 + 5) )
  {
LABEL_43:
    v9 = v3 + 75;
    *((_DWORD *)v3 + 4) = v8 | 0x100;
    if ( *((_WORD *)v3 + 300) )
      return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    goto LABEL_45;
  }
  if ( (unsigned int)TestDefaultCountry(a1) )
    goto LABEL_51;
  v11 = (__int16 *)*v3;
  v12 = 0;
  v13 = (__int16 *)*v3;
  if ( *v3 )
  {
    v14 = *v11;
    while ( 1 )
    {
      ++v13;
      if ( (unsigned __int16)(v14 - 65) > 0x19u && (unsigned __int16)(v14 - 97) > 0x19u )
        break;
      v14 = *v13;
      ++v12;
    }
  }
  v15 = -1;
  do
    ++v15;
  while ( v11[v15] );
  if ( v12 != (_DWORD)v15 )
  {
LABEL_51:
    *((_DWORD *)v3 + 4) |= 0x100u;
    v9 = v3 + 75;
    if ( !*((_WORD *)v3 + 300) )
    {
      do
        ++v4;
      while ( *(_WORD *)(a1 + 2 * v4) );
LABEL_45:
      if ( !(unsigned int)sub_140260D80(v9, 85, a1, v4 + 1) )
        return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
LABEL_47:
      v17[4] = 0;
      sub_14024CFBC();
      JUMPOUT(0x1402630D9LL);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
}

