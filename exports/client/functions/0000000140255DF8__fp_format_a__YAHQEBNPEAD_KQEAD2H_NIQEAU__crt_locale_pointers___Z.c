/* Address: 0x140255df8 | Name: ?fp_format_a@@YAHQEBNPEAD_KQEAD2H_NIQEAU__crt_locale_pointers@@@Z | Size: 877 bytes */
__int64 __fastcall fp_format_a(
        const double *a1,
        char *a2,
        unsigned __int64 a3,
        char *const a4,
        unsigned __int64 a5,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *const a9)
{
  char *v9; // rbx
  int v11; // edi
  unsigned int v14; // edi
  __int64 v15; // rcx
  _BYTE *v16; // rax
  char *v17; // r15
  __int64 v18; // rbp
  _WORD *v19; // rsi
  char v20; // al
  __int16 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int16 v23; // ax
  char *i; // rcx
  char v25; // r8
  char v26; // dl
  _BYTE *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v30; // al
  _BYTE *v31; // r8
  _QWORD v33[3]; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+68h] [rbp-30h]

  *a2 = 0;
  v9 = a2;
  v11 = 0;
  if ( a6 >= 0 )
    v11 = a6;
  sub_140213644((_LocaleUpdate *)v33, a9);
  if ( a3 <= v11 + 11 )
  {
    v14 = 34;
    *errno() = 34;
    sub_14024CF6C();
    goto LABEL_53;
  }
  v15 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
  {
    v14 = fp_format_e(a1, v9, a3, a4, a5, v11, 0, a8, nullptr);
    if ( v14 )
    {
      *v9 = 0;
      goto LABEL_53;
    }
    v16 = (_BYTE *)MEMORY[0x14026CD4C](v9, 101);
    if ( v16 )
    {
      *v16 = 32 * !a7 + 80;
      v16[3] = 0;
    }
  }
  else
  {
    if ( v15 < 0 )
    {
      *v9++ = 45;
      v15 = *(_QWORD *)a1;
    }
    v17 = v9 + 1;
    v18 = 1023;
    if ( (v15 & 0x7FF0000000000000LL) != 0 )
    {
      *v9 = 49;
    }
    else
    {
      *v9 = 48;
      v18 = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 ? 0x3FE : 0;
    }
    v19 = v9 + 2;
    if ( v11 )
      v20 = ***(_BYTE ***)(v33[1] + 248LL);
    else
      v20 = 0;
    *v17 = v20;
    if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      v21 = 48;
      v22 = 0xF000000000000LL;
      do
      {
        if ( v11 <= 0 )
          break;
        v23 = ((v22 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v21) + 48;
        if ( v23 > 0x39u )
          LOBYTE(v23) = 32 * !a7 + 7 + v23;
        *(_BYTE *)v19 = v23;
        --v11;
        v19 = (_WORD *)((char *)v19 + 1);
        v22 >>= 4;
        v21 -= 4;
      }
      while ( v21 >= 0 );
      if ( v21 >= 0 && (unsigned __int16)((v22 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> v21) > 8u )
      {
        for ( i = (char *)v19 - 1; ; --i )
        {
          v25 = *i;
          if ( ((*i - 70) & 0xDF) != 0 )
            break;
          *i = 48;
        }
        if ( i == v17 )
        {
          ++*(i - 1);
        }
        else
        {
          if ( v25 == 57 )
            v26 = 32 * !a7 + 65;
          else
            v26 = v25 + 1;
          *i = v26;
        }
      }
    }
    if ( v11 > 0 )
    {
      MEMORY[0x1401FCD30](v19, 0x30u, (unsigned int)v11);
      v19 = (_WORD *)((char *)v19 + (unsigned int)v11);
    }
    if ( *v17 )
      v17 = (char *)v19;
    *v17 = 32 * !a7 + 80;
    v27 = v17 + 2;
    v28 = ((*(_QWORD *)a1 >> 52) & 0x7FFLL) - v18;
    v29 = v28;
    if ( v28 < 0 )
      v28 = v18 - ((*(_QWORD *)a1 >> 52) & 0x7FFLL);
    v30 = 43;
    v31 = v17 + 2;
    if ( v29 < 0 )
      v30 = 45;
    v17[1] = v30;
    *v27 = 48;
    if ( v28 >= 1000 )
    {
      v31 = v17 + 3;
      *v27 = v28 / 1000 + 48;
      v28 %= 1000;
    }
    if ( v31 != v27 || v28 >= 100 )
    {
      *v31++ = v28 / 100 + 48;
      v28 %= 100;
    }
    if ( v31 != v27 || v28 >= 10 )
    {
      *v31++ = v28 / 10 + 48;
      v28 %= 10;
    }
    *v31 = v28 + 48;
    v31[1] = 0;
  }
  v14 = 0;
LABEL_53:
  if ( v34 )
    *(_DWORD *)(v33[0] + 936LL) &= ~2u;
  return v14;
}

