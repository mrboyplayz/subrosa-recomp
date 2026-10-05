/* Address: 0x1401657b0 | Name: sub_1401657B0 | Size: 387 bytes */
__int64 __fastcall sub_1401657B0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int *v10; // rax
  int i; // ebx
  int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rbp

  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1, a2);
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = *(unsigned __int8 *)(((unsigned __int64)v4 >> 23) + a2);
  if ( (_BYTE)v5 != 0xFF )
  {
    v6 = *(_DWORD *)(a1 + 18468);
    v7 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a2);
    v8 = *(unsigned __int8 *)(v5 + a2 + 1280);
    if ( v8 <= v6 )
    {
      *(_DWORD *)(a1 + 18464) = v4 << v8;
      *(_DWORD *)(a1 + 18468) = v6 - v8;
      return *(unsigned __int8 *)(v7 + a2 + 1024);
    }
    return 0xFFFFFFFFLL;
  }
  v10 = (unsigned int *)(a2 + 1580);
  for ( i = 10; HIWORD(v4) >= *v10; ++v10 )
    ++i;
  v12 = *(_DWORD *)(a1 + 18468);
  if ( i == 17 )
  {
    *(_DWORD *)(a1 + 18468) = v12 - 16;
    return 0xFFFFFFFFLL;
  }
  if ( i > v12 )
    return 0xFFFFFFFFLL;
  v13 = (int)(*(_DWORD *)(a2 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v4 >> (32 - i))));
  v14 = v13 + a2;
  if ( (dword_14026FBF0[*(unsigned __int8 *)(v13 + a2 + 1280)] & (v4 >> (32 - *(_BYTE *)(v13 + a2 + 1280)))) != *(unsigned __int16 *)(a2 + 2 * v13 + 512) )
  {
    sub_14023E640(
      L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
      L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      2074);
    v12 = *(_DWORD *)(a1 + 18468);
    v4 = *(_DWORD *)(a1 + 18464);
  }
  *(_DWORD *)(a1 + 18468) = v12 - i;
  *(_DWORD *)(a1 + 18464) = v4 << i;
  return *(unsigned __int8 *)(v14 + 1024);
}

