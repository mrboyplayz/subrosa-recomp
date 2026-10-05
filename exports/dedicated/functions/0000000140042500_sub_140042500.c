/* Address: 0x140042500 | Name: sub_140042500 | Size: 652 bytes */
__int64 sub_140042500()
{
  unsigned int v0; // edi
  int *v1; // rax
  __int64 v3; // rbx
  bool v4; // zf
  int v5; // eax

  v0 = 0;
  v1 = dword_16D67D5A0;
  while ( *v1 )
  {
    ++v0;
    v1 += 3597;
    if ( (__int64)v1 >= (__int64)&dword_16DA009A0 )
      return 0xFFFFFFFFLL;
  }
  if ( v0 == -1 )
    return 0xFFFFFFFFLL;
  v3 = 3597LL * (int)v0;
  memset(&byte_16D67D5A4[v3 * 4], 0, 0x3830u);
  v4 = dword_1915413AC == 1;
  dword_16D67D5A0[v3 + 15] = -1;
  dword_16D67D5A0[v3] = 1;
  dword_16D67D5A0[v3 + 33] = 17;
  dword_16D67D5A0[v3 + 39] = -1;
  dword_16D67D5A0[v3 + 19] = 50000;
  dword_16D67D5A0[v3 + 1533] = 0;
  dword_16D67D5A0[v3 + 1558] = 0;
  dword_16D67D5A0[v3 + 1583] = 0;
  dword_16D67D5A0[v3 + 1608] = 0;
  dword_16D67D5A0[v3 + 1633] = 0;
  dword_16D67D5A0[v3 + 1658] = 0;
  dword_16D67D5A0[v3 + 1683] = 0;
  dword_16D67D5A0[v3 + 1708] = 0;
  dword_16D67D5A0[v3 + 89] = 0;
  if ( v4 )
  {
    v5 = dword_16D67D5A0[v3 + 89];
    if ( dword_19154118C == 3 )
      v5 = 2;
    dword_16D67D5A0[v3 + 89] = v5;
  }
  dword_16D67D5A0[v3 + 80] = 1065353216;
  rand();
  dword_16D67D5A0[v3 + 3515] = 1027604480;
  dword_16D67D5A0[v3 + 3516] = 1027604480;
  dword_16D67D5A0[v3 + 3517] = -1105618534;
  dword_16D67D5A0[v3 + 3521] = -1119879168;
  dword_16D67D5A0[v3 + 3522] = 1027604480;
  dword_16D67D5A0[v3 + 3523] = -1105618534;
  dword_16D67D5A0[v3 + 3518] = 1065353216;
  dword_16D67D5A0[v3 + 3519] = 1065353216;
  dword_16D67D5A0[v3 + 3520] = 1065353216;
  dword_16D67D5A0[v3 + 3524] = 1065353216;
  dword_16D67D5A0[v3 + 3525] = 1065353216;
  dword_16D67D5A0[v3 + 3526] = 1065353216;
  dword_16D67D5A0[v3 + 3572] = rand() % 5;
  dword_16D67D5A0[v3 + 3564] = rand() % 6;
  if ( (rand() & 3) != 3 )
    dword_16D67D5A0[v3 + 3564] = 2;
  dword_16D67D5A0[v3 + 3565] = rand() % 6;
  dword_16D67D5A0[v3 + 3566] = rand() % 9;
  dword_16D67D5A0[v3 + 3567] = rand() % 8;
  dword_16D67D5A0[v3 + 3410] = -1;
  return v0;
}

