/* Address: 0x1401dd130 | Name: sub_1401DD130 | Size: 538 bytes */
__int64 __fastcall sub_1401DD130(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsp
  __int64 v8; // [rsp+40h] [rbp+0h] BYREF
  int v9; // [rsp+48h] [rbp+8h]
  __int64 *v10; // [rsp+50h] [rbp+10h]
  int v11; // [rsp+58h] [rbp+18h]
  int v12; // [rsp+5Ch] [rbp+1Ch]
  int v13; // [rsp+60h] [rbp+20h]
  __int64 v14; // [rsp+68h] [rbp+28h]
  __int64 v15; // [rsp+70h] [rbp+30h]
  __int64 v16; // [rsp+78h] [rbp+38h]
  int v17; // [rsp+98h] [rbp+58h]

  v17 = a2;
  v8 = a1;
  v4 = 4LL * (*(_DWORD *)(a1 + 276) + *(_DWORD *)(a1 + 268));
  v5 = v4 + 15;
  if ( v4 + 15 <= v4 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(sub_1401F89D0(v5 & 0xFFFFFFFFFFFFFFF0uLL, a2));
  v10 = &v8;
  MEMORY[0x1401FC920](&v8, v8 + 24);
  v14 = *(_QWORD *)(v8 + 296) + 4LL;
  v12 = *(_DWORD *)(v8 + 272);
  while ( 1 )
  {
    v11 = a4 >= *(_DWORD *)(v8 + 268) ? *(_DWORD *)(v8 + 268) : a4;
    v9 = v11;
    sub_1401DD7A0(v8, (_DWORD)v10 + 4 * *(_DWORD *)(v8 + 276), a3, *(_QWORD *)(v8 + 296), v11);
    v13 = v9 << 16;
    v17 = sub_1401DD8A0(v17, (_DWORD)v10, v14, *(_DWORD *)(v8 + 276), *(_DWORD *)(v8 + 280), v9 << 16, v12);
    a3 += 2LL * v9;
    a4 -= v9;
    if ( a4 <= 1 )
      break;
    MEMORY[0x1401FC920](v10, (char *)v10 + 4 * v9);
  }
  v15 = v8 + 24;
  MEMORY[0x1401FC920](v8 + 24, (char *)v10 + 4 * v9);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v16);
}

