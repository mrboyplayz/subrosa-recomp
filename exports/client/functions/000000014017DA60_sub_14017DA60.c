/* Address: 0x14017da60 | Name: sub_14017DA60 | Size: 289 bytes */
__int64 __fastcall sub_14017DA60(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // r8d
  unsigned __int8 *v9; // rdx
  unsigned int v10; // r10d
  unsigned __int8 *v12; // r9
  unsigned int v13; // r10d

  if ( *(_DWORD *)(a1 + 76) )
    sub_14023E640(L"!info->cff.size", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1556);
  if ( a2 >= *(_DWORD *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)(a1 + 56);
  if ( v4 >= 2 )
    return 0xFFFFFFFFLL;
  v5 = *(int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v12 = (unsigned __int8 *)(v5 + v6 + 4 * a2);
    v13 = *(_DWORD *)(a1 + 32) + ((((v12[1] + (*v12 << 8)) << 8) + v12[2]) << 8) + v12[3];
    if ( v13 == *(_DWORD *)(a1 + 32) + ((((v12[5] + (v12[4] << 8)) << 8) + v12[6]) << 8) + v12[7] )
      return (unsigned int)-1;
    return v13;
  }
  else
  {
    v7 = v6 + 2 * a2;
    v8 = *(_DWORD *)(a1 + 32);
    v9 = (unsigned __int8 *)(v7 + v5);
    v10 = v8 + 2 * (v9[1] + (*v9 << 8));
    if ( v10 == v8 + 2 * (v9[3] + (v9[2] << 8)) )
      return (unsigned int)-1;
    return v10;
  }
}

