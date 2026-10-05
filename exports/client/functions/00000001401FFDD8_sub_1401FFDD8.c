/* Address: 0x1401ffdd8 | Name: sub_1401FFDD8 | Size: 348 bytes */
DName *__fastcall sub_1401FFDD8(DName *a1)
{
  int v2; // ecx
  const char *v3; // rax
  __int64 v4; // rax
  const char *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  const char *v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 88 )
  {
    v10 = 4;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    v5 = "void";
LABEL_18:
    v9 = v5;
    sub_1401FE248(a1, (const struct StringLiteral *)&v9);
    return a1;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 90 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( (~(dword_140404A6C[19064559] >> 18) & 1) != 0 )
    {
      v5 = "...";
      v10 = 3;
    }
    else
    {
      v5 = "<ellipsis>";
      v10 = 10;
    }
    goto LABEL_18;
  }
  sub_1401FFC44((__int64)&v7);
  v2 = v8;
  if ( (_BYTE)v8 || !**(_BYTE **)&dword_140404A6C[19064555] )
    goto LABEL_13;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
LABEL_13:
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 2) = v2;
    return a1;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 90 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( (~(dword_140404A6C[19064559] >> 18) & 1) != 0 )
    {
      v3 = ",...";
      v10 = 4;
    }
    else
    {
      v3 = ",<ellipsis>";
      v10 = 11;
    }
    v9 = v3;
    v4 = sub_1401FE794((__int64)&v7, (__int64)v11, (__int64)&v9);
    *(_QWORD *)a1 = *(_QWORD *)v4;
    *((_DWORD *)a1 + 2) = *(_DWORD *)(v4 + 8);
  }
  else
  {
    *((_DWORD *)a1 + 2) = 0;
    *((_BYTE *)a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
  }
  return a1;
}

