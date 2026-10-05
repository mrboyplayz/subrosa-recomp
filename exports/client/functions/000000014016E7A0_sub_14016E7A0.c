/* Address: 0x14016e7a0 | Name: sub_14016E7A0 | Size: 2420 bytes */
char *__fastcall sub_14016E7A0(__int64 a1, __int64 a2, int *a3, unsigned int *a4, int a5)
{
  unsigned __int8 *v5; // rax
  unsigned __int64 v7; // rcx
  int v8; // ebp
  unsigned __int8 v9; // r10
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // r15
  unsigned __int8 *v12; // rax
  int v13; // esi
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int8 *v27; // rax
  unsigned __int8 v28; // dl
  unsigned __int8 *v29; // rax
  unsigned int v30; // r12d
  int v31; // edi
  unsigned __int8 v32; // cl
  unsigned __int8 *v33; // rax
  int v34; // r8d
  int v35; // r13d
  unsigned int v36; // eax
  int v37; // r9d
  unsigned int v38; // ecx
  int v39; // edi
  int v40; // edi
  int v41; // edi
  int v42; // edi
  unsigned int v43; // r14d
  __int64 v44; // rax
  const char *v45; // rdx
  unsigned int v46; // ecx
  unsigned int v47; // edi
  int v48; // eax
  int v49; // r13d
  char *v50; // r12
  __int64 v51; // rdi
  int v52; // ebp
  char *v53; // rsi
  char *v54; // rsi
  void *v55; // rcx
  char *v56; // rax
  void *v57; // rsi
  char *v58; // rdi
  __int64 v59; // rsi
  int *v60; // rdx
  signed __int64 v61; // r15
  __int64 v62; // r10
  __int64 v63; // r9
  int v64; // r8d
  int v65; // r12d
  unsigned __int8 *v66; // rax
  unsigned __int8 v67; // cl
  unsigned __int8 *v68; // rax
  unsigned __int8 *v69; // rax
  unsigned __int8 v70; // cl
  int v71; // eax
  unsigned __int8 *v72; // rax
  unsigned __int8 v73; // cl
  unsigned __int16 v74; // ax
  __int64 v75; // rdi
  char *v76; // rax
  char v77; // cl
  char *v78; // rax
  _BYTE *v79; // rcx
  char *v80; // rdi
  int v81; // r11d
  int v82; // ebx
  int v83; // r10d
  int v84; // r8d
  __int64 v85; // r9
  char *v86; // rdx
  char v87; // cl
  char *v88; // r8
  __int64 v89; // r10
  char v90; // cl
  unsigned int v92; // [rsp+30h] [rbp-98h]
  unsigned int v93; // [rsp+30h] [rbp-98h]
  int v94; // [rsp+34h] [rbp-94h]
  int v95; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v96; // [rsp+3Ch] [rbp-8Ch]
  void *Block; // [rsp+40h] [rbp-88h]
  int v98; // [rsp+48h] [rbp-80h]
  int v99; // [rsp+4Ch] [rbp-7Ch]
  int v100; // [rsp+50h] [rbp-78h]
  int v101; // [rsp+58h] [rbp-70h]
  int v102; // [rsp+5Ch] [rbp-6Ch]
  int v103; // [rsp+60h] [rbp-68h]
  void *v104; // [rsp+68h] [rbp-60h]
  __int64 v105; // [rsp+70h] [rbp-58h]
  unsigned int v106; // [rsp+D0h] [rbp+8h]
  unsigned __int8 v107; // [rsp+D0h] [rbp+8h]
  _DWORD *v108; // [rsp+D8h] [rbp+10h]

  v108 = (_DWORD *)a2;
  v5 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = 0;
  if ( (unsigned __int64)v5 < v7 )
  {
LABEL_4:
    v9 = *v5;
    v10 = v5 + 1;
    a2 = v9;
    v106 = v9;
    *(_QWORD *)(a1 + 192) = v10;
    if ( (unsigned __int64)v10 < v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v5 = *(unsigned __int8 **)(a1 + 192);
    v7 = *(_QWORD *)(a1 + 200);
    goto LABEL_4;
  }
  v106 = 0;
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v11 = 0;
    v13 = 0;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v15 = *(unsigned __int8 **)(a1 + 192);
      v14 = *v15;
      *(_QWORD *)(a1 + 192) = v15 + 1;
    }
    else
    {
      v14 = 0;
    }
    goto LABEL_15;
  }
  sub_14016D910(a1);
  v10 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
