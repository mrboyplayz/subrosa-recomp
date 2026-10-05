/* Address: 0x140042790 | Name: sub_140042790 | Size: 620 bytes */
__int64 __fastcall sub_140042790(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int *v7; // rax
  unsigned int v11; // edi
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4

  v7 = (int *)&unk_140249600;
  v11 = 0;
  while ( *v7 )
  {
    ++v11;
    v7 += 47;
    if ( (__int64)v7 >= (__int64)dword_1403C1600 )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v13 = 188LL * (int)v11;
  memset(&dword_140249604[v13 / 4], 0, 0xB8u);
  *(_DWORD *)((char *)&unk_140249600 + v13 + 20) = a5;
  *(_DWORD *)((char *)&unk_140249600 + v13) = 1;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 4) = a1;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 172) = 1056964608;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 176) = 1048576000;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 180) = 1056964608;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 24) = *a2;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 28) = a2[1];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 32) = a2[2];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 60) = *a3;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 64) = a3[1];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 68) = a3[2];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 72) = a3[3];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 76) = a3[4];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 80) = a3[5];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 84) = a3[6];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 88) = a3[7];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 92) = a3[8];
  if ( a4 )
  {
    *(_DWORD *)((char *)&unk_140249600 + v13 + 36) = *a4;
    *(_DWORD *)((char *)&unk_140249600 + v13 + 40) = a4[1];
    *(_DWORD *)((char *)&unk_140249600 + v13 + 44) = a4[2];
  }
  *(_DWORD *)((char *)&unk_140249600 + v13 + 132) = *a6;
  *(_DWORD *)((char *)&unk_140249600 + v13 + 136) = a6[1];
  *(_DWORD *)((char *)&unk_140249600 + v13 + 140) = a6[2];
  v14 = 188LL * (int)v11;
  v15 = *(float *)((char *)&unk_140249600 + v14 + 132);
  if ( v15 <= 0.0 )
    v16 = 0.0;
  else
    v16 = 1.0 / v15;
  *(float *)((char *)&unk_140249600 + v14 + 144) = v16;
  v17 = *(float *)((char *)&unk_140249600 + v14 + 136);
  if ( v17 <= 0.0 )
    v18 = 0.0;
  else
    v18 = 1.0 / v17;
  *(float *)((char *)&unk_140249600 + v14 + 148) = v18;
  v19 = *(float *)((char *)&unk_140249600 + v14 + 140);
  if ( v19 <= 0.0 )
    v20 = 0.0;
  else
    v20 = 1.0 / v19;
  *(float *)((char *)&unk_140249600 + v14 + 152) = v20;
  v21 = *(float *)((char *)&unk_140249600 + v13 + 132);
  *(float *)((char *)&unk_140249600 + v13 + 156) = v21;
  v22 = *(float *)((char *)&unk_140249600 + v13 + 136);
  if ( v21 > v22 )
  {
    *(float *)((char *)&unk_140249600 + v13 + 156) = v22;
    v21 = v22;
  }
  v23 = *(float *)((char *)&unk_140249600 + v13 + 140);
  if ( v21 > v23 )
    *(float *)((char *)&unk_140249600 + v13 + 156) = v23;
  return v11;
}

