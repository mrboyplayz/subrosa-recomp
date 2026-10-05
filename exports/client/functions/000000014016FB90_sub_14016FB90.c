/* Address: 0x14016fb90 | Name: sub_14016FB90 | Size: 220 bytes */
__int64 __fastcall sub_14016FB90(__int64 a1, __int64 a2)
{
  int v2; // r10d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int *v7; // rcx
  int v8; // r8d
  int v9; // eax
  int v10; // edx

  v2 = *(_DWORD *)(a1 + 20);
  v5 = (2 * (v2 & 0x5555)) | (v2 >> 1) & 0x5555;
  v6 = (16 * ((4 * (v5 & 0x3333)) & 0xF0F | (v5 >> 2) & 0x303))
     | (((4 * (v5 & 0x3333)) | (v5 >> 2) & 0x3333) >> 4) & 0xF0F;
  v7 = (int *)(a2 + 1096);
  v8 = (v6 >> 8) | ((unsigned __int8)v6 << 8);
  v9 = 10;
  if ( v8 >= *(_DWORD *)(a2 + 1096) )
  {
    do
    {
      ++v9;
      ++v7;
    }
    while ( v8 >= *v7 );
    if ( v9 >= 16 )
      return 0xFFFFFFFFLL;
  }
  v10 = (v8 >> (16 - v9)) - *(unsigned __int16 *)(a2 + 2LL * v9 + 1024) + *(unsigned __int16 *)(a2 + 2LL * v9 + 1124);
  if ( (unsigned int)v10 >= 0x120 || *(unsigned __int8 *)(v10 + a2 + 1156) != v9 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 16) -= v9;
  *(_DWORD *)(a1 + 20) = (unsigned int)v2 >> v9;
  return *(unsigned __int16 *)(a2 + 2LL * v10 + 1444);
}

