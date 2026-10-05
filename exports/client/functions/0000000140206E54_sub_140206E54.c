/* Address: 0x140206e54 | Name: sub_140206E54 | Size: 319 bytes */
_OWORD *__fastcall sub_140206E54(_OWORD *a1, __int64 a2, int a3, __int64 a4, struct _s_FuncInfo *a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // r10d
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r11
  int v15; // r9d
  int v16; // r13d
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  unsigned int i; // r8d
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+30h] [rbp-38h]

  v9 = *((_DWORD *)a5 + 3);
  v10 = MEMORY[0x140207818](a5, (struct _xDISPATCHER_CONTEXT *)a4);
  v11 = 0;
  v12 = v10;
  if ( !v9 )
    abort();
  v13 = *(_QWORD *)(a4 + 8);
  v14 = *((int *)a5 + 4);
  v15 = -1;
  v16 = -1;
  v17 = v9;
  while ( 1 )
  {
    v18 = v17 - 1;
    v19 = v13 + 20 * v18;
    if ( v12 > *(_DWORD *)(v19 + v14 + 4) && v12 <= *(_DWORD *)(v19 + v14 + 8) )
      break;
    --v17;
    if ( !(_DWORD)v18 )
    {
      v20 = 0;
      goto LABEL_8;
    }
  }
  v20 = v13 + v14 + 20LL * (v17 - 1);
LABEL_8:
  v21 = (_DWORD *)(v13 + v14);
  for ( i = 0; i < v9; ++i )
  {
    if ( (!v20 || *v21 > *(_DWORD *)(v20 + 4) && v21[1] <= *(_DWORD *)(v20 + 8)) && a3 >= *v21 && a3 <= v21[1] )
    {
      v23 = i;
      v16 = i;
      if ( v15 != -1 )
        v23 = v15;
      v15 = v23;
    }
    v21 += 5;
  }
  *(_QWORD *)&v26 = a2;
  v24 = 0;
  *(_QWORD *)&v27 = a2;
  if ( v15 != -1 )
    v24 = v15;
  DWORD2(v26) = v24;
  if ( v15 != -1 )
    v11 = v16 + 1;
  DWORD2(v27) = v11;
  *a1 = v26;
  a1[1] = v27;
  return a1;
}

