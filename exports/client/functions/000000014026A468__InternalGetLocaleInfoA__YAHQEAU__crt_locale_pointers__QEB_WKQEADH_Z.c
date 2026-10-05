/* Address: 0x14026a468 | Name: ?InternalGetLocaleInfoA@@YAHQEAU__crt_locale_pointers@@QEB_WKQEADH@Z | Size: 377 bytes */
__int64 __fastcall InternalGetLocaleInfoA(
        struct #68 *const a1,
        const #49 *const a2,
        unsigned int a3,
        char *const a4,
        int a5)
{
  int v6; // r15d
  unsigned int v8; // r12d
  signed int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  _QWORD *v13; // rbx
  _DWORD *v14; // rax
  __int64 v16; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp+0h] BYREF
  char v18; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h]

  v6 = (int)a4;
  sub_140213644((_LocaleUpdate *)v17, a1);
  v8 = *(_DWORD *)(v17[1] + 12LL);
  v9 = sub_14024F174((__int64)a2, a3, 0, 0);
  v10 = v9;
  if ( !v9 )
    goto LABEL_16;
  v11 = 2LL * v9 + 16;
  if ( (v11 & -(__int64)(2LL * v9 < v11)) == 0 )
  {
    v13 = nullptr;
    goto LABEL_10;
  }
  if ( (v11 & -(__int64)(2LL * v9 < v11)) > 0x400 )
  {
    v14 = (_DWORD *)malloc_base(v11 & -(__int64)(2LL * v9 < v11));
    v13 = v14;
    if ( !v14 )
    {
LABEL_10:
      if ( v13 && (unsigned int)sub_14024F174((__int64)a2, a3, (__int64)v13, v10) )
        sub_140258A84(v8, 0, (__int64)v13, 0xFFFFFFFFLL, a5 != 0 ? v6 : 0, a5, 0, 0);
      goto LABEL_13;
    }
    *v14 = 56797;
LABEL_8:
    v13 += 2;
    goto LABEL_10;
  }
  v12 = alloca(sub_1401F89D0());
  v13 = v17;
  if ( &v16 != (__int64 *)-64LL )
  {
    LODWORD(v17[0]) = 52428;
    goto LABEL_8;
  }
LABEL_13:
  if ( v13 && *((_DWORD *)v13 - 4) == 56797 )
    free_base(v13 - 2);
LABEL_16:
  if ( v18 )
    *(_DWORD *)(v17[0] + 936LL) &= ~2u;
  return MEMORY[0x1401F8B20]((unsigned __int64)v17 ^ v19);
}

