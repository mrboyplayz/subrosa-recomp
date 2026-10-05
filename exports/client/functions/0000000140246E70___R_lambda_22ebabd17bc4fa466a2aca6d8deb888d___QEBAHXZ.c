/* Address: 0x140246e70 | Name: ??R_lambda_22ebabd17bc4fa466a2aca6d8deb888d_@@QEBAHXZ | Size: 432 bytes */
__int64 __fastcall _lambda_22ebabd17bc4fa466a2aca6d8deb888d_::operator()(_QWORD **a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r10
  __int64 v4; // rsi
  __int64 v5; // r9
  char *v6; // rbx
  __int64 v7; // rsi
  char *v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rcx

  v2 = (_QWORD *)**a1;
  if ( v2 )
  {
    v3 = _security_cookie;
    v4 = *v2 ^ _security_cookie;
    v5 = _security_cookie ^ v2[1];
    v6 = (char *)__ROR8__(_security_cookie ^ v2[2], _security_cookie & 0x3F);
    v7 = __ROR8__(v4, _security_cookie & 0x3F);
    v8 = (char *)__ROR8__(v5, _security_cookie & 0x3F);
    if ( v8 != v6 )
    {
LABEL_14:
      *(_QWORD *)v8 = v3 ^ __ROR8__(*a1[1], 64 - ((unsigned __int8)v3 & 0x3Fu));
      *(_QWORD *)**a1 = _security_cookie ^ __ROR8__(v7, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 8LL) = _security_cookie ^ __ROR8__(v8 + 8, 64 - (_security_cookie & 0x3Fu));
      *(_QWORD *)(**a1 + 16LL) = _security_cookie ^ __ROR8__(v6, 64 - (_security_cookie & 0x3Fu));
      return 0;
    }
    v9 = (__int64)&v6[-v7] >> 3;
    v10 = v9;
    if ( v9 > 0x200 )
      v10 = 512;
    v11 = v9 + v10;
    if ( !v11 )
      v11 = 32;
    if ( v11 >= v9 && (v12 = recalloc_base(v7, v11, 8), free_base(nullptr), v12)
      || (v11 = v9 + 4, v12 = recalloc_base(v7, v9 + 4, 8), free_base(nullptr), v12) )
    {
      v3 = _security_cookie;
      v8 = (char *)(v12 + 8 * v9);
      v6 = (char *)(v12 + 8 * v11);
      v7 = v12;
      v13 = (unsigned __int64)(v6 - v8 + 7) >> 3;
      if ( v8 > v6 )
        v13 = 0;
      if ( v13 )
      {
        memset64(v8, _security_cookie, v13);
        v3 = _security_cookie;
      }
      goto LABEL_14;
    }
  }
  return 0xFFFFFFFFLL;
}

