/* Address: 0x140080070 | Name: sub_140080070 | Size: 633 bytes */
void __fastcall sub_140080070(int a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r14
  signed int v4; // eax
  __int64 v5; // rdi
  unsigned int *v6; // rsi
  unsigned int v7; // r8d
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  unsigned int *v10; // rdx
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // r10
  unsigned int *v14; // rdx
  signed int v15; // ecx
  __int64 v16; // r9
  unsigned int *v17; // rax
  int v18; // eax
  __int64 v19; // r11
  unsigned int *v20; // r10
  __int64 v21; // r9
  signed int v22; // ecx
  unsigned int *v23; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rax

  if ( a1 >= 0 )
  {
    v2 = dword_140404A6C[73990061];
    if ( a1 < (int)dword_140404A6C[73990061] )
    {
      v3 = 60LL * a1;
      v4 = dword_140404A6C[v3 + 73007041] - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = &dword_140404A6C[60 * a1 + 73007042 + v4];
        do
        {
          sub_14007F370(*v6);
          --v5;
          --v6;
        }
        while ( v5 >= 0 );
      }
      v7 = v2 - 1;
      dword_140404A6C[73990061] = v2 - 1;
      if ( a1 != v2 - 1 )
      {
        v8 = &dword_140404A6C[v3 + 73007021];
        v9 = &dword_140404A6C[60 * v7 + 73007021];
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *((_OWORD *)v8 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v8 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v8 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v8 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v8 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v8 + 6) = *((_OWORD *)v9 + 6);
        v10 = &dword_140404A6C[v3 + 73007053];
        v11 = *((_OWORD *)v9 + 7);
        v9 += 32;
        *((_OWORD *)v10 - 1) = v11;
        *(_OWORD *)v10 = *(_OWORD *)v9;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v9 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v9 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v9 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v9 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v9 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v9 + 6);
        v12 = dword_140404A6C[v3 + 73007041];
        if ( v12 > 0 )
        {
          v13 = (unsigned int)v12;
          v14 = &dword_140404A6C[v3 + 73007042];
          do
          {
            v15 = 0;
            v16 = 61LL * (int)*v14;
            if ( (int)dword_140404A6C[v16 + 486149258] > 0 )
            {
              v17 = &dword_140404A6C[v16 + 486149259];
              do
              {
                if ( *v17 == v7 )
                  *v17 = a1;
                ++v15;
                ++v17;
              }
              while ( v15 < (int)dword_140404A6C[v16 + 486149258] );
            }
            ++v14;
            --v13;
          }
          while ( v13 );
        }
        v18 = dword_140404A6C[v3 + 73007074];
        if ( v18 > 0 )
        {
          v19 = (unsigned int)v18;
          v20 = &dword_140404A6C[v3 + 73007075];
          do
          {
            v21 = (int)*v20;
            v22 = 0;
            v23 = &dword_140404A6C[5210 * v21 + 129716768];
            if ( (int)*v23 > 0 )
            {
              v24 = 5210 * v21;
              do
              {
                if ( dword_140404A6C[v24 + 129716769] == v7 )
                  dword_140404A6C[v24 + 129716769] = a1;
                ++v22;
                ++v24;
              }
              while ( v22 < (int)*v23 );
            }
            ++v20;
            --v19;
          }
          while ( v19 );
        }
        v25 = &dword_140404A6C[280651312];
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
        while ( (__int64)v25 < (__int64)&dword_140404A6C[282485808] );
      }
    }
  }
}

