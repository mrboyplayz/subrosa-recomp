/* Address: 0x140204850 | Name: sub_140204850 | Size: 1135 bytes */
__int64 __fastcall sub_140204850(DName *a1, __int64 a2)
{
  int v3; // ebx
  _BYTE *v4; // rax
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rax
  __int16 v8; // bx
  _BYTE *v9; // rax
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  const char *v13; // rax
  DName *v14; // rax
  char v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // [rsp+0h] [rbp-70h] BYREF
  __int128 v27; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+58h] [rbp-18h]
  char v32; // [rsp+5Fh] [rbp-11h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]

  v3 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  v4 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  v5 = v3;
  if ( (char)v3 > 69 )
  {
    if ( (char)v3 > 74 )
    {
      if ( (_BYTE)v3 == 77 )
      {
        sub_140204CC0(v28);
        sub_140204850(a1);
        return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
      }
      if ( (_BYTE)v3 == 81 )
        goto LABEL_24;
      if ( (_BYTE)v3 != 82 )
      {
        if ( (_BYTE)v3 == 83 )
        {
          *(_QWORD *)a1 = 0;
          *((_DWORD *)a1 + 2) = 0;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
        }
        if ( (unsigned __int8)(v3 - 84) > 2u )
          goto LABEL_24;
      }
      sub_140203F1C((__int64)&v27);
      if ( (_QWORD)v27 )
        *(_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(*(_QWORD *)v27 + 24LL))(v27, &v30, &v32) = 0;
      else
        LOBYTE(v30) = 0;
      v8 = unknown_libname_852(&v30);
      if ( (dword_140404A6C[19064559] & 0x4000) != 0 )
      {
        if ( *(_QWORD *)&dword_140404A6C[19064561] )
        {
          v9 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))&dword_140404A6C[19064561])(v8 & 0xFFF);
          if ( v9 )
          {
            sub_1401FDCAC((__int64)a1, v9);
            return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
          }
        }
      }
      sub_140158C70((int)&v30, 16, (int)"%d", v8 & 0xFFF);
      sub_1401FDBF8((__int64)&v29, &v30);
      v10 = v5 - 82;
      if ( v10 && (v11 = v10 - 2) != 0 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            goto LABEL_24;
          v13 = "`generic-method-parameter-";
          DWORD2(v27) = 26;
          goto LABEL_38;
        }
        v13 = "`generic-class-parameter-";
      }
      else
      {
        v13 = "`template-type-parameter-";
      }
      DWORD2(v27) = 25;
LABEL_38:
      *(_QWORD *)&v27 = v13;
      v14 = sub_1401FE248((DName *)v28, (const struct StringLiteral *)&v27);
      sub_1401FE7C0((__int64)v14, (__int64)&v27, (__int64)&v29);
      v15 = 39;
      v16 = (__int64 *)&v27;
LABEL_70:
      sub_1401FE7EC((__int64)v16, (__int64)a1, v15);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    }
    v30 = 0;
    v31 = 0;
    sub_1401FFB98((#89 *)&v30, 123);
    if ( (unsigned __int8)(v3 - 72) <= 2u )
    {
      v18 = sub_1402014E4((__int64)v28, v17);
      sub_1401FE908((__int64)&v30, v18);
      if ( (char)v31 <= 1 )
      {
        if ( v30 )
        {
          v19 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v19 )
          {
            *(_QWORD *)v19 = off_1402846F0;
            *(_BYTE *)(v19 + 8) = 44;
          }
          else
          {
            v19 = 0;
          }
          sub_1401FDE58(&v30, v19);
        }
        else
        {
          v30 = 0;
          v31 = 0;
          sub_1401FFB98((#89 *)&v30, 44);
        }
      }
    }
    if ( v3 != 70 )
    {
      if ( v3 == 71 )
        goto LABEL_55;
      if ( v3 == 72 )
      {
LABEL_69:
        v24 = sub_140203F1C((__int64)v28);
        sub_1401FE908((__int64)&v30, v24);
        v15 = 125;
        v16 = &v30;
        goto LABEL_70;
      }
      if ( v3 != 73 )
      {
LABEL_55:
        v20 = sub_140203F1C((__int64)v28);
        sub_1401FE908((__int64)&v30, v20);
        if ( (char)v31 <= 1 )
        {
          if ( v30 )
          {
            v21 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v21 )
            {
              *(_QWORD *)v21 = off_1402846F0;
              *(_BYTE *)(v21 + 8) = 44;
            }
            else
            {
              v21 = 0;
            }
            sub_1401FDE58(&v30, v21);
          }
          else
          {
            v30 = 0;
            v31 = 0;
            sub_1401FFB98((#89 *)&v30, 44);
          }
        }
      }
    }
    v22 = sub_140203F1C((__int64)v28);
    sub_1401FE908((__int64)&v30, v22);
    if ( (char)v31 <= 1 )
    {
      if ( v30 )
      {
        v23 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v23 )
        {
          *(_QWORD *)v23 = off_1402846F0;
          *(_BYTE *)(v23 + 8) = 44;
        }
        else
        {
          v23 = 0;
        }
        sub_1401FDE58(&v30, v23);
      }
      else
      {
        v30 = 0;
        v31 = 0;
        sub_1401FFB98((#89 *)&v30, 44);
      }
    }
    goto LABEL_69;
  }
  switch ( (_BYTE)v3 )
  {
    case 0x45:
      sub_1402014E4((__int64)a1, a2);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    case 0:
      *(_QWORD *)&dword_140404A6C[19064555] = v4 - 1;
      *(_QWORD *)a1 = &off_1402848D0;
      *((_DWORD *)a1 + 2) = 0;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    case 0x30:
      sub_140203F1C((__int64)a1);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
  }
  if ( (_BYTE)v3 != 49 )
  {
    if ( (_BYTE)v3 == 50 )
    {
      sub_140205440(a1);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    }
    if ( (_BYTE)v3 == 52 )
    {
      sub_1402042B4((__int64)a1);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    }
    if ( (unsigned __int8)(v3 - 65) <= 1u )
    {
      sub_140201F64(a1, v3);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
    }
LABEL_24:
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
  }
  if ( *v4 == 64 )
  {
    DWORD2(v29) = 4;
    *(_QWORD *)&dword_140404A6C[19064555] = v4 + 1;
    *(_QWORD *)&v29 = "NULL";
    v27 = v29;
    sub_1401FE248(a1, (const struct StringLiteral *)&v27);
  }
  else
  {
    v30 = 0;
    v31 = 0;
    sub_1401FFB98((#89 *)&v30, 38);
    v7 = sub_1402014E4((__int64)&v27, v6);
    sub_1401FE7C0((__int64)&v30, (__int64)a1, v7);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v33);
}

