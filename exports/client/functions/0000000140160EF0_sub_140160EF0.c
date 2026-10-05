/* Address: 0x140160ef0 | Name: sub_140160EF0 | Size: 2878 bytes */
__int64 __fastcall sub_140160EF0(__int64 a1, int *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  int v8; // edi
  int v9; // ecx
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  const char *v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r8
  __int64 i; // rdx
  __int64 j; // rdx
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rax
  int v24; // eax
  char v25; // cl
  unsigned __int8 *v26; // rax
  int v27; // eax
  char v28; // dl
  unsigned __int8 *v29; // rax
  unsigned __int8 *v30; // rcx
  unsigned __int8 v31; // r8
  unsigned __int8 *v32; // rax
  __int64 v33; // rax
  unsigned __int8 *v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int8 *v36; // rax
  unsigned __int8 *v37; // rax
  int v38; // edi
  unsigned __int8 v39; // cl
  unsigned __int8 *v40; // rax
  __int64 v41; // rax
  unsigned __int8 *v42; // rax
  unsigned __int8 v43; // cl
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // rcx
  unsigned __int8 v46; // r8
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rcx
  int v50; // eax
  unsigned __int8 *v51; // rax
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int8 *v57; // rax
  int v58; // edi
  int v59; // r14d
  unsigned __int8 *v60; // rax
  unsigned __int8 *v61; // rax
  int v62; // ebp
  int v63; // edi
  unsigned __int8 *v64; // rax
  unsigned __int8 *v65; // rax
  int v66; // ebp
  int v67; // r15d
  int v68; // r13d
  unsigned __int8 v69; // r8
  unsigned __int8 *v70; // rax
  unsigned __int8 *v71; // rax
  int v72; // ebp
  unsigned __int8 v73; // cl
  unsigned __int8 *v74; // rax
  int v75; // r9d
  int v76; // edx
  int v77; // r8d
  __int64 v78; // rdx
  int v79; // eax
  char *v80; // rax
  char v81; // cl
  char *v82; // rax
  __int64 v83; // rdx
  int v84; // r8d
  int v85; // eax
  int v86; // r15d
  _BYTE *v87; // rdi
  int v88; // ebp
  __int64 v89; // r14
  char *v90; // rax
  char v91; // cl
  char *v92; // rax
  char *v93; // rax
  char v94; // cl
  char *v95; // rax
  char *v96; // rax
  char v97; // cl
  char *v98; // rax
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // r8
  int v102; // eax
  int v103; // [rsp+58h] [rbp+10h]

  v5 = 0;
  v103 = 0;
  if ( *((_QWORD *)a2 + 1) )
  {
    v17 = a2[1] * *a2;
    v18 = (a2[12] >> 2) & 7;
    if ( v18 != 3 || a5 )
    {
      v19 = v17;
      if ( v18 == 3 )
      {
        if ( v17 > 0 )
        {
          for ( i = 0; i < v17; ++i )
          {
            if ( *(_BYTE *)(i + *((_QWORD *)a2 + 3)) )
              *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * i) = *(_DWORD *)(a5 + 4 * i);
          }
        }
        goto LABEL_33;
      }
      if ( v18 != 2 )
      {
LABEL_33:
        MEMORY[0x1401FC920](*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 1));
        goto LABEL_34;
      }
    }
    else
    {
      v19 = v17;
    }
    if ( v19 > 0 )
    {
      for ( j = 0; j < v19; ++j )
      {
        if ( *(_BYTE *)(j + *((_QWORD *)a2 + 3)) )
          *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * j) = *(_DWORD *)(*((_QWORD *)a2 + 2) + 4 * j);
      }
    }
    goto LABEL_33;
  }
  if ( !(unsigned int)sub_140160930(a1, a2, a3, 0) )
    return 0;
  v8 = *a2;
  v9 = a2[1];
  if ( *a2 < 0 )
    goto LABEL_16;
  if ( v8 )
  {
    if ( 0x7FFFFFFF / v8 < 4 )
      goto LABEL_16;
    v10 = 4 * v8;
    if ( (v8 & 0x20000000) != 0 )
      goto LABEL_16;
  }
  else
  {
    v10 = 0;
  }
  if ( v9 < 0 || v9 && v10 > 0x7FFFFFFF / v9 )
  {
LABEL_16:
    v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v16 = "too large";
    goto LABEL_186;
  }
  v11 = v9 * v8;
  v12 = 4 * v11;
  *((_QWORD *)a2 + 1) = j__malloc_base(v12);
  *((_QWORD *)a2 + 2) = j__malloc_base(v12);
  v13 = j__malloc_base(v11);
  v14 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 3) = v13;
  if ( !v14 || !*((_QWORD *)a2 + 2) || !v13 )
  {
    v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v16 = "outofmem";
LABEL_186:
    *(_QWORD *)(v15 + 16) = v16;
    return 0;
  }
  MEMORY[0x1401FCD30](v14, 0, v12);
  MEMORY[0x1401FCD30](*((_QWORD *)a2 + 2), 0, v12);
  MEMORY[0x1401FCD30](*((_QWORD *)a2 + 3), 0, v11);
  v103 = 1;
