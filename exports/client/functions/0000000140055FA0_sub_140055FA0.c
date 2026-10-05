/* Address: 0x140055fa0 | Name: sub_140055FA0 | Size: 541 bytes */
__int64 __fastcall sub_140055FA0(int a1, signed int a2, signed int a3, unsigned int *a4)
{
  __int64 v4; // r15
  __int64 v6; // r13
  unsigned int *v7; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  __int64 v11; // rsi
  unsigned int *v12; // rax

  v4 = a3;
  v6 = a1;
  v7 = &dword_140404A6C[486149253];
  v8 = a2;
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 61;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 61LL * (int)v9;
  dword_140404A6C[7166 * a1 + 280654225 + 3 * dword_140404A6C[7166 * a1 + 280654224]] = v9;
  dword_140404A6C[7166 * a1 + 280654226 + 3 * dword_140404A6C[7166 * a1 + 280654224]] = a2;
  dword_140404A6C[7166 * a1 + 280654227 + 3 * dword_140404A6C[7166 * a1 + 280654224]++] = a3;
  MEMORY[0x1401FCD30](&dword_140404A6C[v11 + 486149254], 0, 240);
  dword_140404A6C[v11 + 486149253] = 1;
  dword_140404A6C[v11 + 486149254] = 10;
  *(_QWORD *)&dword_140404A6C[v11 + 486149256] = 0x10000;
  dword_140404A6C[v11 + 486149293] = v6;
  v12 = &dword_140404A6C[36 * v9 + 485543029];
  *(_OWORD *)v12 = 0;
  *((_OWORD *)v12 + 1) = 0;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  *((_OWORD *)v12 + 4) = 0;
  *((_OWORD *)v12 + 5) = 0;
  *((_OWORD *)v12 + 6) = 0;
  *((_OWORD *)v12 + 7) = 0;
  *((_OWORD *)v12 + 8) = 0;
  dword_140404A6C[v11 + 486149291] = dword_140404A6C[7166 * v6 + 280651439 + 78 * v8];
  dword_140404A6C[v11 + 486149292] = dword_140404A6C[7166 * v6 + 280651439 + 78 * v4];
  dword_140404A6C[v11 + 486149281] = 1048576000;
  dword_140404A6C[v11 + 486149282] = 1052770304;
  dword_140404A6C[v11 + 486149267] = *a4;
  dword_140404A6C[v11 + 486149268] = a4[1];
  dword_140404A6C[v11 + 486149269] = a4[2];
  *(float *)&dword_140404A6C[v11 + 486149270] = *(float *)a4 - *(float *)&dword_140404A6C[25 * v4 + 282486046];
  *(float *)&dword_140404A6C[v11 + 486149271] = *((float *)a4 + 1) - *(float *)&dword_140404A6C[25 * v4 + 282486047];
  *(float *)&dword_140404A6C[v11 + 486149272] = *((float *)a4 + 2) - *(float *)&dword_140404A6C[25 * v4 + 282486048];
  return v9;
}

