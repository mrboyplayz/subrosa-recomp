/* Address: 0x14004a3b0 | Name: sub_14004A3B0 | Size: 692 bytes */
__int64 __fastcall sub_14004A3B0(int a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // r11
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // rax
  __int16 v7; // r10
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned int v11; // r12d
  int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rax
  int v20; // ecx
  int v21; // esi
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r9
  int v25; // r8d
  __int16 v27; // [rsp+58h] [rbp+10h]

  v2 = 65548LL * a2;
  v3 = a1;
  if ( *(int *)((char *)&unk_1962BCCE4 + v2) > 0 )
  {
    ++*(_DWORD *)((char *)&unk_1962BCCE0 + v2);
    *(_DWORD *)((char *)&unk_1962BCCE4 + v2) = 0;
  }
  v4 = *(int *)((char *)&unk_1962BCCE0 + v2);
  v5 = v4 + 2;
  if ( (int)v4 + 2 >= 0x10000 )
  {
    v7 = v27;
  }
  else
  {
    v6 = v2 + v4;
    LODWORD(v4) = v4 + 2;
    v7 = *(_WORD *)&byte_1962BCCEC[v6];
    *(_DWORD *)((char *)&unk_1962BCCE0 + v2) = v5;
  }
  v8 = v4 + 1;
  if ( (int)v4 + 1 >= 0x10000 )
  {
    v10 = v27;
  }
  else
  {
    v9 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = byte_1962BCCEC[v2 + v9];
    *(_DWORD *)((char *)&unk_1962BCCE0 + v2) = v8;
  }
  v11 = v10;
  v12 = v4 + 1;
  if ( (int)v4 + 1 < 0x10000 )
  {
    v13 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = byte_1962BCCEC[v2 + v13];
    *(_DWORD *)((char *)&unk_1962BCCE0 + v2) = v12;
  }
  v14 = v10;
  if ( v11 >= 0x10 || v10 > 0x10u )
    return 0;
  LODWORD(v15) = -1;
  v16 = 4195128 * v3;
  v17 = *((_DWORD *)&unk_191625F90 + 1048782 * v3);
  v18 = *((_DWORD *)&unk_191625F94 + 1048782 * v3);
  while ( v17 != v18 )
  {
    if ( *(_WORD *)((char *)&unk_191625F98 + 65548 * v17 + v16) == v7 )
      LODWORD(v15) = v17;
    else
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( (_DWORD)v15 != -1 )
      goto LABEL_22;
  }
  v15 = *(int *)((char *)&unk_191625F94 + v16);
  v19 = v16 + 65548 * v15;
  *(_WORD *)((char *)&unk_191625F98 + v19) = v7;
  *(_QWORD *)((char *)&unk_191625F9C + v19) = 0;
  v20 = *(_DWORD *)((char *)&unk_191625F90 + v16);
  LODWORD(v19) = ((unsigned __int8)*(_DWORD *)((char *)&unk_191625F94 + v16) + 1) & 0x3F;
  *(_DWORD *)((char *)&unk_191625F94 + v16) = v19;
  if ( v20 == (_DWORD)v19 )
    *(_DWORD *)((char *)&unk_191625F90 + v16) = ((_BYTE)v20 + 1) & 0x3F;
LABEL_22:
  v21 = *(_DWORD *)((char *)&unk_1962BCCE8 + v2) - v4;
  v22 = 65548LL * (int)v15;
  memcpy((char *)&unk_191625FA4 + 1400 * v11 + v22 + v16, &byte_1962BCCEC[v2 + (int)v4], v21);
  v23 = 1400 * v11 + v21;
  v24 = v16 + v22;
  v25 = *(_DWORD *)((char *)&unk_191625FA0 + v16 + v22);
  if ( v25 < v23 )
  {
    *(_DWORD *)((char *)&unk_191625FA0 + v24) = v23;
    v25 = 1400 * v11 + v21;
  }
  *(_DWORD *)((char *)&unk_191625F9C + v24) |= 1 << v11;
  if ( (*(_DWORD *)((_BYTE *)&unk_191625F9C + v24) & ((1 << v14) - 1)) != (1 << v14) - 1 )
    return 0;
  *(_DWORD *)((char *)&unk_1962BCCE8 + v2) = v25;
  *(_QWORD *)((char *)&unk_1962BCCE0 + v2) = 4;
  memcpy(&byte_1962BCCEC[v2], (char *)&unk_191625FA4 + v24, v25);
  return *(unsigned int *)((char *)&unk_1962BCCE8 + v2);
}

