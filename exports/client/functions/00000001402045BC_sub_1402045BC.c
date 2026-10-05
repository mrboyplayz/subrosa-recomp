/* Address: 0x1402045bc | Name: sub_1402045BC | Size: 657 bytes */
__int64 __fastcall sub_1402045BC(__int64 a1, char a2, __int64 a3)
{
  __int64 v5; // r13
  _BYTE *v6; // rax
  char v7; // r15
  bool v8; // zf
  _DWORD *v9; // rax
  __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+30h] [rbp-D0h]
  _DWORD v20[6]; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+B0h] [rbp-50h] BYREF
  int v23; // [rsp+110h] [rbp+10h] BYREF
  char v24; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v25; // [rsp+1B8h] [rbp+B8h]

  if ( **(_BYTE **)&dword_140404A6C[19064555] != 63 || *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) != 36 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  v5 = *(_QWORD *)&dword_140404A6C[19064549];
  v6 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 2LL);
  v25 = *(_QWORD *)&dword_140404A6C[19064551];
  v7 = 0;
  v19 = *(_QWORD *)&dword_140404A6C[19064553];
  v21 = -1;
  *(_QWORD *)&dword_140404A6C[19064549] = &v21;
  *(_QWORD *)&dword_140404A6C[19064551] = &v22;
  *(_QWORD *)&dword_140404A6C[19064553] = &v23;
  v22 = -1;
  v23 = -1;
  *(_QWORD *)&dword_140404A6C[19064555] = v6;
  v8 = *v6 == 63;
  v24 = 0;
  if ( v8 )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = v6 + 1;
    v9 = sub_14020285C(v20, 1, &v24);
    v7 = v24;
  }
  else
  {
    LOBYTE(a3) = 1;
    v9 = (_DWORD *)sub_140205810(v20, 4294967041LL, a3);
  }
  v10 = *(_QWORD *)v9;
  v18 = v9[2];
  v11 = dword_140404A6C[19064560];
  if ( !v10 )
    v11 = 1;
  v17 = v10;
  LOBYTE(dword_140404A6C[19064560]) = v11;
  if ( !v7 )
  {
    if ( (char)v18 <= 1 )
    {
      if ( v10 )
      {
        v12 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v12 )
        {
          *(_QWORD *)v12 = off_1402846F0;
          *(_BYTE *)(v12 + 8) = 60;
        }
        sub_1401FDE58(&v17, v12);
      }
      else
      {
        v17 = 0;
        v18 = 0;
        sub_1401FFB98((#89 *)&v17, 60);
      }
    }
    v13 = sub_140204368((__int64)v20);
    sub_1401FE908((__int64)&v17, v13);
    v10 = v17;
    if ( v17 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17) == 62 )
    {
      if ( (char)v18 > 1 )
      {
LABEL_28:
        if ( a2 && **(_BYTE **)&dword_140404A6C[19064555] )
          ++*(_QWORD *)&dword_140404A6C[19064555];
        goto LABEL_31;
      }
      v14 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
      if ( v14 )
      {
        *(_QWORD *)v14 = off_1402846F0;
        *(_BYTE *)(v14 + 8) = 32;
      }
      sub_1401FDE58(&v17, v14);
      v10 = v17;
    }
    if ( (char)v18 <= 1 )
    {
      if ( v10 )
      {
        v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
        if ( v15 )
        {
          *(_QWORD *)v15 = off_1402846F0;
          *(_BYTE *)(v15 + 8) = 62;
        }
        sub_1401FDE58(&v17, v15);
      }
      else
      {
        v17 = 0;
        v18 = 0;
        sub_1401FFB98((#89 *)&v17, 62);
      }
      v10 = v17;
    }
    goto LABEL_28;
  }
LABEL_31:
  *(_QWORD *)&dword_140404A6C[19064551] = v25;
  *(_QWORD *)&dword_140404A6C[19064553] = v19;
  *(_DWORD *)(a1 + 8) = v18;
  *(_QWORD *)&dword_140404A6C[19064549] = v5;
  *(_QWORD *)a1 = v10;
  return a1;
}

