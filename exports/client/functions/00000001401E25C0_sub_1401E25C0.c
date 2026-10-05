/* Address: 0x1401e25c0 | Name: sub_1401E25C0 | Size: 367 bytes */
__int64 __fastcall sub_1401E25C0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  int i; // [rsp+50h] [rbp+0h] BYREF
  int v10; // [rsp+54h] [rbp+4h]
  int v11; // [rsp+58h] [rbp+8h]
  int v12; // [rsp+5Ch] [rbp+Ch]
  int *v13; // [rsp+60h] [rbp+10h]
  __int64 v14; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+88h] [rbp+38h]

  v16 = a2;
  if ( a5 > 0 )
  {
    if ( a2 && a3 > 0 && !a6 )
    {
      v10 = sub_1401E3000(a1, a2, (unsigned int)a3);
      if ( v10 <= 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v14);
      if ( a5 >= v10 )
        v12 = v10;
      else
        v12 = a5;
      a5 = v12;
    }
    v6 = 4LL * *(_DWORD *)(a1 + 8) * a5 + 15;
    if ( v6 <= 4LL * *(_DWORD *)(a1 + 8) * a5 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(sub_1401F89D0(v6 & 0xFFFFFFFFFFFFFFF0uLL, a2));
    v13 = &i;
    v11 = sub_1401E9360(a1, v16, a3, (unsigned int)&i, a5, a6, 0, 0, 1);
    if ( v11 > 0 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 8) * v11; ++i )
        *(_WORD *)(a4 + 2LL * i) = sub_1401AD3E0();
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v14);
}

