/* Address: 0x140004600 | Name: sub_140004600 | Size: 627 bytes */
__int64 __fastcall sub_140004600(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // r10d
  char *v8; // rax
  __int64 result; // rax
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // r11
  int v13; // ebx
  int v14; // r9d
  int v15; // r10d
  int *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // edx
  int v24; // edi
  int *v25; // r8
  bool v26; // zf
  int v27; // eax
  int v28; // eax
  int v29; // edx

  v5 = a1;
  v6 = 0;
  v7 = dword_16DC419B0[2 * a2 + a3];
  dword_16DC409A4 = v7;
  dword_16DC409A8 = dword_16DC419B0[2 * a4 + a5];
  if ( dword_16DA009A0 > 0 )
  {
    v8 = (char *)&unk_16DA009D8;
    do
    {
      *(_QWORD *)(v8 - 4) = 0;
      v8 += 72;
      ++v6;
    }
    while ( v6 < dword_16DA009A0 );
    v7 = dword_16DC409A4;
  }
  result = v7;
  v10 = 0;
  dword_16DA009D4[18 * v7] = 1;
  v11 = 0;
  dword_16DC409AC = 0;
  do
  {
    if ( v11 )
      break;
    result = sub_1400B85C0();
    v11 = dword_16DC409AC;
    ++v10;
  }
  while ( v10 < 4096 );
  v12 = 1532 * v5;
  v13 = v11 - 1;
  *(_QWORD *)((char *)&unk_16D4FD604 + v12) = 0;
  dword_16D4FD60C[(unsigned __int64)v12 / 4 + 4] = 0;
  if ( v11 - 1 >= 0 )
  {
    v14 = a5;
    v15 = a5;
    v16 = &dword_16DC409B0[v13];
    do
    {
      v17 = 9LL * *v16;
      v18 = dword_16DA009E0[18 * *v16];
      v19 = dword_16DA009E4[18 * *v16];
      dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD608 + v12) + (unsigned __int64)v12 / 4] = v18;
      dword_16D4FD60C[5 * *(int *)((char *)&unk_16D4FD608 + v12) + 2 + (unsigned __int64)v12 / 4] = v19;
      v20 = *(int *)((char *)&unk_16D4FD608 + v12);
      v21 = 396 * v18;
      result = (unsigned int)(v20 + 1);
      *(_DWORD *)((char *)&unk_16D4FD608 + v12) = result;
      if ( v19 )
        v22 = dword_1839ABF0C[v21];
      else
        v22 = *(_DWORD *)((char *)&unk_1839ABF10 + v21 * 4);
      if ( v13 )
      {
        v23 = 0;
        v24 = dword_16DA009E0[2 * v17];
        v25 = &dword_183989EFC[34 * v22];
        do
        {
          v26 = *v25++ == v24;
          v27 = v23;
          if ( !v26 )
            v27 = v14;
          v14 = v27;
          v28 = v23;
          if ( *(v25 - 1) != dword_16DA009E0[18 * *(v16 - 1)] )
            v28 = v15;
          ++v23;
          v15 = v28;
        }
        while ( v23 < 4 );
        v29 = v14 - v28;
        if ( v14 - v28 >= -1 )
        {
          if ( v29 > 1 )
            v29 -= 4;
        }
        else
        {
          v29 += 4;
        }
        result = v12 + 20 * v20;
        *(_DWORD *)((char *)&dword_16D4FD60C[9] + result) = 0;
        if ( v29 == -1 )
        {
          result = v12 + 20LL * *(int *)((char *)&unk_16D4FD608 + v12);
          *(_DWORD *)((char *)&dword_16D4FD60C[4] + result) = -1;
        }
        else if ( v29 == 1 )
        {
          result = v12 + 20LL * *(int *)((char *)&unk_16D4FD608 + v12);
          *(_DWORD *)((char *)&dword_16D4FD60C[4] + result) = 1;
        }
      }
      --v16;
      --v13;
    }
    while ( v13 >= 0 );
  }
  return result;
}

