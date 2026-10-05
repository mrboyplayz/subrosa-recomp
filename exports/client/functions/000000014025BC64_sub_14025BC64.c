/* Address: 0x14025bc64 | Name: sub_14025BC64 | Size: 620 bytes */
__int64 __fastcall sub_14025BC64(unsigned int a1)
{
  _QWORD *v2; // r13
  char v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int *v8; // rdi
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h]

  v2 = nullptr;
  v17 = 0;
  v3 = 1;
  if ( a1 != 2 )
  {
    switch ( a1 )
    {
      case 4u:
        goto LABEL_14;
      case 6u:
        goto LABEL_8;
      case 8u:
      case 0xBu:
LABEL_14:
        v9 = (_QWORD *)sub_140255BEC();
        v2 = v9;
        if ( !v9 )
          return 0xFFFFFFFFLL;
        v11 = *v9;
        v12 = v11 + 192;
        while ( v11 != v12 )
        {
          if ( *(_DWORD *)(v11 + 4) == a1 )
            goto LABEL_21;
          v11 += 16;
        }
        v11 = 0;
LABEL_21:
        if ( v11 )
        {
          v8 = (unsigned int *)(v11 + 8);
          v3 = 0;
          goto LABEL_28;
        }
        break;
      default:
        if ( a1 == 15 || a1 - 21 <= 1 )
          goto LABEL_8;
        break;
    }
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
LABEL_8:
  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = v4 - 4;
    if ( !v5 )
    {
LABEL_24:
      v8 = &dword_140404A6C[19065819];
      goto LABEL_28;
    }
    v6 = v5 - 9;
    if ( v6 )
    {
      v7 = v6 - 6;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          v8 = nullptr;
          goto LABEL_28;
        }
        goto LABEL_24;
      }
      v8 = &dword_140404A6C[19065817];
    }
    else
    {
      v8 = &dword_140404A6C[19065821];
    }
  }
  else
  {
    v8 = &dword_140404A6C[19065815];
  }
LABEL_28:
  v18 = 0;
  if ( v3 )
  {
    sub_140258B64(3);
    v13 = __ROR8__(*(_QWORD *)v8 ^ _security_cookie, _security_cookie & 0x3F);
  }
  else
  {
    v13 = *(_QWORD *)v8;
  }
  if ( v13 == 1 )
  {
    v14 = 2320;
    goto LABEL_43;
  }
  if ( v13 )
  {
    v14 = 2320;
    if ( a1 <= 0xB && _bittest(&v14, a1) )
    {
      v18 = v2[1];
      v2[1] = 0;
      if ( a1 != 8 )
      {
LABEL_41:
        *(_QWORD *)v8 = _security_cookie;
LABEL_43:
        if ( v3 )
          sub_140258BB8(3);
        if ( v13 != 1 )
        {
          if ( a1 == 8 )
          {
            sub_140255A70();
            _guard_dispatch_icall_fptr(8);
          }
          else
          {
            _guard_dispatch_icall_fptr(a1);
          }
          if ( a1 <= 0xB && _bittest(&v14, a1) )
          {
            v2[1] = v18;
            if ( a1 == 8 )
              *(_DWORD *)(sub_140255A70() + 16) = v17;
          }
        }
        return 0;
      }
      v17 = *(_DWORD *)(sub_140255A70() + 16);
      *(_DWORD *)(sub_140255A70() + 16) = 140;
    }
    if ( a1 == 8 )
    {
      v15 = *v2 + 48LL;
      v16 = *v2 + 192LL;
      while ( v15 != v16 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        v15 += 16;
      }
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  if ( v3 )
    sub_140258BB8(3);
  COleServerDoc::NotifyClosed((COleServerDoc *)3);
  __debugbreak();
  return signal();
}

