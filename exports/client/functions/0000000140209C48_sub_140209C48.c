/* Address: 0x140209c48 | Name: sub_140209C48 | Size: 490 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_140209C48(_QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+48h] [rbp-60h]
  _QWORD v12[9]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+18h]

  v2 = *(_QWORD *)(sub_1401FD83C() + 40);
  v13 = *(_QWORD *)(sub_1401FD83C() + 32);
  v3 = a1[10];
  v10 = a1[9];
  v4 = a1[8];
  v11 = a1[6];
  v5 = (_QWORD *)a1[5];
  MEMORY[0x1401FDACC](v4);
  *(_QWORD *)(sub_1401FD83C() + 32) = v3;
  *(_QWORD *)(sub_1401FD83C() + 40) = v4;
  v6 = sub_1401FD83C();
  v7 = sub_14020753C(v12, *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL));
  if ( a1[11] )
    sub_1401FD83C();
  v8 = sub_14020AE90(v11, v5, 256);
  sub_140207578((__int64)v7);
  if ( *(_DWORD *)v3 == -529697949
    && *(_DWORD *)(v3 + 24) == 4
    && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2
    && (unsigned int)sub_1401FD260(*(_QWORD *)(v3 + 40)) )
  {
    sub_1401FD18C(v3);
  }
  *(_QWORD *)(sub_1401FD83C() + 32) = v13;
  *(_QWORD *)(sub_1401FD83C() + 40) = v2;
  *(_QWORD *)(*(int *)(v10 + 28) + *v5) = -2;
  return v8;
}

