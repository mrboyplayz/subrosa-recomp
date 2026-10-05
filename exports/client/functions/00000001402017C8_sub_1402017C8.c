/* Address: 0x1402017c8 | Name: sub_1402017C8 | Size: 330 bytes */
__int64 __fastcall sub_1402017C8(__int64 a1, char a2)
{
  char *v3; // rcx
  char v5; // bl
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  DName *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  DName *v11; // rax
  __int64 *v12; // rax
  DName *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  _UNKNOWN ***v16; // rax
  char v17; // cl
  unsigned __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  char v20; // [rsp+28h] [rbp-38h]
  _BYTE v21[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-10h] BYREF

  v3 = *(char **)&dword_140404A6C[19064555];
  v5 = 0;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 81 )
  {
    v3 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
    v5 = 1;
    ++*(_QWORD *)&dword_140404A6C[19064555];
  }
  v6 = *v3;
  if ( (_BYTE)v6 )
  {
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      sub_1402053CC(&v19);
      if ( !v20 )
      {
        v16 = &off_1402848D0;
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
          v16 = nullptr;
        v17 = -**(_BYTE **)&dword_140404A6C[19064555];
        *(_QWORD *)a1 = v16;
        v15 = v17 != 0 ? 2 : 0;
        goto LABEL_24;
      }
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v7 = v19;
      if ( a2 )
      {
        if ( !v5 )
        {
          v12 = (__int64 *)sub_1401FE364((DName *)v21, v19);
          goto LABEL_12;
        }
        v9 = sub_1401FE364((DName *)v23, v19);
        goto LABEL_9;
      }
      if ( v5 )
      {
        v8 = (DName *)v23;
        goto LABEL_8;
      }
      v13 = (DName *)v21;
    }
    else
    {
      *(_QWORD *)&dword_140404A6C[19064555] = v3 + 1;
      if ( v5 )
      {
        v7 = (int)v6 - 47;
        v8 = (DName *)v21;
LABEL_8:
        v9 = sub_1401FE40C(v8, v7);
LABEL_9:
        v10 = v9;
        v11 = sub_1401FE248((DName *)v22, (const struct StringLiteral *)&off_1403020D0);
        sub_1401FE7C0((__int64)v11, (__int64)&v19, v10);
        v12 = (__int64 *)&v19;
LABEL_12:
        v14 = *v12;
        v15 = *((_DWORD *)v12 + 2);
        *(_QWORD *)a1 = v14;
LABEL_24:
        *(_DWORD *)(a1 + 8) = v15;
        return a1;
      }
      v7 = v6 - 47;
      v13 = (DName *)v23;
    }
    v12 = (__int64 *)sub_1401FE40C(v13, v7);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1402848D0;
  return a1;
}

