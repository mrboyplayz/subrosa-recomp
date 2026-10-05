/* Address: 0x14026c1e0 | Name: _mbstowcs_s_l | Size: 307 bytes */
__int64 __fastcall mbstowcs_s_l(
        unsigned __int64 *a1,
        #115 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        unsigned __int64 MaxCount,
        struct __crt_locale_pointers *Locale)
{
  unsigned int v10; // ebx
  const char **v11; // r8
  int *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0;
  if ( !a2 )
  {
    if ( !a3 )
      goto LABEL_3;
LABEL_12:
    v10 = 22;
    *errno() = 22;
    sub_14024CF6C();
    return v10;
  }
  if ( !a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a1 )
    *a1 = 0;
  sub_140213644((_LocaleUpdate *)&v16, Locale);
  v11 = (const char **)MaxCount;
  if ( MaxCount > a3 )
    v11 = (const char **)a3;
  if ( (unsigned __int64)v11 <= 0x7FFFFFFF )
  {
    v13 = _mbstowcs_l_helper(a2, a4, v11, (struct __crt_locale_pointers *)v17);
    if ( v13 == -1 )
    {
      if ( a2 )
        *(_WORD *)a2 = 0;
      v10 = *errno();
      goto LABEL_26;
    }
    v14 = v13 + 1;
    if ( a2 )
    {
      if ( v14 > a3 )
      {
        if ( MaxCount != -1 )
        {
          *(_WORD *)a2 = 0;
          v12 = errno();
          v10 = 34;
          goto LABEL_21;
        }
        v14 = a3;
        v10 = 80;
      }
      *((_WORD *)a2 + v14 - 1) = 0;
    }
    if ( a1 )
      *a1 = v14;
    goto LABEL_26;
  }
  v12 = errno();
  v10 = 22;
LABEL_21:
  *v12 = v10;
  sub_14024CF6C();
LABEL_26:
  if ( v17[16] )
    *(_DWORD *)(v16 + 936) &= ~2u;
  return v10;
}

