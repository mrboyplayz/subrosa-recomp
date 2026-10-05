/* Address: 0x14020033c | Name: sub_14020033C | Size: 1345 bytes */
__int64 __fastcall sub_14020033C(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int8 *v5; // r8
  char *v6; // rdx
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // r8d
  char *v10; // rdx
  __int64 v11; // rbx
  DName *v12; // rax
  __int64 v13; // r8
  const char **v14; // rcx
  __int64 v15; // rax
  const char *v16; // rcx
  int v17; // edx
  int v18; // eax
  const char *v19; // rdx
  int v20; // ecx
  int v21; // ecx
  int v22; // ebx
  __int64 v23; // rax
  unsigned __int8 v24; // bl
  const char *v25; // rax
  DName *v26; // rax
  const char *v28; // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  const char *v30; // [rsp+30h] [rbp-20h] BYREF
  int v31; // [rsp+38h] [rbp-18h]
  const char *v32; // [rsp+40h] [rbp-10h] BYREF
  int v33; // [rsp+48h] [rbp-8h]

  v4 = (unsigned __int8)**(_BYTE **)&dword_140404A6C[19064555];
  if ( !(_BYTE)v4 )
  {
    v33 = 0;
    v32 = (const char *)&off_1402848D0;
    v14 = &v32;
    v13 = a2;
    goto LABEL_86;
  }
  v28 = nullptr;
  v5 = (unsigned __int8 *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  v29 = 0;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v4 <= 0x4E )
  {
    if ( v4 != 78 )
    {
      if ( v4 >= 0x43 )
      {
        if ( v4 <= 0x45 )
        {
          v7 = 4;
          v6 = "char";
          goto LABEL_12;
        }
        if ( v4 <= 0x47 )
        {
          v6 = "short";
          goto LABEL_11;
        }
        if ( v4 <= 0x49 )
        {
          v7 = 3;
          v6 = "int";
          goto LABEL_12;
        }
        if ( v4 <= 0x4B )
        {
          v7 = 4;
          v6 = "long";
          goto LABEL_12;
        }
        if ( v4 == 77 )
        {
          v6 = "float";
LABEL_11:
          v7 = 5;
LABEL_12:
          sub_1401FDF84((__int64)&v28, v6, v7);
LABEL_74:
          if ( (_BYTE)v4 == 67 )
          {
            v25 = "signed ";
            v33 = 7;
            goto LABEL_81;
          }
          if ( (((_BYTE)v4 - 69) & 0xF9) != 0 )
            goto LABEL_82;
LABEL_79:
          v25 = "unsigned ";
          v33 = 9;
LABEL_81:
          v32 = v25;
          v26 = sub_1401FE248((DName *)&v30, (const struct StringLiteral *)&v32);
          sub_1401FE7C0((__int64)v26, (__int64)&v32, (__int64)&v28);
          v28 = v32;
          v29 = v33;
LABEL_82:
          if ( *(_QWORD *)a2 )
          {
            v32 = nullptr;
            v33 = 0;
            sub_1401FFB98((#89 *)&v32, 32);
            sub_1401FE7C0((__int64)&v32, (__int64)&v30, a2);
            sub_1401FE908((__int64)&v28, (__int64)&v30);
          }
          *(_QWORD *)a1 = v28;
          *(_DWORD *)(a1 + 8) = v29;
          return a1;
        }
      }
      goto LABEL_70;
    }
LABEL_73:
    v33 = 6;
    v32 = "double";
    sub_1401FE888((__int64)&v28, (__int64)&v32);
    goto LABEL_74;
  }
  if ( v4 == 79 )
  {
    sub_1401FDF84((__int64)&v28, "long ", 5);
    goto LABEL_73;
  }
  if ( v4 <= 0x53 )
  {
    v18 = v4 & 3;
  }
  else
  {
    if ( v4 == 88 )
    {
      v7 = 4;
      v6 = "void";
      goto LABEL_12;
    }
    if ( (_BYTE)v4 != 95 )
    {
LABEL_70:
      *(_QWORD *)&dword_140404A6C[19064555] = v5 - 1;
      v23 = sub_14020197C(&v32);
      v16 = *(const char **)v23;
      v17 = *(_DWORD *)(v23 + 8);
      v28 = v16;
      v29 = v17;
      if ( v16 )
        goto LABEL_74;
LABEL_47:
      *(_QWORD *)a1 = v16;
      *(_DWORD *)(a1 + 8) = v17;
      return a1;
    }
    v8 = *v5;
    *(_QWORD *)&dword_140404A6C[19064555] = v5 + 1;
    if ( v8 <= 0x4E )
    {
      if ( v8 == 78 )
      {
        v9 = 4;
        v10 = "bool";
        goto LABEL_55;
      }
      if ( v8 > 0x47 )
      {
        if ( v8 <= 0x49 )
        {
          v10 = "__int32";
        }
        else
        {
          if ( v8 > 0x4B )
          {
            v9 = 8;
            v10 = "__int128";
            goto LABEL_55;
          }
          v10 = "__int64";
        }
      }
      else
      {
        if ( v8 < 0x46 )
        {
          if ( (_BYTE)v8 )
          {
            if ( v8 != 36 )
            {
              if ( v8 - 68 <= 1 )
              {
                v9 = 6;
                v10 = "__int8";
LABEL_55:
                sub_1401FDF84((__int64)&v28, v10, v9);
                goto LABEL_77;
              }
LABEL_48:
              v10 = "UNKNOWN";
              goto LABEL_54;
            }
            v33 = 6;
            v32 = "__w64 ";
            v11 = sub_14020033C(&v30, a2);
            v12 = sub_1401FE248((DName *)&v28, (const struct StringLiteral *)&v32);
            v13 = v11;
            v14 = (const char **)v12;
LABEL_86:
            sub_1401FE7C0((__int64)v14, a1, v13);
            return a1;
          }
          *(_QWORD *)&dword_140404A6C[19064555] = v5;
          v28 = (const char *)&off_1402848D0;
          v29 = 1;
LABEL_77:
          v24 = v8 - 69;
          if ( v24 > 8u || (v24 & 1) != 0 )
            goto LABEL_82;
          goto LABEL_79;
        }
        v10 = "__int16";
      }
LABEL_54:
      v9 = 7;
      goto LABEL_55;
    }
    if ( v8 != 79 )
    {
      switch ( v8 )
      {
        case 'Q':
          v10 = "char8_t";
          goto LABEL_54;
        case 'R':
          v9 = 9;
          v10 = "<unknown>";
          goto LABEL_55;
        case 'S':
          v9 = 8;
          v10 = "char16_t";
          goto LABEL_55;
        case 'U':
          v9 = 8;
          v10 = "char32_t";
          goto LABEL_55;
        case 'W':
          v10 = "wchar_t";
          goto LABEL_54;
      }
      if ( v8 <= 0x57 || (unsigned __int8)v8 > 0x59u )
        goto LABEL_48;
      *(_QWORD *)&dword_140404A6C[19064555] = v5;
      v15 = sub_14020197C(&v32);
      v16 = *(const char **)v15;
      v17 = *(_DWORD *)(v15 + 8);
      v28 = v16;
      v29 = v17;
      if ( !v16 )
        goto LABEL_47;
      goto LABEL_77;
    }
    v18 = -2;
  }
  v28 = nullptr;
  v29 = 0;
  v19 = *(const char **)a2;
  v20 = *(_DWORD *)(a2 + 8);
  v32 = v19;
  v33 = v20;
  if ( v18 == -2 )
  {
    v33 = v20 | 0x800;
    ((void (__fastcall *)(const char **, const char **, const char **, _QWORD))sub_14020353C)(&v30, &v28, &v32, 0);
    v21 = v31;
    if ( (v31 & 0x800) == 0 )
    {
      v33 = 2;
      v32 = "[]";
      sub_1401FE888((__int64)&v30, (__int64)&v32);
      v21 = v31;
    }
    *(_QWORD *)a1 = v30;
    *(_DWORD *)(a1 + 8) = v21;
  }
  else
  {
    if ( !v19 )
    {
      v22 = v18 & 2;
      if ( (v18 & 1) != 0 )
      {
        sub_1401FDF84((__int64)&v28, "const", 5);
        if ( v22 )
        {
          v31 = 9;
          v30 = " volatile";
          sub_1401FE888((__int64)&v28, (__int64)&v30);
        }
      }
      else if ( (v18 & 2) != 0 )
      {
        sub_1401FDF84((__int64)&v28, "volatile", 8);
      }
    }
    ((void (__fastcall *)(__int64, const char **, const char **, __int64))sub_14020353C)(a1, &v28, &v32, 1);
  }
  return a1;
}

