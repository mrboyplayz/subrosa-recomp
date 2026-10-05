/* Address: 0x1400a85e0 | Name: sub_1400A85E0 | Size: 440 bytes */
_BOOL8 __fastcall sub_1400A85E0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // r9d
  bool v8; // zf
  __int64 v9; // r10
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // eax

  if ( a2 == 1 )
  {
    v4 = 28664LL * a1;
    v5 = a3 ^ 1LL;
    v6 = v4 + 40LL * a3;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v6);
    v8 = v7 == 0;
    if ( v7 > 0 )
    {
      v9 = v4 + 40 * v5;
      if ( *(int *)((char *)&dword_140404A6C[280658139] + v9) > 0 )
        return dword_140404A6C[1268
                             * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v6)
                                             + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v9)
                                             + 278845898]] != 0;
      v8 = v7 == 0;
    }
    if ( !v8 )
      return 0;
    v11 = v4 + 40 * v5;
    if ( *(int *)((char *)&dword_140404A6C[280658139] + v11) <= 0 )
      return 0;
    v12 = 1760LL * *(int *)((char *)&dword_140404A6C[280658140] + v11);
    return (int)dword_140404A6C[v12 + 278845906] > 0
        && dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[v12 + 278845907] + 278845898]
                         + 278521356
                         + dword_140404A6C[v12 + 278845898]];
  }
  else
  {
    if ( a2 != 2 )
      return 0;
    v13 = 7166LL * a1;
    v14 = v13 * 4 + 40LL * a3;
    v15 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v14);
    if ( v15 <= 0 )
      return !v15 && !dword_140404A6C[14 * a3 + 280658223 + v13] && (int)dword_140404A6C[10 * a4 + 280658159 + v13] > 0;
    return dword_140404A6C[1268
                         * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v14)
                                         + 278845898]
                         + 278521660
                         + a4]
        && (int)dword_140404A6C[10 * a4 + 280658159 + v13] < 2;
  }
}

