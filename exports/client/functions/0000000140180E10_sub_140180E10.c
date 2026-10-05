/* Address: 0x140180e10 | Name: sub_140180E10 | Size: 242 bytes */
_QWORD *__fastcall sub_140180E10(_QWORD *a1, __int64 *a2, int a3)
{
  int v3; // esi
  int v7; // eax
  int v8; // edx
  unsigned __int8 v9; // cl
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // ebp
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a2 + 3);
  if ( v3 < 0 )
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
  v7 = 0;
  if ( v3 < 0 )
    v7 = v3;
  *((_DWORD *)a2 + 2) = v7;
  if ( v7 < v3 )
  {
    v10 = v7 + 1;
    v11 = v7;
    v12 = *a2;
    *((_DWORD *)a2 + 2) = v10;
    v8 = *(unsigned __int8 *)(v11 + v12);
    if ( v10 < v3 )
    {
      v9 = *(_BYTE *)(v10 + v12);
      *((_DWORD *)a2 + 2) = v10 + 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  v13 = v9 | (v8 << 8);
  v14 = 107;
  if ( v13 < 0x846C )
  {
    if ( v13 >= 0x4D8 )
      v14 = 1131;
  }
  else
  {
    v14 = 0x8000;
  }
  v15 = v14 + a3;
  if ( v15 < 0 || v15 >= (int)v13 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    v17 = *(_OWORD *)a2;
    *(_OWORD *)a1 = *sub_14017F410(&v18, (__int64)&v17, v15);
  }
  return a1;
}