LABEL_9:
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = v12;
  v13 = v11;
  if ( (unsigned __int64)v12 >= v7 )
    goto LABEL_12;
  v14 = *v12;
  *(_QWORD *)(a1 + 192) = v12 + 1;
LABEL_15:
  v96 = v14;
  v92 = sub_1401605B0(a1, a2);
  v17 = sub_1401605B0(a1, v16);
  v19 = *(unsigned __int8 **)(a1 + 192);
  v101 = v17;
  if ( (unsigned __int64)v19 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v20 = *(unsigned __int8 **)(a1 + 192);
      v18 = *v20;
      *(_QWORD *)(a1 + 192) = v20 + 1;
    }
    else
    {
      LOBYTE(v18) = 0;
    }
  }
  else
  {
    v18 = *v19;
    *(_QWORD *)(a1 + 192) = v19 + 1;
  }
  v21 = (unsigned __int8)v18;
  sub_1401605B0(a1, v18);
  sub_1401605B0(a1, v22);
  v100 = sub_1401605B0(a1, v23);
  v25 = sub_1401605B0(a1, v24);
  v26 = *(_QWORD *)(a1 + 200);
  v99 = v25;
  v27 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v27 >= v26 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v30 = 0;
      v31 = 0;
      goto LABEL_26;
    }
    sub_14016D910(a1);
    v27 = *(unsigned __int8 **)(a1 + 192);
    v26 = *(_QWORD *)(a1 + 200);
  }
  v28 = *v27;
  v29 = v27 + 1;
  v30 = v28;
  *(_QWORD *)(a1 + 192) = v29;
  v31 = v28;
  if ( (unsigned __int64)v29 < v26 )
  {
    v32 = *v29;
    *(_QWORD *)(a1 + 192) = v29 + 1;
    goto LABEL_29;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1);
    v33 = *(unsigned __int8 **)(a1 + 192);
    v32 = *v33;
    *(_QWORD *)(a1 + 192) = v33 + 1;
  }
  else
  {
    v32 = 0;
  }
LABEL_29:
  v34 = v99;
  v35 = 1;
  v36 = v32;
  v104 = nullptr;
  v95 = 0;
  v98 = 0;
  if ( v99 > 0x1000000 || (v37 = v100, v100 > 0x1000000) )
  {
LABEL_149:
    v44 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v45 = "too large";
    goto LABEL_150;
  }
  v94 = 0;
  v38 = v96 - 8;
  if ( v96 < 8 )
    v38 = v96;
  v102 = 1 - ((v36 >> 5) & 1);
  if ( !v13 )
  {
    v39 = v31 - 8;
    if ( v39 )
    {
      v40 = v39 - 7;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 8;
          if ( v42 && v42 != 8 )
            goto LABEL_47;
          v21 = v30;
          goto LABEL_46;
        }
        if ( v38 == 3 )
        {
          v43 = 2;
          goto LABEL_52;
        }
      }
LABEL_50:
      v43 = 3;
      v94 = 1;
      goto LABEL_52;
    }
LABEL_51:
    v43 = 1;
    goto LABEL_52;
  }
  if ( v21 == 8 )
    goto LABEL_51;
  if ( v21 == 15 || v21 == 16 )
    goto LABEL_50;
  if ( v21 != 24 && v21 != 32 )
    goto LABEL_47;
