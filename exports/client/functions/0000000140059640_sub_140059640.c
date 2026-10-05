/* Address: 0x140059640 | Name: sub_140059640 | Size: 724 bytes */
void __fastcall sub_140059640(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // r8d
  int v7; // r13d
  unsigned int v8; // r9d
  int v9; // ebx
  signed int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  __m128i v20; // xmm0
  unsigned int v21; // eax

  v4 = dword_140404A6C[179992853] + 306000;
  v5 = a2;
  v6 = a1;
  v7 = dword_140404A6C[487148678] + 19;
  if ( (signed int)(dword_140404A6C[179992853] + 306000) > 3870000 )
    v4 = 3870000;
  v8 = dword_140404A6C[487148678] + 1;
  if ( (signed int)(dword_140404A6C[487148678] + 20) > 24 )
    v8 = 0;
  dword_140404A6C[487148678] = v8;
  if ( a1 == 1 )
  {
    sub_14012D310(v7, v4);
LABEL_14:
    v6 = a1;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    if ( !dword_140404A6C[225641186] )
      return;
    v9 = 0;
    v10 = rand() % (signed int)dword_140404A6C[225641186];
    do
    {
      if ( dword_140404A6C[14019 * v10 + 225641203] == 4 )
        break;
      ++v9;
      v10 = rand() % (signed int)dword_140404A6C[225641186];
    }
    while ( v9 < 1024 );
    if ( dword_140404A6C[14019 * v10 + 225641203] != 4 )
      return;
    sub_14012E620(v10, v7);
    goto LABEL_14;
  }
LABEL_15:
  v11 = v5;
  if ( (int)v5 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = *(int *)(a3 + 4 * v12);
      v14 = 0;
      v15 = 0;
      v16 = &dword_140404A6C[5873 * v13 + 283831867];
      while ( *(v16 - 279) )
      {
        if ( !*v16 )
        {
          ++v15;
          ++v14;
          break;
        }
        if ( !v16[279] )
        {
          v15 += 2;
          v14 += 2;
          break;
        }
        if ( !v16[558] )
        {
          v15 += 3;
          v14 += 3;
          break;
        }
        v15 += 4;
        v16 += 1116;
        v14 += 4;
        if ( v15 >= 16 )
          break;
      }
      v17 = 1116 * v15 + 23492LL * *(int *)(a3 + 4 * v12);
      *(unsigned int *)((char *)&dword_140404A6C[283831590] + v17) = dword_140404A6C[487148677];
      v18 = 1760LL * (int)dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831592] + v17) = dword_140404A6C[487148744];
      *(unsigned int *)((char *)&dword_140404A6C[283831588] + v17) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[283831591] + v17) = v6;
      *(unsigned int *)((char *)&dword_140404A6C[283831603] + v17) = dword_140404A6C[v18 + 278845898];
      v19 = 250 * (rand() % 5 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      if ( v7 == 23 )
      {
        v19 *= 4;
        *(unsigned int *)((char *)&dword_140404A6C[283831604] + v17) = v19;
      }
      v20 = _mm_cvtsi32_si128(v19);
      v21 = dword_140404A6C[487148753];
      *(unsigned int *)((char *)&dword_140404A6C[283831610] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831607] + v17) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[283831605] + v17) = v4;
      *(unsigned int *)((char *)&dword_140404A6C[283831606] + v17) = v21;
      *(float *)((char *)&dword_140404A6C[283831609] + v17) = _mm_cvtepi32_ps(v20).m128_f32[0] * 0.000024999999;
      sub_1400519F0(v13, v14);
      v6 = a1;
      ++v12;
    }
    while ( v12 < v11 );
  }
  ++dword_140404A6C[487148677];
}

