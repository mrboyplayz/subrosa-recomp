/* Address: 0x1401ffffc | Name: sub_1401FFFFC | Size: 583 bytes */
__int64 __fastcall sub_1401FFFFC(__int64 a1, __int64 a2)
{
  int v4; // r14d
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+28h] [rbp-58h]
  const char *v22; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+38h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v27[16]; // [rsp+70h] [rbp-10h] BYREF

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( *(_QWORD *)a2 )
    {
      DWORD2(v24) = 2;
      *(_QWORD *)&v24 = ")[";
      v25 = v24;
      v22 = nullptr;
      v23 = 0;
      sub_1401FFB98((#89 *)&v22, 40);
      sub_1401FE7C0((__int64)&v22, (__int64)&v24, a2);
      v15 = sub_1401FE794((__int64)&v24, (__int64)v27, (__int64)&v25);
      v16 = sub_1401FE844(v15, (__int64)v26, 1u);
      v17 = &v20;
LABEL_18:
      v18 = sub_1401FE7EC(v16, (__int64)v17, 93);
      sub_14020033C(a1, v18);
      return a1;
    }
LABEL_17:
    v22 = nullptr;
    v23 = 0;
    sub_1401FFB98((#89 *)&v22, 91);
    v16 = sub_1401FE844((__int64)&v22, (__int64)v27, 1u);
    v17 = (__int64 *)v26;
    goto LABEL_18;
  }
  v4 = MEMORY[0x1402027E8]();
  if ( v4 <= 0 )
    goto LABEL_17;
  v5 = (*(_DWORD *)(a2 + 8) & 0x800) == 0;
  v20 = 0;
  v21 = 0;
  if ( v5 )
    goto LABEL_5;
  v23 = 2;
  v22 = "[]";
  sub_1401FE888((__int64)&v20, (__int64)&v22);
  while ( (char)v21 <= 1 )
  {
LABEL_5:
    v6 = v4--;
    if ( !v6 || !**(_BYTE **)&dword_140404A6C[19064555] )
      break;
    v7 = sub_1402017C8(v26, 0);
    v22 = nullptr;
    v23 = 0;
    v8 = v7;
    sub_1401FFB98((#89 *)&v22, 91);
    sub_1401FE7C0((__int64)&v22, (__int64)&v25, v8);
    v9 = sub_1401FE7EC((__int64)&v25, (__int64)v27, 93);
    sub_1401FE908((__int64)&v20, v9);
  }
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x800) != 0 )
    {
      v10 = v27;
      v11 = a2;
    }
    else
    {
      v22 = nullptr;
      v23 = 0;
      sub_1401FFB98((#89 *)&v22, 40);
      sub_1401FE7C0((__int64)&v22, (__int64)&v25, a2);
      v12 = sub_1401FE7EC((__int64)&v25, (__int64)v27, 41);
      v10 = v26;
      v11 = v12;
    }
    v13 = sub_1401FE7C0(v11, (__int64)v10, (__int64)&v20);
    v20 = *(_QWORD *)v13;
    v21 = *(_DWORD *)(v13 + 8);
  }
  sub_1402030E0(&v24, &v20);
  v14 = v24;
  *(_DWORD *)(a1 + 8) = DWORD2(v24) | 0x800;
  *(_QWORD *)a1 = v14;
  return a1;
}

