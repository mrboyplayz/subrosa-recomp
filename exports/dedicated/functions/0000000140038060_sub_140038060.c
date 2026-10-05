/* Address: 0x140038060 | Name: sub_140038060 | Size: 774 bytes */
__int64 __fastcall sub_140038060(int a1, int a2)
{
  int v2; // r9d
  int v3; // ebx
  int v4; // r8d
  _DWORD *v5; // rax
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // rcx
  bool v9; // zf
  int v10; // eax
  _OWORD *v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  char *v18; // r11
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // r10
  __int64 *v23; // rax
  int v24; // r8d
  int v25; // ecx
  int v26; // r10d
  int *v27; // rax
  __int64 v28; // rdx

  v2 = dword_163D75FC0;
  v3 = -1;
  v4 = 0;
  if ( dword_163D75FC0 <= 0 )
    return 4294967294LL;
  v5 = &unk_163D75FD8;
  do
  {
    if ( *(v5 - 4) == a1 && *v5 == a2 )
      v3 = v4;
    ++v4;
    v5 += 14;
  }
  while ( v4 < dword_163D75FC0 );
  if ( v3 == -1 )
    return 4294967294LL;
  v6 = 0;
  v7 = -1;
  if ( dword_16DDCBA24 <= 0 )
    goto LABEL_14;
  v8 = &unk_16DDCBA30;
  do
  {
    v9 = *((_DWORD *)&unk_163D75FC8 + 14 * v3) == *v8;
    v8 += 28;
    v10 = v6;
    if ( !v9 )
      v10 = v7;
    ++v6;
    v7 = v10;
  }
  while ( v6 < dword_16DDCBA24 );
  if ( v10 == -1 )
  {
LABEL_14:
    if ( dword_16DDCBA24 >= 0x7FFF )
      return 0xFFFFFFFFLL;
    v7 = dword_16DDCBA24;
    v12 = (_OWORD *)((char *)&unk_16DDCBA28 + 112 * dword_16DDCBA24);
    *v12 = 0;
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v12[5] = 0;
    v12[6] = 0;
    *((_DWORD *)&unk_16DDCBA64 + 28 * dword_16DDCBA24) = 1000;
    v9 = dword_19154118C == 4;
    *((_DWORD *)&unk_16DDCBA68 + 28 * dword_16DDCBA24) = 1000;
    if ( v9 )
      *((_DWORD *)&unk_16DDCBA64 + 28 * dword_16DDCBA24) = DWORD2(xmmword_1915FBCC0);
    *((_DWORD *)&unk_16DDCBA7C + 28 * dword_16DDCBA24) = rand() % 3;
    *((_DWORD *)&unk_16DDCBA80 + 28 * dword_16DDCBA24) = rand() & 7;
    v13 = rand();
    v2 = dword_163D75FC0;
    *((_DWORD *)&unk_16DDCBA84 + 28 * dword_16DDCBA24++) = v13 & 3;
  }
  v14 = 56LL * v3;
  v15 = 112LL * v7;
  v16 = *(_OWORD *)((char *)&unk_163D75FDC + v14);
  v17 = *(_OWORD *)((char *)&unk_163D75FEC + v14);
  v18 = (char *)&unk_163D75FC8 + v14;
  *(_DWORD *)((char *)&unk_16DDCBA30 + v15) = *(_DWORD *)((char *)&unk_163D75FC8 + v14);
  *(_DWORD *)((char *)&unk_16DDCBA34 + v15) = *(_DWORD *)((char *)&unk_163D75FCC + v14);
  v19 = *(_QWORD *)((char *)&unk_163D75FD0 + v14);
  v20 = 0;
  *(_OWORD *)((char *)&unk_16DDCBA40 + v15) = v16;
  *(_QWORD *)((char *)&unk_16DDCBA38 + v15) = v19;
  *(_OWORD *)((char *)&unk_16DDCBA50 + v15) = v17;
  v21 = dword_16E14BA28;
  if ( dword_16E14BA28 > 0 )
  {
    v22 = v19;
    v23 = &qword_16E14BA30;
    do
    {
      if ( v22 == *v23 )
      {
        *(_DWORD *)((char *)&unk_16DDCBA90 + v15) = 100000000;
        v21 = dword_16E14BA28;
      }
      ++v20;
      ++v23;
    }
    while ( v20 < v21 );
  }
  v24 = dword_16E18BA30;
  v25 = 0;
  if ( dword_16E18BA30 > 0 )
  {
    v26 = *(_DWORD *)((char *)&unk_16DDCBA34 + v15);
    v27 = &dword_16E18BA34;
    do
    {
      if ( v26 == *v27 )
      {
        *(_DWORD *)((char *)&unk_16DDCBA94 + v15) = 1;
        *(_DWORD *)((char *)&unk_16DDCBA90 + v15) = 0;
        v24 = dword_16E18BA30;
      }
      ++v25;
      ++v27;
    }
    while ( v25 < v24 );
  }
  dword_163D75FC0 = v2 - 1;
  v28 = 56LL * (v2 - 1);
  *(_OWORD *)v18 = *(_OWORD *)((char *)&unk_163D75FC8 + v28);
  *((_OWORD *)v18 + 1) = *(_OWORD *)((char *)&unk_163D75FD8 + v28);
  *((_OWORD *)v18 + 2) = *(_OWORD *)((char *)&unk_163D75FE8 + v28);
  *((_QWORD *)v18 + 6) = *(_QWORD *)((char *)&unk_163D75FF8 + v28);
  return (unsigned int)v7;
}

