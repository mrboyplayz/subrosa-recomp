/* Address: 0x140203370 | Name: sub_140203370 | Size: 460 bytes */
DName *__fastcall sub_140203370(DName *a1, __int64 a2, int a3)
{
  _BYTE *v3; // rax
  const char *v6; // rax
  const char *v7; // rax
  DName *v8; // rcx
  const char *v9; // rax
  DName *v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-10h] BYREF

  v3 = *(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    DWORD2(v15) = 0;
    *(_QWORD *)&v15 = &off_1402848D0;
    v8 = (DName *)&v15;
    goto LABEL_29;
  }
  if ( !a3 )
  {
LABEL_13:
    if ( *v3 == 36 )
    {
      if ( v3[1] == 36 && v3[2] == 84 )
      {
        *(_QWORD *)&dword_140404A6C[19064555] = v3 + 3;
        if ( !*(_QWORD *)a2 )
        {
          v6 = "std::nullptr_t";
          DWORD2(v14) = 14;
          goto LABEL_6;
        }
        v7 = "std::nullptr_t ";
        DWORD2(v14) = 15;
        goto LABEL_8;
      }
    }
    else if ( *v3 == 89 )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
      sub_1401FFFFC((__int64)a1, a2);
      return a1;
    }
    sub_14020033C((__int64)&v14, a2);
    if ( (*(_DWORD *)(a2 + 8) & 0x4000) != 0 )
    {
      v9 = "cli::array<";
      DWORD2(v15) = 11;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 8) & 0x2000) == 0 )
      {
        v12 = DWORD2(v14);
        v11 = v14;
        goto LABEL_27;
      }
      v9 = "cli::pin_ptr<";
      DWORD2(v15) = 13;
    }
    *(_QWORD *)&v15 = v9;
    v10 = sub_1401FE248((DName *)v16, (const struct StringLiteral *)&v15);
    sub_1401FE7C0((__int64)v10, (__int64)&v15, (__int64)&v14);
    v11 = v15;
    v12 = DWORD2(v15);
LABEL_27:
    *(_QWORD *)a1 = v11;
    *((_DWORD *)a1 + 2) = v12;
    return a1;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] != 88 )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
      && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 95
      && *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL) == 90 )
    {
      v3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 3LL);
      *(_QWORD *)&dword_140404A6C[19064555] += 3LL;
    }
    goto LABEL_13;
  }
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( *(_QWORD *)a2 )
  {
    v7 = "void ";
    DWORD2(v14) = 5;
LABEL_8:
    *(_QWORD *)&v14 = v7;
    v15 = v14;
    v8 = sub_1401FE248((DName *)v16, (const struct StringLiteral *)&v15);
LABEL_29:
    sub_1401FE7C0((__int64)v8, (__int64)a1, a2);
    return a1;
  }
  v6 = "void";
  DWORD2(v14) = 4;
LABEL_6:
  *(_QWORD *)&v14 = v6;
  v15 = v14;
  sub_1401FE248(a1, (const struct StringLiteral *)&v15);
  return a1;
}

