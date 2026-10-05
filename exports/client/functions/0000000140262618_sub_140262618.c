/* Address: 0x140262618 | Name: sub_140262618 | Size: 397 bytes */
__int64 __fastcall sub_140262618(
        struct __crt_locale_pointers *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 lpCharType,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  _WORD *v14; // rbx
  _DWORD *v15; // rax
  unsigned int v16; // eax
  __int64 v18; // [rsp+0h] [rbp-30h] BYREF
  _WORD *v19; // [rsp+20h] [rbp-10h]
  int v20; // [rsp+28h] [rbp-8h]
  _QWORD v21[3]; // [rsp+30h] [rbp+0h] BYREF
  char v22; // [rsp+48h] [rbp+18h]
  __int64 v23; // [rsp+50h] [rbp+20h]

  sub_140213644((_LocaleUpdate *)v21, a1);
  v9 = a6;
  if ( !a6 )
    v9 = *(_DWORD *)(v21[1] + 12LL);
  v20 = 0;
  v19 = nullptr;
  v10 = MEMORY[0x140259504](v9, a7 != 0 ? 9 : 1, a3);
  v11 = v10;
  if ( v10 )
  {
    v12 = (2LL * v10 + 16) & -(__int64)(2LL * v10 < (unsigned __int64)(2LL * v10 + 16));
    if ( !v12 )
    {
      v14 = nullptr;
      goto LABEL_12;
    }
    if ( v12 > 0x400 )
    {
      v15 = (_DWORD *)malloc_base(v12);
      v14 = v15;
      if ( !v15 )
      {
LABEL_12:
        if ( v14 )
        {
          MEMORY[0x1401FCD30](v14, 0, 2 * v11);
          v20 = v11;
          v19 = v14;
          v16 = MEMORY[0x140259504](v9, 1, a3);
          if ( v16 )
            ((void (__fastcall *)(_QWORD, _WORD *, _QWORD, __int64))GetStringTypeW)(a2, v14, v16, lpCharType);
        }
        goto LABEL_15;
      }
      *v15 = 56797;
    }
    else
    {
      v13 = alloca(sub_1401F89D0());
      v14 = v21;
      if ( &v18 == (__int64 *)-48LL )
      {
LABEL_15:
        if ( v14 && *((_DWORD *)v14 - 4) == 56797 )
          free_base(v14 - 8);
        goto LABEL_18;
      }
      LODWORD(v21[0]) = 52428;
    }
    v14 += 8;
    goto LABEL_12;
  }
LABEL_18:
  if ( v22 )
    *(_DWORD *)(v21[0] + 936LL) &= ~2u;
  return MEMORY[0x1401F8B20]((unsigned __int64)v21 ^ v23);
}

