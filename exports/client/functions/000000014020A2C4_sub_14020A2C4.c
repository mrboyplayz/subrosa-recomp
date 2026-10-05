/* Address: 0x14020a2c4 | Name: sub_14020A2C4 | Size: 394 bytes */
void __fastcall sub_14020A2C4(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        const struct _s_FuncInfo *a3,
        int a4)
{
  __int64 v8; // r13
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  v8 = sub_1402075CC();
  v9 = sub_14020777C(a1, a2, a3);
  v10 = sub_1401FD83C();
  ++*(_DWORD *)(v10 + 48);
  while ( v9 != -1 && v9 > a4 )
  {
    if ( v9 <= -1 || v9 >= *((_DWORD *)a3 + 1) )
      abort();
    v11 = v9;
    v9 = *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8LL * v9);
    if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4) )
    {
      v12 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4);
      v13 = v12 + sub_1402075CC();
    }
    else
    {
      v13 = 0;
    }
    if ( v13 )
    {
      MEMORY[0x1402077D0](a1, a3, v9);
      if ( *(_DWORD *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4) )
      {
        v14 = *(int *)(*((int *)a3 + 2) + sub_1402075CC() + 8 * v11 + 4);
        v15 = v14 + sub_1402075CC();
      }
      else
      {
        v15 = 0;
      }
      sub_14020AE90(v15, a1, 259);
      sub_1402075F4(v8);
    }
  }
  if ( *(int *)(sub_1401FD83C() + 48) > 0 )
  {
    v16 = sub_1401FD83C();
    --*(_DWORD *)(v16 + 48);
  }
  if ( v9 != -1 && v9 > a4 )
    abort();
  MEMORY[0x1402077D0](a1, a3, v9);
}

