/* Address: 0x1402030e0 | Name: sub_1402030E0 | Size: 655 bytes */
_DWORD *__fastcall sub_1402030E0(_DWORD *a1, __int64 a2)
{
  _BYTE *v3; // rdx
  __int64 v5; // rdx
  int v6; // r8d
  char *v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  char v10; // al
  const char **v11; // rcx
  int v13; // r8d
  char *v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h]
  const char *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]

  v3 = *(_BYTE **)&dword_140404A6C[19064555];
  v15 = 0;
  v16 = 0;
  switch ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    case 0:
      goto LABEL_15;
    case 0x24:
      v10 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
      if ( v10 != 36 )
      {
        if ( !v10 )
        {
LABEL_15:
          v18 = 0;
          v17 = (const char *)&off_1402848D0;
          v11 = &v17;
LABEL_16:
          sub_1401FE7C0((__int64)v11, (__int64)a1, a2);
          return a1;
        }
LABEL_27:
        a1[2] = 0;
        *((_BYTE *)a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        return a1;
      }
      v3 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL);
      *(_QWORD *)&dword_140404A6C[19064555] = v3;
      switch ( *v3 )
      {
        case 0:
          goto LABEL_15;
        case 0x41:
          *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
          sub_140202084((__int64)a1, (__int64 *)a2);
          return a1;
        case 0x42:
          *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
          sub_140203370(a1, a2, 1);
          return a1;
        case 0x43:
          v17 = nullptr;
          *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
          v18 = 0;
          v5 = sub_140200AFC((__int64)&v15, a2, 0, &v17, 0);
          goto LABEL_6;
      }
      if ( *v3 != 81 )
      {
        if ( *v3 != 82 )
        {
          switch ( *v3 )
          {
            case 'S':
              *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
              break;
            case 'T':
              *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
              if ( !*(_QWORD *)a2 )
              {
                v18 = 14;
                v17 = "std::nullptr_t";
                sub_1401FE248((DName *)a1, (const struct StringLiteral *)&v17);
                return a1;
              }
              v18 = 15;
              v17 = "std::nullptr_t ";
              v11 = (const char **)sub_1401FE248((DName *)&v15, (const struct StringLiteral *)&v17);
              goto LABEL_16;
            case 'Y':
              *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
              sub_140203DE0(a1);
              return a1;
          }
          goto LABEL_27;
        }
        if ( *(_QWORD *)a2 )
        {
          v13 = 9;
          v14 = "volatile ";
        }
        else
        {
          v13 = 8;
          v14 = "volatile";
        }
        sub_1401FDF84((__int64)&v15, v14, v13);
        v3 = *(_BYTE **)&dword_140404A6C[19064555];
      }
      v8 = 3;
      goto LABEL_12;
    case 0x41:
LABEL_11:
      v8 = 2;
LABEL_12:
      v17 = *(const char **)a2;
      v9 = *(_DWORD *)(a2 + 8) | 0x100;
      *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
      v18 = v9;
      sub_14020353C(a1, &v15, &v17, v8);
      return a1;
    case 0x42:
      if ( *(_QWORD *)a2 )
      {
        v6 = 9;
        v7 = "volatile ";
      }
      else
      {
        v6 = 8;
        v7 = "volatile";
      }
      sub_1401FDF84((__int64)&v15, v7, v6);
      v3 = *(_BYTE **)&dword_140404A6C[19064555];
      goto LABEL_11;
  }
  v5 = a2;
LABEL_6:
  sub_14020033C((__int64)a1, v5);
  return a1;
}

