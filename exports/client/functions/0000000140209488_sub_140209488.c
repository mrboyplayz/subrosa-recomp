/* Address: 0x140209488 | Name: sub_140209488 | Size: 660 bytes */
__int64 __fastcall sub_140209488(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct CMFCToolBarImages *a3,
        __int64 a4,
        struct FH4::FuncInfo4 *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  int v12; // esi
  _BYTE *v13; // rdx
  int v14; // r9d
  _BYTE *v15; // rdx
  unsigned __int64 *v16; // rcx
  _BYTE *v17; // rdx
  __int64 (__fastcall *v18)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4::FuncInfo4 *, int, __int64, _DWORD); // r10
  _DWORD v20[12]; // [rsp+50h] [rbp-48h] BYREF

  MEMORY[0x1401FDACC](a3);
  v12 = 0;
  if ( !*(_DWORD *)(sub_1401FD83C() + 64) && *(_DWORD *)a1 != -529697949 )
  {
    if ( *(_DWORD *)a1 != -2147483607 )
      goto LABEL_6;
    if ( *((_DWORD *)a1 + 6) != 15 )
      goto LABEL_7;
    if ( *((_QWORD *)a1 + 12) != 429065504 )
    {
LABEL_6:
      if ( *(_DWORD *)a1 != -2147483610 )
      {
LABEL_7:
        if ( (*(_BYTE *)a5 & 0x20) != 0 )
          return 1;
      }
    }
  }
  if ( (*((_BYTE *)a1 + 4) & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 2) )
      return 1;
    v13 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
    if ( !(*(_DWORD *)&v13[-byte_140284A40[*v13 & 0xF] - 4] >> byte_140284A40[(*v13 & 0xF) + 16]) || a6 )
      return 1;
    if ( (*((_BYTE *)a1 + 4) & 0x20) != 0 )
    {
      if ( *(_DWORD *)a1 == -2147483610 )
      {
        v14 = sub_140207890(a5, (struct _xDISPATCHER_CONTEXT *)a4, *(_QWORD *)(a4 + 32));
        if ( v14 >= -1 )
        {
          if ( *((_DWORD *)a5 + 2) )
          {
            v15 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
            v12 = *(_DWORD *)&v15[-byte_140284A40[*v15 & 0xF] - 4] >> byte_140284A40[(*v15 & 0xF) + 16];
          }
          if ( v14 < v12 )
          {
            v16 = a2;
LABEL_19:
            sub_14020A450(v16, (struct _xDISPATCHER_CONTEXT *)a4, a5, v14);
            return 1;
          }
        }
        goto LABEL_35;
      }
      if ( *(_DWORD *)a1 == -2147483607 )
      {
        v14 = *((_DWORD *)a1 + 14);
        if ( v14 >= -1 )
        {
          v17 = (_BYTE *)(*(_QWORD *)(a4 + 8) + *((int *)a5 + 2));
          if ( v14 < *(_DWORD *)&v17[-byte_140284A40[*v17 & 0xF] - 4] >> byte_140284A40[(*v17 & 0xF) + 16] )
          {
            v16 = *((unsigned __int64 **)a1 + 5);
            goto LABEL_19;
          }
        }
LABEL_35:
        abort();
      }
    }
    sub_140206D30(a2, (struct _xDISPATCHER_CONTEXT *)a4, a5);
    return 1;
  }
  MEMORY[0x1402097C4]((FH4::TryBlockMap4 *)v20, a5, *(_QWORD *)(a4 + 8));
  if ( v20[0] || (*(_BYTE *)a5 & 0x40) != 0 )
  {
    if ( *(_DWORD *)a1 == -529697949 && *((_DWORD *)a1 + 6) >= 3u && *((_DWORD *)a1 + 8) > 0x19930522u )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 6) + 8LL) )
      {
        v18 = (__int64 (__fastcall *)(struct EHExceptionRecord *, unsigned __int64 *, struct CMFCToolBarImages *, __int64, struct FH4::FuncInfo4 *, int, __int64, _DWORD))(*(int *)(*((_QWORD *)a1 + 6) + 8LL) + sub_1402075E0());
        if ( v18 )
          return v18(a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    FindHandler<__FrameHandler4>(a1, a2, a3, a4, a5, a8, a6, a7);
  }
  return 1;
}

