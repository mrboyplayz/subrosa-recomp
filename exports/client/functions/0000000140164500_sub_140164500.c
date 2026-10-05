/* Address: 0x140164500 | Name: sub_140164500 | Size: 1393 bytes */
__int64 __fastcall sub_140164500(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, _WORD *a7)
{
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  signed int v17; // edi
  unsigned int *v18; // rax
  int i; // edi
  int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r14
  signed int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // edx
  int v29; // r8d
  int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r8d
  unsigned __int64 v34; // rdx
  int v35; // r9d
  int v36; // ecx
  int v37; // esi
  __int64 v38; // rax
  unsigned int v39; // r10d
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // r9d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // r10d
  unsigned int v46; // r9d
  unsigned int v47; // eax
  unsigned int v48; // r10d
  unsigned int *v49; // rax
  int v50; // edi
  __int64 j; // r8
  int v52; // r9d
  int v53; // r10d
  __int64 v54; // r14
  __int64 v55; // rdi
  int v56; // esi
  __int64 v57; // rax
  __int64 v58; // r14
  int v59; // r9d
  int v60; // eax
  __int16 v61; // dx

  if ( *(int *)(a1 + 18468) < 16 )
  {
    sub_140161D20((_QWORD *)a1, (__int64)a2);
    if ( *(int *)(a1 + 18468) < 16 )
      sub_140161D20((_QWORD *)a1, v11);
  }
  v12 = *(_DWORD *)(a1 + 18464);
  v13 = *(unsigned __int8 *)(((unsigned __int64)v12 >> 23) + a3);
  if ( (_BYTE)v13 != 0xFF )
  {
    v14 = *(_DWORD *)(a1 + 18468);
    v15 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a3);
    v16 = *(unsigned __int8 *)(v13 + a3 + 1280);
    if ( v16 > v14 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 18464) = v12 << v16;
    *(_DWORD *)(a1 + 18468) = v14 - v16;
    v17 = *(unsigned __int8 *)(v15 + a3 + 1024);
    goto LABEL_16;
  }
  v18 = (unsigned int *)(a3 + 1580);
  for ( i = 10; HIWORD(v12) >= *v18; ++v18 )
    ++i;
  v20 = *(_DWORD *)(a1 + 18468);
  if ( i != 17 )
  {
    if ( i > v20 )
      goto LABEL_48;
    v21 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v12 >> (32 - i))));
    v22 = v21 + a3;
    v15 = dword_14026FBF0[*(unsigned __int8 *)(v21 + a3 + 1280)] & (v12 >> (32 - *(_BYTE *)(v21 + a3 + 1280)));
    if ( (_DWORD)v15 != *(unsigned __int16 *)(a3 + 2 * v21 + 512) )
    {
      sub_14023E640(
        L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
        L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        2074);
      v20 = *(_DWORD *)(a1 + 18468);
      v12 = *(_DWORD *)(a1 + 18464);
    }
    *(_DWORD *)(a1 + 18464) = v12 << i;
    *(_DWORD *)(a1 + 18468) = v20 - i;
    v17 = *(unsigned __int8 *)(v22 + 1024);
