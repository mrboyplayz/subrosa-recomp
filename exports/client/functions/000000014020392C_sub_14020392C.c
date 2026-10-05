/* Address: 0x14020392c | Name: sub_14020392C | Size: 1203 bytes */
__int64 __fastcall sub_14020392C(__int64 a1, __int64 a2)
{
  char v2; // si
  DName *v4; // rax
  _BYTE *v5; // rax
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  DName *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+28h] [rbp-E0h] BYREF
  int v25; // [rsp+30h] [rbp-D8h]
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  int v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+90h] [rbp-78h]
  __int128 v36; // [rsp+98h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B8h] [rbp-50h] BYREF
  int v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+C8h] [rbp-40h] BYREF
  int v41; // [rsp+D0h] [rbp-38h]
  __int128 v42; // [rsp+D8h] [rbp-30h]
  __int128 v43; // [rsp+E8h] [rbp-20h]
  _BYTE v44[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v45[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v46[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v47[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v48[16]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v49[16]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v50[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v51[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v52[16]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v53[16]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v54[16]; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v55[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v56[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v57[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v58[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v59; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v60[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v61[16]; // [rsp+208h] [rbp+100h] BYREF
  char v62; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v63[16]; // [rsp+228h] [rbp+120h] BYREF
  char v64; // [rsp+238h] [rbp+130h] BYREF

  *(_QWORD *)a1 = 0;
  v2 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  while ( (**(_BYTE **)&dword_140404A6C[19064555] & 0xBF) != 0 )
  {
    if ( LOBYTE(dword_140404A6C[19064560]) && !BYTE1(dword_140404A6C[19064560]) )
      return a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)&v37 = "::";
      DWORD2(v37) = 2;
      v27 = v37;
      v4 = sub_1401FE248((DName *)v48, (const struct StringLiteral *)&v27);
      sub_1401FE7C0((__int64)v4, (__int64)&v38, a1);
      *(_QWORD *)a1 = v38;
      *(_DWORD *)(a1 + 8) = v39;
      if ( v2 )
      {
        v28 = 0;
        LODWORD(v29) = 0;
        sub_1401FFB98((#89 *)&v28, 91);
        sub_1401FE7C0((__int64)&v28, (__int64)&v40, a1);
        v2 = 0;
        *(_QWORD *)a1 = v40;
        *(_DWORD *)(a1 + 8) = v41;
      }
    }
    v5 = *(_BYTE **)&dword_140404A6C[19064555];
    if ( **(_BYTE **)&dword_140404A6C[19064555] != 63 )
    {
      LOBYTE(a2) = 1;
      v6 = sub_140205810(v47, a2, 0);
      v7 = v46;
      goto LABEL_37;
    }
    a2 = ++*(_QWORD *)&dword_140404A6C[19064555];
    switch ( v5[1] )
    {
      case '$':
        LOBYTE(a2) = 1;
        *(_QWORD *)&dword_140404A6C[19064555] = v5;
        v6 = sub_140205810(v61, a2, 0);
        v7 = &v62;
LABEL_37:
        v15 = sub_1401FE7C0(v6, (__int64)v7, a1);
        goto LABEL_38;
      case '%':
        goto LABEL_33;
      case '?':
        if ( v5[2] == 95 && v5[3] == 63 )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = v5 + 2;
          v16 = sub_14020285C(v55, 0, nullptr);
          v17 = sub_1401FE7C0((__int64)v16, (__int64)v56, a1);
          *(_QWORD *)a1 = *(_QWORD *)v17;
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(v17 + 8);
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
LABEL_31:
            ++*(_QWORD *)&dword_140404A6C[19064555];
          goto LABEL_39;
        }
        v18 = sub_1402014E4((__int64)v57, a2);
        v34 = 0;
        v35 = 0;
        v19 = v18;
        sub_1401FFB98((#89 *)&v34, 96);
        sub_1401FE7C0((__int64)&v34, (__int64)v45, v19);
        v6 = sub_1401FE7EC((__int64)v45, (__int64)v58, 39);
        v7 = &v59;
        goto LABEL_37;
      case 'A':
LABEL_33:
        sub_1401FE198((DName *)&v36, (char **)&dword_140404A6C[19064555], 64);
        DWORD2(v43) = 21;
        *(_QWORD *)&v43 = "`anonymous namespace'";
        v27 = v43;
        v20 = sub_1401FE248((DName *)v60, (const struct StringLiteral *)&v27);
        sub_1401FE7C0((__int64)v20, (__int64)&v26, a1);
        *(_QWORD *)a1 = v26;
        *(_DWORD *)(a1 + 8) = DWORD2(v26);
        if ( **(_DWORD **)&dword_140404A6C[19064551] != 9 )
          sub_1401FEB28(*(int **)&dword_140404A6C[19064551], (__int64)&v36);
        goto LABEL_39;
    }
    if ( v5[1] != 73 )
    {
      if ( v5[1] == 81 )
      {
        v8 = 0;
        v25 = 0;
        v24 = 0;
        *(_QWORD *)&dword_140404A6C[19064555] = a2 + 1;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          sub_140205810(&v30, a2, 0);
          v9 = v31;
          if ( (_BYTE)v31 )
          {
            v25 = 2;
            v8 = 0;
          }
          else
          {
            if ( v8 )
            {
              *(_QWORD *)&v42 = "::";
              DWORD2(v42) = 2;
              v27 = v42;
              v10 = sub_1401FE794((__int64)&v30, (__int64)v63, (__int64)&v27);
              v11 = sub_1401FE7C0(v10, (__int64)v50, (__int64)&v24);
              v8 = *(_QWORD *)v11;
              v9 = *(_DWORD *)(v11 + 8);
            }
            else
            {
              v8 = v30;
            }
            v25 = v9;
          }
          v24 = v8;
          if ( (_BYTE)v25 )
            break;
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          {
            v32 = 0;
            v33 = 0;
            sub_1401FFB98((#89 *)&v32, 91);
            sub_1401FE7C0((__int64)&v32, (__int64)v44, (__int64)&v24);
            v12 = sub_1401FE7EC((__int64)v44, (__int64)v51, 93);
            *(_QWORD *)a1 = *(_QWORD *)v12;
            *(_DWORD *)(a1 + 8) = *(_DWORD *)(v12 + 8);
            goto LABEL_31;
          }
        }
        *(_DWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 8) = 2;
        *(_QWORD *)a1 = 0;
        goto LABEL_39;
      }
      v6 = sub_14020267C((__int64)v49);
      v7 = &v64;
      goto LABEL_37;
    }
    LOBYTE(a2) = 1;
    *(_QWORD *)&dword_140404A6C[19064555] = v5 + 2;
    v13 = sub_140205810(v52, a2, 0);
    v14 = sub_1401FE7EC(v13, (__int64)v53, 93);
    v15 = sub_1401FE7C0(v14, (__int64)v54, a1);
    v2 = 1;
LABEL_38:
    *(_QWORD *)a1 = *(_QWORD *)v15;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v15 + 8);
LABEL_39:
    if ( *(_BYTE *)(a1 + 8) )
      break;
  }
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] != 64 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)&v26 = "::";
    DWORD2(v26) = 2;
    v36 = v26;
    DWORD2(v26) = 0;
    *(_QWORD *)&v26 = &off_1402848D0;
    v21 = sub_1401FE794((__int64)&v26, (__int64)v46, (__int64)&v36);
    v22 = sub_1401FE7C0(v21, (__int64)v47, a1);
    *(_QWORD *)a1 = *(_QWORD *)v22;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v22 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

