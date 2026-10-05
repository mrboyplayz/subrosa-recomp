/* Address: 0x1402077a4 | Name: sub_1402077A4 | Size: 41 bytes */
__int64 __fastcall sub_1402077A4(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, const struct _s_FuncInfo *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = *sub_140206D64(a1, a2, a3, &v7);
  v5 = *((int *)a3 + 7);
  v7 = v4;
  return *(unsigned int *)(v5 + v4 + 4);
}

