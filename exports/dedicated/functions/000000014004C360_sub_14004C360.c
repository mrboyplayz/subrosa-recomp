/* Address: 0x14004c360 | Name: sub_14004C360 | Size: 633 bytes */
void __fastcall sub_14004C360(int a1)
{
  int v2; // ebp
  unsigned __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rdi
  unsigned int *v6; // rsi
  int v7; // r8d
  _OWORD *v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rdx
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // r10
  int *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  int *v17; // rax
  int v18; // eax
  __int64 v19; // r11
  int *v20; // r10
  __int64 v21; // r9
  int v22; // ecx
  int *v23; // rdx
  __int64 v24; // rax
  int *v25; // rax

  if ( a1 >= 0 )
  {
    v2 = dword_16E54CAF0;
    if ( a1 < dword_16E54CAF0 )
    {
      v3 = 240LL * a1;
      v4 = dword_16E18CB30[v3 / 4] - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = (unsigned int *)&dword_16E18CB34[60 * a1 + v4];
        do
        {
          sub_14004B660(*v6);
          --v5;
          --v6;
        }
        while ( v5 >= 0 );
      }
      v7 = v2 - 1;
      dword_16E54CAF0 = v2 - 1;
      if ( a1 != v2 - 1 )
      {
        v8 = (_OWORD *)((char *)&unk_16E18CAE0 + v3);
        v9 = (_OWORD *)((char *)&unk_16E18CAE0 + 240 * v7);
        *v8 = *v9;
        v8[1] = v9[1];
        v8[2] = v9[2];
        v8[3] = v9[3];
        v8[4] = v9[4];
        v8[5] = v9[5];
        v8[6] = v9[6];
        v10 = (_OWORD *)((char *)&unk_16E18CAE0 + v3 + 128);
        v11 = v9[7];
        v9 += 8;
        *(v10 - 1) = v11;
        *v10 = *v9;
        v10[1] = v9[1];
        v10[2] = v9[2];
        v10[3] = v9[3];
        v10[4] = v9[4];
        v10[5] = v9[5];
        v10[6] = v9[6];
        v12 = dword_16E18CB30[v3 / 4];
        if ( v12 > 0 )
        {
          v13 = (unsigned int)v12;
          v14 = &dword_16E18CB34[v3 / 4];
          do
          {
            v15 = 0;
            v16 = 244LL * *v14;
            if ( *(int *)((char *)&unk_14B883334 + v16) > 0 )
            {
              v17 = (int *)((char *)&unk_14B883338 + v16);
              do
              {
                if ( *v17 == v7 )
                  *v17 = a1;
                ++v15;
                ++v17;
              }
              while ( v15 < *(_DWORD *)((char *)&unk_14B883334 + v16) );
            }
            ++v14;
            --v13;
          }
          while ( v13 );
        }
        v18 = *(_DWORD *)((char *)&unk_16E18CBB4 + v3);
        if ( v18 > 0 )
        {
          v19 = (unsigned int)v18;
          v20 = (int *)((char *)&unk_16E18CBB8 + v3);
          do
          {
            v21 = *v20;
            v22 = 0;
            v23 = (int *)((char *)&unk_16E6A3D4C + 20840 * v21);
            if ( *v23 > 0 )
            {
              v24 = 5210 * v21;
              do
              {
                if ( dword_16E6A3D50[v24] == v7 )
                  dword_16E6A3D50[v24] = a1;
                ++v22;
                ++v24;
              }
              while ( v22 < *v23 );
            }
            ++v20;
            --v19;
          }
          while ( v19 );
        }
        v25 = (int *)&unk_1909419EC;
        do
        {
          if ( *(v25 - 9) && *v25 == v7 )
            *v25 = a1;
          if ( v25[7157] && v25[7166] == v7 )
            v25[7166] = a1;
          if ( v25[14323] && v25[14332] == v7 )
            v25[14332] = a1;
          if ( v25[21489] )
          {
            if ( v25[21498] == v7 )
              v25[21498] = a1;
          }
          v25 += 28664;
        }
        while ( (__int64)v25 < (__int64)&dword_1910411EC );
      }
    }
  }
}

