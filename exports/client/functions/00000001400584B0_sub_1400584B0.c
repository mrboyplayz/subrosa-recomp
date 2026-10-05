/* Address: 0x1400584b0 | Name: sub_1400584B0 | Size: 1088 bytes */
unsigned int *__fastcall sub_1400584B0(signed int a1, __int64 a2)
{
  __int64 v3; // r10
  int v4; // eax
  int *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ebx
  unsigned int *result; // rax
  int v12; // ebx
  signed int v13; // edi
  unsigned int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1

  v3 = 1760LL * a1;
  v4 = 1;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278845988];
  v6 = 2;
  v7 = 4;
  do
  {
    if ( (v4 & dword_140404A6C[v3 + 278845985 + ((v6 - 2) >> 5)]) != 0 )
      dword_140404A6C[39 * *(v5 - 1) + 290382645] = 0;
    if ( (__ROL4__(v4, 1) & dword_140404A6C[v3 + 278845985 + ((v6 - 1) >> 5)]) != 0 )
      dword_140404A6C[39 * *v5 + 290382645] = 0;
    if ( (__ROL4__(v4, 2) & dword_140404A6C[v3 + 278845985 + (v6 >> 5)]) != 0 )
      dword_140404A6C[39 * v5[1] + 290382645] = 0;
    if ( (__ROL4__(v4, 3) & dword_140404A6C[v3 + 278845985 + ((v6 + 1) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[2] + 290382645] = 0;
    if ( (__ROL4__(v4, 4) & dword_140404A6C[v3 + 278845985 + ((v6 + 2) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[3] + 290382645] = 0;
    if ( (__ROL4__(v4, 5) & dword_140404A6C[v3 + 278845985 + ((v6 + 3) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[4] + 290382645] = 0;
    if ( (__ROL4__(v4, 6) & dword_140404A6C[v3 + 278845985 + ((v6 + 4) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[5] + 290382645] = 0;
    if ( (__ROL4__(v4, 7) & dword_140404A6C[v3 + 278845985 + ((v6 + 5) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[6] + 290382645] = 0;
    if ( (__ROL4__(v4, 8) & dword_140404A6C[v3 + 278845985 + ((v6 + 6) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[7] + 290382645] = 0;
    if ( (__ROL4__(v4, 9) & dword_140404A6C[v3 + 278845985 + ((v6 + 7) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[8] + 290382645] = 0;
    if ( (__ROL4__(v4, 10) & dword_140404A6C[v3 + 278845985 + ((v6 + 8) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[9] + 290382645] = 0;
    if ( (__ROL4__(v4, 11) & dword_140404A6C[v3 + 278845985 + ((v6 + 9) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[10] + 290382645] = 0;
    if ( (__ROL4__(v4, 12) & dword_140404A6C[v3 + 278845985 + ((v6 + 10) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[11] + 290382645] = 0;
    if ( (__ROL4__(v4, 13) & dword_140404A6C[v3 + 278845985 + ((v6 + 11) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[12] + 290382645] = 0;
    if ( (__ROL4__(v4, 14) & dword_140404A6C[v3 + 278845985 + ((v6 + 12) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[13] + 290382645] = 0;
    if ( (__ROL4__(v4, 15) & dword_140404A6C[v3 + 278845985 + ((v6 + 13) >> 5)]) != 0 )
      dword_140404A6C[39 * v5[14] + 290382645] = 0;
    v6 += 16;
    v4 = __ROL4__(v4, 16);
    v5 += 16;
    --v7;
  }
  while ( v7 );
  v8 = 1760LL * a1;
  v9 = -1;
  *(_QWORD *)&dword_140404A6C[v8 + 278845985] = 0;
  do
    ++v9;
  while ( *(_BYTE *)(a2 + v9) );
  v10 = v9 + 1;
  if ( v10 > 1023 )
    v10 = 1023;
  result = (unsigned int *)MEMORY[0x1401FC920](&dword_140404A6C[v8 + 278846111], a2);
  v12 = v10 >> 6;
  v13 = 0;
  HIBYTE(dword_140404A6C[v8 + 278846366]) = 0;
  if ( v12 >= 0 )
  {
    v14 = dword_140404A6C[283831474];
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 0;
      result = &dword_140404A6C[290382645];
      while ( *result )
      {
        v16 = (unsigned int)(v16 + 1);
        ++v17;
        result += 39;
        if ( (__int64)result >= (__int64)&dword_140404A6C[291021621] )
          goto LABEL_47;
      }
      if ( (_DWORD)v16 != -1 )
      {
        v18 = 39 * v17;
        *(_QWORD *)&dword_140404A6C[v18 + 290382645] = 1;
        dword_140404A6C[v18 + 290382648] = v14;
        dword_140404A6C[v18 + 290382647] = 0;
        dword_140404A6C[v18 + 290382649] = a1;
        dword_140404A6C[v18 + 290382650] = v13;
        dword_140404A6C[v18 + 290382651] = 64;
        v19 = 39LL * (int)v16;
        v20 = *(_OWORD *)&dword_140404A6C[v8 + 278846115 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382652] = *(_OWORD *)&dword_140404A6C[v8 + 278846111 + v15];
        v21 = *(_OWORD *)&dword_140404A6C[v8 + 278846119 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382656] = v20;
        v22 = *(_OWORD *)&dword_140404A6C[v8 + 278846123 + v15];
        *(_OWORD *)&dword_140404A6C[v19 + 290382660] = v21;
        *(_OWORD *)&dword_140404A6C[v19 + 290382664] = v22;
        result = (unsigned int *)sub_1400C3BA0((unsigned int)a1, v16, 0xFFFFFFFFLL);
      }
LABEL_47:
      ++v13;
      v15 += 16;
    }
    while ( v13 <= v12 );
  }
  return result;
}

