/* Address: 0x140042cd0 | Name: sub_140042CD0 | Size: 963 bytes */
int __fastcall sub_140042CD0(int a1)
{
  __int64 v1; // r13
  int v2; // r12d
  int v3; // r14d
  int v4; // r15d
  __int64 v5; // rdx
  char v6; // cl
  FILE *v7; // rax
  FILE *v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rsi
  int *v12; // r15
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // ebx
  __int64 v16; // rdi
  int v17; // eax
  int v18; // xmm0_4
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v24[4]; // [rsp+20h] [rbp-E0h] BYREF
  int Buffer; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+58h] [rbp-A8h]
  char FileName[512]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = a1;
  v2 = _chdir("data");
  v3 = 0;
  v4 = _chdir("mission");
  v5 = 0;
  do
  {
    v6 = aTestSrm[v5];
    FileName[v5++] = v6;
  }
  while ( v6 );
  v7 = fopen(FileName, "rb");
  v8 = v7;
  if ( v7 )
  {
    fread(&Buffer, 4u, 1u, v7);
    if ( Buffer != 1 )
    {
      LODWORD(v7) = fclose(v8);
      goto LABEL_14;
    }
    fread(dword_163D849E0, 4u, 1u, v8);
    v9 = 0;
    if ( dword_163D849E0[0] > 0 )
    {
      do
      {
        v10 = 16LL * v9;
        fread((char *)&unk_163D849E4 + v10, 4u, 3u, v8);
        fread((char *)&unk_163D849F0 + v10, 4u, 1u, v8);
        ++v9;
      }
      while ( v9 < dword_163D849E0[0] );
      v3 = 0;
    }
    LODWORD(v7) = fclose(v8);
  }
  if ( !v4 )
    LODWORD(v7) = _chdir("..");
  if ( !v2 )
    LODWORD(v7) = _chdir("..");
LABEL_14:
  v11 = 1025 * v1;
  if ( dword_163D849E0[1025 * v1] > 0 )
  {
    v12 = (int *)((char *)&unk_163D849EC + v11 * 4);
    do
    {
      v13 = *(v12 - 1);
      v24[0] = *(v12 - 2);
      v14 = *v12;
      v24[1] = v13;
      v24[2] = v14;
      v26 = xmmword_1400F78B0;
      v28 = 1065353216;
      v27 = xmmword_1400F78B0;
      sub_140049C20(&v26, (char *)&v26 + 12);
      v15 = sub_140042500();
      v16 = 3597LL * v15;
      dword_16D67D624[v16] = 7;
      sub_1400DBB30(&byte_16D67D5A4[v16 * 4], (char *)&byte_1400F34A0);
      *(_DWORD *)((char *)&unk_16D6802B8 + v16 * 4) = 1;
      dword_16D680D4C[v16] = 1;
      dword_16D680D60[v16] = 3;
      dword_16D680D64[v16] = 1;
      v26 = xmmword_1400F78B0;
      v28 = 1065353216;
      v27 = xmmword_1400F78B0;
      v17 = sub_14003A7B0((float *)v24, (float *)&v26, v15);
      v18 = v12[1];
      dword_16D67D63C[v16] = v17;
      *(_DWORD *)((char *)&unk_16D6802C8 + v16 * 4) = v18;
      *((_DWORD *)&unk_190941A60 + 7166 * v17) = v18;
      sub_14003A3D0(v15);
      v19 = sub_14003B080(1, v24, nullptr, (int *)&v26);
      sub_140089E50(v19, 0xFFFFFFFFLL, (unsigned int)dword_16D67D63C[v16], 0);
      v20 = sub_14003B080(2, v24, nullptr, (int *)&v26);
      sub_140089E50(v20, 0xFFFFFFFFLL, (unsigned int)dword_16D67D63C[v16], 1);
      v21 = sub_14003B080(2, v24, nullptr, (int *)&v26);
      sub_140089E50(v21, 0xFFFFFFFFLL, (unsigned int)dword_16D67D63C[v16], 3);
      v22 = sub_14003B080(2, v24, nullptr, (int *)&v26);
      LODWORD(v7) = sub_140089E50(v22, 0xFFFFFFFFLL, (unsigned int)dword_16D67D63C[v16], 3);
      ++v3;
      v12 += 4;
    }
    while ( v3 < dword_163D849E0[v11] );
  }
  return (int)v7;
}

