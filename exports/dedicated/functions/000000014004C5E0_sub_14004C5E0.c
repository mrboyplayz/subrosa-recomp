/* Address: 0x14004c5e0 | Name: sub_14004C5E0 | Size: 331 bytes */
void __fastcall sub_14004C5E0(unsigned int a1)
{
  __int64 v2; // r14
  int v3; // edi
  int *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = 3597LL * (int)a1;
  if ( !*(_DWORD *)((char *)&unk_16D6802B8 + v2 * 4) )
  {
    sub_140095F50(a1);
    sub_1400B2B90(a1, (unsigned int)dword_16D67D62C[v2]);
    if ( a1 <= 0xFF )
      sub_1400B2B90(a1, (unsigned int)dword_16D67D62C[v2]);
    v3 = 0;
    v4 = &dword_1915414A4;
    do
    {
      if ( *v4 == a1 )
      {
        if ( dword_19154118C == 4 )
          sub_1400EC370((unsigned int)v3);
        *v4 = -1;
        v4[5654] = 0;
      }
      ++v3;
      v4 += 5873;
    }
    while ( v3 < 6 );
    v5 = dword_16D67D5DC[v2];
    if ( (_DWORD)v5 != -1 )
    {
      v6 = 112 * v5;
      *(_DWORD *)((char *)&unk_16DDCBA64 + v6) = dword_16D67D5EC[v2];
      *(_DWORD *)((char *)&unk_16DDCBA68 + v6) = dword_16D67D5F8[v2];
      *(_DWORD *)((char *)&unk_16DDCBA6C + v6) = dword_16D67D5FC[v2];
      *(_DWORD *)((char *)&unk_16DDCBA70 + v6) = dword_16D67D638[v2];
    }
  }
  v7 = dword_16D67D63C[v2];
  if ( (_DWORD)v7 != -1 )
  {
    v8 = 7166 * v7;
    if ( dword_1909419D0[7166 * v7] == a1 )
    {
      *(_DWORD *)((char *)&unk_1909419D4 + v8 * 4) = dword_16D67D5DC[v2];
      dword_1909419D0[v8] = -1;
    }
  }
  dword_16D67D5A0[v2] = 0;
  sub_14003A3D0(a1);
}

