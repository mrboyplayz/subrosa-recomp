/* Address: 0x140261654 | Name: sub_140261654 | Size: 1331 bytes */
__int64 __fastcall sub_140261654(__int64 a1)
{
  _DWORD *v1; // r15
  _DWORD *v3; // r12
  char **v4; // r14
  char **v6; // rcx
  int LocaleInfoA; // ebx
  int v8; // ebx
  int v9; // ebx
  char **v10; // r13
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  char *v28; // rdx
  char v29; // al
  char *v30; // r8
  char v31; // cl
  volatile signed __int32 *v32; // rax
  volatile signed __int32 *v33; // rcx
  _QWORD v34[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = nullptr;
  v34[0] = a1;
  v34[1] = 0;
  if ( *(_QWORD *)(a1 + 320) || *(_QWORD *)(a1 + 328) )
  {
    v4 = (char **)calloc_base(1u, 0x98u);
    free_base(nullptr);
    if ( !v4 )
      return 1;
    v3 = (_DWORD *)calloc_base(1u, 4u);
    free_base(nullptr);
    if ( !v3 )
    {
      v6 = v4;
LABEL_8:
      free_base(v6);
      return 1;
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      v1 = (_DWORD *)calloc_base(1u, 4u);
      free_base(nullptr);
      if ( !v1 )
      {
        free_base(v4);
        v6 = (char **)v3;
        goto LABEL_8;
      }
      LocaleInfoA = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 3));
      v8 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 4)) | LocaleInfoA;
      v9 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 5)) | v8;
      v10 = v4 + 7;
      v11 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 6)) | v9;
      v12 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 7)) | v11;
      v13 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 8)) | v12;
      v14 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 9)) | v13;
      v15 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 10)) | v14;
      v16 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 81) | v15;
      v17 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 82) | v16;
      v18 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 83) | v17;
      v19 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 84) | v18;
      v20 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 85) | v19;
      v21 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 86) | v20;
      v22 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)v4 + 87) | v21;
      v23 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 13)) | v22;
      v24 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 14)) | v23;
      v25 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 15)) | v24;
      v26 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 16)) | v25;
      v27 = _acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 17)) | v26;
      if ( v27 | (unsigned int)_acrt_GetLocaleInfoA((struct #68 *)v34, (__int64)(v4 + 18)) )
      {
        sub_140261548(v4);
        free_base(v4);
        free_base(v3);
        free_base(v1);
        return 1;
      }
      v28 = *v10;
      v29 = **v10;
      if ( v29 )
      {
        do
        {
          if ( (unsigned __int8)(v29 - 48) > 9u )
          {
            if ( v29 == 59 )
            {
              v30 = v28;
              do
              {
                v31 = v30[1];
                *v30++ = v31;
              }
              while ( v31 );
              goto LABEL_18;
            }
          }
          else
          {
            *v28 = v29 - 48;
          }
          ++v28;
LABEL_18:
          v29 = *v28;
        }
        while ( *v28 );
      }
    }
    else
    {
      *(_OWORD *)v4 = *(_OWORD *)&off_140302AE0;
      *((_OWORD *)v4 + 1) = *(_OWORD *)&off_140302AF0;
      *((_OWORD *)v4 + 2) = *(_OWORD *)&off_140302B00;
      *((_OWORD *)v4 + 3) = *(_OWORD *)&off_140302B10;
      *((_OWORD *)v4 + 4) = *(_OWORD *)&off_140302B20;
      *((_OWORD *)v4 + 5) = unk_140302B30;
      *((_OWORD *)v4 + 6) = *(_OWORD *)&off_140302B40;
      *((_OWORD *)v4 + 7) = *(_OWORD *)&off_140302B50;
      *((_OWORD *)v4 + 8) = *(_OWORD *)&off_140302B60;
      v4[18] = (char *)off_140302B70;
    }
    *v4 = **(char ***)(a1 + 248);
    v4[1] = *(char **)(*(_QWORD *)(a1 + 248) + 8LL);
    v4[2] = *(char **)(*(_QWORD *)(a1 + 248) + 16LL);
    v4[11] = *(char **)(*(_QWORD *)(a1 + 248) + 88LL);
    v4[12] = *(char **)(*(_QWORD *)(a1 + 248) + 96LL);
    *v3 = 1;
    if ( v1 )
      *v1 = 1;
    goto LABEL_27;
  }
  v3 = nullptr;
  v4 = (char **)&off_140302AE0;
LABEL_27:
  v32 = *(volatile signed __int32 **)(a1 + 240);
  if ( v32 )
    _InterlockedDecrement(v32);
  v33 = *(volatile signed __int32 **)(a1 + 224);
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33, 0xFFFFFFFF) == 1 )
    {
      free_base(*(void **)(a1 + 248));
      free_base(*(void **)(a1 + 224));
    }
  }
  *(_QWORD *)(a1 + 240) = v1;
  *(_QWORD *)(a1 + 224) = v3;
  *(_QWORD *)(a1 + 248) = v4;
  return 0;
}

