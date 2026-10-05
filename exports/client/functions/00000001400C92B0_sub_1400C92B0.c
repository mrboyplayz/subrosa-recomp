/* Address: 0x1400c92b0 | Name: sub_1400C92B0 | Size: 1381 bytes */
__int64 __fastcall sub_1400C92B0(signed int a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  unsigned int *v3; // r9
  __int64 v4; // r12
  __int64 i; // rdx
  bool v6; // cf
  __int64 v7; // rdx
  unsigned int v8; // r8d
  int v9; // r13d
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // r15
  int v14; // ebx
  int v15; // ecx
  int j; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v26; // [rsp+68h] [rbp+10h]

  v1 = 1760LL * a1;
  v2 = 0;
  v3 = &dword_140404A6C[v1 + 278847461];
  v4 = a1;
  do
  {
    for ( i = 0; i < 32; ++i )
    {
      *((_BYTE *)v3 + i) = 0;
      if ( !v2 || (v6 = (unsigned __int64)v2 < 0x15, v2 == 21) )
      {
        *((_BYTE *)v3 + i) = 1;
        v6 = (unsigned __int64)v2 < 0x15;
      }
      if ( v6 && (!i || i == 30) )
        *((_BYTE *)&dword_140404A6C[1760 * a1 + 278847461 + 8 * v2] + i) = 1;
    }
    ++v2;
    v3 += 8;
  }
  while ( v2 < 24 );
  v7 = 1760LL * a1;
  v8 = dword_140404A6C[v7 + 278847327] & 7;
  if ( v8 )
  {
    LOBYTE(dword_140404A6C[1760 * a1 + 278847479]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847487]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847495]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847503]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847511]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847519]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847527]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847618]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847610]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847602]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847594]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847586]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847578]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847570]) = 1;
  }
  if ( v8 >= 2 )
  {
    BYTE2(dword_140404A6C[1760 * a1 + 278847482]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847490]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847498]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847506]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847514]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847522]) = 1;
    BYTE2(dword_140404A6C[1760 * a1 + 278847530]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847615]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847607]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847599]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847591]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847583]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847575]) = 1;
    LOBYTE(dword_140404A6C[1760 * a1 + 278847567]) = 1;
  }
  if ( v8 >= 3 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847549] + 1) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847550] + 1) = 16843009;
  }
  if ( v8 >= 4 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847555] + 2) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847554] + 2) = 16843009;
  }
  if ( v8 >= 5 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847495] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v7 + 278847496] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v7 + 278847497]) = 1;
  }
  if ( v8 >= 6 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847599] + 3) = 16843009;
    *(unsigned int *)((char *)&dword_140404A6C[v1 + 278847600] + 3) = 16843009;
    HIBYTE(dword_140404A6C[v1 + 278847601]) = 1;
  }
  if ( v8 >= 7 )
  {
    BYTE2(dword_140404A6C[v7 + 278847562]) = 1;
    LOBYTE(dword_140404A6C[v7 + 278847471]) = 1;
  }
  v9 = 0;
  v26 = 0;
  v10 = 220LL * a1;
  do
  {
    if ( v9 )
    {
      v11 = 17;
      if ( v9 == 1 )
      {
        v12 = 1;
      }
      else
      {
        v12 = 11;
        if ( v9 != 2 )
          v11 = 1;
      }
    }
    else
    {
      v11 = 1;
      v12 = 1;
    }
    v13 = 2;
    do
    {
      v14 = v11 + rand() % 12;
      v15 = v12 + rand() % 9;
      for ( j = 0; j < 512; ++j )
      {
        if ( !*((_BYTE *)&dword_140404A6C[8 * v10 + 278847461 + 8 * v15] + v14) )
          break;
        v14 = v11 + rand() % 12;
        v15 = v12 + rand() % 9;
      }
      v17 = v14 + 32 * (220 * v4 + v15);
      if ( !*((_BYTE *)&dword_140404A6C[278847461] + v17) )
      {
        *((_BYTE *)&dword_140404A6C[278847461] + v17) = 4;
        ++dword_140404A6C[1760 * v4 + 278847326];
      }
      --v13;
    }
    while ( v13 );
    v9 = v26 + 1;
    v26 = v9;
  }
  while ( v9 < 4 );
  v18 = 1760 * v4;
  v19 = 880 * v4;
  *(_QWORD *)&dword_140404A6C[v18 + 278847331] = 0;
  dword_140404A6C[2 * v19 + 278847333] = 15;
  dword_140404A6C[2 * v19 + 278847334] = 10;
  v20 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v20;
  v21 = 880 * v4 + v20;
  dword_140404A6C[2 * v21 + 278847333] = 15;
  dword_140404A6C[2 * v21 + 278847334] = 10;
  v22 = ((unsigned __int8)dword_140404A6C[1760 * v4 + 278847331] + 1) & 0x3F;
  dword_140404A6C[v18 + 278847331] = v22;
  v23 = 880 * v4 + v22;
  dword_140404A6C[2 * v23 + 278847333] = 15;
  dword_140404A6C[2 * v23 + 278847334] = 10;
  HIBYTE(dword_140404A6C[v18 + 278847544]) = 3;
  dword_140404A6C[v18 + 278847330] = 0;
  ++dword_140404A6C[v18 + 278847327];
  dword_140404A6C[v18 + 278847328] = 64;
  return sub_1400C8E10(a1);
}

