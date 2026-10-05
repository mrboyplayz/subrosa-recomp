/* Address: 0x140253fc0 | Name: _mbtowc_l | Size: 382 bytes */
__int64 __fastcall mbtowc_l(#115 *this, #49 *a2, char *a3, struct __crt_locale_pointers *a4)
{
  int v7; // ecx
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  int *v12; // rax
  struct _Mbstatet *v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  char v16; // [rsp+48h] [rbp-10h]

  if ( !a2 || !a3 )
  {
    *(_QWORD *)&dword_140404A6C[19065663] = 0;
    return 0;
  }
  if ( !*(_BYTE *)a2 )
  {
    if ( this )
      *(_WORD *)this = 0;
    return 0;
  }
  sub_140213644((_LocaleUpdate *)&v14, a4);
  if ( *(_DWORD *)(v15 + 12) == 65001 )
  {
    v7 = __crt_mbstring::__mbrtowc_utf8(this, a2, a3, (unsigned __int64)&dword_140404A6C[19065663], v13);
    if ( v7 < 0 )
      v7 = -1;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(v15 + 312) )
  {
    if ( this )
      *(_WORD *)this = *(unsigned __int8 *)a2;
    goto LABEL_13;
  }
  if ( (unsigned int)isleadbyte_l(*(unsigned __int8 *)a2, &v15) )
  {
    v9 = v15;
    v10 = *(_DWORD *)(v15 + 8);
    if ( v10 > 1 && (int)a3 >= v10 && (v11 = MEMORY[0x140259504](*(unsigned int *)(v15 + 12), 9, a2), v9 = v15, v11)
      || (unsigned __int64)a3 >= *(int *)(v9 + 8) && *((_BYTE *)a2 + 1) )
    {
      v7 = *(_DWORD *)(v9 + 8);
      goto LABEL_14;
    }
LABEL_25:
    v12 = errno();
    v7 = -1;
    *v12 = 42;
    goto LABEL_14;
  }
  if ( !(unsigned int)MEMORY[0x140259504](*(unsigned int *)(v15 + 12), 9, a2) )
    goto LABEL_25;
LABEL_13:
  v7 = 1;
LABEL_14:
  if ( v16 )
    *(_DWORD *)(v14 + 936) &= ~2u;
  return (unsigned int)v7;
}

