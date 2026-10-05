/* Address: 0x140266910 | Name: ?__mbsrtowcs_utf8@__crt_mbstring@@YA_KPEA_WPEAPEBD_KPEAU_Mbstatet@@@Z | Size: 374 bytes */
__int64 __fastcall __crt_mbstring::__mbsrtowcs_utf8(#115 *this, #49 *a2, const char **a3)
{
  _BYTE *v3; // rdi
  const char **v4; // rbp
  #115 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int16 v10; // cx
  unsigned int v11; // ecx
  __int64 i; // rbx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_BYTE **)a2;
  v4 = a3;
  if ( !this )
  {
    for ( i = 0; ; ++i )
    {
      if ( *v3 )
        v14 = v3[1] ? (v3[2] != 0) + 3LL : 2LL;
      else
        v14 = 1;
      v15 = __crt_mbstring::__mbrtoc32_utf8(0, v3, v14);
      if ( v15 == -1 )
        break;
      if ( !v15 )
        return i;
      if ( v15 == 4 )
        ++i;
      v3 += v15;
    }
    goto LABEL_18;
  }
  v7 = this;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( *v3 )
        v8 = v3[1] ? (v3[2] != 0) + 3LL : 2LL;
      else
        v8 = 1;
      v9 = __crt_mbstring::__mbrtoc32_utf8(&v16, v3, v8);
      if ( v9 == -1 )
        break;
      if ( !v9 )
      {
        v3 = nullptr;
        *(_WORD *)v7 = 0;
        goto LABEL_14;
      }
      v10 = v16;
      if ( v16 > 0xFFFF )
      {
        if ( (unsigned __int64)v4 <= 1 )
          goto LABEL_14;
        v11 = v16 - 0x10000;
        v16 = v11;
        v4 = (const char **)((char *)v4 - 1);
        *(_WORD *)v7 = (v11 >> 10) | 0xD800;
        v7 = (#115 *)((char *)v7 + 2);
        v10 = v11 & 0x3FF | 0xDC00;
      }
      *(_WORD *)v7 = v10;
      v3 += v9;
      v7 = (#115 *)((char *)v7 + 2);
      v4 = (const char **)((char *)v4 - 1);
      if ( !v4 )
        goto LABEL_14;
    }
    *(_QWORD *)a2 = v3;
LABEL_18:
    *errno() = 42;
    return -1;
  }
LABEL_14:
  *(_QWORD *)a2 = v3;
  return (v7 - this) >> 1;
}

