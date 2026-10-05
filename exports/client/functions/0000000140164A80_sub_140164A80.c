/* Address: 0x140164a80 | Name: sub_140164A80 | Size: 1914 bytes */
__int64 __fastcall sub_140164A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r10
  int v10; // eax
  int v11; // r15d
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r10d
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r10d
  int v26; // r9d
  unsigned int v27; // esi
  unsigned int v28; // edx
  unsigned int *v29; // rax
  int v30; // esi
  __int64 i; // r8
  int v32; // r10d
  __int64 v33; // rbp
  char v34; // bp
  int v35; // r11d
  __int64 v36; // rsi
  int v37; // ebp
  int v38; // edi
  __int64 v39; // rax
  __int64 v40; // rsi
  int v41; // r8d
  int v42; // eax
  int v43; // r9d
  int v44; // r8d
  int v45; // r9d
  int v46; // r8d
  int v47; // edx
  int v48; // eax
  unsigned __int16 v49; // r14
  unsigned __int8 *v50; // rbp
  __int16 *v51; // rsi
  __int64 v52; // rdx
  int v53; // ecx
  __int16 v54; // ax
  __int16 v55; // ax
  __int64 v56; // r12
  unsigned int v57; // r10d
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // r9d
  __int64 v61; // rax
  int v62; // ecx
  int v63; // r10d
  int v64; // r9d
  unsigned int v65; // ebp
  unsigned int *v66; // rax
  int v67; // esi
  __int64 j; // r8
  int v69; // r9d
  __int64 v70; // rbp
  char v71; // r15
  __int64 v72; // rbp
  int v73; // r15d
  int v74; // r10d
  int v75; // ecx
  int v76; // eax
  bool v77; // cc
  __int64 v78; // r10
  __int16 *v79; // rsi
  int v80; // ecx
  __int16 v81; // ax
  __int16 v82; // ax
  __int64 v83; // [rsp+58h] [rbp+10h]

  v83 = a2;
  v4 = *(int *)(a1 + 18484);
  v7 = a2;
  if ( !(_DWORD)v4 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't merge dc and ac";
    return 0;
  }
  v10 = *(_DWORD *)(a1 + 18500);
  v11 = *(_DWORD *)(a1 + 18496);
  if ( !*(_DWORD *)(a1 + 18492) )
  {
    if ( v10 )
    {
      *(_DWORD *)(a1 + 18500) = v10 - 1;
      return 1;
    }
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 18468);
      if ( v12 < 16 )
      {
        sub_140161D20((_QWORD *)a1, a2);
        v12 = *(_DWORD *)(a1 + 18468);
        v7 = v83;
      }
      v13 = *(_DWORD *)(a1 + 18464);
      v14 = (unsigned __int64)v13 >> 23;
      v15 = *(__int16 *)(a4 + 2 * v14);
      if ( *(_WORD *)(a4 + 2 * v14) )
      {
        v16 = v15 & 0xF;
        v17 = ((v15 >> 4) & 0xF) + v4;
        a2 = (unsigned int)(v15 >> 8);
        v18 = v17;
        LODWORD(v4) = v17 + 1;
        *(_DWORD *)(a1 + 18464) = v13 << v16;
        *(_DWORD *)(a1 + 18468) = v12 - v16;
        LOWORD(a2) = (_WORD)a2 << v11;
        *(_WORD *)(v7 + 2LL * byte_14026FC80[v18]) = a2;
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 18464);
        if ( v12 < 16 )
        {
          sub_140161D20((_QWORD *)a1, v13);
          v13 = *(_DWORD *)(a1 + 18464);
          v19 = v13;
        }
        v20 = (unsigned __int64)v19 >> 23;
        v21 = *(unsigned __int8 *)(v20 + a3);
        if ( (_BYTE)v21 == 0xFF )
        {
          v28 = HIWORD(v19);
          v29 = (unsigned int *)(a3 + 1580);
          v30 = 10;
          for ( i = 10; v28 >= *v29; ++i )
          {
            ++v30;
            ++v29;
          }
          v32 = *(_DWORD *)(a1 + 18468);
          if ( v30 == 17 )
          {
            v48 = v32 - 16;
            goto LABEL_94;
          }
          if ( v30 > v32 )
            goto LABEL_95;
          v33 = (int)(*(_DWORD *)(a3 + 4 * i + 1612) + (dword_14026FBF0[i] & (v13 >> (32 - v30))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + v33 + 1280)] & (v13 >> (32 - *(_BYTE *)(a3 + v33 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v33 + 512) )
          {
            sub_14023E640(
              L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              2074);
            v32 = *(_DWORD *)(a1 + 18468);
            v13 = *(_DWORD *)(a1 + 18464);
          }
          v25 = v32 - v30;
          v26 = v13 << v30;
          *(_DWORD *)(a1 + 18464) = v26;
          a2 = (unsigned int)v26;
          *(_DWORD *)(a1 + 18468) = v25;
          v27 = *(unsigned __int8 *)(a3 + v33 + 1024);
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 18468);
          v23 = *(unsigned __int8 *)(v20 + a3);
          v24 = *(unsigned __int8 *)(v21 + a3 + 1280);
          if ( v24 > v22 )
            goto LABEL_95;
          a2 = v19 << v24;
          v25 = v22 - v24;
          *(_DWORD *)(a1 + 18464) = a2;
          *(_DWORD *)(a1 + 18468) = v25;
          v26 = a2;
          v27 = *(unsigned __int8 *)(v23 + a3 + 1024);
        }
        v34 = v27;
        v35 = v25;
        v36 = v27 >> 4;
        v37 = v34 & 0xF;
        if ( v37 )
        {
          v38 = v36 + v4;
          v39 = v38;
          LODWORD(v4) = v38 + 1;
          v40 = byte_14026FC80[v39];
          if ( v25 < v37 )
          {
            sub_140161D20((_QWORD *)a1, a2);
            v26 = *(_DWORD *)(a1 + 18464);
            v35 = *(_DWORD *)(a1 + 18468);
          }
          v7 = v83;
          v41 = __ROL4__(v26, v37);
          v42 = dword_14026FBF0[v37];
          v43 = dword_14026FC40[v37] & ~(v26 >> 31);
          a2 = v41 & (unsigned int)v42;
          *(_DWORD *)(a1 + 18468) = v35 - v37;
          *(_DWORD *)(a1 + 18464) = v41 & ~v42;
          *(_WORD *)(v83 + 2 * v40) = (((unsigned __int16)v41 & (unsigned __int16)v42) + (_WORD)v43) << v11;
        }
        else
        {
          if ( (unsigned int)v36 < 0xF )
          {
            v44 = 1 << v36;
            *(_DWORD *)(a1 + 18500) = 1 << v36;
            if ( (_DWORD)v36 )
            {
              v45 = 1 << v36;
              if ( v25 < (int)v36 )
              {
                sub_140161D20((_QWORD *)a1, a2);
                v25 = *(_DWORD *)(a1 + 18468);
                v45 = *(_DWORD *)(a1 + 18500);
                LODWORD(a2) = *(_DWORD *)(a1 + 18464);
              }
              v46 = dword_14026FBF0[v36];
              *(_DWORD *)(a1 + 18468) = v25 - v36;
              v47 = __ROL4__(a2, v36);
              *(_DWORD *)(a1 + 18464) = v47 & ~v46;
              v44 = v45 + (v47 & v46);
            }
            *(_DWORD *)(a1 + 18500) = v44 - 1;
            return 1;
          }
          v7 = v83;
          LODWORD(v4) = v4 + 16;
        }
      }
      if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
        return 1;
    }
  }
  v49 = 1 << v11;
  if ( !v10 )
  {
    v56 = *(int *)(a1 + 18484);
    while ( 1 )
    {
      if ( *(int *)(a1 + 18468) < 16 )
        sub_140161D20((_QWORD *)a1, a2);
      v57 = *(_DWORD *)(a1 + 18464);
      v58 = (unsigned __int64)v57 >> 23;
      v59 = *(unsigned __int8 *)(v58 + a3);
      if ( (_BYTE)v59 == 0xFF )
      {
        v66 = (unsigned int *)(a3 + 1580);
        v67 = 10;
        for ( j = 10; HIWORD(v57) >= *v66; ++j )
        {
          ++v67;
          ++v66;
        }
        v69 = *(_DWORD *)(a1 + 18468);
        if ( v67 == 17 )
        {
          v48 = v69 - 16;
LABEL_94:
          *(_DWORD *)(a1 + 18468) = v48;
LABEL_95:
          *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad huffman code";
          return 0;
        }
        if ( v67 > v69 )
          goto LABEL_95;
        v70 = (int)(*(_DWORD *)(a3 + 4 * j + 1612) + (dword_14026FBF0[j] & (v57 >> (32 - v67))));
        a2 = dword_14026FBF0[*(unsigned __int8 *)(a3 + v70 + 1280)] & (v57 >> (32 - *(_BYTE *)(a3 + v70 + 1280)));
        if ( (_DWORD)a2 != *(unsigned __int16 *)(a3 + 2 * v70 + 512) )
        {
          sub_14023E640(
            L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
            L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
            2074);
          v69 = *(_DWORD *)(a1 + 18468);
          v57 = *(_DWORD *)(a1 + 18464);
        }
        v64 = v69 - v67;
        v63 = v57 << v67;
        *(_DWORD *)(a1 + 18464) = v63;
        *(_DWORD *)(a1 + 18468) = v64;
        v65 = *(unsigned __int8 *)(a3 + v70 + 1024);
      }
      else
      {
        v60 = *(_DWORD *)(a1 + 18468);
        v61 = *(unsigned __int8 *)(v58 + a3);
        v62 = *(unsigned __int8 *)(v59 + a3 + 1280);
        if ( v62 > v60 )
          goto LABEL_95;
        v63 = v57 << v62;
        v64 = v60 - v62;
        *(_DWORD *)(a1 + 18464) = v63;
        *(_DWORD *)(a1 + 18468) = v64;
        v65 = *(unsigned __int8 *)(v61 + a3 + 1024);
      }
      v71 = v65;
      v72 = v65 >> 4;
      v73 = v71 & 0xF;
      if ( v73 )
      {
        if ( v73 != 1 )
          goto LABEL_95;
        if ( v64 < 1 )
        {
          sub_140161D20((_QWORD *)a1, a2);
          v64 = *(_DWORD *)(a1 + 18468);
          v63 = *(_DWORD *)(a1 + 18464);
        }
        LOWORD(v73) = v49;
        *(_DWORD *)(a1 + 18464) = 2 * v63;
        *(_DWORD *)(a1 + 18468) = v64 - 1;
        if ( v63 >= 0 )
          v73 = -(__int16)v49;
      }
      else if ( (unsigned int)v72 < 0xF )
      {
        a2 = (unsigned int)((1 << v72) - 1);
        *(_DWORD *)(a1 + 18500) = a2;
        if ( (_DWORD)v72 )
        {
          if ( v64 < (int)v72 )
          {
            sub_140161D20((_QWORD *)a1, a2);
            v64 = *(_DWORD *)(a1 + 18468);
            a2 = *(unsigned int *)(a1 + 18500);
            v63 = *(_DWORD *)(a1 + 18464);
          }
          v74 = __ROL4__(v63, v72);
          v75 = dword_14026FBF0[v72];
          *(_DWORD *)(a1 + 18468) = v64 - v72;
          *(_DWORD *)(a1 + 18464) = v74 & ~v75;
          *(_DWORD *)(a1 + 18500) = a2 + (v74 & v75);
        }
        LODWORD(v72) = 64;
      }
      v76 = *(_DWORD *)(a1 + 18488);
      v77 = (int)v4 <= v76;
      if ( (int)v4 > v76 )
        goto LABEL_91;
      v78 = v83;
      while ( 1 )
      {
        LODWORD(v4) = v4 + 1;
        v79 = (__int16 *)(v78 + 2LL * byte_14026FC80[v56++]);
        if ( *v79 )
        {
          a2 = *(unsigned int *)(a1 + 18468);
          if ( (int)a2 < 1 )
          {
            sub_140161D20((_QWORD *)a1, a2);
            a2 = *(unsigned int *)(a1 + 18468);
            v78 = v83;
          }
          v80 = *(_DWORD *)(a1 + 18464);
          *(_DWORD *)(a1 + 18464) = 2 * v80;
          *(_DWORD *)(a1 + 18468) = a2 - 1;
          if ( v80 < 0 )
          {
            v81 = *v79;
            if ( ((unsigned __int16)*v79 & v49) == 0 )
            {
              if ( v81 <= 0 )
                v82 = v81 - v49;
              else
                v82 = v49 + v81;
              *v79 = v82;
            }
          }
          goto LABEL_88;
        }
        if ( !(_DWORD)v72 )
          break;
        LODWORD(v72) = v72 - 1;
LABEL_88:
        if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
          return 1;
      }
      *v79 = v73;
      v77 = (int)v4 <= *(_DWORD *)(a1 + 18488);
LABEL_91:
      if ( !v77 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18500) = v10 - 1;
  if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
    return 1;
  v50 = &byte_14026FC80[v4];
  do
  {
    v51 = (__int16 *)(v7 + 2LL * *v50);
    if ( *v51 )
    {
      v52 = *(unsigned int *)(a1 + 18468);
      if ( (int)v52 < 1 )
      {
        sub_140161D20((_QWORD *)a1, v52);
        LODWORD(v52) = *(_DWORD *)(a1 + 18468);
        v7 = v83;
      }
      v53 = *(_DWORD *)(a1 + 18464);
      *(_DWORD *)(a1 + 18464) = 2 * v53;
      *(_DWORD *)(a1 + 18468) = v52 - 1;
      if ( v53 < 0 )
      {
        v54 = *v51;
        if ( ((unsigned __int16)*v51 & v49) == 0 )
        {
          if ( v54 <= 0 )
            v55 = v54 - v49;
          else
            v55 = v49 + v54;
          *v51 = v55;
        }
      }
    }
    LODWORD(v4) = v4 + 1;
    ++v50;
  }
  while ( (int)v4 <= *(_DWORD *)(a1 + 18488) );
  return 1;
}

