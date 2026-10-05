/* Address: 0x1400af850 | Name: sub_1400AF850 | Size: 686 bytes */
void sub_1400AF850()
{
  int v0; // edi
  int v1; // ebx
  __int64 v2; // r12
  char *v3; // r15
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rsi
  unsigned int *v7; // r14
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  int v10; // eax
  int *v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rdx
  int *v15; // rax
  int v16; // eax
  int *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // ecx
  int *v21; // rdx
  __int64 v22; // rax
  int *v23; // rax

  v0 = dword_16E54CAF0;
  v1 = 0;
  if ( dword_16E54CAF0 > 0 )
  {
    v2 = 0;
    v3 = (char *)&unk_16E18CAE4;
    while ( 1 )
    {
      v4 = *(_DWORD *)v3;
      if ( *(int *)v3 < 0x10000 )
        *(_DWORD *)v3 = --v4;
      if ( v4 > 0 )
      {
        ++v1;
        v2 += 60;
        v3 += 240;
      }
      else if ( v1 >= 0 )
      {
        if ( v1 >= v0 )
          goto LABEL_45;
        v5 = *((_DWORD *)v3 + 19) - 1;
        v6 = v5;
        if ( v5 >= 0 )
        {
          v7 = (unsigned int *)&dword_16E18CB34[v2 + v5];
          do
          {
            sub_14004B660(*v7);
            --v6;
            --v7;
          }
          while ( v6 >= 0 );
        }
        if ( v1 == --v0 )
        {
LABEL_45:
          dword_16E54CAF0 = v0;
          return;
        }
        v8 = (_OWORD *)((char *)&unk_16E18CAE0 + 240 * v0);
        *(_OWORD *)(v3 - 4) = *v8;
        *(_OWORD *)(v3 + 12) = v8[1];
        *(_OWORD *)(v3 + 28) = v8[2];
        *(_OWORD *)(v3 + 44) = v8[3];
        *(_OWORD *)(v3 + 60) = v8[4];
        *(_OWORD *)(v3 + 76) = v8[5];
        *(_OWORD *)(v3 + 92) = v8[6];
        v9 = v8[7];
        v8 += 8;
        *(_OWORD *)(v3 + 108) = v9;
        *(_OWORD *)(v3 + 124) = *v8;
        *(_OWORD *)(v3 + 140) = v8[1];
        *(_OWORD *)(v3 + 156) = v8[2];
        *(_OWORD *)(v3 + 172) = v8[3];
        *(_OWORD *)(v3 + 188) = v8[4];
        *(_OWORD *)(v3 + 204) = v8[5];
        *(_OWORD *)(v3 + 220) = v8[6];
        v10 = *((_DWORD *)v3 + 19);
        if ( v10 > 0 )
        {
          v11 = (int *)(v3 + 80);
          v12 = (unsigned int)v10;
          do
          {
            v13 = 0;
            v14 = 244LL * *v11;
            if ( *(int *)((char *)&unk_14B883334 + v14) > 0 )
            {
              v15 = (int *)((char *)&unk_14B883338 + v14);
              do
              {
                if ( *v15 == v0 )
                  *v15 = v1;
                ++v13;
                ++v15;
              }
              while ( v13 < *(_DWORD *)((char *)&unk_14B883334 + v14) );
            }
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = *((_DWORD *)v3 + 52);
        if ( v16 > 0 )
        {
          v17 = (int *)(v3 + 212);
          v18 = (unsigned int)v16;
          do
          {
            v19 = *v17;
            v20 = 0;
            v21 = (int *)((char *)&unk_16E6A3D4C + 20840 * v19);
            if ( *v21 > 0 )
            {
              v22 = 5210 * v19;
              do
              {
                if ( dword_16E6A3D50[v22] == v0 )
                  dword_16E6A3D50[v22] = v1;
                ++v20;
                ++v22;
              }
              while ( v20 < *v21 );
            }
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v23 = (int *)&unk_1909419EC;
        do
        {
          if ( *(v23 - 9) && *v23 == v0 )
            *v23 = v1;
          if ( v23[7157] && v23[7166] == v0 )
            v23[7166] = v1;
          if ( v23[14323] && v23[14332] == v0 )
            v23[14332] = v1;
          if ( v23[21489] )
          {
            if ( v23[21498] == v0 )
              v23[21498] = v1;
          }
          v23 += 28664;
        }
        while ( (__int64)v23 < (__int64)&dword_1910411EC );
      }
      if ( v1 >= v0 )
        goto LABEL_45;
    }
  }
}

