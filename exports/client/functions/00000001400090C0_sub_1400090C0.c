/* Address: 0x1400090c0 | Name: sub_1400090C0 | Size: 638 bytes */
__int64 __fastcall sub_1400090C0(int a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbp
  signed int v6; // edx
  __int64 v7; // rdi
  int v8; // r15d
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  signed int v12; // r8d
  signed int v13; // r9d
  int v14; // eax
  bool v15; // cc
  int v16; // edi
  __int64 v17; // rbp
  unsigned int v18; // ecx
  __int64 result; // rax

  v1 = 3597LL * a1;
  v2 = 2;
  v3 = v1 * 4 + 32LL * (int)dword_140404A6C[v1 + 71859146];
  v4 = *(int *)((char *)&dword_140404A6C[71859151] + v3);
  v5 = (int)dword_140404A6C[396 * v4 + 225426056 + (*(int *)((char *)&dword_140404A6C[71859152] + v3) ^ 1LL)];
  v6 = dword_140404A6C[v1 + 71859660];
  v7 = 34 * v5;
  v8 = v4 == dword_140404A6C[34 * v5 + 225391237];
  if ( (_DWORD)v4 == dword_140404A6C[34 * v5 + 225391238] )
    v8 = 2;
  if ( (_DWORD)v4 == dword_140404A6C[v7 + 225391239] )
    v8 = 3;
  if ( dword_140404A6C[v7 + 225391230] == v6 && dword_140404A6C[v7 + 225391232] == dword_140404A6C[v1 + 71859661] )
  {
    if ( (int)dword_140404A6C[225391228] <= 0 )
      v9 = 0;
    else
      v9 = rand() % (signed int)dword_140404A6C[225391228];
    v10 = 34LL * v9;
    v6 = dword_140404A6C[v10 + 225391230];
    v11 = dword_140404A6C[v10 + 225391232];
    dword_140404A6C[v1 + 71859660] = v6;
    dword_140404A6C[v1 + 71859661] = v11;
  }
  v12 = dword_140404A6C[v7 + 225391232];
  v13 = dword_140404A6C[v1 + 71859661];
  v14 = dword_140404A6C[v7 + 225391230];
  if ( v12 == v13 )
  {
    if ( v14 < v6 )
      v2 = 0;
  }
  else
  {
    v15 = v14 <= (signed int)dword_140404A6C[225391366];
    if ( v14 < (int)dword_140404A6C[225391366] )
    {
      if ( v8 )
      {
        v2 = 0;
        goto LABEL_23;
      }
      v15 = v14 <= (signed int)dword_140404A6C[225391366];
    }
    if ( v15 || v8 == 2 )
    {
      v2 = 3;
      if ( v12 < v13 )
        v2 = 1;
    }
  }
LABEL_23:
  v16 = 0;
  v17 = 34 * v5;
  do
  {
    v18 = dword_140404A6C[v17 + 225391236 + v2];
    if ( v18 != (_DWORD)v4 && v18 != -1 )
      break;
    ++v16;
    v2 = rand() & 3;
  }
  while ( v16 < 512 );
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859159 + v1] = dword_140404A6C[v17 + 225391236 + v2];
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859160 + v1] = v2 >= 2;
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859162 + v1] = rand() & 1;
  dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859163 + v1] = 0;
  if ( v2 == (((_BYTE)v8 + 1) & 3) )
    dword_140404A6C[8 * (int)dword_140404A6C[v1 + 71859146] + 71859163 + v1] = -1;
  result = ((_BYTE)v8 - 1) & 3;
  if ( v2 == (_DWORD)result )
  {
    result = v1 * 4 + 32LL * (int)dword_140404A6C[v1 + 71859146];
    *(unsigned int *)((char *)&dword_140404A6C[71859163] + result) = 1;
  }
  return result;
}

