/* Address: 0x140200afc | Name: sub_140200AFC | Size: 2199 bytes */
__int64 __fastcall sub_140200AFC(__int64 a1, __int64 a2, int a3, _QWORD *a4, unsigned int a5)
{
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // r12
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // edx
  __int64 v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  _OWORD *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  DName *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // cl
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  DName *v41; // rax
  DName *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int128 *v46; // rdx
  __int64 v47; // r8
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // r8
  __int128 *v51; // rcx
  _BYTE v53[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v54; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v55; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  int v60; // [rsp+78h] [rbp-90h]
  _BYTE v61[16]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v62; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+98h] [rbp-70h]
  _BYTE v64[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v66[16]; // [rsp+C0h] [rbp-48h] BYREF
  char v67; // [rsp+D0h] [rbp-38h] BYREF
  char v68; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v70[16]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v71[16]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v72; // [rsp+120h] [rbp+18h] BYREF
  __int128 v73; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v74[24]; // [rsp+140h] [rbp+38h] BYREF
  int v75; // [rsp+198h] [rbp+90h] BYREF

  v75 = a3;
  v62 = 0;
  v63 = 0;
  v53[0] = 0;
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( !a5 )
    {
      if ( *(_QWORD *)a2 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 && *a4 )
        {
          DWORD2(v54) = 0;
          *(_QWORD *)&v54 = &off_1402848D0;
          sub_1401FE7C0((__int64)&v54, (__int64)&v62, (__int64)a4);
          v49 = sub_1401FE7EC((__int64)&v62, (__int64)v61, 32);
          v50 = a2;
          v51 = (__int128 *)v49;
LABEL_97:
          sub_1401FE7C0((__int64)v51, a1, v50);
          return a1;
        }
        v50 = a2;
LABEL_99:
        DWORD2(v54) = 0;
        *(_QWORD *)&v54 = &off_1402848D0;
        v51 = &v54;
        goto LABEL_97;
      }
      if ( *a4 )
      {
        v50 = (__int64)a4;
        goto LABEL_99;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
    return a1;
  }
  v8 = a5;
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
  {
    sub_140201C9C(&v57, &v75, v53, a5);
    if ( v57 )
    {
      *(_QWORD *)a1 = v57;
      v9 = v58;
      goto LABEL_5;
    }
  }
  v10 = 0;
  v59 = 0;
  v60 = 0;
  v57 = 0;
  v11 = 22;
  v12 = (char)**(_BYTE **)&dword_140404A6C[19064555];
  LODWORD(v58) = 0;
  LOWORD(v56) = 0;
  v13 = 0;
  if ( (char)v12 >= 65 )
    v11 = 65;
  v14 = v12 - v11;
  while ( 1 )
  {
    switch ( v14 )
    {
      case 4u:
        if ( (~((dword_140404A6C[19064559] | HIWORD(dword_140404A6C[19064559])) >> 1) & 1) == 0 )
          break;
        v15 = 11;
        if ( !v10 )
        {
          v19 = v61;
          goto LABEL_31;
        }
        v55 = *sub_1401FEC0C(&v73, 11);
        v16 = sub_1401FE7EC((__int64)&v59, (__int64)v74, 32);
        v17 = v64;
        goto LABEL_17;
      case 5u:
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          if ( v13 )
          {
            v55 = *sub_1401FEC0C(&v69, 13);
            v20 = sub_1401FE7EC((__int64)&v57, (__int64)v70, 32);
            v21 = sub_1401FE794(v20, (__int64)v71, (__int64)&v55);
            v22 = *(_QWORD *)v21;
            LODWORD(v21) = *(_DWORD *)(v21 + 8);
            v57 = v22;
            LODWORD(v58) = v21;
          }
          else
          {
            v23 = sub_1401FEC0C(&v72, 13);
            v57 = 0;
            LODWORD(v58) = 0;
            sub_1401FDF84((__int64)&v57, *(char **)v23, *((_DWORD *)v23 + 2));
          }
        }
        break;
      case 6u:
        if ( !v8 )
          goto LABEL_57;
        LOBYTE(v56) = 1;
        break;
      case 7u:
        if ( !v8 )
          goto LABEL_57;
        BYTE1(v56) = 1;
        break;
      case 8u:
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          v15 = 12;
          if ( !v10 )
          {
            v19 = &v68;
LABEL_31:
            v24 = sub_1401FEC0C(v19, v15);
            v59 = 0;
            v60 = 0;
            sub_1401FDF84((__int64)&v59, *(char **)v24, *((_DWORD *)v24 + 2));
            v10 = v59;
            break;
          }
          v55 = *sub_1401FEC0C(&v65, 12);
          v16 = sub_1401FE7EC((__int64)&v59, (__int64)v66, 32);
          v17 = &v67;
LABEL_17:
          v18 = sub_1401FE794(v16, (__int64)v17, (__int64)&v55);
          v10 = *(_QWORD *)v18;
          LODWORD(v18) = *(_DWORD *)(v18 + 8);
          v59 = v10;
          v60 = v18;
        }
        break;
      default:
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
          ++*(_QWORD *)&dword_140404A6C[19064555];
        if ( v14 > 0x1F )
          goto LABEL_57;
        v54 = *((_OWORD *)&off_140283B20 + v75);
        sub_1401FE248((DName *)&v55, (const struct StringLiteral *)&v54);
        v26 = sub_1401FE7C0((__int64)&v62, (__int64)v61, (__int64)&v55);
        v27 = *(_DWORD *)(v26 + 8);
        *(_QWORD *)&v55 = *(_QWORD *)v26;
        DWORD2(v55) = v27;
        if ( v10 )
        {
          v28 = sub_1401FE7EC((__int64)&v55, (__int64)v61, 32);
          v29 = sub_1401FE7C0(v28, (__int64)v64, (__int64)&v59);
          v27 = *(_DWORD *)(v29 + 8);
          *(_QWORD *)&v55 = *(_QWORD *)v29;
          DWORD2(v55) = v27;
        }
        if ( v57 )
        {
          v30 = sub_1401FE7EC((__int64)&v57, (__int64)v61, 32);
          v31 = sub_1401FE7C0(v30, (__int64)v64, (__int64)&v55);
          v27 = *(_DWORD *)(v31 + 8);
          *(_QWORD *)&v55 = *(_QWORD *)v31;
          DWORD2(v55) = v27;
        }
        if ( (v14 & 0x10) != 0 )
        {
          if ( v8 )
          {
LABEL_57:
            *(_DWORD *)(a1 + 8) = 0;
            *(_BYTE *)(a1 + 8) = 2;
            *(_QWORD *)a1 = 0;
            return a1;
          }
          if ( SDWORD2(v54) > 0 )
          {
            DWORD2(v54) = 2;
            *(_QWORD *)&v54 = "::";
            v32 = sub_1401FE248((DName *)v61, (const struct StringLiteral *)&v54);
            sub_1401FE7C0((__int64)v32, (__int64)&v54, (__int64)&v55);
            *(_QWORD *)&v55 = v54;
            DWORD2(v55) = DWORD2(v54);
            if ( **(_BYTE **)&dword_140404A6C[19064555] )
            {
              v33 = sub_14020392C(v61);
              v34 = sub_1401FE7C0(v33, (__int64)v64, (__int64)&v55);
              v27 = *(_DWORD *)(v34 + 8);
              *(_QWORD *)&v55 = *(_QWORD *)v34;
            }
            else
            {
              DWORD2(v54) = 0;
              *(_QWORD *)&v54 = &off_1402848D0;
              sub_1401FE7C0((__int64)&v54, (__int64)&v62, (__int64)&v55);
              v27 = v63;
              *(_QWORD *)&v55 = v62;
            }
LABEL_54:
            DWORD2(v55) = v27;
            goto LABEL_55;
          }
          if ( !**(_BYTE **)&dword_140404A6C[19064555] )
            goto LABEL_58;
          v35 = sub_14020392C(v61);
          if ( BYTE8(v55) != 3 && *(char *)(v35 + 8) > 1 )
          {
            v27 = *(unsigned __int8 *)(v35 + 8) | v27 & 0xFFFFFF00;
            goto LABEL_54;
          }
LABEL_55:
          v36 = **(_BYTE **)&dword_140404A6C[19064555];
          if ( **(_BYTE **)&dword_140404A6C[19064555] )
          {
            ++*(_QWORD *)&dword_140404A6C[19064555];
            if ( v36 != 64 )
              goto LABEL_57;
          }
          else
          {
LABEL_58:
            sub_1401FEABC((__int64)&v55, 1u);
            v27 = DWORD2(v55);
          }
        }
        v37 = v14 & 0xC;
        if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
        {
          if ( v37 == 12 )
          {
            if ( v8 )
              goto LABEL_57;
            v38 = sub_140200244((__int64)v61);
            v39 = sub_1401FE7C0(v38, (__int64)v64, (__int64)&v55);
            v27 = *(_DWORD *)(v39 + 8);
            *(_QWORD *)&v55 = *(_QWORD *)v39;
LABEL_67:
            DWORD2(v55) = v27;
          }
        }
        else if ( v37 == 12 )
        {
          v40 = sub_140200244((__int64)v61);
          if ( BYTE8(v55) != 3 && *(char *)(v40 + 8) > 1 )
          {
            v27 = *(unsigned __int8 *)(v40 + 8) | v27 & 0xFFFFFF00;
            goto LABEL_67;
          }
        }
        if ( (v14 & 2) != 0 )
        {
          DWORD2(v54) = 9;
          *(_QWORD *)&v54 = "volatile ";
          v41 = sub_1401FE248((DName *)v61, (const struct StringLiteral *)&v54);
          sub_1401FE7C0((__int64)v41, (__int64)&v54, (__int64)&v55);
          v27 = DWORD2(v54);
          *(_QWORD *)&v55 = v54;
          DWORD2(v55) = DWORD2(v54);
        }
        if ( (v14 & 1) != 0 )
        {
          DWORD2(v54) = 6;
          *(_QWORD *)&v54 = "const ";
          v42 = sub_1401FE248((DName *)v61, (const struct StringLiteral *)&v54);
          sub_1401FE7C0((__int64)v42, (__int64)&v54, (__int64)&v55);
          v27 = DWORD2(v54);
          *(_QWORD *)&v55 = v54;
          DWORD2(v55) = DWORD2(v54);
        }
        if ( (_BYTE)v56 )
        {
          DWORD2(v54) = 2;
          *(_QWORD *)&v54 = "& ";
          v43 = sub_1401FE794((__int64)&v55, (__int64)v61, (__int64)&v54);
          v27 = *(_DWORD *)(v43 + 8);
          *(_QWORD *)&v55 = *(_QWORD *)v43;
          DWORD2(v55) = v27;
        }
        if ( BYTE1(v56) )
        {
          DWORD2(v54) = 3;
          *(_QWORD *)&v54 = "&& ";
          v44 = sub_1401FE794((__int64)&v55, (__int64)v61, (__int64)&v54);
          v27 = *(_DWORD *)(v44 + 8);
          *(_QWORD *)&v55 = *(_QWORD *)v44;
          DWORD2(v55) = v27;
        }
        if ( !v8 )
        {
          if ( *(_QWORD *)a2 )
          {
            v27 = *(_DWORD *)(a2 + 8);
            if ( (v27 & 0x100) == 0 && *a4 )
            {
              v57 = 0;
              LODWORD(v58) = 0;
              sub_1401FFB98((#89 *)&v57, 32);
              sub_1401FE7C0((__int64)&v57, (__int64)&v54, (__int64)a4);
              v45 = sub_1401FE7EC((__int64)&v54, (__int64)v61, 32);
              v46 = (__int128 *)sub_1401FE7C0(v45, (__int64)v64, a2);
              goto LABEL_87;
            }
            if ( (v27 & 0x800) != 0 )
            {
              *(_QWORD *)&v55 = *(_QWORD *)a2;
              goto LABEL_88;
            }
            v57 = 0;
            LODWORD(v58) = 0;
            sub_1401FFB98((#89 *)&v57, 32);
            v47 = a2;
          }
          else
          {
            if ( !*a4 )
              goto LABEL_88;
            v57 = 0;
            LODWORD(v58) = 0;
            sub_1401FFB98((#89 *)&v57, 32);
            v47 = (__int64)a4;
          }
          sub_1401FE7C0((__int64)&v57, (__int64)&v54, v47);
          v46 = &v54;
LABEL_87:
          sub_1401FE908((__int64)&v55, (__int64)v46);
          v27 = DWORD2(v55);
        }
LABEL_88:
        v48 = v27 | 0x100;
        if ( v53[0] )
          v48 |= 0x2000u;
        *(_QWORD *)a1 = v55;
        *(_DWORD *)(a1 + 8) = v48;
        return a1;
    }
    ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 36 )
    {
      sub_140201C9C(&v54, &v75, v53, v8);
      if ( (_QWORD)v54 )
        break;
    }
    v25 = 22;
    if ( (char)**(_BYTE **)&dword_140404A6C[19064555] >= 65 )
      v25 = 65;
    v14 = (char)**(_BYTE **)&dword_140404A6C[19064555] - v25;
    v13 = v57;
  }
  *(_QWORD *)a1 = v54;
  v9 = DWORD2(v54);
LABEL_5:
  *(_DWORD *)(a1 + 8) = v9;
  return a1;
}

