/* Address: 0x14017f380 | Name: sub_14017F380 | Size: 137 bytes */
__int64 __fastcall sub_14017F380(__int64 a1)
{
  int v1; // r8d
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // r9d
  unsigned __int8 v8; // dl

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 < 0 )
  {
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    v1 = *(_DWORD *)(a1 + 12);
  }
  v3 = 0;
  v4 = 0;
  if ( v1 < 0 )
    v4 = v1;
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 >= v1 )
    return (unsigned int)(v3 << 8);
  v5 = v4;
  v6 = v4 + 1;
  v3 = *(unsigned __int8 *)(v5 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 >= v1 )
    return (unsigned int)(v3 << 8);
  v8 = *(_BYTE *)(v6 + *(_QWORD *)a1);
  *(_DWORD *)(a1 + 8) = v6 + 1;
  return v8 | (unsigned int)(v3 << 8);
}

