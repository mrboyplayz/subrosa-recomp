/* Address: 0x14021ef8c | Name: unknown_libname_524 | Size: 166 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_524(__int64 a1)
{
  __int64 v1; // rdi
  __int16 v3; // si
  char v4; // al
  #115 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rcx
  char result; // al
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  *(_BYTE *)(a1 + 84) = 1;
  v1 = a1 + 88;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = MEMORY[0x140211A94](*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 66), *(unsigned int *)(a1 + 60));
  v5 = *(#115 **)(v1 + 1032);
  if ( v4 )
  {
    if ( !v5 )
      v5 = (#115 *)v1;
    *(_WORD *)v5 = v3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v9 = v3;
    v10 = 0;
    if ( !v5 )
      v5 = (#115 *)v1;
    if ( (int)mbtowc_l(v5, (#49 *)&v9, (char *)*(int *)(*(_QWORD *)v6 + 8LL)) < 0 )
      *(_BYTE *)(a1 + 64) = 1;
  }
  v7 = *(_QWORD *)(v1 + 1032);
  result = 1;
  *(_DWORD *)(a1 + 80) = 1;
  if ( !v7 )
    v7 = v1;
  *(_QWORD *)(a1 + 72) = v7;
  return result;
}

