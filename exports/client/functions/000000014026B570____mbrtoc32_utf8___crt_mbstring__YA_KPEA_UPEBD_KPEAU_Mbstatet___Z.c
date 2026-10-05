/* Address: 0x14026b570 | Name: ?__mbrtoc32_utf8@__crt_mbstring@@YA_KPEA_UPEBD_KPEAU_Mbstatet@@@Z | Size: 476 bytes */
__int64 __fastcall __crt_mbstring::__mbrtoc32_utf8(__int64 a1, char *a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  char *v5; // rdi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rsi
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // bl
  unsigned int v12; // edx
  unsigned __int64 v13; // r9
  char v14; // cl
  _DWORD v16[12]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v4 = &dword_140404A6C[19065863];
  v5 = Parameters;
  if ( a4 )
    v4 = a4;
  if ( a2 )
    v5 = a2;
  v7 = 1;
  if ( a2 )
    v7 = a3;
  v8 = (_DWORD *)(a1 & -(__int64)(a2 != nullptr));
  if ( v7 )
  {
    if ( *((_WORD *)v4 + 3) )
    {
      v10 = *((_BYTE *)v4 + 4);
      v12 = *v4;
      v11 = *((_BYTE *)v4 + 6);
      if ( (unsigned __int8)(v10 - 2) > 2u || !v11 || v11 >= v10 )
        goto LABEL_37;
    }
    else
    {
      v9 = *v5++;
      if ( (v9 & 0x80u) == 0 )
      {
        if ( v8 )
          *v8 = v9;
        return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v17);
      }
      if ( (v9 & 0xE0) == 0xC0 )
      {
        v10 = 2;
      }
      else if ( (v9 & 0xF0) == 0xE0 )
      {
        v10 = 3;
      }
      else
      {
        if ( (v9 & 0xF8) != 0xF0 )
          goto LABEL_37;
        v10 = 4;
      }
      v11 = v10;
      v12 = v9 & ((1 << (7 - v10)) - 1);
    }
    v13 = v11;
    if ( v11 >= v7 )
      v13 = v7;
    while ( v5 - a2 < v13 )
    {
      v14 = *v5++;
      if ( (v14 & 0xC0) != 0x80 )
        goto LABEL_37;
      v12 = (v12 << 6) | v14 & 0x3F;
    }
    if ( v13 < v11 )
    {
      *((_WORD *)v4 + 2) = v10;
      *((_WORD *)v4 + 3) = (unsigned __int8)(v11 - v13);
      *v4 = v12;
      return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v17);
    }
    if ( v12 - 55296 > 0x7FF && v12 < 0x110000 )
    {
      v16[8] = 128;
      v16[9] = 2048;
      v16[10] = 0x10000;
      if ( v12 >= v16[v10 + 6] )
      {
        if ( v8 )
          *v8 = v12;
        *(_QWORD *)v4 = 0;
        return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v17);
      }
    }
LABEL_37:
    *(_QWORD *)v4 = 0;
    *errno() = 42;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v17);
}

