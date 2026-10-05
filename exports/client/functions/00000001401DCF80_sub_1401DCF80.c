/* Address: 0x1401dcf80 | Name: sub_1401DCF80 | Size: 414 bytes */
__int64 __fastcall sub_1401DCF80(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsp
  unsigned int v8; // [rsp+20h] [rbp+0h] BYREF
  __int64 v9; // [rsp+28h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+10h]
  unsigned int v11; // [rsp+38h] [rbp+18h]
  unsigned int v12; // [rsp+3Ch] [rbp+1Ch]
  int v13; // [rsp+40h] [rbp+20h]
  __int64 v14; // [rsp+48h] [rbp+28h]
  __int64 v15; // [rsp+68h] [rbp+48h]

  v15 = a2;
  v9 = a1;
  v4 = 2LL * (2 * *(_DWORD *)(a1 + 268) + 8);
  v5 = v4 + 15;
  if ( v4 + 15 <= v4 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(sub_1401F89D0(v5 & 0xFFFFFFFFFFFFFFF0uLL, a2));
  v10 = &v8;
  MEMORY[0x1401FC920](&v8, v9 + 24);
  v12 = *(_DWORD *)(v9 + 272);
  while ( 1 )
  {
    v11 = a4 >= *(_DWORD *)(v9 + 268) ? *(_DWORD *)(v9 + 268) : a4;
    v8 = v11;
    sub_1401DD3A0(v9, (char *)v10 + 16, a3, v11);
    v13 = v8 << 17;
    v15 = sub_1401DE800(v15, v10, v8 << 17, v12);
    a3 += 2LL * (int)v8;
    a4 -= v8;
    if ( a4 <= 0 )
      break;
    MEMORY[0x1401FC920](v10, (char *)v10 + 2 * (int)(2 * v8));
  }
  MEMORY[0x1401FC920](v9 + 24, (char *)v10 + 2 * (int)(2 * v8));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v14);
}

