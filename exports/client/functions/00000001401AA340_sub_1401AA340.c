/* Address: 0x1401aa340 | Name: sub_1401AA340 | Size: 407 bytes */
__int64 __fastcall sub_1401AA340(__int64 a1, int a2, int a3, int a4)
{
  void *v4; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  int j; // [rsp+24h] [rbp+4h]
  int v8; // [rsp+28h] [rbp+8h]
  int *v9; // [rsp+30h] [rbp+10h]
  char *v10; // [rsp+38h] [rbp+18h]
  __int64 v11; // [rsp+40h] [rbp+20h]

  v8 = a3 * a2;
  v4 = alloca(sub_1401F89D0());
  v9 = &i;
  if ( a4 )
  {
    v10 = (char *)&unk_140282A80 + 4 * a3 - 8;
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        v9[j + a2 * *(_DWORD *)&v10[4 * i]] = *(_DWORD *)(a1 + 4LL * (i + a3 * j));
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        v9[j + a2 * i] = *(_DWORD *)(a1 + 4LL * (i + a3 * j));
    }
  }
  MEMORY[0x1401FC920](a1, v9);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v11);
}

