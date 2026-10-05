/* Address: 0x1400a3770 | Name: sub_1400A3770 | Size: 497 bytes */
void __fastcall sub_1400A3770(int a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // r10d
  __int64 v6; // rdx
  char v7; // al
  unsigned __int8 v8; // cl
  int v9; // r8d
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  int v12; // r11d
  __int64 v13; // rcx
  char v14; // al

  if ( dword_140404A6C[283831312] == 4 && (v1 = 3597LL * a1, dword_140404A6C[v1 + 71856266]) )
  {
    if ( dword_140404A6C[v1 + 71856342] == 1
      && HIBYTE(dword_140404A6C[284024774])
      && !HIBYTE(dword_140404A6C[284024646]) )
    {
      v2 = dword_140404A6C[284021984] ^ 1;
      dword_140404A6C[284021984] ^= 1u;
    }
    else
    {
      v2 = dword_140404A6C[284021984];
    }
    if ( v2 )
    {
      v3 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v3 = -1;
      dword_140404A6C[284021982] = v3;
      if ( LOBYTE(dword_140404A6C[284024776]) )
      {
        if ( !LOBYTE(dword_140404A6C[284024648]) )
        {
          if ( v3 >= 0 )
          {
            LOBYTE(v4) = v3 + 1;
            if ( BYTE1(dword_140404A6C[284024821]) )
              LOBYTE(v4) = v3 - 1;
          }
          else
          {
            LOBYTE(v4) = 0;
            LOBYTE(v3) = -1;
          }
          v4 = (unsigned __int8)v4;
          v5 = (unsigned __int8)v3;
          while ( 1 )
          {
            v6 = 7166LL * v4;
            if ( dword_140404A6C[v6 + 280651303] )
            {
              if ( (int)dword_140404A6C[v6 + 280651318] > 0 )
                break;
            }
            v7 = 1;
            if ( BYTE1(dword_140404A6C[284024821]) )
              v7 = -1;
            v4 = (unsigned __int8)(v4 + v7);
            if ( v4 == v5 )
              return;
          }
          dword_140404A6C[284021982] = v4;
        }
      }
    }
  }
  else
  {
    v8 = 0;
    dword_140404A6C[284021984] = 0;
    if ( (dword_140404A6C[283831312] == 3 || dword_140404A6C[283831312] - 5 <= 2)
      && !dword_140404A6C[284021983]
      && !dword_140404A6C[280648133] )
    {
      v9 = dword_140404A6C[284021982];
      if ( BYTE2(dword_140404A6C[284024772]) )
        v9 = -1;
      if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
      {
        v10 = v9;
        if ( v9 >= 0 )
        {
          v8 = v9 + 1;
          if ( BYTE1(dword_140404A6C[284024821]) )
            v8 = v9 - 1;
        }
        else
        {
          v10 = -1;
        }
        v11 = v8;
        v12 = v10;
        while ( 1 )
        {
          v13 = 7166LL * v11;
          if ( dword_140404A6C[v13 + 280651303] )
          {
            if ( (int)dword_140404A6C[v13 + 280651318] > 0 && dword_140404A6C[v13 + 280658438] <= 2 )
              break;
          }
          v14 = 1;
          if ( BYTE1(dword_140404A6C[284024821]) )
            v14 = -1;
          v11 = (unsigned __int8)(v11 + v14);
          if ( v11 == v12 )
            goto LABEL_46;
        }
        v9 = v11;
      }
LABEL_46:
      if ( dword_140404A6C[283831448] != 2 )
        v9 = -1;
      dword_140404A6C[284021982] = v9;
    }
  }
}

