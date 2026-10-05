/* Address: 0x140201c9c | Name: sub_140201C9C | Size: 519 bytes */
__int64 __fastcall sub_140201C9C(__int64 a1, _DWORD *a2, _BYTE *a3, int a4)
{
  char *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _UNKNOWN ***v11; // rcx
  int v12; // edx
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _UNKNOWN ***v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+28h] [rbp-28h]
  _BYTE v19[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-10h] BYREF

  v17 = nullptr;
  v18 = 0;
  v5 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  *(_QWORD *)&dword_140404A6C[19064555] = v5;
  switch ( *v5 )
  {
    case 'A':
      if ( !a4 )
      {
        if ( (unsigned int)(*a2 - 2) <= 1 )
        {
          *a2 = 5;
          goto LABEL_30;
        }
        if ( *a2 == 1 )
        {
          *a2 = 4;
LABEL_30:
          v5 = *(char **)&dword_140404A6C[19064555];
        }
      }
      v15 = (__int64)(v5 + 1);
      goto LABEL_32;
    case 'B':
      if ( a4 )
        goto LABEL_22;
      *a3 = 1;
      sub_1401FFB98((#89 *)&v17, 62);
      goto LABEL_24;
    case 'C':
      *a2 = 5;
LABEL_24:
      v15 = *(_QWORD *)&dword_140404A6C[19064555] + 1LL;
LABEL_32:
      *(_QWORD *)a1 = 0;
      *(_QWORD *)&dword_140404A6C[19064555] = v15;
      goto LABEL_33;
  }
  if ( !*v5 || !v5[1] )
  {
    *(_QWORD *)a1 = &off_1402848D0;
LABEL_33:
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( a4 )
  {
LABEL_22:
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
    return a1;
  }
  v6 = 16 * *v5 + v5[1] - 816;
  *(_QWORD *)&dword_140404A6C[19064555] = v5 + 2;
  if ( v6 > 1 )
  {
    sub_1401FFB98((#89 *)&v17, 44);
    v7 = sub_1401FE40C((DName *)v19, v6);
    v8 = sub_1401FE7C0((__int64)&v17, (__int64)v20, v7);
    v9 = *(_QWORD *)v8;
    LODWORD(v8) = *(_DWORD *)(v8 + 8);
    v17 = (_UNKNOWN ***)v9;
    v18 = v8;
  }
  v10 = sub_1401FE7EC((__int64)&v17, (__int64)v20, 62);
  v11 = *(_UNKNOWN ****)v10;
  v12 = *(_DWORD *)(v10 + 8);
  v17 = *(_UNKNOWN ****)v10;
  v18 = v12;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
  {
    v13 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  }
  else
  {
    v14 = sub_1401FE7EC((__int64)&v17, (__int64)v20, 94);
    v11 = *(_UNKNOWN ****)v14;
    v12 = *(_DWORD *)(v14 + 8);
    v13 = *(_BYTE **)&dword_140404A6C[19064555];
    v17 = v11;
    v18 = v12;
  }
  if ( *v13 )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = v13 + 1;
  }
  else if ( (char)v18 <= 1 )
  {
    if ( v11 )
    {
      sub_1401FDDF4((__int64 *)&v17, (__int64)&off_1402848D0);
      v12 = v18;
      v11 = v17;
    }
    else
    {
      v12 = 1;
      v11 = &off_1402848D0;
    }
  }
  *(_QWORD *)a1 = v11;
  *(_DWORD *)(a1 + 8) = v12 | 0x4000;
  return a1;
}

