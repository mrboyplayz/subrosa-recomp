/* Address: 0x140009340 | Name: sub_140009340 | Size: 876 bytes */
void sub_140009340()
{
  signed int v0; // r9d
  int v1; // edx
  signed int v2; // r10d
  unsigned int *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rax
  float v6; // xmm1_4
  __int64 v7; // rcx
  unsigned int v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rcx
  int v13; // esi
  unsigned int *v14; // rdx
  unsigned int *v15; // rbx
  __int64 v16; // r10
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rax
  signed int v20; // eax
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx

  v0 = dword_140404A6C[225426046];
  v1 = 0;
  v2 = 0;
  dword_140404A6C[132793861] = 0;
  if ( (int)dword_140404A6C[225426046] > 0 )
  {
    v3 = &dword_140404A6C[133384714];
    v4 = 0;
    do
    {
      v5 = v4 * 4 + 28LL * (int)dword_140404A6C[v4 + 225426061];
      v6 = *(float *)((char *)&dword_140404A6C[225426057] + v5) + *(float *)((char *)&dword_140404A6C[225426060] + v5);
      v7 = 9LL * v1;
      *(float *)&v8 = (float)(*(float *)((char *)&dword_140404A6C[225426058] + v5)
                            + *(float *)((char *)&dword_140404A6C[225426061] + v5))
                    * 0.5;
      *(float *)&dword_140404A6C[2 * v7 + 132793862] = (float)(*(float *)((char *)&dword_140404A6C[225426059] + v5)
                                                             + *(float *)((char *)&dword_140404A6C[225426056] + v5))
                                                     * 0.5;
      v9 = *(float *)&dword_140404A6C[v4 + 225426063] + *(float *)&dword_140404A6C[v4 + 225426066];
      *(float *)&dword_140404A6C[2 * v7 + 132793863] = v6 * 0.5;
      v10 = *(float *)&dword_140404A6C[v4 + 225426064] + *(float *)&dword_140404A6C[v4 + 225426067];
      dword_140404A6C[2 * v7 + 132793864] = v8;
      v11 = *(float *)&dword_140404A6C[v4 + 225426065] + *(float *)&dword_140404A6C[v4 + 225426068];
      v4 += 396;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793877] = v2;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793878] = 0;
      *(v3 - 1) = dword_140404A6C[132793861];
      dword_140404A6C[18 * dword_140404A6C[132793861]++ + 132793879] = 0;
      v12 = 9LL * (int)dword_140404A6C[132793861];
      *(float *)&dword_140404A6C[2 * v12 + 132793862] = v9 * 0.5;
      *(float *)&dword_140404A6C[2 * v12 + 132793863] = v10 * 0.5;
      *(float *)&dword_140404A6C[2 * v12 + 132793864] = v11 * 0.5;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793877] = v2++;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793878] = 1;
      *v3 = dword_140404A6C[132793861];
      v3 += 2;
      dword_140404A6C[18 * dword_140404A6C[132793861] + 132793879] = 0;
      v1 = ++dword_140404A6C[132793861];
    }
    while ( v2 < v0 );
  }
  v13 = 0;
  if ( v1 > 0 )
  {
    v14 = &dword_140404A6C[132793865];
    v15 = &dword_140404A6C[132793866];
    v16 = 0;
    do
    {
      v17 = (int)v14[12];
      v18 = 0;
      v19 = 396 * v17;
      *v14 = 0;
      if ( v14[13] )
        v20 = dword_140404A6C[v19 + 225426056];
      else
        v20 = dword_140404A6C[v19 + 225426057];
      if ( v20 != -1 )
      {
        v21 = 34LL * v20;
        v22 = 0;
        v23 = (int)dword_140404A6C[v21 + 225391236];
        if ( (_DWORD)v23 != -1 && (_DWORD)v23 != (_DWORD)v17 )
        {
          *v15 = dword_140404A6C[2 * v23 + 133384713];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v24 = (int)dword_140404A6C[v21 + 225391237];
        if ( (_DWORD)v24 != -1 && (_DWORD)v24 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v24 + 133384713];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v25 = (int)dword_140404A6C[v21 + 225391238];
        if ( (_DWORD)v25 != -1 && (_DWORD)v25 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v25 + 133384714];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        v26 = (int)dword_140404A6C[v21 + 225391239];
        if ( (_DWORD)v26 != -1 && (_DWORD)v26 != (_DWORD)v17 )
        {
          dword_140404A6C[v16 + 132793866 + v18] = dword_140404A6C[2 * v26 + 133384714];
          v18 = *v14 + 1;
          *v14 = v18;
          v22 = v18;
        }
        if ( !v18 )
        {
          v14[14] = 1;
          if ( v14[13] )
            *v15 = dword_140404A6C[2 * v17 + 133384713];
          else
            dword_140404A6C[v16 + 132793866 + v22] = dword_140404A6C[2 * v17 + 133384714];
          ++*v14;
        }
      }
      ++v13;
      v16 += 18;
      v15 += 18;
      v14 += 18;
    }
    while ( v13 < (int)dword_140404A6C[132793861] );
  }
}

