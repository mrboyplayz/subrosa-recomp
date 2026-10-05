/* Address: 0x14026b454 | Name: _chsize_s | Size: 199 bytes */
__int64 __fastcall chsize_s(int a1, __int64 a2)
{
  int *v3; // rax
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v6[4]; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  char v9; // [rsp+70h] [rbp+28h] BYREF
  int v10; // [rsp+78h] [rbp+30h] BYREF

  v8 = a2;
  v7 = a1;
  if ( a1 == -2 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    return 9;
  }
  if ( a1 >= 0
    && a1 < dword_140404A6C[19065657]
    && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a1 >> 6) + 19065401] + 72LL * (a1 & 0x3F) + 56) & 1) != 0 )
  {
    if ( a2 >= 0 )
    {
      v10 = a1;
      v6[0] = &v7;
      v5 = a1;
      v6[1] = &v8;
      return __crt_seh_guarded_call<int>::operator()<_lambda_63911f43cc86614963252b1f423aad40_,_lambda_522ac1b1e1a1180d6f374a882b81d1c8_ &,_lambda_6da5eaf298b4749753c721cc8c61e051_>(
               (__int64)&v9,
               (unsigned int *)&v5,
               v6,
               (unsigned int *)&v10);
    }
    *(_DWORD *)sub_14024D19C() = 0;
    v3 = errno();
    v4 = 22;
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    v3 = errno();
    v4 = 9;
  }
  *v3 = v4;
  sub_14024CF6C();
  return v4;
}

