/* Address: 0x140266a88 | Name: ?_mbrtowc_s_l@@YAHPEAHPEA_WPEBD_KPEAU_Mbstatet@@PEAU__crt_locale_pointers@@@Z | Size: 593 bytes */
__int64 __fastcall _mbrtowc_s_l(int *a1, #49 *a2, #49 *a3, const char *a4, struct _Mbstatet *a5, struct #68 *a6)
{
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rbp
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  char v18; // [rsp+48h] [rbp-20h]

  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a3 && a4 && *(_BYTE *)a3 )
  {
    sub_140213644((_LocaleUpdate *)&v16, a6);
    v10 = v17;
    if ( *(_DWORD *)(v17 + 12) == 65001 )
    {
      v11 = __crt_mbstring::__mbrtowc_utf8(a2, a3, a4);
      if ( a1 )
        *a1 = v11;
LABEL_41:
      result = (unsigned int)*errno();
LABEL_15:
      if ( v18 )
        *(_DWORD *)(v16 + 936) &= ~2u;
      return result;
    }
    v12 = *(int *)(v17 + 8);
    if ( !*(_QWORD *)(v17 + 312) )
    {
      if ( a2 )
        *(_WORD *)a2 = *(unsigned __int8 *)a3;
      goto LABEL_12;
    }
    if ( *(_DWORD *)a5 )
    {
      *((_BYTE *)a5 + 1) = *(_BYTE *)a3;
      if ( (int)v12 > 1 && (unsigned int)MEMORY[0x140259504](*(unsigned int *)(v10 + 12), 9, a5) )
      {
        *(_DWORD *)a5 = 0;
LABEL_21:
        if ( a1 )
          *a1 = v12;
        goto LABEL_14;
      }
    }
    else
    {
      if ( !(unsigned int)isleadbyte_l(*(unsigned __int8 *)a3, (struct __crt_locale_pointers *)&v17) )
      {
        if ( (unsigned int)MEMORY[0x140259504](*(unsigned int *)(v17 + 12), 9, a3) )
        {
LABEL_12:
          if ( a1 )
            *a1 = 1;
LABEL_14:
          result = 0;
          goto LABEL_15;
        }
LABEL_37:
        *errno() = 42;
        if ( a2 )
          *(_WORD *)a2 = 0;
        if ( a1 )
          *a1 = -1;
        goto LABEL_41;
      }
      if ( (unsigned __int64)a4 < v12 )
      {
        *(_BYTE *)a5 = *(_BYTE *)a3;
        if ( a1 )
          *a1 = -2;
        goto LABEL_14;
      }
      if ( (int)v12 > 1 )
      {
        v14 = -1;
        do
          ++v14;
        while ( *((_BYTE *)a3 + v14) );
        if ( v14 < 0x7FFFFFFF )
        {
          v15 = -1;
          do
            ++v15;
          while ( *((_BYTE *)a3 + v15) );
        }
        if ( (unsigned int)MEMORY[0x140259504](*(unsigned int *)(v17 + 12), 9, a3) )
          goto LABEL_21;
      }
      if ( *((_BYTE *)a3 + 1) )
        goto LABEL_21;
    }
    *(_DWORD *)a5 = 0;
    goto LABEL_37;
  }
  if ( a1 )
    *a1 = 0;
  return 0;
}

