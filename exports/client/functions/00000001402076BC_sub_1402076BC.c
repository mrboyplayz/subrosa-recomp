/* Address: 0x1402076bc | Name: sub_1402076BC | Size: 191 bytes */
__int64 __fastcall sub_1402076BC(struct EHExceptionRecord *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int8 v10[4]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+44h] [rbp-24h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+54h] [rbp-14h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v6 = *(_QWORD *)(a4 + 8);
  v10[0] = 0;
  v16 = a2;
  *(_QWORD *)(sub_1401FD83C() + 96) = v6;
  v7 = *((_QWORD *)a1 + 7);
  *(_QWORD *)(sub_1401FD83C() + 104) = v7;
  v8 = sub_1401FD83C();
  sub_140206AE0(
    (FH4 *)(*(_QWORD *)(v8 + 96) + **(unsigned int **)(a4 + 56)),
    v10,
    *(struct FH4::FuncInfo4 **)(a4 + 8),
    **(_DWORD **)(a4 + 16),
    0);
  return sub_140209488(a1, &v16, (struct FH4::FuncInfo4 *)v10, 0, 0, 0);
}

