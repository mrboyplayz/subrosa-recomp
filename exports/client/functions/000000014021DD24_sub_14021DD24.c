/* Address: 0x14021dd24 | Name: sub_14021DD24 | Size: 630 bytes */
char __fastcall sub_14021DD24(__int64 a1)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // r10
  _BYTE *v17; // rdx
  char *v18; // rdx
  char v19; // al
  char v20; // cl
  unsigned __int64 v21; // rax
  char *v22; // rcx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) |= 0x10u;
  if ( (unsigned __int8)sub_14022374C() )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        if ( *(_WORD *)(a1 + 66) == 103 || (v3 = 0, *(_WORD *)(a1 + 66) == 71) )
        {
          *(_DWORD *)(a1 + 56) = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v3 = ((*(_WORD *)(a1 + 66) - 65) & 0xFFDF) != 0 ? 6 : 13;
      *(_DWORD *)(a1 + 56) = v3;
    }
    v4 = a1 + 88;
    v5 = 512;
    if ( !sub_14020EAD8(a1 + 88, v3 + 349) )
    {
      if ( *(_QWORD *)(a1 + 1120) )
        v6 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        LODWORD(v6) = 512;
      *(_DWORD *)(a1 + 56) = v6 - 349;
    }
    v7 = *(_QWORD *)(a1 + 1120);
    if ( !v7 )
      v7 = a1 + 88;
    v26 = 0;
    *(_QWORD *)(a1 + 72) = v7;
    if ( sub_140210D3C(a1, &v26) )
    {
      v8 = *(_QWORD *)(a1 + 1120);
      if ( v8 )
        v9 = *(_QWORD *)(a1 + 1112) >> 1;
      else
        v9 = 512;
      if ( v8 )
      {
        v4 = *(_QWORD *)(a1 + 1120);
        v10 = v8 + (*(_QWORD *)(a1 + 1112) >> 1);
        v5 = *(_QWORD *)(a1 + 1112) >> 1;
      }
      else
      {
        v10 = a1 + 600;
      }
      sub_140256818(&v26, v4, v5, v10, v9, *(char *)(a1 + 66), *(_DWORD *)(a1 + 56), *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
      if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 && !*(_DWORD *)(a1 + 56) )
      {
        v12 = *(__int64 **)(a1 + 8);
        v13 = *(unsigned __int8 **)(a1 + 72);
        v14 = *v12;
        v11 = *v13;
        v15 = *(_QWORD *)(*v12 + 272);
        if ( *(_BYTE *)(v11 + v15) != 101 )
        {
          do
            v11 = *++v13;
          while ( (*(_BYTE *)(*(_QWORD *)v14 + 2 * v11) & 4) != 0 );
        }
        v16 = *(_BYTE *)((unsigned __int8)v11 + v15);
        if ( v16 == 120 )
          LOBYTE(v11) = v13[2];
        v17 = v13 + 2;
        if ( v16 != 120 )
          v17 = v13;
        *v17 = ***(_BYTE ***)(v14 + 248);
        v18 = v17 + 1;
        do
        {
          v19 = *v18;
          v20 = v11;
          *v18++ = v11;
          LOBYTE(v11) = v19;
        }
        while ( v20 );
      }
      v21 = *(unsigned __int16 *)(a1 + 66);
      LOWORD(v21) = v21 - 71;
      if ( (v21 & 0xFFDF) == 0 )
      {
        v21 = *(_DWORD *)(a1 + 48) >> 5;
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
      LOBYTE(v21) = v23 - 73;
      if ( (unsigned __int8)v21 <= 0x25u )
      {
        v24 = 0x2100000021LL;
        if ( _bittest64(&v24, v21) )
        {
          *(_DWORD *)(a1 + 48) &= ~8u;
          *(_WORD *)(a1 + 66) = 115;
        }
      }
      v25 = -1;
      do
        ++v25;
      while ( v22[v25] );
      *(_DWORD *)(a1 + 80) = v25;
      return 1;
    }
  }
  return 0;
}

