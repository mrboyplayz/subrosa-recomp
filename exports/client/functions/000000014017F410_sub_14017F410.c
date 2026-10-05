/* Address: 0x14017f410 | Name: sub_14017F410 | Size: 410 bytes */
_OWORD *__fastcall sub_14017F410(_OWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int8 v10; // al
  __int64 v11; // r8
  int v12; // ebp
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned int v15; // r15d
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // eax
  __int128 v22; // [rsp+20h] [rbp-38h]

  v3 = *(int *)(a2 + 12);
  if ( (int)v3 < 0 )
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
  v7 = 0;
  if ( (int)v3 < 0 )
    v7 = v3;
  v8 = v7;
  if ( v7 < v3 )
  {
    v11 = ++v7;
    v9 = *(unsigned __int8 *)(v8 + *(_QWORD *)a2);
    if ( v8 + 1 < v3 )
    {
      v10 = *(_BYTE *)(v11 + *(_QWORD *)a2);
      ++v7;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v12 = v10 | (v9 << 8);
  if ( v7 < (int)v3 )
  {
    v14 = v7++;
    v13 = *(_BYTE *)(v14 + *(_QWORD *)a2);
  }
  else
  {
    v13 = 0;
  }
  v15 = v13;
  if ( a3 < 0 || a3 >= v12 )
    sub_14023E640(L"i >= 0 && i < count", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1233);
  if ( v15 - 1 > 3 )
    sub_14023E640(L"offsize >= 1 && offsize <= 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1234);
  v16 = v7 + a3 * v15;
  if ( v16 > (int)v3 || v16 < 0 )
  {
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    if ( v16 > (int)v3 || v16 < 0 )
      v16 = v3;
  }
  *(_DWORD *)(a2 + 8) = v16;
  v17 = sub_14017F020(a2, v15);
  v18 = sub_14017F020(a2, v15) - v17;
  v22 = 0u;
  v19 = v15 * (v12 + 1) + v17 + 2;
  if ( v19 >= 0 && v18 >= 0 )
  {
    v20 = *(_DWORD *)(a2 + 12);
    if ( v19 <= v20 && v18 <= v20 - v19 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)a2 + v19;
      HIDWORD(v22) = v18;
    }
  }
  *a1 = v22;
  return a1;
}

