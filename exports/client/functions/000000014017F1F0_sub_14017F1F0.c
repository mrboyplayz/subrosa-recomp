/* Address: 0x14017f1f0 | Name: sub_14017F1F0 | Size: 398 bytes */
_OWORD *__fastcall sub_14017F1F0(_OWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // r8d
  int v6; // esi
  int v7; // ebx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // esi
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned int v14; // r14d
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  __int128 v19; // [rsp+20h] [rbp-28h]

  v2 = *(int *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  if ( (int)v2 < v4 )
  {
    v9 = *(_QWORD *)a2;
    v7 = v2 + 1;
    v6 = *(unsigned __int8 *)(v2 + *(_QWORD *)a2);
    *(_DWORD *)(a2 + 8) = v2 + 1;
    if ( (int)v2 + 1 < v4 )
    {
      v10 = v7;
      v7 = v2 + 2;
      v8 = *(_BYTE *)(v10 + v9);
      *(_DWORD *)(a2 + 8) = v2 + 2;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v6 = 0;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = 0;
  }
  v11 = v8 | (v6 << 8);
  if ( v11 )
  {
    if ( v7 < v4 )
    {
      v13 = v7++;
      v12 = *(_BYTE *)(v13 + *(_QWORD *)a2);
      *(_DWORD *)(a2 + 8) = v7;
    }
    else
    {
      v12 = 0;
    }
    v14 = v12;
    if ( !v12 || v12 > 4u )
    {
      sub_14023E640(L"offsize >= 1 && offsize <= 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1164);
      v4 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a2 + 8);
    }
    v15 = v7 + v14 * v11;
    if ( v15 > v4 || v15 < 0 )
    {
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
      if ( v15 > *(_DWORD *)(a2 + 12) || v15 < 0 )
        v15 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v15;
    v16 = sub_14017F020(a2, v14);
    v4 = *(_DWORD *)(a2 + 12);
    v7 = *(_DWORD *)(a2 + 8) + v16 - 1;
    if ( v7 > v4 || v7 < 0 )
    {
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
      v4 = *(_DWORD *)(a2 + 12);
      if ( v7 > v4 || v7 < 0 )
        v7 = *(_DWORD *)(a2 + 12);
    }
    *(_DWORD *)(a2 + 8) = v7;
  }
  v17 = v7 - v2;
  v19 = 0u;
  if ( (int)v2 >= 0 && v17 >= 0 && (int)v2 <= v4 && v17 <= v4 - (int)v2 )
  {
    HIDWORD(v19) = v17;
    *(_QWORD *)&v19 = *(_QWORD *)a2 + v2;
  }
  *a1 = v19;
  return a1;
}

