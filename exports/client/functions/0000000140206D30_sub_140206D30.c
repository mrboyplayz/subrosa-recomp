/* Address: 0x140206d30 | Name: sub_140206D30 | Size: 50 bytes */
void __fastcall sub_140206D30(unsigned __int64 *a1, struct _xDISPATCHER_CONTEXT *a2, struct FH4::FuncInfo4 *a3)
{
  bool v3; // zf
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(_BYTE *)a3 & 1) == 0;
  v4 = *a1;
  v5 = v4;
  if ( !v3 )
    v5 = *(_QWORD *)(*((unsigned int *)a3 + 5) + v4);
  sub_14020A450(&v5, a2, a3, -1);
}

