/* Address: 0x140089e50 | Name: sub_140089E50 | Size: 717 bytes */
__int64 __fastcall sub_140089E50(signed int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // edx
  int v11; // edx
  int *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // edx
  int v16; // edx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  int *v19; // r10
  __int64 v20; // r8
  int v21; // r15d
  __int64 v22; // r11
  int v23; // edx

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (unsigned int)a1 > 0x3FF )
    return 0;
  if ( a2 == -1 )
  {
    if ( a3 == -1 )
    {
      v8 = 7040LL * a1;
      v9 = *(_DWORD *)((char *)&unk_19025F0E8 + v8);
      if ( v9 != -1 )
      {
        sub_140073D90(a1, v9);
        if ( dword_163D75B60 )
        {
          ++dword_19093F0C0[v4];
          return 1;
        }
        return 1;
      }
      v11 = *(_DWORD *)((char *)&unk_19025F0E4 + v8);
      if ( v11 != -1 )
      {
        sub_140073BA0(a1, v11, *(_DWORD *)((char *)&unk_19025F0EC + v8));
        if ( dword_163D75B60 )
        {
          ++dword_19093F0C0[v4];
          return 1;
        }
        return 1;
      }
    }
    else
    {
      v12 = &dword_190948498[7166 * a3 + 10 * a4];
      if ( *v12 < 2 )
      {
        if ( a4 >= 2 )
        {
          v13 = a1;
          if ( a4 == 2 && !dword_1901220D0[1268 * dword_19025F0D4[1760 * a1]] )
            return 0;
        }
        else
        {
          if ( *v12 >= 1 )
            return 0;
          v13 = a1;
        }
        if ( a4 <= 2 || !dword_1901220D0[1268 * dword_19025F0D4[1760 * v13]] )
        {
          v14 = 7040 * v13;
          v15 = *((_DWORD *)&unk_19025F0E8 + 1760 * v13);
          if ( v15 != -1 )
          {
            sub_140073D90(a1, v15);
            *(_DWORD *)((char *)&unk_19025F0E8 + v14) = -1;
          }
          v16 = *(_DWORD *)((char *)&unk_19025F0E4 + v14);
          if ( v16 != -1 )
            sub_140073BA0(v4, v16, *(_DWORD *)((char *)&unk_19025F0EC + v14));
          v17 = *v12;
          if ( (int)v17 < 8 )
          {
            *(_DWORD *)((char *)&unk_19025F0E4 + v14) = v6;
            *(_DWORD *)((char *)&unk_19025F0EC + v14) = v5;
            dword_19094849C[7166 * v6 + 10 * v5 + v17] = v4;
            ++*v12;
          }
          if ( dword_163D75B60 )
          {
            ++dword_19093F0C0[v13];
            return 1;
          }
          return 1;
        }
      }
    }
    return 0;
  }
  v18 = 7040LL * a2;
  v19 = &dword_19025F0F4[1760 * a1];
  v20 = *v19;
  v21 = *(_DWORD *)((char *)&unk_19025F0EC + v18);
  if ( (int)v20 >= 8 )
    return 0;
  v22 = dword_19025F0D4[v18 / 4];
  if ( !dword_1901221DC[1268 * v22 + dword_19025F0D4[1760 * a1]] )
    return 0;
  if ( (unsigned int)(v22 - 17) <= 1 )
  {
    if ( (int)v20 >= 5 )
      return 0;
  }
  else if ( (int)v20 > 0 )
  {
    return 0;
  }
  dword_19025F0F8[1760 * a1 + v20] = a2;
  ++*v19;
  v23 = *(_DWORD *)((char *)&unk_19025F0E4 + v18);
  *(_DWORD *)((char *)&unk_19025F0E8 + v18) = a1;
  *(_DWORD *)((char *)&unk_19025F0EC + v18) = v20;
  if ( v23 != -1 )
    sub_140073BA0(v7, v23, v21);
  if ( dword_163D75B60 )
  {
    ++dword_19093F0C0[v4];
    if ( (unsigned int)v7 <= 0x3FF )
      ++dword_19093F0C0[v7];
  }
  return 1;
}

