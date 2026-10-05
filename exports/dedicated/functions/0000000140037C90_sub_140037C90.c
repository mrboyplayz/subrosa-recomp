/* Address: 0x140037c90 | Name: sub_140037C90 | Size: 963 bytes */
__int64 __fastcall sub_140037C90(int a1)
{
  int v1; // edx
  __int64 v2; // r10
  __int64 v3; // r9
  _DWORD *v4; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  _OWORD *v10; // rcx
  __int64 v11; // r14
  char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ebp
  __int64 v16; // rax
  int v17; // ecx
  int v18; // ebx
  size_t v19; // rsi
  char *v20; // rax
  bool v21; // zf
  __int128 v22; // xmm1
  __int64 v23; // rcx
  char Buffer[32]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  v2 = a1;
  if ( dword_16DDCBA24 > 0 )
  {
    v3 = 14388LL * a1;
    v4 = &unk_16DDCBA28;
    while ( *(_DWORD *)&byte_16D67D5A4[v3 + 32] != *v4 )
    {
      ++v1;
      v4 += 28;
      if ( v1 >= dword_16DDCBA24 )
        goto LABEL_5;
    }
    v6 = 112LL * v1;
    if ( *(_DWORD *)&byte_16D67D5A4[v3 + 36] == *(_DWORD *)((char *)&unk_16DDCBA2C + v6) )
    {
      if ( *(_DWORD *)((char *)&unk_16DDCBA60 + v6) )
      {
        v9 = *(_OWORD *)((char *)&unk_16DDCBA50 + v6);
        *(_OWORD *)&byte_16D67D5A4[v3] = *(_OWORD *)((char *)&unk_16DDCBA40 + v6);
        *(_OWORD *)&byte_16D67D5A4[v3 + 16] = v9;
        return (unsigned int)v1;
      }
      else
      {
        v7 = *(_OWORD *)&byte_16D67D5A4[v3];
        *(_DWORD *)((char *)&unk_16DDCBA60 + v6) = 5;
        v8 = *(_OWORD *)&byte_16D67D5A4[v3 + 16];
        *(_OWORD *)((char *)&unk_16DDCBA40 + v6) = v7;
        *(_OWORD *)((char *)&unk_16DDCBA50 + v6) = v8;
        return (unsigned int)v1;
      }
    }
    return 0xFFFFFFFFLL;
  }
LABEL_5:
  if ( dword_16DDCBA24 >= 0x7FFF )
    return 0xFFFFFFFFLL;
  v10 = (_OWORD *)((char *)&unk_16DDCBA28 + 112 * dword_16DDCBA24);
  v11 = 14388 * v2;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  *((_DWORD *)&unk_16DDCBA28 + 28 * dword_16DDCBA24) = *(_DWORD *)&byte_16D67D5A4[14388 * v2 + 32];
  v12 = &byte_16D67D5A4[14388 * v2];
  *((_DWORD *)&unk_16DDCBA2C + 28 * dword_16DDCBA24) = *(_DWORD *)&byte_16D67D5A4[14388 * v2 + 36];
  v13 = -1;
  do
    ++v13;
  while ( v12[v13] );
  if ( (int)v13 > 24 )
    LODWORD(v13) = 24;
  v14 = (int)v13;
  v15 = 1;
  while ( 1 )
  {
    v16 = -1;
    do
      ++v16;
    while ( v12[v16] );
    if ( (int)v16 > 24 )
      LODWORD(v16) = 24;
    v17 = dword_16DDCBA24;
    v18 = 0;
    if ( dword_16DDCBA24 <= 0 )
      break;
    v19 = (int)v16;
    while ( strncmp(v12, (const char *)&unk_16DDCBA40 + 112 * v18, v19) )
    {
      v17 = dword_16DDCBA24;
      if ( ++v18 >= dword_16DDCBA24 )
        goto LABEL_29;
    }
    byte_16D67D5A4[v11 + v14] = 0;
    sub_1400DBB30(Buffer, "(%d)");
    v20 = v12 - 1;
    do
      v21 = *++v20 == 0;
    while ( !v21 );
    strcpy(v20, Buffer);
    ++v15;
    byte_16D67D5A4[v11 + 31] = 0;
    if ( v15 >= 1000 )
    {
      v17 = dword_16DDCBA24;
      break;
    }
  }
LABEL_29:
  v22 = *((_OWORD *)v12 + 1);
  v23 = 112LL * v17;
  *(_OWORD *)((char *)&unk_16DDCBA40 + v23) = *(_OWORD *)v12;
  *(_OWORD *)((char *)&unk_16DDCBA50 + v23) = v22;
  v21 = dword_19154118C == 4;
  *((_DWORD *)&unk_16DDCBA64 + 28 * dword_16DDCBA24) = 1000;
  if ( v21 )
    *((_DWORD *)&unk_16DDCBA64 + 28 * dword_16DDCBA24) = DWORD2(xmmword_1915FBCC0);
  *((_DWORD *)&unk_16DDCBA7C + 28 * dword_16DDCBA24) = rand() % 3;
  *((_DWORD *)&unk_16DDCBA80 + 28 * dword_16DDCBA24) = rand() & 7;
  *((_DWORD *)&unk_16DDCBA84 + 28 * dword_16DDCBA24++) = rand() & 3;
  return (unsigned int)(dword_16DDCBA24 - 1);
}

