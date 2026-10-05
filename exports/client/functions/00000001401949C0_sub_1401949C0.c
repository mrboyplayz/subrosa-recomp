/* Address: 0x1401949c0 | Name: sub_1401949C0 | Size: 587 bytes */
__int64 __fastcall sub_1401949C0(int a1)
{
  __int64 v1; // r10
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD *v7; // r11
  unsigned int *v8; // r11
  unsigned int *v9; // r11
  unsigned int *v10; // r11
  unsigned int *v11; // r11
  unsigned int *v12; // r11
  signed int v13; // r10d

  v1 = 5873LL * a1;
  v2 = 0;
  v3 = (int)dword_140404A6C[v1 + 283831510];
  if ( (_DWORD)v3 != -1 )
  {
    if ( (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100 >= 0 )
      v2 = (int)(dword_140404A6C[3597 * v3 + 71856275] - 1000) / 100;
    if ( v2 > 1000 )
      v2 = 1000;
  }
  v4 = dword_140404A6C[v1 + 283831506];
  if ( v4 >= 10 )
    result = 100;
  else
    result = (unsigned int)(10 * v4);
  v6 = result + v2;
  if ( !dword_140404A6C[180001071] )
  {
    result = 2156LL * a1;
    v7 = (unsigned int *)((char *)&dword_140404A6C[180001074] + result);
    if ( *(int *)((char *)&dword_140404A6C[180001074] + result) > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180001072] * v6) >> 32) >> 31;
      *v7 = dword_140404A6C[180001072] + (signed int)(dword_140404A6C[180001072] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180035724] )
  {
    result = (__int64)&dword_140404A6C[180035727];
    v8 = &dword_140404A6C[539 * a1 + 180035727];
    if ( (int)*v8 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180035725] * v6) >> 32) >> 31;
      *v8 = dword_140404A6C[180035725] + (signed int)(dword_140404A6C[180035725] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180070377] )
  {
    result = (__int64)&dword_140404A6C[180070380];
    v9 = &dword_140404A6C[539 * a1 + 180070380];
    if ( (int)*v9 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180070378] * v6) >> 32) >> 31;
      *v9 = dword_140404A6C[180070378] + (signed int)(dword_140404A6C[180070378] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180105030] )
  {
    result = (__int64)&dword_140404A6C[180105033];
    v10 = &dword_140404A6C[539 * a1 + 180105033];
    if ( (int)*v10 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180105031] * v6) >> 32) >> 31;
      *v10 = dword_140404A6C[180105031] + (signed int)(dword_140404A6C[180105031] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180139683] )
  {
    result = (__int64)&dword_140404A6C[180139686];
    v11 = &dword_140404A6C[539 * a1 + 180139686];
    if ( (int)*v11 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180139684] * v6) >> 32) >> 31;
      *v11 = dword_140404A6C[180139684] + (signed int)(dword_140404A6C[180139684] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180174336] )
  {
    result = (__int64)&dword_140404A6C[180174339];
    v12 = &dword_140404A6C[539 * a1 + 180174339];
    if ( (int)*v12 > 0 )
    {
      result = (unsigned int)((unsigned __int64)(1374389535LL * dword_140404A6C[180174337] * v6) >> 32) >> 31;
      *v12 = dword_140404A6C[180174337] + (signed int)(dword_140404A6C[180174337] * v6) / 100;
    }
  }
  if ( !dword_140404A6C[180208989] && (int)dword_140404A6C[539 * a1 + 180208992] > 0 )
  {
    v13 = dword_140404A6C[180208990] * v6;
    dword_140404A6C[539 * a1 + 180208992] = dword_140404A6C[180208990] + v13 / 100;
    return (unsigned int)((unsigned __int64)(1374389535LL * v13) >> 32) >> 31;
  }
  return result;
}

