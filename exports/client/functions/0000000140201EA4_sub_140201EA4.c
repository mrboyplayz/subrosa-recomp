/* Address: 0x140201ea4 | Name: sub_140201EA4 | Size: 192 bytes */
DName *__fastcall sub_140201EA4(DName *a1, __int64 a2)
{
  struct DName *v4; // rax
  struct DName *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  _BYTE v13[16]; // [rsp+50h] [rbp-38h] BYREF
  char v14[16]; // [rsp+60h] [rbp-28h] BYREF
  char v15[16]; // [rsp+70h] [rbp-18h] BYREF

  v4 = (struct DName *)sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 0x10u);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
  {
    v5 = nullptr;
  }
  sub_1402013D0(a1, v5);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_140200AFC((__int64)v13, (__int64)&v11, 0, &v9, 0);
  v6 = sub_1401FE7EC((__int64)v13, (__int64)v14, 32);
  v7 = sub_1401FE7C0(v6, (__int64)v15, a2);
  *(_QWORD *)v5 = *(_QWORD *)v7;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(v7 + 8);
  return a1;
}

