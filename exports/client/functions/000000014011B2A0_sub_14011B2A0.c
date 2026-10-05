/* Address: 0x14011b2a0 | Name: sub_14011B2A0 | Size: 1354 bytes */
void sub_14011B2A0()
{
  unsigned int v0; // r9d
  unsigned int *v1; // r14
  int v2; // ebx
  unsigned int *v3; // r12
  unsigned int v4; // r11d
  unsigned int v5; // r13d
  __int64 v6; // r10
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int *v15; // r15
  int v16; // eax
  unsigned int *v17; // rbp
  int v18; // eax
  unsigned int *v19; // r8
  unsigned int *v20; // r11
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // r9
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // [rsp+30h] [rbp+8h]

  v0 = dword_140404A6C[284022502];
  v1 = &dword_140404A6C[71856339];
  v2 = dword_140404A6C[283831451];
  v3 = &dword_140404A6C[71856302];
  v4 = dword_140404A6C[283831441];
  v5 = dword_140404A6C[283831312];
  v6 = 256;
  v7 = 0;
  v36 = 256;
  do
  {
    if ( !*(v1 - 86) )
      goto LABEL_48;
    v8 = *(v1 - 48);
    if ( v8 > 0 )
      *(v1 - 48) = v8 - 1;
    v9 = (int)*(v1 - 47);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      v11 = (int)*(v1 - 47);
      v12 = dword_140404A6C[7166 * v9 + 280651313] == -1;
      dword_140404A6C[7166 * v9 + 280651307] = *(v1 - 51);
      if ( !v12 )
        goto LABEL_13;
      if ( *v1 == 1 )
      {
        v13 = 7166 * v11;
        dword_140404A6C[v13 + 280651377] = *(v3 - 9);
        dword_140404A6C[v13 + 280651378] = *(v3 - 8);
        dword_140404A6C[v13 + 280651379] = *(v3 - 7);
        dword_140404A6C[v13 + 280651380] = *(v3 - 6);
        dword_140404A6C[v13 + 280651381] = *(v3 - 5);
        dword_140404A6C[v13 + 280651382] = *(v3 - 4);
        dword_140404A6C[v13 + 280651383] = *(v3 - 3);
        dword_140404A6C[v13 + 280651384] = *(v3 - 2);
        dword_140404A6C[v13 + 280651385] = *(v3 - 1);
        dword_140404A6C[v13 + 280651386] = *v3;
        dword_140404A6C[v13 + 280651387] = v3[1];
        dword_140404A6C[v13 + 280651388] = v3[2];
        dword_140404A6C[v13 + 280651389] = v3[3];
        dword_140404A6C[v13 + 280651390] = v3[4];
        dword_140404A6C[v13 + 280651391] = v3[5];
        dword_140404A6C[v13 + 280651392] = v3[6];
        dword_140404A6C[v13 + 280651393] = v3[7];
        dword_140404A6C[v13 + 280651394] = v3[8];
        dword_140404A6C[v13 + 280651395] = v3[9];
        dword_140404A6C[v13 + 280651396] = v3[10];
        if ( v5 == 7 && v2 < (int)(60 * v0) )
        {
          dword_140404A6C[v10 + 280651378] = 0;
          dword_140404A6C[v10 + 280651380] = 0;
        }
      }
      else
      {
        dword_140404A6C[v10 + 280651381] = dword_140404A6C[v10 + 280651341];
        dword_140404A6C[v10 + 280651382] = dword_140404A6C[v10 + 280651342];
      }
      if ( dword_140404A6C[v10 + 280651313] != -1 )
      {
LABEL_13:
        if ( *v1 - 2 <= 1 )
        {
          v14 = 7166 * v11;
          dword_140404A6C[v14 + 280651377] = *(v3 - 9);
          dword_140404A6C[v14 + 280651378] = *(v3 - 8);
          dword_140404A6C[v14 + 280651379] = *(v3 - 7);
          dword_140404A6C[v14 + 280651380] = *(v3 - 6);
          dword_140404A6C[v14 + 280651381] = *(v3 - 5);
          dword_140404A6C[v14 + 280651382] = *(v3 - 4);
          dword_140404A6C[v14 + 280651383] = *(v3 - 3);
          dword_140404A6C[v14 + 280651384] = *(v3 - 2);
        }
      }
      dword_140404A6C[v10 + 280651436] = *(v1 - 14);
      v15 = v1 + 1376;
      dword_140404A6C[v10 + 280651327] = *(v1 - 9);
      v16 = dword_140404A6C[v10 + 280651318];
      if ( v16 < 0 )
        v16 = 0;
      v17 = &dword_140404A6C[v10 + 280658140];
      v1[1372] = v16;
      do
      {
        v18 = *(v17 - 1);
        *(v15 - 1) = v18;
        if ( v18 > 0 )
        {
          v19 = v15;
          v20 = v17;
          v21 = (unsigned int)v18;
          do
          {
            v22 = 1760LL * (int)*v20;
            v23 = (int)dword_140404A6C[v22 + 278845898];
            *v19 = v23;
            v24 = v23;
            if ( (unsigned int)v7 < 2 )
            {
              if ( dword_140404A6C[1268 * v23 + 278521289] )
              {
                if ( (int)dword_140404A6C[v22 + 278845906] > 0 )
                {
                  v24 = v23 | 0x100;
                  v25 = 1760LL * (int)dword_140404A6C[v22 + 278845907];
                  *v19 = v23 | 0x100;
                  if ( !dword_140404A6C[v25 + 278845974] )
                  {
                    v24 = v23 | 0x300;
                    *v19 = v23 | 0x300;
                  }
                }
              }
              if ( (_DWORD)v23 == 16 && (int)dword_140404A6C[v22 + 278845906] > 0 )
              {
                v24 |= 0x100u;
                *v19 = v24;
              }
              if ( (int)dword_140404A6C[1268 * v23 + 278521294] > 0 )
                *v19 = v24 | (dword_140404A6C[v22 + 278845974] << 8);
            }
            ++v20;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        ++v7;
        v15 += 9;
        v17 += 10;
      }
      while ( v7 < 7 );
      v5 = dword_140404A6C[283831312];
      v6 = v36;
      v7 = 0;
      v4 = dword_140404A6C[283831441];
      v2 = dword_140404A6C[283831451];
    }
    if ( v5 == 4 )
    {
      v26 = (int)*(v1 - 53);
      if ( (unsigned int)v26 > 5 )
      {
        v27 = 0;
        v28 = 0;
      }
      else
      {
        v27 = dword_140404A6C[5 * v26 + 188872238];
        v28 = dword_140404A6C[5 * v26 + 188872237];
      }
      *(v1 - 66) = v28;
      *(v1 - 65) = v27;
      v29 = (int)*(v1 - 71);
      if ( (_DWORD)v29 == -1 )
        goto LABEL_47;
      v30 = *(v1 - 67);
      if ( (unsigned int)v26 <= 5 )
        v30 = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v26 + 335047062] * 0.94999999)
                                 * (float)(int)*(v1 - 51))
                         + (float)v30);
      v31 = 28 * v29;
      dword_140404A6C[v31 + 134050374] = v30;
      dword_140404A6C[v31 + 134050375] = *(v1 - 64);
      dword_140404A6C[v31 + 134050376] = *(v1 - 63);
      dword_140404A6C[v31 + 134050377] = *(v1 - 48);
    }
    if ( v5 == 3 && v4 != 1 )
    {
      v32 = (int)*(v1 - 71);
      if ( (_DWORD)v32 != -1 )
      {
        v33 = (int)*(v1 - 53);
        v34 = *(v1 - 67);
        v35 = 28 * v32;
        if ( (_DWORD)v33 == -1 )
          dword_140404A6C[v35 + 134050374] = v34;
        else
          dword_140404A6C[v35 + 134050374] = (int)(float)((float)((float)(*(float *)&dword_140404A6C[6 * v33 + 335047062]
                                                                        * 0.98000002)
                                                                * (float)(int)*(v1 - 51))
                                                        + (float)v34);
      }
    }
LABEL_47:
    v0 = dword_140404A6C[284022502];
    *(v1 - 13) = *(v1 - 14);
LABEL_48:
    v3 += 3597;
    v1 += 3597;
    v36 = --v6;
  }
  while ( v6 );
}

