/* Address: 0x14003f280 | Name: sub_14003F280 | Size: 725 bytes */
void __fastcall sub_14003F280(int a1, int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  int v6; // r8d
  unsigned int v7; // r13d
  int v8; // r9d
  int v9; // ebx
  unsigned int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ebx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // eax
  __m128i v20; // xmm0
  int v21; // eax

  v4 = dword_178C5B8E0 + 306000;
  v5 = a2;
  v6 = a1;
  v7 = dword_163D94A44 + 19;
  if ( dword_178C5B8E0 + 306000 > 3870000 )
    v4 = 3870000;
  v8 = dword_163D94A44 + 1;
  if ( dword_163D94A44 + 20 > 24 )
    v8 = 0;
  dword_163D94A44 = v8;
  if ( a1 == 1 )
  {
    sub_1400B9710(v7, v4);
LABEL_14:
    v6 = a1;
    goto LABEL_15;
  }
  if ( !a1 )
  {
    if ( !dword_183A7E074 )
      return;
    v9 = 0;
    v10 = rand() % dword_183A7E074;
    do
    {
      if ( *((_DWORD *)&unk_183A7E0B8 + 14019 * (int)v10) == 4 )
        break;
      ++v9;
      v10 = rand() % dword_183A7E074;
    }
    while ( v9 < 1024 );
    if ( *((_DWORD *)&unk_183A7E0B8 + 14019 * (int)v10) != 4 )
      return;
    sub_1400BAA30(v10, v7, v4);
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
      v16 = (_DWORD *)((char *)&unk_191541A38 + 23492 * v13);
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
      *(_DWORD *)((char *)&unk_1915415E4 + v17) = dword_163D94A40;
      v18 = 1760LL * dword_163D94B4C;
      *(int *)((char *)&dword_1915415EC + v17) = dword_163D94B4C;
      *(_DWORD *)((char *)&unk_1915415DC + v17) = 1;
      *(_DWORD *)((char *)&unk_1915415E8 + v17) = v6;
      *(_DWORD *)((char *)&unk_191541618 + v17) = dword_19025F0D4[v18];
      v19 = 250 * (rand() % 5 + 4);
      *(_DWORD *)((char *)&unk_19154161C + v17) = v19;
      if ( v7 == 23 )
      {
        v19 *= 4;
        *(_DWORD *)((char *)&unk_19154161C + v17) = v19;
      }
      v20 = _mm_cvtsi32_si128(v19);
      v21 = dword_163D94B70;
      *(_DWORD *)((char *)&unk_191541634 + v17) = 0;
      *(_DWORD *)((char *)&unk_191541628 + v17) = 0;
      *(_DWORD *)((char *)&unk_191541620 + v17) = v4;
      *(_DWORD *)((char *)&unk_191541624 + v17) = v21;
      *(float *)((char *)&unk_191541630 + v17) = _mm_cvtepi32_ps(v20).m128_f32[0] * 0.000024999999;
      sub_14003A000(v13, v14);
      v6 = a1;
      ++v12;
    }
    while ( v12 < v11 );
  }
  ++dword_163D94A40;
}