LABEL_34:
  MEMORY[0x1401FCD30](*((_QWORD *)a2 + 3), 0, a2[1] * *a2);
  while ( 1 )
  {
    v23 = *(_BYTE **)(a1 + 192);
    if ( (unsigned __int64)v23 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_185;
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v24 )
      {
        *(_QWORD *)(a1 + 200) = v24 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v23 = *(_BYTE **)(a1 + 192);
    }
    v25 = *v23;
    v26 = v23 + 1;
    *(_QWORD *)(a1 + 192) = v26;
    if ( v25 != 33 )
      break;
    if ( (unsigned __int64)v26 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_78;
      v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v27 )
      {
        *(_QWORD *)(a1 + 200) = v27 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v26 = *(unsigned __int8 **)(a1 + 192);
    }
    v28 = *v26;
    v29 = v26 + 1;
    *(_QWORD *)(a1 + 192) = v29;
    v30 = v29;
    if ( v28 != -7 )
      goto LABEL_78;
    v22 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v29 >= v22 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, v22);
        v32 = *(unsigned __int8 **)(a1 + 192);
        v22 = *(_QWORD *)(a1 + 200);
        v31 = *v32;
        v30 = v32 + 1;
        *(_QWORD *)(a1 + 192) = v32 + 1;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = *v29;
      v30 = v29 + 1;
      *(_QWORD *)(a1 + 192) = v29 + 1;
    }
    v33 = v31;
    if ( v31 == 4 )
    {
      if ( (unsigned __int64)v30 >= v22 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v22);
          v34 = *(unsigned __int8 **)(a1 + 192);
          v22 = *v34;
          *(_QWORD *)(a1 + 192) = v34 + 1;
        }
        else
        {
          LOBYTE(v22) = 0;
        }
      }
      else
      {
        v22 = *v30;
        *(_QWORD *)(a1 + 192) = v30 + 1;
      }
      a2[12] = (unsigned __int8)v22;
      v35 = *(_QWORD *)(a1 + 200);
      v36 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v36 >= v35 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v38 = 0;
LABEL_66:
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1, v22);
            v40 = *(unsigned __int8 **)(a1 + 192);
            v39 = *v40;
            *(_QWORD *)(a1 + 192) = v40 + 1;
          }
          else
          {
            v39 = 0;
          }
          goto LABEL_69;
        }
        sub_14016D910(a1, v22);
        v36 = *(unsigned __int8 **)(a1 + 192);
        v35 = *(_QWORD *)(a1 + 200);
      }
      v22 = *v36;
      v37 = v36 + 1;
      *(_QWORD *)(a1 + 192) = v37;
      v38 = (unsigned __int8)v22;
      if ( (unsigned __int64)v37 >= v35 )
        goto LABEL_66;
      v39 = *v37;
      *(_QWORD *)(a1 + 192) = v37 + 1;
