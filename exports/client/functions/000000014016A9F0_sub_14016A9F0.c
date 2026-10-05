/* Address: 0x14016a9f0 | Name: sub_14016A9F0 | Size: 420 bytes */
char *__fastcall sub_14016A9F0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v9; // r10d
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  __int64 v13; // rax
  char *v14; // rbx
  int v15; // edx
  __int64 v17; // rax
  const char *v18; // rdx

  if ( !(unsigned int)sub_14016A7D0(a1, (char *)a1, (char *)(a1 + 4), (int *)(a1 + 8)) )
    return nullptr;
  if ( *(_DWORD *)(a1 + 4) > 0x1000000u || *(_DWORD *)a1 > 0x1000000u )
    goto LABEL_24;
  *a2 = *(_DWORD *)a1;
  *a3 = *(_DWORD *)(a1 + 4);
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 8);
  if ( (v9 = *(_DWORD *)(a1 + 8), v10 = *(_DWORD *)(a1 + 4), v11 = *(_DWORD *)a1, v9 < 0)
    || v11 < 0
    || v11 && v9 > 0x7FFFFFFF / v11
    || (v12 = v11 * v9, v11 * v9 < 0)
    || v10 < 0
    || v10 && v12 > 0x7FFFFFFF / v10 )
  {
LABEL_24:
    v17 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v18 = "too large";
    goto LABEL_25;
  }
  if ( v11 && v9 > 0x7FFFFFFF / v11
    || v10 && v12 > 0x7FFFFFFF / v10
    || (v13 = j__malloc_base(v10 * v12), (v14 = (char *)v13) == nullptr) )
  {
    v17 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v18 = "outofmem";
LABEL_25:
    *(_QWORD *)(v17 + 16) = v18;
    return nullptr;
  }
  sub_140160860(a1, v13, *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 4) * *(_DWORD *)a1);
  if ( !a5 )
    return v14;
  v15 = *(_DWORD *)(a1 + 8);
  if ( a5 == v15 )
    return v14;
  v14 = sub_14015D7E0(v14, v15, a5, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  if ( v14 )
    return v14;
  return nullptr;
}

