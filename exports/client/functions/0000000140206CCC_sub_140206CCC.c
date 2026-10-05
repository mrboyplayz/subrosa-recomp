/* Address: 0x140206ccc | Name: sub_140206CCC | Size: 100 bytes */
void __fastcall sub_140206CCC(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, const struct _s_FuncInfo *a3)
{
  unsigned __int64 *v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = sub_140206D64(a1, a2, a3, &v9);
  v6 = MEMORY[0x140207818](a3, a2);
  v7 = sub_140206A78((__int64)a3, v6);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 4);
  else
    v8 = -1;
  sub_14020A2C4(v5, a2, a3, v8);
}

