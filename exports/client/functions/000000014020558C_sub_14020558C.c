/* Address: 0x14020558c | Name: sub_14020558C | Size: 124 bytes */
__int64 __fastcall sub_14020558C(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  v8 = 5;
  *(_DWORD *)(a1 + 8) = v3;
  v7 = "{for ";
  sub_1401FE888(a1, (__int64)&v7);
  v5 = sub_14020392C((__int64)&v7, v4);
  sub_1401FE908(a1, v5);
  sub_1401FE9BC(a1, 125);
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
    ++*(_QWORD *)&dword_140404A6C[19064555];
  return a1;
}

