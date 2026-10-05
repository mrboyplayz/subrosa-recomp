/* Address: 0x140205c58 | Name: sub_140205C58 | Size: 275 bytes */
__int64 __fastcall sub_140205C58(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rax
  __int64 v5; // rbx
  DName *v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  const char *v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  _BYTE v15[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-10h] BYREF

  v3 = *(_BYTE **)&dword_140404A6C[19064557];
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    if ( *v3 != 63 )
    {
LABEL_10:
      v10 = sub_1402014E4((__int64)v16, a2);
      v11 = *(_QWORD *)v10;
      v7 = *(_DWORD *)(v10 + 8);
      *(_QWORD *)a1 = v11;
      goto LABEL_11;
    }
    if ( v3[1] == 64 )
    {
      *(_QWORD *)&dword_140404A6C[19064555] += 2LL;
      v13 = "CV: ";
      v14 = 4;
      v5 = sub_1402014E4((__int64)v15, a2);
      v6 = sub_1401FE248((DName *)v16, (const struct StringLiteral *)&v13);
      sub_1401FE7C0((__int64)v6, (__int64)&v13, v5);
      *(_QWORD *)a1 = v13;
      v7 = v14;
LABEL_11:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    if ( v3[1] != 36 )
    {
      if ( v3[1] == 63 && v3[2] == 64 )
      {
        *(_BYTE *)(a1 + 8) = 2;
        return a1;
      }
      goto LABEL_10;
    }
    v8 = sub_1402045BC((__int64)v16, 0, a3);
    v9 = *(_QWORD *)v8;
    LODWORD(v8) = *(_DWORD *)(v8 + 8);
    *(_QWORD *)a1 = v9;
    *(_DWORD *)(a1 + 8) = v8;
    if ( (_BYTE)v8 == 2 || (dword_140404A6C[19064559] & 0x1000) == 0 && **(_BYTE **)&dword_140404A6C[19064555] )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = *(_QWORD *)&dword_140404A6C[19064557];
      goto LABEL_10;
    }
  }
  return a1;
}

