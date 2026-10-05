/* Address: 0x1400efad0 | Name: sub_1400EFAD0 | Size: 590 bytes */
__int64 __fastcall sub_1400EFAD0(int a1, int a2)
{
  int v2; // edi
  int v3; // r15d
  unsigned int *v4; // rsi
  int v5; // ebx
  unsigned int *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = 0;
  v4 = &dword_140404A6C[278845898];
  v5 = 0;
  v6 = &dword_140404A6C[278845916];
  v7 = a1;
  v18 = 5873LL * a1;
  v19 = 279LL * a2;
  do
  {
    if ( *(v4 - 5) && (unsigned int)sub_14011B960(v6, (unsigned int)v7) )
    {
      if ( *v4 == 18 )
      {
        v3 += sub_1400C3D10(v5);
      }
      else if ( dword_140404A6C[v19 + 283831591 + v18] && v5 == dword_140404A6C[v19 + 283831592 + v18] )
      {
        v2 = 1;
      }
    }
    ++v5;
    v6 += 1760;
    v4 += 1760;
  }
  while ( v5 < 1024 );
  v8 = v7;
  v9 = 0;
  if ( (int)dword_140404A6C[2570 * v8 + 276011072] > 0 )
  {
    v10 = 0;
    v11 = &dword_140404A6C[2570 * v8 + 276011073];
    while ( *v11 != dword_140404A6C[v19 + 283831594 + v18] )
    {
      ++v9;
      ++v10;
      v11 += 6;
      if ( v10 >= (int)dword_140404A6C[2570 * v8 + 276011072] )
        goto LABEL_17;
    }
    v2 = 1;
  }
LABEL_17:
  v12 = v19 * 4 + v18 * 4;
  v13 = dword_140404A6C[v19 + 283831591 + v18];
  if ( v13 <= 1 )
  {
    if ( v2 )
      v16 = *(int *)((char *)&dword_140404A6C[283831604] + v12) / 10;
    else
      v16 = -10;
    v15 = v3 / 10 + v16;
    if ( v2 )
      return v15;
  }
  else
  {
    v14 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
    if ( v13 == 2 )
    {
      v15 = v14 + 50;
      if ( v14 < 0 )
        v15 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
      if ( v2 )
      {
        if ( (int)v15 >= -10 )
          v15 += 10;
        else
          return (unsigned int)-10;
        return v15;
      }
    }
    else
    {
      v15 = v3 / 10 - *(int *)((char *)&dword_140404A6C[283831607] + v12) / 10;
      if ( v2 )
        return (unsigned int)(*(int *)((char *)&dword_140404A6C[283831604] + v12) / 10 + v14);
    }
  }
  if ( v3 > 0 )
    return v15;
  result = 4294957296LL;
  if ( (int)dword_140404A6C[179992853] > *(int *)((char *)&dword_140404A6C[283831605] + v12) )
    return v15;
  return result;
}

