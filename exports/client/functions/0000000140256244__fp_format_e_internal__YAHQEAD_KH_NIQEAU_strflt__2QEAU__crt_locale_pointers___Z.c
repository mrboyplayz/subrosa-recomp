/* Address: 0x140256244 | Name: ?fp_format_e_internal@@YAHQEAD_KH_NIQEAU_strflt@@2QEAU__crt_locale_pointers@@@Z | Size: 466 bytes */
__int64 __fastcall fp_format_e_internal(
        char *const a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        struct _strflt *const a6,
        bool a7,
        struct __crt_locale_pointers *const a8)
{
  int v8; // eax
  __int64 v9; // rbx
  char *v14; // rdx
  __int64 v15; // r8
  char *v16; // rdx
  char *v17; // rbx
  __int64 v18; // rdx
  __m128i *v19; // rcx
  int v20; // r8d
  _QWORD v21[3]; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v9 = a3;
  if ( a3 > 0 )
    v8 = a3;
  if ( a2 > v8 + 9 )
  {
    sub_140213644((_LocaleUpdate *)v21, a8);
    if ( a7 )
    {
      v14 = &a1[*(_DWORD *)a6 == 45];
      if ( (int)v9 > 0 )
      {
        v15 = -1;
        do
          ++v15;
        while ( v14[v15] );
        MEMORY[0x1401FC920]((__m128i *)(v14 + 1), (const __m128i *)v14, v15 + 1);
      }
    }
    v16 = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      v16 = a1 + 1;
    }
    if ( (int)v9 > 0 )
    {
      *v16 = v16[1];
      *++v16 = ***(_BYTE ***)(v21[1] + 248LL);
    }
    v17 = &v16[v9 + !a7];
    v18 = a1 - v17 + a2;
    if ( a2 == -1 )
      v18 = -1;
    if ( (unsigned int)strcpy_s(v17, v18, (__int64)"e+000") )
    {
      sub_14024CFBC();
      JUMPOUT(0x140256415LL);
    }
    v19 = (__m128i *)(v17 + 2);
    if ( a4 )
      *v17 = 69;
    if ( **((_BYTE **)a6 + 1) != 48 )
    {
      v20 = *((_DWORD *)a6 + 1) - 1;
      if ( v20 < 0 )
      {
        v20 = 1 - *((_DWORD *)a6 + 1);
        v17[1] = 45;
      }
      if ( v20 >= 100 )
      {
        v17[2] += v20 / 100;
        v20 %= 100;
      }
      if ( v20 >= 10 )
      {
        v17[3] += v20 / 10;
        LOBYTE(v20) = v20 % 10;
      }
      v17[4] += v20;
    }
    if ( a5 == 2 && v19->m128i_i8[0] == 48 )
      MEMORY[0x1401FC920](v19, (const __m128i *)(v17 + 3), 3u);
    if ( v22 )
      *(_DWORD *)(v21[0] + 936LL) &= ~2u;
    return 0;
  }
  else
  {
    *errno() = 34;
    sub_14024CF6C();
    return 34;
  }
}

