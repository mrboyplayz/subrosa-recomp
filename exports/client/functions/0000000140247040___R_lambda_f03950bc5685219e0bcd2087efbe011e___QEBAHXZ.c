/* Address: 0x140247040 | Name: ??R_lambda_f03950bc5685219e0bcd2087efbe011e_@@QEBAHXZ | Size: 278 bytes */
__int64 __fastcall _lambda_f03950bc5685219e0bcd2087efbe011e_::operator()(_QWORD **a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // r8
  char *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // r14
  char v8; // cl
  char *v9; // r15
  _QWORD *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  char *v13; // r9
  _QWORD *v14; // rax

  v2 = (_QWORD *)**a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = _security_cookie;
  v5 = (char *)__ROR8__(*v2 ^ _security_cookie, _security_cookie & 0x3F);
  v6 = (_QWORD *)__ROR8__(_security_cookie ^ v2[1], _security_cookie & 0x3F);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = _security_cookie;
    v8 = _security_cookie & 0x3F;
    v9 = v5;
    v10 = v6;
    while ( --v6 >= (_QWORD *)v5 )
    {
      v11 = *v6;
      if ( *v6 != v7 )
      {
        *v6 = v7;
        ((void (*)(void))__ROR8__(v4 ^ v11, v8))();
        v4 = _security_cookie;
        v8 = _security_cookie & 0x3F;
        v12 = (_QWORD *)**a1;
        v13 = (char *)__ROR8__(_security_cookie ^ *v12, _security_cookie & 0x3F);
        v14 = (_QWORD *)__ROR8__(_security_cookie ^ v12[1], _security_cookie & 0x3F);
        if ( v13 != v9 || v14 != v10 )
        {
          v9 = v13;
          v5 = v13;
          v10 = v14;
          v6 = v14;
        }
      }
    }
    if ( v5 != (char *)-1LL )
    {
      free_base(v5);
      v4 = _security_cookie;
    }
    *(_QWORD *)**a1 = v4;
    *(_QWORD *)(**a1 + 8LL) = v4;
    *(_QWORD *)(**a1 + 16LL) = v4;
  }
  return 0;
}

