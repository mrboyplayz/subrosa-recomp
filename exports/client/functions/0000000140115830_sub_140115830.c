/* Address: 0x140115830 | Name: sub_140115830 | Size: 686 bytes */
void sub_140115830()
{
  signed int v0; // edi
  int v1; // ebx
  __int64 v2; // r12
  unsigned int *v3; // r15
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rsi
  unsigned int *v7; // r14
  unsigned int *v8; // rax
  __int128 v9; // xmm1
  int v10; // eax
  int *v11; // r8
  __int64 v12; // r9
  signed int v13; // ecx
  __int64 v14; // rdx
  unsigned int *v15; // rax
  int v16; // eax
  int *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  signed int v20; // ecx
  unsigned int *v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rax

  v0 = dword_140404A6C[73990061];
  v1 = 0;
  if ( (int)dword_140404A6C[73990061] > 0 )
  {
    v2 = 0;
    v3 = &dword_140404A6C[73007022];
    while ( 1 )
    {
      v4 = *v3;
      if ( (int)*v3 < 0x10000 )
        *v3 = --v4;
      if ( v4 > 0 )
      {
        ++v1;
        v2 += 60;
        v3 += 60;
      }
      else if ( v1 >= 0 )
      {
        if ( v1 >= v0 )
          goto LABEL_45;
        v5 = v3[19] - 1;
        v6 = v5;
        if ( v5 >= 0 )
        {
          v7 = &dword_140404A6C[v2 + 73007042 + v5];
          do
          {
            sub_14007F370(*v7);
            --v6;
            --v7;
          }
          while ( v6 >= 0 );
        }
        if ( v1 == --v0 )
        {
LABEL_45:
          dword_140404A6C[73990061] = v0;
          return;
        }
        v8 = &dword_140404A6C[60 * v0 + 73007021];
        *(_OWORD *)(v3 - 1) = *(_OWORD *)v8;
        *(_OWORD *)(v3 + 3) = *((_OWORD *)v8 + 1);
        *(_OWORD *)(v3 + 7) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(v3 + 11) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(v3 + 15) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(v3 + 19) = *((_OWORD *)v8 + 5);
        *(_OWORD *)(v3 + 23) = *((_OWORD *)v8 + 6);
        v9 = *((_OWORD *)v8 + 7);
        v8 += 32;
        *(_OWORD *)(v3 + 27) = v9;
        *(_OWORD *)(v3 + 31) = *(_OWORD *)v8;
        *(_OWORD *)(v3 + 35) = *((_OWORD *)v8 + 1);
        *(_OWORD *)(v3 + 39) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(v3 + 43) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(v3 + 47) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(v3 + 51) = *((_OWORD *)v8 + 5);
        *(_OWORD *)(v3 + 55) = *((_OWORD *)v8 + 6);
        v10 = v3[19];
        if ( v10 > 0 )
        {
          v11 = (int *)(v3 + 20);
          v12 = (unsigned int)v10;
          do
          {
            v13 = 0;
            v14 = 61LL * *v11;
            if ( (int)dword_140404A6C[v14 + 486149258] > 0 )
            {
              v15 = &dword_140404A6C[v14 + 486149259];
              do
              {
                if ( *v15 == v0 )
                  *v15 = v1;
                ++v13;
                ++v15;
              }
              while ( v13 < (int)dword_140404A6C[v14 + 486149258] );
            }
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        v16 = v3[52];
        if ( v16 > 0 )
        {
          v17 = (int *)(v3 + 53);
          v18 = (unsigned int)v16;
          do
          {
            v19 = *v17;
            v20 = 0;
            v21 = &dword_140404A6C[5210 * v19 + 129716768];
            if ( (int)*v21 > 0 )
            {
              v22 = 5210 * v19;
              do
              {
                if ( dword_140404A6C[v22 + 129716769] == v0 )
                  dword_140404A6C[v22 + 129716769] = v1;
                ++v20;
                ++v22;
              }
              while ( v20 < (int)*v21 );
            }
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v23 = &dword_140404A6C[280651312];
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
        while ( (__int64)v23 < (__int64)&dword_140404A6C[282485808] );
      }
      if ( v1 >= v0 )
        goto LABEL_45;
    }
  }
}