LABEL_16:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
    if ( !v17 )
      goto LABEL_21;
    v23 = *(_DWORD *)(a1 + 18468);
    if ( v23 < v17 )
    {
      sub_140161D20((_QWORD *)a1, v15);
      v23 = *(_DWORD *)(a1 + 18468);
    }
    v24 = *(_DWORD *)(a1 + 18464);
    v25 = __ROL4__(v24, v17);
    if ( (unsigned int)v17 < 0x11 )
    {
      *(_DWORD *)(a1 + 18468) = v23 - v17;
      v26 = v17;
      v27 = dword_14026FC40[v26] & ~(v24 >> 31);
      v28 = v25 & dword_14026FBF0[v26];
      *(_DWORD *)(a1 + 18464) = v25 & ~dword_14026FBF0[v26];
      v29 = v28 + v27;
    }
    else
    {
LABEL_21:
      v29 = 0;
    }
    v30 = 1;
    v31 = 96LL * a6;
    v32 = (unsigned int)(v29 + *(_DWORD *)(v31 + a1 + 18104));
    *(_DWORD *)(v31 + a1 + 18104) = v32;
    *(_WORD *)a2 = *a7 * v32;
    while ( 1 )
    {
      v33 = *(_DWORD *)(a1 + 18468);
      if ( v33 < 16 )
      {
        sub_140161D20((_QWORD *)a1, v32);
        v33 = *(_DWORD *)(a1 + 18468);
      }
      v34 = *(unsigned int *)(a1 + 18464);
      v35 = *(__int16 *)(a5 + 2 * (v34 >> 23));
      if ( *(_WORD *)(a5 + 2 * (v34 >> 23)) )
      {
        v36 = v35 & 0xF;
        v37 = ((v35 >> 4) & 0xF) + v30;
        *(_DWORD *)(a1 + 18464) = (_DWORD)v34 << v36;
        v38 = v37;
        v30 = v37 + 1;
        *(_DWORD *)(a1 + 18468) = v33 - v36;
        v32 = 2LL * byte_14026FC80[v38];
        *(_WORD *)((char *)a2 + v32) = (v35 >> 8) * *(_WORD *)((char *)a7 + v32);
      }
      else
      {
        v39 = v34;
        if ( v33 < 16 )
        {
          sub_140161D20((_QWORD *)a1, v34);
          LODWORD(v34) = *(_DWORD *)(a1 + 18464);
          v39 = v34;
        }
        v40 = (unsigned __int64)v39 >> 23;
        v41 = *(unsigned __int8 *)(v40 + a4);
        if ( (_BYTE)v41 == 0xFF )
        {
          v48 = HIWORD(v39);
          v49 = (unsigned int *)(a4 + 1580);
          v50 = 10;
          for ( j = 10; v48 >= *v49; ++j )
          {
            ++v50;
            ++v49;
          }
          v52 = *(_DWORD *)(a1 + 18468);
          if ( v50 == 17 )
          {
            *(_DWORD *)(a1 + 18468) = v52 - 16;
            goto LABEL_48;
          }
          if ( v50 > v52 )
            goto LABEL_48;
          v53 = v34;
          v54 = (int)(*(_DWORD *)(a4 + 4 * j + 1612) + (dword_14026FBF0[j] & ((unsigned int)v34 >> (32 - v50))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(v54 + a4 + 1280)]
              & ((unsigned int)v34 >> (32 - *(_BYTE *)(v54 + a4 + 1280)))) != *(unsigned __int16 *)(a4 + 2 * v54 + 512) )
          {
            sub_14023E640(
              L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              2074);
            v52 = *(_DWORD *)(a1 + 18468);
            v53 = *(_DWORD *)(a1 + 18464);
          }
          v46 = v52 - v50;
          v45 = v53 << v50;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v54 + a4 + 1024);
        }
        else
        {
          v42 = *(_DWORD *)(a1 + 18468);
          v43 = *(unsigned __int8 *)(v40 + a4);
          v44 = *(unsigned __int8 *)(v41 + a4 + 1280);
          if ( v44 > v42 )
            goto LABEL_48;
          v45 = v39 << v44;
          v46 = v42 - v44;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v43 + a4 + 1024);
        }
        v32 = v46;
        v55 = v47 & 0xF;
        if ( (v47 & 0xF) != 0 )
        {
          v56 = (v47 >> 4) + v30;
          v57 = v56;
          v30 = v56 + 1;
          v58 = byte_14026FC80[v57];
          if ( (int)v46 < (int)v55 )
          {
            sub_140161D20((_QWORD *)a1, v46);
            v45 = *(_DWORD *)(a1 + 18464);
            LODWORD(v32) = *(_DWORD *)(a1 + 18468);
          }
          *(_DWORD *)(a1 + 18468) = v32 - v55;
          v59 = __ROL4__(v45, v55);
          v60 = dword_14026FBF0[v55];
          v61 = ~(unsigned __int16)(v45 >> 31) & dword_14026FC40[v55];
          *(_DWORD *)(a1 + 18464) = v59 & ~v60;
          v32 = (unsigned int)((__int16)((v59 & v60) + v61) * (__int16)a7[v58]);
          *((_WORD *)a2 + v58) = v32;
        }
        else
        {
          if ( v47 != 240 )
            return 1;
          v30 += 16;
        }
      }
      if ( v30 >= 64 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18468) = v20 - 16;
LABEL_48:
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad huffman code";
  return 0;
}

