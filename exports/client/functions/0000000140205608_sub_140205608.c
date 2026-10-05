/* Address: 0x140205608 | Name: sub_140205608 | Size: 519 bytes */
__int64 __fastcall sub_140205608(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int128 *v7; // rdx
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-9h] BYREF
  int v15; // [rsp+38h] [rbp-1h]
  __int128 v16; // [rsp+40h] [rbp+7h] BYREF
  __int128 v17; // [rsp+50h] [rbp+17h] BYREF
  __int128 v18; // [rsp+60h] [rbp+27h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp+37h] BYREF
  _BYTE v20[16]; // [rsp+80h] [rbp+47h] BYREF

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v3;
  if ( (char)v3 <= 1 )
  {
    DWORD2(v16) = 0;
    if ( **(_BYTE **)&dword_140404A6C[19064555] )
    {
      v14 = 0;
      v15 = 0;
      *(_QWORD *)&v16 = 0;
      sub_140200AFC((__int64)&v17, (__int64)&v16, 0, &v14, 0);
      v4 = sub_1401FE7EC((__int64)&v17, (__int64)&v18, 32);
      v5 = sub_1401FE7C0(v4, (__int64)v19, a1);
      *(_QWORD *)a1 = *(_QWORD *)v5;
      LODWORD(v5) = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(a1 + 8) = v5;
      if ( (char)v5 <= 1 )
      {
        v6 = *(_BYTE **)&dword_140404A6C[19064555];
        if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          goto LABEL_19;
        DWORD2(v16) = 5;
        *(_QWORD *)&v16 = "{for ";
        v7 = &v17;
        v17 = v16;
LABEL_6:
        sub_1401FE888(a1, (__int64)v7);
        v9 = *(_BYTE *)(a1 + 8);
        v6 = *(_BYTE **)&dword_140404A6C[19064555];
        while ( v9 <= 1 )
        {
          if ( !*v6 )
            goto LABEL_16;
          if ( *v6 == 64 )
          {
            if ( !*v6 )
LABEL_16:
              sub_1401FEABC(a1, 1u);
            sub_1401FE9BC(a1, 125);
            v6 = *(_BYTE **)&dword_140404A6C[19064555];
            break;
          }
          v10 = sub_14020392C((__int64)v19, v8);
          v14 = 0;
          v15 = 0;
          v11 = v10;
          sub_1401FFB98((#89 *)&v14, 96);
          sub_1401FE7C0((__int64)&v14, (__int64)&v17, v11);
          v12 = sub_1401FE7EC((__int64)&v17, (__int64)v20, 39);
          sub_1401FE908(a1, v12);
          v6 = *(_BYTE **)&dword_140404A6C[19064555];
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
            v6 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
          v9 = *(_BYTE *)(a1 + 8);
          if ( v9 > 1 )
            break;
          if ( *v6 != 64 )
          {
            DWORD2(v16) = 2;
            *(_QWORD *)&v16 = "s ";
            v7 = &v18;
            v18 = v16;
            goto LABEL_6;
          }
        }
        if ( *v6 == 64 )
LABEL_19:
          *(_QWORD *)&dword_140404A6C[19064555] = v6 + 1;
      }
    }
    else
    {
      *(_QWORD *)&v16 = &off_1402848D0;
      sub_1401FE7C0((__int64)&v16, (__int64)&v14, a1);
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 8) = v15;
    }
  }
  return a1;
}

