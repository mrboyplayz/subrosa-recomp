/* Address: 0x140081b60 | Name: sub_140081B60 | Size: 350 bytes */
void __fastcall sub_140081B60(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int128 v5; // xmm0
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = 32901LL * a1;
  if ( !dword_140404A6C[v1 + 299853693] || dword_140404A6C[283831310] == 3 )
  {
    unk_140404050(3553, dword_140404A6C[451221642]);
    v4 = 0;
    dword_140404A6C[456217205] = 2;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
    if ( dword_140404A6C[v1 + 299853693] )
      v5 = xmmword_140279690;
    else
      v5 = xmmword_140279700;
    *(_OWORD *)&dword_140404A6C[456807033] = v5;
    v6 = &dword_140404A6C[308276353];
    do
    {
      sub_14007D420(8 * v4++, v2, v3);
      sub_14007D420(v8, v7, v9);
      v6 += 4;
    }
    while ( v4 < 239 );
    sub_14006E0D0(v10, v2, v3);
  }
}

