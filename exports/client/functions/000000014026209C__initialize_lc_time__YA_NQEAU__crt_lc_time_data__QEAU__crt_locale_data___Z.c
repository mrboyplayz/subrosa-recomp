/* Address: 0x14026209c | Name: ?initialize_lc_time@@YA_NQEAU__crt_lc_time_data@@QEAU__crt_locale_data@@@Z | Size: 830 bytes */
bool __fastcall initialize_lc_time(struct __crt_lc_time_data *const a1, struct __crt_locale_data *const a2)
{
  __int64 v2; // r14
  int v4; // esi
  int v5; // r15d
  __int64 v6; // r13
  char *v7; // rdi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // r15d
  __int64 v12; // r13
  char *v13; // rdi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  __int128 v28; // [rsp+30h] [rbp-10h] BYREF

  v2 = *((_QWORD *)a2 + 42);
  v4 = 0;
  v28 = (unsigned __int64)a2;
  *((_QWORD *)a1 + 87) = sub_140248608(v2);
  v5 = 49;
  v6 = 7;
  do
  {
    v7 = (char *)a1 + 8 * ((v5 - 48) % 7u);
    v8 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)v7) | v4;
    v9 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v7 + 56)) | v8;
    v10 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v7 + 352)) | v9;
    v4 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v7 + 408)) | v10;
    ++v5;
    --v6;
  }
  while ( v6 );
  v11 = 56;
  v12 = 12;
  v13 = (char *)a1 + 208;
  do
  {
    v14 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v13 - 96)) | v4;
    v15 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)v13) | v14;
    v16 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v13 + 256)) | v15;
    v4 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)(v13 + 352)) | v16;
    v13 += 8;
    ++v11;
    --v12;
  }
  while ( v12 );
  v17 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 304) | v4;
  v18 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 312) | v17;
  v19 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 656) | v18;
  v20 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 664) | v19;
  v21 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 320) | v20;
  v22 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 328) | v21;
  v23 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 336) | v22;
  v24 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 344) | v23;
  v25 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 672) | v24;
  v26 = _acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 680) | v25;
  return (v26 | (unsigned int)_acrt_GetLocaleInfoA((struct #68 *)&v28, (__int64)a1 + 688)) == 0;
}

