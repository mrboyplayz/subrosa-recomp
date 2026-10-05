/* Address: 0x140207634 | Name: sub_140207634 | Size: 134 bytes */
__int64 __fastcall sub_140207634(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a4 + 8);
  v10 = a2;
  *(_QWORD *)(sub_1401FD83C() + 96) = v4;
  v7 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(sub_1401FD83C() + 104) = v7;
  v8 = sub_1401FD83C();
  return sub_140209250(
           (struct EHExceptionRecord *)a1,
           &v10,
           (struct _s_FuncInfo *)(*(_QWORD *)(v8 + 96) + **(unsigned int **)(a4 + 56)),
           0,
           0,
           0);
}

