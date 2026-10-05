/* Address: 0x1402014e4 | Name: sub_1402014E4 | Size: 740 bytes */
__int64 __fastcall sub_1402014E4(__int64 a1, __int64 a2)
{
  char v3; // cl
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *i; // rax
  unsigned int v7; // esi
  __int64 v8; // r14
  BOOL v9; // r12d
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  int v20; // [rsp+38h] [rbp-48h]
  const char *v21; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h]
  _BYTE v23[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v24[32]; // [rsp+60h] [rbp-20h] BYREF

  ++dword_140404A6C[19064564];
  if ( (dword_140404A6C[19064559] & 0x2000) != 0 )
  {
    dword_140404A6C[19064559] &= ~0x2000u;
    sub_1402013D0((DName *)&v19, nullptr);
    dword_140404A6C[19064559] |= 0x2000u;
LABEL_3:
    *(_QWORD *)a1 = v19;
    *(_DWORD *)(a1 + 8) = v20;
    goto LABEL_47;
  }
  v3 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    v4 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
    *(_QWORD *)&dword_140404A6C[19064555] = v4;
    if ( *v4 == 63 )
    {
      v5 = v4 + 1;
      if ( *v5 == 63 )
      {
        sub_1402014E4(&v19);
        for ( i = *(_BYTE **)&dword_140404A6C[19064555]; *i; *(_QWORD *)&dword_140404A6C[19064555] = i )
          ++i;
        goto LABEL_3;
      }
      if ( *v5 == 36 )
      {
        LOBYTE(a2) = 1;
        sub_1402045BC(&v17, a2);
      }
      else
      {
        *(_QWORD *)&dword_140404A6C[19064555] = v5;
        sub_14020285C(&v17, 0, 0);
      }
    }
    else
    {
      LOBYTE(a2) = 1;
      sub_140205810(&v17, a2, 0);
    }
    v7 = v18;
    v8 = v17;
    v9 = v17 && (v18 & 0x200) != 0;
    v10 = (v18 >> 15) & 1;
    if ( (char)v18 > 1 )
    {
LABEL_20:
      *(_QWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v7;
      goto LABEL_47;
    }
    if ( (**(_BYTE **)&dword_140404A6C[19064555] & 0xBF) != 0 )
    {
      sub_14020392C(&v19);
      if ( v19 )
      {
        if ( !LOBYTE(dword_140404A6C[19064560]) )
        {
          v21 = "::";
          v22 = 2;
          v13 = sub_1401FE794((__int64)&v19, (__int64)v24, (__int64)&v21);
          v14 = v23;
          goto LABEL_27;
        }
        LOBYTE(dword_140404A6C[19064560]) = 0;
        v11 = sub_1401FE7C0((__int64)&v17, (__int64)&v21, (__int64)&v19);
        v8 = *(_QWORD *)v11;
        v17 = *(_QWORD *)v11;
        v7 = *(_DWORD *)(v11 + 8);
        v18 = v7;
        if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
        {
          v12 = sub_14020392C(&v21);
          v19 = *(_QWORD *)v12;
          v20 = *(_DWORD *)(v12 + 8);
          v21 = "::";
          v22 = 2;
          v13 = sub_1401FE794((__int64)&v19, (__int64)v23, (__int64)&v21);
          v14 = v24;
LABEL_27:
          v15 = sub_1401FE7C0(v13, (__int64)v14, (__int64)&v17);
          v7 = *(_DWORD *)(v15 + 8);
          v8 = *(_QWORD *)v15;
          v18 = v7;
          v17 = v8;
        }
      }
    }
    if ( v9 && v8 )
    {
      v7 |= 0x200u;
      v18 = v7;
    }
    if ( v10 )
    {
      v7 |= 0x8000u;
      v18 = v7;
    }
    if ( v8 && (v7 & 0x1000) == 0 )
    {
      if ( **(_BYTE **)&dword_140404A6C[19064555] )
      {
        if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          goto LABEL_47;
        }
        ++*(_QWORD *)&dword_140404A6C[19064555];
      }
      if ( (dword_140404A6C[19064559] & 0x1000) == 0 || v9 || (v7 & 0x8000) != 0 )
      {
        sub_1401FEC58(a1, (__int64)&v17);
        goto LABEL_47;
      }
      v21 = nullptr;
      v22 = 0;
      sub_1401FEC58((__int64)v24, (__int64)&v21);
    }
    goto LABEL_20;
  }
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v3 )
    *(_BYTE *)(a1 + 8) = 2;
  else
    *(_QWORD *)a1 = &off_1402848D0;
LABEL_47:
  --dword_140404A6C[19064564];
  return a1;
}

