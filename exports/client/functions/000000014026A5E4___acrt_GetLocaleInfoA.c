/* Address: 0x14026a5e4 | Name: __acrt_GetLocaleInfoA | Size: 456 bytes */
__int64 __fastcall _acrt_GetLocaleInfoA(struct #68 *a1, int a2, const #49 *a3, unsigned int a4, __int64 *a5)
{
  int LocaleInfoA; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r15d
  char *v12; // rax
  void *v13; // rbx
  int v14; // eax
  _BYTE *v15; // rax
  signed int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v20; // [rsp+0h] [rbp-108h] BYREF
  int v21[2]; // [rsp+20h] [rbp-E8h]
  _DWORD v22[4]; // [rsp+30h] [rbp-D8h] BYREF
  char Source[128]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-48h]

  *a5 = 0;
  switch ( a2 )
  {
    case 1:
      LocaleInfoA = InternalGetLocaleInfoA(a1, a3, a4, Source, 128);
      v9 = LocaleInfoA;
      if ( LocaleInfoA )
      {
        *a5 = calloc_base(LocaleInfoA, 1u);
        free_base(nullptr);
        if ( *a5 && (unsigned int)strncpy_s((_BYTE *)*a5, v9, (__int64)Source, (int)v9 - 1) )
        {
          *(_QWORD *)v21 = 0;
          sub_14024CFBC();
          __debugbreak();
        }
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
      }
      if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 122 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
      v10 = InternalGetLocaleInfoA(a1, a3, a4, nullptr, 0);
      v11 = v10;
      if ( !v10 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
      v12 = (char *)calloc_base(v10, 1u);
      v13 = v12;
      if ( !v12 )
      {
LABEL_12:
        free_base(v13);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
      }
      v14 = InternalGetLocaleInfoA(a1, a3, a4, v12, v11);
LABEL_10:
      if ( v14 )
      {
        v15 = v13;
        v13 = nullptr;
        *a5 = (__int64)v15;
      }
      goto LABEL_12;
    case 2:
      v16 = sub_14024F174((__int64)a3, a4, 0, 0);
      v17 = v16;
      if ( !v16 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
      v18 = calloc_base(v16, 2u);
      v13 = (void *)v18;
      if ( !v18 )
        goto LABEL_12;
      v14 = sub_14024F174((__int64)a3, a4, v18, v17);
      goto LABEL_10;
    case 0:
      v22[0] = 0;
      if ( (unsigned int)sub_14024F174((__int64)a3, a4 | 0x20000000, (__int64)v22, 2u) )
        *(_BYTE *)a5 = v22[0];
      break;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v24);
}

