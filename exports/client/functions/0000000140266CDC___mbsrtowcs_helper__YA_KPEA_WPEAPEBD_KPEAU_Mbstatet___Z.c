/* Address: 0x140266cdc | Name: ?_mbsrtowcs_helper@@YA_KPEA_WPEAPEBD_KPEAU_Mbstatet@@@Z | Size: 350 bytes */
__int64 __fastcall _mbsrtowcs_helper(#49 *a1, #49 **a2, const char **a3, struct #130 *a4)
{
  #49 *v9; // rdi
  __int64 v10; // rbx
  struct _Mbstatet *v11; // r12
  int v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    v9 = *a2;
    v12 = 0;
    v10 = 0;
    sub_140213644((_LocaleUpdate *)&v13, nullptr);
    v11 = (struct _Mbstatet *)&dword_140404A6C[19065859];
    if ( a4 )
      v11 = a4;
    if ( *(_DWORD *)(v14 + 12) == 65001 )
    {
      v10 = __crt_mbstring::__mbsrtowcs_utf8(a1, (#49 *)a2, a3);
    }
    else if ( a1 )
    {
      if ( a3 )
      {
        while ( 1 )
        {
          _mbrtowc_s_l(&v12, a1, v9, (const char *)0x7FFFFFFF, v11, (struct #68 *)&v14);
          if ( v12 < 0 )
            break;
          if ( !v12 )
          {
            v9 = nullptr;
            goto LABEL_20;
          }
          ++v10;
          v9 = (#49 *)((char *)v9 + v12);
          a1 = (#49 *)((char *)a1 + 2);
          a3 = (const char **)((char *)a3 - 1);
          if ( !a3 )
            goto LABEL_20;
        }
        v10 = -1;
      }
LABEL_20:
      *a2 = v9;
    }
    else
    {
      while ( 1 )
      {
        _mbrtowc_s_l(&v12, (#49 *)&v16, v9, (const char *)0x7FFFFFFF, v11, (struct #68 *)&v14);
        if ( v12 < 0 )
          break;
        if ( !v12 )
          goto LABEL_21;
        ++v10;
        v9 = (#49 *)((char *)v9 + v12);
      }
      v10 = -1;
    }
LABEL_21:
    if ( v15 )
      *(_DWORD *)(v13 + 936) &= ~2u;
    return v10;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return -1;
  }
}

