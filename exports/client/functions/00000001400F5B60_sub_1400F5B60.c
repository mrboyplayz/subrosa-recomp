/* Address: 0x1400f5b60 | Name: sub_1400F5B60 | Size: 1231 bytes */
__int64 __fastcall sub_1400F5B60(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // r8d
  unsigned int *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // r8
  _BOOL8 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  result = dword_140404A6C[283831448];
  v2 = 0;
  if ( dword_140404A6C[283831448] != 1 )
  {
    if ( dword_140404A6C[283831448] != 2 )
      return result;
    v9 = dword_140404A6C[283831450];
    goto LABEL_27;
  }
  v3 = 1;
  v4 = &dword_140404A6C[71859139];
  v5 = 0;
  v6 = 256;
  do
  {
    if ( *(v4 - 2886) && !*v4 )
    {
      if ( *(v4 - 2853) <= 2 )
        ++v5;
      if ( !*(v4 - 2868) )
        v3 = 0;
    }
    v4 += 3597;
    --v6;
  }
  while ( v6 );
  result = 0;
  v7 = --dword_140404A6C[283831450];
  if ( v5 )
    result = v3;
  if ( !(_DWORD)result )
  {
    if ( v7 < 1200 )
      dword_140404A6C[283831450] = 1200;
    return result;
  }
  if ( v7 > 60 )
  {
    dword_140404A6C[283831450] = 60;
    return result;
  }
  if ( v7 <= 0 )
  {
    v8 = &dword_140404A6C[71856286];
    do
    {
      if ( *(v8 - 33) )
        *v8 = 0;
      if ( v8[3564] )
        v8[3597] = 0;
      v8 += 7194;
    }
    while ( (__int64)v8 < (__int64)&dword_140404A6C[72777118] );
    sub_14005D920();
    v9 = 108000;
    dword_140404A6C[283831448] = 2;
LABEL_27:
    v10 = v9 - 1;
    v11 = 1;
    dword_140404A6C[283831450] = v10;
    if ( dword_140404A6C[284024360] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024360];
      v12 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v12 != -1 )
      {
        a1 = 7166 * v12;
        v11 = (int)dword_140404A6C[7166 * v12 + 280651318] <= 0;
      }
    }
    if ( dword_140404A6C[284024361] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024361];
      v13 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v13 != -1 )
      {
        a1 = 7166 * v13;
        if ( (int)dword_140404A6C[7166 * v13 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024362] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024362];
      v14 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v14 != -1 )
      {
        a1 = 7166 * v14;
        if ( (int)dword_140404A6C[7166 * v14 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024363] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024363];
      v15 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v15 != -1 )
      {
        a1 = 7166 * v15;
        if ( (int)dword_140404A6C[7166 * v15 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024364] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024364];
      v16 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v16 != -1 )
      {
        a1 = 7166 * v16;
        if ( (int)dword_140404A6C[7166 * v16 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024365] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024365];
      v17 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v17 != -1 )
      {
        a1 = 7166 * v17;
        if ( (int)dword_140404A6C[7166 * v17 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024366] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024366];
      v18 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v18 != -1 )
      {
        a1 = 7166 * v18;
        if ( (int)dword_140404A6C[7166 * v18 + 280651318] > 0 )
          v11 = 0;
      }
    }
    if ( dword_140404A6C[284024367] == -1
      || (a1 = 3597LL * (int)dword_140404A6C[284024367], v19 = (int)dword_140404A6C[a1 + 71856292], (_DWORD)v19 == -1)
      || (a1 = 7166 * v19, (int)dword_140404A6C[7166 * v19 + 280651318] <= 0) )
    {
      if ( v11 && (int)v10 > 300 )
      {
        v10 = 300;
        dword_140404A6C[284024376] = 1;
        dword_140404A6C[283831450] = 300;
      }
    }
    if ( dword_140404A6C[284024368] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024368];
      v20 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v20 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v20;
        if ( (int)dword_140404A6C[7166 * v20 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024369] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024369];
      v21 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v21 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v21;
        if ( (int)dword_140404A6C[7166 * v21 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024370] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024370];
      v22 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v22 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v22;
        if ( (int)dword_140404A6C[7166 * v22 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024371] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024371];
      v23 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v23 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v23;
        if ( (int)dword_140404A6C[7166 * v23 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024372] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024372];
      v24 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v24 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v24;
        if ( (int)dword_140404A6C[7166 * v24 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024373] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024373];
      v25 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v25 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v25;
        if ( (int)dword_140404A6C[7166 * v25 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    if ( dword_140404A6C[284024374] != -1 )
    {
      a1 = 3597LL * (int)dword_140404A6C[284024374];
      v26 = (int)dword_140404A6C[a1 + 71856292];
      if ( (_DWORD)v26 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v26;
        if ( (int)dword_140404A6C[7166 * v26 + 280651318] <= 0 )
          v2 = 1;
      }
    }
    result = (int)dword_140404A6C[284024375];
    if ( (dword_140404A6C[284024375] != -1
       && ((a1 = 3597LL * (int)dword_140404A6C[284024375],
            result = (int)dword_140404A6C[a1 + 71856292],
            (_DWORD)result == -1)
        || (a1 = 7166 * result, (int)dword_140404A6C[7166 * result + 280651318] <= 0))
       || v2)
      && (int)v10 > 300 )
    {
      dword_140404A6C[283831450] = 300;
      dword_140404A6C[284024376] = 2;
    }
    else if ( (int)v10 <= 0 )
    {
      return sub_140127910(a1 * 4, v11, v10);
    }
  }
  return result;
}

