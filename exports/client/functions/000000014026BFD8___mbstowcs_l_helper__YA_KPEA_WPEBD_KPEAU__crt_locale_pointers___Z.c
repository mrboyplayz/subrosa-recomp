/* Address: 0x14026bfd8 | Name: ?_mbstowcs_l_helper@@YA_KPEA_WPEBD_KPEAU__crt_locale_pointers@@@Z | Size: 512 bytes */
__int64 __fastcall _mbstowcs_l_helper(#115 *this, _BYTE *a2, const char **a3, struct __crt_locale_pointers *a4)
{
  #115 *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE *v12; // r8
  int v13; // r15d
  _BYTE *v14; // rsi
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+48h] [rbp-8h]
  _BYTE *v20; // [rsp+88h] [rbp+38h] BYREF

  v20 = a2;
  v5 = this;
  v6 = 0;
  if ( this )
  {
    if ( !a3 )
      return 0;
    *(_WORD *)this = 0;
  }
  if ( !a2 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return -1;
  }
  sub_140213644((_LocaleUpdate *)&v17, a4);
  v8 = *(unsigned int *)(v18 + 12);
  if ( (_DWORD)v8 == 65001 )
  {
    v6 = __crt_mbstring::__mbsrtowcs_utf8(v5, (#49 *)&v20, a3);
    goto LABEL_33;
  }
  if ( v5 )
  {
    if ( !*(_QWORD *)(v18 + 312) )
    {
      if ( a3 )
      {
        v9 = v20;
        do
        {
          *(_WORD *)v5 = (unsigned __int8)v9[v6];
          if ( !v9[v6] )
            break;
          ++v6;
          v5 = (#115 *)((char *)v5 + 2);
        }
        while ( v6 < (unsigned __int64)a3 );
      }
      goto LABEL_33;
    }
    v6 = -1;
    v10 = MEMORY[0x140259504](v8, 9, v20);
    v11 = v10;
    if ( !v10 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD))GetLastError)(0) != 122 )
        goto LABEL_25;
      v12 = v20;
      v13 = (int)a3;
      v14 = v20;
      if ( (_DWORD)a3 )
      {
        do
        {
          --v13;
          if ( !*v14 )
            break;
          if ( (unsigned int)isleadbyte_l((unsigned __int8)*v14, (struct __crt_locale_pointers *)&v18) )
          {
            if ( !*++v14 )
              goto LABEL_25;
          }
          ++v14;
        }
        while ( v13 );
        v12 = v20;
      }
      v15 = MEMORY[0x140259504](*(unsigned int *)(v18 + 12), 1, v12);
      if ( v15 )
      {
        v6 = v15;
      }
      else
      {
LABEL_25:
        *errno() = 42;
        *(_WORD *)v5 = 0;
      }
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  v6 = -1;
  if ( *(_QWORD *)(v18 + 312) )
  {
    v16 = MEMORY[0x140259504](v8, 9, v20);
    v11 = v16;
    if ( !v16 )
    {
      *errno() = 42;
      goto LABEL_33;
    }
LABEL_32:
    v6 = v11 - 1;
    goto LABEL_33;
  }
  do
    ++v6;
  while ( v20[v6] );
LABEL_33:
  if ( v19 )
    *(_DWORD *)(v17 + 936) &= ~2u;
  return v6;
}

