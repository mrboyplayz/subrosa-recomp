/* Address: 0x140209250 | Name: sub_140209250 | Size: 567 bytes */
__int64 __fastcall sub_140209250(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct _s_FuncInfo *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  bool v12; // zf
  int v13; // eax
  int v14; // r9d
  unsigned __int64 *v15; // rcx
  __int64 (__fastcall *v16)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD); // r10

  MEMORY[0x1401FDACC](a3);
  if ( *(_DWORD *)(sub_1401FD83C() + 64) || *(_DWORD *)a1 == -529697949 )
    goto LABEL_10;
  if ( *(_DWORD *)a1 != -2147483607 )
  {
    v12 = *(_DWORD *)a1 == -2147483610;
LABEL_7:
    if ( v12 )
      goto LABEL_10;
    goto LABEL_8;
  }
  if ( *((_DWORD *)a1 + 6) == 15 )
  {
    v12 = *((_QWORD *)a1 + 12) == 429065504;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_BYTE *)a5 + 36) & 1) != 0 )
    return 1;
LABEL_10:
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 1) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        v13 = sub_140207828(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( v13 >= -1 && v13 < *((_DWORD *)a5 + 1) )
        {
          v14 = v13;
          v15 = a2;
LABEL_18:
          sub_14020A2C4(v15, (struct _xDISPATCHER_CONTEXT *)a4, a5, v14);
          return 1;
        }
        goto LABEL_38;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        v14 = *((_DWORD *)a1 + 14);
        if ( v14 >= -1 && v14 < *((_DWORD *)a5 + 1) )
        {
          v15 = *((unsigned __int64 **)a1 + 5);
          goto LABEL_18;
        }
LABEL_38:
        abort();
      }
    }
    sub_140206CCC(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  if ( *((_DWORD *)a5 + 3)
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521 && *((_DWORD *)a5 + 8) && *((int *)a5 + 8) + sub_1402075CC()
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930522 && (*((_DWORD *)a5 + 9) & 4) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        v16 = (__int64 (__fastcall *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct _s_FuncInfo *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( v16 )
          return v16(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    sub_1402080C4(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

