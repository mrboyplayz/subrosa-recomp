/* Address: 0x1400e35d0 | Name: sub_1400E35D0 | Size: 717 bytes */
__int64 __fastcall sub_1400E35D0(signed int a1, signed int a2, int a3, int a4)
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
  __int64 v18; // r9
  unsigned int *v19; // r10
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
      v8 = 1760LL * a1;
      v9 = dword_140404A6C[v8 + 278845903];
      if ( v9 != -1 )
      {
        sub_1400CA9B0(a1, v9);
        if ( dword_140404A6C[456202453] )
        {
          ++dword_140404A6C[v4 + 280648157];
          return 1;
        }
        return 1;
      }
      v11 = dword_140404A6C[v8 + 278845902];
      if ( v11 != -1 )
      {
        sub_1400CA7C0(a1, v11, dword_140404A6C[v8 + 278845904]);
        if ( dword_140404A6C[456202453] )
        {
          ++dword_140404A6C[v4 + 280648157];
          return 1;
        }
        return 1;
      }
    }
    else
    {
      v12 = (int *)&dword_140404A6C[7166 * a3 + 280658139 + 10 * a4];
      if ( *v12 < 2 )
      {
        if ( a4 >= 2 )
        {
          v13 = a1;
          if ( a4 == 2 && !dword_140404A6C[1268 * dword_140404A6C[1760 * a1 + 278845898] + 278521289] )
            return 0;
        }
        else
        {
          if ( *v12 >= 1 )
            return 0;
          v13 = a1;
        }
        if ( a4 <= 2 || !dword_140404A6C[1268 * dword_140404A6C[1760 * v13 + 278845898] + 278521289] )
        {
          v14 = 1760 * v13;
          v15 = dword_140404A6C[1760 * v13 + 278845903];
          if ( v15 != -1 )
          {
            sub_1400CA9B0(a1, v15);
            dword_140404A6C[v14 + 278845903] = -1;
          }
          v16 = dword_140404A6C[v14 + 278845902];
          if ( v16 != -1 )
            sub_1400CA7C0(v4, v16, dword_140404A6C[v14 + 278845904]);
          v17 = *v12;
          if ( (int)v17 < 8 )
          {
            dword_140404A6C[v14 + 278845902] = v6;
            dword_140404A6C[v14 + 278845904] = v5;
            dword_140404A6C[7166 * v6 + 280658140 + 10 * v5 + v17] = v4;
            ++*v12;
          }
          if ( dword_140404A6C[456202453] )
          {
            ++dword_140404A6C[v13 + 280648157];
            return 1;
          }
          return 1;
        }
      }
    }
    return 0;
  }
  v18 = 1760LL * a2;
  v19 = &dword_140404A6C[1760 * a1 + 278845906];
  v20 = (int)*v19;
  v21 = dword_140404A6C[v18 + 278845904];
  if ( (int)v20 >= 8 )
    return 0;
  v22 = (int)dword_140404A6C[v18 + 278845898];
  if ( !dword_140404A6C[1268 * v22 + 278521356 + (int)dword_140404A6C[1760 * a1 + 278845898]] )
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
  dword_140404A6C[1760 * a1 + 278845907 + v20] = a2;
  ++*v19;
  v23 = dword_140404A6C[v18 + 278845902];
  dword_140404A6C[v18 + 278845903] = a1;
  dword_140404A6C[v18 + 278845904] = v20;
  if ( v23 != -1 )
    sub_1400CA7C0(v7, v23, v21);
  if ( dword_140404A6C[456202453] )
  {
    ++dword_140404A6C[v4 + 280648157];
    if ( (unsigned int)v7 <= 0x3FF )
      ++dword_140404A6C[v7 + 280648157];
  }
  return 1;
}

