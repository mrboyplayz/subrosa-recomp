/* Address: 0x140165200 | Name: sub_140165200 | Size: 773 bytes */
__int64 __fastcall sub_140165200(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r11d
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r10d
  signed int v16; // r11d
  signed int v17; // esi
  unsigned int *v18; // rax
  int i; // esi
  int v20; // r11d
  __int64 v21; // r8
  __int64 v22; // r14
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  int v30; // edx

  v5 = a4;
  v6 = a2;
  if ( *(_DWORD *)(a1 + 18488) )
    goto LABEL_2;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1, a2);
  if ( *(_DWORD *)(a1 + 18492) )
  {
    v29 = *(_DWORD *)(a1 + 18468);
    if ( v29 < 1 )
    {
      sub_140161D20((_QWORD *)a1, a2);
      v29 = *(_DWORD *)(a1 + 18468);
    }
    v30 = *(_DWORD *)(a1 + 18464);
    *(_DWORD *)(a1 + 18464) = 2 * v30;
    *(_DWORD *)(a1 + 18468) = v29 - 1;
    if ( v30 < 0 )
      *(_WORD *)v6 += 1 << *(_DWORD *)(a1 + 18496);
    return 1;
  }
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1, a2);
  v9 = *(_DWORD *)(a1 + 18464);
  v10 = (unsigned __int64)v9 >> 23;
  v11 = *(unsigned __int8 *)(v10 + a3);
  if ( (_BYTE)v11 == 0xFF )
  {
    v18 = (unsigned int *)(a3 + 1580);
    for ( i = 10; HIWORD(v9) >= *v18; ++v18 )
      ++i;
    v20 = *(_DWORD *)(a1 + 18468);
    if ( i == 17 )
    {
      *(_DWORD *)(a1 + 18468) = v20 - 16;
    }
    else if ( i <= v20 )
    {
      v21 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v9 >> (32 - i))));
      v22 = v21 + a3;
      a2 = dword_14026FBF0[*(unsigned __int8 *)(v21 + a3 + 1280)] & (v9 >> (32 - *(_BYTE *)(v21 + a3 + 1280)));
      if ( (_DWORD)a2 != *(unsigned __int16 *)(a3 + 2 * v21 + 512) )
      {
        sub_14023E640(
          L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
          L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
          2074);
        v20 = *(_DWORD *)(a1 + 18468);
        v9 = *(_DWORD *)(a1 + 18464);
      }
      v16 = v20 - i;
      v15 = v9 << i;
      *(_DWORD *)(a1 + 18464) = v15;
      *(_DWORD *)(a1 + 18468) = v16;
      v17 = *(unsigned __int8 *)(v22 + 1024);
      goto LABEL_20;
    }
LABEL_2:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "can't merge dc and ac";
    return 0;
  }
  v12 = *(_DWORD *)(a1 + 18468);
  v13 = *(unsigned __int8 *)(v10 + a3);
  v14 = *(unsigned __int8 *)(v11 + a3 + 1280);
  if ( v14 > v12 )
    goto LABEL_2;
  v15 = v9 << v14;
  v16 = v12 - v14;
  *(_DWORD *)(a1 + 18464) = v15;
  *(_DWORD *)(a1 + 18468) = v16;
  v17 = *(unsigned __int8 *)(v13 + a3 + 1024);
LABEL_20:
  if ( !v17 )
    goto LABEL_25;
  if ( v16 < v17 )
  {
    sub_140161D20((_QWORD *)a1, a2);
    v15 = *(_DWORD *)(a1 + 18464);
  }
  v23 = __ROL4__(v15, v17);
  if ( (unsigned int)v17 <= 0x10 )
  {
    *(_DWORD *)(a1 + 18468) -= v17;
    v24 = v17;
    v25 = ~(v15 >> 31) & dword_14026FC40[v24];
    v26 = v23 & dword_14026FBF0[v24];
    *(_DWORD *)(a1 + 18464) = v23 & ~dword_14026FBF0[v24];
    v27 = v26 + v25;
  }
  else
  {
LABEL_25:
    v27 = 0;
  }
  v28 = v27 + *(_DWORD *)(96 * v5 + a1 + 18104);
  *(_DWORD *)(96 * v5 + a1 + 18104) = v28;
  *(_WORD *)v6 = (_WORD)v28 << *(_DWORD *)(a1 + 18496);
  return 1;
}

