/* Address: 0x14026ae60 | Name: sub_14026AE60 | Size: 295 bytes */
__int64 __fastcall sub_14026AE60(_WORD *a1, _WORD *a2, struct __crt_locale_pointers *a3)
{
  _WORD *v3; // rsi
  _WORD *v4; // rbx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned __int16 v9; // ax
  int v10; // ebp
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+38h] [rbp-20h]

  v3 = a2;
  v4 = a1;
  if ( a1 && a2 )
  {
    sub_140213644((_LocaleUpdate *)&v14, a3);
    v6 = v15[0];
    if ( *(_QWORD *)(v15[0] + 312LL) )
    {
      do
      {
        if ( *v4 >= 0x100u )
        {
          v9 = sub_14026B084((unsigned __int16)*v4, v15);
          v6 = v15[0];
        }
        else
        {
          v8 = *(unsigned __int8 *)v4;
          if ( (wctype[v8 + 1] & 1) != 0 )
            LOBYTE(v8) = *(_BYTE *)(v8 + *(_QWORD *)(v6 + 272));
          v9 = (unsigned __int8)v8;
        }
        ++v4;
        v10 = v9;
        v11 = v9;
        if ( *v3 >= 0x100u )
        {
          v13 = sub_14026B084((unsigned __int16)*v3, v15);
          v6 = v15[0];
        }
        else
        {
          v12 = *(unsigned __int8 *)v3;
          if ( (wctype[v12 + 1] & 1) != 0 )
            LOBYTE(v12) = *(_BYTE *)(v12 + *(_QWORD *)(v6 + 272));
          v13 = (unsigned __int8)v12;
        }
        ++v3;
        v7 = v11 - v13;
      }
      while ( !v7 && v10 );
    }
    else
    {
      v7 = _ascii_wcsicmp(v4, v3);
    }
    if ( v16 )
      *(_DWORD *)(v14 + 936) &= ~2u;
    return v7;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0x7FFFFFFF;
  }
}

