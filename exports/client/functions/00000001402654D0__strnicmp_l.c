/* Address: 0x1402654d0 | Name: _strnicmp_l | Size: 173 bytes */
__int64 __fastcall strnicmp_l(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        struct __crt_locale_pointers *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // ecx
  _QWORD v13[3]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+38h] [rbp-10h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a1 && a2 && a3 <= 0x7FFFFFFF )
  {
    if ( a3 )
    {
      sub_140213644((_LocaleUpdate *)v13, a4);
      v8 = *(_QWORD *)(v13[1] + 272LL);
      do
      {
        v9 = *v6++;
        v10 = *(unsigned __int8 *)(v9 + v8);
        v11 = *v5++;
        v12 = *(unsigned __int8 *)(v11 + v8);
        result = (unsigned int)(v10 - v12);
        if ( v10 != v12 )
          break;
        if ( !v10 )
          break;
        --v4;
      }
      while ( v4 );
      if ( v14 )
        *(_DWORD *)(v13[0] + 936LL) &= ~2u;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
  return result;
}

