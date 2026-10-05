/* Address: 0x140203de0 | Name: sub_140203DE0 | Size: 313 bytes */
__int64 __fastcall sub_140203DE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  _BYTE *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  LOBYTE(a2) = 1;
  v3 = sub_140205810(&v16, a2, 0);
  v5 = *(_QWORD *)v3;
  *(_QWORD *)a1 = *(_QWORD *)v3;
  LODWORD(v3) = *(_DWORD *)(v3 + 8);
  v6 = (_BYTE)v3 == 0;
  *(_DWORD *)(a1 + 8) = v3;
  v7 = *(_BYTE **)&dword_140404A6C[19064555];
  if ( v6 && **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
    {
LABEL_6:
      *(_QWORD *)&dword_140404A6C[19064555] = v7 + 1;
      return a1;
    }
    *(_QWORD *)&v15 = "::";
    DWORD2(v15) = 2;
    v8 = sub_14020392C((__int64)&v16, v4);
    v9 = sub_1401FE794(v8, (__int64)v17, (__int64)&v15);
    v10 = sub_1401FE7C0(v9, (__int64)v18, a1);
    v5 = *(_QWORD *)v10;
    *(_QWORD *)a1 = *(_QWORD *)v10;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v10 + 8);
    v7 = *(_BYTE **)&dword_140404A6C[19064555];
  }
  if ( *v7 == 64 )
    goto LABEL_6;
  if ( *v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  else if ( v5 )
  {
    *(_QWORD *)&v15 = "::";
    DWORD2(v15) = 2;
    v11 = v15;
    DWORD2(v15) = 0;
    v16 = v11;
    *(_QWORD *)&v15 = &off_1402848D0;
    v12 = sub_1401FE794((__int64)&v15, (__int64)v18, (__int64)&v16);
    v13 = sub_1401FE7C0(v12, (__int64)v17, a1);
    *(_QWORD *)a1 = *(_QWORD *)v13;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v13 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

