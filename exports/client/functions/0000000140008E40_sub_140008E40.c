/* Address: 0x140008e40 | Name: sub_140008E40 | Size: 627 bytes */
__int64 __fastcall sub_140008E40(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  int v6; // ecx
  signed int v7; // r10d
  unsigned int *v8; // rax
  __int64 result; // rax
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // r11
  int v13; // ebx
  int v14; // r9d
  int v15; // r10d
  unsigned int *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int v24; // edi
  unsigned int *v25; // r8
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  int v29; // edx

  v5 = a1;
  v6 = 0;
  v7 = dword_140404A6C[2 * a2 + 133384713 + a3];
  dword_140404A6C[133383686] = v7;
  dword_140404A6C[133383687] = dword_140404A6C[2 * a4 + 133384713 + a5];
  if ( (int)dword_140404A6C[132793861] > 0 )
  {
    v8 = &dword_140404A6C[132793875];
    do
    {
      *(_QWORD *)(v8 - 1) = 0;
      v8 += 18;
      ++v6;
    }
    while ( v6 < (int)dword_140404A6C[132793861] );
    v7 = dword_140404A6C[133383686];
  }
  result = v7;
  v10 = 0;
  dword_140404A6C[18 * v7 + 132793874] = 1;
  v11 = 0;
  dword_140404A6C[133383688] = 0;
  do
  {
    if ( v11 )
      break;
    result = sub_14012C1F0();
    v11 = dword_140404A6C[133383688];
    ++v10;
  }
  while ( v10 < 4096 );
  v12 = 383 * v5;
  v13 = v11 - 1;
  *(_QWORD *)&dword_140404A6C[v12 + 132400670] = 0;
  dword_140404A6C[v12 + 132400676] = 0;
  if ( (int)(v11 - 1) >= 0 )
  {
    v14 = a5;
    v15 = a5;
    v16 = &dword_140404A6C[v13 + 133383689];
    do
    {
      v17 = 9LL * (int)*v16;
      v18 = (int)dword_140404A6C[18 * *v16 + 132793877];
      v19 = dword_140404A6C[18 * *v16 + 132793878];
      dword_140404A6C[5 * (int)dword_140404A6C[v12 + 132400671] + 132400672 + v12] = v18;
      dword_140404A6C[5 * (int)dword_140404A6C[v12 + 132400671] + 132400674 + v12] = v19;
      v20 = (int)dword_140404A6C[v12 + 132400671];
      v21 = 396 * v18;
      result = (unsigned int)(v20 + 1);
      dword_140404A6C[v12 + 132400671] = result;
      if ( v19 )
        v22 = dword_140404A6C[v21 + 225426056];
      else
        v22 = dword_140404A6C[v21 + 225426057];
      if ( v13 )
      {
        v23 = 0;
        v24 = dword_140404A6C[2 * v17 + 132793877];
        v25 = &dword_140404A6C[34 * v22 + 225391236];
        do
        {
          v26 = *v25++ == v24;
          v27 = v23;
          if ( !v26 )
            v27 = v14;
          v14 = v27;
          v28 = v23;
          if ( *(v25 - 1) != dword_140404A6C[18 * *(v16 - 1) + 132793877] )
            v28 = v15;
          ++v23;
          v15 = v28;
        }
        while ( v23 < 4 );
        v29 = v14 - v28;
        if ( v14 - v28 >= -1 )
        {
          if ( v29 > 1 )
            v29 -= 4;
        }
        else
        {
          v29 += 4;
        }
        result = v12 * 4 + 20 * v20;
        *(unsigned int *)((char *)&dword_140404A6C[132400681] + result) = 0;
        if ( v29 == -1 )
        {
          result = v12 * 4 + 20LL * (int)dword_140404A6C[v12 + 132400671];
          *(unsigned int *)((char *)&dword_140404A6C[132400676] + result) = -1;
        }
        else if ( v29 == 1 )
        {
          result = v12 * 4 + 20LL * (int)dword_140404A6C[v12 + 132400671];
          *(unsigned int *)((char *)&dword_140404A6C[132400676] + result) = 1;
        }
      }
      --v16;
      --v13;
    }
    while ( v13 >= 0 );
  }
  return result;
}

