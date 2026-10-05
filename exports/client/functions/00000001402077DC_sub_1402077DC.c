/* Address: 0x1402077dc | Name: sub_1402077DC | Size: 59 bytes */
void __fastcall sub_1402077DC(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        const struct _s_FuncInfo *a3,
        int a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v6 = *sub_140206D64(a1, a2, a3, &v8);
  v7 = *((int *)a3 + 7);
  v8 = v6;
  if ( a4 > *(_DWORD *)(v7 + v6 + 4) )
    *(_DWORD *)(v7 + v6 + 4) = a4;
}

