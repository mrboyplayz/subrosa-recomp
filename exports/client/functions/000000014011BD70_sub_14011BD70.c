/* Address: 0x14011bd70 | Name: sub_14011BD70 | Size: 451 bytes */
__int64 __fastcall sub_14011BD70(unsigned int a1)
{
  int v2; // ebp
  char v3; // r14
  int v4; // eax
  signed int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // edx
  unsigned int v9; // r8d

  MEMORY[0x1401FC920](&dword_140404A6C[291021665], &dword_140404A6C[289317486]);
  v2 = BYTE2(dword_140404A6C[291021666]);
  v3 = HIBYTE(dword_140404A6C[291021666]);
  dword_140404A6C[291021664] = 1;
  *(_QWORD *)&dword_140404A6C[291021661] = 8;
  dword_140404A6C[291021663] = a1;
  if ( BYTE2(dword_140404A6C[291021666]) >= 0x10u || HIBYTE(dword_140404A6C[291021666]) > 0x10u )
    return 0;
  v4 = dword_140404A6C[289333871];
  v5 = -1;
  while ( v4 != dword_140404A6C[289333872] )
  {
    if ( dword_140404A6C[16387 * v4 + 289333873] == LOWORD(dword_140404A6C[291021666]) )
      v5 = v4;
    else
      v4 = ((_BYTE)v4 + 1) & 0x3F;
    if ( v5 != -1 )
      goto LABEL_12;
  }
  v6 = 16387LL * (int)dword_140404A6C[289333872];
  v5 = dword_140404A6C[289333872];
  dword_140404A6C[v6 + 289333873] = LOWORD(dword_140404A6C[291021666]);
  *(_QWORD *)&dword_140404A6C[v6 + 289333874] = 0;
  dword_140404A6C[289333872] = (LOBYTE(dword_140404A6C[289333872]) + 1) & 0x3F;
  if ( dword_140404A6C[289333871] == dword_140404A6C[289333872] )
    dword_140404A6C[289333871] = (LOBYTE(dword_140404A6C[289333871]) + 1) & 0x3F;
LABEL_12:
  v7 = 16387LL * v5;
  MEMORY[0x1401FC920]((char *)&dword_140404A6C[v7 + 289333876] + (unsigned int)(v2 << 10), &dword_140404A6C[291021667]);
  v8 = a1 - 8 + (v2 << 10);
  if ( (int)dword_140404A6C[v7 + 289333875] < v8 )
    dword_140404A6C[v7 + 289333875] = v8;
  v9 = dword_140404A6C[v7 + 289333874] | (1 << v2);
  dword_140404A6C[v7 + 289333874] = v9;
  if ( (((1 << v3) - 1) & v9) != (1 << v3) - 1 )
    return 0;
  *(_QWORD *)&dword_140404A6C[289317484] = 4;
  MEMORY[0x1401FC920](&dword_140404A6C[289317486], &dword_140404A6C[v7 + 289333876]);
  return dword_140404A6C[v7 + 289333875];
}

