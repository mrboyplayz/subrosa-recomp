/* Address: 0x1402013d0 | Name: sub_1402013D0 | Size: 273 bytes */
DName *__fastcall sub_1402013D0(DName *a1, struct DName *a2)
{
  const char **v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  const char *v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+48h] [rbp-18h]
  _BYTE v10[16]; // [rsp+50h] [rbp-10h] BYREF

  sub_1401FE2A4((DName *)&v6, a2);
  switch ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    case 0:
      v9 = 0;
      v8 = (const char *)&off_1402848D0;
      v3 = &v8;
      goto LABEL_10;
    case 0x3F:
      v8 = nullptr;
      v9 = 0;
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v4 = sub_140200AFC((__int64)v10, (__int64)&v6, 0, &v8, 0);
      v6 = *(_QWORD *)v4;
      v7 = *(_DWORD *)(v4 + 8);
      break;
    case 0x58:
      ++*(_QWORD *)&dword_140404A6C[19064555];
      if ( !v6 )
      {
        v9 = 4;
        v8 = "void";
        sub_1401FE248(a1, (const struct StringLiteral *)&v8);
        return a1;
      }
      v9 = 5;
      v8 = "void ";
      v3 = (const char **)sub_1401FE248((DName *)v10, (const struct StringLiteral *)&v8);
LABEL_10:
      sub_1401FE7C0((__int64)v3, (__int64)a1, (__int64)&v6);
      return a1;
  }
  sub_1402030E0(a1, &v6);
  return a1;
}