LABEL_69:
      a2[8730] = 10 * (v38 + (v39 << 8));
      v41 = a2[11];
      if ( (int)v41 >= 0 )
        HIBYTE(a2[v41 + 13]) = -1;
      if ( (a2[12] & 1) != 0 )
      {
        v42 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v42 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1, v22);
            v44 = *(unsigned __int8 **)(a1 + 192);
            v43 = *v44;
            *(_QWORD *)(a1 + 192) = v44 + 1;
          }
          else
          {
            v43 = 0;
          }
        }
        else
        {
          v43 = *v42;
          *(_QWORD *)(a1 + 192) = v42 + 1;
        }
        a2[11] = v43;
        HIBYTE(a2[v43 + 13]) = 0;
      }
      else if ( *(_QWORD *)(a1 + 16) && (v47 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v47 < 1) )
      {
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(1 - v47));
        a2[11] = -1;
      }
      else
      {
        ++*(_QWORD *)(a1 + 192);
        a2[11] = -1;
      }
      while ( 1 )
      {
LABEL_78:
        v22 = *(_QWORD *)(a1 + 200);
        v45 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v45 >= v22 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v50 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v50 )
            {
              v22 = v50 + a1 + 56;
              *(_QWORD *)(a1 + 200) = v22;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
              v22 = *(_QWORD *)(a1 + 200);
            }
            v51 = *(unsigned __int8 **)(a1 + 192);
            v46 = *v51;
            v45 = v51 + 1;
            *(_QWORD *)(a1 + 192) = v51 + 1;
          }
          else
          {
            v46 = 0;
          }
        }
        else
        {
          v46 = *v45++;
          *(_QWORD *)(a1 + 192) = v45;
        }
        v52 = v46;
        if ( !v46 )
          break;
        if ( *(_QWORD *)(a1 + 16) && (v53 = v22 - (_DWORD)v45, (int)v22 - (int)v45 < (int)v52) )
        {
          v54 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = v22;
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v54, (unsigned int)(v52 - v53));
        }
        else
        {
          *(_QWORD *)(a1 + 192) = &v45[v52];
        }
      }
    }
    else if ( v31 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v48 = v22 - (_DWORD)v30, (int)v22 - (int)v30 < (int)v33) )
      {
        v49 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = v22;
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v49, (unsigned int)(v33 - v48));
      }
      else
      {
        *(_QWORD *)(a1 + 192) = &v30[v33];
      }
    }
  }
  if ( v25 != 44 )
  {
    if ( v25 == 59 )
      return a1;
LABEL_185:
    v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v16 = "unknown code";
    goto LABEL_186;
  }
  v56 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v26 >= v56 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v26 = *(unsigned __int8 **)(a1 + 192);
      v56 = *(_QWORD *)(a1 + 200);
      goto LABEL_106;
    }
    v58 = 0;
    v59 = 0;
LABEL_109:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v57 = *(unsigned __int8 **)(a1 + 192);
      v56 = *(_QWORD *)(a1 + 200);
      goto LABEL_111;
    }
LABEL_116:
    v62 = 0;
    v63 = 0;
    goto LABEL_117;
  }
LABEL_106:
  v22 = *v26;
  v57 = v26 + 1;
  v58 = (unsigned __int8)v22;
  *(_QWORD *)(a1 + 192) = v57;
  v59 = (unsigned __int8)v22;
  if ( (unsigned __int64)v57 >= v56 )
    goto LABEL_109;
LABEL_111:
  v22 = *v57;
  v60 = v57 + 1;
  v59 = v58 + ((unsigned __int8)v22 << 8);
  *(_QWORD *)(a1 + 192) = v60;
  if ( (unsigned __int64)v60 >= v56 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_116;
    sub_14016D910(a1, v22);
    v60 = *(unsigned __int8 **)(a1 + 192);
    v56 = *(_QWORD *)(a1 + 200);
  }
  v22 = *v60;
  v61 = v60 + 1;
  v62 = (unsigned __int8)v22;
  *(_QWORD *)(a1 + 192) = v61;
  v63 = (unsigned __int8)v22;
  if ( (unsigned __int64)v61 >= v56 )
  {
LABEL_117:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v61 = *(unsigned __int8 **)(a1 + 192);
      v56 = *(_QWORD *)(a1 + 200);
      goto LABEL_119;
    }
LABEL_124:
    v66 = 0;
    v67 = 0;
LABEL_125:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v22);
      v65 = *(unsigned __int8 **)(a1 + 192);
      v56 = *(_QWORD *)(a1 + 200);
      goto LABEL_127;
    }
    v68 = v67;
    goto LABEL_130;
  }
LABEL_119:
  v22 = *v61;
  v64 = v61 + 1;
  v63 = v62 + ((unsigned __int8)v22 << 8);
  *(_QWORD *)(a1 + 192) = v64;
  if ( (unsigned __int64)v64 < v56 )
    goto LABEL_122;
  if ( !*(_DWORD *)(a1 + 48) )
    goto LABEL_124;
  sub_14016D910(a1, v22);
  v64 = *(unsigned __int8 **)(a1 + 192);
  v56 = *(_QWORD *)(a1 + 200);
LABEL_122:
  v22 = *v64;
  v65 = v64 + 1;
  v66 = (unsigned __int8)v22;
  *(_QWORD *)(a1 + 192) = v65;
  v67 = (unsigned __int8)v22;
  if ( (unsigned __int64)v65 >= v56 )
    goto LABEL_125;
LABEL_127:
  v22 = (unsigned __int64)(v65 + 1);
  v67 = v66 + (*v65 << 8);
  *(_QWORD *)(a1 + 192) = v65 + 1;
  v68 = v67;
  if ( (unsigned __int64)(v65 + 1) < v56 )
  {
    v69 = *(_BYTE *)v22;
    v70 = v65 + 2;
    goto LABEL_132;
  }
