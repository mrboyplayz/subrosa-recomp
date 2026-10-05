/* Address: 0x14004a670 | Name: sub_14004A670 | Size: 296 bytes */
__int64 __fastcall sub_14004A670(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // edx
  _DWORD *v7; // rcx

  *(_DWORD *)a1 = dword_140404A6C[349900653];
  v2 = j__malloc_base(16LL * (int)dword_140404A6C[349900653]);
  *(_QWORD *)(a1 + 8) = v2;
  MEMORY[0x1401FC920](v2, &dword_140404A6C[349900654]);
  *(_DWORD *)(a1 + 16) = dword_140404A6C[349902702];
  v3 = j__malloc_base(36LL * (int)dword_140404A6C[349902702]);
  *(_QWORD *)(a1 + 24) = v3;
  MEMORY[0x1401FC920](v3, &dword_140404A6C[349902703]);
  *(_DWORD *)(a1 + 32) = dword_140404A6C[349907311];
  v4 = j__malloc_base(12LL * (int)dword_140404A6C[349907311]);
  *(_QWORD *)(a1 + 40) = v4;
  MEMORY[0x1401FC920](v4, &dword_140404A6C[349907312]);
  result = dword_140404A6C[349908848];
  v6 = 0;
  *(_DWORD *)(a1 + 48) = dword_140404A6C[349908848];
  if ( (int)dword_140404A6C[349908848] > 0 )
  {
    v7 = (_DWORD *)(a1 + 60);
    do
    {
      ++v6;
      *(v7 - 2) = *(_DWORD *)((char *)v7 + (_QWORD)&dword_140404A6C[349908834] - a1);
      *(v7 - 1) = *(_DWORD *)((char *)v7 + (_QWORD)&dword_140404A6C[349908835] - a1);
      result = *(unsigned int *)((char *)v7 + (_QWORD)&dword_140404A6C[349908836] - a1);
      *v7 = result;
      v7 += 3;
    }
    while ( v6 < (int)dword_140404A6C[349908848] );
  }
  return result;
}

