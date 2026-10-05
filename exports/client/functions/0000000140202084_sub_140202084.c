/* Address: 0x140202084 | Name: sub_140202084 | Size: 1333 bytes */
__int64 __fastcall sub_140202084(__int64 a1, __int64 *a2)
{
  __int128 *v4; // rcx
  __int64 *v5; // r8
  int v6; // esi
  _BYTE *v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // r12d
  DName *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  _BYTE *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rsi
  DName *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v41; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-31h]
  __int64 v43; // [rsp+48h] [rbp-29h] BYREF
  int v44; // [rsp+50h] [rbp-21h]
  __int128 v45; // [rsp+58h] [rbp-19h] BYREF
  __int64 v46; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-1h]
  __int128 v48; // [rsp+78h] [rbp+7h] BYREF
  __int64 v49; // [rsp+88h] [rbp+17h] BYREF
  int v50; // [rsp+90h] [rbp+1Fh]
  _BYTE v51[16]; // [rsp+98h] [rbp+27h] BYREF

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
    goto LABEL_2;
  if ( (unsigned __int8)(**(_BYTE **)&dword_140404A6C[19064555] - 54) > 3u
    && **(_BYTE **)&dword_140404A6C[19064555] != 95 )
  {
    goto LABEL_63;
  }
  v6 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 54;
  v7 = (_BYTE *)++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v6 != 41 )
  {
    if ( v6 < 0 )
      goto LABEL_63;
    v8 = v7;
    if ( v6 > 3 )
      goto LABEL_63;
    goto LABEL_13;
  }
  if ( *v7 )
  {
    v8 = v7 + 1;
    v6 = (char)*v7 - 61;
    *(_QWORD *)&dword_140404A6C[19064555] = ++v7;
    if ( (unsigned int)(v6 - 4) > 3 )
      v6 = -1;
LABEL_13:
    if ( v6 != -1 )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      v43 = 0;
      v44 = 0;
      v41 = v9;
      v42 = v10;
      v11 = v6 & 2;
      if ( (v6 & 2) == 0 )
        goto LABEL_26;
      if ( *v7 == 64 )
      {
        v16 = v8 + 1;
        *(_QWORD *)&dword_140404A6C[19064555] = v8 + 1;
      }
      else
      {
        DWORD2(v45) = 2;
        *(_QWORD *)&v45 = "::";
        v48 = v45;
        v12 = sub_1401FE248((DName *)&v46, (const struct StringLiteral *)&v48);
        sub_1401FE7C0((__int64)v12, (__int64)&v45, (__int64)&v41);
        v41 = v45;
        v42 = DWORD2(v45);
        if ( **(_BYTE **)&dword_140404A6C[19064555] )
        {
          v13 = sub_14020392C(&v46);
          *(_QWORD *)&v45 = 0;
          DWORD2(v45) = 0;
          v14 = v13;
          sub_1401FFB98((#89 *)&v45, 32);
          sub_1401FE7C0((__int64)&v45, (__int64)&v48, v14);
          v15 = sub_1401FE7C0((__int64)&v48, (__int64)v51, (__int64)&v41);
          v10 = *(_DWORD *)(v15 + 8);
          v41 = *(_QWORD *)v15;
        }
        else
        {
          DWORD2(v45) = 0;
          *(_QWORD *)&v45 = &off_1402848D0;
          sub_1401FE7C0((__int64)&v45, (__int64)&v46, (__int64)&v41);
          v10 = v47;
          v41 = v46;
        }
        v16 = *(_BYTE **)&dword_140404A6C[19064555];
        v42 = v10;
      }
      if ( !*v16 )
      {
        DWORD2(v48) = 0;
        v5 = &v41;
        *(_QWORD *)&v48 = &off_1402848D0;
        v4 = &v48;
        goto LABEL_3;
      }
      if ( *v16 == 64 )
      {
        v46 = 0;
        *(_QWORD *)&dword_140404A6C[19064555] = v16 + 1;
        v47 = 0;
        if ( (dword_140404A6C[19064559] & 0x60) == 0x60 )
        {
          *(_QWORD *)&v48 = 0;
          DWORD2(v48) = 0;
          sub_140200AFC((__int64)&v45, (__int64)&v46, 0, &v48, 1u);
          if ( SBYTE8(v45) <= 1 )
          {
LABEL_26:
            if ( (v6 & 4) == 0 )
              goto LABEL_36;
            if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
            {
              v18 = sub_140200244((__int64)v51);
              *(_QWORD *)&v45 = 0;
              DWORD2(v45) = 0;
              v19 = v18;
              sub_1401FFB98((#89 *)&v45, 32);
              sub_1401FE7C0((__int64)&v45, (__int64)&v48, v19);
              v20 = sub_1401FE7C0((__int64)&v48, (__int64)&v46, (__int64)&v41);
              v10 = *(_DWORD *)(v20 + 8);
              v41 = *(_QWORD *)v20;
            }
            else
            {
              v21 = sub_140200244((__int64)v51);
              if ( (_BYTE)v42 == 3 || *(char *)(v21 + 8) <= 1 )
              {
LABEL_36:
                if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
                {
                  v22 = sub_1402009BC((__int64)v51);
                  v23 = sub_1401FE7C0(v22, (__int64)&v48, (__int64)&v41);
                  v24 = *(_QWORD *)v23;
                  LODWORD(v23) = *(_DWORD *)(v23 + 8);
                  v41 = v24;
                  v42 = v23;
                }
                else
                {
                  v25 = sub_1402009BC((__int64)v51);
                  if ( (_BYTE)v42 != 3 && *(char *)(v25 + 8) > 1 )
                    v42 = *(unsigned __int8 *)(v25 + 8) | v10 & 0xFFFFFF00;
                }
                if ( *a2 )
                {
                  *(_QWORD *)&v45 = 0;
                  DWORD2(v45) = 0;
                  sub_1401FFB98((#89 *)&v45, 40);
                  sub_1401FE7C0((__int64)&v45, (__int64)&v48, (__int64)&v41);
                  v26 = sub_1401FE7EC((__int64)&v48, (__int64)v51, 41);
                  v27 = *(_QWORD *)v26;
                  LODWORD(v26) = *(_DWORD *)(v26 + 8);
                  v41 = v27;
                  v42 = v26;
                }
                v28 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
                v29 = v28;
                if ( v28 )
                {
                  *(_QWORD *)v28 = 0;
                  v28[2] = 0;
                }
                else
                {
                  v29 = nullptr;
                }
                sub_1402038F8(&v49, v29);
                v30 = sub_1401FFDD8((DName *)v51);
                *(_QWORD *)&v45 = 0;
                DWORD2(v45) = 0;
                v31 = (__int64)v30;
                sub_1401FFB98((#89 *)&v45, 40);
                sub_1401FE7C0((__int64)&v45, (__int64)&v48, v31);
                v32 = sub_1401FE7EC((__int64)&v48, (__int64)&v46, 41);
                sub_1401FE908((__int64)&v41, v32);
                v33 = dword_140404A6C[19064559];
                if ( (dword_140404A6C[19064559] & 0x60) != 0x60 && v11 )
                {
                  sub_1401FE908((__int64)&v41, (__int64)&v43);
                  v33 = dword_140404A6C[19064559];
                }
                if ( (v33 & 0x80000) != 0 )
                {
                  v35 = sub_14020372C(v51);
                  if ( (_BYTE)v42 != 3 && *(char *)(v35 + 8) > 1 )
                    v42 = *(unsigned __int8 *)(v35 + 8) | v42 & 0xFFFFFF00;
                }
                else
                {
                  v34 = sub_14020372C(v51);
                  sub_1401FE908((__int64)&v41, v34);
                }
                v36 = sub_140202784(v51);
                sub_1401FE908((__int64)&v41, v36);
                if ( (~(dword_140404A6C[19064559] >> 8) & 1) != 0 )
                {
                  v37 = MEMORY[0x140204E68](v51);
                  sub_1401FE908((__int64)&v41, v37);
                }
                else
                {
                  v39 = MEMORY[0x140204E68](v51);
                  if ( (_BYTE)v42 != 3 && *(char *)(v39 + 8) > 1 )
                  {
                    v38 = *(unsigned __int8 *)(v39 + 8) | v42 & 0xFFFFFF00;
                    goto LABEL_57;
                  }
                }
                v38 = v42;
LABEL_57:
                if ( v29 )
                {
                  *(_QWORD *)v29 = v41;
                  v29[2] = v38;
                  *(_QWORD *)a1 = v49;
                  *(_DWORD *)(a1 + 8) = v50;
                  return a1;
                }
                *(_DWORD *)(a1 + 8) = 0;
                *(_BYTE *)(a1 + 8) = 3;
LABEL_64:
                *(_QWORD *)a1 = 0;
                return a1;
              }
              v10 = *(unsigned __int8 *)(v21 + 8) | v10 & 0xFFFFFF00;
            }
            v42 = v10;
            goto LABEL_36;
          }
          v17 = BYTE8(v45);
        }
        else
        {
          *(_QWORD *)&v45 = 0;
          DWORD2(v45) = 0;
          sub_140200AFC((__int64)&v48, (__int64)&v45, 0, &v46, 1u);
          v43 = v48;
          v17 = DWORD2(v48);
        }
        v44 = v17;
        goto LABEL_26;
      }
    }
LABEL_63:
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    goto LABEL_64;
  }
LABEL_2:
  DWORD2(v45) = 0;
  *(_QWORD *)&v45 = &off_1402848D0;
  v4 = &v45;
  v5 = a2;
LABEL_3:
  sub_1401FE7C0((__int64)v4, a1, (__int64)v5);
  return a1;
}

