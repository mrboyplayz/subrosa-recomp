/* Address: 0x140204cc0 | Name: sub_140204CC0 | Size: 359 bytes */
__int64 __fastcall sub_140204CC0(DName *a1)
{
  __int64 (__fastcall *v2)(_QWORD); // rdi
  unsigned int v3; // eax
  _BYTE *v4; // rax
  DName *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-70h] BYREF
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v11[15]; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+5Fh] [rbp-11h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 88 )
  {
    DWORD2(v9) = 4;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    *(_QWORD *)&v9 = "void";
    v8 = v9;
    sub_1401FE248(a1, (const struct StringLiteral *)&v8);
  }
  else if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    sub_140203F1C((__int64)&v9);
    if ( (dword_140404A6C[19064559] & 0x4000) != 0
      && (v2 = *(__int64 (__fastcall **)(_QWORD))&dword_140404A6C[19064561]) != nullptr
      && (!(_QWORD)v9
        ? (__int64 (__fastcall *)(_QWORD))(v11[0] = 0)
        : (*(_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *))(*(_QWORD *)v9 + 24LL))(v9, v11, &v12) = 0,
           v2 = *(__int64 (__fastcall **)(_QWORD))&dword_140404A6C[19064561]),
          v3 = unknown_libname_852(v11),
          (v4 = (_BYTE *)v2(v3)) != nullptr) )
    {
      sub_1401FDCAC((__int64)a1, v4);
    }
    else
    {
      DWORD2(v8) = 19;
      *(_QWORD *)&v8 = "`template-parameter";
      v5 = sub_1401FE248((DName *)v10, (const struct StringLiteral *)&v8);
      sub_1401FE7C0((__int64)v5, (__int64)&v8, (__int64)&v9);
      sub_1401FE7EC((__int64)&v8, (__int64)a1, 39);
    }
  }
  else
  {
    *(_QWORD *)&v8 = 0;
    DWORD2(v8) = 0;
    sub_1402030E0(a1, (__int64)&v8);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v13);
}

