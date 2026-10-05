/* Address: 0x140004880 | Name: sub_140004880 | Size: 640 bytes */
__int64 __fastcall sub_140004880(int a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbp
  int v6; // edx
  unsigned __int64 v7; // rdi
  int v8; // r15d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  bool v15; // cc
  int v16; // edi
  __int64 v17; // rbp
  int v18; // ecx
  __int64 result; // rax

  v1 = 3597LL * a1;
  v2 = 2;
  v3 = v1 * 4 + 32LL * *(int *)((char *)&unk_16D6802D4 + v1 * 4);
  v4 = *(int *)((char *)&unk_16D6802E8 + v3);
  v5 = dword_1839ABF0C[396 * v4 + (*(int *)((char *)&unk_16D6802EC + v3) ^ 1LL)];
  v6 = dword_16D680308[v1 + 501];
  v7 = 136 * v5;
  v8 = v4 == dword_183989F00[34 * v5];
  if ( (_DWORD)v4 == dword_183989F04[34 * v5] )
    v8 = 2;
  if ( (_DWORD)v4 == dword_183989F08[v7 / 4] )
    v8 = 3;
  if ( *(_DWORD *)&algn_183989EE4[v7] == v6 && *(_DWORD *)((char *)&unk_183989EEC + v7) == dword_16D680308[v1 + 502] )
  {
    if ( dword_183989EDC <= 0 )
      v9 = 0;
    else
      v9 = rand() % dword_183989EDC;
    v10 = 136LL * v9;
    v6 = *(_DWORD *)&algn_183989EE4[v10];
    v11 = *(_DWORD *)((char *)&unk_183989EEC + v10);
    dword_16D680308[v1 + 501] = v6;
    dword_16D680308[v1 + 502] = v11;
  }
  v12 = *(_DWORD *)((char *)&unk_183989EEC + v7);
  v13 = dword_16D680308[v1 + 502];
  v14 = *(_DWORD *)&algn_183989EE4[v7];
  if ( v12 == v13 )
  {
    if ( v14 < v6 )
      v2 = 0;
  }
  else
  {
    v15 = v14 <= dword_18398A104;
    if ( v14 < dword_18398A104 )
    {
      if ( v8 )
      {
        v2 = 0;
        goto LABEL_23;
      }
      v15 = v14 <= dword_18398A104;
    }
    if ( v15 || v8 == 2 )
    {
      v2 = 3;
      if ( v12 < v13 )
        v2 = 1;
    }
  }
LABEL_23:
  v16 = 0;
  v17 = 34 * v5;
  do
  {
    v18 = dword_183989EFC[v17 + v2];
    if ( v18 != (_DWORD)v4 && v18 != -1 )
      break;
    ++v16;
    v2 = rand() & 3;
  }
  while ( v16 < 512 );
  dword_16D680308[8 * *(int *)((char *)&unk_16D6802D4 + v1 * 4) + v1] = dword_183989EFC[v17 + v2];
  dword_16D680308[8 * *(int *)((char *)&unk_16D6802D4 + v1 * 4) + 1 + v1] = v2 >= 2;
  dword_16D680308[8 * *(int *)((char *)&unk_16D6802D4 + v1 * 4) + 3 + v1] = rand() & 1;
  dword_16D680308[8 * *(int *)((char *)&unk_16D6802D4 + v1 * 4) + 4 + v1] = 0;
  if ( v2 == (((_BYTE)v8 + 1) & 3) )
    dword_16D680308[8 * *(int *)((char *)&unk_16D6802D4 + v1 * 4) + 4 + v1] = -1;
  result = ((_BYTE)v8 - 1) & 3;
  if ( v2 == (_DWORD)result )
  {
    result = v1 * 4 + 32LL * *(int *)((char *)&unk_16D6802D4 + v1 * 4);
    *(_DWORD *)((char *)&dword_16D680308[4] + result) = 1;
  }
  return result;
}

