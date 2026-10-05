/* Address: 0x1402564c0 | Name: ?fp_format_f_internal@@YAHQEAD_KHQEAU_strflt@@_NQEAU__crt_locale_pointers@@@Z | Size: 323 bytes */
__int64 __fastcall fp_format_f_internal(
        char *const a1,
        __int64 a2,
        int a3,
        struct _strflt *const a4,
        bool a5,
        struct __crt_locale_pointers *const a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  char *v12; // rbx
  char *v13; // rbp
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  _QWORD v18[3]; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v18, a6);
  v9 = *((int *)a4 + 1);
  if ( a5 && (_DWORD)v9 - 1 == a3 )
    *(_WORD *)&a1[(*(_DWORD *)a4 == 45) - 1 + v9] = 48;
  if ( *(_DWORD *)a4 == 45 )
    *a1++ = 45;
  v10 = -1;
  if ( *((int *)a4 + 1) > 0 )
  {
    v12 = &a1[*((int *)a4 + 1)];
  }
  else
  {
    v11 = -1;
    do
      ++v11;
    while ( a1[v11] );
    MEMORY[0x1401FC920]((__m128i *)(a1 + 1), (const __m128i *)a1, v11 + 1);
    *a1 = 48;
    v12 = a1 + 1;
  }
  if ( a3 > 0 )
  {
    v13 = v12 + 1;
    v14 = -1;
    do
      ++v14;
    while ( v12[v14] );
    MEMORY[0x1401FC920]((__m128i *)(v12 + 1), (const __m128i *)v12, v14 + 1);
    *v12 = ***(_BYTE ***)(v18[1] + 248LL);
    v15 = *((_DWORD *)a4 + 1);
    if ( v15 < 0 )
    {
      v16 = -v15;
      if ( a5 || v16 < a3 )
        a3 = v16;
      if ( a3 )
      {
        do
          ++v10;
        while ( v13[v10] );
        MEMORY[0x1401FC920]((__m128i *)&v13[a3], (const __m128i *)(v12 + 1), v10 + 1);
      }
      MEMORY[0x1401FCD30](v12 + 1, 0x30u, a3);
    }
  }
  if ( v19 )
    *(_DWORD *)(v18[0] + 936LL) &= ~2u;
  return 0;
}

