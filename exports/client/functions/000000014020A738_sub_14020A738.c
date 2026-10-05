/* Address: 0x14020a738 | Name: sub_14020A738 | Size: 150 bytes */
__int64 __fastcall sub_14020A738(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, const struct _s_FuncInfo *a3)
{
  int v6; // ebx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = MEMORY[0x140207818](a3, a2);
  sub_140206D64(a1, a2, a3, &v8);
  if ( v6 <= (int)sub_1402077A4(a1, a2, a3) )
  {
    return (unsigned int)sub_1402077A4(a1, a2, a3);
  }
  else
  {
    MEMORY[0x1402077D0](&v8, a3, v6);
    sub_1402077DC(a1, a2, a3, v6);
  }
  return (unsigned int)v6;
}

