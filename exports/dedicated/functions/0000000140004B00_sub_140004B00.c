/* Address: 0x140004b00 | Name: sub_140004B00 | Size: 876 bytes */
void sub_140004B00()
{
  int v0; // r9d
  int v1; // edx
  int v2; // r10d
  int *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rax
  float v6; // xmm1_4
  __int64 v7; // rcx
  int v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rcx
  int v13; // esi
  int *v14; // rdx
  int *v15; // rbx
  __int64 v16; // r10
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx

  v0 = dword_1839ABEE4;
  v1 = 0;
  v2 = 0;
  dword_16DA009A0 = 0;
  if ( dword_1839ABEE4 > 0 )
  {
    v3 = dword_16DC419B4;
    v4 = 0;
    do
    {
      v5 = v4 + 28LL * *(int *)((char *)&unk_1839ABF20 + v4);
      v6 = *(float *)((char *)&unk_1839ABF10 + v5) + *(float *)((char *)&unk_1839ABF1C + v5);
      v7 = 9LL * v1;
      *(float *)&v8 = (float)(*(float *)((char *)&unk_1839ABF14 + v5) + *(float *)((char *)&unk_1839ABF20 + v5)) * 0.5;
      *(float *)&dword_16DA009A4[2 * v7] = (float)(*(float *)((char *)&unk_1839ABF18 + v5)
                                                 + *(float *)((char *)dword_1839ABF0C + v5))
                                         * 0.5;
      v9 = *(float *)((char *)&unk_1839ABF28 + v4) + *(float *)((char *)&unk_1839ABF34 + v4);
      *(float *)&dword_16DA009A8[2 * v7] = v6 * 0.5;
      v10 = *(float *)((char *)&unk_1839ABF2C + v4) + *(float *)((char *)&unk_1839ABF38 + v4);
      dword_16DA009AC[2 * v7] = v8;
      v11 = *(float *)((char *)&unk_1839ABF30 + v4) + *(float *)((char *)&unk_1839ABF3C + v4);
      v4 += 1584;
      dword_16DA009E0[18 * dword_16DA009A0] = v2;
      dword_16DA009E4[18 * dword_16DA009A0] = 0;
      *(v3 - 1) = dword_16DA009A0;
      dword_16DA009E8[18 * dword_16DA009A0++] = 0;
      v12 = 9LL * dword_16DA009A0;
      *(float *)&dword_16DA009A4[2 * v12] = v9 * 0.5;
      *(float *)&dword_16DA009A8[2 * v12] = v10 * 0.5;
      *(float *)&dword_16DA009AC[2 * v12] = v11 * 0.5;
      dword_16DA009E0[18 * dword_16DA009A0] = v2++;
      dword_16DA009E4[18 * dword_16DA009A0] = 1;
      *v3 = dword_16DA009A0;
      v3 += 2;
      dword_16DA009E8[18 * dword_16DA009A0] = 0;
      v1 = ++dword_16DA009A0;
    }
    while ( v2 < v0 );
  }
  v13 = 0;
  if ( v1 > 0 )
  {
    v14 = (int *)&unk_16DA009B0;
    v15 = dword_16DA009B4;
    v16 = 0;
    do
    {
      v17 = v14[12];
      v18 = 0;
      v19 = 396 * v17;
      *v14 = 0;
      if ( v14[13] )
        v20 = dword_1839ABF0C[v19];
      else
        v20 = *(_DWORD *)((char *)&unk_1839ABF10 + v19 * 4);
      if ( v20 != -1 )
      {
        v21 = 34LL * v20;
        v22 = 0;
        v23 = dword_183989EFC[v21];
        if ( (_DWORD)v23 != -1 && (_DWORD)v23 != (_DWORD)v17 )
        {
          *v15 = dword_16DC419B0[2 * v23];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v24 = dword_183989F00[v21];
        if ( (_DWORD)v24 != -1 && (_DWORD)v24 != (_DWORD)v17 )
        {
          dword_16DA009B4[v16 + v18] = dword_16DC419B0[2 * v24];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v25 = dword_183989F04[v21];
        if ( (_DWORD)v25 != -1 && (_DWORD)v25 != (_DWORD)v17 )
        {
          dword_16DA009B4[v16 + v18] = dword_16DC419B4[2 * v25];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v26 = dword_183989F08[v21];
        if ( (_DWORD)v26 != -1 && (_DWORD)v26 != (_DWORD)v17 )
        {
          dword_16DA009B4[v16 + v18] = dword_16DC419B4[2 * v26];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        if ( !v18 )
        {
          v14[14] = 1;
          if ( v14[13] )
            *v15 = dword_16DC419B0[2 * v17];
          else
            dword_16DA009B4[v16 + v22] = dword_16DC419B4[2 * v17];
          ++*v14;
        }
      }
      ++v13;
      v16 += 18;
      v15 += 18;
      v14 += 18;
    }
    while ( v13 < dword_16DA009A0 );
  }
}

