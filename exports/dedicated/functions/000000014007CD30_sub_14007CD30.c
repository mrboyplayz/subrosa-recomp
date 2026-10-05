/* Address: 0x14007cd30 | Name: sub_14007CD30 | Size: 1570 bytes */
int sub_14007CD30()
{
  FILE *v0; // rax
  FILE *v1; // rdi
  int v2; // r12d
  int i; // ebx
  int j; // esi
  __int64 v5; // rbx
  int k; // esi
  __int64 v7; // rbx
  int m; // esi
  __int64 v9; // rbx
  int v10; // r13d
  int *v11; // r14
  __int64 v12; // r15
  int v13; // ebp
  __int64 v14; // rsi
  char *v15; // rbx
  int n; // ebp
  __int64 v17; // r14
  __int64 v18; // rsi
  char *v19; // rbx
  __int64 v20; // rsi
  char *v21; // rbx
  int Buffer[4]; // [rsp+20h] [rbp-148h] BYREF
  char FileName[256]; // [rsp+30h] [rbp-138h] BYREF

  sub_1400DBB30(FileName, "data/%s/city2.sbc");
  v0 = fopen(FileName, "wb");
  v1 = v0;
  if ( v0 )
  {
    Buffer[0] = 12;
    fwrite(Buffer, 4u, 1u, v0);
    fwrite(&dword_1838A2B0C, 4u, 1u, v1);
    v2 = 0;
    for ( i = 0; i < dword_1838A2B0C; ++i )
      fwrite((char *)&unk_1838A2B10 + 64 * (__int64)i, 1u, 0x40u, v1);
    fwrite(&dword_17BE3F2F8, 4u, 1u, v1);
    for ( j = 0; j < dword_17BE3F2F8; ++j )
    {
      v5 = 12LL * j;
      fwrite(&algn_17BE3F2FC[v5], 4u, 1u, v1);
      fwrite((char *)&unk_17BE3F300 + v5, 4u, 1u, v1);
      fwrite((char *)&unk_17BE3F304 + v5, 4u, 1u, v1);
    }
    fwrite(&dword_17BE422FC, 4u, 1u, v1);
    for ( k = 0; k < dword_17BE422FC; ++k )
    {
      v7 = 52LL * k;
      fwrite((char *)&unk_17BE42300 + v7, 4u, 1u, v1);
      fwrite((char *)&unk_17BE42304 + v7, 4u, 1u, v1);
      fwrite((char *)&unk_17BE42308 + v7, 4u, 1u, v1);
      fwrite((char *)&unk_17BE4230C + v7, 4u, 1u, v1);
      fwrite((char *)&unk_17BE42310 + v7, 4u, 1u, v1);
      fwrite((char *)&unk_17BE42314 + v7, 1u, 0x20u, v1);
    }
    fwrite(&dword_1838B3B10, 4u, 1u, v1);
    for ( m = 0; m < dword_1838B3B10; ++m )
    {
      v9 = 96LL * m;
      fwrite((char *)&unk_1838B3B18 + v9, 1u, 0x40u, v1);
      fwrite((char *)&unk_1838B3B58 + v9, 4u, 1u, v1);
      fwrite((char *)&unk_1838B3B5C + v9, 4u, 1u, v1);
      fwrite((char *)&unk_1838B3B60 + v9, 4u, 1u, v1);
      fwrite((char *)&unk_1838B3B64 + v9, 4u, 1u, v1);
    }
    fwrite(&dword_17BE4AB04, 4u, 1u, v1);
    v10 = 0;
    if ( dword_17BE4AB04 > 0 )
    {
      v11 = (int *)&unk_17BE4AB4C;
      do
      {
        v12 = 16968LL * v10;
        fwrite((char *)&unk_17BE4AB08 + v12, 1u, 0x40u, v1);
        fwrite((char *)&unk_17BE4AB4C + v12, 4u, 1u, v1);
        v13 = 0;
        if ( *v11 > 0 )
        {
          do
          {
            v14 = 8;
            v15 = (char *)&unk_17BE4AB50 + 528 * v13 + v12;
            do
            {
              fwrite(v15, 1u, 0x40u, v1);
              v15 += 64;
              --v14;
            }
            while ( v14 );
            ++v13;
          }
          while ( v13 < *v11 );
          v2 = 0;
        }
        ++v10;
        v11 += 4242;
      }
      while ( v10 < dword_17BE4AB04 );
    }
    fwrite(&dword_180092B08, 4u, 1u, v1);
    for ( n = 0; n < dword_180092B08; ++n )
    {
      v17 = 14352LL * n;
      fwrite((char *)&unk_180092B0C + v17, 4u, 1u, v1);
      fwrite((char *)&unk_180092B10 + v17, 4u, 1u, v1);
      fwrite((char *)&unk_180092B14 + v17, 4u, 1u, v1);
      fwrite((char *)&unk_180092B18 + v17, 4u, 1u, v1);
      v18 = 512;
      v19 = (char *)&unk_18009531C + v17;
      do
      {
        fwrite(v19, 4u, 1u, v1);
        v19 += 4;
        --v18;
      }
      while ( v18 );
      v20 = 512;
      v21 = (char *)&unk_180095B1C + v17;
      do
      {
        fwrite(v21, 4u, 1u, v1);
        v21 += 4;
        --v20;
      }
      while ( v20 );
    }
    fwrite(&dword_183973B14, 4u, 1u, v1);
    if ( dword_183973B14 > 0 )
    {
      do
      {
        fwrite((char *)&unk_17BE3F2C0 + 8 * v2 + 4 * v2 + 129189976, 4u, 3u, v1);
        ++v2;
      }
      while ( v2 < dword_183973B14 );
    }
    LODWORD(v0) = fclose(v1);
  }
  return (int)v0;
}

