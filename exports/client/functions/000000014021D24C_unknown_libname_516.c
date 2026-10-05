/* Address: 0x14021d24c | Name: unknown_libname_516 | Size: 533 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_516(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  _QWORD *v15; // r9
  __int64 v16; // rdx
  char v17; // r10
  _BYTE *v18; // rdx
  char *v19; // rdx
  char v20; // al
  char v21; // cl
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( *(_BYTE *)(a1 + 65) == 103 || (v2 = 0, *(_BYTE *)(a1 + 65) == 71) )
      {
        *(_DWORD *)(a1 + 56) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v2 = ((*(_BYTE *)(a1 + 65) - 65) & 0xDF) != 0 ? 6 : 13;
    *(_DWORD *)(a1 + 56) = v2;
  }
  v3 = a1 + 88;
  v4 = sub_14020EAD8(a1 + 88, v2 + 349);
  v5 = 512;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 1120) )
      v6 = *(_QWORD *)(a1 + 1112) >> 1;
    else
      LODWORD(v6) = 512;
    *(_DWORD *)(a1 + 56) = v6 - 349;
  }
  v7 = *(_QWORD *)(v3 + 1032);
  if ( !v7 )
    v7 = v3;
  *(_QWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 32) += 8LL;
  v8 = *(_QWORD *)(a1 + 1120);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( v8 )
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  else
    v9 = 512;
  if ( v8 )
  {
    v3 = v8;
    v10 = v8 + (*(_QWORD *)(a1 + 1112) >> 1);
    v5 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v10 = a1 + 600;
  }
  sub_140256818(&v27, v3, v5, v10, v9, *(char *)(a1 + 65), *(_DWORD *)(a1 + 56), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  v12 = *(_DWORD *)(a1 + 48) >> 5;
  if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(unsigned __int8 **)(a1 + 72);
    v15 = *(_QWORD **)v13;
    v11 = *v14;
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 272LL);
    if ( *(_BYTE *)(v11 + v16) != 101 )
    {
      do
        v11 = *++v14;
      while ( (*(_BYTE *)(*v15 + 2 * v11) & 4) != 0 );
    }
    v17 = *(_BYTE *)((unsigned __int8)v11 + v16);
    if ( v17 == 120 )
      LOBYTE(v11) = v14[2];
    v12 = v15[31];
    v18 = v14 + 2;
    if ( v17 != 120 )
      v18 = v14;
    *v18 = **(_BYTE **)v12;
    v19 = v18 + 1;
    do
    {
      v20 = *v19;
      v21 = v11;
      *v19++ = v11;
      LOBYTE(v11) = v20;
    }
    while ( v21 );
  }
  if ( ((*(_BYTE *)(a1 + 65) - 71) & 0xDF) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 48) >> 5;
    if ( (*(_DWORD *)(a1 + 48) & 0x20) == 0 )
      MEMORY[0x1402145B0](*(#105 **)(a1 + 72), *(char **)(a1 + 8), (struct #68 *const)v11);
  }
  v22 = *(char **)(a1 + 72);
  v23 = *v22;
  if ( *v22 == 45 )
  {
    *(_DWORD *)(a1 + 48) |= 0x40u;
    *(_QWORD *)(a1 + 72) = ++v22;
    v23 = *v22;
  }
  LOBYTE(v12) = v23 - 73;
  if ( (unsigned __int8)v12 <= 0x25u )
  {
    v24 = 0x2100000021LL;
    if ( _bittest64(&v24, v12) )
    {
      *(_DWORD *)(a1 + 48) &= ~8u;
      *(_BYTE *)(a1 + 65) = 115;
    }
  }
  v25 = -1;
  do
    ++v25;
  while ( v22[v25] );
  *(_DWORD *)(a1 + 80) = v25;
  return 1;
}

