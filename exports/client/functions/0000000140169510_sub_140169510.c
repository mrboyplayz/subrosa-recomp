/* Address: 0x140169510 | Name: sub_140169510 | Size: 606 bytes */
char *__fastcall sub_140169510(__int64 a1, int *a2, int *a3, int *a4, int a5)
{
  int *v5; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // edi
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  void *v20; // r14
  int v21; // ebp
  int v22; // r8d
  char v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = (int *)&v23;
  if ( a4 )
    v5 = a4;
  v9 = 92;
  do
  {
    v10 = *(_QWORD *)(a1 + 192);
    if ( v10 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, a2);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v10 + 1;
    }
    --v9;
  }
  while ( v9 );
  v11 = sub_1401604F0(a1, (__int64)a2);
  v14 = sub_1401604F0(a1, v12);
  if ( v14 > 0x1000000 || v11 > 0x1000000 )
    goto LABEL_32;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      goto LABEL_17;
    if ( !*(_DWORD *)(a1 + 48) )
    {
LABEL_16:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad file";
      return nullptr;
    }
  }
  if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
    goto LABEL_16;
LABEL_17:
  if ( v11 < 0
    || v14 < 0
    || v14 && (v13 = (unsigned int)(0x7FFFFFFF % v14), v11 > 0x7FFFFFFF / v14)
    || (v16 = v11 * v14, v11 * v14 < 0)
    || v16 > 0x1FFFFFFF )
  {
LABEL_32:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "too large";
    return nullptr;
  }
  sub_1401604F0(a1, v13);
  sub_1401604F0(a1, v17);
  sub_1401604F0(a1, v18);
  sub_1401604F0(a1, v19);
  if ( v14 && v11 > 0x7FFFFFFF / v14 )
  {
    v20 = nullptr;
    v21 = 4 * v16;
  }
  else
  {
    v21 = 4 * v16;
    v20 = (void *)j__malloc_base(v21);
  }
  MEMORY[0x1401FCD30](v20, 255, v21);
  if ( !sub_140169770(a1, v11, v14, (_DWORD)v5, (__int64)v20) )
  {
    free(v20);
    v20 = nullptr;
  }
  v22 = a5;
  *a2 = v11;
  *a3 = v14;
  if ( !v22 )
    v22 = *v5;
  return sub_14015D7E0((char *)v20, 4, v22, v11, v14);
}

