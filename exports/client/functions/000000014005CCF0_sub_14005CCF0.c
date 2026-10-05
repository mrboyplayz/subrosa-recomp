/* Address: 0x14005ccf0 | Name: sub_14005CCF0 | Size: 645 bytes */
__int64 sub_14005CCF0()
{
  unsigned int v0; // edi
  unsigned int *v1; // rax
  __int64 v3; // rbx
  bool v4; // zf
  unsigned int v5; // eax

  v0 = 0;
  v1 = &dword_140404A6C[71856253];
  while ( *v1 )
  {
    ++v0;
    v1 += 3597;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[72777085] )
      return 0xFFFFFFFFLL;
  }
  if ( v0 == -1 )
    return 0xFFFFFFFFLL;
  v3 = 3597LL * (int)v0;
  MEMORY[0x1401FCD30](&dword_140404A6C[v3 + 71856254], 0, 14384);
  v4 = dword_140404A6C[283831448] == 1;
  dword_140404A6C[v3 + 71856268] = -1;
  dword_140404A6C[v3 + 71856253] = 1;
  dword_140404A6C[v3 + 71856286] = 17;
  dword_140404A6C[v3 + 71856292] = -1;
  dword_140404A6C[v3 + 71856272] = 50000;
  dword_140404A6C[v3 + 71857786] = 0;
  dword_140404A6C[v3 + 71857811] = 0;
  dword_140404A6C[v3 + 71857836] = 0;
  dword_140404A6C[v3 + 71857861] = 0;
  dword_140404A6C[v3 + 71857886] = 0;
  dword_140404A6C[v3 + 71857911] = 0;
  dword_140404A6C[v3 + 71857936] = 0;
  dword_140404A6C[v3 + 71857961] = 0;
  dword_140404A6C[v3 + 71856342] = 0;
  if ( v4 )
  {
    v5 = dword_140404A6C[v3 + 71856342];
    if ( dword_140404A6C[283831312] == 3 )
      v5 = 2;
    dword_140404A6C[v3 + 71856342] = v5;
  }
  dword_140404A6C[v3 + 71856333] = 1065353216;
  rand();
  dword_140404A6C[v3 + 71859768] = 1027604480;
  dword_140404A6C[v3 + 71859769] = 1027604480;
  dword_140404A6C[v3 + 71859770] = -1105618534;
  dword_140404A6C[v3 + 71859774] = -1119879168;
  dword_140404A6C[v3 + 71859775] = 1027604480;
  dword_140404A6C[v3 + 71859776] = -1105618534;
  dword_140404A6C[v3 + 71859771] = 1065353216;
  dword_140404A6C[v3 + 71859772] = 1065353216;
  dword_140404A6C[v3 + 71859773] = 1065353216;
  dword_140404A6C[v3 + 71859777] = 1065353216;
  dword_140404A6C[v3 + 71859778] = 1065353216;
  dword_140404A6C[v3 + 71859779] = 1065353216;
  dword_140404A6C[v3 + 71859825] = rand() % 5;
  dword_140404A6C[v3 + 71859817] = rand() % 6;
  if ( (rand() & 3) != 3 )
    dword_140404A6C[v3 + 71859817] = 2;
  dword_140404A6C[v3 + 71859818] = rand() % 6;
  dword_140404A6C[v3 + 71859819] = rand() % 9;
  dword_140404A6C[v3 + 71859820] = rand() % 8;
  dword_140404A6C[v3 + 71859663] = -1;
  return v0;
}

