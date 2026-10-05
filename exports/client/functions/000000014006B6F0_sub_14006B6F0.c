/* Address: 0x14006b6f0 | Name: sub_14006B6F0 | Size: 316 bytes */
__int64 __fastcall sub_14006B6F0(int a1, int a2)
{
  __int64 v3; // rsi
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int *v10; // rdi
  int i; // ebx
  __int64 result; // rax

  v3 = 278720LL * a1;
  v5 = dword_140404A6C[v3 + 327772];
  if ( a2 > 0 )
  {
    v6 = 278720LL * a1;
    v7 = (unsigned int)a2;
    do
    {
      v8 = v6 + v5;
      v5 = (v5 + 1) & 0x3FFFF;
      dword_140404A6C[v8 + 327773] = 0;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
  v10 = &dword_140404A6C[v3 + 327700];
  for ( i = 0; i < 8; ++i )
  {
    if ( *v10 && (unsigned int)sub_14006B4C0(a1, i, dword_140404A6C[v3 + 327772], a2) )
      v9 = 1;
    v10 += 9;
  }
  dword_140404A6C[v3 + 327772] = (a2 + dword_140404A6C[v3 + 327772]) & 0x3FFFF;
  result = sub_14006A5F0(a1, a2);
  dword_140404A6C[v3 + 589917] = (a2 + dword_140404A6C[v3 + 589917]) & 0x3FFFF;
  if ( !v9 && *(float *)&dword_140404A6C[v3 + 327703] < *(float *)&dword_140404A6C[v3 + 606309] )
    dword_140404A6C[v3 + 327697] = 0;
  if ( dword_140404A6C[v3 + 327698] == 1 )
    dword_140404A6C[v3 + 327697] = 0;
  return result;
}

