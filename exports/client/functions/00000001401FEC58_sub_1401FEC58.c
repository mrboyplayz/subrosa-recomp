/* Address: 0x1401fec58 | Name: sub_1401FEC58 | Size: 3749 bytes */
__int64 __fastcall sub_1401FEC58(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // r14d
  int v9; // r12d
  int v10; // r13d
  int v11; // r13d
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _DWORD *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  DName *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // rdx
  __int128 *v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  DName *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // eax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rax
  BOOL v61; // eax
  int v62; // edx
  const char *v63; // rax
  int v64; // edx
  __int64 v65; // rcx
  BOOL v66; // ecx
  BOOL v67; // eax
  int v68; // ebx
  DName *v69; // rax
  DName *v70; // rax
  int v71; // edx
  const char *v72; // rax
  BOOL v73; // eax
  BOOL v74; // eax
  DName *v75; // rax
  DName *v76; // rax
  DName *v77; // rax
  __int128 v79; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v81; // [rsp+48h] [rbp-B8h]
  __int128 v82; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v83[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+70h] [rbp-90h] BYREF
  int v85; // [rsp+78h] [rbp-88h]
  __int64 v86; // [rsp+80h] [rbp-80h] BYREF
  int v87; // [rsp+88h] [rbp-78h]
  unsigned int v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+94h] [rbp-6Ch]
  unsigned int v90; // [rsp+98h] [rbp-68h]
  __int64 v91; // [rsp+A0h] [rbp-60h] BYREF
  int v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h] BYREF
  int v94; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h] BYREF
  int v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+D0h] [rbp-30h] BYREF
  int v98; // [rsp+D8h] [rbp-28h]
  _BYTE v99[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v100[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v101[16]; // [rsp+100h] [rbp+0h] BYREF
  char v102[64]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v103; // [rsp+168h] [rbp+68h]
  BOOL v104; // [rsp+170h] [rbp+70h]
  BOOL v105; // [rsp+178h] [rbp+78h]

  v2 = 0;
  v80 = 0;
  v90 = dword_140404A6C[19064555] - dword_140404A6C[19064557];
  v81 = 0;
  v5 = sub_140204E8C();
  v105 = *(_QWORD *)a2 && (*(_DWORD *)(a2 + 8) & 0x200) != 0;
  if ( v5 != 0xFFFF )
  {
    if ( v5 == 65534 )
    {
      DWORD2(v82) = 0;
      *(_QWORD *)&v82 = &off_1402848D0;
      sub_1401FE7C0((__int64)&v82, a1, a2);
      return a1;
    }
    if ( v5 == 65533 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2;
      v6 = *(_DWORD *)(a2 + 8);
LABEL_157:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v7 = 1024;
    v8 = v5 & 0x8000;
    if ( (v5 & 0x8000) != 0 )
    {
      v9 = v5 & 0x1800;
      v10 = 4096;
      v104 = v9 == 2048;
      if ( v9 == 2048 )
        v10 = 1024;
      v11 = v5 & v10;
      v89 = v11;
      if ( !v11 || (v12 = v5 & 0x1B00, ((v12 - 4096) & 0xFFFFFCFF) != 0) || v12 == 4864 )
      {
        if ( (v5 & 0x4000) != 0 )
        {
          if ( ((dword_140404A6C[19064559] | (dword_140404A6C[19064559] >> 2)) & 2) == 0 )
          {
            v13 = sub_140200244(&v79, 1024);
            v84 = 0;
            v85 = 0;
            v14 = v13;
            sub_1401FFB98((#89 *)&v84, 32);
            sub_1401FE7C0((__int64)&v84, (__int64)&v82, v14);
            v2 = DWORD2(v82);
            v80 = v82;
LABEL_22:
            v81 = v2;
            goto LABEL_23;
          }
          v15 = sub_140200244(&v79, 1024);
          if ( *(char *)(v15 + 8) > 1 )
          {
            v2 = *(unsigned __int8 *)(v15 + 8);
            goto LABEL_22;
          }
        }
LABEL_23:
        if ( v11 && v9 == 6144 )
        {
          v16 = sub_1401FE7EC(a2, (__int64)&v82, 123);
          sub_1402017C8(&v79, 0);
          v17 = sub_1401FE7C0(v16, (__int64)&v84, (__int64)&v79);
          sub_1401FE908((__int64)&v80, v17);
          sub_140205354(&v79);
          if ( (dword_140404A6C[19064559] & 0x1000) == 0 )
          {
            v84 = 0;
            v85 = 0;
            *(_QWORD *)&v82 = "}' ";
            DWORD2(v82) = 3;
            sub_1401FFB98((#89 *)&v84, 44);
            sub_1401FE7C0((__int64)&v84, (__int64)&v93, (__int64)&v79);
            v18 = sub_1401FE794((__int64)&v93, (__int64)&v95, (__int64)&v82);
            sub_1401FE908((__int64)&v80, v18);
          }
          DWORD2(v82) = 2;
          *(_QWORD *)&v82 = "}'";
          v79 = v82;
          sub_1401FE888((__int64)&v80, (__int64)&v79);
          sub_1402009BC(&v79, v19);
          if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0
            && (~(dword_140404A6C[19064559] >> 4) & 1) != 0
            && (dword_140404A6C[19064559] & 0x1000) == 0 )
          {
            v84 = 0;
            v85 = 0;
            sub_1401FFB98((#89 *)&v84, 32);
            sub_1401FE7C0((__int64)&v84, (__int64)&v82, (__int64)&v79);
            v20 = sub_1401FE7EC((__int64)&v82, (__int64)&v93, 32);
            v21 = sub_1401FE7C0(v20, (__int64)&v95, (__int64)&v80);
            v2 = (v5 & 0x6000) == 0;
LABEL_120:
            v65 = *(_QWORD *)v21;
            v56 = *(_DWORD *)(v21 + 8);
            v80 = v65;
            goto LABEL_121;
          }
LABEL_31:
          v2 = (v5 & 0x6000) == 0;
          goto LABEL_122;
        }
        v95 = 0;
        v96 = 0;
        v93 = 0;
        v94 = 0;
        v91 = 0;
        v92 = 0;
        v84 = 0;
        v85 = 0;
        v97 = 0;
        v98 = 0;
        if ( !v11 )
        {
LABEL_39:
          if ( v9 != 2048 || (v5 & 0x700) == 0x200 )
            goto LABEL_46;
          *(_QWORD *)&v82 = 0;
          DWORD2(v82) = 0;
          if ( (dword_140404A6C[19064559] & 0x60) == 0x60 )
          {
            *(_QWORD *)&v79 = 0;
            DWORD2(v79) = 0;
            sub_140200AFC(&v86, &v82, 0, &v79, 1);
            if ( (char)v87 <= 1 )
              goto LABEL_46;
            v24 = (unsigned __int8)v87;
          }
          else
          {
            v86 = 0;
            v87 = 0;
            sub_140200AFC(&v79, &v86, 0, &v82, 1);
            v97 = v79;
            v24 = DWORD2(v79);
          }
          v98 = v24;
LABEL_46:
          if ( (~(dword_140404A6C[19064559] >> 1) & 1) == 0 || (dword_140404A6C[19064559] & 0x10) != 0 )
          {
            v28 = sub_1402009BC(&v79, v7);
            v27 = v80;
            if ( (_BYTE)v81 != 3 && *(char *)(v28 + 8) > 1 )
              v81 = *(unsigned __int8 *)(v28 + 8) | v2 & 0xFFFFFF00;
          }
          else
          {
            v25 = sub_1402009BC(&v79, v7);
            v26 = sub_1401FE7C0(v25, (__int64)&v82, (__int64)&v80);
            v27 = *(_QWORD *)v26;
            LODWORD(v26) = *(_DWORD *)(v26 + 8);
            v80 = v27;
            v81 = v26;
          }
          if ( *(_QWORD *)a2 )
          {
            if ( !v27 || (dword_140404A6C[19064559] & 0x1000) != 0 )
            {
              v80 = *(_QWORD *)a2;
              v81 = *(_DWORD *)(a2 + 8);
            }
            else
            {
              v86 = 0;
              v87 = 0;
              sub_1401FFB98((#89 *)&v86, 32);
              sub_1401FE7C0((__int64)&v86, (__int64)&v79, a2);
              sub_1401FE908((__int64)&v80, (__int64)&v79);
            }
          }
          v29 = nullptr;
          v86 = 0;
          v88 = 0;
          if ( !v105 )
          {
            v40 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
            v29 = v40;
            if ( v40 )
            {
              *(_QWORD *)v40 = 0;
              v40[2] = 0;
            }
            else
            {
              v29 = nullptr;
            }
            v41 = sub_1402038F8(v100, v29);
            v42 = *(_QWORD *)v41;
            LODWORD(v41) = *(_DWORD *)(v41 + 8);
            v86 = v42;
            v88 = v41;
LABEL_60:
            if ( !v89 )
            {
LABEL_73:
              if ( dword_140404A6C[19064564] == 1 )
              {
                v46 = dword_140404A6C[19064563];
                if ( !dword_140404A6C[19064563] )
                  v46 = v90;
                dword_140404A6C[19064563] = v46;
              }
              v47 = sub_1401FFDD8(v83);
              *(_QWORD *)&v82 = 0;
              DWORD2(v82) = 0;
              v48 = v47;
              sub_1401FFB98((#89 *)&v82, 40);
              sub_1401FE7C0((__int64)&v82, (__int64)&v79, v48);
              v49 = sub_1401FE7EC((__int64)&v79, (__int64)v99, 41);
              sub_1401FE908((__int64)&v80, v49);
              if ( v9 == 2048 && (v5 & 0x700) != 0x200 )
                sub_1401FE908((__int64)&v80, (__int64)&v97);
              if ( (~(dword_140404A6C[19064559] >> 19) & 1) != 0 )
              {
                v50 = sub_14020372C(v83);
                sub_1401FE908((__int64)&v80, v50);
              }
              else
              {
                v51 = sub_14020372C(v83);
                if ( (_BYTE)v81 != 3 && *(char *)(v51 + 8) > 1 )
                  v81 = *(unsigned __int8 *)(v51 + 8) | v81 & 0xFFFFFF00;
              }
              v52 = sub_140202784(v83);
              sub_1401FE908((__int64)&v80, v52);
              if ( (~(dword_140404A6C[19064559] >> 8) & 1) != 0 )
              {
                v53 = MEMORY[0x140204E68](v83);
                sub_1401FE908((__int64)&v80, v53);
              }
              else
              {
                v54 = MEMORY[0x140204E68](v83);
                if ( (_BYTE)v81 != 3 && *(char *)(v54 + 8) > 1 )
                  v81 = *(unsigned __int8 *)(v54 + 8) | v81 & 0xFFFFFF00;
              }
              v55 = MEMORY[0x140201914](v83);
              if ( (_BYTE)v81 != 3 && *(char *)(v55 + 8) > 1 )
                v81 = *(unsigned __int8 *)(v55 + 8) | v81 & 0xFFFFFF00;
              if ( (~(dword_140404A6C[19064559] >> 2) & 1) == 0 || !v29 )
                goto LABEL_31;
              v2 = (v5 & 0x6000) == 0;
              *(_QWORD *)v29 = v80;
              v29[2] = v81;
              v80 = v86;
              v56 = v88;
LABEL_121:
              v81 = v56;
LABEL_122:
              v66 = v104;
              if ( (v5 & 0x8000) != 0 )
                v2 = v104;
              v103 = v2;
              if ( !v2 )
                goto LABEL_151;
              if ( (~(dword_140404A6C[19064559] >> 9) & 1) != 0 )
              {
                v67 = 1;
                v68 = v5 & 0x700;
                if ( (v5 & 0x8000) != 0 )
                  v67 = v68 == 512;
                if ( v67 )
                {
                  DWORD2(v79) = 7;
                  *(_QWORD *)&v79 = "static ";
                  v69 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
                  sub_1401FE7C0((__int64)v69, (__int64)&v79, (__int64)&v80);
                  v80 = v79;
                  v81 = DWORD2(v79);
                }
                if ( (v5 & 0x8000) != 0 && v68 == 256
                  || (v5 & 0x400) != 0 && ((v68 - 1024) & 0xFFFFFCFF) == 0 && v68 != 1792 )
                {
                  DWORD2(v79) = 8;
                  *(_QWORD *)&v79 = "virtual ";
                  v70 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
                  sub_1401FE7C0((__int64)v70, (__int64)&v79, (__int64)&v80);
                  v80 = v79;
                  v81 = DWORD2(v79);
                }
                v66 = v104;
                v2 = v103;
              }
              if ( (~(dword_140404A6C[19064559] >> 7) & 1) == 0 )
                goto LABEL_151;
              v71 = v5 & 0xC0;
              if ( (v5 & 0x8000) != 0 )
                v66 = v71 == 64;
              if ( v66 )
              {
                v72 = "private: ";
                DWORD2(v79) = 9;
              }
              else
              {
                v73 = v9 == 4096;
                if ( (v5 & 0x8000) != 0 )
                  v73 = v71 == 128;
                if ( v73 )
                {
                  v72 = "protected: ";
                  DWORD2(v79) = 11;
                }
                else
                {
                  v74 = v9 == 0;
                  if ( (v5 & 0x8000) != 0 )
                    v74 = v71 == 0;
                  if ( !v74 )
                    goto LABEL_151;
                  v72 = "public: ";
                  DWORD2(v79) = 8;
                }
              }
              *(_QWORD *)&v79 = v72;
              v75 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
              sub_1401FE7C0((__int64)v75, (__int64)&v79, (__int64)&v80);
              v80 = v79;
              v81 = DWORD2(v79);
LABEL_151:
              if ( ((v2 != 0 ? 1024 : 4096) & v5) != 0 && (dword_140404A6C[19064559] & 0x1000) == 0 )
              {
                DWORD2(v79) = 8;
                *(_QWORD *)&v79 = "[thunk]:";
                v76 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
                sub_1401FE7C0((__int64)v76, (__int64)&v79, (__int64)&v80);
                v80 = v79;
                v81 = DWORD2(v79);
              }
              if ( (v5 & 0x10000) != 0 )
              {
                DWORD2(v79) = 11;
                *(_QWORD *)&v79 = "extern \"C\" ";
                v77 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
                sub_1401FE7C0((__int64)v77, (__int64)&v79, (__int64)&v80);
                v80 = v79;
                v81 = DWORD2(v79);
              }
              goto LABEL_156;
            }
            if ( v9 == 2048 )
            {
              v32 = v5 & 0x700;
              if ( v32 == 1536 )
              {
                DWORD2(v79) = 12;
                *(_QWORD *)&v79 = "`vtordispex{";
                v33 = sub_1401FE248((DName *)v100, (const struct StringLiteral *)&v79);
                sub_1401FE7C0((__int64)v33, (__int64)&v79, (__int64)&v95);
                v34 = sub_1401FE7EC((__int64)&v79, (__int64)&v82, 44);
                v35 = sub_1401FE7C0(v34, (__int64)v101, (__int64)&v93);
                v36 = sub_1401FE7EC(v35, (__int64)v102, 44);
                v37 = sub_1401FE7C0(v36, (__int64)v99, (__int64)&v91);
                v38 = v83;
                v39 = (__int128 *)v37;
LABEL_70:
                v44 = sub_1401FE7EC((__int64)v39, (__int64)v38, 44);
                sub_1401FE908((__int64)&v80, v44);
LABEL_72:
                DWORD2(v79) = 3;
                *(_QWORD *)&v79 = "}' ";
                v45 = sub_1401FE794((__int64)&v84, (__int64)v83, (__int64)&v79);
                sub_1401FE908((__int64)&v80, v45);
                goto LABEL_73;
              }
              if ( v32 == 1280 )
              {
                DWORD2(v79) = 10;
                *(_QWORD *)&v79 = "`vtordisp{";
                v43 = sub_1401FE248((DName *)v83, (const struct StringLiteral *)&v79);
                sub_1401FE7C0((__int64)v43, (__int64)&v79, (__int64)&v91);
                v38 = v99;
                v39 = &v79;
                goto LABEL_70;
              }
            }
            DWORD2(v79) = 10;
            *(_QWORD *)&v79 = "`adjustor{";
            sub_1401FE888((__int64)&v80, (__int64)&v79);
            goto LABEL_72;
          }
          v30 = sub_1402038F8(v100, 0);
          *(_QWORD *)&v82 = 0;
          DWORD2(v82) = 0;
          v31 = v30;
          sub_1401FFB98((#89 *)&v82, 32);
          sub_1401FE7C0((__int64)&v82, (__int64)&v79, v31);
          sub_1401FE908((__int64)&v80, (__int64)&v79);
          if ( (dword_140404A6C[19064559] & 0x1000) == 0 )
            goto LABEL_60;
LABEL_156:
          *(_QWORD *)a1 = v80;
          v6 = v81;
          goto LABEL_157;
        }
        if ( v9 == 2048 )
        {
          v22 = v5 & 0x700;
          if ( v22 == 1536 )
          {
            LOBYTE(v7) = 1;
            sub_1402017C8(&v82, v7);
            v95 = v82;
            LOBYTE(v23) = 1;
            v96 = DWORD2(v82);
            sub_1402017C8(&v82, v23);
            v93 = v82;
            v94 = DWORD2(v82);
LABEL_37:
            LOBYTE(v7) = 1;
            sub_1402017C8(&v82, v7);
            v91 = v82;
            v92 = DWORD2(v82);
            goto LABEL_38;
          }
          if ( v22 == 1280 )
            goto LABEL_37;
        }
LABEL_38:
        LOBYTE(v7) = 1;
        sub_1402017C8(&v82, v7);
        v84 = v82;
        v85 = DWORD2(v82);
        goto LABEL_39;
      }
    }
    sub_1401FE908((__int64)&v80, a2);
    v58 = 31744;
    if ( (v5 & 0x8000) == 0 )
    {
      if ( (((v5 & 0x7C00) - 26624) & 0xFFFFF7FF) == 0 )
      {
        sub_140205608(a1, &v80, v57, 31744);
        return a1;
      }
      if ( (v5 & 0x7C00) == 0x6000 )
      {
        DWORD2(v79) = 2;
        *(_QWORD *)&v79 = "}'";
        v82 = v79;
        v59 = sub_1401FE7EC((__int64)&v80, (__int64)v83, 123);
        sub_1402017C8(&v79, 0);
        v60 = sub_1401FE7C0(v59, (__int64)v99, (__int64)&v79);
        sub_1401FE794(v60, a1, (__int64)&v82);
        return a1;
      }
    }
    if ( (v5 & 0xFC00) == 0x7C00 )
    {
      sub_14020558C(a1, &v80, v57, 31744);
      return a1;
    }
    v9 = v5 & 0x1800;
    v104 = v9 == 2048;
    LOBYTE(v2) = (v5 & 0x6000) == 0;
    v61 = v2;
    if ( (v5 & 0x8000) != 0 )
      v61 = v9 == 2048;
    v62 = v5 & (v61 ? 1024 : 4096);
    if ( v62 )
    {
      v57 = v5 & 0x1B00;
      if ( v8 != 0 && (_DWORD)v57 == 4096 )
      {
        DWORD2(v79) = 32;
        *(_QWORD *)&v79 = "`local static destructor helper'";
        sub_1401FE888((__int64)&v80, (__int64)&v79);
LABEL_116:
        v64 = v5 & 0x1B00;
        if ( v8 != 0 && v64 == 4352 || v8 != 0 && v64 == 4608 )
          goto LABEL_118;
LABEL_119:
        v21 = sub_140201EA4(v83, &v80, v57, v58);
        goto LABEL_120;
      }
      if ( v8 != 0 && (_DWORD)v57 == 4352 )
      {
        v63 = "`template static data member constructor helper'";
        DWORD2(v79) = 48;
LABEL_110:
        *(_QWORD *)&v79 = v63;
        sub_1401FE888((__int64)&v80, (__int64)&v79);
LABEL_118:
        *(_QWORD *)&v82 = 0;
        DWORD2(v82) = 0;
        sub_1401FFB98((#89 *)&v82, 32);
        sub_1401FE7C0((__int64)&v82, (__int64)&v79, (__int64)&v80);
        v80 = v79;
        v56 = DWORD2(v79);
        goto LABEL_121;
      }
      if ( v8 != 0 && (_DWORD)v57 == 4608 )
      {
        v63 = "`template static data member destructor helper'";
        DWORD2(v79) = 47;
        goto LABEL_110;
      }
    }
    if ( (v5 & 0x8000) == 0 && (v5 & 0x7C00) == 0x7800 )
      goto LABEL_156;
    if ( !v62 )
      goto LABEL_119;
    goto LABEL_116;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

