/* Address: 0x140209e34 | Name: sub_140209E34 | Size: 592 bytes */
__int64 __fastcall sub_140209E34(struct _EXCEPTION_RECORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-A8h]
  __int64 v11; // [rsp+38h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-88h]
  _QWORD v13[3]; // [rsp+70h] [rbp-68h]
  __int64 v14[10]; // [rsp+88h] [rbp-50h] BYREF
  int v15; // [rsp+E0h] [rbp+8h]

  v11 = *(_QWORD *)(sub_1401FD83C() + 40);
  v10 = *(_QWORD *)(sub_1401FD83C() + 32);
  v2 = *((_QWORD *)a1 + 10);
  v3 = *((_QWORD *)a1 + 8);
  v12 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD *)a1 + 5);
  v13[0] = *((_QWORD *)a1 + 9);
  v13[1] = *((_QWORD *)a1 + 13);
  v15 = *((_DWORD *)a1 + 14);
  MEMORY[0x1401FDACC](v3);
  *(_QWORD *)(sub_1401FD83C() + 32) = v2;
  *(_QWORD *)(sub_1401FD83C() + 40) = v3;
  v5 = sub_1401FD83C();
  v6 = sub_14020753C(v14, *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL));
  if ( *((_QWORD *)a1 + 11) )
    sub_1401FD83C();
  v7 = sub_14020AEE0(v12, v4, 256);
  v8 = v7;
  if ( v7 < 2 )
  {
    v8 = v13[v7];
    if ( !v8 )
      abort();
  }
  sub_14020AF10(v8, v4);
  sub_140207578((__int64)v6);
  if ( *(_DWORD *)v2 == -529697949
    && *(_DWORD *)(v2 + 24) == 4
    && (unsigned int)(*(_DWORD *)(v2 + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(v2 + 40)) )
  {
    sub_1401FD18C(v2);
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = v10;
  *(_QWORD *)(sub_1401FD83C() + 40) = v11;
  *(_DWORD *)(sub_1401FD83C() + 120) = v15;
  *(_DWORD *)(sub_1401FD83C() + 120) = -2;
  return v8;
}

