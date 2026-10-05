/* Address: 0x1402652e4 | Name: _wcsnicmp_l | Size: 336 bytes */
__int64 __fastcall wcsnicmp_l(_WORD *a1, _WORD *a2, __int64 a3, struct __crt_locale_pointers *a4)
{
  __int64 v4; // rdi
  _WORD *v5; // rsi
  _WORD *v6; // r14
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  int v12; // ebp
  int v13; // ebx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-30h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      sub_140213644((_LocaleUpdate *)&v16, a4);
      v8 = v17[0];
      if ( *(_QWORD *)(v17[0] + 312LL) )
      {
        do
        {
          if ( *v6 >= 0x100u )
          {
            v11 = sub_14026B084((unsigned __int16)*v6, v17);
            v8 = v17[0];
          }
          else
          {
            v10 = *(unsigned __int8 *)v6;
            if ( (wctype[v10 + 1] & 1) != 0 )
              LOBYTE(v10) = *(_BYTE *)(v10 + *(_QWORD *)(v8 + 272));
            v11 = (unsigned __int8)v10;
          }
          ++v6;
          v12 = v11;
          v13 = v11;
          if ( *v5 >= 0x100u )
          {
            v15 = sub_14026B084((unsigned __int16)*v5, v17);
            v8 = v17[0];
          }
          else
          {
            v14 = *(unsigned __int8 *)v5;
            if ( (wctype[v14 + 1] & 1) != 0 )
              LOBYTE(v14) = *(_BYTE *)(v14 + *(_QWORD *)(v8 + 272));
            v15 = (unsigned __int8)v14;
          }
          ++v5;
          v9 = v13 - v15;
          if ( v9 )
            break;
          if ( !v12 )
            break;
          --v4;
        }
        while ( v4 );
      }
      else
      {
        v9 = _ascii_wcsnicmp(v6, v5, v4);
      }
      if ( v18 )
        *(_DWORD *)(v16 + 936) &= ~2u;
      return v9;
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
}