LABEL_130:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1, v22);
    v71 = *(unsigned __int8 **)(a1 + 192);
    v56 = *(_QWORD *)(a1 + 200);
    v69 = *v71;
    v70 = v71 + 1;
LABEL_132:
    *(_QWORD *)(a1 + 192) = v70;
    v72 = v69;
    if ( (unsigned __int64)v70 < v56 )
    {
      v73 = *v70;
      *(_QWORD *)(a1 + 192) = v70 + 1;
      goto LABEL_138;
    }
  }
  else
  {
    v72 = 0;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1, v22);
    v74 = *(unsigned __int8 **)(a1 + 192);
    v73 = *v74;
    *(_QWORD *)(a1 + 192) = v74 + 1;
  }
  else
  {
    v73 = 0;
  }
LABEL_138:
  v75 = v72 + (v73 << 8);
  if ( v59 + v68 > *a2 || v75 + v63 > a2[1] )
  {
    v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v16 = "bad Image Descriptor";
    goto LABEL_186;
  }
  v76 = 4 * *a2;
  a2[8729] = v76;
  a2[8723] = 4 * v59;
  a2[8725] = 4 * v59 + 4 * v68;
  v77 = v63 * v76;
  v78 = (unsigned int)(v75 * v76);
  a2[8727] = 4 * v59;
  a2[8724] = v77;
  v79 = v78 + v77;
  if ( !v67 )
    v77 += v78;
  a2[8726] = v79;
  a2[8728] = v77;
  v80 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v80 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v78);
      v82 = *(char **)(a1 + 192);
      v81 = *v82;
      *(_QWORD *)(a1 + 192) = v82 + 1;
    }
    else
    {
      v81 = 0;
    }
  }
  else
  {
    v81 = *v80;
    *(_QWORD *)(a1 + 192) = v80 + 1;
  }
  v83 = (unsigned int)a2[8729];
  a2[8722] = (unsigned __int8)v81;
  v84 = v81 & 0x40;
  v85 = 8 * v83;
  if ( !v84 )
    v85 = v83;
  a2[8721] = v85;
  a2[8720] = v84 != 0 ? 3 : 0;
  if ( v81 >= 0 )
  {
    if ( *((char *)a2 + 32) >= 0 )
    {
      v15 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v16 = "missing color table";
      goto LABEL_186;
    }
    v100 = 13;
  }
  else
  {
    if ( (a2[12] & 1) != 0 )
      v86 = a2[11];
    else
      v86 = -1;
    v87 = (char *)a2 + 1077;
    v88 = 0;
    v89 = 2 << (v81 & 7);
    do
    {
      v90 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v90 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v83);
          v92 = *(char **)(a1 + 192);
          v91 = *v92;
          *(_QWORD *)(a1 + 192) = v92 + 1;
        }
        else
        {
          v91 = 0;
        }
      }
      else
      {
        v91 = *v90;
        *(_QWORD *)(a1 + 192) = v90 + 1;
      }
      v87[1] = v91;
      v93 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v93 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v83);
          v95 = *(char **)(a1 + 192);
          v94 = *v95;
          *(_QWORD *)(a1 + 192) = v95 + 1;
        }
        else
        {
          v94 = 0;
        }
      }
      else
      {
        v94 = *v93;
        *(_QWORD *)(a1 + 192) = v93 + 1;
      }
      *v87 = v94;
      v96 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v96 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v83);
          v98 = *(char **)(a1 + 192);
          v97 = *v98;
          *(_QWORD *)(a1 + 192) = v98 + 1;
        }
        else
        {
          v97 = 0;
        }
      }
      else
      {
        v97 = *v96;
        *(_QWORD *)(a1 + 192) = v96 + 1;
      }
      *(v87 - 1) = v97;
      v99 = -1;
      if ( v86 == v88 )
        v99 = 0;
      ++v88;
      v87[2] = v99;
      v87 += 4;
      --v89;
    }
    while ( v89 );
    v100 = 269;
  }
  *((_QWORD *)a2 + 4359) = &a2[v100];
  v101 = sub_14016B5F0(a1, a2);
  if ( !v101 )
    return 0;
  if ( v103 )
  {
    if ( a2[9] > 0 )
    {
      v102 = a2[1] * *a2;
      if ( v102 > 0 )
      {
        do
        {
          if ( !*(_BYTE *)(v5 + *((_QWORD *)a2 + 3)) )
          {
            HIBYTE(a2[a2[9] + 13]) = -1;
            *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v5) = a2[a2[9] + 13];
          }
          ++v5;
        }
        while ( v5 < v102 );
      }
    }
  }
  return v101;
}

