/* Address: 0x140261c28 | Name: sub_140261C28 | Size: 744 bytes */
__int64 __fastcall sub_140261C28(__int64 a1)
{
  _DWORD *v2; // r15
  _UNKNOWN **v3; // rsi
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  __int64 v7; // rax
  void *v8; // rcx
  int LocaleInfoA; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  _BYTE *v13; // rdx
  char v14; // al
  _BYTE *v15; // r8
  char v16; // cl
  volatile signed __int32 *v17; // rax
  volatile signed __int32 *v18; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF

  v19[0] = a1;
  v19[1] = 0;
  if ( *(_QWORD *)(a1 + 328) || *(_QWORD *)(a1 + 320) )
  {
    v5 = 1;
    v3 = (_UNKNOWN **)calloc_base(1u, 0x98u);
    if ( !v3 )
      return v5;
    v7 = *(_QWORD *)(a1 + 248);
    *(_OWORD *)v3 = *(_OWORD *)v7;
    *((_OWORD *)v3 + 1) = *(_OWORD *)(v7 + 16);
    *((_OWORD *)v3 + 2) = *(_OWORD *)(v7 + 32);
    *((_OWORD *)v3 + 3) = *(_OWORD *)(v7 + 48);
    *((_OWORD *)v3 + 4) = *(_OWORD *)(v7 + 64);
    *((_OWORD *)v3 + 5) = *(_OWORD *)(v7 + 80);
    *((_OWORD *)v3 + 6) = *(_OWORD *)(v7 + 96);
    *((_OWORD *)v3 + 7) = *(_OWORD *)(v7 + 112);
    *((_OWORD *)v3 + 8) = *(_OWORD *)(v7 + 128);
    v3[18] = *(_UNKNOWN **)(v7 + 144);
    v4 = (_DWORD *)malloc_base(4u);
    free_base(nullptr);
    if ( !v4 )
    {
      v8 = v3;
LABEL_8:
      free_base(v8);
      return v5;
    }
    *v4 = 0;
    if ( !*(_QWORD *)(a1 + 328) )
    {
      v2 = nullptr;
      *v3 = off_140302AE0;
      v3[1] = off_140302AE8;
      v3[2] = off_140302AF0;
      v3[11] = off_140302B38;
      v3[12] = off_140302B40;
LABEL_26:
      *v4 = 1;
      if ( v2 )
        *v2 = 1;
      goto LABEL_28;
    }
    v2 = (_DWORD *)malloc_base(4u);
    free_base(nullptr);
    if ( !v2 )
    {
      free_base(v3);
LABEL_14:
      v8 = v4;
      goto LABEL_8;
    }
    *v2 = 0;
    LocaleInfoA = _acrt_GetLocaleInfoA((struct #68 *)v19, (__int64)v3);
    v10 = _acrt_GetLocaleInfoA((struct #68 *)v19, (__int64)(v3 + 1)) | LocaleInfoA;
    v11 = _acrt_GetLocaleInfoA((struct #68 *)v19, (__int64)(v3 + 2)) | v10;
    v12 = _acrt_GetLocaleInfoA((struct #68 *)v19, (__int64)(v3 + 11)) | v11;
    if ( v12 | (unsigned int)_acrt_GetLocaleInfoA((struct #68 *)v19, (__int64)(v3 + 12)) )
    {
      sub_140261BBC((__int64)v3);
      free_base(v3);
      free_base(v2);
      v5 = -1;
      goto LABEL_14;
    }
    v13 = v3[2];
    while ( 1 )
    {
      v14 = *v13;
      if ( !*v13 )
        goto LABEL_26;
      if ( (unsigned __int8)(v14 - 48) <= 9u )
        break;
      if ( v14 == 59 )
      {
        v15 = v13;
        do
        {
          v16 = v15[1];
          *v15++ = v16;
        }
        while ( v16 );
      }
      else
      {
LABEL_18:
        ++v13;
      }
    }
    *v13 = v14 - 48;
    goto LABEL_18;
  }
  v2 = nullptr;
  v3 = &off_140302AE0;
  v4 = nullptr;
LABEL_28:
  v17 = *(volatile signed __int32 **)(a1 + 232);
  if ( v17 )
    _InterlockedDecrement(v17);
  v18 = *(volatile signed __int32 **)(a1 + 224);
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 224));
      free_base(*(void **)(a1 + 248));
    }
  }
  *(_QWORD *)(a1 + 232) = v2;
  *(_QWORD *)(a1 + 224) = v4;
  *(_QWORD *)(a1 + 248) = v3;
  return 0;
}

