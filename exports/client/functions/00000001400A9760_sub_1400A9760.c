/* Address: 0x1400a9760 | Name: sub_1400A9760 | Size: 478 bytes */
__int64 __fastcall sub_1400A9760(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  result = a1;
  v5 = 7166LL * a1;
  if ( !dword_140404A6C[v5 + 280651319] )
  {
    result = (unsigned int)(a4 / -2);
    dword_140404A6C[v5 + 280658300] += result;
  }
  if ( a2 <= 2 )
  {
    dword_140404A6C[v5 + 280658302] -= a4;
    dword_140404A6C[v5 + 280651333] += a4;
    v7 = dword_140404A6C[v5 + 280658300];
    if ( v7 < 100 )
    {
      result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                        - (float)(fminf((float)(100 - v7) * 0.039999999, 1.0) * (float)a4));
      dword_140404A6C[v5 + 280658299] = result;
    }
  }
  if ( a2 == 3 )
  {
    dword_140404A6C[v5 + 280658304] -= a4;
    dword_140404A6C[v5 + 280658299] -= a4;
  }
  else
  {
    v8 = 3 * a4;
    if ( a2 - 4 <= 2 )
      dword_140404A6C[v5 + 280658306] -= v8;
    if ( a2 - 7 <= 2 )
      dword_140404A6C[v5 + 280658308] -= v8;
    if ( a2 - 10 <= 2 )
    {
      dword_140404A6C[v5 + 280658310] += -2 * a4;
      v9 = dword_140404A6C[v5 + 280658300];
      if ( v9 < 100 )
        dword_140404A6C[v5 + 280658299] = (int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                                     - (float)((float)(a4 * (100 - v9)) * 0.0099999998));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      dword_140404A6C[v5 + 280658312] += -2 * a4;
      result = dword_140404A6C[v5 + 280658300];
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)(int)dword_140404A6C[v5 + 280658299]
                                          - (float)((float)(a4 * (100 - result)) * 0.0099999998));
        dword_140404A6C[v5 + 280658299] = result;
      }
    }
  }
  if ( a4 > 0 )
  {
    result = rand() & 0x1F;
    if ( (int)result < a4 )
      dword_140404A6C[v5 + 280658301] = 1;
  }
  if ( (int)dword_140404A6C[v5 + 280651333] > 90 )
    dword_140404A6C[v5 + 280651333] = 90;
  if ( (dword_140404A6C[v5 + 280658299] & 0x80000000) != 0 )
    dword_140404A6C[v5 + 280658299] = 0;
  return result;
}

