/* Address: 0x140205810 | Name: sub_140205810 | Size: 741 bytes */
__int64 __fastcall sub_140205810(__int64 a1, char a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  _UNKNOWN ***v8; // rbx
  int v9; // edi
  char v10; // cl
  __int64 v11; // rax
  const char *v12; // rax
  _BYTE *v13; // rcx
  int v14; // r8d
  const char *v15; // rax
  __int64 v16; // r9
  const char *v17; // rax
  _BYTE *v18; // rcx
  int v19; // r8d
  __int64 (__fastcall *v20)(_QWORD); // rbx
  unsigned int v21; // eax
  _BYTE *v22; // rax
  __int64 v23; // rax
  DName *v24; // rax
  _BYTE *v25; // rdx
  DName *v26; // rax
  int *v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v31; // [rsp+8h] [rbp-49h] BYREF
  _OWORD v32[2]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v33; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v34[16]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v35[16]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v36[15]; // [rsp+78h] [rbp+27h] BYREF
  char v37; // [rsp+87h] [rbp+36h] BYREF
  __int64 v38; // [rsp+88h] [rbp+37h]

  v6 = (unsigned int)((char)**(_BYTE **)&dword_140404A6C[19064555] - 48);
  if ( (unsigned int)v6 <= 9 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    MEMORY[0x1401FE684](*(_QWORD *)&dword_140404A6C[19064551], a1);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v38);
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    v7 = sub_1402045BC((__int64)v32, 0, v6);
    v8 = *(_UNKNOWN ****)v7;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = **(_BYTE **)&dword_140404A6C[19064555];
    v11 = ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( v10 != 64 )
    {
      v8 = &off_1402848D0;
      *(_QWORD *)&dword_140404A6C[19064555] = v11 - 1;
      v9 = (*(_BYTE *)(v11 - 1) != 0) + 1;
      if ( *(_BYTE *)(v11 - 1) )
        v8 = nullptr;
    }
    goto LABEL_35;
  }
  v12 = "template-parameter-";
  v13 = *(_BYTE **)&dword_140404A6C[19064555];
  v14 = 18;
  do
  {
    if ( !*v13 )
      break;
    if ( *v13 != *v12 )
      break;
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  if ( *v13 == *v12 )
  {
    v15 = "`template-parameter-";
    DWORD2(v32[0]) = 20;
    v16 = *(_QWORD *)&dword_140404A6C[19064555] + 19LL;
LABEL_20:
    *(_QWORD *)&v32[0] = v15;
    v33 = v32[0];
    *(_QWORD *)&dword_140404A6C[19064555] = v16;
    sub_140203F1C((__int64)v32);
    if ( (dword_140404A6C[19064559] & 0x4000) != 0
      && (v20 = *(__int64 (__fastcall **)(_QWORD))&dword_140404A6C[19064561]) != nullptr )
    {
      if ( *(_QWORD *)&v32[0] )
      {
        *(_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *))(**(_QWORD **)&v32[0] + 24LL))(
                    *(_QWORD *)&v32[0],
                    v36,
                    &v37) = 0;
        v20 = *(__int64 (__fastcall **)(_QWORD))&dword_140404A6C[19064561];
      }
      else
      {
        v36[0] = 0;
      }
      v21 = unknown_libname_852(v36);
      v22 = (_BYTE *)v20(v21);
      if ( v22 )
      {
        v23 = sub_1401FDCAC((__int64)v32, v22);
        goto LABEL_34;
      }
      v24 = sub_1401FE248((DName *)v35, (const struct StringLiteral *)&v33);
      sub_1401FE7C0((__int64)v24, (__int64)&v33, (__int64)v32);
      v25 = v34;
    }
    else
    {
      v26 = sub_1401FE248((DName *)v34, (const struct StringLiteral *)&v33);
      sub_1401FE7C0((__int64)v26, (__int64)&v33, (__int64)v32);
      v25 = v35;
    }
    v23 = sub_1401FE7EC((__int64)&v33, (__int64)v25, 39);
    goto LABEL_34;
  }
  v17 = "generic-type-";
  v18 = *(_BYTE **)&dword_140404A6C[19064555];
  v19 = 12;
  do
  {
    if ( !*v18 )
      break;
    if ( *v18 != *v17 )
      break;
    ++v18;
    ++v17;
    --v19;
  }
  while ( v19 );
  if ( *v18 == *v17 )
  {
    v15 = "`generic-type-";
    DWORD2(v32[0]) = 14;
    v16 = *(_QWORD *)&dword_140404A6C[19064555] + 13LL;
    goto LABEL_20;
  }
  if ( a3 && **(_BYTE **)&dword_140404A6C[19064555] == 64 )
  {
    v8 = nullptr;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    v9 = 0;
    goto LABEL_35;
  }
  v23 = (__int64)sub_1401FE198((DName *)v34, (char **)&dword_140404A6C[19064555], 64);
LABEL_34:
  v8 = *(_UNKNOWN ****)v23;
  v9 = *(_DWORD *)(v23 + 8);
LABEL_35:
  if ( a2 )
  {
    v27 = *(int **)&dword_140404A6C[19064551];
    if ( **(_DWORD **)&dword_140404A6C[19064551] != 9 )
    {
      if ( v8 )
      {
        v28 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v28 )
        {
          *(_QWORD *)v28 = v8;
          *(_DWORD *)(v28 + 8) = v9;
          v29 = *v27;
          *v27 = v29 + 1;
          *(_QWORD *)&v27[2 * v29 + 4] = v28;
        }
      }
    }
  }
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 8) = v9;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v38);
}

