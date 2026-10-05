/* Address: 0x140075460 | Name: sub_140075460 | Size: 396 bytes */
__int64 __fastcall sub_140075460(float a1, float a2, float a3, float a4)
{
  unsigned int v6; // xmm4_4
  float v7; // xmm5_4
  unsigned int v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  unsigned int *v14; // rcx
  unsigned int v15; // xmm4_4
  unsigned int v16; // xmm2_4

  if ( dword_140404A6C[70317864] )
  {
    v8 = dword_140404A6C[70318063];
    v6 = dword_140404A6C[70318062];
    v9 = *(float *)&dword_140404A6C[70318061];
    v7 = *(float *)&dword_140404A6C[70318060];
  }
  else
  {
    v6 = dword_140404A6C[438291414];
    v7 = 0.0;
    v8 = dword_140404A6C[438291415];
    v9 = 0.0;
    dword_140404A6C[70318060] = 0;
    dword_140404A6C[70318061] = 0;
    dword_140404A6C[70318062] = dword_140404A6C[438291414];
    dword_140404A6C[70318063] = dword_140404A6C[438291415];
  }
  v10 = fmaxf(v7, a1);
  v11 = fminf(*(float *)&v6 + v7, a1 + a3);
  v12 = fmaxf(v9, a2);
  v13 = fminf(*(float *)&v8 + v9, a2 + a4);
  if ( v10 > v11 || v12 > v13 )
    return 0;
  *(float *)&dword_140404A6C[70318060] = v10;
  v14 = &dword_140404A6C[70087029];
  *(float *)&dword_140404A6C[70318061] = v12;
  *(float *)&v15 = v11 - v10;
  *(float *)&v16 = v13 - v12;
  dword_140404A6C[70318062] = v15;
  dword_140404A6C[70318063] = v16;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317865] = v10;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317867] = v15;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317866] = v12;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317868] = v16;
  if ( ++dword_140404A6C[70317864] == 1 )
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(3089);
  sub_14007B7E0(v14);
  return 1;
}

