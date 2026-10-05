/* Address: 0x140160180 | Name: sub_140160180 | Size: 306 bytes */
__int64 __fastcall sub_140160180(void **a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 *v5; // rbx
  int v8; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v5 = (unsigned __int8 *)a1[3];
  v8 = *(_DWORD *)*a1 * *((_DWORD *)*a1 + 1);
  if ( v8 < 0
    || a4 < 0
    || a4 && v8 > (int)(0x7FFFFFFFu / a4)
    || (v9 = j__malloc_base(a4 * v8), (v10 = (void *)v9) == nullptr) )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
  else
  {
    if ( v8 )
    {
      v11 = (unsigned int)v8;
      v12 = v9 + 2;
      if ( a4 == 3 )
      {
        do
        {
          v13 = *v5;
          v12 += 3;
          ++v5;
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v13);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v13 + 1);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v13 + 2);
          --v11;
        }
        while ( v11 );
      }
      else
      {
        do
        {
          v14 = *v5;
          v12 += 4;
          ++v5;
          *(_BYTE *)(v12 - 6) = *(_BYTE *)(a2 + 4 * v14);
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v14 + 1);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v14 + 2);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v14 + 3);
          --v11;
        }
        while ( v11 );
      }
    }
    free(a1[3]);
    a1[3] = v10;
    return 1;
  }
}