LABEL_46:
  v43 = v21 >> 3;
  if ( !v43 )
  {
LABEL_47:
    v44 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v45 = "bad format";
LABEL_150:
    *(_QWORD *)(v44 + 16) = v45;
    return nullptr;
  }
LABEL_52:
  *v108 = v100;
  *a3 = v34;
  if ( a4 )
    *a4 = v43;
  if ( v37 < 0 || v34 < 0 || v34 && v37 > 0x7FFFFFFF / v34 )
    goto LABEL_149;
  v103 = v37 * v34;
  if ( v37 * v34 < 0 || v37 * v34 > (int)(0x7FFFFFFF / v43) )
    goto LABEL_149;
  if ( v34 && v37 > 0x7FFFFFFF / v34 )
    goto LABEL_148;
  Block = (void *)j__malloc_base((int)(v37 * v34 * v43));
  if ( !Block )
    goto LABEL_148;
  sub_14016E0F0(a1, v106);
  if ( v13 )
  {
    if ( !v101 )
    {
      v55 = Block;
LABEL_76:
      free(v55);
      v44 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v45 = "bad palette";
      goto LABEL_150;
    }
    sub_14016E0F0(a1, v92);
    if ( v101 >= 0 && v101 <= (int)(0x7FFFFFFF / v43) )
    {
      v56 = (char *)j__malloc_base((int)(v101 * v43));
      v104 = v56;
      v57 = v56;
      if ( v56 )
      {
        if ( v94 )
        {
          v58 = v56;
          if ( v43 != 3 )
            sub_14023E640(L"tga_comp == STBI_rgb", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 5777);
          v59 = (unsigned int)v101;
          v93 = v30;
          v107 = v11;
          do
          {
            sub_14016F120(a1, v58);
            v58 += v43;
            --v59;
          }
          while ( v59 );
          v35 = 1;
        }
        else
        {
          v93 = v30;
          v107 = v11;
          if ( !sub_140160860(a1, (__int64)v56, v101 * v43) )
          {
            free(Block);
            v55 = v57;
            goto LABEL_76;
          }
        }
        v46 = v96;
        v47 = v30;
LABEL_87:
        if ( v103 <= 0 )
        {
LABEL_127:
          v49 = v99;
          if ( v102 && v99 > 0 )
          {
            v80 = (char *)Block;
            v81 = v100 * v43;
            v82 = 0;
            v83 = v100 * v43 * (v99 - 1);
            do
            {
              v84 = v81;
              if ( v81 > 0 )
              {
                v85 = v83 - (__int64)v82;
                v86 = &v80[v82];
                do
                {
                  --v84;
                  v87 = *v86;
                  *v86 = v86[v85];
                  (v86++)[v85] = v87;
                }
                while ( v84 > 0 );
              }
              v82 += v81;
              v83 -= v81;
              v8 += 2;
            }
            while ( v8 < v49 );
          }
          if ( v104 )
            free(v104);
          v50 = (char *)Block;
          goto LABEL_137;
        }
        v60 = &v95;
        v61 = (_BYTE *)Block - (_BYTE *)&v95;
        v62 = v43;
        v63 = (unsigned int)v103;
        v105 = (unsigned int)v103;
        v64 = 0;
        v65 = 0;
        while ( 1 )
        {
          if ( v46 < 8 )
            goto LABEL_101;
          if ( !v64 )
            break;
          if ( !v65 || v35 )
            goto LABEL_101;
LABEL_124:
          v60 = nullptr;
          do
          {
            v79 = (char *)&v95 + (_QWORD)v60;
            v60 = (int *)((char *)v60 + 1);
            v79[v61] = *v79;
          }
          while ( (__int64)v60 < v43 );
          v47 = v93;
          --v64;
          v46 = v96;
          v61 += v62;
          --v63;
          v98 = v64;
          v105 = v63;
          if ( !v63 )
            goto LABEL_127;
        }
        v66 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v66 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            sub_14016D910(a1);
            v68 = *(unsigned __int8 **)(a1 + 192);
            v67 = *v68;
            *(_QWORD *)(a1 + 192) = v68 + 1;
          }
          else
          {
            v67 = 0;
          }
        }
        else
        {
          v67 = *v66;
          *(_QWORD *)(a1 + 192) = v66 + 1;
        }
        v65 = v67 >> 7;
        v98 = (v67 & 0x7F) + 1;
LABEL_101:
        if ( v107 )
        {
          if ( v47 == 8 )
          {
            v69 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v69 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v72 = *(unsigned __int8 **)(a1 + 192);
                v73 = *v72;
                *(_QWORD *)(a1 + 192) = v72 + 1;
                v71 = v73;
              }
              else
              {
                v71 = 0;
              }
            }
            else
            {
              v70 = *v69;
              *(_QWORD *)(a1 + 192) = v69 + 1;
              v71 = v70;
            }
          }
          else
          {
            v71 = sub_1401605B0(a1, (__int64)v60);
          }
          if ( v71 >= v101 )
            v71 = 0;
          MEMORY[0x1401FC920](&v95, (char *)v104 + (int)(v43 * v71));
        }
        else if ( v94 )
        {
          if ( v43 != 3 )
            sub_14023E640(L"tga_comp == STBI_rgb", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 5826);
          v74 = sub_1401605B0(a1, (__int64)v60);
          LOBYTE(v95) = (char)-((v74 >> 10) & 0x1F) / 31;
          BYTE1(v95) = (char)-((v74 >> 5) & 0x1F) / 31;
          BYTE2(v95) = 255 * (v74 & 0x1F) / 31;
        }
        else
        {
          v75 = 0;
          do
          {
            v76 = *(char **)(a1 + 192);
            if ( (unsigned __int64)v76 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1);
                v78 = *(char **)(a1 + 192);
                v77 = *v78;
                *(_QWORD *)(a1 + 192) = v78 + 1;
              }
              else
              {
                v77 = 0;
              }
            }
            else
            {
              v77 = *v76;
              *(_QWORD *)(a1 + 192) = v76 + 1;
            }
            *((_BYTE *)&v95 + v75++) = v77;
          }
          while ( v75 < v43 );
        }
        v64 = v98;
        v35 = 0;
        v63 = v105;
        v62 = v43;
        goto LABEL_124;
      }
    }
    free(Block);
