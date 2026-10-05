/* Address: 0x14015d730 | Name: sub_14015D730 | Size: 168 bytes */
__int64 __fastcall sub_14015D730(unsigned __int8 *Block, int a2, int a3, int a4)
{
  int v5; // esi
  __int64 v6; // rbx
  __int64 i; // rax

  v5 = a4 * a3 * a2;
  v6 = j__malloc_base(2 * v5);
  if ( v6 )
  {
    if ( v5 > 0 )
    {
      for ( i = 0; i < v5; ++i )
        *(_WORD *)(v6 + 2 * i) = 257 * Block[i];
    }
    free(Block);
    return v6;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
}

