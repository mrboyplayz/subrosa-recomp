/* Address: 0x14020b408 | Name: sub_14020B408 | Size: 287 bytes */
__int64 sub_14020B408()
{
  signed int v0; // eax
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  _DWORD *v5; // rsi
  char *v6; // r14

  v0 = dword_140404A6C[19064591];
  v1 = 0;
  v2 = 3;
  if ( dword_140404A6C[19064591] )
  {
    if ( (int)dword_140404A6C[19064591] < 3 )
      v0 = 3;
  }
  else
  {
    v0 = 512;
  }
  dword_140404A6C[19064591] = v0;
  *(_QWORD *)&dword_140404A6C[19064593] = calloc_base(v0, 8);
  free_base(nullptr);
  if ( !*(_QWORD *)&dword_140404A6C[19064593] )
  {
    dword_140404A6C[19064591] = 3;
    *(_QWORD *)&dword_140404A6C[19064593] = calloc_base(3, 8);
    free_base(nullptr);
    if ( !*(_QWORD *)&dword_140404A6C[19064593] )
      return 0xFFFFFFFFLL;
  }
  v4 = 0;
  v5 = &unk_1403020F8;
  v6 = (char *)&unk_1403020E0;
  do
  {
    _acrt_InitializeCriticalSectionEx(v6 + 48, 4000, 0);
    *(_QWORD *)(v1 + *(_QWORD *)&dword_140404A6C[19064593]) = v6;
    if ( *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 40) >= 0xFFFFFFFFFFFFFFFEuLL
      || *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 40) == 0 )
    {
      *v5 = -2;
    }
    ++v4;
    v6 += 88;
    v1 += 8;
    v5 += 22;
    --v2;
  }
  while ( v2 );
  return 0;
}