LABEL_148:
    v44 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v45 = "outofmem";
    goto LABEL_150;
  }
  v46 = v96;
  v47 = v30;
  v93 = v30;
  v107 = v11;
  if ( v96 >= 8 )
    goto LABEL_87;
  v48 = v94;
  v93 = v30;
  v107 = v11;
  if ( v94 )
    goto LABEL_87;
  v49 = v99;
  v50 = (char *)Block;
  if ( v99 <= 0 )
    goto LABEL_138;
  v51 = (unsigned int)v99;
  v52 = v43 * v100;
  if ( v102 )
  {
    v53 = (char *)Block + (int)(v100 * v43 * (v99 - 1));
    do
    {
      sub_140160860(a1, (__int64)v53, v52);
      v53 -= v52;
      --v51;
    }
    while ( v51 );
  }
  else
  {
    v54 = (char *)Block;
    do
    {
      sub_140160860(a1, (__int64)v54, v52);
      v54 += v52;
      --v51;
    }
    while ( v51 );
  }
LABEL_137:
  v48 = v94;
LABEL_138:
  if ( v43 >= 3 && !v48 )
  {
    v88 = v50;
    if ( v103 > 0 )
    {
      v89 = (unsigned int)v103;
      do
      {
        v90 = *v88;
        *v88 = v88[2];
        v88[2] = v90;
        v88 += v43;
        --v89;
      }
      while ( v89 );
    }
  }
  if ( a5 )
  {
    if ( a5 != v43 )
      return sub_14015D7E0(v50, v43, a5, v100, v49);
  }
  return v50;
}

