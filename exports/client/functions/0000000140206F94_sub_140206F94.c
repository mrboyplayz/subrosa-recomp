/* Address: 0x140206f94 | Name: sub_140206F94 | Size: 346 bytes */
_OWORD *__fastcall sub_140206F94(_OWORD *a1, int *a2, int a3)
{
  __int128 v5; // xmm6
  int v7; // esi
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int128 v21; // [rsp+20h] [rbp-40h]
  __int128 v22; // [rsp+30h] [rbp-30h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&v21 = a2;
  *(_QWORD *)&v22 = a2;
  DWORD2(v21) = 0;
  v5 = v21;
  v23 = v21;
  v7 = 0;
  MEMORY[0x140207378](a2, &v23);
  v8 = *a2;
  v9 = 0;
  if ( *a2 )
  {
    do
    {
      v10 = *((_QWORD *)a2 + 3);
      if ( a3 >= (int)v10 && a3 <= SHIDWORD(v10) )
      {
        v7 = v9;
        DWORD2(v21) = 0;
      }
      v11 = *((_BYTE **)a2 + 1);
      ++v9;
      v12 = *v11 & 0xF;
      v13 = &v11[-byte_140284A40[v12]];
      v14 = *((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16];
      *((_QWORD *)a2 + 1) = v13;
      a2[6] = v14;
      v15 = *v13 & 0xF;
      v16 = &v13[-byte_140284A40[v15]];
      v17 = *((_DWORD *)v16 - 1) >> byte_140284A40[v15 + 16];
      *((_QWORD *)a2 + 1) = v16;
      a2[7] = v17;
      v18 = *v16 & 0xF;
      v19 = &v16[-byte_140284A40[v18]];
      a2[8] = *(v19 - 1) >> byte_140284A40[v18 + 16];
      *((_QWORD *)a2 + 1) = v19;
      LODWORD(v18) = *v19;
      *((_QWORD *)a2 + 1) = v19 + 1;
      a2[9] = v18;
    }
    while ( v9 != v8 );
    v5 = v21;
  }
  v23 = v5;
  DWORD2(v22) = v7 + 1;
  MEMORY[0x140207378](a2, &v23);
  *a1 = v5;
  a1[1] = v22;
  return a1;
}

