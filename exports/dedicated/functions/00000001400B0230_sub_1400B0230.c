/* Address: 0x1400b0230 | Name: sub_1400B0230 | Size: 665 bytes */
void sub_1400B0230()
{
  _DWORD *v0; // rax
  signed int v1; // r12d
  char *v2; // rdi
  float *v3; // rbx
  __int64 v4; // rsi
  float v5; // xmm1_4
  int v6; // edx
  int v7; // r9d
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  int *v13; // rdi
  int i; // r15d
  signed int j; // r14d
  signed int k; // esi
  int m; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int *v21; // rbx
  int v22; // ecx

  v0 = &unk_1909487A4;
  v1 = 0;
  do
  {
    *v0 = 0;
    v0 += 7166;
  }
  while ( (__int64)v0 < (__int64)dword_191047FA4 );
  v2 = (char *)&unk_14024966C;
  v3 = (float *)&unk_14024961C;
  v4 = 0x2000;
  do
  {
    if ( *((_DWORD *)v3 - 7) && !*((_DWORD *)v3 - 5) )
    {
      v5 = v3[3] - 0.0027222224;
      v3[3] = v5;
      *(v3 - 1) = v3[2] + *(v3 - 1);
      *v3 = v5 + *v3;
      v3[1] = v3[4] + v3[1];
      sub_1400B7A70(v2 - 48, v2 - 12, v2, v2 + 36);
    }
    v2 += 188;
    v3 += 47;
    --v4;
  }
  while ( v4 );
  sub_1400A0D50();
  sub_140062C90();
  sub_140073100();
  v6 = dword_16CDE9ED8[0];
  v7 = 0;
  dword_196AC59A0 = 0;
  if ( dword_16CDE9ED8[0] > 0 )
  {
    v8 = dword_16CDE9EDC[0];
    v9 = dword_16CDE9ED4[0];
    do
    {
      v10 = 0;
      if ( v8 > 0 )
      {
        do
        {
          v11 = 0;
          if ( v9 > 0 )
          {
            do
            {
              v12 = v11 + v9 * (v10 + v7 * v8);
              ++v11;
              *(_DWORD *)(qword_196AC5980[0] + 4LL * v12) = -1;
              v9 = dword_16CDE9ED4[0];
              v8 = dword_16CDE9EDC[0];
            }
            while ( v11 < dword_16CDE9ED4[0] );
          }
          ++v10;
        }
        while ( v10 < v8 );
        v6 = dword_16CDE9ED8[0];
      }
      ++v7;
    }
    while ( v7 < v6 );
  }
  dword_196BC59A4 = 0;
  v13 = (int *)&unk_19025F1E8;
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v13 - 74) )
    {
      if ( dword_1901220CC[1268 * *(v13 - 69)] )
      {
        for ( j = *(v13 - 2); j <= v13[1]; ++j )
        {
          for ( k = *(v13 - 1); k <= v13[2]; ++k )
          {
            for ( m = *(v13 - 3); m <= *v13; ++m )
              sub_140028470(0, m, j, k, i | 0x8000);
          }
        }
      }
    }
    v13 += 1760;
  }
  sub_1400AF4F0();
  sub_1400A2CC0();
  sub_1400676C0();
  sub_140077790();
  sub_140075A20();
  sub_140012C80();
  v21 = dword_19025F0DC;
  do
  {
    if ( *(v21 - 7) )
    {
      v22 = *v21;
      if ( *v21 < 0xFFFF )
        *v21 = --v22;
      if ( v22 <= 0 )
        sub_14004BC60(v1, v18, v19, v20);
    }
    ++v1;
    v21 += 1760;
  }
  while ( v1 < 1024 );
  sub_1400A60A0();
  sub_1400AF850();
  sub_140015790();
}

