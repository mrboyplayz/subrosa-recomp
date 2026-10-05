/* Address: 0x14017c420 | Name: sub_14017C420 | Size: 241 bytes */
__int64 __fastcall sub_14017C420(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ecx
  void *v16; // rcx

  v11 = a3 - a6;
  v12 = j__malloc_base(20);
  v13 = j__malloc_base(v11);
  if ( !v12 )
  {
    if ( !v13 )
      return 0;
    v16 = (void *)v13;
LABEL_11:
    free(v16);
    return 0;
  }
  if ( !v13 )
  {
    v16 = (void *)v12;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)a1 = a7;
  v14 = a3;
  if ( a5 )
    v14 = a5;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = v14;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  *(_DWORD *)v12 = v11;
  *(_DWORD *)(v12 + 4) = a4 - a6;
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  if ( a2 )
    MEMORY[0x1401FCD30](a2, 0, a4 * a3);
  return 1;
}

